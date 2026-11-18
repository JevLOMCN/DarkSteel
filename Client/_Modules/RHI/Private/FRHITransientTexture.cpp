// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// BindDebugLabelName @ 145c92240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHITransientTexture::BindDebugLabelName(FRHITransientTexture *this,FRHICommandListBase *param_1)

{
  ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar6;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ViewCache).UAVs.AllocatorInstance.SecondaryData;
  iVar2 = (this->ViewCache).UAVs.ArrayNum;
  lVar3 = this->_padding_;
  if (FVar6 == (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    FVar6 = (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
             )&this->ViewCache;
  }
  FVar1 = (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
          ((longlong)FVar6 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ViewCache).UAVs.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar1) break;
    (**(code **)(GDynamicRHI->_padding_ + 0x208))
              (GDynamicRHI,param_1,*(undefined8 *)((longlong)FVar6 + 0x10),lVar3);
    FVar6 = (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
             )((longlong)FVar6 + 0x18);
  }
  lVar3 = this->_padding_;
  if (this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResourceTask.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x133,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c92315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x218))(GDynamicRHI,param_1,this->_padding_,lVar3);
  return;
}

// FRHITransientTexture @ 145cd14e0

FRHITransientTexture * __thiscall
FRHITransientTexture::FRHITransientTexture
          (FRHITransientTexture *this,TTask<FRHITransientResource::FResourceTaskResult> *param_1,
          ulong64 param_2,ulong64 param_3,ERHITransientAllocationType param_4,
          FRHITextureDesc *param_5)

{
  TTask<FRHITransientResource::FResourceTaskResult> TVar1;
  
  this->_padding_ = (longlong)&___7FRHITransientResource__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TVar1 = *param_1;
  this->_padding_ = (longlong)TVar1;
  if (TVar1 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) {
    LOCK();
    *(int *)((longlong)TVar1 + 0x30) = *(int *)((longlong)TVar1 + 0x30) + 1;
    UNLOCK();
  }
  *(ERHITransientAllocationType *)((longlong)&this->_padding_ + 7) = param_4;
  this->_padding_ = (longlong)&___7FRHITransientTexture__6B_;
  this->_padding_ = 0;
  this->_padding_ = param_2;
  this->_padding_ = param_3;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  FRHITextureDesc::FRHITextureDesc(&this->CreateInfo,param_5);
  (this->ViewCache).UAVs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)0x0
  ;
  (this->ViewCache).UAVs.ArrayNum = 0;
  (this->ViewCache).UAVs.ArrayMax = 1;
  (this->ViewCache).SRVs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>)0x0;
  (this->ViewCache).SRVs.ArrayNum = 0;
  (this->ViewCache).SRVs.ArrayMax = 1;
  return this;
}

// FRHITransientTexture @ 145cd15f0

FRHITransientTexture * __thiscall
FRHITransientTexture::FRHITransientTexture
          (FRHITransientTexture *this,FRHIResource *param_1,ulong64 param_2,ulong64 param_3,
          ulong64 param_4,ERHITransientAllocationType param_5,FRHITextureDesc *param_6)

{
  this->_padding_ = (longlong)&___7FRHITransientResource__6B_;
  this->_padding_ = (longlong)param_1;
  if (param_1 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(param_1);
  }
  this->_padding_ = param_4;
  *(ERHITransientAllocationType *)((longlong)&this->_padding_ + 7) = param_5;
  this->_padding_ = (longlong)&___7FRHITransientTexture__6B_;
  this->_padding_ = 0;
  this->_padding_ = param_2;
  this->_padding_ = param_3;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  FRHITextureDesc::FRHITextureDesc(&this->CreateInfo,param_6);
  (this->ViewCache).UAVs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)0x0
  ;
  (this->ViewCache).UAVs.ArrayNum = 0;
  (this->ViewCache).UAVs.ArrayMax = 1;
  (this->ViewCache).SRVs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>)0x0;
  (this->ViewCache).SRVs.ArrayNum = 0;
  (this->ViewCache).SRVs.ArrayMax = 1;
  return this;
}

// ~FRHITransientTexture @ 145cd2b20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRHITransientTexture::~FRHITransientTexture(FRHITransientTexture *this)

{
  ForElementType<EPixelFormat> FVar1;
  
  this->_padding_ = (longlong)&___7FRHITransientTexture__6B_;
  FRHITextureViewCache::~FRHITextureViewCache(&this->ViewCache);
  FVar1 = (this->CreateInfo).AliasableFormats.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FRHITransientResource::~FRHITransientResource((FRHITransientResource *)this);
  return;
}

