// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMoviePlayer
// Functions: 8

// ~IMovieStreamer @ 14f125210

void __thiscall IMovieStreamer::~IMovieStreamer(IMovieStreamer *this)

{
  *this = (IMovieStreamer)&___7IMovieStreamer__6B_;
  return;
}

// GetTexture @ 14f126000

TRefCountPtr<FRHITexture> __thiscall IMovieStreamer::GetTexture(IMovieStreamer *this)

{
  FRHITexture *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// PreviousViewportInterface @ 14f126420

void __thiscall
IMovieStreamer::PreviousViewportInterface
          (IMovieStreamer *this,TSharedPtr<ISlateViewport,1> *param_1)

{
  return;
}

// Resume @ 14f126810

void __thiscall IMovieStreamer::Resume(IMovieStreamer *this)

{
  return;
}

// Suspend @ 14f126f10

void __thiscall IMovieStreamer::Suspend(IMovieStreamer *this)

{
  return;
}

// TickPostEngine @ 14f1271a0

void __thiscall IMovieStreamer::TickPostEngine(IMovieStreamer *this)

{
  return;
}

// TickPostRender @ 14f1271b0

void __thiscall IMovieStreamer::TickPostRender(IMovieStreamer *this)

{
  return;
}

// TickPreEngine @ 14f1271c0

void __thiscall IMovieStreamer::TickPreEngine(IMovieStreamer *this)

{
  return;
}

