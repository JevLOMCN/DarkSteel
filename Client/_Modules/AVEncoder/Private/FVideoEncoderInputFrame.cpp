// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 10

// FVideoEncoderInputFrame @ 148d005b0

FVideoEncoderInputFrame * __thiscall
AVEncoder::FVideoEncoderInputFrame::FVideoEncoderInputFrame
          (FVideoEncoderInputFrame *this,FVideoEncoderInputFrame *param_1)

{
  uint uVar1;
  EVideoFrameFormat EVar2;
  ID3D11Texture2D *pIVar3;
  ID3D12Resource *pIVar4;
  
  this->_padding_ = (longlong)&___7FVideoEncoderInputFrame_AVEncoder__6B_;
  *(undefined8 *)&this->OnTextureEncode = 0;
  *(undefined8 *)&(this->OnTextureEncode).field_0x28 = 0;
  *(undefined8 *)&this->OnReleaseVulkanSurface = 0;
  *(undefined8 *)&(this->OnReleaseVulkanSurface).field_0x28 = 0;
  this->FrameID = param_1->FrameID;
  this->TimestampUs = param_1->TimestampUs;
  this->TimestampRTP = param_1->TimestampRTP;
  (this->NumReferences).Counter = 0;
  this->Width = param_1->Width;
  uVar1 = param_1->Height;
  (this->YUV420P).Data[0] = (uchar *)0x0;
  (this->YUV420P).Data[1] = (uchar *)0x0;
  (this->YUV420P).Data[2] = (uchar *)0x0;
  (this->YUV420P).StrideY = 0;
  (this->YUV420P).StrideU = 0;
  (this->YUV420P).StrideV = 0;
  this->Height = uVar1;
  this->bFreeYUV420PData = false;
  EVar2 = param_1->Format;
  (this->D3D11).Texture = (ID3D11Texture2D *)0x0;
  (this->D3D11).EncoderDevice = (ID3D11Device *)0x0;
  (this->D3D11).EncoderTexture = (ID3D11Texture2D *)0x0;
  (this->D3D11).SharedHandle = (void *)0x0;
  *(undefined8 *)&this->OnReleaseD3D11Texture = 0;
  *(undefined8 *)&(this->OnReleaseD3D11Texture).field_0x28 = 0;
  (this->D3D12).Texture = (ID3D12Resource *)0x0;
  (this->D3D12).EncoderDevice = (ID3D12Device *)0x0;
  (this->D3D12).EncoderTexture = (ID3D12Resource *)0x0;
  *(undefined8 *)&this->OnReleaseD3D12Texture = 0;
  *(undefined8 *)&(this->OnReleaseD3D12Texture).field_0x28 = 0;
  (this->CUDA).EncoderTexture = (CUarray_st *)0x0;
  (this->CUDA).EncoderDevice = (CUctx_st *)0x0;
  (this->CUDA).SharedHandle = (void *)0x0;
  (this->CUDA).UnderlyingRHI = Undefined;
  *(undefined8 *)&this->OnReleaseCUDATexture = 0;
  *(undefined8 *)&(this->OnReleaseCUDATexture).field_0x28 = 0;
  (this->Vulkan).EncoderTexture = (VkImage_T *)0x0;
  (this->Vulkan).EncoderMemorySize = 0;
  (this->Vulkan).EncoderSurface = (void *)0x0;
  *(undefined8 *)&this->OnReleaseVulkanTexture = 0;
  *(undefined8 *)&(this->OnReleaseVulkanTexture).field_0x28 = 0;
  this->Format = EVar2;
  (this->D3D11).EncoderDevice = (param_1->D3D11).EncoderDevice;
  (this->D3D11).Texture = (param_1->D3D11).Texture;
  pIVar3 = (param_1->D3D11).EncoderTexture;
  (this->D3D11).EncoderTexture = pIVar3;
  if (pIVar3 != (ID3D11Texture2D *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))();
  }
  (this->D3D12).EncoderDevice = (param_1->D3D12).EncoderDevice;
  (this->D3D12).Texture = (param_1->D3D12).Texture;
  pIVar4 = (param_1->D3D12).EncoderTexture;
  (this->D3D12).EncoderTexture = pIVar4;
  if (pIVar4 != (ID3D12Resource *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))();
  }
  (this->CUDA).EncoderDevice = (param_1->CUDA).EncoderDevice;
  (this->CUDA).EncoderTexture = (param_1->CUDA).EncoderTexture;
  return this;
}

