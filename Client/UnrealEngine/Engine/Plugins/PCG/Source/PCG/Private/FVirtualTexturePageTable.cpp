// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FVirtualTexturePageTable @ 14973aa80

FVirtualTexturePageTable * __thiscall
PCGVirtualTextureCommon::FVirtualTexturePageTable::FVirtualTexturePageTable
          (FVirtualTexturePageTable *this)

{
  this->bIsAdaptive = false;
  this->WorldToUVParameters[0].field0_0x0._s_0.W = 1.0;
  this->WorldToUVParameters[0].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[0].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[0].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.W = 1.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.W = 1.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.W = 1.0;
  (this->PageTableRef).Reference = (FRHITexture *)0x0;
  (this->PageTableIndirectionRef).Reference = (FRHITexture *)0x0;
  return this;
}

// ~FVirtualTexturePageTable @ 14973d880

void __thiscall
PCGVirtualTextureCommon::FVirtualTexturePageTable::~FVirtualTexturePageTable
          (FVirtualTexturePageTable *this)

{
  FRHITexture *pFVar1;
  
  pFVar1 = (this->PageTableIndirectionRef).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PageTableRef).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// Initialize @ 14981e130

void __thiscall
PCGVirtualTextureCommon::FVirtualTexturePageTable::Initialize
          (FVirtualTexturePageTable *this,URuntimeVirtualTexture *param_1,uint param_2,bool param_3,
          bool param_4)

{
  FRHITexture *pFVar1;
  double dVar2;
  uint uVar3;
  IAllocatedVirtualTexture *pIVar4;
  FRHITexture *pFVar5;
  TVector4<double> *pTVar6;
  TVector4<double> local_38;
  
  pFVar5 = (FRHITexture *)0x0;
  pFVar1 = (this->PageTableRef).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->PageTableRef).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PageTableIndirectionRef).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->PageTableIndirectionRef).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this->bIsAdaptive = false;
  this->PageTableUniforms[0].field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  this->PageTableUniforms[1].field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  this->WorldToUVParameters[0].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[0].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[0].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[0].field0_0x0._s_0.W = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.W = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.W = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.W = 0.0;
  if (((param_1 != (URuntimeVirtualTexture *)0x0) &&
      ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) &&
     (pIVar4 = URuntimeVirtualTexture::GetAllocatedVirtualTexture(param_1),
     pIVar4 != (IAllocatedVirtualTexture *)0x0)) {
    uVar3 = (**(code **)(pIVar4->_padding_ + 8))(pIVar4);
    if (param_2 < uVar3) {
      pFVar5 = (FRHITexture *)(**(code **)(pIVar4->_padding_ + 0x10))(pIVar4,param_2);
    }
    pFVar1 = (this->PageTableRef).Reference;
    if (pFVar1 != pFVar5) {
      (this->PageTableRef).Reference = pFVar5;
      if (pFVar5 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar5);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pFVar5 = (FRHITexture *)(**(code **)(pIVar4->_padding_ + 0x18))(pIVar4);
    pFVar1 = (this->PageTableIndirectionRef).Reference;
    if (pFVar1 != pFVar5) {
      (this->PageTableIndirectionRef).Reference = pFVar5;
      if (pFVar5 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar5);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pFVar1 = (this->PageTableRef).Reference;
    this->bIsAdaptive = param_1->bAdaptive;
    if (pFVar1 != (FRHITexture *)0x0) {
      (**(code **)(pIVar4->_padding_ + 0x38))(pIVar4,this->PageTableUniforms);
      if (param_3) {
        pTVar6 = URuntimeVirtualTexture::GetUniformParameter(param_1,&local_38,0);
        dVar2 = (pTVar6->field0_0x0)._s_0.Y;
        this->WorldToUVParameters[0].field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
        this->WorldToUVParameters[0].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pTVar6->field0_0x0)._s_0.W;
        this->WorldToUVParameters[0].field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
        this->WorldToUVParameters[0].field0_0x0._s_0.W = dVar2;
        pTVar6 = URuntimeVirtualTexture::GetUniformParameter(param_1,&local_38,1);
        dVar2 = (pTVar6->field0_0x0)._s_0.Y;
        this->WorldToUVParameters[1].field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
        this->WorldToUVParameters[1].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pTVar6->field0_0x0)._s_0.W;
        this->WorldToUVParameters[1].field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
        this->WorldToUVParameters[1].field0_0x0._s_0.W = dVar2;
        pTVar6 = URuntimeVirtualTexture::GetUniformParameter(param_1,&local_38,2);
        dVar2 = (pTVar6->field0_0x0)._s_0.Y;
        this->WorldToUVParameters[2].field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
        this->WorldToUVParameters[2].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pTVar6->field0_0x0)._s_0.W;
        this->WorldToUVParameters[2].field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
        this->WorldToUVParameters[2].field0_0x0._s_0.W = dVar2;
      }
      if (param_4) {
        pTVar6 = URuntimeVirtualTexture::GetUniformParameter(param_1,&local_38,3);
        dVar2 = (pTVar6->field0_0x0)._s_0.Y;
        this->WorldToUVParameters[3].field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
        this->WorldToUVParameters[3].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pTVar6->field0_0x0)._s_0.W;
        this->WorldToUVParameters[3].field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
        this->WorldToUVParameters[3].field0_0x0._s_0.W = dVar2;
      }
    }
  }
  return;
}

// IsValid @ 149821250

bool __thiscall
PCGVirtualTextureCommon::FVirtualTexturePageTable::IsValid(FVirtualTexturePageTable *this)

{
  if ((this->bIsAdaptive != false) &&
     ((this->PageTableIndirectionRef).Reference == (FRHITexture *)0x0)) {
    return false;
  }
  return (this->PageTableRef).Reference != (FRHITexture *)0x0;
}

// Reset @ 14982bb10

void __thiscall
PCGVirtualTextureCommon::FVirtualTexturePageTable::Reset(FVirtualTexturePageTable *this)

{
  FRHITexture *pFVar1;
  
  pFVar1 = (this->PageTableRef).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->PageTableRef).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PageTableIndirectionRef).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->PageTableIndirectionRef).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this->bIsAdaptive = false;
  this->PageTableUniforms[0].field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  this->PageTableUniforms[1].field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  this->WorldToUVParameters[0].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[0].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[0].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[0].field0_0x0._s_0.W = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[1].field0_0x0._s_0.W = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[2].field0_0x0._s_0.W = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.X = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVParameters[3].field0_0x0._s_0.W = 0.0;
  return;
}

