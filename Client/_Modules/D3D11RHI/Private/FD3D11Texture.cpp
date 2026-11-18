// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 16

// FD3D11Texture @ 14596c790

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FD3D11Texture * __thiscall
FD3D11Texture::FD3D11Texture(FD3D11Texture *this,FRHITextureCreateDesc *param_1)

{
  undefined1 *puVar1;
  
  FRHITexture::FRHITexture((FRHITexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = 0;
  (this->Resource).Reference = (ID3D11Resource *)0x0;
  (this->ShaderResourceView).Reference = (ID3D11ShaderResourceView *)0x0;
  (this->RenderTargetViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderTargetViews).ArrayNum = 0;
  (this->RenderTargetViews).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->IHVResourceHandle = (void *)0x0;
  this->DepthStencilViews[0].Reference = (ID3D11DepthStencilView *)0x0;
  this->DepthStencilViews[1].Reference = (ID3D11DepthStencilView *)0x0;
  this->DepthStencilViews[2].Reference = (ID3D11DepthStencilView *)0x0;
  this->DepthStencilViews[3].Reference = (ID3D11DepthStencilView *)0x0;
  this->bCreatedRTVsPerSlice = '\0';
  this->bAlias = '\0';
  this->RTVArraySize = 0;
  return this;
}

// FD3D11Texture @ 14596c820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FD3D11Texture * __thiscall
FD3D11Texture::FD3D11Texture
          (FD3D11Texture *this,FD3D11Texture *param_1,FString *param_2,EAliasResourceParam param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_b8 [32];
  FRHITextureCreateDesc local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  FRHITextureDesc::FRHITextureDesc
            ((FRHITextureDesc *)&local_98,(FRHITextureDesc *)&param_1->_padding_);
  local_98.InitialState = SRVMask;
  local_98.InitAction = Default;
  local_98.BulkData = (FResourceBulkDataInterface *)0x0;
  local_98.ClassName.ComparisonIndex.Value = 0;
  local_98.ClassName.Number = 0;
  local_98.OwnerName.ComparisonIndex.Value = 0;
  local_98.OwnerName.Number = 0;
  local_98.DebugName = pwVar1;
  FRHITexture::FRHITexture((FRHITexture *)this,&local_98);
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  this->_padding_ = 0;
  (this->Resource).Reference = (ID3D11Resource *)0x0;
  (this->ShaderResourceView).Reference = (ID3D11ShaderResourceView *)0x0;
  (this->RenderTargetViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderTargetViews).ArrayNum = 0;
  (this->RenderTargetViews).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->IHVResourceHandle = (void *)0x0;
  this->DepthStencilViews[0].Reference = (ID3D11DepthStencilView *)0x0;
  this->DepthStencilViews[1].Reference = (ID3D11DepthStencilView *)0x0;
  this->DepthStencilViews[2].Reference = (ID3D11DepthStencilView *)0x0;
  this->DepthStencilViews[3].Reference = (ID3D11DepthStencilView *)0x0;
  this->bAlias = '\x01';
  this->RTVArraySize = 0;
  AliasResource(this,param_1);
  return this;
}

// ~FD3D11Texture @ 14596f0e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FD3D11Texture::~FD3D11Texture(FD3D11Texture *this)

{
  TRefCountPtr<ID3D11DepthStencilView> *pTVar1;
  FScriptContainerElement *pFVar2;
  ID3D11ShaderResourceView *pIVar3;
  ID3D11Resource *pIVar4;
  code *pcVar5;
  bool bVar6;
  TRefCountPtr<ID3D11DepthStencilView> *pTVar7;
  longlong lVar8;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  if (this->bAlias == '\0') {
    UpdateD3D11TextureStats(this,false);
  }
  pTVar7 = (TRefCountPtr<ID3D11DepthStencilView> *)&this->RTVArraySize;
  lVar8 = 4;
  do {
    pTVar1 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar8 = lVar8 + -1;
    if (pTVar1->Reference != (ID3D11DepthStencilView *)0x0) {
      (**(code **)((longlong)*pTVar1->Reference + 0x10))();
    }
  } while (lVar8 != 0);
  DestructItems<TRefCountPtr<ID3D11RenderTargetView>,int>
            ((TRefCountPtr<ID3D11RenderTargetView> *)
             (this->RenderTargetViews).AllocatorInstance.Data,(this->RenderTargetViews).ArrayNum);
  pFVar2 = (this->RenderTargetViews).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->ShaderResourceView).Reference;
  if (pIVar3 != (ID3D11ShaderResourceView *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->Resource).Reference;
  if (pIVar4 != (ID3D11Resource *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  if (this->_padding_ != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Resources.h"
                       ,0x88,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// AliasResource @ 145971ad0

void __thiscall FD3D11Texture::AliasResource(FD3D11Texture *this,FD3D11Texture *param_1)

{
  int *piVar1;
  TArray<TRefCountPtr<ID3D11RenderTargetView>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ID3D11Resource *pIVar4;
  ID3D11Resource *pIVar5;
  ID3D11ShaderResourceView *pIVar6;
  ID3D11ShaderResourceView *pIVar7;
  FScriptContainerElement *pFVar8;
  ID3D11DepthStencilView *pIVar9;
  ID3D11DepthStencilView *pIVar10;
  code *pcVar11;
  bool bVar12;
  
  if ((this->bAlias == '\0') &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bAlias",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                          ,0x66d,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this->IHVResourceHandle = param_1->IHVResourceHandle;
  pIVar4 = (param_1->Resource).Reference;
  pIVar5 = (this->Resource).Reference;
  if (pIVar5 != pIVar4) {
    (this->Resource).Reference = pIVar4;
    if (pIVar4 != (ID3D11Resource *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))();
    }
    if (pIVar5 != (ID3D11Resource *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  pIVar6 = (param_1->ShaderResourceView).Reference;
  pIVar7 = (this->ShaderResourceView).Reference;
  if (pIVar7 != pIVar6) {
    (this->ShaderResourceView).Reference = pIVar6;
    if (pIVar6 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar6 + 8))();
    }
    if (pIVar7 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
    }
  }
  pTVar2 = &this->RenderTargetViews;
  if (pTVar2 != &param_1->RenderTargetViews) {
    DestructItems<TRefCountPtr<ID3D11RenderTargetView>,int>
              ((TRefCountPtr<ID3D11RenderTargetView> *)(pTVar2->AllocatorInstance).Data,
               (this->RenderTargetViews).ArrayNum);
    iVar3 = (param_1->RenderTargetViews).ArrayNum;
    piVar1 = &(this->RenderTargetViews).ArrayMax;
    pFVar8 = (param_1->RenderTargetViews).AllocatorInstance.Data;
    (this->RenderTargetViews).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<TRefCountPtr<ID3D11RenderTargetView>,TRefCountPtr<ID3D11RenderTargetView>,int>
                ((pTVar2->AllocatorInstance).Data,(TRefCountPtr<ID3D11RenderTargetView> *)pFVar8,
                 iVar3);
    }
  }
  this->field_0x18c =
       (this->bCreatedRTVsPerSlice ^ param_1->bCreatedRTVsPerSlice) & 1 ^ this->field_0x18c;
  this->RTVArraySize = param_1->RTVArraySize;
  pIVar9 = param_1->DepthStencilViews[0].Reference;
  pIVar10 = this->DepthStencilViews[0].Reference;
  if (pIVar10 != pIVar9) {
    this->DepthStencilViews[0].Reference = pIVar9;
    if (pIVar9 != (ID3D11DepthStencilView *)0x0) {
      (**(code **)((longlong)*pIVar9 + 8))();
    }
    if (pIVar10 != (ID3D11DepthStencilView *)0x0) {
      (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    }
  }
  pIVar9 = param_1->DepthStencilViews[1].Reference;
  pIVar10 = this->DepthStencilViews[1].Reference;
  if (pIVar10 != pIVar9) {
    this->DepthStencilViews[1].Reference = pIVar9;
    if (pIVar9 != (ID3D11DepthStencilView *)0x0) {
      (**(code **)((longlong)*pIVar9 + 8))();
    }
    if (pIVar10 != (ID3D11DepthStencilView *)0x0) {
      (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    }
  }
  pIVar9 = param_1->DepthStencilViews[2].Reference;
  pIVar10 = this->DepthStencilViews[2].Reference;
  if (pIVar10 != pIVar9) {
    this->DepthStencilViews[2].Reference = pIVar9;
    if (pIVar9 != (ID3D11DepthStencilView *)0x0) {
      (**(code **)((longlong)*pIVar9 + 8))();
    }
    if (pIVar10 != (ID3D11DepthStencilView *)0x0) {
      (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    }
  }
  pIVar9 = param_1->DepthStencilViews[3].Reference;
  pIVar10 = this->DepthStencilViews[3].Reference;
  if (pIVar10 != pIVar9) {
    this->DepthStencilViews[3].Reference = pIVar9;
    if (pIVar9 != (ID3D11DepthStencilView *)0x0) {
      (**(code **)((longlong)*pIVar9 + 8))();
    }
    if (pIVar10 != (ID3D11DepthStencilView *)0x0) {
      (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    }
  }
  return;
}

// FinalizeCreation @ 14597f830

void __thiscall
FD3D11Texture::FinalizeCreation
          (FD3D11Texture *this,ID3D11Resource *param_1,ID3D11ShaderResourceView *param_2,int param_3
          ,bool param_4,TArrayView<TRefCountPtr<ID3D11RenderTargetView>_const_,int> *param_5,
          TArrayView<TRefCountPtr<ID3D11DepthStencilView>_const_,int> *param_6)

{
  int *piVar1;
  TArray<TRefCountPtr<ID3D11RenderTargetView>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ID3D11Resource *pIVar4;
  ID3D11ShaderResourceView *pIVar5;
  TRefCountPtr<ID3D11RenderTargetView> *pTVar6;
  ID3D11DepthStencilView *pIVar7;
  ID3D11DepthStencilView *pIVar8;
  code *pcVar9;
  bool bVar10;
  
  pIVar4 = (this->Resource).Reference;
  if (pIVar4 != param_1) {
    (this->Resource).Reference = param_1;
    if (param_1 != (ID3D11Resource *)0x0) {
      (**(code **)((longlong)*param_1 + 8))(param_1);
    }
    if (pIVar4 != (ID3D11Resource *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  pIVar5 = (this->ShaderResourceView).Reference;
  if (pIVar5 != param_2) {
    (this->ShaderResourceView).Reference = param_2;
    if (param_2 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*param_2 + 8))(param_2);
    }
    if (pIVar5 != (ID3D11ShaderResourceView *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  pTVar2 = &this->RenderTargetViews;
  DestructItems<TRefCountPtr<ID3D11RenderTargetView>,int>
            ((TRefCountPtr<ID3D11RenderTargetView> *)(pTVar2->AllocatorInstance).Data,
             (this->RenderTargetViews).ArrayNum);
  piVar1 = &(this->RenderTargetViews).ArrayMax;
  iVar3 = param_5->ArrayNum;
  pTVar6 = param_5->DataPtr;
  (this->RenderTargetViews).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<TRefCountPtr<ID3D11RenderTargetView>,TRefCountPtr<ID3D11RenderTargetView>,int>
              ((pTVar2->AllocatorInstance).Data,pTVar6,iVar3);
  }
  this->bCreatedRTVsPerSlice = '\0';
  this->field_0x18c = this->field_0x18c | param_4;
  this->RTVArraySize = param_3;
  if (param_6->ArrayNum != 0) {
    if (param_6->ArrayNum != 4) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDepthStencilViews.Num() == FExclusiveDepthStencil::MaxIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                          ,0x652,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar3 = param_6->ArrayNum;
    if (iVar3 < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pIVar7 = this->DepthStencilViews[0].Reference;
    pIVar8 = param_6->DataPtr->Reference;
    if (pIVar7 != pIVar8) {
      this->DepthStencilViews[0].Reference = pIVar8;
      if (pIVar8 != (ID3D11DepthStencilView *)0x0) {
        (**(code **)((longlong)*pIVar8 + 8))();
      }
      if (pIVar7 != (ID3D11DepthStencilView *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
      }
    }
    if (iVar3 < 2) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pIVar7 = this->DepthStencilViews[1].Reference;
    pIVar8 = param_6->DataPtr[1].Reference;
    if (pIVar7 != pIVar8) {
      this->DepthStencilViews[1].Reference = pIVar8;
      if (pIVar8 != (ID3D11DepthStencilView *)0x0) {
        (**(code **)((longlong)*pIVar8 + 8))();
      }
      if (pIVar7 != (ID3D11DepthStencilView *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
      }
    }
    if (iVar3 < 3) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pIVar7 = this->DepthStencilViews[2].Reference;
    pIVar8 = param_6->DataPtr[2].Reference;
    if (pIVar7 != pIVar8) {
      this->DepthStencilViews[2].Reference = pIVar8;
      if (pIVar8 != (ID3D11DepthStencilView *)0x0) {
        (**(code **)((longlong)*pIVar8 + 8))();
      }
      if (pIVar7 != (ID3D11DepthStencilView *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
      }
    }
    if (iVar3 < 4) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pIVar7 = this->DepthStencilViews[3].Reference;
    pIVar8 = param_6->DataPtr[3].Reference;
    if (pIVar7 != pIVar8) {
      this->DepthStencilViews[3].Reference = pIVar8;
      if (pIVar8 != (ID3D11DepthStencilView *)0x0) {
        (**(code **)((longlong)*pIVar8 + 8))();
      }
      if (pIVar7 != (ID3D11DepthStencilView *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
      }
    }
  }
  UpdateD3D11TextureStats(this,true);
  return;
}

// GetD3D11Texture2D @ 145981bf0

ID3D11Texture2D * __thiscall FD3D11Texture::GetD3D11Texture2D(FD3D11Texture *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  ID3D11Texture2D *pIVar4;
  
  if ((this->Resource).Reference == (ID3D11Resource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Resources.h"
                       ,0xca,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (ID3D11Texture2D *)(*pcVar2)();
      return pIVar4;
    }
  }
  cVar1 = *(char *)((longlong)&this->_padding_ + 2);
  if ((cVar1 != '\0') && (((cVar1 - 1U & 0xfc) != 0 || (cVar1 == '\x02')))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetDesc().Dimension == ETextureDimension::Texture2D || GetDesc().Dimension == ETextureDimension::Texture2DArray || GetDesc().Dimension == ETextureDimension::TextureCube || GetDesc().Dimension == ETextureDimension::TextureCubeArray"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Resources.h"
                       ,0xce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (ID3D11Texture2D *)(*pcVar2)();
      return pIVar4;
    }
  }
  return (ID3D11Texture2D *)(this->Resource).Reference;
}

// GetD3D11Texture3D @ 145981c80

ID3D11Texture3D * __thiscall FD3D11Texture::GetD3D11Texture3D(FD3D11Texture *this)

{
  code *pcVar1;
  bool bVar2;
  ID3D11Texture3D *pIVar3;
  
  if ((this->Resource).Reference == (ID3D11Resource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Resources.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ID3D11Texture3D *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (*(char *)((longlong)&this->_padding_ + 2) != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetDesc().Dimension == ETextureDimension::Texture3D",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Resources.h"
                       ,0xd6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ID3D11Texture3D *)(*pcVar1)();
      return pIVar3;
    }
  }
  return (ID3D11Texture3D *)(this->Resource).Reference;
}

// GetDepthStencilView @ 145981d00

/* WARNING: Enum "Type": Some values do not have unique names */

ID3D11DepthStencilView * __thiscall
FD3D11Texture::GetDepthStencilView(FD3D11Texture *this,FExclusiveDepthStencil param_1)

{
  code *pcVar1;
  bool bVar2;
  ID3D11DepthStencilView *pIVar3;
  
  switch(param_1.Value) {
  case DepthNop:
  case DepthWrite:
  case DepthNop_StencilWrite:
  case DepthWrite_StencilWrite:
    return this->DepthStencilViews[0].Reference;
  case DepthRead:
  case DepthRead_StencilWrite:
    return this->DepthStencilViews[1].Reference;
  case DepthNop_StencilRead:
  case DepthWrite_StencilRead:
    return this->DepthStencilViews[2].Reference;
  case DepthRead_StencilRead:
    return this->DepthStencilViews[3].Reference;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                     ,0x289,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ID3D11DepthStencilView *)(*pcVar1)();
    return pIVar3;
  }
  return this[0x51eb852].IHVResourceHandle;
}

// GetMemorySize @ 1459820d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall FD3D11Texture::GetMemorySize(FD3D11Texture *this)

{
  bool bVar1;
  ulong64 *puVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  bVar1 = FRHITextureDesc::Validate((FRHITextureDesc *)&this->_padding_,L"",false);
  if (!bVar1) {
    return 0;
  }
  puVar2 = (ulong64 *)
           (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,local_28,&this->_padding_,0);
  return *puVar2;
}

// GetNativeResource @ 145982580

void * __thiscall FD3D11Texture::GetNativeResource(FD3D11Texture *this)

{
  return (this->Resource).Reference;
}

// GetNativeShaderResourceView @ 145982590

void * __thiscall FD3D11Texture::GetNativeShaderResourceView(FD3D11Texture *this)

{
  return (this->ShaderResourceView).Reference;
}

// GetRenderTargetView @ 1459832b0

ID3D11RenderTargetView * __thiscall
FD3D11Texture::GetRenderTargetView(FD3D11Texture *this,int param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ID3D11RenderTargetView *pIVar5;
  
  if (this->bCreatedRTVsPerSlice == 0) {
    if (1 < param_2 + 1U) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArraySliceIndex == -1 || ArraySliceIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Resources.h"
                         ,0x109,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (ID3D11RenderTargetView *)(*pcVar2)();
        return pIVar5;
      }
    }
  }
  else {
    if (param_2 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArraySliceIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Resources.h"
                         ,0x103,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (ID3D11RenderTargetView *)(*pcVar2)();
        return pIVar5;
      }
    }
    param_1 = param_1 * this->RTVArraySize + param_2;
  }
  uVar1 = (this->RenderTargetViews).ArrayNum;
  if ((uint)param_1 < uVar1) {
    uVar4 = 0;
    if (param_1 < (int)uVar1) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (ID3D11RenderTargetView *)(*pcVar2)();
        return pIVar5;
      }
    }
    return *(ID3D11RenderTargetView **)
            ((this->RenderTargetViews).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (ID3D11RenderTargetView *)0x0;
}

// GetResourceInfo @ 145983570

bool __thiscall FD3D11Texture::GetResourceInfo(FD3D11Texture *this,FRHIResourceInfo *param_1)

{
  undefined4 uVar1;
  ulong64 uVar2;
  uint7 uStack_2f;
  undefined5 uStack_15;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  *(ulonglong *)&param_1->Type = (ulonglong)uStack_2f << 8;
  (param_1->VRamAllocation).AllocationStart = 0;
  (param_1->VRamAllocation).AllocationSize = 0;
  param_1->IsTransient = (bool)(char)0x10100;
  param_1->bValid = (bool)(char)(0x10100 >> 8);
  param_1->bResident = (bool)(char)(0x10100 >> 0x10);
  *(undefined5 *)&param_1->field_0x23 = uStack_15;
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (param_1->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (param_1->Name).Number = uVar1;
  param_1->Type = *(ERHIResourceType *)((longlong)&this->_padding_ + 4);
  uVar2 = GetMemorySize(this);
  (param_1->VRamAllocation).AllocationSize = uVar2;
  return true;
}

// GetTextureBaseRHI @ 145983ff0

void * __thiscall FD3D11Texture::GetTextureBaseRHI(FD3D11Texture *this)

{
  return this;
}

// Lock @ 145985fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHILockTextureResult * __thiscall
FD3D11Texture::Lock(FD3D11Texture *this,FRHILockTextureResult *__return_storage_ptr__,
                   FD3D11DynamicRHI *param_1,FRHILockTextureArgs *param_2,bool param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar2;
  uint uVar3;
  ID3D11DeviceContext *pIVar4;
  ID3D11Device *pIVar5;
  code *pcVar6;
  bool bVar7;
  FName FVar8;
  void *pvVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  FRHILockTextureResult *pFVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_D3D11LockTextureTime> FVar20;
  ID3D11Texture2D *pIVar21;
  longlong lVar22;
  undefined8 *puVar23;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar24;
  FNameEntryId FVar25;
  FName FVar26;
  uint uVar27;
  ForAnyElementType FVar28;
  int iVar29;
  undefined1 auStackY_238 [32];
  FName local_180;
  FName local_178;
  uint local_170;
  undefined4 local_16c;
  void *local_168;
  undefined2 local_160;
  uint local_158;
  uint uStack_154;
  FColor_u_0 local_150;
  int local_14c;
  uint local_148;
  ID3D11Device *local_140;
  TPairInitializer<FD3D11LockedKey_const_&,FD3D11LockedData_const_&> local_138;
  FName local_128;
  FName local_120;
  FD3D11DynamicRHI *local_110;
  FRHILockTextureResult *local_108;
  LARGE_INTEGER local_100;
  void *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  FString local_d8;
  FStatMessage local_c8;
  ID3D11Resource *local_b8;
  int local_b0;
  ID3D11Resource **local_a8;
  FName *local_a0;
  FName local_98;
  FString local_90;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  uint uStack_68;
  D3D11_USAGE DStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  uint local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_110 = param_1;
  local_108 = __return_storage_ptr__;
  if ((*(char *)((longlong)&this->_padding_ + 2) == '\x02') &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsTexture3D()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                          ,0x40d,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    pFVar18 = (FRHILockTextureResult *)(*pcVar6)();
    return pFVar18;
  }
  FVar20 = StatPtr_STAT_D3D11LockTextureTime;
  if (StatPtr_STAT_D3D11LockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11LockTextureTime>)0x0) {
    pFVar19 = ::FName::FName(&local_98,"STAT_D3D11LockTextureTime");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_D3D11LockTextureTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11LockTextureTime,*pFVar19,
                        L"LockTexture time","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar13 = false;
  bVar7 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar26 = *(FName *)FVar20;
  bVar12 = false;
  bVar14 = false;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar27 = FVar26.Number;
  if ((FVar25.Value == 0) && (uVar27 == 0)) {
LAB_145986147:
    bVar7 = bVar14;
    bVar13 = bVar12;
    bVar12 = false;
    FVar26 = local_120;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar13 = false;
      bVar7 = true;
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar25.Value;
        local_128.Number = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                   ,0x40f);
        bVar13 = true;
        bVar7 = true;
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145986147;
    local_158 = FVar25.Value;
    uStack_154 = uVar27;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar12 = true;
  }
  cVar2 = *(char *)((longlong)&this->_padding_ + 2);
  iVar17 = *(int *)((longlong)&param_2->_padding_ + 4);
  if ((cVar2 == '\x03') || (cVar2 == '\x04')) {
    iVar29 = (int)param_2->_padding_ + iVar17 * 6;
  }
  else {
    iVar29 = 0;
    if (cVar2 == '\x01') {
      iVar29 = iVar17;
    }
  }
  iVar17 = (int)param_2->_padding_;
  bVar24 = *(byte *)((longlong)&this->_padding_ + 3);
  iVar29 = (uint)(byte)this->_padding_ * iVar29 + iVar17;
  uVar27 = GPixelFormats[bVar24].BlockSizeX;
  uVar3 = GPixelFormats[bVar24].BlockSizeY;
  local_14c = GPixelFormats[bVar24].BlockBytes;
  bVar24 = (byte)iVar17;
  uVar15 = *(uint *)((longlong)&this->_padding_ + 4) >> (bVar24 & 0x1f);
  local_148 = uVar27;
  if (uVar27 < uVar15) {
    local_148 = uVar15;
  }
  uVar16 = (uint)this->_padding_ >> (bVar24 & 0x1f);
  uVar15 = uVar3;
  if (uVar3 < uVar16) {
    uVar15 = uVar16;
  }
  local_140 = (ID3D11Device *)CONCAT44(local_140._4_4_,uVar15);
  uVar27 = ((uVar27 - 1) + local_148) / uVar27;
  __return_storage_ptr__->Data = (void *)0x0;
  __return_storage_ptr__->ByteCount = 0;
  __return_storage_ptr__->Stride = 0;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  local_160 = 0;
  local_158 = (((uVar3 - 1) + uVar15) / uVar3) * local_14c * uVar27;
  if (param_2->LockMode == RLM_WriteOnly) {
    if ((param_3) || ((this->_padding_ & 0x20) == 0)) {
      local_168 = FMemory::Malloc((ulonglong)local_158,0x10);
      local_170 = uVar27 * local_14c;
      local_160 = 0x101;
      goto LAB_145986656;
    }
    pIVar4 = (param_1->Direct3DDeviceIMContext).Reference;
    local_f8 = (void *)0x0;
    uStack_f0 = 0;
    iVar17 = (**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,(this->Resource).Reference,iVar29,2);
    if (iVar17 < 0) {
      VerifyD3D11Result(iVar17,
                        "D3DRHI->GetDeviceContext()->Map(GetResource(), Subresource, D3D11_MAP_WRITE, 0, &MappedTexture)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                        ,0x42b,(param_1->Direct3DDevice).Reference);
    }
    pvVar9 = local_f8;
    if (((char)local_160 != '\0') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bAllocDataWasUsed",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Util.h"
                            ,0xc1,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FRHILockTextureResult *)(*pcVar6)();
      return pFVar18;
    }
    local_170 = (uint)uStack_f0;
    local_168 = pvVar9;
  }
  else {
    if ((param_3) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bForceLockDeferred",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                            ,0x43a,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FRHILockTextureResult *)(*pcVar6)();
      return pFVar18;
    }
    uStack_60 = 0;
    uStack_5c = 0;
    local_80 = 0;
    puStack_78 = (undefined1 *)0x0;
    local_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    DStack_64 = 0;
    pIVar21 = GetD3D11Texture2D(this);
    (**(code **)((longlong)*pIVar21 + 0x50))(pIVar21,&local_80);
    local_80 = CONCAT44(local_140._0_4_,local_148);
    local_138.Value = (FD3D11LockedData *)this->_padding_;
    puStack_78 = &DAT_100000001;
    DStack_64 = D3D11_USAGE_STAGING;
    uStack_60 = 0;
    uStack_5c = 0x20000;
    local_58 = 0;
    ::FName::ToString((FName *)&local_138.Value,&local_90);
    ::FString::PrintfImpl(&local_d8,L"%s_Staging");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    pIVar5 = (param_1->Direct3DDevice).Reference;
    local_180.ComparisonIndex.Value = 0;
    local_180.Number = 0;
    iVar17 = (**(code **)((longlong)*pIVar5 + 0x28))(pIVar5,&local_80,0,&local_180);
    if (iVar17 < 0) {
      local_140 = (param_1->Direct3DDevice).Reference;
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar28.Data = local_d8.Data.AllocatorInstance.Data;
      }
      lVar22 = (**(code **)(this->_padding_ + 0x20))(this);
      cVar2 = *(char *)(lVar22 + 0x32);
      if (cVar2 == '\0') {
LAB_145986474:
        uVar27 = 1;
      }
      else if (cVar2 == '\x01') {
LAB_14598646e:
        uVar27 = (uint)*(ushort *)(lVar22 + 0x2e);
      }
      else if (cVar2 == '\x02') {
        uVar27 = (uint)*(ushort *)(lVar22 + 0x2c);
      }
      else {
        if (cVar2 == '\x03') goto LAB_145986474;
        if (cVar2 == '\x04') goto LAB_14598646e;
        uVar27 = 0;
      }
      VerifyD3D11CreateTextureResult
                (iVar17,(uint)*(byte *)((longlong)&this->_padding_ + 3),
                 "D3DRHI->GetDevice()->CreateTexture2D(&StagingTextureDesc, NULL, StagingTexture.GetInitReference())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                 ,0x460,*(uint *)((longlong)&this->_padding_ + 4),(uint)this->_padding_,uVar27,
                 (uchar)local_70,1,0,DStack_64,uStack_5c,local_58,local_70._4_4_,uStack_68,
                 (void *)0x0,0,0,local_140,(wchar_t *)FVar28.Data);
    }
    FVar8 = local_178;
    if (local_178 != local_180) {
      local_178 = local_180;
      if (local_180 != (FName)0x0) {
        (**(code **)(*(longlong *)local_180 + 8))(local_180);
      }
      if (FVar8 != (FName)0x0) {
        (**(code **)(*(longlong *)FVar8 + 0x10))(FVar8,local_180);
      }
    }
    pIVar4 = (param_1->Direct3DDeviceIMContext).Reference;
    (**(code **)((longlong)*pIVar4 + 0x170))(pIVar4,local_180,0,0);
    pIVar4 = (param_1->Direct3DDeviceIMContext).Reference;
    local_e8 = (void *)0x0;
    uStack_e0 = 0;
    iVar17 = (**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,local_180,0,1);
    if (iVar17 < 0) {
      VerifyD3D11Result(iVar17,
                        "D3DRHI->GetDeviceContext()->Map(StagingTexture, 0, D3D11_MAP_READ, 0, &MappedTexture)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                        ,0x468,(param_1->Direct3DDevice).Reference);
    }
    pvVar9 = local_e8;
    if (((char)local_160 != '\0') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bAllocDataWasUsed",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Util.h"
                            ,0xc1,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FRHILockTextureResult *)(*pcVar6)();
      return pFVar18;
    }
    local_168 = pvVar9;
    local_170 = (uint)uStack_e0;
    if (local_180 != (FName)0x0) {
      (**(code **)(*(longlong *)local_180 + 0x10))();
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
LAB_145986656:
    if (param_3) {
      local_138.Value = (FD3D11LockedData *)local_178;
      if (local_178 != (FName)0x0) {
        (**(code **)(*(longlong *)local_178 + 8))();
      }
      pvVar9 = local_168;
      uVar27 = local_170;
      uVar10 = (char)local_160;
      uVar11 = local_160._1_1_;
      puVar23 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x48,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar23;
      GRHICommandList.CommandListImmediate._48_8_ = puVar23 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar23 = &TD3D11RHIGenericCommand<`FD3D11Texture::Lock'::`43'::<lambda_1>,TEnableIf<0,void>_>
                  ::_vftable_;
      *(int *)(puVar23 + 3) = iVar29;
      *(FD3D11LockedData **)(puVar23 + 4) = local_138.Value;
      *(undefined1 *)(puVar23 + 7) = uVar10;
      puVar23[8] = local_110;
      puVar23[2] = this;
      *(uint *)(puVar23 + 5) = uVar27;
      *(undefined4 *)((longlong)puVar23 + 0x2c) = local_16c;
      puVar23[6] = pvVar9;
      *(undefined1 *)((longlong)puVar23 + 0x39) = uVar11;
      __return_storage_ptr__ = local_108;
      goto LAB_145986750;
    }
  }
  local_b8 = (this->Resource).Reference;
  lpCriticalSection = &param_1->LockTrackerCS;
  local_b0 = iVar29;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_a8 = &local_b8;
  local_a0 = &local_178;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FD3D11LockedKey_const_&,FD3D11LockedData_const_&>_>
            ((TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
              *)&param_1->LockTracker,&local_138,(bool *)&local_a8);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_145986750:
  __return_storage_ptr__->Data = local_168;
  __return_storage_ptr__->ByteCount = (ulonglong)local_158;
  __return_storage_ptr__->Stride = local_170;
  if (local_178 != (FName)0x0) {
    (**(code **)(*(longlong *)local_178 + 0x10))();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c8.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_c8.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_c8.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_c8.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_c8.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// Unlock @ 14599d390

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11Texture::Unlock(FD3D11Texture *this,FD3D11DynamicRHI *param_1,FRHILockTextureArgs *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar2;
  int iVar3;
  ID3D11DeviceContext *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D11UnlockTextureTime> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar12;
  FNameEntryId FVar13;
  FName FVar14;
  TRefCountPtr<ID3D11Resource> TVar15;
  uint uVar16;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  LARGE_INTEGER local_res20;
  FName local_a8;
  FName local_a0;
  FStatMessage local_90;
  FD3D11LockedKey local_80;
  FD3D11LockedData local_70;
  
  if ((*(char *)((longlong)&this->_padding_ + 2) == '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsTexture3D()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                         ,0x484,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar11 = StatPtr_STAT_D3D11UnlockTextureTime;
  if (StatPtr_STAT_D3D11UnlockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11UnlockTextureTime>)0x0) {
    pFVar10 = ::FName::FName(&local_a8,"STAT_D3D11UnlockTextureTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D11UnlockTextureTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11UnlockTextureTime,*pFVar10,
                        L"UnlockTexture time","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar8 = false;
  bVar7 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar16 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                   ,0x486);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar13.Value;
      uStackX_1c = uVar16;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_14599d4fc;
    }
  }
  bVar6 = false;
  FVar14 = local_a0;
LAB_14599d4fc:
  cVar2 = *(char *)((longlong)&this->_padding_ + 2);
  iVar3 = *(int *)((longlong)&param_2->_padding_ + 4);
  if ((cVar2 == '\x03') || (cVar2 == '\x04')) {
    iVar12 = (int)param_2->_padding_ + iVar3 * 6;
  }
  else {
    iVar12 = 0;
    if (cVar2 == '\x01') {
      iVar12 = iVar3;
    }
  }
  local_80.SourceObject = (this->Resource).Reference;
  local_70.StagingResource.Reference = (ID3D11Resource *)0x0;
  local_70.bAllocDataWasUsed = false;
  local_70.bLockDeferred = false;
  lpCriticalSection = &param_1->LockTrackerCS;
  uVar16 = (int)param_2->_padding_ + (uint)(byte)this->_padding_ * iVar12;
  local_80.Subresource = uVar16;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar9 = TMap<FD3D11LockedKey,FD3D11LockedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>_>
          ::RemoveAndCopyValue(&param_1->LockTracker,&local_80,&local_70);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("D3DRHI->RemoveLockedData(FD3D11LockedKey(GetResource(), Subresource), LockedData)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                         ,0x490,L"Texture is not locked"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TVar15.Reference = local_70.StagingResource.Reference;
  if ((local_70.bLockDeferred == false) && ((this->_padding_ & 0x20) != 0)) {
    pIVar4 = (param_1->Direct3DDeviceIMContext).Reference;
    (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,(this->Resource).Reference);
    TVar15.Reference = local_70.StagingResource.Reference;
  }
  else {
    pIVar4 = (param_1->Direct3DDeviceIMContext).Reference;
    if (local_70.StagingResource.Reference == (ID3D11Resource *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x180))
                (pIVar4,(this->Resource).Reference,uVar16,0,local_70.Data,local_70.Pitch,0);
      if ((local_70.bAllocDataWasUsed == false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("bAllocDataWasUsed",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Util.h"
                             ,0xcc,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FMemory::Free(local_70.Data);
    }
    else {
      (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,local_70.StagingResource.Reference);
    }
  }
  if (TVar15.Reference != (ID3D11Resource *)0x0) {
    (**(code **)((longlong)*TVar15.Reference + 0x10))(TVar15.Reference);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_90.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_90);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