// FVideoEncoderInputFrame @ 148d00780

FVideoEncoderInputFrame * __thiscall
AVEncoder::FVideoEncoderInputFrame::FVideoEncoderInputFrame(FVideoEncoderInputFrame *this)

{
  this->_padding_ = (longlong)&___7FVideoEncoderInputFrame_AVEncoder__6B_;
  *(undefined8 *)&this->OnTextureEncode = 0;
  *(undefined8 *)&(this->OnTextureEncode).field_0x28 = 0;
  *(undefined8 *)&this->OnReleaseVulkanSurface = 0;
  *(undefined8 *)&(this->OnReleaseVulkanSurface).field_0x28 = 0;
  this->FrameID = 0;
  this->TimestampUs = 0;
  this->TimestampRTP = 0;
  (this->NumReferences).Counter = 0;
  this->Width = 0;
  this->Height = 0;
  (this->YUV420P).Data[0] = (uchar *)0x0;
  (this->YUV420P).Data[1] = (uchar *)0x0;
  (this->YUV420P).Data[2] = (uchar *)0x0;
  (this->YUV420P).StrideY = 0;
  (this->YUV420P).StrideU = 0;
  (this->YUV420P).StrideV = 0;
  this->bFreeYUV420PData = false;
  this->Format = Undefined;
  (this->D3D11).Texture = (ID3D11Texture2D *)0x0;
  (this->D3D11).EncoderDevice = (ID3D11Device *)0x0;
  (this->D3D11).EncoderTexture = (ID3D11Texture2D *)0x0;
  (this->D3D11).SharedHandle = (void *)0x0;
  *(undefined8 *)&this->OnReleaseD3D11Texture = 0;
  *(undefined8 *)&(this->OnReleaseD3D11Texture).field_0x28 = 0;
  (this->D3D12).Texture = (ID3D12Resource *)0x0;
  (this->D3D12).EncoderDevice = (ID3D12Device *)0x0;
  (this->D3D12).EncoderTexture = (ID3D12Resource *)0x0;
  *(undefined8 *)&this->OnReleaseD3D12Texture = 0;
  *(undefined8 *)&(this->OnReleaseD3D12Texture).field_0x28 = 0;
  (this->CUDA).EncoderTexture = (CUarray_st *)0x0;
  (this->CUDA).EncoderDevice = (CUctx_st *)0x0;
  (this->CUDA).SharedHandle = (void *)0x0;
  (this->CUDA).UnderlyingRHI = Undefined;
  *(undefined8 *)&this->OnReleaseCUDATexture = 0;
  *(undefined8 *)&(this->OnReleaseCUDATexture).field_0x28 = 0;
  (this->Vulkan).EncoderTexture = (VkImage_T *)0x0;
  (this->Vulkan).EncoderMemorySize = 0;
  (this->Vulkan).EncoderSurface = (void *)0x0;
  *(undefined8 *)&this->OnReleaseVulkanTexture = 0;
  *(undefined8 *)&(this->OnReleaseVulkanTexture).field_0x28 = 0;
  return this;
}

// ~FVideoEncoderInputFrame @ 148d01930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AVEncoder::FVideoEncoderInputFrame::~FVideoEncoderInputFrame(FVideoEncoderInputFrame *this)

