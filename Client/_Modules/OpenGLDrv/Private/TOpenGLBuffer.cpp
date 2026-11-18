// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 13

// TOpenGLBuffer<FOpenGLBaseBuffer> @ 145bdfdc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TOpenGLBuffer<FOpenGLBaseBuffer> * __thiscall
TOpenGLBuffer<FOpenGLBaseBuffer>::TOpenGLBuffer<FOpenGLBaseBuffer>
          (TOpenGLBuffer<FOpenGLBaseBuffer> *this,FRHICommandListBase *param_1,uint param_2,
          FRHIBufferCreateDesc *param_3,void *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FRHICommandBase *pFVar5;
  TOpenGLBuffer<FOpenGLBaseBuffer> *pTVar6;
  TOpenGLBuffer<FOpenGLBaseBuffer> *local_48;
  FRHICommandBase *pFStack_40;
  TOpenGLBuffer<FOpenGLBaseBuffer> *local_38;
  FRHICommandBase *pFStack_30;
  
  FRHIBuffer::FRHIBuffer((FRHIBuffer *)this,param_3);
  this->bIsLocked = 0;
  this->bLockBufferWasAllocated = 0;
  this->bIsLockReadOnly = 0;
  this->_padding_ = (longlong)&___7__TOpenGLBuffer_VFOpenGLBaseBuffer____6B_;
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->LockSize = 0;
  this->LockOffset = 0;
  this->LockBuffer = (void *)0x0;
  this->CachedBuffer = (void *)0x0;
  this->CachedBufferSize = 0;
  if ((param_1 != (FRHICommandListBase *)0x0) &&
     ((((GRHICommandList.bLatchedBypass == false || ((param_1->PersistentState).bImmediate == '\0'))
       && (param_1->bExecuting == false)) && (param_4 != (void *)0x0)))) {
    uVar2 = (uint)param_3->_padding_;
    pFVar5 = FMemStackBase::Alloc(&param_1->MemManager,(ulonglong)uVar2,0x10);
    memcpy(pFVar5,param_4,(ulonglong)uVar2);
    param_4 = pFVar5;
  }
  uVar2 = (uint)param_3->_padding_;
  local_48 = this;
  pFStack_40 = param_4;
  if ((uVar2 >> 0x14 & 1) == 0) {
    if (param_1 == (FRHICommandListBase *)0x0) {
      `TOpenGLBuffer<FOpenGLBaseBuffer>::TOpenGLBuffer<FOpenGLBaseBuffer>'::__l2::<lambda_1>::
      operator()(&local_48);
    }
    else {
      local_38 = this;
      pFStack_30 = param_4;
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
        pFVar5 = FMemStackBase::Alloc(&param_1->MemManager,0x28,8);
        param_1->NumCommands = param_1->NumCommands + 1;
        *param_1->CommandLink = pFVar5;
        param_1->CommandLink = &pFVar5->Next;
        pFVar5->Next = (FRHICommandBase *)0x0;
        pFVar5->_padding_ =
             (longlong)
             &
             ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_2>__L____0__TOpenGLBuffer_VFOpenGLBaseBuffer____QEAA_PEAV1_IAEBUFRHIBufferCreateDesc__PEBX_Z___6B_
        ;
        pFVar5[2]._padding_ = (longlong)L"TRHILambdaCommand";
        pFVar5[1]._padding_ = (longlong)this;
        pFVar5[1].Next = param_4;
      }
      else {
        `TOpenGLBuffer<FOpenGLBaseBuffer>::TOpenGLBuffer<FOpenGLBaseBuffer>'::__l2::<lambda_1>::
        operator()(&local_38);
      }
    }
  }
  else if (((((int)param_3->_padding_ != 0) || (*(int *)((longlong)&param_3->_padding_ + 4) != 0))
           || (uVar2 != 0x100000)) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                              ,0x54f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TOpenGLBuffer<FOpenGLBaseBuffer> *)(*pcVar3)();
    return pTVar6;
  }
  return this;
}

