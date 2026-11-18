// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// FPoly @ 14834b220

FPoly * __thiscall FPoly::FPoly(FPoly *this)

{
  FLightmassPrimitiveSettings *pFVar1;
  
  (this->Vertices).AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TVector<float>_>)0x0;
  *(undefined8 *)&(this->Base).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Base).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->Normal).field0_0x0 + 4) = 0;
  *(undefined8 *)&(this->TextureU).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->TextureU).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->TextureV).field0_0x0 + 4) = 0;
  (this->Vertices).ArrayNum = 0;
  *(undefined8 *)&(this->Vertices).ArrayMax = 0x10;
  pFVar1->bUseTwoSidedLighting = 0;
  pFVar1->bUseVertexNormalForHemisphereGather = 0;
  pFVar1->bUseEmissiveForStaticLighting = 0;
  pFVar1->bShadowIndirectOnly = 0;
  (this->Actor).field0_0x0.DebugPtr = (ABrush *)0x0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->RulesetVariation).ComparisonIndex = 0;
  (this->RulesetVariation).Number = 0;
  (this->ItemName).ComparisonIndex = 0;
  (this->ItemName).Number = 0;
  this->SmoothingMask = 0;
  this->iLink = -1;
  this->iLinkSurf = -1;
  this->iBrushPoly = -1;
  this->LightMapScale = 32.0;
  (this->LightmassSettings).EmissiveLightFalloffExponent = 8.0;
  (this->LightmassSettings).EmissiveLightExplicitInfluenceRadius = 0.0;
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).FullyOccludedSamplesFraction = 1.0;
  return this;
}

// operator= @ 14834e400

FPoly * __thiscall FPoly::operator=(FPoly *this,FPoly *param_1)

{
  int *piVar1;
  int iVar2;
  ABrush *pAVar3;
  UMaterialInterface *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ForElementType<UE::Math::TVector<float>_> _Dst;
  ForElementType<UE::Math::TVector<float>_> _Src;
  
  *(undefined8 *)&(this->Base).field0_0x0 = *(undefined8 *)&(param_1->Base).field0_0x0;
  (this->Base).field0_0x0._s_0.Z = (param_1->Base).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Normal).field0_0x0 = *(undefined8 *)&(param_1->Normal).field0_0x0;
  (this->Normal).field0_0x0._s_0.Z = (param_1->Normal).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TextureU).field0_0x0 = *(undefined8 *)&(param_1->TextureU).field0_0x0;
  (this->TextureU).field0_0x0._s_0.Z = (param_1->TextureU).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TextureV).field0_0x0 = *(undefined8 *)&(param_1->TextureV).field0_0x0;
  (this->TextureV).field0_0x0._s_0.Z = (param_1->TextureV).field0_0x0._s_0.Z;
  if (this != param_1) {
    piVar1 = &(this->Vertices).ArrayMax;
    _Src = (param_1->Vertices).AllocatorInstance.SecondaryData;
    iVar2 = (param_1->Vertices).ArrayNum;
    if (_Src == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      _Src = (ForElementType<UE::Math::TVector<float>_>)&param_1->Vertices;
    }
    (this->Vertices).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0x10;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                (0xc,4,iVar2,*piVar1,&(this->Vertices).AllocatorInstance,iVar2,piVar1);
      _Dst = (this->Vertices).AllocatorInstance.SecondaryData;
      if (iVar2 != 0) {
        if (_Dst == (ForElementType<UE::Math::TVector<float>_>)0x0) {
          _Dst = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0xc);
      }
    }
  }
  this->PolyFlags = param_1->PolyFlags;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar3 = (param_1->Actor).field0_0x0.DebugPtr, pAVar3 != (ABrush *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar3);
  }
  (this->Actor).field0_0x0 = (param_1->Actor).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->Material).field0_0x0.DebugPtr, pUVar4 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Material).field0_0x0 = (param_1->Material).field0_0x0;
  this->RulesetVariation = param_1->RulesetVariation;
  this->ItemName = param_1->ItemName;
  this->iLink = param_1->iLink;
  this->iLinkSurf = param_1->iLinkSurf;
  this->iBrushPoly = param_1->iBrushPoly;
  this->SmoothingMask = param_1->SmoothingMask;
  this->LightMapScale = param_1->LightMapScale;
  fVar5 = (param_1->LightmassSettings).EmissiveLightFalloffExponent;
  fVar6 = (param_1->LightmassSettings).EmissiveLightExplicitInfluenceRadius;
  fVar7 = (param_1->LightmassSettings).EmissiveBoost;
  *(undefined4 *)&(this->LightmassSettings).field_0x0 =
       *(undefined4 *)&(param_1->LightmassSettings).field_0x0;
  (this->LightmassSettings).EmissiveLightFalloffExponent = fVar5;
  (this->LightmassSettings).EmissiveLightExplicitInfluenceRadius = fVar6;
  (this->LightmassSettings).EmissiveBoost = fVar7;
  fVar5 = (param_1->LightmassSettings).FullyOccludedSamplesFraction;
  (this->LightmassSettings).DiffuseBoost = (param_1->LightmassSettings).DiffuseBoost;
  (this->LightmassSettings).FullyOccludedSamplesFraction = fVar5;
  return this;
}

// Area @ 1483589e0

float __thiscall FPoly::Area(FPoly *this)

{
  TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar1
  ;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<UE::Math::TVector<float>_> FVar9;
  ForElementType<UE::Math::TVector<float>_> FVar10;
  uint uVar11;
  ForElementType<UE::Math::TVector<float>_> FVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((this->Vertices).ArrayNum < 3) {
    return 0.0;
  }
  pTVar1 = &this->Vertices;
  FVar12 = (this->Vertices).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar12 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  fVar21 = 0.0;
  if (((this->Vertices).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    fVar21 = (float)(*pcVar5)();
    return fVar21;
  }
  fVar6 = __real_3f000000;
  FVar9 = (this->Vertices).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar9 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  uVar11 = 2;
  if (2 < (this->Vertices).ArrayNum) {
    lVar13 = 0x18;
    fVar14 = *(float *)((longlong)FVar12 + 0xc) - *(float *)FVar9;
    fVar20 = *(float *)((longlong)FVar12 + 0x10) - *(float *)((longlong)FVar9 + 4);
    fVar15 = *(float *)((longlong)FVar12 + 0x14) - *(float *)((longlong)FVar9 + 8);
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->Vertices).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        fVar21 = (float)(*pcVar5)();
        return fVar21;
      }
      FVar12 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
      if (FVar12 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar9 = FVar12;
      }
      if (((this->Vertices).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        fVar21 = (float)(*pcVar5)();
        return fVar21;
      }
      lVar3 = lVar13 + 4;
      lVar4 = lVar13 + 8;
      pfVar2 = (float *)(lVar13 + (longlong)FVar9);
      FVar12 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
      if (FVar12 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar10 = FVar12;
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0xc;
      fVar18 = *(float *)(lVar3 + (longlong)FVar9) - *(float *)((longlong)FVar10 + 4);
      fVar17 = *(float *)(lVar4 + (longlong)FVar9) - *(float *)((longlong)FVar10 + 8);
      fVar19 = *pfVar2 - *(float *)FVar10;
      fVar16 = fVar17 * fVar20 - fVar18 * fVar15;
      fVar15 = fVar19 * fVar15 - fVar17 * fVar14;
      fVar14 = fVar18 * fVar14 - fVar19 * fVar20;
      fVar21 = fVar21 + SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14) * fVar6;
      fVar14 = fVar19;
      fVar20 = fVar18;
      fVar15 = fVar17;
    } while ((int)uVar11 < (this->Vertices).ArrayNum);
  }
  return fVar21;
}

// BuildInfiniteFPoly @ 14835fce0

FPoly * __cdecl FPoly::BuildInfiniteFPoly(FPoly *__return_storage_ptr__,TPlane<double> *param_1)

{
  TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar1
  ;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  FPoly *pFVar10;
  ForElementType<UE::Math::TVector<float>_> FVar11;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90 [5];
  
  UE::Math::TVector<double>::FindBestAxisVectors
            ((TVector<double> *)param_1,(TVector<double> *)&local_90[0]._s_0,
             (TVector<double> *)&local_a8._s_0);
  FPoly(__return_storage_ptr__);
  Init(__return_storage_ptr__);
  dVar3 = (double)param_1->_padding_;
  (__return_storage_ptr__->Normal).field0_0x0._s_0.X = (float)dVar3;
  dVar4 = (double)param_1->_padding_;
  (__return_storage_ptr__->Normal).field0_0x0._s_0.Y = (float)dVar4;
  dVar5 = (double)param_1->_padding_;
  (__return_storage_ptr__->Normal).field0_0x0._s_0.Z = (float)dVar5;
  pTVar1 = &__return_storage_ptr__->Vertices;
  local_d0 = (float)param_1->W;
  fStack_d4 = local_d0 * (float)dVar4;
  local_d8 = local_d0 * (float)dVar3;
  local_d0 = local_d0 * (float)dVar5;
  (__return_storage_ptr__->Base).field0_0x0._s_0.X = local_d8;
  (__return_storage_ptr__->Base).field0_0x0._s_0.Y = fStack_d4;
  (__return_storage_ptr__->Base).field0_0x0._s_0.Z = local_d0;
  fVar7 = __real_49800000;
  FVar11 = (__return_storage_ptr__->Vertices).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  local_d8 = ((float)local_a8._s_0.X + (float)(double)local_90[0]._0_8_) * __real_49800000 +
             local_d8;
  fStack_d4 = ((float)local_a8._s_0.Y + (float)(double)local_90[0]._8_8_) * __real_49800000 +
              fStack_d4;
  local_d0 = ((float)local_a8._s_0.Z + (float)(double)local_90[0]._16_8_) * __real_49800000 +
             local_d0;
  if (((ulonglong)FVar11 <= &local_d8) &&
     (&local_d8 <
      (float *)((longlong)FVar11 + (longlong)(__return_storage_ptr__->Vertices).ArrayMax * 0xc))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPoly *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (__return_storage_ptr__->Vertices).ArrayNum;
  piVar2 = &(__return_storage_ptr__->Vertices).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                      (0x40c,&pTVar1->AllocatorInstance,piVar2);
  }
  (__return_storage_ptr__->Vertices).ArrayNum = iVar9 + 1;
  FVar11 = (__return_storage_ptr__->Vertices).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar11 + (longlong)iVar9 * 0xc) = CONCAT44(fStack_d4,local_d8);
  *(float *)((uchar *)((longlong)FVar11 + 8) + (longlong)iVar9 * 0xc) = local_d0;
  FVar11 = (__return_storage_ptr__->Vertices).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  local_cc = ((__return_storage_ptr__->Base).field0_0x0._s_0.X -
             (float)(double)local_90[0]._0_8_ * fVar7) + (float)local_a8._s_0.X * fVar7;
  fStack_c8 = ((__return_storage_ptr__->Base).field0_0x0._s_0.Y -
              (float)(double)local_90[0]._8_8_ * fVar7) + (float)local_a8._s_0.Y * fVar7;
  local_c4 = ((__return_storage_ptr__->Base).field0_0x0._s_0.Z -
             (float)(double)local_90[0]._16_8_ * fVar7) + (float)local_a8._s_0.Z * fVar7;
  if (((ulonglong)FVar11 <= &local_cc) &&
     (&local_cc < (float *)((longlong)FVar11 + (longlong)*piVar2 * 0xc))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPoly *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (__return_storage_ptr__->Vertices).ArrayNum;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                      (0x40c,&pTVar1->AllocatorInstance,piVar2);
  }
  (__return_storage_ptr__->Vertices).ArrayNum = iVar9 + 1;
  FVar11 = (__return_storage_ptr__->Vertices).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar11 + (longlong)iVar9 * 0xc) = CONCAT44(fStack_c8,local_cc);
  *(float *)((uchar *)((longlong)FVar11 + 8) + (longlong)iVar9 * 0xc) = local_c4;
  FVar11 = (__return_storage_ptr__->Vertices).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  local_c0 = ((__return_storage_ptr__->Base).field0_0x0._s_0.X -
             (float)(double)local_90[0]._0_8_ * fVar7) - (float)local_a8._s_0.X * fVar7;
  fStack_bc = ((__return_storage_ptr__->Base).field0_0x0._s_0.Y -
              (float)(double)local_90[0]._8_8_ * fVar7) - (float)local_a8._s_0.Y * fVar7;
  local_b8 = ((__return_storage_ptr__->Base).field0_0x0._s_0.Z -
             (float)(double)local_90[0]._16_8_ * fVar7) - (float)local_a8._s_0.Z * fVar7;
  if (((ulonglong)FVar11 <= &local_c0) &&
     (&local_c0 < (float *)((longlong)FVar11 + (longlong)*piVar2 * 0xc))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPoly *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (__return_storage_ptr__->Vertices).ArrayNum;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                      (0x40c,&pTVar1->AllocatorInstance,piVar2);
  }
  (__return_storage_ptr__->Vertices).ArrayNum = iVar9 + 1;
  FVar11 = (__return_storage_ptr__->Vertices).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar11 + (longlong)iVar9 * 0xc) = CONCAT44(fStack_bc,local_c0);
  *(float *)((uchar *)((longlong)FVar11 + 8) + (longlong)iVar9 * 0xc) = local_b8;
  FVar11 = (__return_storage_ptr__->Vertices).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  local_b4 = ((float)(double)local_90[0]._0_8_ * fVar7 +
             (__return_storage_ptr__->Base).field0_0x0._s_0.X) - (float)local_a8._s_0.X * fVar7;
  fStack_b0 = ((float)(double)local_90[0]._8_8_ * fVar7 +
              (__return_storage_ptr__->Base).field0_0x0._s_0.Y) - (float)local_a8._s_0.Y * fVar7;
  local_ac = ((float)(double)local_90[0]._16_8_ * fVar7 +
             (__return_storage_ptr__->Base).field0_0x0._s_0.Z) - (float)local_a8._s_0.Z * fVar7;
  if (((ulonglong)FVar11 <= &local_b4) &&
     (&local_b4 < (float *)((longlong)FVar11 + (longlong)*piVar2 * 0xc))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPoly *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (__return_storage_ptr__->Vertices).ArrayNum;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                      (0x40c,&pTVar1->AllocatorInstance,piVar2);
  }
  (__return_storage_ptr__->Vertices).ArrayNum = iVar9 + 1;
  FVar11 = (__return_storage_ptr__->Vertices).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar11 + (longlong)iVar9 * 0xc) = CONCAT44(fStack_b0,local_b4);
  *(float *)((uchar *)((longlong)FVar11 + 8) + (longlong)iVar9 * 0xc) = local_ac;
  return __return_storage_ptr__;
}