{
  ID3D11Texture2D *pIVar1;
  HANDLE pvVar2;
  code *pcVar3;
  longlong *plVar4;
  ID3D12Resource *pIVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ID3D11Texture2D *local_res8;
  
  this->_padding_ = (longlong)&___7FVideoEncoderInputFrame_AVEncoder__6B_;
  if (this->bFreeYUV420PData != false) {
    operator_delete__((this->YUV420P).Data[0]);
    operator_delete__((this->YUV420P).Data[1]);
    operator_delete__((this->YUV420P).Data[2]);
    (this->YUV420P).Data[2] = (uchar *)0x0;
    (this->YUV420P).Data[1] = (uchar *)0x0;
    (this->YUV420P).Data[0] = (uchar *)0x0;
    this->bFreeYUV420PData = false;
  }
  pIVar1 = (this->D3D11).EncoderTexture;
  if (pIVar1 != (ID3D11Texture2D *)0x0) {
    uVar6 = (**(code **)((longlong)*pIVar1 + 8))();
    if ((2 < uVar6) && (2 < (byte)LogVideoEncoder._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
    }
    (**(code **)((longlong)*(this->D3D11).EncoderTexture + 0x10))();
    (**(code **)((longlong)*(this->D3D11).EncoderTexture + 0x10))();
    (this->D3D11).EncoderTexture = (ID3D11Texture2D *)0x0;
  }
  pvVar2 = (this->D3D11).SharedHandle;
  if (pvVar2 != (HANDLE)0x0) {
    CloseHandle(pvVar2);
    (this->D3D11).SharedHandle = (void *)0x0;
  }
  pIVar1 = (this->D3D11).Texture;
  if ((pIVar1 != (ID3D11Texture2D *)0x0) && (*(void **)&this->OnReleaseD3D11Texture != (void *)0x0))
  {
    local_res8 = pIVar1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnReleaseD3D11Texture);
    pcVar3 = *(code **)&this->OnReleaseD3D11Texture;
    plVar4 = *(longlong **)&(this->OnReleaseD3D11Texture).field_0x28;
    plVar8 = (longlong *)&(this->OnReleaseD3D11Texture).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar7,&local_res8);
  }
  pIVar5 = (this->D3D12).EncoderTexture;
  if (pIVar5 != (ID3D12Resource *)0x0) {
    uVar6 = (**(code **)((longlong)*pIVar5 + 8))();
    if ((2 < uVar6) && (2 < (byte)LogVideoEncoder._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
    }
    (**(code **)((longlong)*(this->D3D12).EncoderTexture + 0x10))();
    (**(code **)((longlong)*(this->D3D12).EncoderTexture + 0x10))();
    (this->D3D12).EncoderTexture = (ID3D12Resource *)0x0;
  }
  pIVar1 = (ID3D11Texture2D *)(this->D3D12).Texture;
  if ((pIVar1 != (ID3D11Texture2D *)0x0) && (*(void **)&this->OnReleaseD3D12Texture != (void *)0x0))
  {
    local_res8 = pIVar1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnReleaseD3D12Texture);
    pcVar3 = *(code **)&this->OnReleaseD3D12Texture;
    plVar4 = *(longlong **)&(this->OnReleaseD3D12Texture).field_0x28;
    plVar8 = (longlong *)&(this->OnReleaseD3D12Texture).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar7,&local_res8);
    (this->D3D12).Texture = (ID3D12Resource *)0x0;
  }
  pvVar2 = (this->CUDA).SharedHandle;
  if (pvVar2 != (HANDLE)0x0) {
    CloseHandle(pvVar2);
    (this->CUDA).SharedHandle = (void *)0x0;
  }
  pIVar1 = (ID3D11Texture2D *)(this->CUDA).EncoderTexture;
  if (pIVar1 != (ID3D11Texture2D *)0x0) {
    local_res8 = pIVar1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnReleaseCUDATexture);
    pcVar3 = *(code **)&this->OnReleaseCUDATexture;
    plVar4 = *(longlong **)&(this->OnReleaseCUDATexture).field_0x28;
    plVar8 = (longlong *)&(this->OnReleaseCUDATexture).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar7,&local_res8);
    (this->CUDA).EncoderTexture = (CUarray_st *)0x0;
  }
  pIVar1 = (ID3D11Texture2D *)(this->Vulkan).EncoderTexture;
  if (pIVar1 != (ID3D11Texture2D *)0x0) {
    local_res8 = pIVar1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnReleaseVulkanTexture);
    pcVar3 = *(code **)&this->OnReleaseVulkanTexture;
    plVar4 = *(longlong **)&(this->OnReleaseVulkanTexture).field_0x28;
    plVar8 = (longlong *)&(this->OnReleaseVulkanTexture).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar7,&local_res8);
  }
  pIVar1 = (this->Vulkan).EncoderSurface;
  if (pIVar1 != (ID3D11Texture2D *)0x0) {
    local_res8 = pIVar1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnReleaseVulkanSurface);
    plVar4 = *(longlong **)&(this->OnReleaseVulkanSurface).field_0x28;
    pcVar3 = *(code **)&this->OnReleaseVulkanSurface;
    plVar8 = (longlong *)&(this->OnReleaseVulkanSurface).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar7,&local_res8);
  }
  if (*(longlong *)&this->OnReleaseVulkanTexture != 0) {
    plVar4 = *(longlong **)&(this->OnReleaseVulkanTexture).field_0x28;
    plVar8 = (longlong *)&(this->OnReleaseVulkanTexture).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->OnReleaseCUDATexture != 0) {
    plVar4 = *(longlong **)&(this->OnReleaseCUDATexture).field_0x28;
    plVar8 = (longlong *)&(this->OnReleaseCUDATexture).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->OnReleaseD3D12Texture != 0) {
    plVar4 = *(longlong **)&(this->OnReleaseD3D12Texture).field_0x28;
    plVar8 = (longlong *)&(this->OnReleaseD3D12Texture).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->OnReleaseD3D11Texture != 0) {
    plVar4 = *(longlong **)&(this->OnReleaseD3D11Texture).field_0x28;
    plVar8 = (longlong *)&(this->OnReleaseD3D11Texture).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->OnReleaseVulkanSurface != 0) {
    plVar4 = *(longlong **)&(this->OnReleaseVulkanSurface).field_0x28;
    plVar8 = (longlong *)&(this->OnReleaseVulkanSurface).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->OnTextureEncode != 0) {
    plVar4 = *(longlong **)&(this->OnTextureEncode).field_0x28;
    plVar8 = (longlong *)&(this->OnTextureEncode).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x000148d01cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x10))();
    return;
  }
  return;
}

