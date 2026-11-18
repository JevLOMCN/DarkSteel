// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 3

// PE_GetCurrentOpenGLShaderDeviceCapabilities @ 145c0f470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FOpenGLBase::PE_GetCurrentOpenGLShaderDeviceCapabilities(FOpenGLShaderDeviceCapabilities *param_1)

{
  param_1->TargetPlatform = OGLSTP_Unknown;
  return;
}

// ProcessExtensions @ 145c16bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl FOpenGLBase::ProcessExtensions(FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uchar *_Str;
  size_t sVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  undefined1 auStackY_1b8 [32];
  FString local_188;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined1 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154 [12];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  GDisableOpenGLDebugOutput = true;
  MaxTextureImageUnits = 0;
  (*glGetIntegerv)(0x8872,&MaxTextureImageUnits);
  GDisableOpenGLDebugOutput = false;
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  MaxVertexTextureImageUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8b4c,&MaxVertexTextureImageUnits);
  GDisableOpenGLDebugOutput = false;
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  MaxComputeTextureImageUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x91bc,&MaxComputeTextureImageUnits);
  GDisableOpenGLDebugOutput = false;
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  MaxCombinedTextureImageUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8b4d,&MaxCombinedTextureImageUnits);
  uVar9 = (ulonglong)GMaxRHIShaderPlatform;
  GDisableOpenGLDebugOutput = false;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar9].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar9].MaxFeatureLevel == ES3_1) {
    if (MaxTextureImageUnits < 0x10) {
      if (1 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_GL_RHI_requires_1510e8148,
                   (FLogCategoryBase *)&LogRHI);
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUnsupported",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.cpp"
                         ,0x254,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    MaxTextureImageUnits = 0x10;
    if (MaxVertexTextureImageUnits < 0x10) {
      if (1 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_GL_RHI_requires_1510e8148,
                   (FLogCategoryBase *)&LogRHI);
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUnsupported",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.cpp"
                         ,0x254,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    MaxVertexTextureImageUnits = 0x10;
    if (MaxGeometryTextureImageUnits < 0) {
      if (1 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_GL_RHI_requires_1510e8148,
                   (FLogCategoryBase *)&LogRHI);
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUnsupported",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.cpp"
                         ,0x254,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    MaxGeometryTextureImageUnits = 0;
    if (MaxComputeTextureImageUnits < 0x10) {
      if (1 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_GL_RHI_requires_1510e8148,
                   (FLogCategoryBase *)&LogRHI);
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUnsupported",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.cpp"
                         ,0x254,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    MaxComputeTextureImageUnits = 0x10;
    if (MaxCombinedTextureImageUnits < 0x30) {
      if (1 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_GL_RHI_requires_1510e8148,
                   (FLogCategoryBase *)&LogRHI);
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUnsupported",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDrv.cpp"
                         ,0x254,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    MaxCombinedTextureImageUnits = 0x30;
  }
  else if (MaxCombinedTextureImageUnits < 0x30) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar4 = ::FString::Find(param_1,L"GL_KHR_texture_compression_astc_ldr",0x23,IgnoreCase,FromStart,
                          -1);
  bSupportsASTC = iVar4 != -1;
  if (iVar4 == -1) {
LAB_145c16fca:
    bSupportsASTCHDR = false;
  }
  else {
    iVar4 = ::FString::Find(param_1,L"GL_KHR_texture_compression_astc_hdr",0x23,IgnoreCase,FromStart
                            ,-1);
    if (iVar4 == -1) goto LAB_145c16fca;
    bSupportsASTCHDR = true;
  }
  iVar4 = ::FString::Find(param_1,L"GL_ARB_seamless_cube_map",0x18,IgnoreCase,FromStart,-1);
  bSupportsSeamlessCubemap = iVar4 != -1;
  iVar4 = ::FString::Find(param_1,L"GL_EXT_texture_filter_anisotropic",0x21,IgnoreCase,FromStart,-1)
  ;
  bSupportsTextureFilterAnisotropic = iVar4 != -1;
  iVar4 = ::FString::Find(param_1,L"GL_ARB_draw_buffers_blend",0x19,IgnoreCase,FromStart,-1);
  bSupportsDrawBuffersBlend = iVar4 != -1;
  _Str = (*glGetString)(0x1f00);
  local_148._padding_ = 0;
  if (_Str == (uchar *)0x0) {
    local_148.StringLength = 0;
    local_148.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar5 = strlen((char *)_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,(char *)_Str,(int)sVar5,Yes);
  }
  ::FString::FString(&local_188,local_148.Ptr);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  iVar4 = ::FString::Find(&local_188,L"ATI ",4,IgnoreCase,FromStart,-1);
  if (iVar4 == -1) {
    iVar4 = ::FString::Find(&local_188,L"Intel ",6,IgnoreCase,FromStart,-1);
    if (iVar4 == -1) {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_188.Data.ArrayNum != 0) {
        FVar8.Data = local_188.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"Intel");
      if (iVar4 != 0) {
        iVar4 = ::FString::Find(&local_188,L"NVIDIA ",7,IgnoreCase,FromStart,-1);
        if (iVar4 == -1) {
          iVar4 = ::FString::Find(&local_188,L"ImgTec",6,IgnoreCase,FromStart,-1);
          if (iVar4 == -1) {
            iVar4 = ::FString::Find(&local_188,L"Imagination",0xb,IgnoreCase,FromStart,-1);
            if (iVar4 == -1) {
              iVar4 = ::FString::Find(&local_188,L"ARM",3,IgnoreCase,FromStart,-1);
              if (iVar4 == -1) {
                iVar4 = ::FString::Find(&local_188,L"Qualcomm",8,IgnoreCase,FromStart,-1);
                if (iVar4 != -1) {
                  GRHIGlobals.GpuInfo.VendorId = 0x5143;
                }
              }
              else {
                GRHIGlobals.GpuInfo.VendorId = 0x13b5;
              }
              goto LAB_145c17282;
            }
          }
          GRHIGlobals.GpuInfo.VendorId = 0x1010;
        }
        else {
          GRHIGlobals.GpuInfo.VendorId = 0x10de;
        }
        goto LAB_145c17282;
      }
    }
    GRHIGlobals.GpuInfo.VendorId = 0x8086;
  }
  else {
    GRHIGlobals.GpuInfo.VendorId = 0x1002;
  }
  bAmdWorkaround = true;
LAB_145c17282:
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"OpenGL.UseStagingBuffer",1);
  if (plVar6 != (longlong *)0x0) {
    lVar1 = *plVar6;
    local_178 = 0;
    local_168 = 0;
    local_170 = 0xe000000;
    local_16c = 0;
    local_160 = 0;
    local_15c = 0xf000000;
    local_158 = 0x1000000;
    uVar7 = (**(code **)(lVar1 + 0xa8))(plVar6,local_154,&local_170);
    (**(code **)(lVar1 + 0xb0))(plVar6,&u_0,uVar7);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return;
}

// ProcessQueryGLInt @ 145c175b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FOpenGLBase::ProcessQueryGLInt(void)

{
  GDisableOpenGLDebugOutput = true;
  MaxTextureImageUnits = 0;
  (*glGetIntegerv)(0x8872,&MaxTextureImageUnits);
  GDisableOpenGLDebugOutput = false;
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  MaxVertexTextureImageUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8b4c,&MaxVertexTextureImageUnits);
  GDisableOpenGLDebugOutput = false;
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  MaxComputeTextureImageUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x91bc,&MaxComputeTextureImageUnits);
  GDisableOpenGLDebugOutput = false;
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  MaxCombinedTextureImageUnits = 0;
  GDisableOpenGLDebugOutput = true;
  (*glGetIntegerv)(0x8b4d,&MaxCombinedTextureImageUnits);
  GDisableOpenGLDebugOutput = false;
  return;
}

