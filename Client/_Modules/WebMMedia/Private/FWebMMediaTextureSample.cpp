// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 15

// FWebMMediaTextureSample @ 14f119eb0

FWebMMediaTextureSample * __thiscall
FWebMMediaTextureSample::FWebMMediaTextureSample(FWebMMediaTextureSample *this)

{
  this->_padding_ = (longlong)&_vftable__for__IMediaTextureSample__;
  this->_padding_ = (longlong)&_vftable__for__IMediaPoolable__;
  (this->Texture).Reference = (FRHITexture *)0x0;
  (this->Time).Ticks = 0;
  (this->Duration).Ticks = 0;
  return this;
}

// CreateTexture @ 14f11cda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWebMMediaTextureSample::CreateTexture(FWebMMediaTextureSample *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  FRHITexture *this_00;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHITexture> TVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138 [24];
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  TIntPoint<int>_u_0 local_104;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  wchar_t *local_e8;
  ERHIAccess local_e0;
  ERHITextureInitAction local_dc;
  FResourceBulkDataInterface *local_d8;
  FName local_d0;
  FName local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FRHITextureDesc local_a8;
  FResourceBulkDataInterface *local_58;
  uint local_50;
  uint local_4c;
  FName local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMMediaTextureSample.cpp"
                       ,0x15,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_118 = 0;
  local_120 = 1;
  local_10c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_dc = BulkData;
  local_110 = 0;
  local_d8 = (FResourceBulkDataInterface *)0x15314f160;
  local_104 = (this->TotalSize).field0_0x0;
  local_108 = 0;
  local_fc = 0x10001;
  local_f8 = 0x2000101;
  local_f4 = 0xff00;
  local_e8 = (wchar_t *)0x0;
  local_e0 = None;
  local_d0.ComparisonIndex.Value = 0x70;
  local_d0.Number = 0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_138._16_8_ = 0x19;
  FRHITextureDesc::FRHITextureDesc(&local_a8,(FRHITextureDesc *)(local_138 + 0x10));
  local_58 = local_d8;
  local_50 = local_d0.ComparisonIndex.Value;
  local_4c = local_d0.Number;
  local_48 = local_c8;
  local_40 = local_c0;
  local_38 = local_b8;
  if (local_e8 != (wchar_t *)0x0) {
    FMemory::Free(local_e8);
  }
  TVar4 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_138);
  pTVar1 = &this->Texture;
  if ((FRHITexture *)pTVar1 != TVar4.Reference) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((FRHIResource *)local_138._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_138._0_8_);
  }
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetBuffer @ 14f11eb40

void * __thiscall FWebMMediaTextureSample::GetBuffer(FWebMMediaTextureSample *this)

{
  return (void *)0x0;
}

// GetDim @ 14f11ed10

TIntPoint<int> __thiscall FWebMMediaTextureSample::GetDim(FWebMMediaTextureSample *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->TotalSize).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetDuration @ 14f11edc0

FTimespan __thiscall FWebMMediaTextureSample::GetDuration(FWebMMediaTextureSample *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Duration).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetFormat @ 14f11edf0

EMediaTextureSampleFormat __thiscall
FWebMMediaTextureSample::GetFormat(FWebMMediaTextureSample *this)

{
  return CharBGRA;
}

// GetOutputDim @ 14f11ee80

TIntPoint<int> __thiscall FWebMMediaTextureSample::GetOutputDim(FWebMMediaTextureSample *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->DisplaySize).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetStride @ 14f11f080

uint __thiscall FWebMMediaTextureSample::GetStride(FWebMMediaTextureSample *this)

{
  FRHITexture *pFVar1;
  longlong lVar2;
  
  pFVar1 = (this->Texture).Reference;
  if (pFVar1 == (FRHITexture *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(pFVar1->_padding_ + 0x20))();
  return *(int *)(lVar2 + 0x24) << 2;
}

// GetTexture @ 14f11f130

FRHITexture * __thiscall FWebMMediaTextureSample::GetTexture(FWebMMediaTextureSample *this)

{
  return (this->Texture).Reference;
}

// GetTextureRef @ 14f11f140

TRefCountPtr<FRHITexture> __thiscall
FWebMMediaTextureSample::GetTextureRef(FWebMMediaTextureSample *this)

{
  FRHITexture *this_00;
  FRHITexture *in_RDX;
  
  this_00 = (this->Texture).Reference;
  in_RDX->_padding_ = (longlong)this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// GetTime @ 14f11f1c0

FMediaTimeStamp * __thiscall
FWebMMediaTextureSample::GetTime
          (FWebMMediaTextureSample *this,FMediaTimeStamp *__return_storage_ptr__)

{
  (__return_storage_ptr__->Time).Ticks = (this->Time).Ticks;
  __return_storage_ptr__->SequenceIndex = 0;
  __return_storage_ptr__->LoopIndex = 0;
  return __return_storage_ptr__;
}

// Initialize @ 14f11fa90

void __thiscall
FWebMMediaTextureSample::Initialize
          (FWebMMediaTextureSample *this,TIntPoint<int> param_1,TIntPoint<int> param_2,
          FTimespan param_3,FTimespan param_4)

{
  (this->Duration).Ticks = param_4.Ticks;
  (this->Time).Ticks = param_3.Ticks;
  (this->DisplaySize).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
  (this->TotalSize).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_2.field0_0x0;
  return;
}

// IsCacheable @ 14f11ffd0

bool __thiscall FWebMMediaTextureSample::IsCacheable(FWebMMediaTextureSample *this)

{
  return true;
}

// IsOutputSrgb @ 14f11fff0

bool __thiscall FWebMMediaTextureSample::IsOutputSrgb(FWebMMediaTextureSample *this)

{
  return true;
}

// ShutdownPoolable @ 14f122e10

void __thiscall FWebMMediaTextureSample::ShutdownPoolable(FWebMMediaTextureSample *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
  }
  (this->Texture).Reference = (FRHITexture *)0x0;
  return;
}

