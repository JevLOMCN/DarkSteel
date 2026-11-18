// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 3

// GetVideoMemorySize @ 145c04df0

ulong64 __cdecl FOpenGL4::GetVideoMemorySize(void)

{
  int local_res8 [8];
  
  if (bSupportsGPUMemoryInfo) {
    local_res8[0] = 0;
    (*glGetIntegerv)(0x9047,local_res8);
    return (longlong)local_res8[0] << 10;
  }
  return 0;
}

// ProcessExtensions @ 145c16890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FOpenGL4::ProcessExtensions(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uchar *_Str;
  size_t sVar4;
  ForAnyElementType FVar5;
  int iVar6;
  undefined1 auStackY_1b8 [32];
  int local_188 [2];
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  _Str = (*glGetString)(0x1f02);
  local_138._padding_ = 0;
  if (_Str == (uchar *)0x0) {
    local_138.StringLength = 0;
    local_138.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar4 = strlen((char *)_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,(char *)_Str,(int)sVar4,Yes);
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
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_170.Data.ArrayNum != 0) {
      FVar5.Data = local_170.Data.AllocatorInstance.Data;
    }
    iVar3 = _wtoi((wchar_t *)FVar5.Data);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_180.Data.ArrayNum != 0) {
      FVar5.Data = local_180.Data.AllocatorInstance.Data;
    }
    _wtoi((wchar_t *)FVar5.Data);
    if (iVar3 != 0) goto LAB_145c169e1;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MajorVersion!=0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGL4.cpp"
                     ,0x35,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_145c169e1:
  iVar3 = ::FString::Find(param_1,L"GL_NVX_gpu_memory_info",0x16,IgnoreCase,FromStart,-1);
  bSupportsGPUMemoryInfo = iVar3 != -1;
  MaxCombinedUAVUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x90cf,&MaxCombinedUAVUnits);
  MaxPixelUAVUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x90ce,&MaxPixelUAVUnits);
  FOpenGLBase::TextureBufferAlignment = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x919f,&FOpenGLBase::TextureBufferAlignment);
  MaxComputeUniformComponents = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8263,&MaxComputeUniformComponents);
  MaxComputeUAVUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x91bd,&MaxComputeUAVUnits);
  local_188[0] = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x90dc,local_188);
  GDisableOpenGLDebugOutput = false;
  iVar3 = local_188[0];
  if (local_188[0] < MaxCombinedUAVUnits) {
    iVar3 = MaxCombinedUAVUnits;
  }
  MaxCombinedUAVUnits = 0x10;
  if (iVar3 < 0x10) {
    MaxCombinedUAVUnits = iVar3;
  }
  iVar3 = 0x10;
  if (MaxComputeUAVUnits < 0x10) {
    iVar3 = MaxComputeUAVUnits;
  }
  iVar6 = 4;
  if (MaxPixelUAVUnits < 4) {
    iVar6 = MaxPixelUAVUnits;
  }
  MaxComputeUAVUnits = iVar3;
  MaxPixelUAVUnits = iVar6;
  FOpenGL3::ProcessExtensions(param_1);
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

// ProcessQueryGLInt @ 145c17470

void __cdecl FOpenGL4::ProcessQueryGLInt(void)

{
  int iVar1;
  int local_res8 [8];
  
  GDisableOpenGLDebugOutput = true;
  MaxCombinedUAVUnits = 0;
  (*glGetIntegerv)(0x90cf,&MaxCombinedUAVUnits);
  MaxPixelUAVUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x90ce,&MaxPixelUAVUnits);
  FOpenGLBase::TextureBufferAlignment = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x919f,&FOpenGLBase::TextureBufferAlignment);
  MaxComputeUniformComponents = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8263,&MaxComputeUniformComponents);
  MaxComputeUAVUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x91bd,&MaxComputeUAVUnits);
  local_res8[0] = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x90dc,local_res8);
  GDisableOpenGLDebugOutput = false;
  if (local_res8[0] < MaxCombinedUAVUnits) {
    local_res8[0] = MaxCombinedUAVUnits;
  }
  MaxCombinedUAVUnits = 0x10;
  if (local_res8[0] < 0x10) {
    MaxCombinedUAVUnits = local_res8[0];
  }
  iVar1 = 0x10;
  if (MaxComputeUAVUnits < 0x10) {
    iVar1 = MaxComputeUAVUnits;
  }
  MaxComputeUAVUnits = iVar1;
  iVar1 = 4;
  if (MaxPixelUAVUnits < 4) {
    iVar1 = MaxPixelUAVUnits;
  }
  MaxPixelUAVUnits = iVar1;
  return;
}