// CalcNormal @ 148362080

int __thiscall FPoly::CalcNormal(FPoly *this,bool param_1)

{
  TVector<float> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ForElementType<UE::Math::TVector<float>_> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<UE::Math::TVector<float>_> FVar10;
  ForElementType<UE::Math::TVector<float>_> FVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pTVar1 = &this->Normal;
  uVar12 = 2;
  *(undefined8 *)&pTVar1->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (2 < (this->Vertices).ArrayNum) {
    lVar13 = 0x18;
    do {
      uVar8 = 0;
      if ((int)(uVar12 - 1) < (this->Vertices).ArrayNum) {
        uVar8 = -uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      FVar5 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar5 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar11 = FVar5;
      }
      if (((this->Vertices).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      FVar5 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar5 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar10 = FVar5;
      }
      fVar18 = *(float *)(lVar13 + -0xc + (longlong)FVar11) - *(float *)FVar10;
      fVar19 = *(float *)(lVar13 + -8 + (longlong)FVar11) - *(float *)((longlong)FVar10 + 4);
      fVar20 = *(float *)(lVar13 + -4 + (longlong)FVar11) - *(float *)((longlong)FVar10 + 8);
      uVar8 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      FVar5 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar5 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar11 = FVar5;
      }
      if (((this->Vertices).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      pfVar3 = (float *)((longlong)FVar11 + 4 + lVar13);
      pfVar4 = (float *)((longlong)FVar11 + 8 + lVar13);
      pfVar2 = (float *)((longlong)FVar11 + lVar13);
      FVar5 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar5 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar11 = FVar5;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0xc;
      fVar17 = *pfVar3 - *(float *)((longlong)FVar11 + 4);
      fVar14 = *pfVar4 - *(float *)((longlong)FVar11 + 8);
      fVar16 = *pfVar2 - *(float *)FVar11;
      (pTVar1->field0_0x0)._s_0.X =
           (fVar14 * fVar19 - fVar17 * fVar20) + (pTVar1->field0_0x0)._s_0.X;
      fVar15 = (this->Normal).field0_0x0._s_0.Z;
      (this->Normal).field0_0x0._s_0.Y =
           (fVar16 * fVar20 - fVar14 * fVar18) + (this->Normal).field0_0x0._s_0.Y;
      (this->Normal).field0_0x0._s_0.Z = (fVar17 * fVar18 - fVar16 * fVar19) + fVar15;
    } while ((int)uVar12 < (this->Vertices).ArrayNum);
  }
  fVar18 = (pTVar1->field0_0x0)._s_0.X;
  fVar19 = (this->Normal).field0_0x0._s_0.Y;
  fVar20 = (this->Normal).field0_0x0._s_0.Z;
  fVar15 = fVar19 * fVar19 + fVar18 * fVar18 + fVar20 * fVar20;
  if (__real_38d1b717 <= fVar15) {
    fVar15 = __real_3f800000 / SQRT(fVar15);
    (this->Normal).field0_0x0._s_0.X = fVar15 * fVar18;
    (this->Normal).field0_0x0._s_0.Y = fVar15 * fVar19;
    (this->Normal).field0_0x0._s_0.Z = fVar15 * fVar20;
    return 0;
  }
  return 1;
}

// DoesLineIntersect @ 14836d220

bool __thiscall
FPoly::DoesLineIntersect
          (FPoly *this,TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar1
  ;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  ForElementType<UE::Math::TVector<float>_> FVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  TVector<double>_u_0 local_b8 [2];
  double local_88;
  
  pTVar1 = &this->Vertices;
  fVar20 = (this->Normal).field0_0x0._s_0.X;
  fVar17 = (this->Normal).field0_0x0._s_0.Y;
  fVar2 = (this->Normal).field0_0x0._s_0.Z;
  if (((this->Vertices).ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar15 = (*pcVar11)();
    return (bool)uVar15;
  }
  FVar16 = (this->Vertices).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar16 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  fVar3 = (this->Normal).field0_0x0._s_0.X;
  fVar4 = (this->Normal).field0_0x0._s_0.Y;
  fVar5 = (this->Normal).field0_0x0._s_0.Z;
  fVar20 = (float)(((param_1->field0_0x0)._s_0.Y - (double)*(float *)((longlong)FVar16 + 4)) *
                   (double)fVar17 +
                   ((param_1->field0_0x0)._s_0.X - (double)*(float *)FVar16) * (double)fVar20 +
                  ((param_1->field0_0x0)._s_0.Z - (double)*(float *)((longlong)FVar16 + 8)) *
                  (double)fVar2);
  if (((this->Vertices).ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar15 = (*pcVar11)();
    return (bool)uVar15;
  }
  FVar16 = (this->Vertices).AllocatorInstance.SecondaryData;
  dVar18 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_2->field0_0x0)._s_0.Z;
  if (FVar16 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar16 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  fVar17 = (float)((dVar18 - (double)*(float *)((longlong)FVar16 + 4)) * (double)fVar4 +
                   (dVar6 - (double)*(float *)FVar16) * (double)fVar3 +
                  (dVar7 - (double)*(float *)((longlong)FVar16 + 8)) * (double)fVar5);
  if (0.0 <= fVar20) {
    if ((0.0 < fVar20) && (0.0 < fVar17)) {
      return false;
    }
  }
  else if (fVar17 < 0.0) {
    return false;
  }
  dVar19 = (double)(this->Normal).field0_0x0._s_0.X;
  dVar12 = (double)(this->Normal).field0_0x0._s_0.Y;
  dVar13 = (double)(this->Normal).field0_0x0._s_0.Z;
  if (((this->Vertices).ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar15 = (*pcVar11)();
    return (bool)uVar15;
  }
  dVar8 = (param_1->field0_0x0)._s_0.X;
  dVar9 = (param_1->field0_0x0)._s_0.Y;
  dVar6 = dVar6 - dVar8;
  dVar10 = (param_1->field0_0x0)._s_0.Z;
  dVar18 = dVar18 - dVar9;
  FVar16 = (this->Vertices).AllocatorInstance.SecondaryData;
  dVar7 = dVar7 - dVar10;
  if (FVar16 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar16 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  dVar19 = (((double)*(float *)((longlong)FVar16 + 4) - dVar9) * dVar12 +
            ((double)*(float *)FVar16 - dVar8) * dVar19 +
           ((double)*(float *)((longlong)FVar16 + 8) - dVar10) * dVar13) /
           (dVar19 * dVar6 + dVar12 * dVar18 + dVar13 * dVar7);
  local_b8[0]._16_8_ = dVar19 * dVar7 + dVar10;
  dVar6 = dVar19 * dVar6 + dVar8;
  dVar18 = dVar19 * dVar18 + dVar9;
  if (param_3 != (TVector<double> *)0x0) {
    (param_3->field0_0x0)._s_0.X = dVar6;
    (param_3->field0_0x0)._s_0.Y = dVar18;
    (param_3->field0_0x0)._s_0.Z = (double)local_b8[0]._16_8_;
  }
  if ((((dVar6 != dVar8) || (dVar18 != dVar9)) || ((double)local_b8[0]._16_8_ != dVar10)) &&
     (((dVar6 != (param_2->field0_0x0)._s_0.X || (dVar18 != (param_2->field0_0x0)._s_0.Y)) ||
      ((double)local_b8[0]._16_8_ != (param_2->field0_0x0)._s_0.Z)))) {
    local_b8[0]._8_4_ = SUB84(dVar18,0);
    local_b8[0]._0_8_ = dVar6;
    local_b8[0]._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    local_88 = (double)local_b8[0]._16_8_;
    bVar14 = OnPoly(this,(TVector<double> *)&local_b8[0]._s_0);
    return bVar14;
  }
  return false;
}

// Faces @ 14837a470

int __thiscall FPoly::Faces(FPoly *this,FPoly *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ForElementType<UE::Math::TVector<float>_> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<UE::Math::TVector<float>_> FVar9;
  uint uVar10;
  longlong lVar11;
  
  fVar1 = (this->Normal).field0_0x0._s_0.X;
  fVar2 = (this->Normal).field0_0x0._s_0.Y;
  fVar3 = (this->Normal).field0_0x0._s_0.Z;
  if (((__real_3c23d70a <=
        (float)((uint)(((this->Base).field0_0x0._s_0.Y - (param_1->Base).field0_0x0._s_0.Y) * fVar2
                       + ((this->Base).field0_0x0._s_0.X - (param_1->Base).field0_0x0._s_0.X) *
                         fVar1 +
                      ((this->Base).field0_0x0._s_0.Z - (param_1->Base).field0_0x0._s_0.Z) * fVar3)
               & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      ((float)((uint)(fVar2 * (param_1->Normal).field0_0x0._s_0.Y +
                      fVar1 * (param_1->Normal).field0_0x0._s_0.X +
                     fVar3 * (param_1->Normal).field0_0x0._s_0.Z) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3f7ff972)) &&
     (uVar10 = 0, 0 < (param_1->Vertices).ArrayNum)) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (param_1->Vertices).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      FVar4 = (param_1->Vertices).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::Math::TVector<float>_>)&param_1->Vertices;
      if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar9 = FVar4;
      }
      if (0.0 <= (*(float *)(lVar11 + 4 + (longlong)FVar9) - (this->Base).field0_0x0._s_0.Y) *
                 (this->Normal).field0_0x0._s_0.Y +
                 (*(float *)(lVar11 + (longlong)FVar9) - (this->Base).field0_0x0._s_0.X) *
                 (this->Normal).field0_0x0._s_0.X +
                 (*(float *)(lVar11 + 8 + (longlong)FVar9) - (this->Base).field0_0x0._s_0.Z) *
                 (this->Normal).field0_0x0._s_0.Z) {
        uVar10 = 0;
        if ((this->Vertices).ArrayNum < 1) {
          return 0;
        }
        lVar11 = 0;
        while( true ) {
          uVar7 = 0;
          if ((int)uVar10 < (this->Vertices).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) break;
          FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
          if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
            FVar9 = FVar4;
          }
          if ((*(float *)(lVar11 + 4 + (longlong)FVar9) - (param_1->Base).field0_0x0._s_0.Y) *
              (param_1->Normal).field0_0x0._s_0.Y +
              (*(float *)(lVar11 + (longlong)FVar9) - (param_1->Base).field0_0x0._s_0.X) *
              (param_1->Normal).field0_0x0._s_0.X +
              (*(float *)(lVar11 + 8 + (longlong)FVar9) - (param_1->Base).field0_0x0._s_0.Z) *
              (param_1->Normal).field0_0x0._s_0.Z < 0.0) {
            return 1;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0xc;
          if ((this->Vertices).ArrayNum <= (int)uVar10) {
            return 0;
          }
        }
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0xc;
    } while ((int)uVar10 < (param_1->Vertices).ArrayNum);
  }
  return 0;
}

// Fix @ 14837c370

int __thiscall FPoly::Fix(FPoly *this)

{
  TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ForElementType<UE::Math::TVector<float>_> FVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ForElementType<UE::Math::TVector<float>_> FVar11;
  ForElementType<UE::Math::TVector<float>_> FVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  longlong local_res10;
  
  fVar7 = __real_b7a7c5ac;
  fVar6 = __real_37a7c5ac;
  iVar10 = (this->Vertices).ArrayNum;
  this_00 = &this->Vertices;
  uVar13 = 0;
  piVar1 = &(this->Vertices).ArrayNum;
  uVar14 = 0;
  uVar15 = iVar10 - 1;
  if (0 < iVar10) {
    lVar17 = 0;
    local_res10 = 0;
    lVar16 = (longlong)(int)uVar15 * 0xc;
    do {
      uVar9 = 0;
      if ((int)uVar15 < *piVar1) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<UE::Math::TVector<float>_>)this_00;
      if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar12 = FVar4;
      }
      uVar9 = 0;
      if ((int)uVar14 < *piVar1) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<UE::Math::TVector<float>_>)this_00;
      if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar11 = FVar4;
      }
      fVar18 = *(float *)(lVar17 + (longlong)FVar11) - *(float *)(lVar16 + (longlong)FVar12);
      if (((((fVar18 <= fVar7) || (fVar6 <= fVar18)) ||
           (fVar18 = *(float *)(lVar17 + 4 + (longlong)FVar11) -
                     *(float *)(lVar16 + 4 + (longlong)FVar12), fVar18 <= fVar7)) ||
          ((fVar6 <= fVar18 ||
           (fVar18 = *(float *)(lVar17 + 8 + (longlong)FVar11) -
                     *(float *)(lVar16 + 8 + (longlong)FVar12), fVar18 <= fVar7)))) ||
         (fVar6 <= fVar18)) {
        if (uVar13 != uVar14) {
          uVar15 = 0;
          if ((int)uVar14 < *piVar1) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            iVar10 = (*pcVar5)();
            return iVar10;
          }
          FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<UE::Math::TVector<float>_>)this_00;
          if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
            FVar12 = FVar4;
          }
          uVar2 = *(undefined8 *)(lVar17 + (longlong)FVar12);
          uVar3 = *(undefined4 *)(lVar17 + 8 + (longlong)FVar12);
          uVar15 = 0;
          if ((int)uVar13 < *piVar1) {
            uVar15 = ~uVar13 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            iVar10 = (*pcVar5)();
            return iVar10;
          }
          FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<UE::Math::TVector<float>_>)this_00;
          if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
            FVar12 = FVar4;
          }
          *(undefined8 *)(local_res10 + (longlong)FVar12) = uVar2;
          *(undefined4 *)(local_res10 + 8 + (longlong)FVar12) = uVar3;
        }
        lVar16 = local_res10;
        local_res10 = local_res10 + 0xc;
        uVar15 = uVar13;
        uVar13 = uVar13 + 1;
      }
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 0xc;
    } while ((int)uVar14 < (this->Vertices).ArrayNum);
    piVar1 = &(this->Vertices).ArrayNum;
    if (2 < (int)uVar13) {
      iVar10 = *piVar1;
      if ((int)uVar13 < iVar10) {
        uVar15 = iVar10 - uVar13;
        if (((int)(uVar15 | uVar13) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          iVar10 = (*pcVar5)();
          return iVar10;
        }
        if (uVar15 != 0) {
          TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          ::RemoveAtImpl(this_00,uVar13,uVar15);
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                    (0xc,4,&this_00->AllocatorInstance,*piVar1,&(this->Vertices).ArrayMax);
        }
      }
      goto LAB_14837c728;
    }
  }
  piVar1 = &(this->Vertices).ArrayMax;
  (this->Vertices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
              (0xc,4,0,&this_00->AllocatorInstance,0,piVar1);
  }
