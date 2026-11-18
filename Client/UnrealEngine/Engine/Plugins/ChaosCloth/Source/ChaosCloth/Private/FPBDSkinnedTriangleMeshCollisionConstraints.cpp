// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// FPBDSkinnedTriangleMeshCollisionConstraints @ 14db95270

FPBDSkinnedTriangleMeshCollisionConstraints * __thiscall
Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::
FPBDSkinnedTriangleMeshCollisionConstraints
          (FPBDSkinnedTriangleMeshCollisionConstraints *this,int param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,FCollectionPropertyConstFacade *param_3)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  float *pfVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  wchar_t *pwVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res8;
  int local_res10;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float local_res24;
  TArrayView<float_const_,int> local_a8;
  FString local_98;
  FString local_88 [4];
  
  fVar12 = __real_3f800000;
  this->NumParticles = param_1;
  local_res18 = 0.0;
  fStackX_1c = 1.0;
  local_res10 = param_1;
  pFVar6 = ::FName::ToString(&ClothCollisionThicknessName,&local_98);
  pFVar6 = ::FString::FString(local_88,pFVar6);
  local_res8 = (TVector<float,2>)param_3;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_3,(FString *)&local_a8,&ClothCollisionThicknessName,(<lambda_1> *)&local_res8,
             pFVar6,(int *)0x0);
  pfVar2 = local_a8.DataPtr;
  pwVar10 = L"";
  iVar5 = local_a8.ArrayNum;
  pfVar9 = (float *)L"";
  if (iVar5 != 0) {
    pfVar9 = local_a8.DataPtr;
  }
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)pfVar9);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_2,uVar4,(FString *)&local_a8);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)param_2 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_a8.DataPtr = (float *)0x0;
    local_a8._8_8_ = (ulonglong)(uint)local_a8._12_4_ << 0x20;
  }
  else {
    local_a8.DataPtr = *(float **)(lVar1 + 0x10);
    local_a8._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  local_res8._0_4_ = 0.0;
  local_res8._4_4_ = 0.0;
  this_00 = &param_3->KeyNameIndices;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,ClothCollisionThicknessName);
  if ((piVar7 != (int *)0x0) && (iVar5 = *piVar7, iVar5 != -1)) {
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_3,iVar5,&param_3->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_3,iVar5,&param_3->LowValueArray);
    local_res8._4_4_ = fVar11;
  }
  local_res20 = (float)local_res8;
  if ((float)local_res8 <= 0.0) {
    local_res20 = 0.0;
  }
  local_res24 = local_res8._4_4_;
  if (local_res8._4_4_ <= 0.0) {
    local_res24 = 0.0;
  }
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->ClothCollisionThickness,(TVector<float,2> *)&local_res20,&local_a8,local_res10,
             (TVector<float,2> *)&local_res18);
  if (pfVar2 != (float *)0x0) {
    FMemory::Free(pfVar2);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  local_res10 = this->NumParticles;
  local_res20 = 0.0;
  local_res24 = 1.0;
  pFVar6 = ::FName::ToString(&FrictionCoefficientName,&local_98);
  pFVar6 = ::FString::FString(local_88,pFVar6);
  local_res8 = (TVector<float,2>)param_3;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_3,(FString *)&local_a8,&FrictionCoefficientName,(<lambda_1> *)&local_res8,pFVar6,
             (int *)0x0);
  pfVar2 = local_a8.DataPtr;
  if (local_a8.ArrayNum == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = local_a8.ArrayNum + -1;
    pwVar10 = (wchar_t *)local_a8.DataPtr;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_2,uVar4,(FString *)&local_a8);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)param_2 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_a8.DataPtr = (float *)0x0;
    local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  }
  else {
    local_a8.DataPtr = *(float **)(lVar1 + 0x10);
    local_a8._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  local_res8._0_4_ = 0.8;
  local_res8._4_4_ = 0.8;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,FrictionCoefficientName);
  if ((piVar7 != (int *)0x0) && (iVar5 = *piVar7, iVar5 != -1)) {
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_3,iVar5,&param_3->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_3,iVar5,&param_3->LowValueArray);
    local_res8._4_4_ = fVar11;
  }
  local_res18 = (float)local_res8;
  if (fVar12 <= (float)local_res8) {
    local_res18 = fVar12;
  }
  fStackX_1c = local_res8._4_4_;
  if (fVar12 <= local_res8._4_4_) {
    fStackX_1c = fVar12;
  }
  if (local_res18 <= 0.0) {
    local_res18 = 0.0;
  }
  if (fStackX_1c <= 0.0) {
    fStackX_1c = 0.0;
  }
  local_res8._4_4_ = fStackX_1c;
  local_res8._0_4_ = local_res18;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->FrictionCoefficient,(TVector<float,2> *)&local_res8,&local_a8,local_res10,
             (TVector<float,2> *)&local_res20);
  if (pfVar2 != (float *)0x0) {
    FMemory::Free(pfVar2);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,CollisionThicknessName);
  if ((piVar7 != (int *)0x0) && (*piVar7 != -1)) {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_3,*piVar7,&param_3->LowValueArray);
  }
  this->CollisionThickness = fVar12;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,EnableSkinnedTriangleMeshCollisionsName);
  if ((piVar7 == (int *)0x0) || (*piVar7 == -1)) {
    bVar3 = true;
  }
  else {
    bVar3 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_3,*piVar7,&param_3->LowValueArray);
  }
  this->bEnableSkinnedTriangleMeshCollisions = bVar3;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,UseSelfCollisionSubstepsForSkinnedTriangleMeshesName);
  if ((piVar7 == (int *)0x0) || (*piVar7 == -1)) {
    bVar3 = true;
  }
  else {
    bVar3 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_3,*piVar7,&param_3->LowValueArray);
  }
  this->bUseSelfCollisionSubstepsForSkinnedTriangleMeshes = bVar3;
  *(undefined8 *)&this->Collisions = 0;
  *(undefined8 *)&(this->Collisions).field_0x8 = 0;
  *(undefined8 *)&(this->Collisions).field_0x20 = 0;
  *(undefined4 *)&(this->Collisions).field_0x28 = 0;
  *(undefined4 *)&(this->Collisions).field_0x2c = 0x80;
  *(undefined4 *)&(this->Collisions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Collisions).field_0x34 = 0;
  *(undefined8 *)&(this->Collisions).field_0x40 = 0;
  *(undefined4 *)&(this->Collisions).field_0x48 = 0;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,EnableSkinnedTriangleMeshCollisionsName);
  if (piVar7 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar7;
  }
  (this->EnableSkinnedTriangleMeshCollisionsIndex).Index = iVar5;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,UseSelfCollisionSubstepsForSkinnedTriangleMeshesName);
  if (piVar7 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar7;
  }
  (this->UseSelfCollisionSubstepsForSkinnedTriangleMeshesIndex).Index = iVar5;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,ClothCollisionThicknessName);
  if (piVar7 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar7;
  }
  (this->ClothCollisionThicknessIndex).Index = iVar5;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,FrictionCoefficientName);
  if (piVar7 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar7;
  }
  (this->FrictionCoefficientIndex).Index = iVar5;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,CollisionThicknessName);
  if (piVar7 == (int *)0x0) {
    (this->CollisionThicknessIndex).Index = -1;
    return this;
  }
  (this->CollisionThicknessIndex).Index = *piVar7;
  return this;
}

