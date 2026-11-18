// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 21

// operator+ @ 143eb2980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTribox * __thiscall
Chaos::Private::FTribox::operator+(FTribox *this,FTribox *__return_storage_ptr__,FTribox *param_1)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  bool local_20;
  undefined1 local_1f;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_20 = this->bIsValid;
  bVar3 = this->bHasDatas;
  lVar2 = 0x10;
  local_28 = (undefined1  [8])*(undefined8 *)(this->MaxDists + 0x10);
  local_68 = maxps(*(undefined1 (*) [16])param_1->MaxDists,*(undefined1 (*) [16])this->MaxDists);
  local_58 = maxps(*(undefined1 (*) [16])(param_1->MaxDists + 4),
                   *(undefined1 (*) [16])(this->MaxDists + 4));
  local_48 = maxps(*(undefined1 (*) [16])(param_1->MaxDists + 8),
                   *(undefined1 (*) [16])(this->MaxDists + 8));
  local_38 = maxps(*(undefined1 (*) [16])(param_1->MaxDists + 0xc),
                   *(undefined1 (*) [16])(this->MaxDists + 0xc));
  do {
    fVar1 = param_1->MaxDists[lVar2];
    if (param_1->MaxDists[lVar2] <= *(float *)(local_68 + lVar2 * 4)) {
      fVar1 = *(float *)(local_68 + lVar2 * 4);
    }
    *(float *)(local_68 + lVar2 * 4) = fVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 < 0x12);
  bVar3 = (bool)(bVar3 | param_1->bHasDatas);
  __return_storage_ptr__->MaxDists[0] = 0.0;
  __return_storage_ptr__->MaxDists[1] = 0.0;
  __return_storage_ptr__->MaxDists[2] = 0.0;
  __return_storage_ptr__->MaxDists[3] = 0.0;
  __return_storage_ptr__->MaxDists[4] = 0.0;
  __return_storage_ptr__->MaxDists[5] = 0.0;
  __return_storage_ptr__->MaxDists[6] = 0.0;
  __return_storage_ptr__->MaxDists[7] = 0.0;
  __return_storage_ptr__->MaxDists[8] = 0.0;
  __return_storage_ptr__->MaxDists[9] = 0.0;
  __return_storage_ptr__->MaxDists[10] = 0.0;
  __return_storage_ptr__->MaxDists[0xb] = 0.0;
  __return_storage_ptr__->MaxDists[0xc] = 0.0;
  __return_storage_ptr__->MaxDists[0xd] = 0.0;
  __return_storage_ptr__->MaxDists[0xe] = 0.0;
  __return_storage_ptr__->MaxDists[0xf] = 0.0;
  __return_storage_ptr__->MaxDists[0x10] = 0.0;
  __return_storage_ptr__->MaxDists[0x11] = 0.0;
  if (((FTribox *)(local_28 + 4) < __return_storage_ptr__) ||
     (__return_storage_ptr__->MaxDists + 0x11 < local_68)) {
    *(undefined8 *)__return_storage_ptr__->MaxDists = local_68._0_8_;
    *(undefined8 *)(__return_storage_ptr__->MaxDists + 2) = local_68._8_8_;
    *(undefined8 *)(__return_storage_ptr__->MaxDists + 4) = local_58._0_8_;
    *(undefined8 *)(__return_storage_ptr__->MaxDists + 6) = local_58._8_8_;
    *(undefined8 *)(__return_storage_ptr__->MaxDists + 8) = local_48._0_8_;
    *(undefined8 *)(__return_storage_ptr__->MaxDists + 10) = local_48._8_8_;
    *(undefined8 *)(__return_storage_ptr__->MaxDists + 0xc) = local_38._0_8_;
    *(undefined8 *)(__return_storage_ptr__->MaxDists + 0xe) = local_38._8_8_;
    *(undefined1 (*) [8])(__return_storage_ptr__->MaxDists + 0x10) = local_28;
  }
  else {
    local_1f = bVar3;
    memcpy(__return_storage_ptr__,local_68,0x48);
  }
  __return_storage_ptr__->bIsValid = local_20;
  __return_storage_ptr__->bHasDatas = bVar3;
  return __return_storage_ptr__;
}

// operator+= @ 143eb3c10

FTribox * __thiscall Chaos::Private::FTribox::operator+=(FTribox *this,FTribox *param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  if (((FTribox *)(param_1->MaxDists + 0x11) < this) ||
     (lVar5 = 0, (FTribox *)(this->MaxDists + 0x11) < param_1)) {
    auVar7 = maxps(*(undefined1 (*) [16])param_1->MaxDists,*(undefined1 (*) [16])this->MaxDists);
    *(undefined1 (*) [16])this->MaxDists = auVar7;
    auVar7 = maxps(*(undefined1 (*) [16])(param_1->MaxDists + 4),
                   *(undefined1 (*) [16])(this->MaxDists + 4));
    *(undefined1 (*) [16])(this->MaxDists + 4) = auVar7;
    auVar7 = maxps(*(undefined1 (*) [16])(param_1->MaxDists + 8),
                   *(undefined1 (*) [16])(this->MaxDists + 8));
    *(undefined1 (*) [16])(this->MaxDists + 8) = auVar7;
    auVar7 = maxps(*(undefined1 (*) [16])(param_1->MaxDists + 0xc),
                   *(undefined1 (*) [16])(this->MaxDists + 0xc));
    *(undefined1 (*) [16])(this->MaxDists + 0xc) = auVar7;
    lVar5 = 0x10;
  }
  lVar2 = (longlong)param_1 - (longlong)this;
  if (3 < 0x12 - lVar5) {
    lVar4 = lVar5 + 1;
    lVar3 = (0xeU - lVar5 >> 2) + 1;
    lVar5 = lVar5 + lVar3 * 4;
    pfVar1 = this->MaxDists + lVar4;
    do {
      fVar6 = *(float *)((longlong)pfVar1 + lVar2 + -4);
      if (fVar6 <= pfVar1[-1]) {
        fVar6 = pfVar1[-1];
      }
      pfVar1[-1] = fVar6;
      fVar6 = *pfVar1;
      if (*pfVar1 <= *(float *)((longlong)pfVar1 + lVar2)) {
        fVar6 = *(float *)((longlong)pfVar1 + lVar2);
      }
      *pfVar1 = fVar6;
      fVar6 = *(float *)((longlong)pfVar1 + lVar2 + 4);
      if (fVar6 <= pfVar1[1]) {
        fVar6 = pfVar1[1];
      }
      pfVar1[1] = fVar6;
      fVar6 = *(float *)((longlong)pfVar1 + lVar2 + 8);
      if (fVar6 <= pfVar1[2]) {
        fVar6 = pfVar1[2];
      }
      pfVar1[2] = fVar6;
      lVar3 = lVar3 + -1;
      pfVar1 = pfVar1 + 4;
    } while (lVar3 != 0);
  }
  if (lVar5 < 0x12) {
    lVar4 = 0x12 - lVar5;
    pfVar1 = this->MaxDists + lVar5;
    do {
      fVar6 = *(float *)(lVar2 + (longlong)pfVar1);
      if (*(float *)(lVar2 + (longlong)pfVar1) <= *pfVar1) {
        fVar6 = *pfVar1;
      }
      *pfVar1 = fVar6;
      lVar4 = lVar4 + -1;
      pfVar1 = pfVar1 + 1;
    } while (lVar4 != 0);
  }
  this->bHasDatas = (bool)(this->bHasDatas | param_1->bHasDatas);
  return this;
}

// AddConvex @ 143eb3e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FTribox::AddConvex(FTribox *this,FConvex *param_1,TRigidTransform<float,3> *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  TRigidTransform<float,3> *pTVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<Chaos::Private::FStat_STAT_AddConvexToTribox> FVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  FColor_u_0 local_res10 [2];
  TRigidTransform<float,3> *local_res18;
  FName local_res20;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  
  uVar14 = 0;
  FVar12 = StatPtr_STAT_AddConvexToTribox;
  local_res18 = param_2;
  if (StatPtr_STAT_AddConvexToTribox ==
      (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_AddConvexToTribox>)0x0) {
    pFVar11 = ::FName::FName(&local_d0,"STAT_AddConvexToTribox");
    FVar12 = (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_AddConvexToTribox>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddConvexToTribox,*pFVar11,
                        L"Collisions::AddConvex","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_d8 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((local_d8.ComparisonIndex.Value.Value != 0) || (local_d8.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = local_d8.ComparisonIndex.Value.Value;
        local_res20.Number = local_d8.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Tribox.cpp"
                   ,0x138);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_d8,CycleScopeStart);
      bVar5 = true;
      goto LAB_143eb3fe8;
    }
  }
  bVar5 = false;
  local_d8 = local_c8;