LAB_14837c728:
  return (this->Vertices).ArrayNum;
}

// GetMidPoint @ 148384160

TVector<double> * __thiscall FPoly::GetMidPoint(FPoly *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  ForElementType<UE::Math::TVector<float>_> FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TVector<double> *pTVar13;
  ForElementType<UE::Math::TVector<float>_> FVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  
  iVar12 = (this->Vertices).ArrayNum;
  uVar15 = 0;
  dVar6 = 0.0;
  dVar17 = 0.0;
  dVar5 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  dVar9 = 0.0;
  if (0 < iVar12) {
    lVar16 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar15 < (this->Vertices).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TVector<double> *)(*pcVar4)();
        return pTVar13;
      }
      FVar3 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar3 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar14 = FVar3;
      }
      iVar12 = (this->Vertices).ArrayNum;
      uVar15 = uVar15 + 1;
      lVar1 = lVar16 + 4;
      dVar17 = dVar17 + (double)*(float *)(lVar16 + (longlong)FVar14);
      lVar2 = lVar16 + 8;
      lVar16 = lVar16 + 0xc;
      dVar5 = dVar5 + (double)*(float *)(lVar1 + (longlong)FVar14);
      dVar6 = dVar6 + (double)*(float *)(lVar2 + (longlong)FVar14);
      dVar7 = dVar17;
      dVar8 = dVar5;
      dVar9 = dVar6;
    } while ((int)uVar15 < iVar12);
  }
  dVar17 = __real_3ff0000000000000 / (double)iVar12;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar17 * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar17 * dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar17 * dVar9;
  return __return_storage_ptr__;
}

// GetVertexIndex @ 14838b070

int __thiscall FPoly::GetVertexIndex(FPoly *this,TVector<float> *param_1)

{
  ForElementType<UE::Math::TVector<float>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<UE::Math::TVector<float>_> FVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if ((this->Vertices).ArrayNum < 1) {
    return -1;
  }
  lVar8 = 0;
  while( true ) {
    uVar4 = 0;
    if ((int)uVar7 < (this->Vertices).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    FVar1 = (this->Vertices).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
    if (FVar1 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar6 = FVar1;
    }
    if ((((param_1->field0_0x0)._s_0.X == *(float *)(lVar8 + (longlong)FVar6)) &&
        ((param_1->field0_0x0)._s_0.Y == *(float *)(lVar8 + 4 + (longlong)FVar6))) &&
       ((param_1->field0_0x0)._s_0.Z == *(float *)(lVar8 + 8 + (longlong)FVar6))) break;
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0xc;
    if ((this->Vertices).ArrayNum <= (int)uVar7) {
      return -1;
    }
  }
  return uVar7;
}

// Init @ 14838c510

void __thiscall FPoly::Init(FPoly *this)

{
  int *piVar1;
  
  *(undefined8 *)&(this->Base).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Base).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Normal).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TextureU).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->TextureU).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TextureV).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->TextureV).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  piVar1 = &(this->Vertices).ArrayMax;
  (this->Vertices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
              (0xc,4,0,&(this->Vertices).AllocatorInstance,0,piVar1);
  }
  (this->Actor).field0_0x0.DebugPtr = (ABrush *)0x0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->RulesetVariation).ComparisonIndex = 0;
  (this->RulesetVariation).Number = 0;
  (this->ItemName).ComparisonIndex = 0;
  (this->ItemName).Number = 0;
  this->PolyFlags = 0;
  this->iLink = -1;
  this->iLinkSurf = -1;
  this->iBrushPoly = -1;
  this->SmoothingMask = 0;
  this->LightMapScale = 32.0;
  *(undefined4 *)&this->LightmassSettings = 0;
  (this->LightmassSettings).EmissiveLightFalloffExponent = 8.0;
  (this->LightmassSettings).EmissiveLightExplicitInfluenceRadius = 0.0;
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).FullyOccludedSamplesFraction = 1.0;
  return;
}

// InsertVertex @ 1483912d0

void __thiscall FPoly::InsertVertex(FPoly *this,int param_1,TVector<double> *param_2)

{
  TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar1
  ;
  int *piVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::Math::TVector<float>_> FVar6;
  longlong lVar7;
  float local_18;
  float fStack_14;
  float local_10;
  
  lVar7 = (longlong)param_1;
  pTVar1 = &this->Vertices;
  if ((this->Vertices).ArrayNum < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos <= Vertices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Polygon.cpp"
                       ,0x28d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar6 = (this->Vertices).AllocatorInstance.SecondaryData;
  local_18 = (float)(param_2->field0_0x0)._s_0.X;
  if (FVar6 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar6 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  fStack_14 = (float)(param_2->field0_0x0)._s_0.Y;
  local_10 = (float)(param_2->field0_0x0)._s_0.Z;
  if (((ulonglong)FVar6 <= &local_18) &&
     (&local_18 < (float *)((longlong)FVar6 + (longlong)(this->Vertices).ArrayMax * 0xc))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Vertices).ArrayNum;
  piVar2 = &(this->Vertices).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                      (0x40c,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Vertices).ArrayNum = iVar5 + 1;
  FVar6 = (this->Vertices).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar6 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  _Src = (void *)((longlong)FVar6 + lVar7 * 0xc);
  memmove((void *)((longlong)_Src + 0xc),_Src,(longlong)(iVar5 - param_1) * 0xc);
  FVar6 = (this->Vertices).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar6 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar6 + lVar7 * 0xc) = CONCAT44(fStack_14,local_18);
  *(float *)((uchar *)((longlong)FVar6 + 8) + lVar7 * 0xc) = local_10;
  return;
}

// IsConvex @ 148392250

bool __thiscall FPoly::IsConvex(FPoly *this)

{
  TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar1
  ;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined1 uVar10;
  ForElementType<UE::Math::TVector<float>_> FVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_108;
  float fStack_104;
  float local_e0;
  float fStack_dc;
  
  iVar5 = (this->Vertices).ArrayNum;
  if (2 < iVar5) {
    uVar15 = iVar5 - 2;
    uVar16 = 0;
    if ((int)uVar15 < iVar5) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    FVar11 = (this->Vertices).AllocatorInstance.SecondaryData;
    pTVar1 = &this->Vertices;
    uVar16 = iVar5 - 1;
    if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
    }
    uVar3 = *(undefined8 *)((longlong)FVar11 + (longlong)(int)uVar15 * 0xc);
    fVar25 = *(float *)((longlong)FVar11 + 8 + (longlong)(int)uVar15 * 0xc);
    uVar15 = 0;
    if ((int)uVar16 < (this->Vertices).ArrayNum) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    fVar8 = __real_38d1b717;
    fVar7 = __real_322bcc77;
    FVar11 = (this->Vertices).AllocatorInstance.SecondaryData;
    fVar27 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fVar28 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
    }
    uVar4 = *(undefined8 *)((longlong)FVar11 + (longlong)(int)uVar16 * 0xc);
    local_108 = (float)uVar4;
    fVar29 = *(float *)((uchar *)((longlong)FVar11 + 8) + (longlong)(int)uVar16 * 0xc);
    local_e0 = (float)uVar3;
    local_e0 = local_108 - local_e0;
    fVar25 = fVar29 - fVar25;
    fStack_104 = (float)((ulonglong)uVar4 >> 0x20);
    fStack_dc = (float)((ulonglong)uVar3 >> 0x20);
    fStack_dc = fStack_104 - fStack_dc;
    fVar19 = fStack_dc * fStack_dc + local_e0 * local_e0 + fVar25 * fVar25;
    fVar21 = fStack_dc;
    fVar23 = local_e0;
    uVar22 = fVar25;
    if ((fVar19 != __real_3f800000) &&
       (fVar21 = fVar28, fVar23 = fVar27,
       uVar22 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar19))
    {
      fVar19 = __real_3f800000 / SQRT(fVar19);
      fVar21 = fVar19 * fStack_dc;
      fVar23 = fVar19 * local_e0;
      uVar22 = fVar19 * fVar25;
    }
    uVar16 = 0;
    if (0 < iVar5) {
      lVar14 = 0;
      lVar13 = 0;
      uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      while( true ) {
        fVar25 = (this->Normal).field0_0x0._s_0.Y;
        fVar19 = (this->Normal).field0_0x0._s_0.Z;
        fVar18 = (this->Normal).field0_0x0._s_0.X;
        fVar26 = fVar19 * fVar21;
        fVar17 = fVar25 * (float)uVar22;
        fVar24 = fVar18 * (float)uVar22;
        fVar19 = fVar19 * fVar23;
        uVar15 = 0;
        if ((int)uVar16 < (this->Vertices).ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        fVar25 = fVar25 * fVar23;
        fVar18 = fVar18 * fVar21;
        if (uVar15 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          fVar27 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          fVar28 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
          ;
          uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
        FVar11 = (this->Vertices).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
          FVar11 = (ForElementType<UE::Math::TVector<float>_>)pTVar1;
        }
        local_108 = (float)*(undefined8 *)((longlong)FVar11 + lVar13) - local_108;
        fStack_104 = (float)((ulonglong)*(undefined8 *)((longlong)FVar11 + lVar13) >> 0x20) -
                     fStack_104;
        fVar29 = *(float *)((uchar *)((longlong)FVar11 + 8) + lVar13) - fVar29;
        fVar20 = fStack_104 * fStack_104 + local_108 * local_108 + fVar29 * fVar29;
        fVar21 = fStack_104;
        fVar23 = local_108;
        uVar22 = fVar29;
        if ((fVar20 != __real_3f800000) &&
           (fVar21 = fVar28, fVar23 = fVar27, uVar22 = uVar12, fVar7 <= fVar20)) {
          fVar20 = __real_3f800000 / SQRT(fVar20);
          fVar21 = fVar20 * fStack_104;
          fVar23 = fVar20 * local_108;
          uVar22 = fVar20 * fVar29;
        }
        if (fVar8 < (fVar24 - fVar19) * fVar21 + (fVar26 - fVar17) * fVar23 +
                    (fVar25 - fVar18) * (float)uVar22) {
          return false;
        }
        puVar2 = (undefined8 *)((longlong)FVar11 + lVar13);
        uVar16 = uVar16 + 1;
        fVar29 = *(float *)((uchar *)((longlong)FVar11 + 8) + lVar13);
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0xc;
        if (iVar5 <= lVar14) break;
        fStack_104 = (float)((ulonglong)*puVar2 >> 0x20);
        local_108 = (float)*puVar2;
      }
    }
  }
  return true;
}

