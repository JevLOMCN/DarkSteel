// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 12

// FRHITextureReference @ 145cd11f0

FRHITextureReference * __thiscall
FRHITextureReference::FRHITextureReference(FRHITextureReference *this,FRHITexture *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRHITextureReference *pFVar3;
  TRefCountPtr<FRHITexture> this_00;
  
  FRHITexture::FRHITexture((FRHITexture *)this,RRT_TextureReference);
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this_00 = DefaultTexture;
  if (param_1 == (FRHITexture *)0x0) {
    (this->ReferencedTexture).Reference = DefaultTexture.Reference;
    if (this_00.Reference == (FRHITexture *)0x0) goto LAB_145cd1245;
  }
  else {
    (this->ReferencedTexture).Reference = param_1;
    this_00.Reference = param_1;
  }
  FRHIResource::AddRef((FRHIResource *)this_00.Reference);
LAB_145cd1245:
  (this->BindlessHandle).Index = 0;
  (this->BindlessHandle).Type = BufferSRV;
  *(undefined3 *)&(this->BindlessHandle).field_0x5 = 0;
  (this->BindlessHandle).Index = 0xffffffff;
  (this->BindlessHandle).Type = Invalid;
  if (DefaultTexture.Reference == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureReference.cpp"
                       ,0xf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHITextureReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// FRHITextureReference @ 145cd12b0

FRHITextureReference * __thiscall
FRHITextureReference::FRHITextureReference
          (FRHITextureReference *this,FRHITexture *param_1,FRHIDescriptorHandle param_2)

{
  code *pcVar1;
  bool bVar2;
  FRHITextureReference *pFVar3;
  TRefCountPtr<FRHITexture> this_00;
  
  FRHITexture::FRHITexture((FRHITexture *)this,RRT_TextureReference);
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this_00 = DefaultTexture;
  if (param_1 == (FRHITexture *)0x0) {
    (this->ReferencedTexture).Reference = DefaultTexture.Reference;
    if (this_00.Reference == (FRHITexture *)0x0) goto LAB_145cd130d;
  }
  else {
    (this->ReferencedTexture).Reference = param_1;
    this_00.Reference = param_1;
  }
  FRHIResource::AddRef((FRHIResource *)this_00.Reference);
LAB_145cd130d:
  this->BindlessHandle = param_2;
  if (DefaultTexture.Reference == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureReference.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHITextureReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FRHITextureReference @ 145cd2920

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRHITextureReference::~FRHITextureReference(FRHITextureReference *this)

{
  FRHITexture *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this_00 = (this->ReferencedTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// GetDefaultBindlessHandle @ 145cdc380

FRHIDescriptorHandle __thiscall
FRHITextureReference::GetDefaultBindlessHandle(FRHITextureReference *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIDescriptorHandle FVar3;
  FRHIDescriptorHandle in_RDX;
  
  if (((this->BindlessHandle).Index != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
    *(FRHIDescriptorHandle *)in_RDX = this->BindlessHandle;
    return in_RDX;
  }
  if ((this->ReferencedTexture).Reference == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureReference.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FRHIDescriptorHandle)(*pcVar1)();
      return FVar3;
    }
  }
  (**(code **)(((this->ReferencedTexture).Reference)->_padding_ + 0x30))();
  return in_RDX;
}

// GetDesc @ 145cdc410

FRHITextureDesc * __thiscall FRHITextureReference::GetDesc(FRHITextureReference *this)

{
  code *pcVar1;
  bool bVar2;
  FRHITextureDesc *pFVar3;
  
  if ((this->ReferencedTexture).Reference == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureReference.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHITextureDesc *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145cdc458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FRHITextureDesc *)
           (**(code **)(((this->ReferencedTexture).Reference)->_padding_ + 0x20))();
  return pFVar3;
}

// GetNativeResource @ 145cdcbd0

void * __thiscall FRHITextureReference::GetNativeResource(FRHITextureReference *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((this->ReferencedTexture).Reference == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureReference.cpp"
                       ,0x32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145cdcc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(((this->ReferencedTexture).Reference)->_padding_ + 0x38))();
  return pvVar3;
}

// GetNativeShaderResourceView @ 145cdcc30

void * __thiscall FRHITextureReference::GetNativeShaderResourceView(FRHITextureReference *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((this->ReferencedTexture).Reference == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureReference.cpp"
                       ,0x38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145cdcc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(((this->ReferencedTexture).Reference)->_padding_ + 0x40))();
  return pvVar3;
}

// GetTextureBaseRHI @ 145cde550

void * __thiscall FRHITextureReference::GetTextureBaseRHI(FRHITextureReference *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((this->ReferencedTexture).Reference == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureReference.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145cde598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(((this->ReferencedTexture).Reference)->_padding_ + 0x48))();
  return pvVar3;
}

// GetTextureReference @ 145cdea20

FRHITextureReference * __thiscall
FRHITextureReference::GetTextureReference(FRHITextureReference *this)

{
  return this;
}

// GetTrackerResource @ 145cdea30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FResource * __thiscall FRHITextureReference::GetTrackerResource(FRHITextureReference *this)

{
  code *pcVar1;
  bool bVar2;
  FResource *pFVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureReference.cpp"
                       ,0x4b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FResource *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145cdea7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FResource *)(**(code **)(*(longlong *)(this->_padding_ + 0x28) + 8))();
  return pFVar3;
}

// GetWriteMaskProperties @ 145cdef40

void __thiscall
FRHITextureReference::GetWriteMaskProperties
          (FRHITextureReference *this,void **param_1,uint *param_2)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ReferencedTexture).Reference == (FRHITexture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureReference.cpp"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->ReferencedTexture).Reference;
                    /* WARNING: Could not recover jumptable at 0x000145cdefa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,param_1,param_2);
  return;
}

// SetTrackedAccessFromContext @ 145cf1ef0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITextureReference::SetTrackedAccessFromContext
          (FRHITextureReference *this,FRHITrackedAccess param_1)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ReferencedTexture).Reference == (FRHITexture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureReference.cpp"
                       ,0x58,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->ReferencedTexture).Reference;
                    /* WARNING: Could not recover jumptable at 0x000145cf1f47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,param_1);
  return;
}

