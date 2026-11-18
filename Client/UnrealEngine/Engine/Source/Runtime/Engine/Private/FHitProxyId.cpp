// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FHitProxyId @ 147cc4170

FHitProxyId * __thiscall FHitProxyId::FHitProxyId(FHitProxyId *this,FColor param_1)

{
  this->Index = ((((uint)param_1.field0_0x0 >> 0x18) << 8 | (uint)param_1.field0_0x0 >> 0x10 & 0xff)
                 << 8 | (uint)param_1.field0_0x0 >> 8 & 0xff) << 8 | (uint)param_1.field0_0x0 & 0xff
  ;
  return this;
}

// GetColor @ 147cfb710

FColor __thiscall FHitProxyId::GetColor(FHitProxyId *this)

{
  int iVar1;
  undefined1 *in_RDX;
  
  iVar1 = this->Index;
  *in_RDX = (char)this->Index;
  in_RDX[1] = (char)((uint)iVar1 >> 8);
  in_RDX[2] = (char)((uint)iVar1 >> 0x10);
  in_RDX[3] = (char)((uint)iVar1 >> 0x18);
  return (FColor)SUB84(in_RDX,0);
}