// IsCoplanar @ 148392740

bool __thiscall FPoly::IsCoplanar(FPoly *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ForElementType<UE::Math::TVector<float>_> FVar7;
  code *pcVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  ForElementType<UE::Math::TVector<float>_> FVar16;
  uint uVar17;
  longlong lVar18;
  
  if (3 < (this->Vertices).ArrayNum) {
    CalcNormal(this,true);
    dVar12 = __real_3fb99999a0000000;
    uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar17 = 1;
    if (1 < (this->Vertices).ArrayNum) {
      lVar18 = 0xc;
      do {
        uVar15 = 0;
        if ((int)uVar17 < (this->Vertices).ArrayNum) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        FVar7 = (this->Vertices).AllocatorInstance.SecondaryData;
        fVar1 = (this->Normal).field0_0x0._s_0.X;
        fVar2 = (this->Normal).field0_0x0._s_0.Y;
        fVar3 = (this->Normal).field0_0x0._s_0.Z;
        FVar16 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
        if (FVar7 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
          FVar16 = FVar7;
        }
        fVar4 = *(float *)(lVar18 + (longlong)FVar16);
        fVar5 = *(float *)(lVar18 + 4 + (longlong)FVar16);
        fVar6 = *(float *)(lVar18 + 8 + (longlong)FVar16);
        if (((this->Vertices).ArrayNum < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        FVar7 = (this->Vertices).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
        if (FVar7 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
          FVar16 = FVar7;
        }
        dVar9 = ((double)fVar5 - (double)*(float *)((longlong)FVar16 + 4)) * (double)fVar2 +
                ((double)fVar4 - (double)*(float *)FVar16) * (double)fVar1 +
                ((double)fVar6 - (double)*(float *)((longlong)FVar16 + 8)) * (double)fVar3;
        if (dVar12 <= (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar11,
                                       SUB84(dVar9,0) & uVar10)) {
          return false;
        }
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 0xc;
      } while ((int)uVar17 < (this->Vertices).ArrayNum);
    }
  }
  return true;
}

// OnPlane @ 148395df0

bool __thiscall FPoly::OnPlane(FPoly *this,TVector<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ForElementType<UE::Math::TVector<float>_> FVar7;
  double dVar8;
  
  fVar1 = (this->Normal).field0_0x0._s_0.X;
  fVar2 = (this->Normal).field0_0x0._s_0.Y;
  fVar3 = (this->Normal).field0_0x0._s_0.Z;
  if ((this->Vertices).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  FVar7 = (this->Vertices).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FVar7 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
  }
  dVar8 = ((param_1->field0_0x0)._s_0.Y - (double)*(float *)((longlong)FVar7 + 4)) * (double)fVar2 +
          ((param_1->field0_0x0)._s_0.X - (double)*(float *)FVar7) * (double)fVar1 +
          ((param_1->field0_0x0)._s_0.Z - (double)*(float *)((longlong)FVar7 + 8)) * (double)fVar3;
  return (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
         __real_3fb99999a0000000;
}

// OnPoly @ 148395f00

bool __thiscall FPoly::OnPoly(FPoly *this,TVector<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ForElementType<UE::Math::TVector<float>_> FVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<UE::Math::TVector<float>_> FVar16;
  ForElementType<UE::Math::TVector<float>_> FVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  dVar11 = __real_3fb99999a0000000;
  dVar10 = __real_3e45798ee0000000;
  dVar9 = __real_3ff0000000000000;
  uVar19 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar20 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar19 < (this->Vertices).ArrayNum) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
      uVar18 = uVar19 - 1;
      FVar16 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar16 = FVar4;
      }
      if ((int)uVar18 < 0) {
        uVar18 = (this->Vertices).ArrayNum - 1;
      }
      uVar14 = 0;
      if ((int)uVar18 < (this->Vertices).ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
      fVar1 = (this->Normal).field0_0x0._s_0.Y;
      fVar2 = (this->Normal).field0_0x0._s_0.Z;
      fVar3 = (this->Normal).field0_0x0._s_0.X;
      FVar17 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar17 = FVar4;
      }
      lVar15 = (longlong)(int)uVar18;
      fVar24 = *(float *)(lVar20 + (longlong)FVar16) - *(float *)((longlong)FVar17 + lVar15 * 0xc);
      fVar23 = *(float *)(lVar20 + 4 + (longlong)FVar16) -
               *(float *)((longlong)FVar17 + 4 + lVar15 * 0xc);
      fVar22 = *(float *)(lVar20 + 8 + (longlong)FVar16) -
               *(float *)((longlong)FVar17 + 8 + lVar15 * 0xc);
      dVar7 = (double)(fVar2 * fVar23 - fVar1 * fVar22);
      dVar8 = (double)(fVar3 * fVar22 - fVar2 * fVar24);
      dVar6 = (double)(fVar1 * fVar24 - fVar3 * fVar23);
      dVar21 = dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6;
      if (dVar10 < dVar21) {
        dVar21 = dVar9 / SQRT(dVar21);
        dVar7 = dVar7 * dVar21;
        dVar8 = dVar8 * dVar21;
        dVar6 = dVar6 * dVar21;
      }
      uVar18 = 0;
      if ((int)uVar19 < (this->Vertices).ArrayNum) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar16 = FVar4;
      }
      if (dVar11 < ((param_1->field0_0x0)._s_0.Y - (double)*(float *)(lVar20 + 4 + (longlong)FVar16)
                   ) * dVar8 +
                   ((param_1->field0_0x0)._s_0.X - (double)*(float *)(lVar20 + (longlong)FVar16)) *
                   dVar7 + ((param_1->field0_0x0)._s_0.Z -
                           (double)*(float *)(lVar20 + 8 + (longlong)FVar16)) * dVar6) {
        return false;
      }
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 0xc;
    } while ((int)uVar19 < (this->Vertices).ArrayNum);
  }
  return true;
}

// RemoveColinears @ 14839f350

int __thiscall FPoly::RemoveColinears(FPoly *this)

