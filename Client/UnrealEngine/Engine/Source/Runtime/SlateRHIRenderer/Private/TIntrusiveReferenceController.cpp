// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 3

// DestroyObject @ 145fff810

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateTextureData,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateTextureData,1> *this)

{
  FSlateTextureData::~FSlateTextureData((FSlateTextureData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 145fff820

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlatePostBufferBlurProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FSlatePostBufferBlurProxy,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FRenderCommandFence::~FRenderCommandFence
            ((FRenderCommandFence *)((this->ObjectStorage).Pad + 0x28));
  *(undefined ***)(this->ObjectStorage).Pad = &___7FSlateRHIPostBufferProcessorProxy__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145fff862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 145fff880

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateRHITextureAtlasFactory,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateRHITextureAtlasFactory,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateTextureAtlasFactory__6B_;
  return;
}

