// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FTexture2DDynamicResource @ 14887cb80

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

FTexture2DDynamicResource * __thiscall
FTexture2DDynamicResource::FTexture2DDynamicResource
          (FTexture2DDynamicResource *this,UTexture2DDynamic *param_1)

{
  FTexture::FTexture((FTexture *)this);
  this->Owner = param_1;
  this->_padding_ = (longlong)&___7FTexture2DDynamicResource__6B_;
  this->_padding_ = 0;
  (this->Texture2DRHI).Reference = (FRHITexture *)0x0;
  return this;
}

// GetSizeX @ 148890770

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

uint __thiscall FTexture2DDynamicResource::GetSizeX(FTexture2DDynamicResource *this)

{
  return this->Owner->SizeX;
}

// GetSizeY @ 1488908a0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

uint __thiscall FTexture2DDynamicResource::GetSizeY(FTexture2DDynamicResource *this)

{
  return this->Owner->SizeY;
}

// GetTexture2DRHI @ 1488930f0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FTexture2DDynamicResource::GetTexture2DRHI(FTexture2DDynamicResource *this)

{
  FRHITexture *this_00;
  FRHITexture *in_RDX;
  
  this_00 = (this->Texture2DRHI).Reference;
  in_RDX->_padding_ = (longlong)this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// InitRHI @ 148893ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTexture2DDynamicResource::InitRHI(FTexture2DDynamicResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  EPixelFormat EVar2;
  ESamplerAddressMode EVar3;
  FRHIResource *this_00;
  UTexture2DDynamic *pUVar4;
  FRHITexture *pFVar5;
  FRHITexture *this_01;
  int iVar6;
  int iVar7;
  UDeviceProfileManager *this_02;
  UDeviceProfile *this_03;
  UTextureLODSettings *this_04;
  FRHIResource *this_05;
  FRHITextureCreateDesc *pFVar8;
  TRefCountPtr<FRHITexture> TVar9;
  ForAnyElementType FVar10;
  undefined1 auStack_198 [32];
  undefined1 local_168 [8];
  FSamplerStateInitializerRHI local_160;
  FString local_140;
  FRHITextureDesc local_128;
  wchar_t *local_d8;
  ERHIAccess local_d0;
  ERHITextureInitAction local_cc;
  FResourceBulkDataInterface *local_c8;
  FName local_c0;
  FName local_b8;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  EVar3 = this->Owner->SamplerAddressMode;
  this_02 = UDeviceProfileManager::Get(false);
  this_03 = UDeviceProfileManager::GetActiveProfile(this_02);
  this_04 = UDeviceProfile::GetTextureLODSettings(this_03);
  local_160.Filter.Value = UTextureLODSettings::GetSamplerFilter(this_04,(UTexture *)this->Owner);
  local_160.AddressU.Value = (uchar)EVar3;
  local_160.MipBias = 0.0;
  local_160.MinMipLevel = 0.0;
  local_160.MaxMipLevel = 3.4028235e+38;
  local_160.MaxAnisotropy = 0;
  local_160.BorderColor = 0;
  local_160.SamplerComparisonFunction.Value = '\0';
  local_160.AddressV.Value = local_160.AddressU.Value;
  local_160.AddressW.Value = local_160.AddressU.Value;
  this_05 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_160);
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != this_05) {
    this->_padding_ = (longlong)this_05;
    if (this_05 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_05);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  local_168 = (undefined1  [8])this->Owner->_padding_;
  ::FName::ToString((FName *)local_168,&local_140);
  EVar2 = (this->Owner->Format).Value;
  iVar6 = (**(code **)(this->_padding_ + 0x38))(this);
  iVar7 = (**(code **)(this->_padding_ + 0x30))(this);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar10.Data = local_140.Data.AllocatorInstance.Data;
  }
  pFVar8 = FRHITextureCreateDesc::Create2D(&local_a8,(wchar_t *)FVar10.Data,iVar7,iVar6,EVar2);
  *(char *)&pFVar8->_padding_ = (char)this->Owner->NumMips;
  FRHITextureDesc::FRHITextureDesc(&local_128,(FRHITextureDesc *)pFVar8);
  local_d8 = pFVar8->DebugName;
  local_d0 = pFVar8->InitialState;
  local_cc = pFVar8->InitAction;
  local_c8 = pFVar8->BulkData;
  local_c0 = pFVar8->ClassName;
  local_b8 = pFVar8->OwnerName;
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  pUVar4 = this->Owner;
  if (pUVar4->bIsResolveTarget == 0) {
    if ((pUVar4->_padding_ & 0x1000000000000) != 0) {
      local_128.Flags = local_128.Flags | SRGB;
    }
  }
  else {
    local_128.Flags = local_128.Flags | ResolveTargetable;
  }
  if ((pUVar4->_padding_ & 0x2000000000000) != 0) {
    local_128.Flags = local_128.Flags | NoTiling;
  }
  TVar9 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_168);
  pTVar1 = &this->Texture2DRHI;
  if ((FRHITexture *)pTVar1 != TVar9.Reference) {
    pFVar5 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (pFVar5 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FName)local_168 != (FName)0x0) {
    FRHIResource::Release((FRHIResource *)local_168);
  }
  pFVar5 = pTVar1->Reference;
  this_01 = (FRHITexture *)this->_padding_;
  if (this_01 != pFVar5) {
    this->_padding_ = (longlong)pFVar5;
    if (pFVar5 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar5);
    }
    if (this_01 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  FRHITexture::SetName((FRHITexture *)this->_padding_,(FName)this->Owner->_padding_);
  FRHICommandListBase::UpdateTextureReference
            (param_1,*(FRHITextureReference **)(this->Owner->_padding_ + 0x20),
             (FRHITexture *)this->_padding_);
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  return;
}