{
  int *piVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  FTlsAutoCleanup *pFVar13;
  ulong64 uVar14;
  float *pfVar15;
  longlong lVar16;
  ForElementType<UE::Math::TVector<float>_> FVar17;
  ForElementType<UE::Math::TVector<float>_> FVar18;
  ForElementType<UE::Math::TVector<float>_> FVar19;
  longlong lVar20;
  float *_Dst;
  uint uVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  uint local_res20;
  code *local_b0;
  undefined1 *local_a8;
  FMemMark local_a0 [2];
  
  puVar12 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_a8 = local_res8;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar13 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b0,puVar12);
  local_a0[0].Mem = (FMemStackBase *)(pFVar13 + 2);
  local_a0[0].Top = (local_a0[0].Mem)->Top;
  local_a0[0].SavedChunk = *(FTaggedMemory **)(pFVar13 + 4);
  local_a0[0].bPopped = false;
  local_a0[0].NextTopmostMark = *(FMemMark **)(pFVar13 + 5);
  pFVar13[5] = (FTlsAutoCleanup)local_a0;
  *(int *)(pFVar13 + 6) = *(int *)(pFVar13 + 6) + 1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)(this->Vertices).ArrayNum;
  uVar14 = SUB168(ZEXT816(0xc) * auVar6,0);
  if (SUB168(ZEXT816(0xc) * auVar6,8) != 0) {
    uVar14 = 0xffffffffffffffff;
  }
  pfVar15 = FMemStackBase::Alloc(local_a0[0].Mem,uVar14,0x10);
  fVar7 = __real_322bcc77;
  iVar10 = (this->Vertices).ArrayNum;
  uVar21 = 0;
  if (iVar10 < 1) {
    iVar22 = 1;
  }
  else {
    lVar20 = 0;
    iVar22 = 1;
    do {
      local_res10 = (int)((uVar21 - 1) + iVar10) % iVar10;
      local_res20 = ~uVar21;
      local_res18 = local_res20 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar21 < iVar10) {
        uVar9 = local_res18;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      FVar19 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar19 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar18 = FVar19;
      }
      uVar9 = 0;
      if ((int)local_res10 < (this->Vertices).ArrayNum) {
        uVar9 = ~local_res10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      FVar19 = (this->Vertices).AllocatorInstance.SecondaryData;
      fVar3 = (this->Normal).field0_0x0._s_0.Y;
      fVar4 = (this->Normal).field0_0x0._s_0.Z;
      FVar17 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar19 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar17 = FVar19;
      }
      fVar24 = (this->Normal).field0_0x0._s_0.X;
      lVar16 = (longlong)(int)local_res10;
      fVar27 = *(float *)((longlong)FVar18 + lVar20) - *(float *)((longlong)FVar17 + lVar16 * 0xc);
      fVar25 = *(float *)((longlong)FVar18 + 8 + lVar20) -
               *(float *)((longlong)FVar17 + 8 + lVar16 * 0xc);
      fVar26 = *(float *)((longlong)FVar18 + 4 + lVar20) -
               *(float *)((longlong)FVar17 + 4 + lVar16 * 0xc);
      *(float *)(lVar20 + (longlong)pfVar15) = fVar26 * fVar4 - fVar25 * fVar3;
      fVar26 = fVar27 * fVar3 - fVar26 * fVar24;
      *(float *)((longlong)pfVar15 + lVar20 + 4) = fVar25 * fVar24 - fVar27 * fVar4;
      *(float *)((longlong)pfVar15 + lVar20 + 8) = fVar26;
      fVar3 = *(float *)(lVar20 + (longlong)pfVar15);
      fVar4 = *(float *)((longlong)pfVar15 + lVar20 + 4);
      fVar24 = fVar4 * fVar4 + fVar3 * fVar3 + fVar26 * fVar26;
      if (fVar24 <= fVar7) {
        uVar9 = 0;
        if (iVar22 <= (this->Vertices).ArrayNum) {
          uVar9 = local_res18;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          iVar10 = (*pcVar5)();
          return iVar10;
        }
        FVar19 = (this->Vertices).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
        if (FVar19 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
          FVar18 = FVar19;
        }
        pvVar2 = (void *)((longlong)FVar18 + (longlong)(int)uVar21 * 0xc);
        iVar10 = local_res20 + (this->Vertices).ArrayNum;
        if (iVar10 != 0) {
          memmove(pvVar2,(void *)((longlong)pvVar2 + 0xc),(longlong)iVar10 * 0xc);
        }
        piVar1 = &(this->Vertices).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                  (0xc,4,&(this->Vertices).AllocatorInstance,(this->Vertices).ArrayNum,
                   &(this->Vertices).ArrayMax);
        if ((this->Vertices).ArrayNum < 3) {
          piVar1 = &(this->Vertices).ArrayMax;
          (this->Vertices).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                      (0xc,4,0,&(this->Vertices).AllocatorInstance,0,piVar1);
          }
          goto LAB_14839f986;
        }
        uVar21 = uVar21 - 1;
        iVar22 = iVar22 + -1;
        lVar20 = lVar20 + -0xc;
      }
      else {
        fVar24 = __real_3f800000 / SQRT(fVar24);
        *(float *)(lVar20 + (longlong)pfVar15) = fVar3 * fVar24;
        *(float *)((longlong)pfVar15 + lVar20 + 4) = fVar4 * fVar24;
        *(float *)((longlong)pfVar15 + lVar20 + 8) = fVar24 * fVar26;
      }
      uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar3 = __real_38d1b717;
      iVar10 = (this->Vertices).ArrayNum;
      uVar21 = uVar21 + 1;
      iVar22 = iVar22 + 1;
      lVar20 = lVar20 + 0xc;
    } while ((int)uVar21 < iVar10);
    uVar21 = 0;
    iVar22 = 1;
    if (0 < iVar10) {
      iVar23 = 1;
      _Dst = pfVar15;
      do {
        FVar19 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
        lVar20 = (longlong)(iVar23 % iVar10);
        if (((fVar3 <= (float)((uint)(*_Dst - pfVar15[lVar20 * 3]) & uVar9)) ||
            (fVar3 <= (float)((uint)(_Dst[1] - pfVar15[lVar20 * 3 + 1]) & uVar9))) ||
           (fVar3 <= (float)((uint)(_Dst[2] - pfVar15[lVar20 * 3 + 2]) & uVar9))) {
          uVar11 = 0;
          if ((int)uVar21 < iVar10) {
            uVar11 = ~uVar21 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            iVar10 = (*pcVar5)();
            return iVar10;
          }
          FVar18 = (this->Vertices).AllocatorInstance.SecondaryData;
          if (FVar18 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
            FVar19 = FVar18;
          }
          iVar10 = SplitWithPlane(this,(TVector<float> *)
                                       ((longlong)FVar19 + (longlong)(int)uVar21 * 0xc),
                                  (TVector<float> *)(pfVar15 + (longlong)(int)uVar21 * 3),
                                  (FPoly *)0x0,(FPoly *)0x0,0);
          if ((iVar10 == 1) || (iVar10 == 3)) goto LAB_14839f986;
        }
        else {
          memcpy(_Dst,pfVar15 + ((longlong)(int)uVar21 + 1) * 3,
                 (longlong)(int)((iVar10 - uVar21) + -1) * 0xc);
          local_res10 = ~uVar21;
          uVar11 = 0;
          if (iVar23 <= (this->Vertices).ArrayNum) {
            uVar11 = local_res10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            iVar10 = (*pcVar5)();
            return iVar10;
          }
          FVar18 = (this->Vertices).AllocatorInstance.SecondaryData;
          FVar17 = FVar19;
          if (FVar18 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
            FVar17 = FVar18;
          }
          pvVar2 = (void *)((longlong)FVar17 + (longlong)(int)uVar21 * 0xc);
          iVar10 = (this->Vertices).ArrayNum + local_res10;
          if (iVar10 != 0) {
            memmove(pvVar2,(void *)((longlong)pvVar2 + 0xc),(longlong)iVar10 * 0xc);
          }
          piVar1 = &(this->Vertices).ArrayMax;
          iVar10 = (this->Vertices).ArrayNum + -1;
          (this->Vertices).ArrayNum = iVar10;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                    (0xc,4,(ForElementType<UE::Math::TVector<float>_> *)FVar19,iVar10,piVar1);
          if ((this->Vertices).ArrayNum < 3) {
            (this->Vertices).ArrayNum = 0;
            if (*piVar1 == 0) {
LAB_14839f986:
              iVar22 = 0;
            }
            else {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                        (0xc,4,0,&(this->Vertices).AllocatorInstance,0,piVar1);
              iVar22 = 0;
            }
            break;
          }
          uVar21 = uVar21 - 1;
          iVar23 = iVar23 + -1;
          _Dst = _Dst + -3;
        }
        iVar10 = (this->Vertices).ArrayNum;
        uVar21 = uVar21 + 1;
        iVar23 = iVar23 + 1;
        _Dst = _Dst + 3;
        iVar22 = 1;
      } while ((int)uVar21 < iVar10);
    }
  }
  if (local_a0[0].bPopped == false) {
    if (((local_a0[0].Mem)->TopMark != local_a0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
    local_a0[0].bPopped = true;
    (local_a0[0].Mem)->NumMarks = (local_a0[0].Mem)->NumMarks + -1;
    if (local_a0[0].SavedChunk != (local_a0[0].Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_a0[0].Mem,local_a0[0].SavedChunk);
    }
    (local_a0[0].Mem)->Top = local_a0[0].Top;
    (local_a0[0].Mem)->TopMark = local_a0[0].NextTopmostMark;
    local_a0[0].Top = (uchar *)0x0;
    if (local_a0[0].bPopped == false) {
      if (((local_a0[0].Mem)->TopMark != local_a0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      local_a0[0].bPopped = true;
      (local_a0[0].Mem)->NumMarks = (local_a0[0].Mem)->NumMarks + -1;
      if (local_a0[0].SavedChunk != (local_a0[0].Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_a0[0].Mem,local_a0[0].SavedChunk);
      }
      (local_a0[0].Mem)->Top = local_a0[0].Top;
      (local_a0[0].Mem)->TopMark = local_a0[0].NextTopmostMark;
    }
  }
  return iVar22;
}

// RemoveVertex @ 1483a0da0

void __thiscall FPoly::RemoveVertex(FPoly *this,TVector<double> *param_1)

{
  TVector<float>_u_0 local_18 [2];
  
  local_18[0]._0_4_ = (undefined4)(param_1->field0_0x0)._s_0.X;
  local_18[0]._4_4_ = (undefined4)(param_1->field0_0x0)._s_0.Y;
  local_18[0]._8_4_ = (undefined4)(param_1->field0_0x0)._s_0.Z;
  TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::Remove
            (&this->Vertices,(TVector<float> *)&local_18[0]._s_0);
  return;
}

// Reverse @ 1483a1b60

void __thiscall FPoly::Reverse(FPoly *this)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ForElementType<UE::Math::TVector<float>_> FVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ForElementType<UE::Math::TVector<float>_> FVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  
  uVar11 = __xmm_80000000800000008000000080000000;
  uVar13 = 0;
  fVar1 = (this->Normal).field0_0x0._s_0.Z;
  (this->Normal).field0_0x0._s_0.X =
       (float)((uint)(this->Normal).field0_0x0._s_0.X ^ __xmm_80000000800000008000000080000000);
  fVar2 = (this->Normal).field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.Z = (float)((uint)fVar1 ^ uVar11);
  (this->Normal).field0_0x0._s_0.Y = (float)((uint)fVar2 ^ uVar11);
  iVar10 = (this->Vertices).ArrayNum / 2;
  lVar15 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar17 = 0;
    do {
      uVar14 = ~uVar13;
      uVar11 = 0;
      if ((int)uVar13 < (this->Vertices).ArrayNum) {
        uVar11 = uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = (this->Vertices).AllocatorInstance.SecondaryData;
      iVar10 = (this->Vertices).ArrayNum;
      FVar12 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar7 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar12 = FVar7;
      }
      uVar16 = iVar10 + uVar14;
      uVar5 = *(undefined4 *)(lVar17 + 8 + (longlong)FVar12);
      uVar3 = *(undefined8 *)(lVar17 + (longlong)FVar12);
      uVar11 = 0;
      if ((int)uVar16 < iVar10) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar7 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar12 = FVar7;
      }
      uVar4 = *(undefined8 *)((longlong)FVar12 + (longlong)(int)uVar16 * 0xc);
      uVar6 = *(undefined4 *)((longlong)FVar12 + 8 + (longlong)(int)uVar16 * 0xc);
      uVar11 = 0;
      if ((int)uVar13 < (this->Vertices).ArrayNum) {
        uVar11 = uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar7 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar12 = FVar7;
      }
      *(undefined8 *)(lVar17 + (longlong)FVar12) = uVar4;
      *(undefined4 *)(lVar17 + 8 + (longlong)FVar12) = uVar6;
      iVar10 = (this->Vertices).ArrayNum;
      uVar14 = iVar10 + uVar14;
      uVar11 = 0;
      if ((int)uVar14 < iVar10) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar7 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar12 = FVar7;
      }
      uVar13 = uVar13 + 1;
      lVar17 = lVar17 + 0xc;
      *(undefined8 *)((longlong)FVar12 + (longlong)(int)uVar14 * 0xc) = uVar3;
      *(undefined4 *)((longlong)FVar12 + 8 + (longlong)(int)uVar14 * 0xc) = uVar5;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}

// Rotate @ 1483a1e40

void __thiscall FPoly::Rotate(FPoly *this,TRotator<float> *param_1)

{
  ForElementType<UE::Math::TVector<float>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  ForElementType<UE::Math::TVector<float>_> FVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  
  UE::Math::TRotationMatrix<float>::TRotationMatrix<float>
            ((TRotationMatrix<float> *)&local_c8,param_1);
  uVar8 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->Vertices).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar1 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar6 = FVar1;
      }
      local_88 = *(float *)(lVar7 + (longlong)FVar6);
      fStack_84 = *(float *)(lVar7 + 4 + (longlong)FVar6);
      fStack_80 = *(float *)(lVar7 + 8 + (longlong)FVar6);
      uVar4 = 0;
      if ((int)uVar8 < (this->Vertices).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      uStack_7c = 0;
      fVar19 = fStack_84 * local_b8;
      fVar20 = fStack_84 * fStack_b4;
      fVar21 = fStack_84 * fStack_b0;
      fVar9 = local_88 * local_c8;
      fVar11 = local_88 * fStack_c4;
      fVar12 = local_88 * fStack_c0;
      fVar13 = fStack_80 * local_a8;
      fVar14 = fStack_80 * fStack_a4;
      fVar15 = fStack_80 * fStack_a0;
      fVar16 = local_98 * 0.0;
      fVar17 = fStack_94 * 0.0;
      fVar18 = fStack_90 * 0.0;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar1 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar6 = FVar1;
      }
      uVar8 = uVar8 + 1;
      *(float *)(lVar7 + (longlong)FVar6) = fVar19 + fVar9 + fVar13 + fVar16;
      *(float *)(lVar7 + 4 + (longlong)FVar6) = fVar20 + fVar11 + fVar14 + fVar17;
      *(float *)(lVar7 + 8 + (longlong)FVar6) = fVar21 + fVar12 + fVar15 + fVar18;
      lVar7 = lVar7 + 0xc;
    } while ((int)uVar8 < (this->Vertices).ArrayNum);
  }
  fVar9 = (this->Base).field0_0x0._s_0.X;
  fVar11 = (this->Base).field0_0x0._s_0.Y;
  fVar12 = (this->Base).field0_0x0._s_0.Z;
  (this->Base).field0_0x0._s_0.X =
       fVar11 * local_b8 + fVar9 * local_c8 + fVar12 * local_a8 + local_98 * 0.0;
  (this->Base).field0_0x0._s_0.Y =
       fVar11 * fStack_b4 + fVar9 * fStack_c4 + fVar12 * fStack_a4 + fStack_94 * 0.0;
  (this->Base).field0_0x0._s_0.Z =
       fVar11 * fStack_b0 + fVar9 * fStack_c0 + fVar12 * fStack_a0 + fStack_90 * 0.0;
  fVar9 = (this->TextureU).field0_0x0._s_0.X;
  fVar11 = (this->TextureU).field0_0x0._s_0.Y;
  fVar12 = (this->TextureU).field0_0x0._s_0.Z;
  (this->TextureU).field0_0x0._s_0.X =
       fVar11 * local_b8 + fVar9 * local_c8 + fVar12 * local_a8 + local_98 * 0.0;
  (this->TextureU).field0_0x0._s_0.Y =
       fVar11 * fStack_b4 + fVar9 * fStack_c4 + fVar12 * fStack_a4 + fStack_94 * 0.0;
  (this->TextureU).field0_0x0._s_0.Z =
       fVar11 * fStack_b0 + fVar9 * fStack_c0 + fVar12 * fStack_a0 + fStack_90 * 0.0;
  fVar9 = (this->TextureV).field0_0x0._s_0.X;
  fVar11 = (this->TextureV).field0_0x0._s_0.Y;
  fVar12 = (this->TextureV).field0_0x0._s_0.Z;
  (this->TextureV).field0_0x0._s_0.X =
       fVar11 * local_b8 + fVar9 * local_c8 + fVar12 * local_a8 + local_98 * 0.0;
  (this->TextureV).field0_0x0._s_0.Y =
       fVar11 * fStack_b4 + fVar9 * fStack_c4 + fVar12 * fStack_a4 + fStack_94 * 0.0;
  (this->TextureV).field0_0x0._s_0.Z =
       fVar11 * fStack_b0 + fVar9 * fStack_c0 + fVar12 * fStack_a0 + fStack_90 * 0.0;
  fVar9 = (this->Normal).field0_0x0._s_0.X;
  fVar11 = (this->Normal).field0_0x0._s_0.Y;
  fVar12 = (this->Normal).field0_0x0._s_0.Z;
  fVar13 = fVar11 * fStack_b4 + fVar9 * fStack_c4 + fVar12 * fStack_a4 + fStack_94 * 0.0;
  fVar14 = fVar11 * fStack_b0 + fVar9 * fStack_c0 + fVar12 * fStack_a0 + fStack_90 * 0.0;
  (this->Normal).field0_0x0._s_0.X =
       fVar11 * local_b8 + fVar9 * local_c8 + fVar12 * local_a8 + local_98 * 0.0;
  (this->Normal).field0_0x0._s_0.Y = fVar13;
  (this->Normal).field0_0x0._s_0.Z = fVar14;
  fVar9 = (this->Normal).field0_0x0._s_0.X;
  fVar11 = fVar9 * fVar9 + fVar13 * fVar13 + fVar14 * fVar14;
  if (fVar11 == __real_3f800000) {
    uVar10 = *(undefined8 *)&(this->Normal).field0_0x0;
    uVar5 = (this->Normal).field0_0x0._s_0.Z;
  }
  else {
    uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar11) {
      fVar11 = __real_3f800000 / SQRT(fVar11);
      uVar10 = CONCAT44(fVar13 * fVar11,fVar9 * fVar11);
      uVar5 = fVar14 * fVar11;
    }
  }
  *(undefined8 *)&(this->Normal).field0_0x0 = uVar10;
  (this->Normal).field0_0x0._s_0.Z = (float)uVar5;
  return;
}

