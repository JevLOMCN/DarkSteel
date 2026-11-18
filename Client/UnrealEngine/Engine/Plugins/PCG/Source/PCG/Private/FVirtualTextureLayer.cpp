// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FVirtualTextureLayer @ 14973aa60

FVirtualTextureLayer * __thiscall
PCGVirtualTextureCommon::FVirtualTextureLayer::FVirtualTextureLayer(FVirtualTextureLayer *this)

{
  (this->TextureSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->TextureUniforms).field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  return this;
}

// ~FVirtualTextureLayer @ 14973d860

void __thiscall
PCGVirtualTextureCommon::FVirtualTextureLayer::~FVirtualTextureLayer(FVirtualTextureLayer *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIShaderResourceView *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = (this->TextureSRV).Reference;
  if (this_00 == (FRHIShaderResourceView *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->field_0x8;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// Initialize @ 14981e060

void __thiscall
PCGVirtualTextureCommon::FVirtualTextureLayer::Initialize
          (FVirtualTextureLayer *this,URuntimeVirtualTexture *param_1,uint param_2,bool param_3)

{
  FRHIShaderResourceView *this_00;
  IAllocatedVirtualTexture *pIVar1;
  FRHIShaderResourceView *pFVar2;
  
  pFVar2 = (this->TextureSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->TextureSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->TextureUniforms).field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  if ((((param_1 != (URuntimeVirtualTexture *)0x0) &&
       ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) &&
      (pIVar1 = URuntimeVirtualTexture::GetAllocatedVirtualTexture(param_1),
      pIVar1 != (IAllocatedVirtualTexture *)0x0)) &&
     (pFVar2 = (FRHIShaderResourceView *)
               (**(code **)(pIVar1->_padding_ + 0x30))(pIVar1,param_2,param_3),
     pFVar2 != (FRHIShaderResourceView *)0x0)) {
    this_00 = (this->TextureSRV).Reference;
    if (this_00 != pFVar2) {
      (this->TextureSRV).Reference = pFVar2;
      FRHIResource::AddRef((FRHIResource *)pFVar2);
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    (**(code **)(pIVar1->_padding_ + 0x40))(pIVar1,&this->TextureUniforms,param_2);
  }
  return;
}

// IsValid @ 149821240

bool __thiscall PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid(FVirtualTextureLayer *this)

{
  return (this->TextureSRV).Reference != (FRHIShaderResourceView *)0x0;
}

// Reset @ 14982bad0

void __thiscall PCGVirtualTextureCommon::FVirtualTextureLayer::Reset(FVirtualTextureLayer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->TextureSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->TextureSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  (this->TextureUniforms).field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  return;
}