// Init @ 14dc020b0

void __thiscall
Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::Init
          (FPBDSkinnedTriangleMeshCollisionConstraints *this,FSolverParticlesRange *param_1,
          float param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  if (this->bEnableSkinnedTriangleMeshCollisions != false) {
    TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_58,
               (TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
                *)&this->Collisions);
    local_90 = 0;
    stack0xffffffffffffff48 = local_58._16_16_;
    auStack_c0._0_8_ = local_58._8_8_;
    local_a8 = local_38;
    pTStack_a0 = pTStack_30;
    uVar7 = local_58._24_8_ >> 0x20;
    local_98 = (TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
                *)&this->Collisions;
    if (local_58._28_4_ < *(int *)(local_58._16_8_ + 0x18)) {
      do {
        lVar8 = (longlong)(int)uVar7 * 0xb0 + *(longlong *)local_58._0_8_;
        lVar2 = *(longlong *)(lVar8 + 0x98);
        if (lVar2 != 0) {
          local_68 = **(undefined8 **)(lVar8 + 0xa0);
          iVar6 = *(int *)(*(undefined8 **)(lVar8 + 0xa0) + 1);
          if ((iVar6 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar1 = *(int *)(*(longlong *)(lVar8 + 0x98) + 0x248);
          uVar3 = *(undefined8 *)(*(longlong *)(lVar8 + 0x98) + 0x240);
          iStack_60 = iVar6;
          if ((iVar1 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(longlong *)(lVar8 + 0x28) = *(longlong *)(lVar8 + 0x98) + 0x20;
          local_78 = 0;
          uStack_70 = 0;
          *(undefined8 *)(lVar8 + 0x30) = uVar3;
          *(ulonglong *)(lVar8 + 0x38) = CONCAT44(uStack_7c,iVar1);
          *(longlong *)(lVar8 + 0x60) = lVar2 + 0x250;
          *(undefined8 *)(lVar8 + 0x50) = local_68;
          *(ulonglong *)(lVar8 + 0x58) = CONCAT44(uStack_5c,iStack_60);
          *(undefined8 *)(lVar8 + 0x40) = 0;
          *(ulonglong *)(lVar8 + 0x48) = (ulonglong)uStack_6c << 0x20;
          local_88 = uVar3;
          iStack_80 = iVar1;
          FPBDKinematicTriangleMeshCollisions::Init
                    ((FPBDKinematicTriangleMeshCollisions *)(lVar8 + 8),param_1,param_2);
        }
        uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
        uVar7 = (ulonglong)uStack_ac;
      } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
      if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
        uVar9 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
        if (uVar9 < 4) {
          iVar6 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar9) && (local_98->HashSize < iVar6)) || (iVar6 < local_98->HashSize)) {
          local_98->HashSize = iVar6;
          TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
          ::Rehash(local_98);
        }
      }
    }
  }
  return;
}