LAB_143eb3fe8:
  pTVar8 = local_res18;
  uVar7 = __xmm_80000000800000008000000080000000;
  if ((param_1 != (FConvex *)0x0) && (uVar16 = uVar14, 0 < (param_1->Vertices).ArrayNum)) {
    do {
      uVar13 = (uint)uVar14;
      uVar15 = ~uVar13 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar13 < (param_1->Vertices).ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar23 = *(float *)((param_1->Vertices).AllocatorInstance.Data + uVar16 + 8);
      uVar10 = 0;
      if ((int)uVar13 < (param_1->Vertices).ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar22 = *(float *)((param_1->Vertices).AllocatorInstance.Data + uVar16 + 4);
      uVar10 = 0;
      if ((int)uVar13 < (param_1->Vertices).ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar24 = *(float *)pTVar8;
      fVar17 = *(float *)&pTVar8->field_0x4;
      fVar2 = *(float *)&pTVar8->field_0x8;
      fVar3 = *(float *)&pTVar8->field_0xc;
      fVar21 = *(float *)((param_1->Vertices).AllocatorInstance.Data + uVar16) *
               *(float *)&pTVar8->field_0x20;
      fVar22 = fVar22 * *(float *)&pTVar8->field_0x24;
      fVar23 = fVar23 * *(float *)&pTVar8->field_0x28;
      fVar18 = fVar22 * fVar24 - fVar17 * fVar21;
      fVar19 = fVar23 * fVar17 - fVar2 * fVar22;
      fVar20 = fVar21 * fVar2 - fVar24 * fVar23;
      fVar19 = fVar19 + fVar19;
      fVar20 = fVar20 + fVar20;
      fVar18 = fVar18 + fVar18;
      fVar21 = fVar3 * fVar19 + fVar21 + (fVar18 * fVar17 - fVar20 * fVar2) +
               *(float *)&pTVar8->field_0x10;
      fVar22 = fVar3 * fVar20 + fVar22 + (fVar19 * fVar2 - fVar18 * fVar24) +
               *(float *)&pTVar8->field_0x14;
      fVar24 = fVar3 * fVar18 + fVar23 + (fVar20 * fVar24 - fVar19 * fVar17) +
               *(float *)&pTVar8->field_0x18;
      local_b8 = CONCAT44(fVar22,fVar21);
      fVar23 = this->MaxDists[0];
      if (this->MaxDists[0] <= fVar21) {
        fVar23 = fVar21;
      }
      fVar17 = (float)((uint)fVar21 ^ uVar7);
      if ((float)((uint)fVar21 ^ uVar7) <= this->MaxDists[1]) {
        fVar17 = this->MaxDists[1];
      }
      this->MaxDists[0] = fVar23;
      fVar23 = this->MaxDists[2];
      if (this->MaxDists[2] <= fVar22) {
        fVar23 = fVar22;
      }
      this->MaxDists[1] = fVar17;
      fVar17 = (float)((uint)fVar22 ^ uVar7);
      if ((float)((uint)fVar22 ^ uVar7) <= this->MaxDists[3]) {
        fVar17 = this->MaxDists[3];
      }
      this->MaxDists[2] = fVar23;
      fVar23 = this->MaxDists[4];
      if (this->MaxDists[4] <= fVar24) {
        fVar23 = fVar24;
      }
      this->MaxDists[3] = fVar17;
      fVar17 = (float)((uint)fVar24 ^ uVar7);
      if ((float)((uint)fVar24 ^ uVar7) <= this->MaxDists[5]) {
        fVar17 = this->MaxDists[5];
      }
      this->MaxDists[4] = fVar23;
      this->MaxDists[5] = fVar17;
      local_b0 = fVar24;
      local_ac = fVar21;
      local_a8 = fVar22;
      local_a4 = fVar24;
      BuildChamferDist(this,(TVector<float,3> *)&local_ac,1,2,6,7,8,9);
      local_a0 = fVar21;
      local_9c = fVar22;
      local_98 = fVar24;
      BuildChamferDist(this,(TVector<float,3> *)&local_a0,0,2,10,0xb,0xc,0xd);
      local_94 = fVar21;
      local_90 = fVar22;
      local_8c = fVar24;
      BuildChamferDist(this,(TVector<float,3> *)&local_94,0,1,0xe,0xf,0x10,0x11);
      uVar14 = (ulonglong)(uVar13 + 1);
      this->bHasDatas = true;
      uVar16 = uVar16 + 0xc;
    } while ((int)(uVar13 + 1) < (param_1->Vertices).ArrayNum);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(local_d8,CycleScopeEnd);
  }
  return;
}

// AddIntersection @ 143eb4640

void __thiscall
Chaos::Private::FTribox::AddIntersection
          (FTribox *this,int *param_1,int *param_2,TVector<float,3> *param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_5)

{
  uint uVar1;
  TVector<float,3> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar1 = *param_1;
  iVar5 = param_5->ArrayNum;
  uVar6 = 0;
  if ((int)uVar1 < param_4->ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x10;
  uVar1 = *param_2;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(pFVar7 + 8)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(*(longlong *)pFVar7 + (longlong)(int)uVar1 * 4) = iVar5;
  uVar1 = param_1[1];
  uVar6 = 0;
  if ((int)uVar1 < param_4->ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x10;
  uVar1 = param_2[1];
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(pFVar7 + 8)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(*(longlong *)pFVar7 + (longlong)(int)uVar1 * 4) = iVar5;
  uVar1 = param_1[2];
  uVar6 = 0;
  if ((int)uVar1 < param_4->ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x10;
  uVar1 = param_2[2];
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(pFVar7 + 8)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(*(longlong *)pFVar7 + (longlong)(int)uVar1 * 4) = iVar5;
  pTVar2 = (TVector<float,3> *)(param_5->AllocatorInstance).Data;
  if ((pTVar2 <= param_3) && (param_3 < pTVar2 + param_5->ArrayMax)) {
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
  iVar5 = param_5->ArrayNum;
  if (iVar5 == param_5->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar5 + 1;
  pFVar7 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar7 + (longlong)iVar5 * 0xc) = *(undefined8 *)param_3;
  *(undefined4 *)(pFVar7 + (longlong)iVar5 * 0xc + 8) = *(undefined4 *)&param_3->field_0x8;
  return;
}

// AddPoint @ 143eb4ee0

void __thiscall Chaos::Private::FTribox::AddPoint(FTribox *this,TVector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float local_48;
  float local_44;
  float local_40;
  
  uVar4 = __xmm_80000000800000008000000080000000;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)&param_1->field_0x4;
  fVar6 = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  if ((float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000) <= this->MaxDists[1]) {
    fVar6 = this->MaxDists[1];
  }
  fVar5 = fVar1;
  if (fVar1 <= this->MaxDists[0]) {
    fVar5 = this->MaxDists[0];
  }
  fVar3 = *(float *)&param_1->field_0x8;
  this->MaxDists[1] = fVar6;
  fVar6 = (float)((uint)fVar2 ^ uVar4);
  this->MaxDists[0] = fVar5;
  if (fVar6 <= this->MaxDists[3]) {
    fVar6 = this->MaxDists[3];
  }
  fVar5 = fVar2;
  if (fVar2 <= this->MaxDists[2]) {
    fVar5 = this->MaxDists[2];
  }
  this->MaxDists[3] = fVar6;
  fVar6 = (float)((uint)fVar3 ^ uVar4);
  if (fVar6 <= this->MaxDists[5]) {
    fVar6 = this->MaxDists[5];
  }
  this->MaxDists[2] = fVar5;
  fVar5 = fVar3;
  if (fVar3 <= this->MaxDists[4]) {
    fVar5 = this->MaxDists[4];
  }
  this->MaxDists[5] = fVar6;
  this->MaxDists[4] = fVar5;
  local_48 = fVar1;
  local_44 = fVar2;
  local_40 = fVar3;
  BuildChamferDist(this,(TVector<float,3> *)&local_48,1,2,6,7,8,9);
  local_48 = fVar1;
  local_44 = fVar2;
  local_40 = fVar3;
  BuildChamferDist(this,(TVector<float,3> *)&local_48,0,2,10,0xb,0xc,0xd);
  local_48 = fVar1;
  local_44 = fVar2;
  local_40 = fVar3;
  BuildChamferDist(this,(TVector<float,3> *)&local_48,0,1,0xe,0xf,0x10,0x11);
  this->bHasDatas = true;
  return;
}

// BuildChamferDist @ 143eb7db0

void __thiscall
Chaos::Private::FTribox::BuildChamferDist
          (FTribox *this,TVector<float,3> *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  lVar6 = (longlong)param_2;
  fVar1 = this->MaxDists[param_4];
  lVar5 = (longlong)param_3;
  if (2 < (uint)param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar7 = *(float *)(&param_1->field_0x0 + lVar6 * 4);
  if (2 < (uint)param_3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar7 = fVar7 + *(float *)(&param_1->field_0x0 + lVar5 * 4);
  if (fVar7 <= fVar1) {
    fVar7 = fVar1;
  }
  this->MaxDists[param_4] = fVar7;
  fVar1 = this->MaxDists[param_5];
  if (2 < (uint)param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = *(uint *)(&param_1->field_0x0 + lVar6 * 4);
  if (2 < (uint)param_3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar7 = (float)(uVar2 ^ __xmm_80000000800000008000000080000000) -
          *(float *)(&param_1->field_0x0 + lVar5 * 4);
  if (fVar7 <= fVar1) {
    fVar7 = fVar1;
  }
  this->MaxDists[param_5] = fVar7;
  fVar1 = this->MaxDists[param_6];
  if (2 < (uint)param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar7 = *(float *)(&param_1->field_0x0 + lVar6 * 4);
  if (2 < (uint)param_3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar7 = fVar7 - *(float *)(&param_1->field_0x0 + lVar5 * 4);
  if (fVar7 <= fVar1) {
    fVar7 = fVar1;
  }
  this->MaxDists[param_6] = fVar7;
  fVar1 = this->MaxDists[param_7];
  if (2 < (uint)param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar7 = *(float *)(&param_1->field_0x0 + lVar6 * 4);
  if (2 < (uint)param_3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar7 = *(float *)(&param_1->field_0x0 + lVar5 * 4) - fVar7;
  if (fVar7 <= fVar1) {
    fVar7 = fVar1;
  }
  this->MaxDists[param_7] = fVar7;
  return;
}

// BuildPrincipalDist @ 143eb8010

void __thiscall
Chaos::Private::FTribox::BuildPrincipalDist
          (FTribox *this,TVector<float,3> *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = this->MaxDists[param_3];
  if (2 < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (fVar4 <= *(float *)(&param_1->field_0x0 + (longlong)param_2 * 4)) {
    fVar4 = *(float *)(&param_1->field_0x0 + (longlong)param_2 * 4);
  }
  this->MaxDists[param_3] = fVar4;
  fVar4 = this->MaxDists[param_4];
  if (2 < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = (float)(*(uint *)(&param_1->field_0x0 + (longlong)param_2 * 4) ^
                 __xmm_80000000800000008000000080000000);
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  this->MaxDists[param_4] = fVar3;
  return;
}

// BuildTribox @ 143eb80f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall Chaos::Private::FTribox::BuildTribox(FTribox *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar4 = _UNK_15068962c;
  fVar3 = _UNK_150689628;
  fVar2 = _UNK_150689624;
  fVar1 = ___xmm_3f0000003f0000003f0000003f000000;
  if (this->bHasDatas != false) {
    fVar9 = this->MaxDists[0] + ___xmm_3f0000003f0000003f0000003f000000;
    fVar10 = this->MaxDists[1] + _UNK_150689624;
    fVar11 = this->MaxDists[2] + _UNK_150689628;
    fVar12 = this->MaxDists[3] + _UNK_15068962c;
    this->MaxDists[4] = this->MaxDists[4] + ___xmm_3f0000003f0000003f0000003f000000;
    fVar8 = _UNK_150b2885c;
    fVar7 = _UNK_150b28858;
    fVar6 = _UNK_150b28854;
    fVar5 = ___xmm_3f3504f33f3504f33f3504f33f3504f3;
    this->MaxDists[0] = fVar9;
    this->MaxDists[1] = fVar10;
    this->MaxDists[2] = fVar11;
    this->MaxDists[3] = fVar12;
    this->MaxDists[5] = this->MaxDists[5] + fVar1;
    this->MaxDists[6] = this->MaxDists[6] * fVar5 + fVar1;
    this->MaxDists[7] = this->MaxDists[7] * fVar6 + fVar2;
    this->MaxDists[8] = this->MaxDists[8] * fVar7 + fVar3;
    this->MaxDists[9] = this->MaxDists[9] * fVar8 + fVar4;
    this->MaxDists[10] = this->MaxDists[10] * fVar5 + fVar1;
    this->MaxDists[0xb] = this->MaxDists[0xb] * fVar6 + fVar2;
    this->MaxDists[0xc] = this->MaxDists[0xc] * fVar7 + fVar3;
    this->MaxDists[0xd] = this->MaxDists[0xd] * fVar8 + fVar4;
    this->MaxDists[0xe] = this->MaxDists[0xe] * fVar5 + fVar1;
    this->MaxDists[0xf] = this->MaxDists[0xf] * fVar6 + fVar2;
    this->MaxDists[0x10] = this->MaxDists[0x10] * fVar7 + fVar3;
    this->MaxDists[0x11] = this->MaxDists[0x11] * fVar8 + fVar4;
    return true;
  }
  return false;
}

// ComputeIntersection @ 143eb9600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Private::FTribox::ComputeIntersection
          (FTribox *this,int param_1,int param_2,int param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined1 auStackY_88 [32];
  float local_58;
  float local_54;
  float local_50;
  int local_48 [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_48[0] = ChamferIndices[param_1][0];
  local_48[1] = ChamferIndices[param_1][1];
  local_48[2] = ChamferIndices[param_1][2];
  local_48[param_3] = PrincipalIndices[param_1][param_2];
  iVar4 = param_3 + param_2 * 3;
  fVar1 = this->MaxDists[local_48[0]];
  fVar2 = this->MaxDists[local_48[1]];
  fVar3 = this->MaxDists[local_48[2]];
  local_54 = *(float *)&PrincipalMatrices[param_1][iVar4].field_0x14 * fVar2 +
             *(float *)&PrincipalMatrices[param_1][iVar4].field_0x4 * fVar1 +
             *(float *)&PrincipalMatrices[param_1][iVar4].field_0x24 * fVar3;
  local_58 = *(float *)&PrincipalMatrices[param_1][iVar4].field_0x10 * fVar2 +
             *(float *)(PrincipalMatrices[param_1] + iVar4) * fVar1 +
             *(float *)&PrincipalMatrices[param_1][iVar4].field_0x20 * fVar3;
  local_50 = *(float *)&PrincipalMatrices[param_1][iVar4].field_0x18 * fVar2 +
             *(float *)&PrincipalMatrices[param_1][iVar4].field_0x8 * fVar1 +
             *(float *)&PrincipalMatrices[param_1][iVar4].field_0x28 * fVar3;
  AddIntersection(this,local_48,PrincipalOrder[param_1][iVar4],(TVector<float,3> *)&local_58,param_4
                  ,param_5);
  return;
}

// ComputeVolume @ 143eba120

float __thiscall Chaos::Private::FTribox::ComputeVolume(FTribox *this)

{
  return (this->MaxDists[3] + this->MaxDists[2]) * (this->MaxDists[1] + this->MaxDists[0]) *
         (this->MaxDists[5] + this->MaxDists[4]);
}

// CreateConvexFromTopology @ 143eba300

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::Private::FTribox::CreateConvexFromTopology
          (FTribox *this,TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3)

{
  FConvex *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *in_stack_00000028;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  TVector<float,3> local_bc;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  
  local_c8 = this->MaxDists[0];
  local_c0 = this->MaxDists[4];
  local_c4 = this->MaxDists[2];
  fVar2 = local_c4 + this->MaxDists[3];
  fVar3 = local_c8 + this->MaxDists[1];
  fVar4 = local_c0 + this->MaxDists[5];
  local_bc._0_4_ = (uint)this->MaxDists[1] ^ __xmm_80000000800000008000000080000000;
  local_bc._4_4_ = (uint)this->MaxDists[3] ^ __xmm_80000000800000008000000080000000;
  local_bc._8_4_ = (uint)this->MaxDists[5] ^ __xmm_80000000800000008000000080000000;
  pFVar1 = ::operator_new(0xb0);
  if (pFVar1 == (FConvex *)0x0) {
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_a8 = UE::Math::TQuat<double>::Identity.X;
    dStack_a0 = UE::Math::TQuat<double>::Identity.Y;
    local_d8 = (fVar4 * fVar4 + fVar2 * fVar2) * __real_3daaaaab;
    local_d4 = (fVar3 * fVar3 + fVar4 * fVar4) * __real_3daaaaab;
    local_d0 = (fVar3 * fVar3 + fVar2 * fVar2) * __real_3daaaaab;
    local_98 = UE::Math::TQuat<double>::Identity.Z;
    dStack_90 = UE::Math::TQuat<double>::Identity.W;
    pFVar1 = FConvex::FConvex(pFVar1,(TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_>
                                      *)param_2,
                              (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)param_3,in_stack_00000028,&local_bc,(TVector<float,3> *)&local_c8,
                              fVar2 * fVar3 * fVar4,(TVector<float,3> *)&local_d8,
                              (TRotation<double,3> *)&local_a8,true);
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)pFVar1;
    if (pFVar1 != (FConvex *)0x0) {
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
      UNLOCK();
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// GetBounds @ 143ec0710

TAABB<double,3> * __thiscall
Chaos::Private::FTribox::GetBounds(FTribox *this,TAABB<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)((uint)this->MaxDists[3] ^ __xmm_80000000800000008000000080000000);
  fVar1 = this->MaxDists[0];
  fVar2 = this->MaxDists[2];
  fVar3 = this->MaxDists[4];
  fVar5 = (float)((uint)this->MaxDists[5] ^ __xmm_80000000800000008000000080000000);
  *(double *)&__return_storage_ptr__->MMin =
       (double)(float)((uint)this->MaxDists[1] ^ __xmm_80000000800000008000000080000000);
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = (double)fVar4;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = (double)fVar5;
  *(double *)&__return_storage_ptr__->MMax = (double)fVar1;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = (double)fVar2;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = (double)fVar3;
  return __return_storage_ptr__;
}

// GetCenter @ 143ec07e0

TVector<float,3> * __thiscall
Chaos::Private::FTribox::GetCenter(FTribox *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = __real_3f000000;
  fVar4 = (this->MaxDists[4] - this->MaxDists[5]) * __real_3f000000;
  *(float *)__return_storage_ptr__ = (this->MaxDists[0] - this->MaxDists[1]) * __real_3f000000;
  fVar1 = this->MaxDists[2];
  fVar2 = this->MaxDists[3];
  *(float *)&__return_storage_ptr__->field_0x8 = fVar4;
  *(float *)&__return_storage_ptr__->field_0x4 = (fVar1 - fVar2) * fVar3;
  return __return_storage_ptr__;
}

// GetClosestPlane @ 143ec0830

float __thiscall
Chaos::Private::FTribox::GetClosestPlane
          (FTribox *this,TVector<float,3> *param_1,int *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)param_1 - this->MaxDists[0];
  fVar3 = __real_ff7fffff;
  if (__real_ff7fffff < fVar2) {
    *param_2 = 0;
    *param_3 = this->MaxDists[0];
    fVar3 = fVar2;
  }
  uVar1 = __xmm_80000000800000008000000080000000;
  fVar2 = (float)(*(uint *)param_1 ^ __xmm_80000000800000008000000080000000) - this->MaxDists[1];
  if (fVar3 < fVar2) {
    *param_2 = 0;
    *param_3 = (float)((uint)this->MaxDists[1] ^ uVar1);
    fVar3 = fVar2;
  }
  fVar2 = *(float *)&param_1->field_0x4 - this->MaxDists[2];
  if (fVar3 < fVar2) {
    *param_2 = 2;
    *param_3 = this->MaxDists[2];
    fVar3 = fVar2;
  }
  fVar2 = (float)(*(uint *)&param_1->field_0x4 ^ uVar1) - this->MaxDists[3];
  if (fVar3 < fVar2) {
    *param_2 = 2;
    *param_3 = (float)((uint)this->MaxDists[3] ^ uVar1);
    fVar3 = fVar2;
  }
  fVar2 = *(float *)&param_1->field_0x8 - this->MaxDists[4];
  if (fVar3 < fVar2) {
    *param_2 = 4;
    *param_3 = this->MaxDists[4];
    fVar3 = fVar2;
  }
  fVar2 = (float)(*(uint *)&param_1->field_0x8 ^ uVar1) - this->MaxDists[5];
  if (fVar3 < fVar2) {
    *param_2 = 4;
    *param_3 = (float)((uint)this->MaxDists[5] ^ uVar1);
    return fVar2;
  }
  return fVar3;
}

// GetThickestSlab @ 143ec3860

int __thiscall Chaos::Private::FTribox::GetThickestSlab(FTribox *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = -1;
  fVar5 = 0.0;
  iVar3 = 0;
  do {
    fVar4 = this->MaxDists[1] + this->MaxDists[0];
    iVar1 = iVar3;
    if (fVar4 <= fVar5) {
      iVar1 = iVar2;
      fVar4 = fVar5;
    }
    fVar5 = fVar4;
    iVar2 = iVar1;
    iVar3 = iVar3 + 2;
    this = (FTribox *)(this->MaxDists + 2);
  } while (iVar3 < 6);
  return iVar2;
}

// IsTriboxOverlapping @ 143ec4a50

bool __thiscall Chaos::Private::FTribox::IsTriboxOverlapping(FTribox *this,FTribox *param_1)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  
  pfVar2 = this->MaxDists + 1;
  lVar3 = 0;
  while ((fVar4 = (float)(*(uint *)(((longlong)param_1 - (longlong)this) + (longlong)pfVar2) ^
                         __xmm_80000000800000008000000080000000),
         fVar4 < ((FTribox *)(pfVar2 + -1))->MaxDists[0] ||
         fVar4 == ((FTribox *)(pfVar2 + -1))->MaxDists[0] &&
         (pfVar1 = (float *)(((longlong)param_1 - (longlong)this) + -4 + (longlong)pfVar2),
         (float)((uint)*pfVar2 ^ __xmm_80000000800000008000000080000000) < *pfVar1 ||
         (float)((uint)*pfVar2 ^ __xmm_80000000800000008000000080000000) == *pfVar1))) {
    lVar3 = lVar3 + 2;
    pfVar2 = pfVar2 + 2;
    if (0x11 < lVar3) {
      return true;
    }
  }
  return false;
}

// MakeConvex @ 143ec55a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<Chaos::FImplicitObject> __thiscall Chaos::Private::FTribox::MakeConvex(FTribox *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<Chaos::Private::FStat_STAT_MakeTriboxConvex> FVar20;
  TRefCountPtr<Chaos::FImplicitObject> TVar21;
  FConvex *this_00;
  ulonglong uVar22;
  longlong lVar23;
  FImplicitObject *in_RDX;
  uint uVar24;
  FName FVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  TArray<int,TSizedDefaultAllocator<32>_> *_Dst;
  TVector<float,3> *pTVar34;
  float *pfVar35;
  FTribox *pFVar36;
  longlong lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  FColor_u_0 local_res20 [2];
  undefined4 local_1b8 [2];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_1a0;
  ForAnyElementType local_190;
  int local_188;
  int iStack_184;
  ForAnyElementType local_180;
  undefined8 local_178;
  int local_170 [2];
  longlong local_168;
  FName local_160;
  uint local_158;
  FName local_150;
  FName local_148;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float local_104;
  float fStack_100;
  FColor_u_0 local_fc;
  FName local_f8 [23];
  
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178 = 0;
  FVar20 = StatPtr_STAT_MakeTriboxConvex;
  if (StatPtr_STAT_MakeTriboxConvex ==
      (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_MakeTriboxConvex>)0x0) {
    pFVar19 = ::FName::FName(local_f8,"STAT_MakeTriboxConvex");
    FVar20 = (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_MakeTriboxConvex>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MakeTriboxConvex,*pFVar19,
                        L"Collisions::MakeConvex","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar20;
  bVar7 = false;
  bVar6 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  bVar15 = false;
  bVar14 = false;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_143ec576e:
    bVar7 = bVar15;
    bVar6 = bVar14;
    bVar14 = false;
    local_160 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_150.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_150.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_150,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Tribox.cpp"
                   ,0x1a4);
        bVar7 = true;
        bVar6 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ec576e;
    local_160 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar14 = true;
  }
  if (local_1b0.ArrayNum < 0x12) {
    iVar27 = 0x12 - local_1b0.ArrayNum;
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar27,&local_1b0.AllocatorInstance,&local_1b0.ArrayNum,
                        &local_1b0.ArrayMax);
    memset(local_1b0.AllocatorInstance.Data + (longlong)iVar16 * 0x10,0,(longlong)iVar27 << 4);
  }
  else if (0x12 < local_1b0.ArrayNum) {
    iVar16 = local_1b0.ArrayNum + -0x12;
    if (iVar16 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar15) {
        pcVar5 = (code *)swi(3);
        TVar21.Reference = (FImplicitObject *)(*pcVar5)();
        return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
      }
    }
    else if (iVar16 == 0) goto LAB_143ec5887;
    _Dst = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_1b0.AllocatorInstance.Data + 0x120);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(_Dst,iVar16);
    iVar27 = (local_1b0.ArrayNum - iVar16) + -0x12;
    if (iVar27 != 0) {
      memmove(_Dst,_Dst + iVar16,(longlong)iVar27 << 4);
    }
    iVar16 = local_1b0.ArrayNum - iVar16;
    local_1b0.ArrayNum = iVar16;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_1b0.AllocatorInstance,iVar16,&local_1b0.ArrayMax);
  }
LAB_143ec5887:
  uVar32 = 0;
  if (local_1a0.ArrayMax < 0x20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x20,&local_1a0.AllocatorInstance,local_1a0.ArrayNum,&local_1a0.ArrayMax);
  }
  uVar22 = (ulonglong)(int)local_178;
  if ((int)local_178 < 0x12) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0x12 - (int)local_178,&local_180,(int *)&local_178,
               (int *)((longlong)&local_178 + 4));
  }
  else {
    if ((int)local_178 < 0x13) goto LAB_143ec5995;
    iVar16 = (int)local_178 + -0x12;
    if (iVar16 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar15) {
        pcVar5 = (code *)swi(3);
        TVar21.Reference = (FImplicitObject *)(*pcVar5)();
        return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
      }
    }
    else if (iVar16 == 0) goto LAB_143ec5995;
    iVar17 = ((int)local_178 - iVar16) + -0x12;
    iVar27 = (int)local_178;
    if (iVar17 != 0) {
      memmove(local_180.Data + 0x1b0,local_180.Data + 0x1b0 + (longlong)iVar16 * 0x18,
              (longlong)iVar17 * 0x18);
      iVar27 = (int)local_178;
    }
    local_178 = CONCAT44(local_178._4_4_,iVar27 - iVar16);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,&local_180,iVar27 - iVar16,(int *)((longlong)&local_178 + 4));
  }
  uVar22 = local_178 & 0xffffffff;
LAB_143ec5995:
  local_168 = 0;
  pTVar34 = PlanesDirs;
  uVar33 = uVar32;
  pFVar36 = this;
  while( true ) {
    lVar26 = local_168;
    fStack_120 = pFVar36->MaxDists[0];
    uStack_114 = *(undefined4 *)&pTVar34->field_0x8;
    local_128 = fStack_120 * *(float *)pTVar34;
    fStack_124 = fStack_120 * *(float *)&pTVar34->field_0x4;
    fStack_120 = fStack_120 * *(float *)&pTVar34->field_0x8;
    uStack_11c = (undefined4)*(undefined8 *)pTVar34;
    uStack_118 = (undefined4)((ulonglong)*(undefined8 *)pTVar34 >> 0x20);
    iVar16 = (int)uVar32;
    if (((int)uVar22 <= iVar16) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar5)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    *(ulonglong *)(local_180.Data + uVar33) = CONCAT44(fStack_124,local_128);
    *(ulonglong *)(local_180.Data + uVar33 + 8) = CONCAT44(uStack_11c,fStack_120);
    *(ulonglong *)(local_180.Data + uVar33 + 0x10) = CONCAT44(uStack_114,uStack_118);
    if ((local_1b0.ArrayNum <= iVar16) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar5)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    pFVar29 = local_1b0.AllocatorInstance.Data + lVar26;
    local_1b8[0] = 0xffffffff;
    pFVar30 = pFVar29 + 0xc;
    iVar27 = *(int *)pFVar30;
    *(undefined4 *)(pFVar29 + 8) = 0;
    if (iVar27 != 8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,8,(ForAnyElementType *)pFVar29,0,(int *)pFVar30);
      iVar27 = *(int *)pFVar30;
    }
                    /* WARNING: Load size is inaccurate */
    if (((*pFVar29 <= (FScriptContainerElement *)local_1b8) &&
        ((FScriptContainerElement *)local_1b8 < *pFVar29 + (longlong)iVar27 * 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar5)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    iVar27 = *(int *)(pFVar29 + 8);
    if (iVar27 == *(int *)pFVar30) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar29,(int *)pFVar30);
    }
    *(int *)(pFVar29 + 8) = iVar27 + 1;
                    /* WARNING: Load size is inaccurate */
    *(undefined4 *)(*pFVar29 + (longlong)iVar27 * 4) = local_1b8[0];
                    /* WARNING: Load size is inaccurate */
    if (((*pFVar29 <= (FScriptContainerElement *)local_1b8) &&
        ((FScriptContainerElement *)local_1b8 < *pFVar29 + (longlong)*(int *)pFVar30 * 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar5)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    iVar27 = *(int *)(pFVar29 + 8);
    if (iVar27 == *(int *)pFVar30) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar29,(int *)pFVar30);
    }
    *(int *)(pFVar29 + 8) = iVar27 + 1;
                    /* WARNING: Load size is inaccurate */
    *(undefined4 *)(*pFVar29 + (longlong)iVar27 * 4) = local_1b8[0];
                    /* WARNING: Load size is inaccurate */
    if (((*pFVar29 <= (FScriptContainerElement *)local_1b8) &&
        ((FScriptContainerElement *)local_1b8 < *pFVar29 + (longlong)*(int *)pFVar30 * 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar5)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    iVar27 = *(int *)(pFVar29 + 8);
    if (iVar27 == *(int *)pFVar30) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar29,(int *)pFVar30);
    }
    *(int *)(pFVar29 + 8) = iVar27 + 1;
                    /* WARNING: Load size is inaccurate */
    *(undefined4 *)(*pFVar29 + (longlong)iVar27 * 4) = local_1b8[0];
                    /* WARNING: Load size is inaccurate */
    if (((*pFVar29 <= (FScriptContainerElement *)local_1b8) &&
        ((FScriptContainerElement *)local_1b8 < *pFVar29 + (longlong)*(int *)pFVar30 * 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar5)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    iVar27 = *(int *)(pFVar29 + 8);
    if (iVar27 == *(int *)pFVar30) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar29,(int *)pFVar30);
    }
    *(int *)(pFVar29 + 8) = iVar27 + 1;
                    /* WARNING: Load size is inaccurate */
    *(undefined4 *)(*pFVar29 + (longlong)iVar27 * 4) = local_1b8[0];
                    /* WARNING: Load size is inaccurate */
    if (((*pFVar29 <= (FScriptContainerElement *)local_1b8) &&
        ((FScriptContainerElement *)local_1b8 < *pFVar29 + (longlong)*(int *)pFVar30 * 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar5)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    iVar27 = *(int *)(pFVar29 + 8);
    if (iVar27 == *(int *)pFVar30) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar29,(int *)pFVar30);
    }
    *(int *)(pFVar29 + 8) = iVar27 + 1;
                    /* WARNING: Load size is inaccurate */
    *(undefined4 *)(*pFVar29 + (longlong)iVar27 * 4) = local_1b8[0];
                    /* WARNING: Load size is inaccurate */
    if (((*pFVar29 <= (FScriptContainerElement *)local_1b8) &&
        ((FScriptContainerElement *)local_1b8 < *pFVar29 + (longlong)*(int *)pFVar30 * 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar5)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    iVar27 = *(int *)(pFVar29 + 8);
    if (iVar27 == *(int *)pFVar30) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar29,(int *)pFVar30);
    }
    *(int *)(pFVar29 + 8) = iVar27 + 1;
                    /* WARNING: Load size is inaccurate */
    *(undefined4 *)(*pFVar29 + (longlong)iVar27 * 4) = local_1b8[0];
                    /* WARNING: Load size is inaccurate */
    if (((*pFVar29 <= (FScriptContainerElement *)local_1b8) &&
        ((FScriptContainerElement *)local_1b8 < *pFVar29 + (longlong)*(int *)pFVar30 * 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar5)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    iVar27 = *(int *)(pFVar29 + 8);
    if (iVar27 == *(int *)pFVar30) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar29,(int *)pFVar30);
    }
    *(int *)(pFVar29 + 8) = iVar27 + 1;
                    /* WARNING: Load size is inaccurate */
    *(undefined4 *)(*pFVar29 + (longlong)iVar27 * 4) = local_1b8[0];
                    /* WARNING: Load size is inaccurate */
    if (((*pFVar29 <= (FScriptContainerElement *)local_1b8) &&
        ((FScriptContainerElement *)local_1b8 < *pFVar29 + (longlong)*(int *)pFVar30 * 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      TVar21.Reference = (FImplicitObject *)(*pcVar5)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
    }
    iVar27 = *(int *)(pFVar29 + 8);
    if (iVar27 == *(int *)pFVar30) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar29,(int *)pFVar30);
    }
    FVar25 = local_160;
    *(int *)(pFVar29 + 8) = iVar27 + 1;
    uVar32 = (ulonglong)(iVar16 + 1U);
                    /* WARNING: Load size is inaccurate */
    pFVar36 = (FTribox *)(pFVar36->MaxDists + 1);
    local_168 = local_168 + 0x10;
    pTVar34 = pTVar34 + 1;
    uVar33 = uVar33 + 0x18;
    *(undefined4 *)(*pFVar29 + (longlong)iVar27 * 4) = local_1b8[0];
    if (0x11 < (int)(iVar16 + 1U)) break;
    uVar22 = local_178 & 0xffffffff;
  }
  pfVar35 = (float *)&ChamferMatrices[0].field_0x18;
  uVar31 = 0;
  lVar26 = 0;
  uVar28 = uVar31;
  do {
    fVar38 = this->MaxDists[*(int *)((longlong)ChamferIndices[0] + lVar26)];
    iVar16 = *(int *)((longlong)PrincipalIndices[0] + lVar26);
    fVar1 = this->MaxDists[*(int *)((longlong)ChamferIndices[0] + lVar26 + 4)];
    fVar2 = this->MaxDists[*(int *)((longlong)ChamferIndices[0] + lVar26 + 8)];
    local_130 = pfVar35[-4] * fVar38 + *pfVar35 * fVar1 + pfVar35[4] * fVar2;
    local_134 = pfVar35[-1] * fVar1 + pfVar35[-5] * fVar38 + pfVar35[3] * fVar2;
    local_138 = pfVar35[-2] * fVar1 + pfVar35[-6] * fVar38 + pfVar35[2] * fVar2;
    fVar38 = local_134 * *(float *)&PlanesDirs[iVar16].field_0x4 +
             local_138 * *(float *)(PlanesDirs + iVar16) +
             local_130 * *(float *)&PlanesDirs[iVar16].field_0x8;
    if (fVar38 < this->MaxDists[iVar16] || fVar38 == this->MaxDists[iVar16]) {
      iVar16 = *(int *)((longlong)PrincipalIndices[0] + lVar26 + 4);
      fVar38 = local_134 * *(float *)&PlanesDirs[iVar16].field_0x4 +
               local_138 * *(float *)(PlanesDirs + iVar16) +
               local_130 * *(float *)&PlanesDirs[iVar16].field_0x8;
      if (this->MaxDists[iVar16] <= fVar38 && fVar38 != this->MaxDists[iVar16]) {
        ComputeIntersection(this,uVar28,1,0,&local_1b0,&local_1a0);
        ComputeIntersection(this,uVar28,1,2,&local_1b0,&local_1a0);
        iVar27 = 0;
        iVar16 = 0;
        goto LAB_143ec61b2;
      }
      iVar16 = *(int *)((longlong)PrincipalIndices[0] + lVar26 + 8);
      fVar38 = local_134 * *(float *)&PlanesDirs[iVar16].field_0x4 +
               local_138 * *(float *)(PlanesDirs + iVar16) +
               local_130 * *(float *)&PlanesDirs[iVar16].field_0x8;
      if (fVar38 < this->MaxDists[iVar16] || fVar38 == this->MaxDists[iVar16]) {
        ComputeIntersection(this,uVar28,0,0,&local_1b0,&local_1a0);
        ComputeIntersection(this,uVar28,1,1,&local_1b0,&local_1a0);
        ComputeIntersection(this,uVar28,2,2,&local_1b0,&local_1a0);
        AddIntersection(this,(int *)((longlong)ChamferIndices[0] + lVar26),
                        (int *)((longlong)ChamferOrder[0] + lVar26),(TVector<float,3> *)&local_138,
                        &local_1b0,&local_1a0);
      }
      else {
        ComputeIntersection(this,uVar28,2,0,&local_1b0,&local_1a0);
        ComputeIntersection(this,uVar28,2,1,&local_1b0,&local_1a0);
        ComputeIntersection(this,uVar28,0,0,&local_1b0,&local_1a0);
        ComputeIntersection(this,uVar28,1,1,&local_1b0,&local_1a0);
      }
    }
    else {
      ComputeIntersection(this,uVar28,0,1,&local_1b0,&local_1a0);
      ComputeIntersection(this,uVar28,0,2,&local_1b0,&local_1a0);
      iVar27 = 1;
      iVar16 = 1;
LAB_143ec61b2:
      ComputeIntersection(this,uVar28,iVar16,iVar27,&local_1b0,&local_1a0);
      ComputeIntersection(this,uVar28,2,2,&local_1b0,&local_1a0);
    }
    uVar28 = uVar28 + 1;
    lVar26 = lVar26 + 0xc;
    pfVar35 = pfVar35 + 0x10;
    if (7 < (int)uVar28) {
      local_190.Data = (FScriptContainerElement *)0x0;
      local_188 = 0;
      iStack_184 = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,8,&local_190,0,&iStack_184);
      if (0 < local_1b0.ArrayNum) {
        local_168 = 0;
        lVar26 = 0;
        do {
          lVar23 = local_168;
          local_188 = 0;
          if (iStack_184 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_190,0,&iStack_184);
          }
          uVar24 = ~uVar31 >> 0x1f;
          uVar28 = 0;
          if ((int)uVar31 < local_1b0.ArrayNum) {
            uVar28 = uVar24;
          }
          if ((uVar28 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            TVar21.Reference = (FImplicitObject *)(*pcVar5)();
            return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
          }
          uVar28 = *(int *)(local_1b0.AllocatorInstance.Data + lVar26 + 8) - 1;
          if (-1 < (int)uVar28) {
            lVar37 = (longlong)(int)uVar28 * 4;
            do {
              uVar18 = 0;
              if ((int)uVar31 < local_1b0.ArrayNum) {
                uVar18 = uVar24;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                TVar21.Reference = (FImplicitObject *)(*pcVar5)();
                return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
              }
              FVar13.Data = local_1b0.AllocatorInstance.Data;
              uVar18 = 0;
              if ((int)uVar28 < *(int *)(local_1b0.AllocatorInstance.Data + lVar26 + 8)) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                TVar21.Reference = (FImplicitObject *)(*pcVar5)();
                return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
              }
              local_170[0] = *(int *)(lVar37 + *(longlong *)(FVar13.Data + lVar26));
              if (local_170[0] != -1) {
                if (((local_190.Data <= (FScriptContainerElement *)local_170) &&
                    ((FScriptContainerElement *)local_170 <
                     local_190.Data + (longlong)iStack_184 * 4)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  TVar21.Reference = (FImplicitObject *)(*pcVar5)();
                  return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
                }
                if (local_188 == iStack_184) {
                  local_188 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_190,&iStack_184);
                }
                lVar23 = (longlong)local_188;
                local_188 = local_188 + 1;
                *(int *)(local_190.Data + lVar23 * 4) = local_170[0];
              }
              lVar37 = lVar37 + -4;
              uVar28 = uVar28 - 1;
              lVar23 = local_168;
            } while (-1 < (int)uVar28);
          }
          uVar28 = 0;
          if ((int)uVar31 < local_1b0.ArrayNum) {
            uVar28 = uVar24;
          }
          if ((uVar28 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            TVar21.Reference = (FImplicitObject *)(*pcVar5)();
            return (TRefCountPtr<Chaos::FImplicitObject>)TVar21.Reference;
          }
          iVar16 = local_188;
          FVar13.Data = local_190.Data;
          pFVar30 = local_1b0.AllocatorInstance.Data + lVar26;
          if (pFVar30 != (FScriptContainerElement *)&local_190) {
            lVar37 = (longlong)local_188;
            pFVar29 = pFVar30 + 0xc;
            *(int *)(pFVar30 + 8) = local_188;
            if ((local_188 == 0) && (*(int *)pFVar29 == 0)) {
              *(int *)pFVar29 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_188,*(int *)pFVar29,(ForAnyElementType *)pFVar30,local_188,
                         (int *)pFVar29);
              if (iVar16 != 0) {
                    /* WARNING: Load size is inaccurate */
                memcpy(*pFVar30,FVar13.Data,lVar37 << 2);
              }
            }
          }
          local_168 = lVar23 + 1;
          uVar31 = uVar31 + 1;
          lVar26 = lVar26 + 0x10;
          FVar25 = local_160;
        } while ((int)uVar31 < local_1b0.ArrayNum);
      }
      if (local_190.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data);
      }
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar14) {
        FThreadStats::AddMessage(FVar25,CycleScopeEnd);
      }
      fVar38 = this->MaxDists[0];
      fVar1 = this->MaxDists[5];
      fVar2 = this->MaxDists[3];
      fVar40 = fVar38 + this->MaxDists[1];
      fVar3 = this->MaxDists[2];
      local_res20[0] = *(FColor_u_0 *)(this->MaxDists + 4);
      fVar39 = fVar3 + fVar2;
      fVar41 = (float)local_res20[0] + fVar1;
      local_168 = CONCAT44(local_168._4_4_,fVar1);
      uVar28 = (uint)this->MaxDists[1] ^ __xmm_80000000800000008000000080000000;
      local_158 = (uint)fVar2 ^ __xmm_80000000800000008000000080000000;
      local_160.ComparisonIndex.Value = (uint)fVar1 ^ __xmm_80000000800000008000000080000000;
      this_00 = ::operator_new(0xb0);
      dVar12 = UE::Math::TQuat<double>::Identity.W;
      dVar11 = UE::Math::TQuat<double>::Identity.Z;
      dVar10 = UE::Math::TQuat<double>::Identity.Y;
      dVar9 = UE::Math::TQuat<double>::Identity.X;
      if (this_00 == (FConvex *)0x0) {
        in_RDX->_padding_ = 0;
      }
      else {
        FImplicitObject::FImplicitObject((FImplicitObject *)this_00,3,'\b');
        this_00->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
        (this_00->Planes).AllocatorInstance.Data = local_180.Data;
        local_180.Data = (FScriptContainerElement *)0x0;
        (this_00->Planes).ArrayNum = (int)local_178;
        (this_00->Planes).ArrayMax = local_178._4_4_;
        local_178 = 0;
        (this_00->Vertices).AllocatorInstance.Data = local_1a0.AllocatorInstance.Data;
        local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Vertices).ArrayNum = local_1a0.ArrayNum;
        (this_00->Vertices).ArrayMax = local_1a0.ArrayMax;
        local_1a0.ArrayNum = 0;
        local_1a0.ArrayMax = 0;
        (this_00->StructureData).Data.Ptr = (void *)0x0;
        (this_00->StructureData).IndexType = None;
        *(undefined8 *)&this_00->RotationOfMass = 0;
        *(undefined8 *)&(this_00->RotationOfMass).field_0x8 = 0;
        *(undefined8 *)&(this_00->RotationOfMass).field_0x10 = 0;
        *(undefined8 *)&(this_00->RotationOfMass).field_0x18 = 0;
        local_fc = local_res20[0];
        *(uint *)&(this_00->LocalBoundingBox).MMin = uVar28;
        *(uint *)&(this_00->LocalBoundingBox).MMin.field_0x4 = local_158;
        *(uint *)&(this_00->LocalBoundingBox).MMin.field_0x8 = local_160.ComparisonIndex.Value;
        fVar8 = __real_3f000000;
        *(ulonglong *)&(this_00->LocalBoundingBox).MMax = CONCAT44(fVar3,fVar38);
        *(FColor_u_0 *)&(this_00->LocalBoundingBox).MMax.field_0x8 = local_res20[0];
        fVar1 = *(float *)&(this_00->LocalBoundingBox).MMax.field_0x4;
        fVar4 = *(float *)&(this_00->LocalBoundingBox).MMax.field_0x8;
        *(float *)&this_00->CenterOfMass =
             (*(float *)&(this_00->LocalBoundingBox).MMax -
             *(float *)&(this_00->LocalBoundingBox).MMin) * fVar8 +
             *(float *)&(this_00->LocalBoundingBox).MMin;
        *(float *)&(this_00->CenterOfMass).field_0x4 = (fVar2 + fVar1) * fVar8 - fVar2;
        *(float *)&(this_00->CenterOfMass).field_0x8 =
             ((float)local_168 + fVar4) * fVar8 - (float)local_168;
        fVar1 = __real_3daaaaab;
        *(double *)&this_00->RotationOfMass = dVar9;
        *(double *)&(this_00->RotationOfMass).field_0x8 = dVar10;
        this_00->Volume = fVar39 * fVar40 * fVar41;
        *(double *)&(this_00->RotationOfMass).field_0x10 = dVar11;
        *(double *)&(this_00->RotationOfMass).field_0x18 = dVar12;
        *(double *)&this_00->UnitMassInertiaTensor =
             (double)((fVar41 * fVar41 + fVar39 * fVar39) * fVar1);
        *(double *)&(this_00->UnitMassInertiaTensor).field_0x8 =
             (double)((fVar40 * fVar40 + fVar41 * fVar41) * fVar1);
        *(double *)&(this_00->UnitMassInertiaTensor).field_0x10 =
             (double)((fVar40 * fVar40 + fVar39 * fVar39) * fVar1);
        local_104 = fVar38;
        fStack_100 = fVar3;
        FConvex::CreateStructureData(this_00,&local_1b0,true);
        in_RDX->_padding_ = (longlong)this_00;
        LOCK();
        *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
        UNLOCK();
      }
      if (local_180.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data);
      }
      if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1b0.AllocatorInstance.Data,
                 local_1b0.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1b0.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1b0.AllocatorInstance.Data);
      }
      return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
    }
  } while( true );
}

