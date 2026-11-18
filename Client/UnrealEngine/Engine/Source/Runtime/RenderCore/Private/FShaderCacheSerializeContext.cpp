// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FShaderCacheSerializeContext @ 145e814f0

FShaderCacheSerializeContext * __thiscall
FShaderCacheSerializeContext::FShaderCacheSerializeContext(FShaderCacheSerializeContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FShaderCacheSerializeContext *pFVar4;
  uint uStack_c;
  
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FShaderCacheSerializeContext__6B_;
  (this->ShaderObjectData).Owner.Owner = (FBufferOwner *)0x0;
  (this->ShaderSymbols).DataPtr = (FCompressedBuffer *)0x0;
  (this->ShaderSymbols).ArrayNum = 0;
  (this->OwnedShaderCode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnedShaderCode).ArrayNum = 0;
  (this->OwnedShaderCode).ArrayMax = 0;
  (this->OwnedShaderSymbols).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnedShaderSymbols).ArrayNum = 0;
  (this->OwnedShaderSymbols).ArrayMax = 0;
  (this->ShaderCode).DataPtr = (FCompositeBuffer *)0x0;
  *(ulonglong *)&(this->ShaderCode).ArrayNum = (ulonglong)uStack_c << 0x20;
  iVar1 = (this->OwnedShaderSymbols).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FShaderCacheSerializeContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->ShaderSymbols).DataPtr = (FCompressedBuffer *)0x0;
  *(ulonglong *)&(this->ShaderSymbols).ArrayNum = CONCAT44(uStack_c,iVar1);
  if ((this->ShaderCode).ArrayNum != (this->ShaderSymbols).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num() == ShaderSymbols.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderSerialization.h"
                       ,0x48,
                       L"It is required to serialize a (possibly empty, but non-null) symbols buffer for every code buffer."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FShaderCacheSerializeContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// ~FShaderCacheSerializeContext @ 145e848d0

void __thiscall
FShaderCacheSerializeContext::~FShaderCacheSerializeContext(FShaderCacheSerializeContext *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FCompressedBuffer,int>
            ((FCompressedBuffer *)(this->OwnedShaderSymbols).AllocatorInstance.Data,
             (this->OwnedShaderSymbols).ArrayNum);
  pFVar1 = (this->OwnedShaderSymbols).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCompositeBuffer,int>
            ((FCompositeBuffer *)(this->OwnedShaderCode).AllocatorInstance.Data,
             (this->OwnedShaderCode).ArrayNum);
  pFVar1 = (this->OwnedShaderCode).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&(this->ShaderObjectData).Owner);
  return;
}

// EnableCustomCodeSerialize @ 145e96220

bool __thiscall
FShaderCacheSerializeContext::EnableCustomCodeSerialize(FShaderCacheSerializeContext *this)

{
  return true;
}

