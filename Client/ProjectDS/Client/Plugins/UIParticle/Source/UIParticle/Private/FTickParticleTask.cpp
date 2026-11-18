// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 1

// DoTask @ 14ac95d20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTickParticleTask::DoTask
          (FTickParticleTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  FDeprecateSlateVector2D FVar1;
  FEasyParticleStatePool *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FEasyParticleState *this_00;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  float local_90;
  float fStack_8c;
  TVector2<double>_u_0 local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  TVector2<float>_u_0 local_58;
  
  if (this->StatePool != (FEasyParticleStatePool *)0x0) {
    FVar1 = (this->AllottedGeometry).Size;
    local_90 = FVar1._0_4_;
    fStack_8c = FVar1._4_4_;
    local_68 = (this->AllottedGeometry).AccumulatedRenderTransform.M.M[0][0];
    fStack_64 = (this->AllottedGeometry).AccumulatedRenderTransform.M.M[0][1];
    fStack_60 = (this->AllottedGeometry).AccumulatedRenderTransform.M.M[1][0];
    fStack_5c = (this->AllottedGeometry).AccumulatedRenderTransform.M.M[1][1];
    local_78._s_0.X =
         (double)(fStack_8c * __real_3f000000 *
                  (this->AllottedGeometry).AccumulatedRenderTransform.M.M[1][0] +
                  local_90 * __real_3f000000 *
                  (this->AllottedGeometry).AccumulatedRenderTransform.M.M[0][0] +
                 (this->AllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.X);
    local_78._s_0.Y =
         (double)(local_90 * __real_3f000000 *
                  (this->AllottedGeometry).AccumulatedRenderTransform.M.M[0][1] +
                  fStack_8c * __real_3f000000 *
                  (this->AllottedGeometry).AccumulatedRenderTransform.M.M[1][1] +
                 (this->AllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y);
    local_58 = (this->AllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0;
    fVar15 = FGenericPlatformMath::Atan2(fStack_64,local_68);
    uVar6 = local_78._s_0.Y;
    uVar5 = local_78._s_0.X;
    iVar8 = this->Index * 100;
    for (iVar12 = iVar8 + 200; iVar12 < iVar8 + 300; iVar12 = iVar12 + 1) {
      pFVar2 = this->StatePool;
      if ((-1 < iVar12) && (iVar12 < pFVar2->TotalCount - pFVar2->FreeCount)) {
        iVar10 = (pFVar2->PoolList).ArrayNum;
        uVar11 = 0;
        if (0 < iVar10) {
          lVar13 = 0;
          iVar14 = iVar12;
          do {
            uVar9 = 0;
            if ((int)uVar11 < iVar10) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar3 = *(longlong **)((pFVar2->PoolList).AllocatorInstance.Data + lVar13);
            if (plVar3 != (longlong *)0x0) {
              if (iVar14 < (int)plVar3[1]) {
                if (iVar14 < 0) {
                  this_00 = (FEasyParticleState *)0x0;
                }
                else {
                  this_00 = (FEasyParticleState *)((longlong)iVar14 * 0x410 + *plVar3);
                }
                if (this_00 != (FEasyParticleState *)0x0) {
                  local_78._s_0.X = (double)uVar5;
                  local_78._s_0.Y = (double)uVar6;
                  FEasyParticleState::TickSelf
                            (this_00,this->DeltaTime,&this->AllottedGeometry,
                             (TVector2<double> *)&local_78._s_0,fVar15,this->WholeScale,
                             this->RootSpanTime);
                }
                break;
              }
              iVar14 = iVar14 - (int)plVar3[1];
            }
            iVar10 = (pFVar2->PoolList).ArrayNum;
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 8;
          } while ((int)uVar11 < iVar10);
        }
      }
    }
  }
  return;
}

