// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// TInlineArray<FRDGBuffer_*,4> @ 144c1d6a0

TInlineArray<FRDGBuffer_*,4> * __thiscall
LumenRadianceCache::TInlineArray<FRDGBuffer_*,4>::TInlineArray<FRDGBuffer_*,4>
          (TInlineArray<FRDGBuffer_*,4> *this,int param_1)

{
  int iVar1;
  TInlineArray<FRDGBuffer_*,4> *pTVar2;
  
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 4;
  iVar1 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGBuffer_*>_>
                    (8,8,param_1,(ForElementType<FRDGBuffer_*> *)this,(int *)&this->field_0x28,
                     (int *)&this->field_0x2c);
  pTVar2 = this;
  if (*(TInlineArray<FRDGBuffer_*,4> **)&this->field_0x20 != (TInlineArray<FRDGBuffer_*,4> *)0x0) {
    pTVar2 = *(TInlineArray<FRDGBuffer_*,4> **)&this->field_0x20;
  }
  memset(&pTVar2->field_0x0 + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return this;
}

// TInlineArray<FRDGTexture_*,4> @ 144c1d720

TInlineArray<FRDGTexture_*,4> * __thiscall
LumenRadianceCache::TInlineArray<FRDGTexture_*,4>::TInlineArray<FRDGTexture_*,4>
          (TInlineArray<FRDGTexture_*,4> *this,int param_1)

{
  int iVar1;
  TInlineArray<FRDGTexture_*,4> *pTVar2;
  
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 4;
  iVar1 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                    (8,8,param_1,(ForElementType<FRDGTexture_*> *)this,(int *)&this->field_0x28,
                     (int *)&this->field_0x2c);
  pTVar2 = this;
  if (*(TInlineArray<FRDGTexture_*,4> **)&this->field_0x20 != (TInlineArray<FRDGTexture_*,4> *)0x0)
  {
    pTVar2 = *(TInlineArray<FRDGTexture_*,4> **)&this->field_0x20;
  }
  memset(&pTVar2->field_0x0 + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return this;
}

// TInlineArray<LumenRadianceCache::FRadianceCacheSetup,4> @ 144c1d7a0

TInlineArray<LumenRadianceCache::FRadianceCacheSetup,4> * __thiscall
LumenRadianceCache::TInlineArray<LumenRadianceCache::FRadianceCacheSetup,4>::
TInlineArray<LumenRadianceCache::FRadianceCacheSetup,4>
          (TInlineArray<LumenRadianceCache::FRadianceCacheSetup,4> *this,int param_1)

{
  int iVar1;
  TInlineArray<LumenRadianceCache::FRadianceCacheSetup,4> *pTVar2;
  
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined4 *)&this->field_0x148 = 0;
  *(undefined4 *)&this->field_0x14c = 4;
  iVar1 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<LumenRadianceCache::FRadianceCacheSetup>_>
                    (0x50,8,param_1,(ForElementType<LumenRadianceCache::FRadianceCacheSetup> *)this,
                     (int *)&this->field_0x148,(int *)&this->field_0x14c);
  pTVar2 = this;
  if (*(TInlineArray<LumenRadianceCache::FRadianceCacheSetup,4> **)&this->field_0x140 !=
      (TInlineArray<LumenRadianceCache::FRadianceCacheSetup,4> *)0x0) {
    pTVar2 = *(TInlineArray<LumenRadianceCache::FRadianceCacheSetup,4> **)&this->field_0x140;
  }
  memset(&pTVar2->field_0x0 + (longlong)iVar1 * 0x50,0,(longlong)param_1 * 0x50);
  return this;
}

