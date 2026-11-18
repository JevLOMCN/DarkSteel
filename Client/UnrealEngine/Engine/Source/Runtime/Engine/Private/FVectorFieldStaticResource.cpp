// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FVectorFieldStaticResource @ 14890e440

void __thiscall
FVectorFieldStaticResource::~FVectorFieldStaticResource(FVectorFieldStaticResource *this)

{
  this->_padding_ = (longlong)&___7FVectorFieldStaticResource__6B_;
  FMemory::Free(this->VolumeData);
  this->VolumeData = (void *)0x0;
  this->_padding_ = (longlong)&___7FVectorFieldResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator() @ 148911230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVectorFieldStaticResource::UpdateResource'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FMemory::Free(*(void **)(*(longlong *)this + 0x78));
  *(undefined4 *)(*(longlong *)this + 0x28) = *(undefined4 *)((longlong)this + 8);
  *(undefined4 *)(*(longlong *)this + 0x2c) = *(undefined4 *)((longlong)this + 0xc);
  *(undefined4 *)(*(longlong *)this + 0x30) = *(undefined4 *)((longlong)this + 0x10);
  *(undefined4 *)(*(longlong *)this + 0x34) = *(undefined4 *)((longlong)this + 0x14);
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)((longlong)this + 0x20);
  *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)((longlong)this + 0x18);
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x40);
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)((longlong)this + 0x48);
  *(undefined8 *)(*(longlong *)this + 0x78) = *(undefined8 *)((longlong)this + 0x50);
  FRenderResource::UpdateRHI(*(FRenderResource **)this,(FRHICommandListBase *)param_1);
  return;
}

// InitRHI @ 148962bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVectorFieldStaticResource::InitRHI(FVectorFieldStaticResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FRHIResource *this_00;
  FRHITextureCreateDesc *pFVar5;
  TRefCountPtr<FRHITexture> TVar6;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [96];
  FResourceBulkDataInterface *local_d8;
  FName local_c8;
  ERHIAccess local_c0;
  ERHITextureInitAction local_bc;
  FResourceBulkDataInterface *local_b8;
  FName local_b0;
  FName local_a8;
  FRHITextureCreateDesc local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_138._16_8_ = this->VolumeData;
  if (((void *)local_138._16_8_ != (void *)0x0) && (GRHIGlobals.SupportsTexture3D)) {
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    iVar3 = (int)this->_padding_;
    local_138._8_8_ = &___7FResourceBulkDataArrayView__6B_;
    iVar4 = (int)this->_padding_;
    local_138._24_4_ = iVar4 * iVar2 * iVar3 * 8;
    pFVar5 = FRHITextureCreateDesc::Create3D
                       (&local_98,L"FVectorFieldStaticResource",iVar3,iVar2,iVar4,PF_FloatRGBA);
    pFVar5->_padding_ = 8;
    pFVar5->BulkData = (FResourceBulkDataInterface *)(local_138 + 8);
    pFVar5->InitAction = BulkData;
    FRHITextureDesc::FRHITextureDesc
              ((FRHITextureDesc *)(local_138 + 0x20),(FRHITextureDesc *)pFVar5);
    local_c8 = (FName)pFVar5->DebugName;
    local_c0 = pFVar5->InitialState;
    local_bc = pFVar5->InitAction;
    local_b8 = pFVar5->BulkData;
    local_b0 = pFVar5->ClassName;
    local_a8 = pFVar5->OwnerName;
    if ((void *)local_98._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_98._padding_);
    }
    TVar6 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_138);
    plVar1 = &this->_padding_;
    if ((FRHITexture *)plVar1 != TVar6.Reference) {
      this_00 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar6.Reference)->_padding_;
      (TVar6.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if ((FRHIResource *)local_138._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138._0_8_);
    }
    FMemory::Free(this->VolumeData);
    this->VolumeData = (void *)0x0;
    if (local_d8 != (FResourceBulkDataInterface *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  return;
}

