// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// FPlatformOpenGLDevice @ 145be62d0

/* WARNING: Enum "Type": Some values do not have unique names */

FPlatformOpenGLDevice * __thiscall
FPlatformOpenGLDevice::FPlatformOpenGLDevice(FPlatformOpenGLDevice *this)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  bool bVar4;
  uint uVar5;
  FPlatformOpenGLDevice *pFVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  HGLRC pHVar7;
  LPCRITICAL_SECTION p_Var8;
  
  p_Var8 = (LPCRITICAL_SECTION)0x0;
  this->TargetDirty = true;
  (this->ViewportContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewportContexts).ArrayNum = 0;
  (this->ViewportContexts).ArrayMax = 0;
  if ((Singleton != (FPlatformOpenGLDevice *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x10e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FPlatformOpenGLDevice *)(*pcVar1)();
    return pFVar6;
  }
  Singleton = this;
  lpCriticalSection = ::operator_new(0x28);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
    p_Var8 = lpCriticalSection;
  }
  this->ContextUsageGuard = (FWindowsRecursiveMutex *)p_Var8;
  uVar3 = (*glIsEnabled)(0x6789);
  GRunningUnderRenderDoc = uVar3 != '\0';
  PlatformCreateDummyGLWindow(&this->RenderingContext);
  PlatformCreateOpenGLContextCore(&this->RenderingContext,4,3,(HGLRC__ *)0x0);
  ContextMakeCurrent((this->RenderingContext).DeviceContext,(this->RenderingContext).OpenGLContext);
  if (((this->RenderingContext).OpenGLContext == (HGLRC__ *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderingContext.OpenGLContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x11f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FPlatformOpenGLDevice *)(*pcVar1)();
    return pFVar6;
  }
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar2 = false;
  bVar4 = IsOGLDebugOutputEnabled();
  if (!bVar4) goto LAB_145be6581;
  if (glDebugMessageCallbackARB !=
      (_func___cdecl_void__func___cdecl_void_uint_uint_uint_uint_int_char_ptr_void_ptr_ptr_void_ptr
       *)0x0) {
    (*glEnable)(0x8242);
    (*glDebugMessageCallbackARB)(OpenGLDebugMessageCallbackARB,(void *)0x0);
    uVar5 = (*glGetError)();
    bVar2 = uVar5 == 0;
  }
  if (glDebugMessageCallbackAMD ==
      (_func___cdecl_void__func___cdecl_void_uint_uint_uint_int_char_ptr_void_ptr_ptr_void_ptr *)0x0
     ) {
LAB_145be6487:
    if (bVar2) goto LAB_145be64a9;
    if (2 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  else {
    if (!bVar2) {
      (*glDebugMessageCallbackAMD)(OpenGLDebugMessageCallbackAMD,(void *)0x0);
      uVar5 = (*glGetError)();
      bVar2 = uVar5 == 0;
      goto LAB_145be6487;
    }
LAB_145be64a9:
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  if ((glDebugMessageControlARB != (_func___cdecl_void_uint_uint_uint_int_uint_ptr_uchar *)0x0) &&
     (bVar2)) {
    (*glDebugMessageControlARB)(0x824a,0x8268,0x1100,0,(uint *)0x0,'\0');
    (*glDebugMessageControlARB)(0x824a,0x8269,0x1100,0,(uint *)0x0,'\0');
    (*glDebugMessageControlARB)(0x824a,0x826a,0x1100,0,(uint *)0x0,'\0');
    (*glDebugMessageControlARB)(0x8246,0x8251,0x826b,0,(uint *)0x0,'\0');
    if (5 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
LAB_145be6581:
  (*glGenVertexArrays)(1,&(this->RenderingContext).VertexArrayObject);
  (*glBindVertexArray)((this->RenderingContext).VertexArrayObject);
  InitDefaultGLContextState();
  (*glGenFramebuffers)(1,&(this->RenderingContext).ViewportFramebuffer);
  return this;
}

