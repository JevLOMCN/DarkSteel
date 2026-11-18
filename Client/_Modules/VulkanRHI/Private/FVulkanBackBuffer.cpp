// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 7

// FVulkanBackBuffer @ 145bc8f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanBackBuffer * __thiscall
FVulkanBackBuffer::FVulkanBackBuffer
          (FVulkanBackBuffer *this,FVulkanDevice *param_1,FVulkanViewport *param_2,
          EPixelFormat param_3,uint param_4,uint param_5,ETextureCreateFlags param_6)

{
  FRHITextureCreateDesc *pFVar1;
  undefined1 auStackY_e8 [32];
  FVulkanRHIExternalImageDeleteCallbackInfo local_b8;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b8.UserData = (void *)0x0;
  local_b8.Function = (_func___cdecl_void_void_ptr *)0x0;
  pFVar1 = FRHITextureCreateDesc::Create2D(&local_a8,L"FVulkanBackBuffer",param_4,param_5,param_3);
  pFVar1->_padding_ = param_6;
  pFVar1->InitialState = Present;
  FVulkanTexture::FVulkanTexture((FVulkanTexture *)this,param_1,pFVar1,(VkImage_T *)0x0,&local_b8);
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  this->Viewport = param_2;
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanEvictable__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanViewableResource__;
  return this;
}

// ~FVulkanBackBuffer @ 145bc9550

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanBackBuffer::~FVulkanBackBuffer(FVulkanBackBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanEvictable__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanViewableResource__;
  if ((char)this->_padding_ == '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsImageOwner() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x60,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined1 *)&this->_padding_ = 0;
  if (this->_padding_ != 0) {
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  this->_padding_ = 0;
  FVulkanTexture::~FVulkanTexture((FVulkanTexture *)this);
  return;
}

// AcquireBackBufferImage @ 145bca250

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanBackBuffer::AcquireBackBufferImage
          (FVulkanBackBuffer *this,FVulkanCommandListContext *param_1)

{
  uint uVar1;
  FVulkanViewport *pFVar2;
  ForElementType<void_*> FVar3;
  longlong lVar4;
  FVulkanView *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ForElementType<void_*> FVar10;
  FVulkanSemaphore *local_res8;
  TArrayView<FVulkanSemaphore_*,int> local_18;
  
  if (this->Viewport == (FVulkanViewport *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Viewport",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x3e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    pFVar2 = this->Viewport;
    if (pFVar2->SwapChain != (FVulkanSwapChain *)0x0) {
      iVar8 = FVulkanSwapChain::AcquireImageIndex(pFVar2->SwapChain,&pFVar2->AcquiredSemaphore);
      if (-1 < iVar8) {
        pFVar2->AcquiredImageIndex = iVar8;
        uVar1 = this->Viewport->AcquiredImageIndex;
        if (((int)uVar1 < 0) || ((this->Viewport->TextureViews).Array.ArrayNum <= (int)uVar1)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AcquiredImageIndex >= 0 && AcquiredImageIndex < Viewport->TextureViews.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                             ,0x45,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar2 = this->Viewport;
        uVar9 = 0;
        if ((int)uVar1 < (pFVar2->TextureViews).Array.ArrayNum) {
          uVar9 = ~uVar1 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FVar3 = (pFVar2->TextureViews).Array.AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<void_*>)&pFVar2->TextureViews;
        if (FVar3 != (ForElementType<void_*>)0x0) {
          FVar10 = FVar3;
        }
        lVar4 = *(longlong *)((longlong)FVar10 + (longlong)(int)uVar1 * 8);
        if (*(char *)(lVar4 + 0x30) != '\x02') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        this->_padding_ = *(longlong *)(lVar4 + 0x20);
        local_18.ArrayNum = 1;
        this->_padding_ = lVar4;
        this->_padding_ = lVar4;
        local_res8 = this->Viewport->AcquiredSemaphore;
        local_18.DataPtr = &local_res8;
        FVulkanContextCommon::AddWaitSemaphores((FVulkanContextCommon *)param_1,0x400,&local_18);
        return;
      }
    }
    if ((this->Viewport->RenderingBackBuffer).Reference == (FVulkanTexture *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Viewport->RenderingBackBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                         ,0x55,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = ((this->Viewport->RenderingBackBuffer).Reference)->DefaultView;
    if ((pFVar5->Storage).TypeIndex != '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = (pFVar5->Storage)._padding_;
    this->_padding_ = (longlong)pFVar5;
    this->_padding_ = (longlong)pFVar5;
    this->_padding_ = lVar4;
  }
  return;
}

// OnAdvanceBackBufferFrame @ 145bd3640

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanBackBuffer::OnAdvanceBackBufferFrame
          (FVulkanBackBuffer *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Viewport == (FVulkanViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Viewport",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->_padding_ = 0;
  if (this->_padding_ != 0) {
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  return;
}

// OnGetBackBufferImage @ 145bd36b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanBackBuffer::OnGetBackBufferImage(FVulkanBackBuffer *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  IRHICommandContext *pIVar3;
  longlong lVar4;
  FVulkanCommandListContext *pFVar5;
  
  if (this->Viewport == (FVulkanViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Viewport",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GVulkanDelayAcquireImage == None) {
    pIVar3 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    lVar4 = (**(code **)(pIVar3->_padding_ + 0x148))();
    pFVar5 = (FVulkanCommandListContext *)(lVar4 + -0x50);
    if (lVar4 == 0) {
      pFVar5 = (FVulkanCommandListContext *)0x0;
    }
    AcquireBackBufferImage(this,pFVar5);
  }
  return;
}

// ReleaseAcquiredImage @ 145bd51a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanBackBuffer::ReleaseAcquiredImage(FVulkanBackBuffer *this)

{
  this->_padding_ = 0;
  if (this->_padding_ != 0) {
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  return;
}

// ReleaseViewport @ 145bd51d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanBackBuffer::ReleaseViewport(FVulkanBackBuffer *this)

{
  this->Viewport = (FVulkanViewport *)0x0;
  this->_padding_ = 0;
  if (this->_padding_ != 0) {
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  return;
}

