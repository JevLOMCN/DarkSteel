// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// IsValid @ 14481d050

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FDBufferTextures::IsValid(FDBufferTextures *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->DBufferA != (FRDGTexture *)0x0) &&
     ((((this->DBufferB == (FRDGTexture *)0x0 || (this->DBufferC == (FRDGTexture *)0x0)) &&
       (this->DBufferATexArray != (FRDGTexture *)0x0)) &&
      ((this->DBufferBTexArray == (FRDGTexture *)0x0 ||
       (this->DBufferCTexArray == (FRDGTexture *)0x0)))))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(!DBufferA || (DBufferB && DBufferC)) || (!DBufferATexArray || (DBufferBTexArray && DBufferCTexArray))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DBufferTextures.cpp"
                       ,0xe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (((this->DBufferA == (FRDGTexture *)0x0) || ((this->DBufferA->_padding_ & 0x400) == 0)) &&
     ((this->DBufferATexArray == (FRDGTexture *)0x0 ||
      ((this->DBufferATexArray->_padding_ & 0x400) == 0)))) {
    return false;
  }
  return true;
}

