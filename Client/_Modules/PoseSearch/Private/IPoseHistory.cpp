// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// ~IPoseHistory @ 14a8ade90

void __thiscall UE::PoseSearch::IPoseHistory::~IPoseHistory(IPoseHistory *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IPoseHistory_PoseSearch_UE__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014a8adeba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// GetPoseIndicesHistory @ 14a8bc6c0

FPoseIndicesHistory * __thiscall
UE::PoseSearch::IPoseHistory::GetPoseIndicesHistory(IPoseHistory *this)

{
  return (FPoseIndicesHistory *)0x0;
}

// DebugDraw @ 14a8f0210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PoseSearch::IPoseHistory::DebugDraw
          (IPoseHistory *this,FAnimInstanceProxy *param_1,FColor param_2,float param_3,float param_4
          ,bool param_5)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FBoneContainer *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  UObject *pUVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  FColor_u_0 local_res18 [4];
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8 [4];
  int local_1b4;
  UObject *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  int iStack_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  longlong local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128 [2];
  undefined4 local_f4;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_res18[0] = param_2.field0_0x0;
  if (((param_1->RequiredBones).Object == (FBoneContainer *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (param_1->RequiredBones).Object;
  if ((((local_res18[0]._s_0.A != '\0') &&
       (bVar7 = FWeakObjectPtr::IsValid(&(pFVar5->Asset).WeakPtr), bVar7)) &&
      (pFVar5->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
     (0 < (pFVar5->BoneIndicesArray).ArrayNum)) {
    pUVar9 = FWeakObjectPtr::Get(&(pFVar5->AssetSkeleton).WeakPtr);
    local_1b0 = pUVar9;
    if ((pUVar9 == (UObject *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Skeleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                           ,0x1be,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
    ;
    local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
    ;
    local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_b8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_b8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20)
    ;
    local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_98._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
    ;
    local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    lVar10 = (**(code **)(*(longlong *)this + 0x40))(this);
    iVar12 = 0;
    local_1a8 = lVar10;
    if (*(int *)(lVar10 + 8) == *(int *)(lVar10 + 0x34)) {
      iVar3 = *(int *)&pUVar9[2].field_0x20;
      if (iVar3 != 0) {
        do {
          cVar8 = (**(code **)(*(longlong *)this + 8))(this,param_3,local_e8,pUVar9);
          if (cVar8 != '\0') {
            local_140._s_0.X = (double)local_c8._0_8_;
            local_140._s_0.Y = (double)local_c8._8_8_;
            local_140._s_0.Z = (double)local_b8._0_8_;
            FAnimInstanceProxy::AnimDrawDebugPoint
                      (param_1,(TVector<double> *)&local_140._s_0,param_4,
                       (FColor *)&local_res18[0]._s_0,false,0.0,SDPG_Foreground);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != iVar3);
      }
    }
    else {
      iVar3 = *(int *)(lVar10 + 0x28);
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar10 + 0x10);
      uStack_194 = 1;
      local_180 = 0;
      iStack_184 = 0;
      if (iVar3 != 0) {
        pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar10 + 0x20);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar10 + 0x20) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = pTVar1;
        }
        uVar15 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
        local_180 = 0;
        while (uVar15 == 0) {
          lVar11 = (longlong)iVar12;
          local_180 = local_180 + 0x20;
          iVar12 = iVar12 + 1;
          iStack_184 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a8f04ed;
          uVar15 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar11 * 4 + 4);
        }
        uStack_194 = -uVar15 & uVar15;
        uVar2 = (ulonglong)uStack_194 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_1b4 = (int)lVar11;
        iStack_184 = local_180 + -1 + local_1b4;
        if (iVar3 < iStack_184) {
          iStack_184 = iVar3;
        }
      }
LAB_14a8f04ed:
      iStack_178 = *(int *)(lVar10 + 8) - *(int *)(lVar10 + 0x34);
      uVar15 = *(uint *)(lVar10 + 0x28);
      uStack_188 = 0xffffffff;
      TStack_168._padding_ = CONCAT44(uStack_194,iVar12);
      uVar14 = uVar15 & 0xffffffe0;
      TStack_168.CurrentBitIndex = iStack_184;
      TStack_168.UnvisitedBitMask = 0xffffffff;
      uStack_17c = local_f4;
      TStack_168._28_4_ = local_f4;
      TStack_168.BaseBitIndex = local_180;
      uStack_148 = CONCAT44(uStack_174,iStack_178);
      iVar13 = (int)uVar15 >> 5;
      local_1a0 = lVar10;
      iStack_198 = iVar12;
      local_190 = pTVar1;
      local_170 = lVar10;
      TStack_168.Array = pTVar1;
      if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar9 = local_1b0;
      uVar4 = *(uint *)(lVar10 + 0x28);
      if (uVar15 != uVar4) {
        pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar10 + 0x20);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar10 + 0x20) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = pTVar1;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) &
                 *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
        while (uVar15 == 0) {
          lVar10 = (longlong)iVar13;
          uVar14 = uVar14 + 0x20;
          iVar13 = iVar13 + 1;
          uVar15 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14a8f0600;
          uVar15 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar10 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar15 = (int)lVar10 + -1 + uVar14;
        if ((int)uVar4 < (int)uVar15) {
          uVar15 = uVar4;
        }
      }
LAB_14a8f0600:
      while( true ) {
        lVar10 = local_170;
        if (*(int *)(local_170 + 8) - *(int *)(local_170 + 0x34) != (int)uStack_148) {
          `TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1b8);
        }
        if (((TStack_168.CurrentBitIndex == uVar15) && (TStack_168.Array == pTVar1)) &&
           (lVar10 == local_1a8)) break;
        cVar8 = (**(code **)(*(longlong *)this + 8))(this,param_3,local_e8,pUVar9);
        if (cVar8 != '\0') {
          local_128[0]._s_0.X = local_c8._0_8_;
          local_128[0]._s_0.Y = local_c8._8_8_;
          local_128[0]._s_0.Z = local_b8._0_8_;
          FAnimInstanceProxy::AnimDrawDebugPoint
                    (param_1,(TVector<double> *)&local_128[0]._s_0,param_4,
                     (FColor *)&local_res18[0]._s_0,false,0.0,SDPG_Foreground);
        }
        TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
      }
    }
  }
  return;
}