// Scale @ 1483a29b0

void __thiscall FPoly::Scale(FPoly *this,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  ForElementType<UE::Math::TVector<float>_> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<UE::Math::TVector<float>_> FVar7;
  longlong lVar8;
  uint uVar9;
  
  if (((__real_3f800000 != (param_1->field0_0x0)._s_0.X) ||
      (__real_3f800000 != (param_1->field0_0x0)._s_0.Y)) ||
     (__real_3f800000 != (param_1->field0_0x0)._s_0.Z)) {
    uVar9 = 0;
    if (0 < (this->Vertices).ArrayNum) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Vertices).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (this->Vertices).AllocatorInstance.SecondaryData;
        FVar7 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
        if (FVar3 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
          FVar7 = FVar3;
        }
        uVar9 = uVar9 + 1;
        *(float *)((longlong)FVar7 + lVar8) =
             (param_1->field0_0x0)._s_0.X * *(float *)((longlong)FVar7 + lVar8);
        *(float *)((longlong)FVar7 + 4 + lVar8) =
             (param_1->field0_0x0)._s_0.Y * *(float *)((longlong)FVar7 + 4 + lVar8);
        *(float *)((longlong)FVar7 + 8 + lVar8) =
             (param_1->field0_0x0)._s_0.Z * *(float *)((longlong)FVar7 + 8 + lVar8);
        lVar8 = lVar8 + 0xc;
      } while ((int)uVar9 < (this->Vertices).ArrayNum);
    }
    (this->Base).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X * (this->Base).field0_0x0._s_0.X;
    (this->Base).field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y * (this->Base).field0_0x0._s_0.Y;
    (this->Base).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z * (this->Base).field0_0x0._s_0.Z;
    fVar1 = (this->TextureU).field0_0x0._s_0.Y;
    (this->TextureU).field0_0x0._s_0.X =
         (this->TextureU).field0_0x0._s_0.X / (param_1->field0_0x0)._s_0.X;
    fVar2 = (this->TextureU).field0_0x0._s_0.Z;
    (this->TextureU).field0_0x0._s_0.Y = fVar1 / (param_1->field0_0x0)._s_0.Y;
    (this->TextureU).field0_0x0._s_0.Z = fVar2 / (param_1->field0_0x0)._s_0.Z;
    fVar1 = (this->TextureV).field0_0x0._s_0.Y;
    (this->TextureV).field0_0x0._s_0.X =
         (this->TextureV).field0_0x0._s_0.X / (param_1->field0_0x0)._s_0.X;
    fVar2 = (this->TextureV).field0_0x0._s_0.Z;
    (this->TextureV).field0_0x0._s_0.Y = fVar1 / (param_1->field0_0x0)._s_0.Y;
    (this->TextureV).field0_0x0._s_0.Z = fVar2 / (param_1->field0_0x0)._s_0.Z;
    CalcNormal(this,true);
  }
  return;
}

// Split @ 1483ace30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FPoly::Split(FPoly *this,TVector<float> *param_1,TVector<float> *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_328 [32];
  TPlane<double> local_308;
  undefined1 local_2e8 [24];
  undefined1 auStack_2d0 [216];
  ForElementType<UE::Math::TVector<float>_> local_1f8;
  int local_1f0;
  undefined8 local_1ec;
  TObjectPtr<ABrush>_u_0 local_1e0;
  TObjectPtr<UMaterialInterface>_u_0 local_1d8;
  FName local_1d0;
  FName local_1c8;
  undefined8 local_1c0;
  int local_1b8;
  uint local_1b4;
  float local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  undefined1 local_188 [24];
  undefined1 auStack_170 [216];
  ForElementType<UE::Math::TVector<float>_> local_98;
  int local_90;
  undefined8 local_8c;
  TObjectPtr<ABrush>_u_0 local_80;
  TObjectPtr<UMaterialInterface>_u_0 local_78;
  FName local_70;
  FName local_68;
  undefined8 local_60;
  int local_58;
  uint local_54;
  float local_50;
  uint local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_328;
  iVar2 = 0;
  local_1ac = local_1ac & 0xfffffff0;
  local_4c = local_4c & 0xfffffff0;
  local_2e8._0_8_ = 0;
  local_2e8._8_8_ = 0;
  local_2e8._16_8_ = 0;
  auStack_2d0._0_8_ = 0;
  auStack_2d0._8_8_ = 0;
  auStack_2d0._16_8_ = 0;
  local_1f8 = (ForElementType<UE::Math::TVector<float>_>)0x0;
  local_1f0 = 0;
  local_1e0.DebugPtr = (ABrush *)0x0;
  local_1d8.DebugPtr = (UMaterialInterface *)0x0;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  local_1b4 = 0;
  local_1a8 = ___xmm_3f8000003f8000000000000041000000;
  uStack_1a0 = _UNK_151aa2778;
  local_188._0_8_ = 0;
  local_188._8_8_ = 0;
  local_188._16_8_ = 0;
  auStack_170._0_8_ = 0;
  auStack_170._8_8_ = 0;
  auStack_170._16_8_ = 0;
  local_98 = (ForElementType<UE::Math::TVector<float>_>)0x0;
  local_90 = 0;
  local_80.DebugPtr = (ABrush *)0x0;
  local_78.DebugPtr = (UMaterialInterface *)0x0;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  local_54 = 0;
  local_48 = ___xmm_3f8000003f8000000000000041000000;
  uStack_40 = _UNK_151aa2778;
  local_1ec._0_4_ = 0x10;
  local_1ec._4_4_ = 0;
  local_1c0._0_4_ = -1;
  local_1c0._4_4_ = -1;
  local_1b8 = -1;
  local_1b0 = 32.0;
  local_198 = 1.0;
  local_8c._0_4_ = 0x10;
  local_8c._4_4_ = 0;
  local_60._0_4_ = -1;
  local_60._4_4_ = -1;
  local_58 = -1;
  local_50 = 32.0;
  local_38 = 1.0;
  Init((FPoly *)local_2e8);
  Init((FPoly *)local_188);
  local_308._padding_ = (longlong)(double)(param_1->field0_0x0)._s_0.Y;
  local_308._padding_ = (longlong)(double)(param_1->field0_0x0)._s_0.X;
  local_308._padding_ = (longlong)(double)(param_1->field0_0x0)._s_0.Z;
  local_308.W = (double)(param_2->field0_0x0)._s_0.Y * (double)local_308._padding_ +
                (double)(param_2->field0_0x0)._s_0.X * (double)local_308._padding_ +
                (double)(param_2->field0_0x0)._s_0.Z * (double)local_308._padding_;
  iVar1 = SplitWithPlaneFast(this,&local_308,(FPoly *)local_2e8,(FPoly *)local_188);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      operator=(this,(FPoly *)local_2e8);
    }
    iVar2 = (this->Vertices).ArrayNum;
  }
  if (local_98 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FMemory::Free((void *)local_98);
  }
  if (local_1f8 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FMemory::Free((void *)local_1f8);
  }
  return iVar2;
}

// SplitWithNode @ 1483ad050

