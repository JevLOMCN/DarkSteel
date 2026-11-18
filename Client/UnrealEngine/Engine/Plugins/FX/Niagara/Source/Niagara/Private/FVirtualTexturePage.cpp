// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Reset @ 14918b390

void __thiscall
FNDILandscapeData_RenderThread::FVirtualTexturePage::Reset(FVirtualTexturePage *this)

{
  FRHITexture *this_00;
  
  this_00 = (this->PageTableRef).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->PageTableRef).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  *(undefined8 *)&this->PageTableUniforms[0].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->PageTableUniforms[0].field0_0x0 + 8) = 0;
  *(undefined8 *)&this->PageTableUniforms[1].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->PageTableUniforms[1].field0_0x0 + 8) = 0;
  this->WorldToUvParameters[0].field0_0x0._s_0.X = 0.0;
  this->WorldToUvParameters[0].field0_0x0._s_0.Y = 0.0;
  this->WorldToUvParameters[0].field0_0x0._s_0.Z = 0.0;
  this->WorldToUvParameters[0].field0_0x0._s_0.W = 0.0;
  this->WorldToUvParameters[1].field0_0x0._s_0.X = 0.0;
  this->WorldToUvParameters[1].field0_0x0._s_0.Y = 0.0;
  this->WorldToUvParameters[1].field0_0x0._s_0.Z = 0.0;
  this->WorldToUvParameters[1].field0_0x0._s_0.W = 0.0;
  this->WorldToUvParameters[2].field0_0x0._s_0.X = 0.0;
  this->WorldToUvParameters[2].field0_0x0._s_0.Y = 0.0;
  this->WorldToUvParameters[2].field0_0x0._s_0.Z = 0.0;
  this->WorldToUvParameters[2].field0_0x0._s_0.W = 0.0;
  this->WorldToUvParameters[3].field0_0x0._s_0.X = 0.0;
  this->WorldToUvParameters[3].field0_0x0._s_0.Y = 0.0;
  this->WorldToUvParameters[3].field0_0x0._s_0.Z = 0.0;
  this->WorldToUvParameters[3].field0_0x0._s_0.W = 0.0;
  this->AllocatedTexture = (IAllocatedVirtualTexture *)0x0;
  (this->SizeInPages).field0_0x0 = (TIntPoint<unsigned_int>_u_0)0x0;
  return;
}

// Update @ 14918fd70

void __thiscall
FNDILandscapeData_RenderThread::FVirtualTexturePage::Update
          (FVirtualTexturePage *this,URuntimeVirtualTexture *param_1,uint param_2,bool param_3,
          bool param_4)

{
  FRHITexture *this_00;
  double dVar1;
  TIntPoint<unsigned_int>_u_0 TVar2;
  IAllocatedVirtualTexture *pIVar3;
  FRHITexture *this_01;
  TVector4<double> *pTVar4;
  TVector4<double> local_28;
  
  Reset(this);
  if ((param_1 != (URuntimeVirtualTexture *)0x0) &&
     ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) {
    pIVar3 = URuntimeVirtualTexture::GetAllocatedVirtualTexture(param_1);
    this->AllocatedTexture = pIVar3;
    if (pIVar3 != (IAllocatedVirtualTexture *)0x0) {
      this_01 = (FRHITexture *)(**(code **)(pIVar3->_padding_ + 0x10))(pIVar3,param_2);
      this_00 = (this->PageTableRef).Reference;
      if (this_00 != this_01) {
        (this->PageTableRef).Reference = this_01;
        if (this_01 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_01);
        }
        if (this_00 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
      if ((this->PageTableRef).Reference != (FRHITexture *)0x0) {
        (**(code **)(this->AllocatedTexture->_padding_ + 0x38))
                  (this->AllocatedTexture,this->PageTableUniforms);
        if (param_3) {
          pTVar4 = URuntimeVirtualTexture::GetUniformParameter(param_1,&local_28,0);
          dVar1 = (pTVar4->field0_0x0)._s_0.Y;
          this->WorldToUvParameters[0].field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
          this->WorldToUvParameters[0].field0_0x0._s_0.Y = dVar1;
          dVar1 = (pTVar4->field0_0x0)._s_0.W;
          this->WorldToUvParameters[0].field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
          this->WorldToUvParameters[0].field0_0x0._s_0.W = dVar1;
          pTVar4 = URuntimeVirtualTexture::GetUniformParameter(param_1,&local_28,1);
          dVar1 = (pTVar4->field0_0x0)._s_0.Y;
          this->WorldToUvParameters[1].field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
          this->WorldToUvParameters[1].field0_0x0._s_0.Y = dVar1;
          dVar1 = (pTVar4->field0_0x0)._s_0.W;
          this->WorldToUvParameters[1].field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
          this->WorldToUvParameters[1].field0_0x0._s_0.W = dVar1;
          pTVar4 = URuntimeVirtualTexture::GetUniformParameter(param_1,&local_28,2);
          dVar1 = (pTVar4->field0_0x0)._s_0.Y;
          this->WorldToUvParameters[2].field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
          this->WorldToUvParameters[2].field0_0x0._s_0.Y = dVar1;
          dVar1 = (pTVar4->field0_0x0)._s_0.W;
          this->WorldToUvParameters[2].field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
          this->WorldToUvParameters[2].field0_0x0._s_0.W = dVar1;
        }
        if (param_4) {
          pTVar4 = URuntimeVirtualTexture::GetUniformParameter(param_1,&local_28,3);
          dVar1 = (pTVar4->field0_0x0)._s_0.Y;
          this->WorldToUvParameters[3].field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
          this->WorldToUvParameters[3].field0_0x0._s_0.Y = dVar1;
          dVar1 = (pTVar4->field0_0x0)._s_0.W;
          this->WorldToUvParameters[3].field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
          this->WorldToUvParameters[3].field0_0x0._s_0.W = dVar1;
        }
      }
      pIVar3 = this->AllocatedTexture;
      TVar2._s_0.Y = pIVar3->HeightInBlocks * pIVar3->BlockHeightInTiles;
      TVar2._s_0.X = pIVar3->WidthInBlocks * pIVar3->BlockWidthInTiles;
      (this->SizeInPages).field0_0x0 = TVar2;
    }
  }
  return;
}

