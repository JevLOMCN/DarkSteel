// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// InitRHI @ 144b78310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstanceCullingOcclusionQueryBox::InitRHI
          (FInstanceCullingOcclusionQueryBox *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  FRHIBuffer *pFVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRHIResource *this_01;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  TArray<FVertexElement,TFixedAllocator<17>_> *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_208 [16];
  undefined1 local_1f8 [40];
  FNameEntryId local_1d0;
  uint uStack_1cc;
  FName FStack_1c8;
  TTypeCompatibleBytes<FVertexElement> local_1c0;
  TTypeCompatibleBytes<FVertexElement> local_1b8;
  uchar auStack_1b0 [4];
  int iStack_1ac;
  wchar_t *local_1a8;
  TTypeCompatibleBytes<FVertexElement> TStack_1a0;
  ERHIAccess local_198;
  uchar auStack_194 [4];
  TTypeCompatibleBytes<FVertexElement> TStack_190;
  TTypeCompatibleBytes<FVertexElement> local_188;
  undefined **local_180;
  ushort **local_178;
  undefined4 local_170;
  undefined **local_168;
  TVector<float> **local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  wchar_t *local_140;
  uchar auStack_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  wchar_t *local_108;
  uchar auStack_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  TArray<FVertexElement,TFixedAllocator<17>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FInstanceCullingOcclusionQueryBox::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FInstanceCullingOcclusionQueryBox::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FInstanceCullingOcclusionQueryBox::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_virtual_void___cdecl_FInstanceCullingOcclusionQueryBox::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::BoxVertexBufferData = ___xmm_3f8000003f8000003f800000bf800000;
      uRam00000001550c0a28 = _UNK_150e5b7b8;
      _DAT_1550c0a30 = ___xmm_bf8000003f8000003f8000003f800000;
      uRam00000001550c0a38 = _UNK_15076c628;
      _DAT_1550c0a40 = ___xmm_3f800000bf800000bf8000003f800000;
      uRam00000001550c0a48 = _UNK_150b51a68;
      _DAT_1550c0a50 = ___xmm_bf800000bf8000003f8000003f800000;
      uRam00000001550c0a58 = _UNK_150e5b7e8;
      _DAT_1550c0a60 = ___xmm_bf800000bf800000bf8000003f800000;
      uRam00000001550c0a68 = _UNK_150e5b808;
      _DAT_1550c0a70 = ___xmm_bf800000bf8000003f800000bf800000;
      uRam00000001550c0a78 = _UNK_150e5b7f8;
      _Init_thread_footer(&`public:_virtual_void___cdecl_FInstanceCullingOcclusionQueryBox::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_1d0.Value = RHIGetDefaultResourceState(IndexBuffer,false);
  local_1f8._32_8_ = &local_180;
  local_178 = &`public:_virtual_void___cdecl_FInstanceCullingOcclusionQueryBox::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::BoxIndexBufferData;
  local_1f8[8] = 'x';
  local_1f8[9] = '\0';
  local_1f8[10] = '\0';
  local_1f8[0xb] = '\0';
  local_1f8[0xc] = '\x02';
  local_1f8[0xd] = '\0';
  local_1f8[0xe] = '\0';
  local_1f8[0xf] = '\0';
  local_1f8._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1f8._24_8_ = L"FInstanceCullingOcclusionQueryBox_IndexBuffer";
  local_1f8[0x10] = '\0';
  local_1f8[0x11] = 0x80;
  local_1f8[0x12] = '\0';
  local_1f8[0x13] = '\0';
  local_150 = 0x200000078;
  uStack_148 = CONCAT44(local_1f8._20_4_,0x8000);
  FStack_1c8.ComparisonIndex.Value = 0;
  FStack_1c8.Number = 0;
  local_140 = L"FInstanceCullingOcclusionQueryBox_IndexBuffer";
  uStack_1cc = 2;
  local_1c0.Pad[0] = '\0';
  local_1c0.Pad[1] = '\0';
  local_1c0.Pad[2] = '\0';
  local_1c0.Pad[3] = '\0';
  local_1c0.Pad[4] = '\0';
  local_1c0.Pad[5] = '\0';
  local_1c0.Pad[6] = '\0';
  local_1c0.Pad[7] = '\0';
  local_130 = CONCAT44(2,local_1d0.Value);
  local_180 = &___7FResourceArrayUploadArrayView__6B_;
  uStack_128 = 0;
  local_170 = 0x78;
  local_120 = 0;
  auStack_138 = (uchar  [8])local_1f8._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)(local_208 + 8));
  pTVar1 = &this->IndexBuffer;
  local_180 = &___7FResourceArrayUploadInterface__6B_;
  if (pTVar1 == (TRefCountPtr<FRHIBuffer> *)(local_208 + 8)) {
LAB_144b78453:
    if ((uchar  [8])local_208._8_8_ != (uchar  [8])0x0) {
      FRHIResource::Release((FRHIResource *)local_208._8_8_);
    }
  }
  else {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)local_208._8_8_;
    local_208[8] = '\0';
    local_208[9] = '\0';
    local_208[10] = '\0';
    local_208[0xb] = '\0';
    local_208[0xc] = '\0';
    local_208[0xd] = '\0';
    local_208[0xe] = '\0';
    local_208[0xf] = '\0';
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
      goto LAB_144b78453;
    }
  }
  local_198 = RHIGetDefaultResourceState(VertexBuffer,false);
  local_1a8 = L"FInstanceCullingOcclusionQueryBox_VertexBuffer";
  TStack_1a0.Pad = (uchar  [8])&local_168;
  iStack_1ac = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1b8.Pad[0] = '`';
  local_1b8.Pad[1] = '\0';
  local_1b8.Pad[2] = '\0';
  local_1b8.Pad[3] = '\0';
  local_1b8.Pad[4] = '\0';
  local_1b8.Pad[5] = '\0';
  local_1b8.Pad[6] = '\0';
  local_1b8.Pad[7] = '\0';
  local_108 = L"FInstanceCullingOcclusionQueryBox_VertexBuffer";
  auStack_1b0[0] = '\0';
  auStack_1b0[1] = '@';
  auStack_1b0[2] = '\0';
  auStack_1b0[3] = '\0';
  uStack_110 = CONCAT44(iStack_1ac,0x4000);
  TStack_190.Pad[0] = '\0';
  TStack_190.Pad[1] = '\0';
  TStack_190.Pad[2] = '\0';
  TStack_190.Pad[3] = '\0';
  TStack_190.Pad[4] = '\0';
  TStack_190.Pad[5] = '\0';
  TStack_190.Pad[6] = '\0';
  TStack_190.Pad[7] = '\0';
  auStack_194[0] = '\x02';
  auStack_194[1] = '\0';
  auStack_194[2] = '\0';
  auStack_194[3] = '\0';
  local_118 = 0x60;
  local_188.Pad[0] = '\0';
  local_188.Pad[1] = '\0';
  local_188.Pad[2] = '\0';
  local_188.Pad[3] = '\0';
  local_188.Pad[4] = '\0';
  local_188.Pad[5] = '\0';
  local_188.Pad[6] = '\0';
  local_188.Pad[7] = '\0';
  local_f8 = CONCAT44(2,local_198);
  local_168 = &___7FResourceArrayUploadArrayView__6B_;
  uStack_f0 = 0;
  local_160 = &`public:_virtual_void___cdecl_FInstanceCullingOcclusionQueryBox::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::BoxVertexBufferData;
  local_158 = 0x60;
  local_e8 = 0;
  auStack_100 = TStack_1a0.Pad;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_1f8);
  pTVar1 = &this->VertexBuffer;
  local_168 = &___7FResourceArrayUploadInterface__6B_;
  if (pTVar1 != (TRefCountPtr<FRHIBuffer> *)local_1f8) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)local_1f8._0_8_;
    local_1f8[0] = '\0';
    local_1f8[1] = '\0';
    local_1f8[2] = '\0';
    local_1f8[3] = '\0';
    local_1f8[4] = '\0';
    local_1f8[5] = '\0';
    local_1f8[6] = '\0';
    local_1f8[7] = '\0';
    if (pFVar2 == (FRHIBuffer *)0x0) goto LAB_144b78533;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  if ((uchar  [8])local_1f8._0_8_ != (uchar  [8])0x0) {
    FRHIResource::Release((FRHIResource *)local_1f8._0_8_);
  }
LAB_144b78533:
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0x11;
  local_208[0] = '\0';
  local_208[1] = '\0';
  local_208[2] = '\x03';
  local_208[3] = '\0';
  local_208[4] = '\f';
  local_208[5] = '\0';
  local_208[6] = '\0';
  local_208[7] = '\0';
  iVar5 = 0;
  if ((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_208) &&
     (local_208 < &local_d8.ArrayNum)) {
    local_218 = 8;
    local_230 = &local_d8;
    local_220 = 0;
    local_228 = 0x11;
    local_238 = local_208;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = local_d8.ArrayNum;
    if (local_d8.ArrayNum == local_d8.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
    }
  }
  local_d8.ArrayNum = iVar5 + 1;
  *(ulonglong *)local_d8.AllocatorInstance.InlineData[iVar5].Pad =
       CONCAT26(local_208._6_2_,CONCAT42(local_208._2_4_,local_208._0_2_));
  this_01 = (FRHIResource *)PipelineStateCache::GetOrCreateVertexDeclaration(&local_d8);
  this_00 = (FRHIResource *)(this->VertexDeclaration).Reference;
  if (this_00 != this_01) {
    (this->VertexDeclaration).Reference = (FRHIVertexDeclaration *)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// ReleaseRHI @ 144b78700

void __thiscall
FInstanceCullingOcclusionQueryBox::ReleaseRHI(FInstanceCullingOcclusionQueryBox *this)

{
  FRHIBuffer *pFVar1;
  FRHIResource *this_00;
  
  pFVar1 = (this->IndexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->IndexBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->VertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->VertexBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this_00 = (FRHIResource *)(this->VertexDeclaration).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->VertexDeclaration).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ~FInstanceCullingOcclusionQueryBox @ 144b99420

void __thiscall
FInstanceCullingOcclusionQueryBox::~FInstanceCullingOcclusionQueryBox
          (FInstanceCullingOcclusionQueryBox *this)

{
  FRHIResource *this_00;
  FRHIBuffer *pFVar1;
  
  this->_padding_ = (longlong)&___7FInstanceCullingOcclusionQueryBox__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclaration).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  pFVar1 = (this->VertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->IndexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

