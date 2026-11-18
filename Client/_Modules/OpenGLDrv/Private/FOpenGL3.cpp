// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// ProcessExtensions @ 145c164e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FOpenGL3::ProcessExtensions(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uchar *_Str;
  size_t sVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_1d8 [32];
  uint local_188;
  uint local_184;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  _Str = (*glGetString)(0x1f02);
  local_138._padding_ = 0;
  if (_Str == (uchar *)0x0) {
    local_138.StringLength = 0;
    local_138.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar5 = strlen((char *)_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,(char *)_Str,(int)sVar5,Yes);
  }
  ::FString::FString(&local_150,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Data.ArrayNum = 0;
  local_170.Data.ArrayMax = 0;
  local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.Data.ArrayNum = 0;
  local_180.Data.ArrayMax = 0;
  ::FString::FString(&local_160,L".");
  bVar2 = ::FString::Split(&local_150,&local_160,&local_170,&local_180);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_170.Data.ArrayNum != 0) {
      FVar7.Data = local_170.Data.AllocatorInstance.Data;
    }
    iVar3 = _wtoi((wchar_t *)FVar7.Data);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_180.Data.ArrayNum != 0) {
      FVar7.Data = local_180.Data.AllocatorInstance.Data;
    }
    _wtoi((wchar_t *)FVar7.Data);
    if (iVar3 == 0) goto LAB_145c16609;
  }
  else {
LAB_145c16609:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MajorVersion!=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGL3.cpp"
                       ,0x38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FOpenGLBase::MaxVertexUniformComponents = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8b4a,&FOpenGLBase::MaxVertexUniformComponents);
  FOpenGLBase::MaxPixelUniformComponents = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8b49,&FOpenGLBase::MaxPixelUniformComponents);
  FOpenGLBase::MaxGeometryUniformComponents = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8ddf,&FOpenGLBase::MaxGeometryUniformComponents);
  FOpenGLBase::MaxGeometryTextureImageUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8c29,&FOpenGLBase::MaxGeometryTextureImageUnits);
  FOpenGLBase::MaxVaryingVectors = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8dfc,&FOpenGLBase::MaxVaryingVectors);
  GDisableOpenGLDebugOutput = false;
  (*glGetQueryiv)(0x8e28,0x8864,&TimestampQueryBits);
  FOpenGLBase::ProcessExtensions(param_1);
  (*glGenFramebuffers)(1,&local_184);
  (*glBindFramebuffer)(0x8ca9,local_184);
  (*glGenTextures)(1,&local_188);
  (*glBindTexture)(0x806f,local_188);
  (*glTexImage3D)(0x806f,0,0x8058,0x100,0x100,0x100,0,0x1908,0x1401,(void *)0x0);
  (*glFramebufferTexture)(0x8ca9,0x8ce0,local_188,0);
  uVar4 = (*glCheckFramebufferStatus)(0x8ca9);
  FOpenGLBase::bSupportsVolumeTextureRendering = uVar4 == 0x8cd5;
  (*glDeleteTextures)(1,&local_188);
  (*glDeleteFramebuffers)(1,&local_184);
  iVar3 = ::FString::Find(param_1,L"GL_ARB_ES3_1_compatibility",0x1a,IgnoreCase,FromStart,-1);
  if (iVar3 != -1) {
    pwVar6 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar6,L"GLESCompat");
    if (bVar2) {
      bAndroidGLESCompatibilityMode = true;
      goto LAB_145c16828;
    }
  }
  bAndroidGLESCompatibilityMode = false;
LAB_145c16828:
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  return;
}

// ProcessQueryGLInt @ 145c17380

void __cdecl FOpenGL3::ProcessQueryGLInt(void)

{
  GDisableOpenGLDebugOutput = true;
  FOpenGLBase::MaxVertexUniformComponents = 0;
  (*glGetIntegerv)(0x8b4a,&FOpenGLBase::MaxVertexUniformComponents);
  FOpenGLBase::MaxPixelUniformComponents = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8b49,&FOpenGLBase::MaxPixelUniformComponents);
  FOpenGLBase::MaxGeometryUniformComponents = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8ddf,&FOpenGLBase::MaxGeometryUniformComponents);
  FOpenGLBase::MaxGeometryTextureImageUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8c29,&FOpenGLBase::MaxGeometryTextureImageUnits);
  FOpenGLBase::MaxVaryingVectors = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8dfc,&FOpenGLBase::MaxVaryingVectors);
  GDisableOpenGLDebugOutput = false;
                    /* WARNING: Could not recover jumptable at 0x000145c17457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glGetQueryiv)(0x8e28,0x8864,&TimestampQueryBits);
  return;
}

