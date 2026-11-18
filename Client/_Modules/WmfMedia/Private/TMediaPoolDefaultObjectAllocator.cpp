// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 3

// Alloc @ 14ea9f390

FWmfMediaAudioSample * __cdecl TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>::Alloc(void)

{
  FWmfMediaAudioSample *pFVar1;
  
  pFVar1 = ::operator_new(0x48);
  if (pFVar1 != (FWmfMediaAudioSample *)0x0) {
    pFVar1->_padding_ = (longlong)&FWmfMediaAudioSample::_vftable__for__IMediaAudioSample__;
    pFVar1->_padding_ = (longlong)&FWmfMediaAudioSample::_vftable__for__IMediaPoolable__;
    (pFVar1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Buffer).ArrayNum = 0;
    (pFVar1->Buffer).ArrayMax = 0;
    pFVar1->Channels = 0;
    (pFVar1->Duration).Ticks = 0;
    pFVar1->SampleRate = 0;
    (pFVar1->Time).Time.Ticks = 0;
    (pFVar1->Time).SequenceIndex = 0;
    (pFVar1->Time).LoopIndex = 0;
    return pFVar1;
  }
  return (FWmfMediaAudioSample *)0x0;
}

// Alloc @ 14ea9f3f0

FWmfMediaHardwareVideoDecodingTextureSample * __cdecl
TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>::Alloc(void)

{
  FWmfMediaHardwareVideoDecodingTextureSample *pFVar1;
  
  pFVar1 = ::operator_new(0x90);
  if (pFVar1 != (FWmfMediaHardwareVideoDecodingTextureSample *)0x0) {
    pFVar1->_padding_ = (longlong)&FWmfMediaTextureSample::_vftable__for__IMediaTextureSample__;
    pFVar1->_padding_ = (longlong)&FWmfMediaTextureSample::_vftable__for__IMediaPoolable__;
    pFVar1->_padding_ = (longlong)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined1 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ =
         (longlong)
         &FWmfMediaHardwareVideoDecodingTextureSample::_vftable__for__IMediaTextureSample__;
    pFVar1->_padding_ =
         (longlong)&FWmfMediaHardwareVideoDecodingTextureSample::_vftable__for__IMediaPoolable__;
    pFVar1->_padding_ = (longlong)&___7FWmfMediaHardwareVideoDecodingTextureSample__6B_;
    (pFVar1->SourceTexture).RawPointer = (ID3D11Texture2D *)0x0;
    (pFVar1->D3D11Device).Reference = (ID3D11Device *)0x0;
    (pFVar1->DestinationTexture).Reference = (FRHITexture *)0x0;
    (pFVar1->DestinationAlphaTexture).Reference = (FRHITexture *)0x0;
    pFVar1->Format = PF_Unknown;
    pFVar1->AlphaFormat = PF_Unknown;
    pFVar1->bIsDestinationTextureSRGB = false;
    return pFVar1;
  }
  return (FWmfMediaHardwareVideoDecodingTextureSample *)0x0;
}

// Alloc @ 14ea9f4b0

FWmfMediaTextureSample * __cdecl
TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>::Alloc(void)

{
  FWmfMediaTextureSample *pFVar1;
  
  pFVar1 = ::operator_new(0x60);
  if (pFVar1 != (FWmfMediaTextureSample *)0x0) {
    pFVar1->_padding_ = (longlong)&FWmfMediaTextureSample::_vftable__for__IMediaTextureSample__;
    pFVar1->_padding_ = (longlong)&FWmfMediaTextureSample::_vftable__for__IMediaPoolable__;
    (pFVar1->Dim).field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    (pFVar1->Duration).Ticks = 0;
    (pFVar1->OutputDim).field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    pFVar1->SampleFormat = Undefined;
    (pFVar1->Time).Time.Ticks = 0;
    (pFVar1->Time).SequenceIndex = 0;
    (pFVar1->Time).LoopIndex = 0;
    pFVar1->bIsBufferExternal = false;
    (pFVar1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Buffer).ArrayNum = 0;
    (pFVar1->Buffer).ArrayMax = 0;
    pFVar1->Stride = 0;
    return pFVar1;
  }
  return (FWmfMediaTextureSample *)0x0;
}