// ReleaseRHI @ 148896c70

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FTexture2DDynamicResource::ReleaseRHI(FTexture2DDynamicResource *this)

{
  FRHITextureReference *pFVar1;
  FRHITexture *this_00;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = *(FRHITextureReference **)(this->Owner->_padding_ + 0x20);
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRHICommandListBase::UpdateTextureReference
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar1,(FRHITexture *)0x0)
  ;
  FTexture::ReleaseRHI((FTexture *)this);
  this_00 = (this->Texture2DRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->Texture2DRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// WriteRawToTexture_RenderThread @ 14889f950

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DDynamicResource::WriteRawToTexture_RenderThread
          (FTexture2DDynamicResource *this,TArrayView<unsigned_char_const_,__int64> *param_1)

{
  uint uVar1;
  uint uVar2;
  FRHITexture *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uchar *puVar8;
  longlong lVar9;
  uchar *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  FMemScope local_b8;
  FMemScope local_b0;
  longlong local_a8 [2];
  uint local_98;
  FRHITexture *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined2 local_74;
  FRHITexture *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined2 local_54;
  
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2DDynamic.cpp"
                         ,0x60,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar7 = (**(code **)(((this->Texture2DRHI).Reference)->_padding_ + 0x20))();
  uVar1 = *(uint *)(lVar7 + 0x24);
  lVar7 = (**(code **)(((this->Texture2DRHI).Reference)->_padding_ + 0x20))();
  uVar2 = *(uint *)(lVar7 + 0x28);
  if (((uVar2 * uVar1 != 0) && ((ulonglong)(uVar2 * uVar1) <= (ulonglong)param_1->ArrayNum)) &&
     (lVar7 = (**(code **)(((this->Texture2DRHI).Reference)->_padding_ + 0x20))(),
     *(char *)(lVar7 + 0x33) == '\x02')) {
    pFVar3 = (this->Texture2DRHI).Reference;
    FLLMScope::FLLMScope(local_res10,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_b8,Textures,true);
    local_88 = 0;
    local_80 = 0;
    local_74 = 0;
    local_78 = 1;
    local_90 = pFVar3;
    FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_a8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res8);
    FMemScope::~FMemScope(&local_b8);
    FLLMScope::~FLLMScope(local_res10);
    if (uVar2 != 0) {
      puVar4 = param_1->DataPtr;
      lVar7 = 0;
      uVar12 = (ulonglong)uVar2;
      do {
        lVar9 = ((ulonglong)uVar2 - lVar7) + -1;
        puVar8 = (uchar *)(lVar9 * (ulonglong)local_98 + local_a8[0]);
        puVar10 = puVar4 + lVar9 * (ulonglong)uVar1 * 4;
        uVar11 = (ulonglong)uVar1;
        if (uVar1 != 0) {
          do {
            *puVar8 = *puVar10;
            puVar8[1] = puVar10[1];
            puVar8[2] = puVar10[2];
            puVar8[3] = puVar10[3];
            uVar11 = uVar11 - 1;
            puVar8 = puVar8 + 4;
            puVar10 = puVar10 + 4;
          } while (uVar11 != 0);
        }
        lVar7 = lVar7 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    local_70 = (this->Texture2DRHI).Reference;
    local_68 = 0;
    local_58 = 3;
    local_60 = 0;
    local_54 = 0;
    FLLMScope::FLLMScope(local_res18,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_b0,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,0x154be5ed0,&local_70);
    FMemScope::~FMemScope(&local_b0);
    FLLMScope::~FLLMScope(local_res18);
    return;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<614521201997381735>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture2DDynamic.cpp"
                     ,0x67,
                     "Width * Height != 0 && SourceSize >= Width * Height && Texture2DRHI->GetDesc().Format == EPixelFormat::PF_B8G8R8A8"
                    );
  if (!bVar6) {
    return;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