// OverlapTribox @ 143ec7a90

bool __thiscall
Chaos::Private::FTribox::OverlapTribox(FTribox *this,FTribox *param_1,FTribox *param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  
  pfVar2 = this->MaxDists + 1;
  lVar3 = 0;
  while ((fVar4 = (float)(*(uint *)(((longlong)param_1 - (longlong)this) + (longlong)pfVar2) ^
                         __xmm_80000000800000008000000080000000),
         fVar4 < ((FTribox *)(pfVar2 + -1))->MaxDists[0] ||
         fVar4 == ((FTribox *)(pfVar2 + -1))->MaxDists[0] &&
         (pfVar1 = (float *)(((longlong)param_1 - (longlong)this) + -4 + (longlong)pfVar2),
         (float)((uint)*pfVar2 ^ __xmm_80000000800000008000000080000000) < *pfVar1 ||
         (float)((uint)*pfVar2 ^ __xmm_80000000800000008000000080000000) == *pfVar1))) {
    lVar3 = lVar3 + 2;
    pfVar2 = pfVar2 + 2;
    if (0x11 < lVar3) {
      lVar3 = 9;
      pfVar2 = param_1->MaxDists + 1;
      do {
        fVar4 = *(float *)((longlong)this + (-4 - (longlong)param_1) + (longlong)pfVar2);
        if (((FTribox *)(pfVar2 + -1))->MaxDists[0] <= fVar4) {
          fVar4 = ((FTribox *)(pfVar2 + -1))->MaxDists[0];
        }
        pfVar1 = pfVar2 + 2;
        *(float *)((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)pfVar1) = fVar4;
        fVar4 = *(float *)((longlong)this + (-8 - (longlong)param_1) + (longlong)pfVar1);
        if (*pfVar2 <= fVar4) {
          fVar4 = *pfVar2;
        }
        *(float *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)pfVar1) = fVar4;
        lVar3 = lVar3 + -1;
        pfVar2 = pfVar1;
      } while (lVar3 != 0);
      return true;
    }
  }
  return false;
}

