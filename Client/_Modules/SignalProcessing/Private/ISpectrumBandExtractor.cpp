// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// ~ISpectrumBandExtractor @ 1444f4a90

void __thiscall Audio::ISpectrumBandExtractor::~ISpectrumBandExtractor(ISpectrumBandExtractor *this)

{
  *this = (ISpectrumBandExtractor)&___7ISpectrumBandExtractor_Audio__6B_;
  return;
}

// CreateSpectrumBandExtractor @ 1444f9bc0

TUniquePtr<Audio::ISpectrumBandExtractor,TDefaultDelete<Audio::ISpectrumBandExtractor>_> __cdecl
Audio::ISpectrumBandExtractor::CreateSpectrumBandExtractor(FSpectrumBandExtractorSettings *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 *in_RDX;
  float fVar5;
  
  puVar4 = ::operator_new(0x98);
  fVar3 = __real_3f666666;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7FSpectrumBandExtractor_Audio__6B_;
    uVar1 = *in_RDX;
    uVar2 = in_RDX[1];
    *(undefined8 **)param_1 = puVar4;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(in_RDX + 2);
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x473b8000;
    *(undefined4 *)(puVar4 + 4) = 0x400;
    *(undefined2 *)((longlong)puVar4 + 0x24) = 0;
    puVar4[7] = 0;
    puVar4[9] = 0;
    puVar4[0xb] = 0;
    puVar4[0xd] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    *(undefined1 *)(puVar4 + 0x12) = 0;
    puVar4[6] = 0;
    puVar4[8] = 0;
    puVar4[10] = 0;
    puVar4[0xc] = 0;
    puVar4[0xe] = 0;
    fVar5 = *(float *)(puVar4 + 3);
    if (*(float *)(puVar4 + 3) <= __real_3a83126f) {
      fVar5 = __real_3a83126f;
    }
    puVar4[5] = 0;
    *(float *)(puVar4 + 0x11) = fVar3 / fVar5;
    fVar5 = *(float *)((longlong)puVar4 + 0x14);
    if (*(float *)((longlong)puVar4 + 0x14) <= __real_3a83126f) {
      fVar5 = __real_3a83126f;
    }
    *(float *)((longlong)puVar4 + 0x8c) = fVar3 / fVar5;
    return (TUniquePtr<Audio::ISpectrumBandExtractor,TDefaultDelete<Audio::ISpectrumBandExtractor>_>
           )(ISpectrumBandExtractor *)param_1;
  }
  param_1->Metric = Magnitude;
  *(undefined3 *)&param_1->field_0x1 = 0;
  param_1->DecibelNoiseFloor = 0.0;
  return (TUniquePtr<Audio::ISpectrumBandExtractor,TDefaultDelete<Audio::ISpectrumBandExtractor>_>)
         (ISpectrumBandExtractor *)param_1;
}

