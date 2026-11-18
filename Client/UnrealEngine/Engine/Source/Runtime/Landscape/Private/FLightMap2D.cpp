// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// FLightMap2D @ 145f42070

FLightMap2D * __thiscall FLightMap2D::FLightMap2D(FLightMap2D *this,FLightMap2D *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  ULightMapTexture2D *pUVar3;
  TObjectPtr<ULightMapTexture2D> TVar4;
  UShadowMapTexture2D *pUVar5;
  ULightMapVirtualTexture2D *pUVar6;
  TObjectPtr<ULightMapVirtualTexture2D> TVar7;
  undefined8 uVar8;
  double dVar9;
  
  puVar1 = &this->field_0x8;
  *(undefined ***)this = &___7FLightMap__6B_;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x10;
  _Src = *(void **)&param_1->field_0x8;
  *(int *)&this->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 4);
  }
  this->field_0x18 = param_1->field_0x18;
  *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
  *(undefined ***)this = &___7FLightMap2D__6B_;
  pUVar3 = param_1->Textures[0].field0_0x0.DebugPtr;
  this->Textures[0].field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (ULightMapTexture2D *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  TVar4.field0_0x0 = (TObjectPtr<ULightMapTexture2D>_u_0)param_1->Textures[1].field0_0x0.DebugPtr;
  this->Textures[1].field0_0x0 = TVar4.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.field0_0x0 != (ULightMapTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.field0_0x0);
  }
  pUVar3 = (param_1->SkyOcclusionTexture).field0_0x0.DebugPtr;
  (this->SkyOcclusionTexture).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (ULightMapTexture2D *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3 = (param_1->AOMaterialMaskTexture).field0_0x0.DebugPtr;
  (this->AOMaterialMaskTexture).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (ULightMapTexture2D *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar5 = (param_1->ShadowMapTexture).field0_0x0.DebugPtr;
  (this->ShadowMapTexture).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UShadowMapTexture2D *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = param_1->VirtualTextures[0].field0_0x0.DebugPtr;
  this->VirtualTextures[0].field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (ULightMapVirtualTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  TVar7.field0_0x0 =
       (TObjectPtr<ULightMapVirtualTexture2D>_u_0)param_1->VirtualTextures[1].field0_0x0.DebugPtr;
  this->VirtualTextures[1].field0_0x0 = TVar7.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar7.field0_0x0 != (ULightMapVirtualTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar7.field0_0x0);
  }
  uVar8 = *(undefined8 *)((longlong)&param_1->ScaleVectors[0].field0_0x0 + 8);
  *(undefined8 *)&this->ScaleVectors[0].field0_0x0 =
       *(undefined8 *)&param_1->ScaleVectors[0].field0_0x0;
  *(undefined8 *)((longlong)&this->ScaleVectors[0].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->ScaleVectors[1].field0_0x0 + 8);
  *(undefined8 *)&this->ScaleVectors[1].field0_0x0 =
       *(undefined8 *)&param_1->ScaleVectors[1].field0_0x0;
  *(undefined8 *)((longlong)&this->ScaleVectors[1].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->ScaleVectors[2].field0_0x0 + 8);
  *(undefined8 *)&this->ScaleVectors[2].field0_0x0 =
       *(undefined8 *)&param_1->ScaleVectors[2].field0_0x0;
  *(undefined8 *)((longlong)&this->ScaleVectors[2].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->ScaleVectors[3].field0_0x0 + 8);
  *(undefined8 *)&this->ScaleVectors[3].field0_0x0 =
       *(undefined8 *)&param_1->ScaleVectors[3].field0_0x0;
  *(undefined8 *)((longlong)&this->ScaleVectors[3].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->AddVectors[0].field0_0x0 + 8);
  *(undefined8 *)&this->AddVectors[0].field0_0x0 = *(undefined8 *)&param_1->AddVectors[0].field0_0x0
  ;
  *(undefined8 *)((longlong)&this->AddVectors[0].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->AddVectors[1].field0_0x0 + 8);
  *(undefined8 *)&this->AddVectors[1].field0_0x0 = *(undefined8 *)&param_1->AddVectors[1].field0_0x0
  ;
  *(undefined8 *)((longlong)&this->AddVectors[1].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->AddVectors[2].field0_0x0 + 8);
  *(undefined8 *)&this->AddVectors[2].field0_0x0 = *(undefined8 *)&param_1->AddVectors[2].field0_0x0
  ;
  *(undefined8 *)((longlong)&this->AddVectors[2].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->AddVectors[3].field0_0x0 + 8);
  *(undefined8 *)&this->AddVectors[3].field0_0x0 = *(undefined8 *)&param_1->AddVectors[3].field0_0x0
  ;
  *(undefined8 *)((longlong)&this->AddVectors[3].field0_0x0 + 8) = uVar8;
  dVar9 = (param_1->CoordinateScale).field0_0x0._s_0.Y;
  (this->CoordinateScale).field0_0x0._s_0.X = (param_1->CoordinateScale).field0_0x0._s_0.X;
  (this->CoordinateScale).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->CoordinateBias).field0_0x0._s_0.Y;
  (this->CoordinateBias).field0_0x0._s_0.X = (param_1->CoordinateBias).field0_0x0._s_0.X;
  (this->CoordinateBias).field0_0x0._s_0.Y = dVar9;
  uVar8 = *(undefined8 *)((longlong)&(param_1->InvUniformPenumbraSize).field0_0x0 + 8);
  *(undefined8 *)&(this->InvUniformPenumbraSize).field0_0x0 =
       *(undefined8 *)&(param_1->InvUniformPenumbraSize).field0_0x0;
  *(undefined8 *)((longlong)&(this->InvUniformPenumbraSize).field0_0x0 + 8) = uVar8;
  *(undefined4 *)this->bShadowChannelValid = *(undefined4 *)param_1->bShadowChannelValid;
  return this;
}

// GetLightMap2D @ 145f53ab0

FLightMap2D * __thiscall FLightMap2D::GetLightMap2D(FLightMap2D *this)

{
  return this;
}

// GetLightMap2D @ 145f53ac0

FLightMap2D * __thiscall FLightMap2D::GetLightMap2D(FLightMap2D *this)

{
  return this;
}

