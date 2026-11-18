// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// LoadSynchronous @ 14d7b1dc0

UTextureRenderTarget2D * __thiscall
TSoftObjectPtr<UTextureRenderTarget2D>::LoadSynchronous
          (TSoftObjectPtr<UTextureRenderTarget2D> *this)

{
  int iVar1;
  UTextureRenderTarget2D *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UTextureRenderTarget2D *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UTextureRenderTarget2D *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UTextureRenderTarget2D *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UTextureRenderTarget2D *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UTextureRenderTarget2D *)0x0) {
    pUVar3 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTextureRenderTarget2D *)0x0;
}