// SampleSlabPoint @ 143ecba80

float __thiscall Chaos::Private::FTribox::SampleSlabPoint(FTribox *this,int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  if (__real_3f800000 <= *param_2) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return (this->MaxDists[(longlong)param_1 + 1] + this->MaxDists[param_1]) * fVar1 -
         this->MaxDists[(longlong)param_1 + 1];
}

// SolveIntersection @ 143ecf9b0

TVector<double,3> * __thiscall
Chaos::Private::FTribox::SolveIntersection
          (FTribox *this,TVector<double,3> *__return_storage_ptr__,int *param_1,
          PMatrix<float,3,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  fVar1 = *(float *)&param_2->field_0x10;
  dVar8 = (double)this->MaxDists[param_1[1]];
  dVar9 = (double)this->MaxDists[*param_1];
  dVar7 = (double)this->MaxDists[param_1[2]];
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)&param_2->field_0x20;
  *(double *)&__return_storage_ptr__->field_0x8 =
       (double)*(float *)&param_2->field_0x14 * dVar8 +
       (double)*(float *)&param_2->field_0x4 * dVar9 +
       (double)*(float *)&param_2->field_0x24 * dVar7;
  fVar4 = *(float *)&param_2->field_0x18;
  fVar5 = *(float *)&param_2->field_0x8;
  fVar6 = *(float *)&param_2->field_0x28;
  *(double *)__return_storage_ptr__ =
       (double)fVar1 * dVar8 + (double)fVar2 * dVar9 + (double)fVar3 * dVar7;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (double)fVar4 * dVar8 + (double)fVar5 * dVar9 + (double)fVar6 * dVar7;
  return __return_storage_ptr__;
}

