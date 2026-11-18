// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FPaintArgs @ 1425bd5f0

FPaintArgs * __thiscall
FPaintArgs::FPaintArgs
          (FPaintArgs *this,SWidget *param_1,FHittestGrid *param_2,FHittestGrid *param_3,
          FDeprecateVector2DParameter param_4,double param_5,float param_6)

{
  (this->WindowOffset).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_4;
  this->CurrentTime = param_5;
  this->DeltaTime = param_6;
  this->bInheritedHittestability = '\x01';
  this->bDeferredPainting = '\0';
  this->RootGrid = param_2;
  this->CurrentGrid = param_3;
  this->PaintParentPtr = param_1;
  return this;
}

// FPaintArgs @ 1425bd630

FPaintArgs * __thiscall
FPaintArgs::FPaintArgs
          (FPaintArgs *this,SWidget *param_1,FHittestGrid *param_2,
          FDeprecateVector2DParameter param_3,double param_4,float param_5)

{
  this->bInheritedHittestability = '\x01';
  this->bDeferredPainting = '\0';
  this->CurrentTime = param_4;
  this->DeltaTime = param_5;
  this->RootGrid = param_2;
  this->CurrentGrid = param_2;
  (this->WindowOffset).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_3;
  this->PaintParentPtr = param_1;
  return this;
}

// InsertCustomHitTestPath @ 1425e8390

FPaintArgs * __thiscall
FPaintArgs::InsertCustomHitTestPath
          (FPaintArgs *this,FPaintArgs *__return_storage_ptr__,SWidget *param_1,
          TSharedRef<ICustomHitTestPath,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FHittestGrid *pFVar2;
  TVector2<float>_u_0 TVar3;
  SWidget *pSVar4;
  double dVar5;
  float fVar6;
  undefined4 uVar7;
  
  FHittestGrid::InsertCustomHitTestPath(this->CurrentGrid,param_1,param_2);
  pFVar2 = this->CurrentGrid;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  TVar3 = (this->WindowOffset).field0_0x0;
  pSVar4 = this->PaintParentPtr;
  __return_storage_ptr__->RootGrid = this->RootGrid;
  __return_storage_ptr__->CurrentGrid = pFVar2;
  dVar5 = this->CurrentTime;
  fVar6 = this->DeltaTime;
  uVar7 = *(undefined4 *)&this->field_0x2c;
  (__return_storage_ptr__->WindowOffset).field0_0x0 = TVar3;
  __return_storage_ptr__->PaintParentPtr = pSVar4;
  __return_storage_ptr__->CurrentTime = dVar5;
  __return_storage_ptr__->DeltaTime = fVar6;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = uVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

