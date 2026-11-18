// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// operator= @ 14a978c70

FExtendedImageDesc * __thiscall
UE::Mutable::Private::FExtendedImageDesc::operator=
          (FExtendedImageDesc *this,FExtendedImageDesc *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->ConstantImagesNeededToGenerate;
  *(undefined4 *)this = *(undefined4 *)param_1;
  pTVar2 = &this->ConstantImagesNeededToGenerate;
  *(undefined2 *)&this->field_0x4 = *(undefined2 *)&param_1->field_0x4;
  this->FirstLODAvailable = param_1->FirstLODAvailable;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ConstantImagesNeededToGenerate).ArrayNum =
         (param_1->ConstantImagesNeededToGenerate).ArrayNum;
    (this->ConstantImagesNeededToGenerate).ArrayMax =
         (param_1->ConstantImagesNeededToGenerate).ArrayMax;
    (param_1->ConstantImagesNeededToGenerate).ArrayNum = 0;
    (param_1->ConstantImagesNeededToGenerate).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14a978cf0

FExtendedImageDesc * __thiscall
UE::Mutable::Private::FExtendedImageDesc::operator=
          (FExtendedImageDesc *this,FExtendedImageDesc *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined2 *)&this->field_0x4 = *(undefined2 *)&param_1->field_0x4;
  this->FirstLODAvailable = param_1->FirstLODAvailable;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ConstantImagesNeededToGenerate,&param_1->ConstantImagesNeededToGenerate);
  return this;
}