int __thiscall
FPoly::SplitWithNode
          (FPoly *this,UModel *param_1,int param_2,FPoly *param_3,FPoly *param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (param_2 < (param_1->Nodes).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar1 = (param_1->Nodes).AllocatorInstance.Data;
  uVar8 = *(uint *)(pFVar1 + (longlong)param_2 * 0x40 + 0x14);
  uVar6 = 0;
  if ((int)uVar8 < (param_1->Surfs).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar8 = *(uint *)((param_1->Surfs).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x50 + 0x10);
  uVar6 = 0;
  if ((int)uVar8 < (param_1->Vectors).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar2 = (param_1->Vectors).AllocatorInstance.Data;
  uVar6 = *(uint *)(pFVar1 + (longlong)param_2 * 0x40 + 0x10);
  uVar7 = 0;
  if ((int)uVar6 < (param_1->Verts).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar6 = *(uint *)((param_1->Verts).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18);
  uVar7 = 0;
  if ((int)uVar6 < (param_1->Points).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = SplitWithPlane(this,(TVector<float> *)
                              ((param_1->Points).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc
                              ),(TVector<float> *)(pFVar2 + (longlong)(int)uVar8 * 0xc),param_3,
                         param_4,param_5);
  return iVar5;
}

// SplitWithPlane @ 1483ad260

int __thiscall
FPoly::SplitWithPlane
          (FPoly *this,TVector<float> *param_1,TVector<float> *param_2,FPoly *param_3,FPoly *param_4
          ,int param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  ForElementType<UE::Math::TVector<float>_> FVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  ForElementType<UE::Math::TVector<float>_> FVar9;
  ForElementType<UE::Math::TVector<float>_> FVar10;
  TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  uint uVar12;
  TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong local_e8;
  
  bVar19 = param_5 != 0;
  fVar22 = 0.0;
  fVar26 = 0.0;
  fVar24 = 0.0;
  param_5 = 2;
  fVar29 = __real_3e800000;
  if (bVar19) {
    fVar29 = __real_3c23d70a;
  }
  if (((this->Vertices).ArrayNum < 3) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Vertices.Num()>=3",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Polygon.cpp"
                          ,0xbb,L""), bVar19)) {
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
  uVar15 = __xmm_80000000800000008000000080000000;
  uVar12 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar17 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar16 = ~uVar12 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        iVar6 = (*pcVar5)();
        return iVar6;
      }
      FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar9 = FVar4;
      }
      fVar26 = (*(float *)(lVar17 + 4 + (longlong)FVar9) - (param_1->field0_0x0)._s_0.Y) *
               (param_2->field0_0x0)._s_0.Y +
               (*(float *)(lVar17 + (longlong)FVar9) - (param_1->field0_0x0)._s_0.X) *
               (param_2->field0_0x0)._s_0.X +
               (*(float *)(lVar17 + 8 + (longlong)FVar9) - (param_1->field0_0x0)._s_0.Z) *
               (param_2->field0_0x0)._s_0.Z;
      if ((((uVar12 == 0) || (fVar22 < fVar26)) && (fVar22 = fVar26, uVar12 == 0)) ||
         (fVar26 < fVar24)) {
        fVar24 = fVar26;
      }
      if (fVar26 <= fVar29) {
        if (fVar26 < (float)((uint)fVar29 ^ uVar15)) {
          param_5 = 1;
        }
      }
      else {
        param_5 = 0;
      }
      uVar12 = uVar12 + 1;
      lVar17 = lVar17 + 0xc;
    } while ((int)uVar12 < (this->Vertices).ArrayNum);
  }
  if (fVar29 <= fVar22) {
    if ((float)((uint)fVar29 ^ uVar15) < fVar24) {
      return 1;
    }
    if ((param_3 != (FPoly *)0x0) && (param_4 != (FPoly *)0x0)) {
      operator=(param_3,this);
      param_3->PolyFlags = param_3->PolyFlags | 0x80000000;
      piVar1 = &(param_3->Vertices).ArrayMax;
      (param_3->Vertices).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                  (0xc,4,0,&(param_3->Vertices).AllocatorInstance,0,piVar1);
      }
      operator=(param_4,this);
      param_4->PolyFlags = param_4->PolyFlags | 0x80000000;
      piVar1 = &(param_4->Vertices).ArrayMax;
      (param_4->Vertices).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                  (0xc,4,0,&(param_4->Vertices).AllocatorInstance,0,piVar1);
      }
      iVar6 = (this->Vertices).ArrayNum;
      uVar12 = iVar6 - 1;
      if (0 < iVar6) {
        pTVar13 = &this->Vertices;
        fVar22 = (float)((uint)fVar29 ^ uVar15);
        local_e8 = 0;
        lVar17 = 0;
        lVar18 = (longlong)(int)uVar12;
        uVar15 = 0;
        do {
          lVar14 = lVar17;
          pTVar11 = &param_3->Vertices;
          uVar16 = 0;
          if ((int)uVar15 < (this->Vertices).ArrayNum) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            iVar6 = (*pcVar5)();
            return iVar6;
          }
          FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<UE::Math::TVector<float>_>)pTVar13;
          if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
            FVar9 = FVar4;
          }
          fVar24 = (*(float *)((longlong)FVar9 + local_e8) - (param_1->field0_0x0)._s_0.X) *
                   (param_2->field0_0x0)._s_0.X +
                   (*(float *)((uchar *)((longlong)FVar9 + 4) + lVar14 * 0xc) -
                   (param_1->field0_0x0)._s_0.Y) * (param_2->field0_0x0)._s_0.Y +
                   (*(float *)((uchar *)((longlong)FVar9 + 8) + lVar14 * 0xc) -
                   (param_1->field0_0x0)._s_0.Z) * (param_2->field0_0x0)._s_0.Z;
          if (fVar24 <= fVar29) {
            iVar6 = param_5;
            if (fVar24 < fVar22) {
              iVar6 = 1;
              goto LAB_1483ad62f;
            }
LAB_1483adb23:
            param_5 = iVar6;
            if (iVar6 != 0) {
LAB_1483adb2a:
              pTVar11 = &param_4->Vertices;
            }
          }
          else {
            iVar6 = 0;
LAB_1483ad62f:
            if (iVar6 == param_5) goto LAB_1483adb23;
            if ((fVar24 < fVar22) || (fVar29 <= fVar24)) {
              if ((fVar26 < fVar22) || (fVar29 <= fVar26)) {
                uVar16 = 0;
                if ((int)uVar15 < (this->Vertices).ArrayNum) {
                  uVar16 = ~uVar15 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar5 = (code *)swi(3);
                  iVar6 = (*pcVar5)();
                  return iVar6;
                }
                FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
                FVar9 = (ForElementType<UE::Math::TVector<float>_>)pTVar13;
                if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                  FVar9 = FVar4;
                }
                uVar16 = 0;
                if ((int)uVar12 < (this->Vertices).ArrayNum) {
                  uVar16 = ~uVar12 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar5 = (code *)swi(3);
                  iVar6 = (*pcVar5)();
                  return iVar6;
                }
                FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
                FVar10 = (ForElementType<UE::Math::TVector<float>_>)pTVar13;
                if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                  FVar10 = FVar4;
                }
                fVar26 = *(float *)((uchar *)((longlong)FVar10 + 4) + lVar18 * 0xc);
                fVar28 = *(float *)((longlong)FVar10 + lVar18 * 0xc);
                fVar21 = *(float *)((uchar *)((longlong)FVar9 + 4) + lVar14 * 0xc) - fVar26;
                fVar20 = *(float *)((uchar *)((longlong)FVar10 + 8) + lVar18 * 0xc);
                fVar25 = *(float *)((longlong)FVar9 + lVar14 * 0xc) - fVar28;
                fVar23 = *(float *)((uchar *)((longlong)FVar9 + 8) + lVar14 * 0xc) - fVar20;
                fVar27 = (param_2->field0_0x0)._s_0.Z;
                fVar2 = (param_2->field0_0x0)._s_0.X;
                fVar3 = (param_2->field0_0x0)._s_0.Y;
                fVar27 = (((param_1->field0_0x0)._s_0.X - fVar28) * fVar2 +
                          ((param_1->field0_0x0)._s_0.Y - fVar26) * fVar3 +
                         ((param_1->field0_0x0)._s_0.Z - fVar20) * fVar27) /
                         (fVar3 * fVar21 + fVar2 * fVar25 + fVar27 * fVar23);
                fVar26 = fVar27 * fVar21 + fVar26;
                fVar20 = fVar27 * fVar23 + fVar20;
                fVar28 = fVar27 * fVar25 + fVar28;
                if (param_5 == 0) {
                  pfVar8 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                                     (0xc,&param_3->Vertices);
                  if (pfVar8 != (float *)0x0) {
                    pfVar8[1] = fVar26;
                    pfVar8[2] = fVar20;
                    *pfVar8 = fVar28;
                  }
                  pfVar8 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                                     (0xc,&param_4->Vertices);
                  param_5 = iVar6;
                  if (pfVar8 != (float *)0x0) {
                    pfVar8[1] = fVar26;
                    pfVar8[2] = fVar20;
                    *pfVar8 = fVar28;
                  }
                  goto LAB_1483adb2a;
                }
                pfVar8 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                                   (0xc,&param_4->Vertices);
                if (pfVar8 != (float *)0x0) {
                  pfVar8[1] = fVar26;
                  pfVar8[2] = fVar20;
                  *pfVar8 = fVar28;
                }
                pTVar11 = &param_3->Vertices;
                pfVar8 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                                   (0xc,pTVar11);
                param_5 = iVar6;
                if (pfVar8 != (float *)0x0) {
                  pfVar8[1] = fVar26;
                  pfVar8[2] = fVar20;
                  *pfVar8 = fVar28;
                }
                goto LAB_1483adb2d;
              }
              if (iVar6 == 0) {
                puVar7 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                                   (0xc,pTVar11);
                param_5 = iVar6;
                if (puVar7 != (undefined8 *)0x0) {
                  uVar16 = 0;
                  if ((int)uVar12 < (this->Vertices).ArrayNum) {
                    uVar16 = ~uVar12 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    iVar6 = (*pcVar5)();
                    return iVar6;
                  }
                  FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
                  FVar9 = (ForElementType<UE::Math::TVector<float>_>)pTVar13;
                  if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                    FVar9 = FVar4;
                  }
                  *puVar7 = *(undefined8 *)((longlong)FVar9 + lVar18 * 0xc);
                  *(undefined4 *)(puVar7 + 1) =
                       *(undefined4 *)((uchar *)((longlong)FVar9 + 8) + lVar18 * 0xc);
                }
                goto LAB_1483adb2d;
              }
              puVar7 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                                 (0xc,&param_4->Vertices);
              param_5 = iVar6;
              if (puVar7 != (undefined8 *)0x0) {
                uVar16 = 0;
                if ((int)uVar12 < (this->Vertices).ArrayNum) {
                  uVar16 = ~uVar12 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar5 = (code *)swi(3);
                  iVar6 = (*pcVar5)();
                  return iVar6;
                }
                FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
                FVar9 = (ForElementType<UE::Math::TVector<float>_>)pTVar13;
                if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                  FVar9 = FVar4;
                }
                *puVar7 = *(undefined8 *)((longlong)FVar9 + lVar18 * 0xc);
                *(undefined4 *)(puVar7 + 1) =
                     *(undefined4 *)((uchar *)((longlong)FVar9 + 8) + lVar18 * 0xc);
              }
              goto LAB_1483adb2a;
            }
            if (param_5 == 0) {
              puVar7 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                                 (0xc,pTVar11);
              param_5 = iVar6;
              if (puVar7 != (undefined8 *)0x0) {
                uVar12 = 0;
                if ((int)uVar15 < (this->Vertices).ArrayNum) {
                  uVar12 = ~uVar15 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar5 = (code *)swi(3);
                  iVar6 = (*pcVar5)();
                  return iVar6;
                }
                FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
                FVar9 = (ForElementType<UE::Math::TVector<float>_>)pTVar13;
                if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                  FVar9 = FVar4;
                }
                *puVar7 = *(undefined8 *)((longlong)FVar9 + lVar14 * 0xc);
                *(undefined4 *)(puVar7 + 1) =
                     *(undefined4 *)((uchar *)((longlong)FVar9 + 8) + lVar14 * 0xc);
              }
              goto LAB_1483adb2a;
            }
            puVar7 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                               (0xc,&param_4->Vertices);
            param_5 = iVar6;
            if (puVar7 != (undefined8 *)0x0) {
              uVar12 = 0;
              if ((int)uVar15 < (this->Vertices).ArrayNum) {
                uVar12 = ~uVar15 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar5 = (code *)swi(3);
                iVar6 = (*pcVar5)();
                return iVar6;
              }
              FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
              FVar9 = (ForElementType<UE::Math::TVector<float>_>)pTVar13;
              if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                FVar9 = FVar4;
              }
              *puVar7 = *(undefined8 *)((longlong)FVar9 + lVar14 * 0xc);
              *(undefined4 *)(puVar7 + 1) =
                   *(undefined4 *)((uchar *)((longlong)FVar9 + 8) + lVar14 * 0xc);
            }
          }
LAB_1483adb2d:
          puVar7 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                             (0xc,pTVar11);
          if (puVar7 != (undefined8 *)0x0) {
            uVar12 = 0;
            if ((int)uVar15 < (this->Vertices).ArrayNum) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar5 = (code *)swi(3);
              iVar6 = (*pcVar5)();
              return iVar6;
            }
            FVar4 = (this->Vertices).AllocatorInstance.SecondaryData;
            FVar9 = (ForElementType<UE::Math::TVector<float>_>)pTVar13;
            if (FVar4 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
              FVar9 = FVar4;
            }
            *puVar7 = *(undefined8 *)((longlong)FVar9 + lVar14 * 0xc);
            *(undefined4 *)(puVar7 + 1) =
                 *(undefined4 *)((uchar *)((longlong)FVar9 + 8) + lVar14 * 0xc);
          }
          local_e8 = local_e8 + 0xc;
          uVar16 = uVar15 + 1;
          lVar17 = lVar14 + 1;
          lVar18 = lVar14;
          fVar26 = fVar24;
          uVar12 = uVar15;
          uVar15 = uVar16;
        } while ((int)uVar16 < (this->Vertices).ArrayNum);
      }
      iVar6 = Fix(param_3);
      if (iVar6 < 3) goto LAB_1483adc1d;
      iVar6 = Fix(param_4);
      if (iVar6 < 3) {
        return 1;
      }
    }
    iVar6 = 3;
  }
  else {
    if ((float)((uint)fVar29 ^ uVar15) < fVar24) {
      return 0;
    }
LAB_1483adc1d:
    iVar6 = 2;
  }
  return iVar6;
}

// SplitWithPlaneFast @ 1483adc80

