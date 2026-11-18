// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// ~FScopeContext @ 145beab40

void __thiscall FScopeContext::~FScopeContext(FScopeContext *this)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  
  if (this->bSameDCAndContext == false) {
    if ((HGLRC)this->PrevContext == (HGLRC)0x0) {
      BVar3 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      if (BVar3 == 0) {
        BVar3 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
        if (BVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                             ,0x18,L"");
          if (bVar2) goto code_r0x000145beabda;
        }
      }
    }
    else {
      BVar3 = wglMakeCurrent((HDC)this->PrevDC,(HGLRC)this->PrevContext);
      if (BVar3 == 0) {
        BVar3 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
        if (BVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                             ,0x18,L"");
          if (!bVar2) {
            return;
          }
code_r0x000145beabda:
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