// SplitTriboxSlab @ 143ed1530

bool __thiscall
Chaos::Private::FTribox::SplitTriboxSlab
          (FTribox *this,int param_1,float *param_2,FTribox *param_3,FTribox *param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = __xmm_80000000800000008000000080000000;
  if (this->MaxDists[param_1] <= *param_2) {
    uVar1 = *(undefined8 *)(this->MaxDists + 2);
    *(undefined8 *)param_3->MaxDists = *(undefined8 *)this->MaxDists;
    *(undefined8 *)(param_3->MaxDists + 2) = uVar1;
    uVar1 = *(undefined8 *)(this->MaxDists + 6);
    *(undefined8 *)(param_3->MaxDists + 4) = *(undefined8 *)(this->MaxDists + 4);
    *(undefined8 *)(param_3->MaxDists + 6) = uVar1;
    uVar1 = *(undefined8 *)(this->MaxDists + 10);
    *(undefined8 *)(param_3->MaxDists + 8) = *(undefined8 *)(this->MaxDists + 8);
    *(undefined8 *)(param_3->MaxDists + 10) = uVar1;
    uVar1 = *(undefined8 *)(this->MaxDists + 0xe);
    *(undefined8 *)(param_3->MaxDists + 0xc) = *(undefined8 *)(this->MaxDists + 0xc);
    *(undefined8 *)(param_3->MaxDists + 0xe) = uVar1;
    *(undefined8 *)(param_3->MaxDists + 0x10) = *(undefined8 *)(this->MaxDists + 0x10);
    bVar2 = this->bHasDatas;
    uVar3 = *(undefined2 *)&this->field_0x4a;
    param_3->bIsValid = this->bIsValid;
    param_3->bHasDatas = bVar2;
    *(undefined2 *)&param_3->field_0x4a = uVar3;
    return false;
  }
  if (*param_2 <=
      (float)((uint)this->MaxDists[(longlong)param_1 + 1] ^ __xmm_80000000800000008000000080000000))
  {
    uVar1 = *(undefined8 *)(this->MaxDists + 2);
    *(undefined8 *)param_4->MaxDists = *(undefined8 *)this->MaxDists;
    *(undefined8 *)(param_4->MaxDists + 2) = uVar1;
    uVar1 = *(undefined8 *)(this->MaxDists + 6);
    *(undefined8 *)(param_4->MaxDists + 4) = *(undefined8 *)(this->MaxDists + 4);
    *(undefined8 *)(param_4->MaxDists + 6) = uVar1;
    uVar1 = *(undefined8 *)(this->MaxDists + 10);
    *(undefined8 *)(param_4->MaxDists + 8) = *(undefined8 *)(this->MaxDists + 8);
    *(undefined8 *)(param_4->MaxDists + 10) = uVar1;
    uVar1 = *(undefined8 *)(this->MaxDists + 0xe);
    *(undefined8 *)(param_4->MaxDists + 0xc) = *(undefined8 *)(this->MaxDists + 0xc);
    *(undefined8 *)(param_4->MaxDists + 0xe) = uVar1;
    *(undefined8 *)(param_4->MaxDists + 0x10) = *(undefined8 *)(this->MaxDists + 0x10);
    bVar2 = this->bHasDatas;
    uVar3 = *(undefined2 *)&this->field_0x4a;
    param_4->bIsValid = this->bIsValid;
    param_4->bHasDatas = bVar2;
    *(undefined2 *)&param_4->field_0x4a = uVar3;
    return false;
  }
  uVar1 = *(undefined8 *)(this->MaxDists + 2);
  *(undefined8 *)param_3->MaxDists = *(undefined8 *)this->MaxDists;
  *(undefined8 *)(param_3->MaxDists + 2) = uVar1;
  uVar1 = *(undefined8 *)(this->MaxDists + 6);
  *(undefined8 *)(param_3->MaxDists + 4) = *(undefined8 *)(this->MaxDists + 4);
  *(undefined8 *)(param_3->MaxDists + 6) = uVar1;
  uVar1 = *(undefined8 *)(this->MaxDists + 10);
  *(undefined8 *)(param_3->MaxDists + 8) = *(undefined8 *)(this->MaxDists + 8);
  *(undefined8 *)(param_3->MaxDists + 10) = uVar1;
  uVar1 = *(undefined8 *)(this->MaxDists + 0xe);
  *(undefined8 *)(param_3->MaxDists + 0xc) = *(undefined8 *)(this->MaxDists + 0xc);
  *(undefined8 *)(param_3->MaxDists + 0xe) = uVar1;
  *(undefined8 *)(param_3->MaxDists + 0x10) = *(undefined8 *)(this->MaxDists + 0x10);
  bVar2 = this->bHasDatas;
  uVar3 = *(undefined2 *)&this->field_0x4a;
  param_3->bIsValid = this->bIsValid;
  param_3->bHasDatas = bVar2;
  *(undefined2 *)&param_3->field_0x4a = uVar3;
  uVar1 = *(undefined8 *)(this->MaxDists + 2);
  *(undefined8 *)param_4->MaxDists = *(undefined8 *)this->MaxDists;
  *(undefined8 *)(param_4->MaxDists + 2) = uVar1;
  uVar1 = *(undefined8 *)(this->MaxDists + 6);
  *(undefined8 *)(param_4->MaxDists + 4) = *(undefined8 *)(this->MaxDists + 4);
  *(undefined8 *)(param_4->MaxDists + 6) = uVar1;
  uVar1 = *(undefined8 *)(this->MaxDists + 10);
  *(undefined8 *)(param_4->MaxDists + 8) = *(undefined8 *)(this->MaxDists + 8);
  *(undefined8 *)(param_4->MaxDists + 10) = uVar1;
  uVar1 = *(undefined8 *)(this->MaxDists + 0xe);
  *(undefined8 *)(param_4->MaxDists + 0xc) = *(undefined8 *)(this->MaxDists + 0xc);
  *(undefined8 *)(param_4->MaxDists + 0xe) = uVar1;
  *(undefined8 *)(param_4->MaxDists + 0x10) = *(undefined8 *)(this->MaxDists + 0x10);
  bVar2 = this->bHasDatas;
  uVar3 = *(undefined2 *)&this->field_0x4a;
  param_4->bIsValid = this->bIsValid;
  fVar5 = __real_3f3504f3;
  fVar9 = __real_3fb504f3;
  param_4->bHasDatas = bVar2;
  *(undefined2 *)&param_4->field_0x4a = uVar3;
  if (param_1 == 0) {
    fVar6 = *param_2;
    fVar8 = param_3->MaxDists[0x11];
    fVar11 = param_3->MaxDists[0xf];
    fVar12 = param_3->MaxDists[0xd];
    fVar13 = param_3->MaxDists[0xb];
    param_3->MaxDists[0] = fVar6;
    fVar10 = fVar8 * fVar9 + fVar6;
    fVar8 = fVar11 * fVar9 + fVar6;
    fVar11 = fVar12 * fVar9 + fVar6;
    if (param_3->MaxDists[2] <= fVar10) {
      fVar10 = param_3->MaxDists[2];
    }
    fVar12 = fVar13 * fVar9 + fVar6;
    fVar6 = fVar6 * fVar5;
    if (param_3->MaxDists[3] <= fVar8) {
      fVar8 = param_3->MaxDists[3];
    }
    if (param_3->MaxDists[4] <= fVar11) {
      fVar11 = param_3->MaxDists[4];
    }
    param_3->MaxDists[2] = fVar10;
    if (param_3->MaxDists[5] <= fVar12) {
      fVar12 = param_3->MaxDists[5];
    }
    fVar10 = fVar10 * fVar5;
    param_3->MaxDists[3] = fVar8;
    param_3->MaxDists[4] = fVar11;
    param_3->MaxDists[5] = fVar12;
    fVar11 = fVar11 * fVar5;
    fVar8 = fVar8 * fVar5;
    fVar12 = fVar12 * fVar5;
    fVar13 = fVar11 + fVar6;
    if (param_3->MaxDists[10] <= fVar11 + fVar6) {
      fVar13 = param_3->MaxDists[10];
    }
    param_3->MaxDists[10] = fVar13;
    fVar13 = fVar12 + fVar6;
    if (param_3->MaxDists[0xc] <= fVar12 + fVar6) {
      fVar13 = param_3->MaxDists[0xc];
    }
    param_3->MaxDists[0xc] = fVar13;
    fVar13 = fVar10 + fVar6;
    if (param_3->MaxDists[0xe] <= fVar10 + fVar6) {
      fVar13 = param_3->MaxDists[0xe];
    }
    param_3->MaxDists[0xe] = fVar13;
    fVar13 = fVar8 + fVar6;
    if (param_3->MaxDists[0x10] <= fVar8 + fVar6) {
      fVar13 = param_3->MaxDists[0x10];
    }
    fVar6 = fVar10 + fVar12;
    if (param_3->MaxDists[8] <= fVar10 + fVar12) {
      fVar6 = param_3->MaxDists[8];
    }
    fVar7 = fVar10 + fVar11;
    if (param_3->MaxDists[6] <= fVar10 + fVar11) {
      fVar7 = param_3->MaxDists[6];
    }
    param_3->MaxDists[0x10] = fVar13;
    param_3->MaxDists[8] = fVar6;
    param_3->MaxDists[6] = fVar7;
    fVar6 = fVar8 + fVar12;
    if (param_3->MaxDists[7] <= fVar8 + fVar12) {
      fVar6 = param_3->MaxDists[7];
    }
    fVar12 = fVar8 + fVar11;
    if (param_3->MaxDists[9] <= fVar8 + fVar11) {
      fVar12 = param_3->MaxDists[9];
    }
    param_3->MaxDists[7] = fVar6;
    param_3->MaxDists[9] = fVar12;
    fVar12 = (float)((uint)*param_2 ^ uVar4);
    fVar8 = param_4->MaxDists[10] * fVar9 + fVar12;
    fVar11 = param_4->MaxDists[0xc] * fVar9 + fVar12;
    fVar6 = param_4->MaxDists[0xe] * fVar9 + fVar12;
    param_4->MaxDists[1] = fVar12;
    if (param_4->MaxDists[4] <= fVar8) {
      fVar8 = param_4->MaxDists[4];
    }
    fVar9 = param_4->MaxDists[0x10] * fVar9 + fVar12;
    if (param_4->MaxDists[5] <= fVar11) {
      fVar11 = param_4->MaxDists[5];
    }
    if (param_4->MaxDists[2] <= fVar6) {
      fVar6 = param_4->MaxDists[2];
    }
    param_4->MaxDists[4] = fVar8;
    if (param_4->MaxDists[3] <= fVar9) {
      fVar9 = param_4->MaxDists[3];
    }
    param_4->MaxDists[5] = fVar11;
    param_4->MaxDists[2] = fVar6;
    fVar12 = fVar12 * fVar5;
    fVar6 = fVar6 * fVar5;
    fVar8 = fVar8 * fVar5;
    fVar11 = fVar11 * fVar5;
    param_4->MaxDists[3] = fVar9;
    fVar9 = fVar9 * fVar5;
    fVar5 = fVar8 + fVar12;
    if (param_4->MaxDists[0xd] <= fVar8 + fVar12) {
      fVar5 = param_4->MaxDists[0xd];
    }
    param_4->MaxDists[0xd] = fVar5;
    fVar5 = fVar11 + fVar12;
    if (param_4->MaxDists[0xb] <= fVar11 + fVar12) {
      fVar5 = param_4->MaxDists[0xb];
    }
    param_4->MaxDists[0xb] = fVar5;
    fVar5 = fVar6 + fVar12;
    if (param_4->MaxDists[0x11] <= fVar6 + fVar12) {
      fVar5 = param_4->MaxDists[0x11];
    }
    param_4->MaxDists[0x11] = fVar5;
    fVar5 = fVar9 + fVar12;
    if (param_4->MaxDists[0xf] <= fVar9 + fVar12) {
      fVar5 = param_4->MaxDists[0xf];
    }
    fVar12 = fVar6 + fVar8;
    if (param_4->MaxDists[6] <= fVar6 + fVar8) {
      fVar12 = param_4->MaxDists[6];
    }
    fVar13 = fVar6 + fVar11;
    if (param_4->MaxDists[8] <= fVar6 + fVar11) {
      fVar13 = param_4->MaxDists[8];
    }
    param_4->MaxDists[0xf] = fVar5;
    param_4->MaxDists[6] = fVar12;
    param_4->MaxDists[8] = fVar13;
    fVar5 = fVar9 + fVar8;
    if (param_4->MaxDists[9] <= fVar9 + fVar8) {
      fVar5 = param_4->MaxDists[9];
    }
    fVar6 = fVar9 + fVar11;
    if (param_4->MaxDists[7] <= fVar9 + fVar11) {
      fVar6 = param_4->MaxDists[7];
    }
    param_4->MaxDists[9] = fVar5;
    param_4->MaxDists[7] = fVar6;
    return true;
  }
  if (param_1 == 2) {
    fVar6 = *param_2;
    param_3->MaxDists[2] = fVar6;
    fVar11 = param_3->MaxDists[0x10] * fVar9 + fVar6;
    fVar8 = param_3->MaxDists[0xf] * fVar9 + fVar6;
    fVar12 = param_3->MaxDists[9] * fVar9 + fVar6;
    if (param_3->MaxDists[0] <= fVar11) {
      fVar11 = param_3->MaxDists[0];
    }
    fVar13 = param_3->MaxDists[7] * fVar9 + fVar6;
    fVar6 = fVar6 * fVar5;
    if (param_3->MaxDists[1] <= fVar8) {
      fVar8 = param_3->MaxDists[1];
    }
    if (param_3->MaxDists[4] <= fVar12) {
      fVar12 = param_3->MaxDists[4];
    }
    param_3->MaxDists[0] = fVar11;
    if (param_3->MaxDists[5] <= fVar13) {
      fVar13 = param_3->MaxDists[5];
    }
    fVar11 = fVar11 * fVar5;
    param_3->MaxDists[1] = fVar8;
    param_3->MaxDists[4] = fVar12;
    param_3->MaxDists[5] = fVar13;
    fVar12 = fVar12 * fVar5;
    fVar8 = fVar8 * fVar5;
    fVar13 = fVar13 * fVar5;
    fVar10 = fVar12 + fVar6;
    if (param_3->MaxDists[6] <= fVar12 + fVar6) {
      fVar10 = param_3->MaxDists[6];
    }
    param_3->MaxDists[6] = fVar10;
    fVar10 = fVar13 + fVar6;
    if (param_3->MaxDists[8] <= fVar13 + fVar6) {
      fVar10 = param_3->MaxDists[8];
    }
    param_3->MaxDists[8] = fVar10;
    fVar10 = fVar11 + fVar6;
    if (param_3->MaxDists[0xe] <= fVar11 + fVar6) {
      fVar10 = param_3->MaxDists[0xe];
    }
    param_3->MaxDists[0xe] = fVar10;
    fVar10 = fVar8 + fVar6;
    if (param_3->MaxDists[0x11] <= fVar8 + fVar6) {
      fVar10 = param_3->MaxDists[0x11];
    }
    fVar6 = fVar11 + fVar13;
    if (param_3->MaxDists[0xc] <= fVar11 + fVar13) {
      fVar6 = param_3->MaxDists[0xc];
    }
    fVar7 = fVar11 + fVar12;
    if (param_3->MaxDists[10] <= fVar11 + fVar12) {
      fVar7 = param_3->MaxDists[10];
    }
    param_3->MaxDists[0x11] = fVar10;
    param_3->MaxDists[0xc] = fVar6;
    param_3->MaxDists[10] = fVar7;
    fVar6 = fVar8 + fVar13;
    if (param_3->MaxDists[0xb] <= fVar8 + fVar13) {
      fVar6 = param_3->MaxDists[0xb];
    }
    fVar11 = fVar8 + fVar12;
    if (param_3->MaxDists[0xd] <= fVar8 + fVar12) {
      fVar11 = param_3->MaxDists[0xd];
    }
    param_3->MaxDists[0xb] = fVar6;
    param_3->MaxDists[0xd] = fVar11;
    fVar12 = (float)((uint)*param_2 ^ uVar4);
    fVar8 = param_4->MaxDists[6] * fVar9 + fVar12;
    fVar11 = param_4->MaxDists[8] * fVar9 + fVar12;
    fVar6 = param_4->MaxDists[0xe] * fVar9 + fVar12;
    param_4->MaxDists[3] = fVar12;
    if (param_4->MaxDists[4] <= fVar8) {
      fVar8 = param_4->MaxDists[4];
    }
    fVar9 = param_4->MaxDists[0x11] * fVar9 + fVar12;
    if (param_4->MaxDists[5] <= fVar11) {
      fVar11 = param_4->MaxDists[5];
    }
    if (param_4->MaxDists[0] <= fVar6) {
      fVar6 = param_4->MaxDists[0];
    }
    param_4->MaxDists[4] = fVar8;
    if (param_4->MaxDists[1] <= fVar9) {
      fVar9 = param_4->MaxDists[1];
    }
    param_4->MaxDists[5] = fVar11;
    param_4->MaxDists[0] = fVar6;
    fVar12 = fVar12 * fVar5;
    fVar6 = fVar6 * fVar5;
    fVar8 = fVar8 * fVar5;
    fVar11 = fVar11 * fVar5;
    param_4->MaxDists[1] = fVar9;
    fVar9 = fVar9 * fVar5;
    fVar5 = fVar8 + fVar12;
    if (param_4->MaxDists[9] <= fVar8 + fVar12) {
      fVar5 = param_4->MaxDists[9];
    }
    param_4->MaxDists[9] = fVar5;
    fVar5 = fVar11 + fVar12;
    if (param_4->MaxDists[7] <= fVar11 + fVar12) {
      fVar5 = param_4->MaxDists[7];
    }
    param_4->MaxDists[7] = fVar5;
    fVar5 = fVar6 + fVar12;
    if (param_4->MaxDists[0x10] <= fVar6 + fVar12) {
      fVar5 = param_4->MaxDists[0x10];
    }
    param_4->MaxDists[0x10] = fVar5;
    fVar5 = fVar9 + fVar12;
    if (param_4->MaxDists[0xf] <= fVar9 + fVar12) {
      fVar5 = param_4->MaxDists[0xf];
    }
    fVar12 = fVar6 + fVar8;
    if (param_4->MaxDists[10] <= fVar6 + fVar8) {
      fVar12 = param_4->MaxDists[10];
    }
    fVar13 = fVar6 + fVar11;
    if (param_4->MaxDists[0xc] <= fVar6 + fVar11) {
      fVar13 = param_4->MaxDists[0xc];
    }
    param_4->MaxDists[0xf] = fVar5;
    param_4->MaxDists[10] = fVar12;
    param_4->MaxDists[0xc] = fVar13;
    fVar5 = fVar9 + fVar8;
    if (param_4->MaxDists[0xd] <= fVar9 + fVar8) {
      fVar5 = param_4->MaxDists[0xd];
    }
    fVar6 = fVar9 + fVar11;
    if (param_4->MaxDists[0xb] <= fVar9 + fVar11) {
      fVar6 = param_4->MaxDists[0xb];
    }
    param_4->MaxDists[0xd] = fVar5;
    param_4->MaxDists[0xb] = fVar6;
    return true;
  }
  if (param_1 == 4) {
    fVar6 = *param_2;
    param_3->MaxDists[4] = fVar6;
    fVar11 = param_3->MaxDists[0xc] * fVar9 + fVar6;
    fVar8 = param_3->MaxDists[0xb] * fVar9 + fVar6;
    fVar12 = param_3->MaxDists[8] * fVar9 + fVar6;
    if (param_3->MaxDists[0] <= fVar11) {
      fVar11 = param_3->MaxDists[0];
    }
    fVar13 = param_3->MaxDists[7] * fVar9 + fVar6;
    fVar6 = fVar6 * fVar5;
    if (param_3->MaxDists[1] <= fVar8) {
      fVar8 = param_3->MaxDists[1];
    }
    if (param_3->MaxDists[2] <= fVar12) {
      fVar12 = param_3->MaxDists[2];
    }
    param_3->MaxDists[0] = fVar11;
    if (param_3->MaxDists[3] <= fVar13) {
      fVar13 = param_3->MaxDists[3];
    }
    fVar11 = fVar11 * fVar5;
    param_3->MaxDists[1] = fVar8;
    param_3->MaxDists[2] = fVar12;
    param_3->MaxDists[3] = fVar13;
    fVar12 = fVar12 * fVar5;
    fVar8 = fVar8 * fVar5;
    fVar13 = fVar13 * fVar5;
    fVar10 = fVar12 + fVar6;
    if (param_3->MaxDists[6] <= fVar12 + fVar6) {
      fVar10 = param_3->MaxDists[6];
    }
    param_3->MaxDists[6] = fVar10;
    fVar10 = fVar13 + fVar6;
    if (param_3->MaxDists[9] <= fVar13 + fVar6) {
      fVar10 = param_3->MaxDists[9];
    }
    param_3->MaxDists[9] = fVar10;
    fVar10 = fVar11 + fVar6;
    if (param_3->MaxDists[10] <= fVar11 + fVar6) {
      fVar10 = param_3->MaxDists[10];
    }
    param_3->MaxDists[10] = fVar10;
    fVar10 = fVar8 + fVar6;
    if (param_3->MaxDists[0xd] <= fVar8 + fVar6) {
      fVar10 = param_3->MaxDists[0xd];
    }
    fVar6 = fVar11 + fVar13;
    if (param_3->MaxDists[0x10] <= fVar11 + fVar13) {
      fVar6 = param_3->MaxDists[0x10];
    }
    fVar7 = fVar11 + fVar12;
    if (param_3->MaxDists[0xe] <= fVar11 + fVar12) {
      fVar7 = param_3->MaxDists[0xe];
    }
    param_3->MaxDists[0xd] = fVar10;
    param_3->MaxDists[0x10] = fVar6;
    param_3->MaxDists[0xe] = fVar7;
    fVar6 = fVar8 + fVar13;
    if (param_3->MaxDists[0xf] <= fVar8 + fVar13) {
      fVar6 = param_3->MaxDists[0xf];
    }
    fVar11 = fVar8 + fVar12;
    if (param_3->MaxDists[0x11] <= fVar8 + fVar12) {
      fVar11 = param_3->MaxDists[0x11];
    }
    param_3->MaxDists[0xf] = fVar6;
    param_3->MaxDists[0x11] = fVar11;
    fVar12 = (float)((uint)*param_2 ^ uVar4);
    fVar8 = param_4->MaxDists[6] * fVar9 + fVar12;
    fVar11 = param_4->MaxDists[9] * fVar9 + fVar12;
    fVar6 = param_4->MaxDists[10] * fVar9 + fVar12;
    param_4->MaxDists[5] = fVar12;
    if (param_4->MaxDists[2] <= fVar8) {
      fVar8 = param_4->MaxDists[2];
    }
    fVar9 = param_4->MaxDists[0xd] * fVar9 + fVar12;
    if (param_4->MaxDists[3] <= fVar11) {
      fVar11 = param_4->MaxDists[3];
    }
    if (param_4->MaxDists[0] <= fVar6) {
      fVar6 = param_4->MaxDists[0];
    }
    param_4->MaxDists[2] = fVar8;
    if (param_4->MaxDists[1] <= fVar9) {
      fVar9 = param_4->MaxDists[1];
    }
    param_4->MaxDists[3] = fVar11;
    param_4->MaxDists[0] = fVar6;
    fVar12 = fVar12 * fVar5;
    fVar6 = fVar6 * fVar5;
    fVar8 = fVar8 * fVar5;
    fVar11 = fVar11 * fVar5;
    param_4->MaxDists[1] = fVar9;
    fVar9 = fVar9 * fVar5;
    fVar5 = fVar8 + fVar12;
    if (param_4->MaxDists[8] <= fVar8 + fVar12) {
      fVar5 = param_4->MaxDists[8];
    }
    param_4->MaxDists[8] = fVar5;
    fVar5 = fVar11 + fVar12;
    if (param_4->MaxDists[7] <= fVar11 + fVar12) {
      fVar5 = param_4->MaxDists[7];
    }
    param_4->MaxDists[7] = fVar5;
    fVar5 = fVar6 + fVar12;
    if (param_4->MaxDists[0xc] <= fVar6 + fVar12) {
      fVar5 = param_4->MaxDists[0xc];
    }
    param_4->MaxDists[0xc] = fVar5;
    fVar5 = fVar9 + fVar12;
    if (param_4->MaxDists[0xb] <= fVar9 + fVar12) {
      fVar5 = param_4->MaxDists[0xb];
    }
    fVar12 = fVar6 + fVar8;
    if (param_4->MaxDists[0xe] <= fVar6 + fVar8) {
      fVar12 = param_4->MaxDists[0xe];
    }
    fVar13 = fVar6 + fVar11;
    if (param_4->MaxDists[0x10] <= fVar6 + fVar11) {
      fVar13 = param_4->MaxDists[0x10];
    }
    param_4->MaxDists[0xb] = fVar5;
    param_4->MaxDists[0xe] = fVar12;
    param_4->MaxDists[0x10] = fVar13;
    fVar5 = fVar9 + fVar8;
    if (param_4->MaxDists[0x11] <= fVar9 + fVar8) {
      fVar5 = param_4->MaxDists[0x11];
    }
    fVar6 = fVar9 + fVar11;
    if (param_4->MaxDists[0xf] <= fVar9 + fVar11) {
      fVar6 = param_4->MaxDists[0xf];
    }
    param_4->MaxDists[0x11] = fVar5;
    param_4->MaxDists[0xf] = fVar6;
  }
  return true;
}

