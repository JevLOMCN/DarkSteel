// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// ~FOpenGLSamplerState @ 145be9c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLSamplerState::~FOpenGLSamplerState(FOpenGLSamplerState *this)

{
  HGLRC pHVar1;
  
  this->_padding_ = (longlong)&___7FOpenGLSamplerState__6B_;
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  (*glDeleteSamplers)(1,&this->Resource);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

