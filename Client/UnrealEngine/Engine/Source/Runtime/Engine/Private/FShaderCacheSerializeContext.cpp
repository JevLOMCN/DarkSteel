// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// MoveCode @ 148534660

void __thiscall
FShaderCacheSerializeContext::MoveCode
          (FShaderCacheSerializeContext *this,
          TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uStack_1c;
  
  pTVar1 = &this->OwnedShaderCode;
  if (param_1 != pTVar1) {
    DestructItems<FCompositeBuffer,int>
              ((FCompositeBuffer *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (param_1->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = (this->OwnedShaderCode).ArrayNum;
    param_1->ArrayMax = (this->OwnedShaderCode).ArrayMax;
    (this->OwnedShaderCode).ArrayNum = 0;
    (this->OwnedShaderCode).ArrayMax = 0;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar2 = &this->OwnedShaderSymbols;
  (this->ShaderCode).DataPtr = (FCompositeBuffer *)pFVar4;
  *(ulonglong *)&(this->ShaderCode).ArrayNum = CONCAT44(uStack_1c,iVar3);
  if (param_2 != pTVar2) {
    DestructItems<FCompressedBuffer,int>
              ((FCompressedBuffer *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (param_2->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_2->ArrayNum = (this->OwnedShaderSymbols).ArrayNum;
    param_2->ArrayMax = (this->OwnedShaderSymbols).ArrayMax;
    (this->OwnedShaderSymbols).ArrayNum = 0;
    (this->OwnedShaderSymbols).ArrayMax = 0;
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->ShaderSymbols).DataPtr = (FCompressedBuffer *)pFVar4;
  *(ulonglong *)&(this->ShaderSymbols).ArrayNum = CONCAT44(uStack_1c,iVar3);
  if ((this->ShaderCode).ArrayNum != (this->ShaderSymbols).ArrayNum) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num() == ShaderSymbols.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderSerialization.h"
                       ,0x81,
                       L"It is required to serialize a (possibly empty, but non-null) symbols buffer for every code buffer."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