// SetProperties @ 14dc166d0

void __thiscall
Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::SetProperties
          (FPBDSkinnedTriangleMeshCollisionConstraints *this,FCollectionPropertyConstFacade *param_1
          ,TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
           *param_2)

{
  longlong lVar1;
  code *pcVar2;
  ECollectionPropertyFlags EVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar7;
  FPBDFlatWeightMap *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  TArrayView<unsigned_char_const_,int> *pTVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float local_resc;
  undefined8 local_res20;
  TVector<float,2> local_180;
  float local_178;
  float fStack_174;
  undefined8 local_170;
  float local_168;
  float fStack_164;
  TVector<float,2> local_160;
  TArrayView<float_const_,int> local_158;
  TArrayView<float_const_,int> local_148;
  longlong *local_138;
  undefined1 auStack_130 [16];
  uint uStack_120;
  uint uStack_11c;
  longlong local_118;
  TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
  *pTStack_110;
  TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
  *local_108;
  undefined2 local_100;
  undefined1 local_f8 [32];
  longlong local_d8;
  TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
  *pTStack_d0;
  FPBDFlatWeightMap local_c8;
  FPBDFlatWeightMap local_98 [2];
  
  iVar5 = (this->EnableSkinnedTriangleMeshCollisionsIndex).Index;
  if (iVar5 != -1) {
    EVar3 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar5,&param_1->FlagsArray);
    if (((EVar3 & Animatable) != None) &&
       (EVar3 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->EnableSkinnedTriangleMeshCollisionsIndex).Index,
                           &param_1->FlagsArray), (char)EVar3 < '\0')) {
      if (((this->EnableSkinnedTriangleMeshCollisionsIndex).Index == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnableSkinnedTriangleMeshCollisionsIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                             ,0x118,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                        (param_1,(this->EnableSkinnedTriangleMeshCollisionsIndex).Index,
                         &param_1->LowValueArray);
      this->bEnableSkinnedTriangleMeshCollisions = bVar4;
    }
  }
  pTVar11 = &param_1->FlagsArray;
  iVar5 = (this->UseSelfCollisionSubstepsForSkinnedTriangleMeshesIndex).Index;
  if (((iVar5 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar5,pTVar11), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->UseSelfCollisionSubstepsForSkinnedTriangleMeshesIndex).Index
                         ,pTVar11), (char)EVar3 < '\0')) {
    if (((this->UseSelfCollisionSubstepsForSkinnedTriangleMeshesIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UseSelfCollisionSubstepsForSkinnedTriangleMeshesIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                           ,0x119,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,(this->UseSelfCollisionSubstepsForSkinnedTriangleMeshesIndex).Index,
                       &param_1->LowValueArray);
    this->bUseSelfCollisionSubstepsForSkinnedTriangleMeshes = bVar4;
  }
  fVar14 = __real_3f800000;
  iVar5 = (this->ClothCollisionThicknessIndex).Index;
  if (((iVar5 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar5,pTVar11), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->ClothCollisionThicknessIndex).Index,pTVar11),
     (char)EVar3 < '\0')) {
    if (((this->ClothCollisionThicknessIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClothCollisionThicknessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                           ,0x11a,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (this->ClothCollisionThicknessIndex).Index;
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar5,&param_1->HighValueArray);
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar5,&param_1->LowValueArray);
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    local_res8 = fVar13;
    local_resc = fVar12;
    if (((this->ClothCollisionThicknessIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClothCollisionThicknessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                           ,0x11a,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar3 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->ClothCollisionThicknessIndex).Index,pTVar11);
    if ((EVar3 & StringDirty) == None) {
      *(float *)&(this->ClothCollisionThickness).MapView.OffsetRange = fVar13;
      *(float *)&(this->ClothCollisionThickness).MapView.OffsetRange.field_0x4 = fVar12 - fVar13;
    }
    else {
      if (((this->ClothCollisionThicknessIndex).Index == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ClothCollisionThicknessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                             ,0x11a,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->ClothCollisionThicknessIndex).Index,
                          &param_1->StringValueArray);
      iVar5 = this->NumParticles;
      local_180._0_4_ = 0;
      local_180._4_4_ = 0x3f800000;
      pTVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar6);
      if (pTVar7 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_158.DataPtr = (float *)0x0;
        local_158._8_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
      }
      else {
        local_158.DataPtr = *(float **)&pTVar7->field_0x10;
        local_158._8_8_ = *(undefined8 *)&pTVar7->field_0x18;
      }
      pFVar8 = FPBDFlatWeightMap::FPBDFlatWeightMap
                         (&local_c8,(TVector<float,2> *)&local_res8,&local_158,iVar5,&local_180);
      FPBDFlatWeightMap::operator=(&this->ClothCollisionThickness,pFVar8);
      if (local_c8.MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.MapValues.AllocatorInstance.Data);
      }
    }
  }
  iVar5 = (this->FrictionCoefficientIndex).Index;
  if (((iVar5 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar5,pTVar11), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->FrictionCoefficientIndex).Index,pTVar11), (char)EVar3 < '\0'
     )) {
    if (((this->FrictionCoefficientIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrictionCoefficientIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                           ,0x11b,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (this->FrictionCoefficientIndex).Index;
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar5,&param_1->HighValueArray);
    local_178 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_1,iVar5,&param_1->LowValueArray);
    local_170 = CONCAT44(fVar12,local_178);
    local_168 = local_178;
    if (fVar14 <= local_178) {
      local_168 = fVar14;
    }
    fStack_164 = fVar12;
    if (fVar14 <= fVar12) {
      fStack_164 = fVar14;
    }
    if (local_168 <= 0.0) {
      local_168 = 0.0;
    }
    if (fStack_164 <= 0.0) {
      fStack_164 = 0.0;
    }
    local_res20._4_4_ = fStack_164;
    local_res20._0_4_ = local_168;
    fStack_174 = fVar12;
    if (((this->FrictionCoefficientIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrictionCoefficientIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                           ,0x11b,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar3 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->FrictionCoefficientIndex).Index,pTVar11);
    if ((EVar3 & StringDirty) == None) {
      *(float *)&(this->FrictionCoefficient).MapView.OffsetRange = (float)local_res20;
      *(float *)&(this->FrictionCoefficient).MapView.OffsetRange.field_0x4 =
           local_res20._4_4_ - (float)local_res20;
    }
    else {
      if (((this->FrictionCoefficientIndex).Index == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FrictionCoefficientIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                             ,0x11b,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->FrictionCoefficientIndex).Index,&param_1->StringValueArray)
      ;
      iVar5 = this->NumParticles;
      local_160._0_4_ = 0;
      local_160._4_4_ = 0x3f800000;
      pTVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar6);
      if (pTVar7 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_148.DataPtr = (float *)0x0;
        local_148._8_8_ = (ulonglong)(uint)local_148._12_4_ << 0x20;
      }
      else {
        local_148.DataPtr = *(float **)&pTVar7->field_0x10;
        local_148._8_8_ = *(undefined8 *)&pTVar7->field_0x18;
      }
      pFVar8 = FPBDFlatWeightMap::FPBDFlatWeightMap
                         (local_98,(TVector<float,2> *)&local_res20,&local_148,iVar5,&local_160);
      FPBDFlatWeightMap::operator=(&this->FrictionCoefficient,pFVar8);
      if (local_98[0].MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98[0].MapValues.AllocatorInstance.Data);
      }
    }
  }
  iVar5 = (this->CollisionThicknessIndex).Index;
  if (((iVar5 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar5,pTVar11), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->CollisionThicknessIndex).Index,pTVar11), (char)EVar3 < '\0')
     ) {
    if (((this->CollisionThicknessIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CollisionThicknessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                           ,0x11c,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar3 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->CollisionThicknessIndex).Index,pTVar11);
    if ((char)EVar3 < '\0') {
      if (((this->CollisionThicknessIndex).Index == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CollisionThicknessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                             ,0x11c,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,(this->CollisionThicknessIndex).Index,&param_1->LowValueArray);
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      this->CollisionThickness = fVar14;
      TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_f8,
                 (TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
                  *)&this->Collisions);
      local_100 = 0;
      stack0xfffffffffffffed8 = local_f8._16_16_;
      local_138 = (longlong *)local_f8._0_8_;
      auStack_130._0_8_ = local_f8._8_8_;
      local_118 = local_d8;
      pTStack_110 = pTStack_d0;
      uVar9 = local_f8._24_8_ >> 0x20;
      local_108 = (TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
                   *)&this->Collisions;
      if (local_f8._28_4_ < *(int *)(local_f8._16_8_ + 0x18)) {
        do {
          *(float *)((longlong)(int)uVar9 * 0xb0 + 0x24 + *local_138) = this->CollisionThickness;
          uStack_120 = uStack_120 & ~auStack_130._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_130);
          uVar9 = (ulonglong)uStack_11c;
        } while ((int)uStack_11c < *(int *)(auStack_130._8_8_ + 0x18));
        if (((char)local_100 != '\0') && (local_100._1_1_ != '\0')) {
          uVar10 = *(int *)&(local_108->Elements).field_0x8 -
                   *(int *)&(local_108->Elements).field_0x34;
          if (uVar10 < 4) {
            iVar5 = 1;
          }
          else {
            uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
            lVar1 = 0x3f;
            if (uVar9 != 0) {
              for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            iVar5 = 1 << ((byte)lVar1 & 0x1f);
          }
          if (((0 < (int)uVar10) && (local_108->HashSize < iVar5)) || (iVar5 < local_108->HashSize))
          {
            local_108->HashSize = iVar5;
            TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
            ::Rehash(local_108);
          }
        }
      }
    }
  }
  return;
}