int __thiscall
FPoly::SplitWithPlaneFast(FPoly *this,TPlane<double> *param_1,FPoly *param_2,FPoly *param_3)

{
  float *pfVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  ulong64 uVar12;
  int *piVar13;
  undefined8 *puVar14;
  ForElementType<UE::Math::TVector<float>_> FVar15;
  TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar16;
  uint uVar17;
  ForElementType<UE::Math::TVector<float>_> FVar18;
  ForElementType<UE::Math::TVector<float>_> FVar19;
  uint uVar20;
  FPoly *pFVar21;
  TPlane<double> *pTVar22;
  longlong lVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 local_res8 [8];
  TPlane<double> *local_res10;
  FPoly *local_res18;
  int local_128;
  undefined1 local_124 [4];
  FMemMark local_120;
  int *local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  
  local_res10 = param_1;
  local_res18 = param_2;
  puVar10 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_d8 = local_res8;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_e0,puVar10);
  local_120.Mem = (FMemStackBase *)(pFVar11 + 2);
  local_120.Top = (local_120.Mem)->Top;
  local_120.SavedChunk = *(FTaggedMemory **)(pFVar11 + 4);
  local_120.bPopped = false;
  local_120.NextTopmostMark = *(FMemMark **)(pFVar11 + 5);
  pFVar11[5] = (FTlsAutoCleanup)&local_120;
  *(int *)(pFVar11 + 6) = *(int *)(pFVar11 + 6) + 1;
  puVar10 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_c8 = local_124;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d0,puVar10);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)(this->Vertices).ArrayNum;
  uVar12 = SUB168(ZEXT816(4) * auVar3,0);
  if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
    uVar12 = 0xffffffffffffffff;
  }
  piVar13 = FMemStackBase::Alloc((FMemStackBase *)(pFVar11 + 2),uVar12,0x10);
  fVar29 = __real_be800000;
  fVar27 = __real_3e800000;
  bVar4 = false;
  bVar7 = false;
  bVar5 = false;
  uVar20 = 0;
  local_f8 = piVar13;
  if (0 < (this->Vertices).ArrayNum) {
    lVar23 = 0;
    uVar17 = 1;
    pTVar22 = local_res10;
    do {
      uVar8 = 0;
      if ((int)uVar20 < (this->Vertices).ArrayNum) {
        uVar8 = ~uVar20 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         pTVar22 = local_res10, bVar4 = bVar5, bVar6)) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
      FVar18 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar18 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar15 = FVar18;
      }
      fVar25 = (float)(((double)*(float *)(lVar23 + 4 + (longlong)FVar15) *
                        (double)pTVar22->_padding_ +
                        (double)*(float *)(lVar23 + (longlong)FVar15) * (double)pTVar22->_padding_ +
                       (double)*(float *)(lVar23 + 8 + (longlong)FVar15) *
                       (double)pTVar22->_padding_) - pTVar22->W);
      if (fVar25 < 0.0) {
        *piVar13 = 1;
        if (fVar25 < fVar29) {
          bVar7 = true;
        }
      }
      else {
        *piVar13 = 0;
        if (fVar27 < fVar25) {
          bVar4 = true;
          bVar5 = true;
        }
      }
      iVar9 = (this->Vertices).ArrayNum;
      uVar20 = uVar20 + 1;
      lVar23 = lVar23 + 0xc;
      piVar13 = piVar13 + 1;
    } while ((int)uVar20 < iVar9);
    if (bVar4) {
      if (bVar7) {
        if (local_res18 != (FPoly *)0x0) {
          FVar18 = (this->Vertices).AllocatorInstance.SecondaryData;
          local_128 = 0;
          if (FVar18 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
            FVar18 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
          }
          FVar15 = (ForElementType<UE::Math::TVector<float>_>)
                   ((longlong)FVar18 + ((longlong)iVar9 + -1) * 0xc);
          iVar24 = local_f8[(longlong)iVar9 + -1];
          pFVar21 = local_res18;
          if (0 < iVar9) {
            do {
              FVar19 = FVar18;
              iVar9 = *local_f8;
              local_f8 = local_f8 + 1;
              if (iVar9 == iVar24) {
                if (iVar9 == 0) {
                  pTVar16 = &pFVar21->Vertices;
                }
                else {
                  pTVar16 = &param_3->Vertices;
                }
LAB_1483ae199:
                puVar14 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                                    (0xc,pTVar16);
              }
              else {
                fVar27 = *(float *)FVar15;
                fVar29 = *(float *)((longlong)FVar15 + 4);
                fVar25 = *(float *)((longlong)FVar15 + 8);
                piVar13 = &(pFVar21->Vertices).ArrayMax;
                fVar30 = *(float *)((longlong)FVar19 + 8) - fVar25;
                fVar28 = *(float *)((longlong)FVar19 + 4) - fVar29;
                uVar20 = (pFVar21->Vertices).ArrayNum;
                fVar26 = ((float)pTVar22->W -
                         (fVar29 * (float)(double)pTVar22->_padding_ +
                          fVar27 * (float)(double)pTVar22->_padding_ +
                         fVar25 * (float)(double)pTVar22->_padding_)) /
                         ((*(float *)FVar19 - fVar27) * (float)(double)pTVar22->_padding_ +
                          (float)(double)pTVar22->_padding_ * fVar28 +
                         fVar30 * (float)(double)pTVar22->_padding_);
                fVar27 = (*(float *)FVar19 - fVar27) * fVar26 + fVar27;
                fVar29 = fVar28 * fVar26 + fVar29;
                fVar25 = fVar30 * fVar26 + fVar25;
                local_f0 = fVar27;
                fStack_ec = fVar29;
                local_e8 = fVar25;
                if (uVar20 == *piVar13) {
                  uVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                                     (0x40c,&(pFVar21->Vertices).AllocatorInstance,piVar13);
                }
                (pFVar21->Vertices).ArrayNum = uVar20 + 1;
                uVar17 = 0;
                if ((int)uVar20 < (int)(uVar20 + 1)) {
                  uVar17 = ~uVar20 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  iVar9 = (*pcVar2)();
                  return iVar9;
                }
                FVar18 = (pFVar21->Vertices).AllocatorInstance.SecondaryData;
                FVar15 = (ForElementType<UE::Math::TVector<float>_>)&pFVar21->Vertices;
                if (FVar18 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                  FVar15 = FVar18;
                }
                pfVar1 = (float *)((longlong)FVar15 + (longlong)(int)uVar20 * 0xc);
                if (pfVar1 != (float *)0x0) {
                  *pfVar1 = fVar27;
                  pfVar1[1] = fVar29;
                  pfVar1[2] = fVar25;
                }
                uVar20 = (param_3->Vertices).ArrayNum;
                piVar13 = &(param_3->Vertices).ArrayMax;
                if (uVar20 == *piVar13) {
                  uVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                                     (0x40c,&(param_3->Vertices).AllocatorInstance,piVar13);
                }
                (param_3->Vertices).ArrayNum = uVar20 + 1;
                uVar17 = 0;
                if ((int)uVar20 < (int)(uVar20 + 1)) {
                  uVar17 = ~uVar20 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  iVar9 = (*pcVar2)();
                  return iVar9;
                }
                FVar18 = (param_3->Vertices).AllocatorInstance.SecondaryData;
                FVar15 = (ForElementType<UE::Math::TVector<float>_>)&param_3->Vertices;
                if (FVar18 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                  FVar15 = FVar18;
                }
                puVar14 = (undefined8 *)((longlong)FVar15 + (longlong)(int)uVar20 * 0xc);
                if (puVar14 != (undefined8 *)0x0) {
                  *puVar14 = CONCAT44(fStack_ec,local_f0);
                  *(float *)(puVar14 + 1) = local_e8;
                }
                if (iVar24 != 0) {
                  pTVar16 = &local_res18->Vertices;
                  pFVar21 = local_res18;
                  goto LAB_1483ae199;
                }
                puVar14 = operator_new<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                                    (0xc,&param_3->Vertices);
                pFVar21 = local_res18;
              }
              if (puVar14 != (undefined8 *)0x0) {
                *puVar14 = *(undefined8 *)FVar19;
                *(float *)(puVar14 + 1) = *(float *)((longlong)FVar19 + 8);
              }
              local_128 = local_128 + 1;
              FVar18 = (ForElementType<UE::Math::TVector<float>_>)((longlong)FVar19 + 0xc);
              FVar15 = FVar19;
              pTVar22 = local_res10;
              iVar24 = iVar9;
            } while (local_128 < (this->Vertices).ArrayNum);
          }
          *(undefined8 *)&(pFVar21->Base).field0_0x0 = *(undefined8 *)&(this->Base).field0_0x0;
          (pFVar21->Base).field0_0x0._s_0.Z = (this->Base).field0_0x0._s_0.Z;
          *(undefined8 *)&(pFVar21->Normal).field0_0x0 = *(undefined8 *)&(this->Normal).field0_0x0;
          (pFVar21->Normal).field0_0x0._s_0.Z = (this->Normal).field0_0x0._s_0.Z;
          pFVar21->PolyFlags = this->PolyFlags;
          *(undefined8 *)&(param_3->Base).field0_0x0 = *(undefined8 *)&(this->Base).field0_0x0;
          (param_3->Base).field0_0x0._s_0.Z = (this->Base).field0_0x0._s_0.Z;
          *(undefined8 *)&(param_3->Normal).field0_0x0 = *(undefined8 *)&(this->Normal).field0_0x0;
          (param_3->Normal).field0_0x0._s_0.Z = (this->Normal).field0_0x0._s_0.Z;
          param_3->PolyFlags = this->PolyFlags;
        }
        uVar17 = 3;
      }
      goto LAB_1483ae280;
    }
  }
  uVar17 = -(uint)bVar7 & 2;
LAB_1483ae280:
  if (local_120.bPopped == false) {
    if (((local_120.Mem)->TopMark != &local_120) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    }
    local_120.bPopped = true;
    (local_120.Mem)->NumMarks = (local_120.Mem)->NumMarks + -1;
    if (local_120.SavedChunk != (local_120.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_120.Mem,local_120.SavedChunk);
    }
    (local_120.Mem)->Top = local_120.Top;
    (local_120.Mem)->TopMark = local_120.NextTopmostMark;
    local_120.Top = (uchar *)0x0;
    if (local_120.bPopped == false) {
      if (((local_120.Mem)->TopMark != &local_120) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
      local_120.bPopped = true;
      (local_120.Mem)->NumMarks = (local_120.Mem)->NumMarks + -1;
      if (local_120.SavedChunk != (local_120.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_120.Mem,local_120.SavedChunk);
      }
      (local_120.Mem)->Top = local_120.Top;
      (local_120.Mem)->TopMark = local_120.NextTopmostMark;
    }
  }
  return uVar17;
}

// Transform @ 1483b1d10

void __thiscall FPoly::Transform(FPoly *this,TVector<float> *param_1)

{
  ForElementType<UE::Math::TVector<float>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<UE::Math::TVector<float>_> FVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  (this->Base).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X + (this->Base).field0_0x0._s_0.X;
  (this->Base).field0_0x0._s_0.Y = (this->Base).field0_0x0._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  (this->Base).field0_0x0._s_0.Z = (this->Base).field0_0x0._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  if (0 < (this->Vertices).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Vertices).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->Vertices).AllocatorInstance.SecondaryData;
      FVar5 = (ForElementType<UE::Math::TVector<float>_>)&this->Vertices;
      if (FVar1 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar5 = FVar1;
      }
      uVar6 = uVar6 + 1;
      *(float *)(lVar7 + (longlong)FVar5) =
           (param_1->field0_0x0)._s_0.X + *(float *)(lVar7 + (longlong)FVar5);
      *(float *)(lVar7 + 4 + (longlong)FVar5) =
           (param_1->field0_0x0)._s_0.Y + *(float *)(lVar7 + 4 + (longlong)FVar5);
      *(float *)(lVar7 + 8 + (longlong)FVar5) =
           (param_1->field0_0x0)._s_0.Z + *(float *)(lVar7 + 8 + (longlong)FVar5);
      lVar7 = lVar7 + 0xc;
    } while ((int)uVar6 < (this->Vertices).ArrayNum);
  }
  return;
}

// Triangulate @ 1483b1e40

int __thiscall
FPoly::Triangulate(FPoly *this,ABrush *param_1,TArray<FPoly,TSizedDefaultAllocator<32>_> *param_2)

{
  return param_2->ArrayNum;
}

