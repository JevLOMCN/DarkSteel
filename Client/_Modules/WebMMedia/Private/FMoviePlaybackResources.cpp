// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 3

// InitRHI @ 14f118860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
_anon_5A0D1067::FMoviePlaybackResources::InitRHI
          (FMoviePlaybackResources *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  FRHIResource *this_00;
  FRHIBuffer *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRHIResource *this_02;
  longlong lVar5;
  undefined1 auStack_228 [32];
  undefined1 *local_208;
  TArray<FVertexElement,TFixedAllocator<17>_> *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8 [10];
  uchar auStack_1ce [6];
  undefined1 local_1c8 [40];
  FNameEntryId local_1a0;
  uint uStack_19c;
  FName FStack_198;
  TTypeCompatibleBytes<FVertexElement> local_190;
  undefined **local_188;
  TTypeCompatibleBytes<FVertexElement> local_180;
  uchar local_178 [8];
  TTypeCompatibleBytes<FVertexElement> local_170;
  TTypeCompatibleBytes<FVertexElement> TStack_168;
  wchar_t *local_160;
  TTypeCompatibleBytes<FVertexElement> TStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  TArray<FVertexElement,TFixedAllocator<17>_> local_138;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_138.ArrayMax = 0x11;
  local_1d8[2] = '\x04';
  local_1d8[3] = '\0';
  local_1d8[4] = ' ';
  local_1d8[5] = '\0';
  local_138.ArrayNum = 0;
  local_1d8[0] = '\0';
  local_1d8[1] = '\0';
  local_1d8[6] = '\0';
  local_1d8[7] = '\0';
  iVar4 = 0;
  if ((&local_138 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_1d8) &&
     (local_1d8 < &local_138.ArrayNum)) {
    local_1e8 = 8;
    local_200 = &local_138;
    local_1f0 = 0;
    local_1f8 = 0x11;
    local_208 = local_1d8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
  }
  local_138.ArrayNum = iVar4 + 1;
  local_1d8[8] = '\0';
  local_1d8[9] = '\x10';
  builtin_memcpy(auStack_1ce,"\x02\x01 ",4);
  auStack_1ce[4] = '\0';
  auStack_1ce[5] = '\0';
  *(ulonglong *)local_138.AllocatorInstance.InlineData[iVar4].Pad =
       CONCAT26(local_1d8._6_2_,CONCAT42(local_1d8._2_4_,local_1d8._0_2_));
  if ((&local_138 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_1d8 + 8)) &&
     (local_1d8 + 8 < local_138.AllocatorInstance.InlineData + local_138.ArrayMax)) {
    local_1f0 = (longlong)local_138.ArrayNum;
    local_1e8 = 8;
    local_200 = &local_138;
    local_208 = local_1d8 + 8;
    local_1f8 = (longlong)local_138.ArrayMax;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_138.ArrayNum == local_138.ArrayMax) {
    local_138.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_138.AllocatorInstance,&local_138.ArrayMax);
  }
  lVar5 = (longlong)local_138.ArrayNum;
  local_138.ArrayNum = local_138.ArrayNum + 1;
  *(ulonglong *)local_138.AllocatorInstance.InlineData[lVar5].Pad =
       CONCAT26(auStack_1ce._4_2_,CONCAT42(auStack_1ce._0_4_,local_1d8._8_2_));
  this_02 = (FRHIResource *)PipelineStateCache::GetOrCreateVertexDeclaration(&local_138);
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != this_02) {
    (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)this_02;
    if (this_02 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_02);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  local_a8 = ___xmm_3f8000003f8000003f800000bf800000;
  uStack_a0 = _UNK_150e5b7b8;
  local_88 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_80 = _UNK_15076b1f8;
  local_68 = ___xmm_3f8000003f800000bf800000bf800000;
  uStack_60 = _UNK_152e8cda8;
  local_48 = ___xmm_3f8000003f800000bf8000003f800000;
  uStack_40 = _UNK_150a9e568;
  local_98 = 0;
  local_78 = 0x3f800000;
  local_58 = 0;
  local_54 = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  local_1a0.Value = RHIGetDefaultResourceState(VertexBuffer|Static,false);
  local_188 = &___7FResourceArrayUploadArrayView__6B_;
  local_1c8._32_8_ = &local_188;
  local_1c8._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1c8._24_8_ = L"FMoviePlaybackResources";
  local_1c8[8] = 0x80;
  local_1c8[9] = '\0';
  local_1c8[10] = '\0';
  local_1c8[0xb] = '\0';
  local_1c8[0xc] = '\0';
  local_1c8[0xd] = '\0';
  local_1c8[0xe] = '\0';
  local_1c8[0xf] = '\0';
  local_160 = L"FMoviePlaybackResources";
  local_1c8[0x10] = '\x01';
  local_1c8[0x11] = '@';
  local_1c8[0x12] = '\0';
  local_1c8[0x13] = '\0';
  TStack_168.Pad._4_4_ = local_1c8._20_4_;
  TStack_168.Pad[0] = '\x01';
  TStack_168.Pad[1] = '@';
  TStack_168.Pad[2] = '\0';
  TStack_168.Pad[3] = '\0';
  FStack_198.ComparisonIndex.Value = 0;
  FStack_198.Number = 0;
  uStack_19c = 2;
  local_170.Pad[0] = 0x80;
  local_170.Pad[1] = '\0';
  local_170.Pad[2] = '\0';
  local_170.Pad[3] = '\0';
  local_170.Pad[4] = '\0';
  local_170.Pad[5] = '\0';
  local_170.Pad[6] = '\0';
  local_170.Pad[7] = '\0';
  local_190.Pad[0] = '\0';
  local_190.Pad[1] = '\0';
  local_190.Pad[2] = '\0';
  local_190.Pad[3] = '\0';
  local_190.Pad[4] = '\0';
  local_190.Pad[5] = '\0';
  local_190.Pad[6] = '\0';
  local_190.Pad[7] = '\0';
  local_150._4_4_ = 2;
  local_150._0_4_ = local_1a0.Value;
  uStack_148 = 0;
  local_178[0] = 0x80;
  local_178[1] = '\0';
  local_178[2] = '\0';
  local_178[3] = '\0';
  local_140 = 0;
  local_180.Pad = (uchar  [8])&local_a8;
  TStack_158.Pad = (uchar  [8])local_1c8._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_1c8);
  pTVar1 = &this->VertexBufferRHI;
  if (pTVar1 != (TRefCountPtr<FRHIBuffer> *)local_1c8) {
    this_01 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)local_1c8._0_8_;
    local_1c8[0] = '\0';
    local_1c8[1] = '\0';
    local_1c8[2] = '\0';
    local_1c8[3] = '\0';
    local_1c8[4] = '\0';
    local_1c8[5] = '\0';
    local_1c8[6] = '\0';
    local_1c8[7] = '\0';
    if (this_01 == (FRHIBuffer *)0x0) {
      return;
    }
    FRHIResource::Release((FRHIResource *)this_01);
  }
  if ((uchar  [8])local_1c8._0_8_ != (uchar  [8])0x0) {
    FRHIResource::Release((FRHIResource *)local_1c8._0_8_);
  }
  return;
}

// ReleaseRHI @ 14f118bc0

void __thiscall _anon_5A0D1067::FMoviePlaybackResources::ReleaseRHI(FMoviePlaybackResources *this)

{
  FRHIResource *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(this_00);
  }
  this_01 = (this->VertexBufferRHI).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    (this->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

// ~FMoviePlaybackResources @ 14f11a120

void __thiscall
_anon_5A0D1067::FMoviePlaybackResources::~FMoviePlaybackResources(FMoviePlaybackResources *this)

{
  FRHIBuffer *this_00;
  FRHIResource *this_01;
  
  this->_padding_ = (longlong)&::FMoviePlaybackResources::_vftable_;
  this_00 = (this->VertexBufferRHI).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