// ~TOpenGLBuffer<FOpenGLBaseBuffer> @ 145be8600

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TOpenGLBuffer<FOpenGLBaseBuffer>::~TOpenGLBuffer<FOpenGLBaseBuffer>
          (TOpenGLBuffer<FOpenGLBaseBuffer> *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7__TOpenGLBuffer_VFOpenGLBaseBuffer____6B_;
  ReleaseOwnership(this);
  if (this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                       ,0x53,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// ~TOpenGLBuffer<FOpenGLBasePixelBuffer> @ 145be8670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
TOpenGLBuffer<FOpenGLBasePixelBuffer>::~TOpenGLBuffer<FOpenGLBasePixelBuffer>
          (TOpenGLBuffer<FOpenGLBasePixelBuffer> *this)

{
  code *pcVar1;
  bool bVar2;
  HGLRC pHVar3;
  byte bVar4;
  
  this->_padding_ = (longlong)&___7__TOpenGLBuffer_VFOpenGLBasePixelBuffer____6B_;
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_TOpenGLBuffer<FOpenGLBasePixelBuffer>::ReleaseOwnership(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) != 0) {
    if (this->LockBuffer != (void *)0x0) {
      if (this->bLockBufferWasAllocated == 0) {
        if (2 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_TOpenGLBuffer<FOpenGLBasePixelBuffer>::ReleaseOwnership(void)___ptr64'
                      ::__l26::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
      else {
        FMemory::Free(this->LockBuffer);
      }
    }
    FOpenGLDynamicRHI::OnBufferDeletion
              (FOpenGLDynamicRHI::Singleton,(uint)this->_padding_,
               *(uint *)((longlong)&this->_padding_ + 4));
    (*glDeleteBuffers)(1,(uint *)((longlong)&this->_padding_ + 4));
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    this->LockBuffer = (void *)0x0;
    UE::RHICore::UpdateGlobalBufferStats
              ((FRHIBufferDesc *)&this->_padding_,-(ulonglong)(uint)this->_padding_);
    if (this->CachedBuffer != (void *)0x0) {
      FMemory::Free(this->CachedBuffer);
      this->CachedBuffer = (void *)0x0;
      this->CachedBufferSize = 0;
    }
  }
  bVar4 = (byte)GNumExplicitGPUsForRendering;
  this->_padding_ = 0;
  *(int *)((longlong)&this->_padding_ + 4) = (1 << (bVar4 & 0x1f)) + -1;
  *(undefined4 *)&this->_padding_ = 0x100000;
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// operator() @ 145beb0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TOpenGLBuffer<FOpenGLBaseBuffer>::TOpenGLBuffer<FOpenGLBaseBuffer>'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  HGLRC pHVar2;
  int iVar3;
  uint *_Dst;
  int iVar4;
  uint uVar5;
  FLLMPauseScope local_38;
  FLLMPauseScope local_28;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:___cdecl_`public:___cdecl_TOpenGLBuffer<FOpenGLBaseBuffer>::TOpenGLBuffer<FOpenGLBaseBuffer>(FRHICommandListBase*___ptr64,unsigned_int,FRHIBufferCreateDesc_const&___ptr64,void_const*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  _Dst = (uint *)(*(longlong *)this + 0xf4);
  iVar4 = 0x400 - FOpenGL3::NextBufferName;
  if (iVar4 < 2) {
    memcpy(_Dst,FOpenGL3::BufferNamesCache + FOpenGL3::NextBufferName,(longlong)iVar4 * 4);
    (*glGenBuffers)(0x400,FOpenGL3::BufferNamesCache);
    iVar3 = 1 - iVar4;
    memcpy(_Dst + iVar4,FOpenGL3::BufferNamesCache,(longlong)iVar3 << 2);
  }
  else {
    *_Dst = FOpenGL3::BufferNamesCache[FOpenGL3::NextBufferName];
    iVar3 = FOpenGL3::NextBufferName + 1;
  }
  FOpenGL3::NextBufferName = iVar3;
  FOpenGLBufferBase::Bind((FOpenGLBufferBase *)(*(longlong *)this + 0xf0));
  lVar1 = *(longlong *)this;
  uVar5 = 0x88e4;
  if ((*(byte *)(lVar1 + 0xe0) & 6) != 0) {
    uVar5 = 0x88e8;
  }
  (*glBufferData)(*(uint *)(lVar1 + 0xf0),(long64)*(undefined4 *)(lVar1 + 0xd8),(void *)0x0,uVar5);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    TOpenGLBuffer<FOpenGLBaseBuffer>::LoadData
              (*(TOpenGLBuffer<FOpenGLBaseBuffer> **)this,0,
               (uint)(*(TOpenGLBuffer<FOpenGLBaseBuffer> **)this)->_padding_,
               *(void **)((longlong)this + 8));
  }
  lVar1 = *(longlong *)this;
  uVar5 = *(uint *)(lVar1 + 0xd8);
  FLLMPauseScope::FLLMPauseScope(&local_28,GraphicsPlatform,false,(ulonglong)uVar5,Platform,None);
  FLLMPauseScope::FLLMPauseScope(&local_38,Meshes,false,(ulonglong)uVar5,Default,None);
  UE::RHICore::UpdateGlobalBufferStats
            ((FRHIBufferDesc *)(lVar1 + 0xd8),(ulonglong)*(uint *)(lVar1 + 0xd8));
  FLLMPauseScope::~FLLMPauseScope(&local_38);
  FLLMPauseScope::~FLLMPauseScope(&local_28);
  return;
}

// operator() @ 145beb2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TOpenGLBuffer<FOpenGLBasePixelBuffer>::TOpenGLBuffer<FOpenGLBasePixelBuffer>'::__l2::<lambda_1>::
operator()(void *this)

{
  longlong lVar1;
  HGLRC pHVar2;
  int iVar3;
  uint *_Dst;
  int iVar4;
  uint uVar5;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:___cdecl_`public:___cdecl_TOpenGLBuffer<FOpenGLBasePixelBuffer>::TOpenGLBuffer<FOpenGLBasePixelBuffer>(FRHICommandListBase*___ptr64,unsigned_int,FRHIBufferCreateDesc_const&___ptr64,void_const*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  _Dst = (uint *)(*(longlong *)this + 0x24);
  iVar4 = 0x400 - FOpenGL3::NextBufferName;
  if (iVar4 < 2) {
    memcpy(_Dst,FOpenGL3::BufferNamesCache + FOpenGL3::NextBufferName,(longlong)iVar4 * 4);
    (*glGenBuffers)(0x400,FOpenGL3::BufferNamesCache);
    iVar3 = 1 - iVar4;
    memcpy(_Dst + iVar4,FOpenGL3::BufferNamesCache,(longlong)iVar3 << 2);
  }
  else {
    *_Dst = FOpenGL3::BufferNamesCache[FOpenGL3::NextBufferName];
    iVar3 = FOpenGL3::NextBufferName + 1;
  }
  FOpenGL3::NextBufferName = iVar3;
  FOpenGLBufferBase::Bind((FOpenGLBufferBase *)(*(longlong *)this + 0x20));
  lVar1 = *(longlong *)this;
  uVar5 = 0x88e4;
  if ((*(byte *)(lVar1 + 0x18) & 6) != 0) {
    uVar5 = 0x88e8;
  }
  (*glBufferData)(*(uint *)(lVar1 + 0x20),(long64)*(undefined4 *)(lVar1 + 0x10),(void *)0x0,uVar5);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    TOpenGLBuffer<FOpenGLBasePixelBuffer>::LoadData
              (*(TOpenGLBuffer<FOpenGLBasePixelBuffer> **)this,0,
               (uint)(*(TOpenGLBuffer<FOpenGLBasePixelBuffer> **)this)->_padding_,
               *(void **)((longlong)this + 8));
  }
  UE::RHICore::UpdateGlobalBufferStats
            ((FRHIBufferDesc *)(*(longlong *)this + 0x10),
             (ulonglong)((FRHIBufferDesc *)(*(longlong *)this + 0x10))->Size);
  return;
}

// LoadData @ 145c0b5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TOpenGLBuffer<FOpenGLBaseBuffer>::LoadData
          (TOpenGLBuffer<FOpenGLBaseBuffer> *this,uint param_1,uint param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  HGLRC pHVar3;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_TOpenGLBuffer<FOpenGLBaseBuffer>::LoadData(unsigned_int,unsigned_int,void_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar1 = OpenGLConsoleVariables::MaxSubDataSize;
  if (OpenGLConsoleVariables::MaxSubDataSize == 0) {
    (*glBufferSubData)((uint)this->_padding_,(long64)param_1,(long64)param_2,param_3);
  }
  else {
    for (; param_2 != 0; param_2 = param_2 - uVar2) {
      uVar2 = param_2;
      if ((uint)iVar1 < param_2) {
        uVar2 = iVar1;
      }
      (*glBufferSubData)((uint)this->_padding_,(long64)param_1,(long64)uVar2,param_3);
      param_1 = param_1 + uVar2;
      param_3 = (void *)((longlong)param_3 + (ulonglong)uVar2);
    }
  }
  return;
}

// LoadData @ 145c0b6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TOpenGLBuffer<FOpenGLBasePixelBuffer>::LoadData
          (TOpenGLBuffer<FOpenGLBasePixelBuffer> *this,uint param_1,uint param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  HGLRC pHVar3;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`private:_void___cdecl_TOpenGLBuffer<FOpenGLBasePixelBuffer>::LoadData(unsigned_int,unsigned_int,void_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar1 = OpenGLConsoleVariables::MaxSubDataSize;
  if (OpenGLConsoleVariables::MaxSubDataSize == 0) {
    (*glBufferSubData)((uint)this->_padding_,(long64)param_1,(long64)param_2,param_3);
  }
  else {
    for (; param_2 != 0; param_2 = param_2 - uVar2) {
      uVar2 = param_2;
      if ((uint)iVar1 < param_2) {
        uVar2 = iVar1;
      }
      (*glBufferSubData)((uint)this->_padding_,(long64)param_1,(long64)uVar2,param_3);
      param_1 = param_1 + uVar2;
      param_3 = (void *)((longlong)param_3 + (ulonglong)uVar2);
    }
  }
  return;
}

// Lock @ 145c0b7a0

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
TOpenGLBuffer<FOpenGLBaseBuffer>::Lock
          (TOpenGLBuffer<FOpenGLBaseBuffer> *this,uint param_1,uint param_2,bool param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uchar *puVar4;
  HGLRC pHVar5;
  uint uVar6;
  
  if ((uint)this->_padding_ < param_1 + param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOffset + InSize <= BaseType::GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                       ,200,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  if (this->bIsLocked != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                       ,0xca,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_unsigned_char*___ptr64___cdecl_TOpenGLBuffer<FOpenGLBaseBuffer>::Lock(unsigned_int,unsigned_int,bool,bool)___ptr64'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  FOpenGLBufferBase::Bind((FOpenGLBufferBase *)&this->_padding_);
  *(uint *)&this->field_0xf8 = (uint)param_3 * 2 | *(uint *)&this->field_0xf8 & 0xfffffffd | 1;
  if ((param_4) || ((!param_3 && (param_2 == (uint)this->_padding_)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((param_3) || (OpenGLConsoleVariables::bUseMapBuffer != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar3) && (OpenGLConsoleVariables::bUseBufferDiscard != 0)) {
    uVar6 = 0x88e4;
    if ((this->_padding_ & 6) != 0) {
      uVar6 = 0x88e8;
    }
    (*glBufferData)((uint)this->_padding_,(ulonglong)(uint)this->_padding_,(void *)0x0,uVar6);
  }
  if (bVar2) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_3) {
    case false:
      uVar6 = 0x2a;
      break;
    case true:
      uVar6 = 1;
      break;
    case true:
      uVar6 = 0xc2;
      break;
    case true:
      uVar6 = 0x22;
    }
    puVar4 = (*glMapBufferRange)((uint)this->_padding_,(ulonglong)param_1,(ulonglong)param_2,uVar6);
    this->bLockBufferWasAllocated = 0;
    this->LockBuffer = puVar4;
    this->LockOffset = param_1;
    this->LockSize = param_2;
    goto LAB_145c0ba04;
  }
  puVar4 = this->CachedBuffer;
  this->LockOffset = param_1;
  this->LockSize = param_2;
  if (puVar4 == (uchar *)0x0) {
LAB_145c0b9e2:
    puVar4 = FMemory::Malloc((ulonglong)param_2,0);
    this->CachedBufferSize = param_2;
  }
  else {
    if (this->CachedBufferSize < param_2) {
      FMemory::Free(puVar4);
      this->CachedBuffer = (void *)0x0;
      this->CachedBufferSize = 0;
      goto LAB_145c0b9e2;
    }
    this->CachedBuffer = (void *)0x0;
  }
  this->LockBuffer = puVar4;
  this->bLockBufferWasAllocated = 1;
LAB_145c0ba04:
  if (puVar4 == (uchar *)0x0) {
    (*glGetError)();
    UE::Logging::Private::BasicFatalLog
              (&`public:_unsigned_char*___ptr64___cdecl_TOpenGLBuffer<FOpenGLBaseBuffer>::Lock(unsigned_int,unsigned_int,bool,bool)___ptr64'
                ::__l45::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return puVar4;
}

// Lock @ 145c0ba80

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
TOpenGLBuffer<FOpenGLBasePixelBuffer>::Lock
          (TOpenGLBuffer<FOpenGLBasePixelBuffer> *this,uint param_1,uint param_2,bool param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uchar *puVar4;
  HGLRC pHVar5;
  uint uVar6;
  
  if ((uint)this->_padding_ < param_1 + param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOffset + InSize <= BaseType::GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                       ,200,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  if (this->bIsLocked != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                       ,0xca,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_unsigned_char*___ptr64___cdecl_TOpenGLBuffer<FOpenGLBasePixelBuffer>::Lock(unsigned_int,unsigned_int,bool,bool)___ptr64'
                ::__l20::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  FOpenGLBufferBase::Bind((FOpenGLBufferBase *)&this->_padding_);
  *(uint *)&this->field_0x28 = (uint)param_3 * 2 | *(uint *)&this->field_0x28 & 0xfffffffd | 1;
  if ((param_4) || ((!param_3 && (param_2 == (uint)this->_padding_)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((param_3) || (OpenGLConsoleVariables::bUseMapBuffer != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar3) && (OpenGLConsoleVariables::bUseBufferDiscard != 0)) {
    uVar6 = 0x88e4;
    if ((this->_padding_ & 6) != 0) {
      uVar6 = 0x88e8;
    }
    (*glBufferData)((uint)this->_padding_,(ulonglong)(uint)this->_padding_,(void *)0x0,uVar6);
  }
  if (bVar2) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_3) {
    case false:
      uVar6 = 0x2a;
      break;
    case true:
      uVar6 = 1;
      break;
    case true:
      uVar6 = 0xc2;
      break;
    case true:
      uVar6 = 0x22;
    }
    puVar4 = (*glMapBufferRange)((uint)this->_padding_,(ulonglong)param_1,(ulonglong)param_2,uVar6);
    this->bLockBufferWasAllocated = 0;
    this->LockBuffer = puVar4;
    this->LockOffset = param_1;
    this->LockSize = param_2;
    goto LAB_145c0bc98;
  }
  puVar4 = this->CachedBuffer;
  this->LockOffset = param_1;
  this->LockSize = param_2;
  if (puVar4 == (uchar *)0x0) {
LAB_145c0bc7f:
    puVar4 = FMemory::Malloc((ulonglong)param_2,0);
    this->CachedBufferSize = param_2;
  }
  else {
    if (this->CachedBufferSize < param_2) {
      FMemory::Free(puVar4);
      this->CachedBuffer = (void *)0x0;
      this->CachedBufferSize = 0;
      goto LAB_145c0bc7f;
    }
    this->CachedBuffer = (void *)0x0;
  }
  this->LockBuffer = puVar4;
  this->bLockBufferWasAllocated = 1;
LAB_145c0bc98:
  if (puVar4 == (uchar *)0x0) {
    (*glGetError)();
    UE::Logging::Private::BasicFatalLog
              (&`public:_unsigned_char*___ptr64___cdecl_TOpenGLBuffer<FOpenGLBasePixelBuffer>::Lock(unsigned_int,unsigned_int,bool,bool)___ptr64'
                ::__l45::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return puVar4;
}

// ReleaseCachedBuffer @ 145c28420

void __thiscall
TOpenGLBuffer<FOpenGLBaseBuffer>::ReleaseCachedBuffer(TOpenGLBuffer<FOpenGLBaseBuffer> *this)

{
  if (this->CachedBuffer != (void *)0x0) {
    FMemory::Free(this->CachedBuffer);
    this->CachedBuffer = (void *)0x0;
    this->CachedBufferSize = 0;
  }
  return;
}

// ReleaseOwnership @ 145c28c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
TOpenGLBuffer<FOpenGLBaseBuffer>::ReleaseOwnership(TOpenGLBuffer<FOpenGLBaseBuffer> *this)

{
  HGLRC pHVar1;
  byte bVar2;
  ulong64 uVar3;
  uint uStackX_c;
  FLLMPauseScope local_38;
  FLLMPauseScope local_28;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_TOpenGLBuffer<FOpenGLBaseBuffer>::ReleaseOwnership(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) != 0) {
    if (this->LockBuffer != (void *)0x0) {
      if (this->bLockBufferWasAllocated == 0) {
        if (2 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_TOpenGLBuffer<FOpenGLBaseBuffer>::ReleaseOwnership(void)___ptr64'
                      ::__l26::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
      else {
        FMemory::Free(this->LockBuffer);
      }
    }
    FOpenGLDynamicRHI::OnBufferDeletion
              (FOpenGLDynamicRHI::Singleton,(uint)this->_padding_,
               *(uint *)((longlong)&this->_padding_ + 4));
    (*glDeleteBuffers)(1,(uint *)((longlong)&this->_padding_ + 4));
    uVar3 = -(ulonglong)(uint)this->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    this->LockBuffer = (void *)0x0;
    FLLMPauseScope::FLLMPauseScope(&local_28,GraphicsPlatform,false,uVar3,Platform,None);
    FLLMPauseScope::FLLMPauseScope(&local_38,Meshes,false,uVar3,Default,None);
    UE::RHICore::UpdateGlobalBufferStats
              ((FRHIBufferDesc *)&this->_padding_,-(ulonglong)(uint)this->_padding_);
    FLLMPauseScope::~FLLMPauseScope(&local_38);
    FLLMPauseScope::~FLLMPauseScope(&local_28);
    if (this->CachedBuffer != (void *)0x0) {
      FMemory::Free(this->CachedBuffer);
      this->CachedBuffer = (void *)0x0;
      this->CachedBufferSize = 0;
    }
  }
  uStackX_c = uStackX_c & 0xffffff00;
  this->_padding_ = (ulonglong)uStackX_c << 0x20;
  bVar2 = (byte)GNumExplicitGPUsForRendering;
  this->_padding_ = 0;
  *(int *)((longlong)&this->_padding_ + 4) = (1 << (bVar2 & 0x1f)) + -1;
  *(undefined4 *)&this->_padding_ = 0x100000;
  return;
}

// Unlock @ 145c34e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall TOpenGLBuffer<FOpenGLBaseBuffer>::Unlock(TOpenGLBuffer<FOpenGLBaseBuffer> *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  HGLRC pHVar4;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_TOpenGLBuffer<FOpenGLBaseBuffer>::Unlock(void)___ptr64'::__l6
                ::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->bIsLocked != 0) {
    pHVar4 = wglGetCurrentContext();
    if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    FOpenGLDynamicRHI::CachedBindBuffer
              (FOpenGLDynamicRHI::Singleton,(uint)this->_padding_,
               *(uint *)((longlong)&this->_padding_ + 4));
    if ((OpenGLConsoleVariables::bUseMapBuffer == 0) && (this->bIsLockReadOnly == 0)) {
      LoadData(this,this->LockOffset,this->LockSize,this->LockBuffer);
      if (this->LockBuffer == (void *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LockBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                           ,0x17e,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (this->bLockBufferWasAllocated == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bLockBufferWasAllocated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                           ,0x181,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((this->_padding_ & 4) == 0) {
        FMemory::Free(this->LockBuffer);
        this->bLockBufferWasAllocated = 0;
        this->LockSize = 0;
      }
      else {
        ReleaseCachedBuffer(this);
        uVar1 = this->LockSize;
        this->CachedBuffer = this->LockBuffer;
        this->LockSize = 0;
        if (uVar1 < this->CachedBufferSize) {
          uVar1 = this->CachedBufferSize;
        }
        this->bLockBufferWasAllocated = 0;
        this->CachedBufferSize = uVar1;
      }
    }
    else {
      if (this->bLockBufferWasAllocated != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bLockBufferWasAllocated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                           ,0x162,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (*glUnmapBuffer)((uint)this->_padding_);
    }
    this->LockBuffer = (void *)0x0;
    this->bIsLocked = 0;
  }
  return;
}

// Unlock @ 145c35090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
TOpenGLBuffer<FOpenGLBasePixelBuffer>::Unlock(TOpenGLBuffer<FOpenGLBasePixelBuffer> *this)

{
  void **ppvVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  HGLRC pHVar5;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_TOpenGLBuffer<FOpenGLBasePixelBuffer>::Unlock(void)___ptr64'::
                __l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->bIsLocked != 0) {
    pHVar5 = wglGetCurrentContext();
    if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    FOpenGLDynamicRHI::CachedBindBuffer
              (FOpenGLDynamicRHI::Singleton,(uint)this->_padding_,
               *(uint *)((longlong)&this->_padding_ + 4));
    if ((OpenGLConsoleVariables::bUseMapBuffer == 0) && (this->bIsLockReadOnly == 0)) {
      ppvVar1 = &this->LockBuffer;
      LoadData(this,this->LockOffset,this->LockSize,this->LockBuffer);
      if (*ppvVar1 == (void *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LockBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                           ,0x17e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (this->bLockBufferWasAllocated == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bLockBufferWasAllocated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                           ,0x181,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((this->_padding_ & 4) == 0) {
        FMemory::Free(*ppvVar1);
        this->bLockBufferWasAllocated = 0;
        this->LockSize = 0;
      }
      else {
        if (this->CachedBuffer != (void *)0x0) {
          FMemory::Free(this->CachedBuffer);
          this->CachedBufferSize = 0;
        }
        uVar3 = this->LockSize;
        if (this->LockSize < this->CachedBufferSize) {
          uVar3 = this->CachedBufferSize;
        }
        this->bLockBufferWasAllocated = 0;
        this->CachedBufferSize = uVar3;
        this->CachedBuffer = *ppvVar1;
        this->LockSize = 0;
      }
    }
    else {
      if (this->bLockBufferWasAllocated != 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bLockBufferWasAllocated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                           ,0x162,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (*glUnmapBuffer)((uint)this->_padding_);
    }
    this->LockBuffer = (void *)0x0;
    this->bIsLocked = 0;
  }
  return;
}

