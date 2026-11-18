// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 1

// Create @ 14f06e6c0

BinauralSurroundRenderer * __cdecl
vraudio::BinauralSurroundRenderer::Create(ulong64 param_1,int param_2,SurroundFormat param_3)

{
  bool bVar1;
  BinauralSurroundRendererImpl *pBVar2;
  BinauralSurroundRendererImpl *this;
  BinauralSurroundRendererImpl *pBVar3;
  
  pBVar2 = ::operator_new(0xd0);
  if (pBVar2 == (BinauralSurroundRendererImpl *)0x0) {
    BinauralSurroundRendererImpl::Init((BinauralSurroundRendererImpl *)0x0,param_3);
    return (BinauralSurroundRenderer *)0x0;
  }
  this = BinauralSurroundRendererImpl::BinauralSurroundRendererImpl(pBVar2,param_1,param_2);
  bVar1 = BinauralSurroundRendererImpl::Init(this,param_3);
  pBVar3 = this;
  pBVar2 = (BinauralSurroundRendererImpl *)0x0;
  if (bVar1) {
    pBVar3 = (BinauralSurroundRendererImpl *)0x0;
    pBVar2 = this;
  }
  if (pBVar3 != (BinauralSurroundRendererImpl *)0x0) {
    (**(code **)pBVar3->_padding_)(pBVar3,1);
  }
  return (BinauralSurroundRenderer *)pBVar2;
}

