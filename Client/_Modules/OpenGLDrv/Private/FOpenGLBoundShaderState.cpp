// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 9

// FOpenGLBoundShaderState @ 145be05b0

FOpenGLBoundShaderState * __thiscall
FOpenGLBoundShaderState::FOpenGLBoundShaderState
          (FOpenGLBoundShaderState *this,FOpenGLVertexDeclaration *param_1,
          FOpenGLVertexShader *param_2,FOpenGLPixelShader *param_3,FOpenGLGeometryShader *param_4)

{
  FOpenGLVertexDeclaration *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  ushort uVar5;
  FOpenGLLinkedProgram *pFVar6;
  FOpenGLBoundShaderState *pFVar7;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_BoundShaderState);
  this->_padding_ = (longlong)&___7FOpenGLBoundShaderState__6B_;
  FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
            (&this->CacheLink,(FRHIVertexDeclaration *)param_1,(FRHIVertexShader *)param_2,
             (FRHIPixelShader *)param_3,(FRHIGeometryShader *)param_4,(FRHIBoundShaderState *)this,
             true);
  pFVar6 = FindOrCreateLinkedProgram(param_2,param_3,param_4);
  this->LinkedProgram = pFVar6;
  (this->VertexDeclaration).Reference = param_1;
  if (param_1 != (FOpenGLVertexDeclaration *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_1);
  }
  (this->VertexShader).Reference = param_2;
  if (param_2 != (FOpenGLVertexShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  (this->PixelShader).Reference = param_3;
  if (param_3 != (FOpenGLPixelShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_3);
  }
  (this->GeometryShader).Reference = param_4;
  if (param_4 != (FOpenGLGeometryShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_4);
  }
  if ((this->VertexDeclaration).Reference == (FOpenGLVertexDeclaration *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexDeclaration",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,2999,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FOpenGLBoundShaderState *)(*pcVar2)();
      return pFVar7;
    }
  }
  pFVar1 = (this->VertexDeclaration).Reference;
  if (pFVar1 == (FOpenGLVertexDeclaration *)0x0) {
    uVar5 = 0;
    this->StreamStrides[0] = 0;
    this->StreamStrides[1] = 0;
    this->StreamStrides[2] = 0;
    this->StreamStrides[3] = 0;
    this->StreamStrides[4] = 0;
    this->StreamStrides[5] = 0;
    this->StreamStrides[6] = 0;
    this->StreamStrides[7] = 0;
    this->StreamStrides[8] = 0;
    this->StreamStrides[9] = 0;
    this->StreamStrides[10] = 0;
    this->StreamStrides[0xb] = 0;
    this->StreamStrides[0xc] = 0;
    this->StreamStrides[0xd] = 0;
    this->StreamStrides[0xe] = 0;
    this->StreamStrides[0xf] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(pFVar1->StreamStrides + 4);
    *(undefined8 *)this->StreamStrides = *(undefined8 *)pFVar1->StreamStrides;
    *(undefined8 *)(this->StreamStrides + 4) = uVar3;
    uVar3 = *(undefined8 *)(pFVar1->StreamStrides + 0xc);
    *(undefined8 *)(this->StreamStrides + 8) = *(undefined8 *)(pFVar1->StreamStrides + 8);
    *(undefined8 *)(this->StreamStrides + 0xc) = uVar3;
    uVar5 = pFVar1->StreamStrides[0x10];
  }
  this->StreamStrides[0x10] = uVar5;
  return this;
}

// ~FOpenGLBoundShaderState @ 145be9470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLBoundShaderState::~FOpenGLBoundShaderState(FOpenGLBoundShaderState *this)

{
  FOpenGLLinkedProgram *pFVar1;
  FOpenGLGeometryShader *this_00;
  FOpenGLPixelShader *this_01;
  FOpenGLVertexShader *this_02;
  FOpenGLVertexDeclaration *this_03;
  code *pcVar2;
  longlong lVar3;
  FOpenGLDynamicRHI *pFVar4;
  bool bVar5;
  HGLRC pHVar6;
  FGLProgramCache *this_04;
  
  this->_padding_ = (longlong)&___7FOpenGLBoundShaderState__6B_;
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((this->LinkedProgram == (FOpenGLLinkedProgram *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LinkedProgram",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0xbc7,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar5 = FGLProgramCache::IsUsingLRU();
  if (bVar5) {
    this_04 = GetOpenGLProgramsCache();
    bVar5 = FGLProgramCache::IsEvicted(this_04,(FOpenGLProgramKey *)this->LinkedProgram);
    if (bVar5) goto LAB_145be95ee;
  }
  pFVar1 = this->LinkedProgram;
  StaticLastReleasedPrograms[StaticLastReleasedProgramsIndex] = pFVar1;
  pFVar4 = FOpenGLDynamicRHI::Singleton;
  StaticLastReleasedProgramsIndex = StaticLastReleasedProgramsIndex + 1;
  if (StaticLastReleasedProgramsIndex == 10) {
    StaticLastReleasedProgramsIndex = 0;
  }
  lVar3 = pFVar1->_padding_;
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((pFVar4->ContextState).Program == (uint)lVar3) {
    (pFVar4->ContextState).Program = 0xffffffff;
  }
LAB_145be95ee:
  this_00 = (this->GeometryShader).Reference;
  if (this_00 != (FOpenGLGeometryShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->PixelShader).Reference;
  if (this_01 != (FOpenGLPixelShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->VertexShader).Reference;
  if (this_02 != (FOpenGLVertexShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02);
  }
  this_03 = (this->VertexDeclaration).Reference;
  if (this_03 != (FOpenGLVertexDeclaration *)0x0) {
    FRHIResource::Release((FRHIResource *)this_03);
  }
  FCachedBoundShaderStateLink::~FCachedBoundShaderStateLink(&this->CacheLink);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// FindOrCreateLinkedProgram @ 145c00260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOpenGLLinkedProgram * __cdecl
FOpenGLBoundShaderState::FindOrCreateLinkedProgram
          (FOpenGLVertexShader *param_1,FOpenGLPixelShader *param_2,FOpenGLGeometryShader *param_3)

{
  longlong lVar1;
  FGLProgramCache *pFVar2;
  FOpenGLLinkedProgram *pFVar3;
  FOpenGLLinkedProgram *pFVar4;
  FOpenGLLinkedProgram *this;
  uint uVar5;
  int iVar7;
  bool bVar8;
  undefined1 auStack_e8 [32];
  FOpenGLGeometryShader *local_c8;
  FOpenGLPixelShader *local_c0;
  FOpenGLVertexShader *local_b8;
  FOpenGLProgramKey local_b0;
  ulonglong local_38;
  FOpenGLLinkedProgram *pFVar6;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b0.ShaderHashes[2].Hash[0x10] = '\0';
  local_b0.ShaderHashes[2].Hash[0x11] = '\0';
  local_b0.ShaderHashes[2].Hash[0x12] = '\0';
  local_b0.ShaderHashes[2].Hash[0x13] = '\0';
  local_b0.ShaderHashes[3].Hash[0x10] = '\0';
  local_b0.ShaderHashes[3].Hash[0x11] = '\0';
  local_b0.ShaderHashes[3].Hash[0x12] = '\0';
  local_b0.ShaderHashes[3].Hash[0x13] = '\0';
  local_b0.ShaderHashes[4].Hash[0x10] = '\0';
  local_b0.ShaderHashes[4].Hash[0x11] = '\0';
  local_b0.ShaderHashes[4].Hash[0x12] = '\0';
  local_b0.ShaderHashes[4].Hash[0x13] = '\0';
  local_b0.ShaderHashes[5].Hash[0x10] = '\0';
  local_b0.ShaderHashes[5].Hash[0x11] = '\0';
  local_b0.ShaderHashes[5].Hash[0x12] = '\0';
  local_b0.ShaderHashes[5].Hash[0x13] = '\0';
  local_b0.ShaderHashes[2].Hash[0] = '\0';
  local_b0.ShaderHashes[2].Hash[1] = '\0';
  local_b0.ShaderHashes[2].Hash[2] = '\0';
  local_b0.ShaderHashes[2].Hash[3] = '\0';
  local_b0.ShaderHashes[2].Hash[4] = '\0';
  local_b0.ShaderHashes[2].Hash[5] = '\0';
  local_b0.ShaderHashes[2].Hash[6] = '\0';
  local_b0.ShaderHashes[2].Hash[7] = '\0';
  local_b0.ShaderHashes[2].Hash[8] = '\0';
  local_b0.ShaderHashes[2].Hash[9] = '\0';
  local_b0.ShaderHashes[2].Hash[10] = '\0';
  local_b0.ShaderHashes[2].Hash[0xb] = '\0';
  local_b0.ShaderHashes[2].Hash[0xc] = '\0';
  local_b0.ShaderHashes[2].Hash[0xd] = '\0';
  local_b0.ShaderHashes[2].Hash[0xe] = '\0';
  local_b0.ShaderHashes[2].Hash[0xf] = '\0';
  local_b0.ShaderHashes[3].Hash[0] = '\0';
  local_b0.ShaderHashes[3].Hash[1] = '\0';
  local_b0.ShaderHashes[3].Hash[2] = '\0';
  local_b0.ShaderHashes[3].Hash[3] = '\0';
  local_b0.ShaderHashes[3].Hash[4] = '\0';
  local_b0.ShaderHashes[3].Hash[5] = '\0';
  local_b0.ShaderHashes[3].Hash[6] = '\0';
  local_b0.ShaderHashes[3].Hash[7] = '\0';
  local_b0.ShaderHashes[3].Hash[8] = '\0';
  local_b0.ShaderHashes[3].Hash[9] = '\0';
  local_b0.ShaderHashes[3].Hash[10] = '\0';
  local_b0.ShaderHashes[3].Hash[0xb] = '\0';
  local_b0.ShaderHashes[3].Hash[0xc] = '\0';
  local_b0.ShaderHashes[3].Hash[0xd] = '\0';
  local_b0.ShaderHashes[3].Hash[0xe] = '\0';
  local_b0.ShaderHashes[3].Hash[0xf] = '\0';
  local_b0.ShaderHashes[4].Hash[0] = '\0';
  local_b0.ShaderHashes[4].Hash[1] = '\0';
  local_b0.ShaderHashes[4].Hash[2] = '\0';
  local_b0.ShaderHashes[4].Hash[3] = '\0';
  local_b0.ShaderHashes[4].Hash[4] = '\0';
  local_b0.ShaderHashes[4].Hash[5] = '\0';
  local_b0.ShaderHashes[4].Hash[6] = '\0';
  local_b0.ShaderHashes[4].Hash[7] = '\0';
  local_b0.ShaderHashes[4].Hash[8] = '\0';
  local_b0.ShaderHashes[4].Hash[9] = '\0';
  local_b0.ShaderHashes[4].Hash[10] = '\0';
  local_b0.ShaderHashes[4].Hash[0xb] = '\0';
  local_b0.ShaderHashes[4].Hash[0xc] = '\0';
  local_b0.ShaderHashes[4].Hash[0xd] = '\0';
  local_b0.ShaderHashes[4].Hash[0xe] = '\0';
  local_b0.ShaderHashes[4].Hash[0xf] = '\0';
  local_b0.ShaderHashes[5].Hash[0] = '\0';
  local_b0.ShaderHashes[5].Hash[1] = '\0';
  local_b0.ShaderHashes[5].Hash[2] = '\0';
  local_b0.ShaderHashes[5].Hash[3] = '\0';
  local_b0.ShaderHashes[5].Hash[4] = '\0';
  local_b0.ShaderHashes[5].Hash[5] = '\0';
  local_b0.ShaderHashes[5].Hash[6] = '\0';
  local_b0.ShaderHashes[5].Hash[7] = '\0';
  local_b0.ShaderHashes[5].Hash[8] = '\0';
  local_b0.ShaderHashes[5].Hash[9] = '\0';
  local_b0.ShaderHashes[5].Hash[10] = '\0';
  local_b0.ShaderHashes[5].Hash[0xb] = '\0';
  local_b0.ShaderHashes[5].Hash[0xc] = '\0';
  local_b0.ShaderHashes[5].Hash[0xd] = '\0';
  local_b0.ShaderHashes[5].Hash[0xe] = '\0';
  local_b0.ShaderHashes[5].Hash[0xf] = '\0';
  local_b0.ShaderHashes[0].Hash[0] = param_1->field_0xf0;
  local_b0.ShaderHashes[0].Hash[1] = param_1->field_0xf1;
  local_b0.ShaderHashes[0].Hash[2] = param_1->field_0xf2;
  local_b0.ShaderHashes[0].Hash[3] = param_1->field_0xf3;
  local_b0.ShaderHashes[0].Hash[4] = param_1->field_0xf4;
  local_b0.ShaderHashes[0].Hash[5] = param_1->field_0xf5;
  local_b0.ShaderHashes[0].Hash[6] = param_1->field_0xf6;
  local_b0.ShaderHashes[0].Hash[7] = param_1->field_0xf7;
  local_b0.ShaderHashes[0].Hash[8] = param_1->field_0xf8;
  local_b0.ShaderHashes[0].Hash[9] = param_1->field_0xf9;
  local_b0.ShaderHashes[0].Hash[10] = param_1->field_0xfa;
  local_b0.ShaderHashes[0].Hash[0xb] = param_1->field_0xfb;
  local_b0.ShaderHashes[0].Hash[0xc] = param_1->field_0xfc;
  local_b0.ShaderHashes[0].Hash[0xd] = param_1->field_0xfd;
  local_b0.ShaderHashes[0].Hash[0xe] = param_1->field_0xfe;
  local_b0.ShaderHashes[0].Hash[0xf] = param_1->field_0xff;
  local_b0.ShaderHashes[0].Hash[0x10] = param_1->field_0x100;
  local_b0.ShaderHashes[0].Hash[0x11] = param_1->field_0x101;
  local_b0.ShaderHashes[0].Hash[0x12] = param_1->field_0x102;
  local_b0.ShaderHashes[0].Hash[0x13] = param_1->field_0x103;
  local_b0.ShaderHashes[1].Hash[0] = param_2->field_0xf0;
  local_b0.ShaderHashes[1].Hash[1] = param_2->field_0xf1;
  local_b0.ShaderHashes[1].Hash[2] = param_2->field_0xf2;
  local_b0.ShaderHashes[1].Hash[3] = param_2->field_0xf3;
  local_b0.ShaderHashes[1].Hash[4] = param_2->field_0xf4;
  local_b0.ShaderHashes[1].Hash[5] = param_2->field_0xf5;
  local_b0.ShaderHashes[1].Hash[6] = param_2->field_0xf6;
  local_b0.ShaderHashes[1].Hash[7] = param_2->field_0xf7;
  local_b0.ShaderHashes[1].Hash[8] = param_2->field_0xf8;
  local_b0.ShaderHashes[1].Hash[9] = param_2->field_0xf9;
  local_b0.ShaderHashes[1].Hash[10] = param_2->field_0xfa;
  local_b0.ShaderHashes[1].Hash[0xb] = param_2->field_0xfb;
  local_b0.ShaderHashes[1].Hash[0xc] = param_2->field_0xfc;
  local_b0.ShaderHashes[1].Hash[0xd] = param_2->field_0xfd;
  local_b0.ShaderHashes[1].Hash[0xe] = param_2->field_0xfe;
  local_b0.ShaderHashes[1].Hash[0xf] = param_2->field_0xff;
  local_b0.ShaderHashes[1].Hash[0x10] = param_2->field_0x100;
  local_b0.ShaderHashes[1].Hash[0x11] = param_2->field_0x101;
  local_b0.ShaderHashes[1].Hash[0x12] = param_2->field_0x102;
  local_b0.ShaderHashes[1].Hash[0x13] = param_2->field_0x103;
  if (param_3 != (FOpenGLGeometryShader *)0x0) {
    local_b0.ShaderHashes[2].Hash[0] = param_3->field_0xf0;
    local_b0.ShaderHashes[2].Hash[1] = param_3->field_0xf1;
    local_b0.ShaderHashes[2].Hash[2] = param_3->field_0xf2;
    local_b0.ShaderHashes[2].Hash[3] = param_3->field_0xf3;
    local_b0.ShaderHashes[2].Hash[4] = param_3->field_0xf4;
    local_b0.ShaderHashes[2].Hash[5] = param_3->field_0xf5;
    local_b0.ShaderHashes[2].Hash[6] = param_3->field_0xf6;
    local_b0.ShaderHashes[2].Hash[7] = param_3->field_0xf7;
    local_b0.ShaderHashes[2].Hash[8] = param_3->field_0xf8;
    local_b0.ShaderHashes[2].Hash[9] = param_3->field_0xf9;
    local_b0.ShaderHashes[2].Hash[10] = param_3->field_0xfa;
    local_b0.ShaderHashes[2].Hash[0xb] = param_3->field_0xfb;
    local_b0.ShaderHashes[2].Hash[0xc] = param_3->field_0xfc;
    local_b0.ShaderHashes[2].Hash[0xd] = param_3->field_0xfd;
    local_b0.ShaderHashes[2].Hash[0xe] = param_3->field_0xfe;
    local_b0.ShaderHashes[2].Hash[0xf] = param_3->field_0xff;
    local_b0.ShaderHashes[2].Hash[0x10] = param_3->field_0x100;
    local_b0.ShaderHashes[2].Hash[0x11] = param_3->field_0x101;
    local_b0.ShaderHashes[2].Hash[0x12] = param_3->field_0x102;
    local_b0.ShaderHashes[2].Hash[0x13] = param_3->field_0x103;
  }
  this = (FOpenGLLinkedProgram *)0x0;
  pFVar4 = this;
  iVar7 = StaticLastReleasedProgramsIndex;
  do {
    pFVar3 = StaticLastReleasedPrograms[iVar7];
    local_c8 = param_3;
    local_c0 = param_2;
    local_b8 = param_1;
    if (pFVar3 != (FOpenGLLinkedProgram *)0x0) {
      bVar8 = true;
      pFVar6 = this;
      do {
        if (!bVar8) goto LAB_145c00385;
        lVar1 = *(longlong *)((longlong)&pFVar3->_padding_ + (longlong)pFVar6 * 0x14) -
                *(longlong *)local_b0.ShaderHashes[(longlong)pFVar6].Hash;
        if ((lVar1 == 0) &&
           (lVar1 = *(longlong *)((longlong)&pFVar3->_padding_ + (longlong)pFVar6 * 0x14) -
                    *(longlong *)(local_b0.ShaderHashes[(longlong)pFVar6].Hash + 8), lVar1 == 0)) {
          lVar1 = (ulonglong)*(uint *)((longlong)&pFVar3->_padding_ + (longlong)pFVar6 * 0x14) -
                  (ulonglong)*(uint *)(local_b0.ShaderHashes[(longlong)pFVar6].Hash + 0x10);
        }
        bVar8 = lVar1 == 0;
        uVar5 = (int)pFVar6 + 1;
        pFVar6 = (FOpenGLLinkedProgram *)(ulonglong)uVar5;
      } while (uVar5 < 6);
      if (bVar8) {
        StaticLastReleasedPrograms[iVar7] = (FOpenGLLinkedProgram *)0x0;
        pFVar2 = GetOpenGLProgramsCache();
        FGLProgramCache::Touch(pFVar2,pFVar3);
        goto LAB_145c0042b;
      }
    }
LAB_145c00385:
    uVar5 = (int)pFVar4 + 1;
    pFVar4 = (FOpenGLLinkedProgram *)(ulonglong)uVar5;
    iVar7 = (iVar7 + 1) % 10;
  } while ((int)uVar5 < 10);
  pFVar2 = GetOpenGLProgramsCache();
  pFVar3 = FGLProgramCache::Find(pFVar2,&local_b0,true);
  if (pFVar3 == (FOpenGLLinkedProgram *)0x0) {
    bVar8 = FOpenGLProgramBinaryCache::CheckSinglePendingGLProgramCreateRequest(&local_b0);
    if (bVar8) {
      pFVar2 = GetOpenGLProgramsCache();
      pFVar3 = FGLProgramCache::Find(pFVar2,&local_b0,true);
      if (pFVar3 != (FOpenGLLinkedProgram *)0x0) goto LAB_145c0042b;
    }
    pFVar4 = ::operator_new(0x2a8);
    if (pFVar4 != (FOpenGLLinkedProgram *)0x0) {
      this = FOpenGLLinkedProgram::FOpenGLLinkedProgram(pFVar4,param_1,param_2,param_3);
    }
  }
  else {
LAB_145c0042b:
    this = pFVar3;
    FOpenGLLinkedProgram::
    UpdateShaders<FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLVertexShader_*_&,FOpenGLPixelShader_*_&,FOpenGLGeometryShader_*_&>
              (this,&local_b8,&local_c0,&local_c8);
  }
  return this;
}

// GetNumUniformBuffers @ 145c02a50

void __thiscall
FOpenGLBoundShaderState::GetNumUniformBuffers(FOpenGLBoundShaderState *this,int *param_1)

{
  FOpenGLGeometryShader *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((((this->VertexShader).Reference == (FOpenGLVertexShader *)0x0) ||
      ((this->PixelShader).Reference == (FOpenGLPixelShader *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(VertexShader) && IsValidRef(PixelShader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0xbee,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *param_1 = (uint)(byte)((this->VertexShader).Reference)->field_0x155;
  param_1[3] = (uint)(byte)((this->PixelShader).Reference)->field_0x155;
  pFVar1 = (this->GeometryShader).Reference;
  if (pFVar1 == (FOpenGLGeometryShader *)0x0) {
    param_1[4] = -1;
    return;
  }
  param_1[4] = (uint)(byte)pFVar1->field_0x155;
  return;
}

// GetTextureNeeds @ 145c04760

TBitArray<FDefaultBitArrayAllocator> * __thiscall
FOpenGLBoundShaderState::GetTextureNeeds(FOpenGLBoundShaderState *this,int *param_1)

{
  *param_1 = (int)this->LinkedProgram->_padding_;
  return (TBitArray<FDefaultBitArrayAllocator> *)&this->LinkedProgram->_padding_;
}

// GetUAVNeeds @ 145c04840

TBitArray<FDefaultBitArrayAllocator> * __thiscall
FOpenGLBoundShaderState::GetUAVNeeds(FOpenGLBoundShaderState *this,int *param_1)

{
  *param_1 = *(int *)((longlong)&this->LinkedProgram->_padding_ + 4);
  return (TBitArray<FDefaultBitArrayAllocator> *)&this->LinkedProgram->_padding_;
}

// MaxTextureStageUsed @ 145c0d8b0

int __thiscall FOpenGLBoundShaderState::MaxTextureStageUsed(FOpenGLBoundShaderState *this)

{
  return (int)this->LinkedProgram->_padding_;
}

// NeedsTextureStage @ 145c0dc40

bool __thiscall
FOpenGLBoundShaderState::NeedsTextureStage(FOpenGLBoundShaderState *this,int param_1)

{
  FOpenGLLinkedProgram *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  
  pFVar1 = this->LinkedProgram;
  if ((param_1 < 0) || ((int)pFVar1->_padding_ <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar5 = (longlong *)pFVar1->_padding_;
  if ((longlong *)pFVar1->_padding_ == (longlong *)0x0) {
    plVar5 = &pFVar1->_padding_;
  }
  return (*(uint *)((longlong)plVar5 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// RequiresDriverInstantiation @ 145c2a160

bool __thiscall FOpenGLBoundShaderState::RequiresDriverInstantiation(FOpenGLBoundShaderState *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (this->LinkedProgram == (FOpenGLLinkedProgram *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LinkedProgram",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0xbf8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  cVar1 = *(char *)((longlong)&this->LinkedProgram->_padding_ + 4);
  *(undefined1 *)((longlong)&this->LinkedProgram->_padding_ + 4) = 1;
  return cVar1 == '\0';
}

