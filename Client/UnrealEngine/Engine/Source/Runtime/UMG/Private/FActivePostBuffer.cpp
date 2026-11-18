// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// FActivePostBuffer @ 146a55680

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FActivePostBuffer * __thiscall
`FPostBufferUpdater::Draw_RenderThread'::__l2::FActivePostBuffer::FActivePostBuffer(void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// ~FActivePostBuffer @ 146a58120

void __thiscall
`FPostBufferUpdater::Draw_RenderThread'::__l2::FActivePostBuffer::~FActivePostBuffer(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