// AllocateYUV420P @ 148d03970

void __thiscall AVEncoder::FVideoEncoderInputFrame::AllocateYUV420P(FVideoEncoderInputFrame *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  
  if (this->bFreeYUV420PData == false) {
    uVar1 = this->Width;
    (this->YUV420P).StrideY = uVar1;
    uVar2 = this->Height;
    uVar3 = uVar1 + 1 >> 1;
    (this->YUV420P).StrideU = uVar3;
    (this->YUV420P).StrideV = uVar3;
    puVar4 = operator_new__((ulonglong)(uVar1 * uVar2));
    (this->YUV420P).Data[0] = puVar4;
    puVar4 = operator_new__((ulonglong)((this->Height + 1 >> 1) * (this->YUV420P).StrideU));
    uVar1 = this->Height;
    (this->YUV420P).Data[1] = puVar4;
    puVar4 = operator_new__((ulonglong)((uVar1 + 1 >> 1) * (this->YUV420P).StrideV));
    (this->YUV420P).Data[2] = puVar4;
    this->bFreeYUV420PData = true;
  }
  return;
}

// SetTexture @ 148d12900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AVEncoder::FVideoEncoderInputFrame::SetTexture
          (FVideoEncoderInputFrame *this,CUarray_st *param_1,EUnderlyingRHI param_2,void *param_3,
          TFunction<void___cdecl(CUarray_st_*)> *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (this->Format == CUDA_R8G8B8A8_UNORM) {
    (this->CUDA).UnderlyingRHI = param_2;
    (this->CUDA).SharedHandle = param_3;
    (this->CUDA).EncoderTexture = param_1;
    local_48 = *(longlong *)param_4;
    uStack_20 = (longlong *)0x0;
    if (local_48 != 0) {
      puVar8 = (undefined8 *)&param_4->field_0x10;
      if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)&param_4->field_0x28;
      }
      (**(code **)*puVar8)(puVar8,&local_38);
    }
    lVar6 = *(longlong *)&this->OnReleaseCUDATexture;
    uVar7 = *(undefined8 *)&(this->OnReleaseCUDATexture).field_0x8;
    uVar1 = *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x10;
    uVar2 = *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x14;
    uVar3 = *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x18;
    uVar4 = *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x1c;
    uVar5 = *(undefined8 *)&(this->OnReleaseCUDATexture).field_0x20;
    plVar10 = *(longlong **)&(this->OnReleaseCUDATexture).field_0x28;
    *(longlong *)&this->OnReleaseCUDATexture = local_48;
    *(undefined8 *)&(this->OnReleaseCUDATexture).field_0x8 = uStack_40;
    *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x10 = (undefined4)local_38;
    *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x14 = local_38._4_4_;
    *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x18 = uStack_30;
    *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x1c = uStack_2c;
    *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x28 = (undefined4)uStack_20;
    *(undefined4 *)&(this->OnReleaseCUDATexture).field_0x2c = uStack_20._4_4_;
    local_38._0_4_ = uVar1;
    local_38._4_4_ = uVar2;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    local_28 = uVar5;
    uStack_20 = plVar10;
    local_48 = lVar6;
    uStack_40 = uVar7;
    if (lVar6 != 0) {
      plVar9 = &local_38;
      if (plVar10 != (longlong *)0x0) {
        plVar9 = plVar10;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (((this->CUDA).EncoderTexture == (CUarray_st *)0x0) && (2 < (byte)LogVideoEncoder._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
    }
  }
  if (*(longlong *)param_4 != 0) {
    plVar10 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// SetTexture @ 148d12a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AVEncoder::FVideoEncoderInputFrame::SetTexture
          (FVideoEncoderInputFrame *this,ID3D11Texture2D *param_1,
          TFunction<void___cdecl(ID3D11Texture2D_*)> *param_2)

{
  ID3D11Device *pIVar1;
  ID3D11Texture2D *pIVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  int iVar13;
  FString *pFVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  longlong *local_f8;
  longlong local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (this->Format == D3D11_R8G8B8A8_UNORM) {
    if (((this->D3D11).Texture != (ID3D11Texture2D *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("D3D11.Texture == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                            ,0x3b3,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->D3D11).Texture == (ID3D11Texture2D *)0x0) {
      local_f8 = (longlong *)0x0;
      iVar13 = (**(code **)*param_1)(param_1,&_GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,&local_f8);
      if (iVar13 < 0) {
        if (1 < (byte)LogVideoEncoder._0_1_) {
          GetComErrorDescription(&local_d8,iVar13);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        iVar13 = (**(code **)(*local_f8 + 0x40))(local_f8,&local_f0);
        if (iVar13 == 0) {
          if (local_f0 == 0) {
            if (1 < (byte)LogVideoEncoder._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
            }
          }
          else {
            pIVar1 = (this->D3D11).EncoderDevice;
            iVar13 = (**(code **)((longlong)*pIVar1 + 0xe0))
                               (pIVar1,local_f0,&_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                                &(this->D3D11).EncoderTexture);
            if (iVar13 == 0) {
              pFVar14 = ::FString::FString(&local_88,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                                          );
              FPaths::GetCleanFilename(&local_98,pFVar14);
              ::FString::FString(&local_a8,"FVideoEncoderInputFrame::SetTexture()");
              local_108 = 0x3d2;
              ::FString::PrintfImpl(&local_e8,L"%s (%s:%d)");
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              pIVar2 = (this->D3D11).EncoderTexture;
              iVar13 = local_e8.Data.ArrayNum + -1;
              FVar11.Data = local_e8.Data.AllocatorInstance.Data;
              if (local_e8.Data.ArrayNum == 0) {
                iVar13 = 0;
                FVar11.Data = (FScriptContainerElement *)L"";
              }
              (**(code **)((longlong)*pIVar2 + 0x28))
                        (pIVar2,&_D3DDebugObjectNameW,iVar13 * 2,FVar11.Data);
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              (this->D3D11).Texture = param_1;
              local_78 = *(longlong *)param_2;
              uStack_50 = (longlong *)0x0;
              if (local_78 != 0) {
                puVar15 = (undefined8 *)&param_2->field_0x10;
                if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
                  puVar15 = *(undefined8 **)&param_2->field_0x28;
                }
                (**(code **)*puVar15)(puVar15,&local_68);
              }
              lVar9 = *(longlong *)&this->OnReleaseD3D11Texture;
              uVar10 = *(undefined8 *)&(this->OnReleaseD3D11Texture).field_0x8;
              uVar4 = *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x10;
              uVar5 = *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x14;
              uVar6 = *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x18;
              uVar7 = *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x1c;
              uVar8 = *(undefined8 *)&(this->OnReleaseD3D11Texture).field_0x20;
              plVar17 = *(longlong **)&(this->OnReleaseD3D11Texture).field_0x28;
              *(longlong *)&this->OnReleaseD3D11Texture = local_78;
              *(undefined8 *)&(this->OnReleaseD3D11Texture).field_0x8 = uStack_70;
              *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x10 = (undefined4)local_68;
              *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x14 = local_68._4_4_;
              *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x18 = uStack_60;
              *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x1c = uStack_5c;
              *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x20 = (undefined4)local_58;
              *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x24 = local_58._4_4_;
              *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x28 = (undefined4)uStack_50;
              *(undefined4 *)&(this->OnReleaseD3D11Texture).field_0x2c = uStack_50._4_4_;
              local_68._0_4_ = uVar4;
              local_68._4_4_ = uVar5;
              uStack_60 = uVar6;
              uStack_5c = uVar7;
              local_58 = uVar8;
              uStack_50 = plVar17;
              local_78 = lVar9;
              uStack_70 = uVar10;
              if (lVar9 != 0) {
                plVar16 = &local_68;
                if (plVar17 != (longlong *)0x0) {
                  plVar16 = plVar17;
                }
                (**(code **)(*plVar16 + 0x10))();
              }
            }
            else if (1 < (byte)LogVideoEncoder._0_1_) {
              GetComErrorDescription(&local_b8,iVar13);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        else if (1 < (byte)LogVideoEncoder._0_1_) {
          GetComErrorDescription(&local_c8,iVar13);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
      }
      if (local_f8 != (longlong *)0x0) {
        (**(code **)(*local_f8 + 0x10))();
      }
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar17 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar17 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  return;
}

// SetTexture @ 148d12e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AVEncoder::FVideoEncoderInputFrame::SetTexture
          (FVideoEncoderInputFrame *this,ID3D12Resource *param_1,
          TFunction<void___cdecl(ID3D12Resource_*)> *param_2)

{
  void **ppvVar1;
  ID3D12Resource *pIVar2;
  ID3D11Device *pIVar3;
  ID3D11Texture2D *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FGuid *pFVar8;
  ForAnyElementType FVar9;
  FString *pFVar10;
  longlong *plVar11;
  code *local_f8;
  longlong *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FGuid local_48;
  
  pIVar2 = (this->D3D12).Texture;
  if (this->Format == D3D11_R8G8B8A8_UNORM) {
    if ((pIVar2 != (ID3D12Resource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("D3D12.Texture == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                           ,0x3e4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->D3D11).EncoderTexture != (ID3D11Texture2D *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("D3D11.EncoderTexture == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                           ,0x3e5,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_f0 = (longlong *)0x0;
    iVar7 = (**(code **)((longlong)*param_1 + 0x38))
                      (param_1,&_GUID_189819f1_1db6_4b57_be54_1821339b85f7);
    plVar11 = local_f0;
    if (iVar7 == 0) {
      local_f8 = *(code **)(*local_f0 + 0xf8);
      LOCK();
      _VideoEncoderInputFrameCnt.Counter = _VideoEncoderInputFrameCnt.Counter + 1;
      UNLOCK();
      if (((::id.D == 0 && ::id.C == 0) && ::id.B == 0) && ::id.A == 0) {
        pFVar8 = FGuid::NewGuid(&local_48);
        ::id = *pFVar8;
      }
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      FGuid::AppendString(&::id,&local_e8,Digits);
      ::FString::PrintfImpl(&local_d8,L"%s_FVideoEncoderInputFrame_%d");
      ppvVar1 = &(this->D3D11).SharedHandle;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar9.Data = local_d8.Data.AllocatorInstance.Data;
      }
      iVar7 = (*local_f8)(plVar11,param_1,0,0x10000000,FVar9.Data,ppvVar1);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (iVar7 == 0) {
        if (*ppvVar1 == (void *)0x0) {
          if (1 < (byte)LogVideoEncoder._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
          }
        }
        else {
          pIVar3 = (this->D3D11).EncoderDevice;
          local_f8 = (code *)0x0;
          iVar7 = (**(code **)*pIVar3)(pIVar3,&_GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,&local_f8)
          ;
          if (iVar7 == 0) {
            iVar7 = (**(code **)(*(longlong *)local_f8 + 0x180))
                              (local_f8,*ppvVar1,&_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                               &(this->D3D11).EncoderTexture);
            if (iVar7 == 0) {
              pFVar10 = ::FString::FString(&local_58,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                                          );
              FPaths::GetCleanFilename(&local_68,pFVar10);
              ::FString::FString(&local_78,"FVideoEncoderInputFrame::SetTexture()");
              ::FString::PrintfImpl(&local_c8,L"%s (%s:%d)");
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              pIVar4 = (this->D3D11).EncoderTexture;
              iVar7 = local_c8.Data.ArrayNum + -1;
              FVar9.Data = local_c8.Data.AllocatorInstance.Data;
              if (local_c8.Data.ArrayNum == 0) {
                iVar7 = 0;
                FVar9.Data = (FScriptContainerElement *)L"";
              }
              (**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,&DAT_154c75fc8,iVar7 * 2,FVar9.Data);
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              (this->D3D12).Texture = param_1;
              TFunction<void___cdecl(ID3D12Resource_*)>::operator=
                        (&this->OnReleaseD3D12Texture,param_2);
            }
            else if (1 < (byte)LogVideoEncoder._0_1_) {
              GetComErrorDescription(&local_88,iVar7);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
          }
          else if (1 < (byte)LogVideoEncoder._0_1_) {
            GetComErrorDescription(&local_98,iVar7);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          if (local_f8 != (code *)0x0) {
            (**(code **)(*(longlong *)local_f8 + 0x10))();
          }
        }
      }
      else if (1 < (byte)LogVideoEncoder._0_1_) {
        GetComErrorDescription(&local_a8,iVar7);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (1 < (byte)LogVideoEncoder._0_1_) {
      GetComErrorDescription(&local_b8,iVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    if (local_f0 != (longlong *)0x0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  else {
    if ((pIVar2 != (ID3D12Resource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("D3D12.Texture == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                           ,0x419,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->D3D12).EncoderTexture != (ID3D12Resource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("D3D12.EncoderTexture == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderInput.cpp"
                           ,0x41a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (this->D3D12).Texture = param_1;
    (this->D3D12).EncoderTexture = param_1;
    TFunction<void___cdecl(ID3D12Resource_*)>::operator=(&this->OnReleaseD3D12Texture,param_2);
  }
  if (*(longlong *)param_2 != 0) {
    plVar11 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// SetTexture @ 148d133a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AVEncoder::FVideoEncoderInputFrame::SetTexture
          (FVideoEncoderInputFrame *this,VkImage_T *param_1,VkDeviceMemory_T *param_2,
          ulong64 param_3,TFunction<void___cdecl(VkImage_T_*)> *param_4)

{
  longlong *plVar1;
  
  if (this->Format == VULKAN_R8G8B8A8_UNORM) {
    (this->Vulkan).EncoderTexture = param_1;
    (this->Vulkan).EncoderDeviceMemory = param_2;
    (this->Vulkan).EncoderMemorySize = param_3;
    TFunction<void___cdecl(VkImage_T_*)>::operator=(&this->OnReleaseVulkanTexture,param_4);
    if ((((this->Vulkan).EncoderTexture == (VkImage_T *)0x0) || (param_2 == (VkDeviceMemory_T *)0x0)
        ) && (2 < (byte)LogVideoEncoder._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
    }
  }
  if (*(longlong *)param_4 != 0) {
    plVar1 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// SetTexture @ 148d13450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AVEncoder::FVideoEncoderInputFrame::SetTexture
          (FVideoEncoderInputFrame *this,VkImage_T *param_1,
          TFunction<void___cdecl(VkImage_T_*)> *param_2)

{
  longlong *plVar1;
  
  if (this->Format == VULKAN_R8G8B8A8_UNORM) {
    (this->Vulkan).EncoderTexture = param_1;
    TFunction<void___cdecl(VkImage_T_*)>::operator=(&this->OnReleaseVulkanTexture,param_2);
    if (((this->Vulkan).EncoderTexture == (VkImage_T *)0x0) && (2 < (byte)LogVideoEncoder._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// SetYUV420P @ 148d13530

void __thiscall
AVEncoder::FVideoEncoderInputFrame::SetYUV420P
          (FVideoEncoderInputFrame *this,uchar *param_1,uchar *param_2,uchar *param_3,uint param_4,
          uint param_5,uint param_6)

{
  if (this->Format == YUV420P) {
    if (this->bFreeYUV420PData != false) {
      operator_delete__((this->YUV420P).Data[0]);
      operator_delete__((this->YUV420P).Data[1]);
      operator_delete__((this->YUV420P).Data[2]);
      this->bFreeYUV420PData = false;
    }
    (this->YUV420P).StrideY = param_4;
    (this->YUV420P).StrideU = param_5;
    (this->YUV420P).StrideV = param_6;
    (this->YUV420P).Data[0] = param_1;
    (this->YUV420P).Data[1] = param_2;
    (this->YUV420P).Data[2] = param_3;
  }
  return;
}

