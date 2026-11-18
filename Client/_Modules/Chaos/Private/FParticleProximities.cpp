// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// operator() @ 143a43e60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::TSpatialHashGridPoints<int,float>::FindAllSelfProximities'::__l2::FParticleProximities::
operator()(void *this,int param_1)

{
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FPayloadAndBounds *pFVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  __m128i _Var19;
  undefined4 local_res8 [2];
  uint local_res10;
  int local_res18 [2];
  undefined8 local_res20;
  __m128i local_78;
  __m128i local_68;
  __m128i local_58;
  
  plVar4 = *(longlong **)((longlong)this + 0x20);
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = *(uint *)(*plVar4 + (longlong)param_1 * 4);
  pFVar12 = Chaos::TSpatialHashGridBase<int>::FHashMap::GetValue
                      (*(FHashMap **)((longlong)this + 0x18),uVar10);
  lVar5 = *(longlong *)((longlong)this + 0x18);
  iVar2 = pFVar12->Payload;
  uVar9 = 0;
  if ((int)uVar10 < *(int *)(lVar5 + 0x18)) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar17 = (int *)((longlong)(int)uVar10 * 0x20 + *(longlong *)(lVar5 + 0x10));
  uVar10 = Chaos::TSpatialHashGridBase<int>::FHashMap::Next
                     (*(FHashMap **)((longlong)this + 0x18),uVar10);
  iVar16 = 1;
  _Var19 = GlobalVectorConstants::IntAllMask;
  while( true ) {
    if (uVar10 == 0xffffffff) {
      iVar11 = *(int *)this;
      iVar13 = 1;
      if (0 < iVar11) {
        do {
          local_78.m128i_i32[0] = *piVar17;
          local_78.m128i_i32[1] = piVar17[1];
          local_78.m128i_i32[3] = piVar17[3];
          local_78.m128i_i32[2] = iVar13 + piVar17[2];
          AddResultsInCell(this,iVar2,(FHashIndex *)&local_78);
          iVar11 = *(int *)this;
          iVar13 = iVar13 + 1;
        } while (iVar13 <= iVar11);
      }
      iVar13 = 1;
      if (0 < iVar11) {
        do {
          iVar14 = -iVar11;
          if (iVar14 == iVar11 || SBORROW4(iVar14,iVar11) != iVar11 * -2 < 0) {
            do {
              local_68.m128i_i32[0] = *piVar17;
              local_68.m128i_i32[3] = piVar17[3];
              local_68.m128i_i32[1] = iVar13 + piVar17[1];
              local_68.m128i_i32[2] = iVar14 + piVar17[2];
              AddResultsInCell(this,iVar2,(FHashIndex *)&local_68);
              iVar11 = *(int *)this;
              iVar14 = iVar14 + 1;
            } while (iVar14 <= iVar11);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 <= iVar11);
      }
      if (0 < iVar11) {
        do {
          iVar13 = -iVar11;
          if (iVar13 == iVar11 || SBORROW4(iVar13,iVar11) != iVar11 * -2 < 0) {
            do {
              iVar14 = -iVar11;
              if (iVar14 == iVar11 || SBORROW4(iVar14,iVar11) != iVar11 * -2 < 0) {
                do {
                  local_58.m128i_i32[3] = piVar17[3];
                  local_58.m128i_i32[0] = iVar16 + *piVar17;
                  local_58.m128i_i32[1] = iVar13 + piVar17[1];
                  local_58.m128i_i32[2] = iVar14 + piVar17[2];
                  AddResultsInCell(this,iVar2,(FHashIndex *)&local_58);
                  iVar11 = *(int *)this;
                  iVar14 = iVar14 + 1;
                } while (iVar14 <= iVar11);
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 <= iVar11);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 <= iVar11);
      }
      return;
    }
    lVar5 = *(longlong *)((longlong)this + 0x18);
    local_res10 = ~uVar10 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar10 < *(int *)(lVar5 + 0x18)) {
      uVar9 = local_res10;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       _Var19 = GlobalVectorConstants::IntAllMask, bVar7)) break;
    lVar5 = *(longlong *)(lVar5 + 0x10);
    lVar15 = (longlong)(int)uVar10 * 0x20;
    piVar1 = (int *)(lVar5 + lVar15);
    auVar18._0_4_ = -(uint)(*piVar1 == *piVar17) ^ _Var19.m128i_u32[0];
    auVar18._4_4_ = -(uint)(piVar1[1] == piVar17[1]) ^ _Var19.m128i_u32[1];
    auVar18._8_4_ = -(uint)(piVar1[2] == piVar17[2]) ^ _Var19.m128i_u32[2];
    auVar18._12_4_ = -(uint)(piVar1[3] == piVar17[3]) ^ _Var19.m128i_u32[3];
    iVar11 = movmskps((int)lVar5,auVar18);
    if (iVar11 == 0) {
      lVar5 = *(longlong *)((longlong)this + 0x18);
      uVar9 = 0;
      if ((int)uVar10 < *(int *)(lVar5 + 0x18)) {
        uVar9 = local_res10;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)(lVar15 + 0x10 + *(longlong *)(lVar5 + 0x10));
      local_res20 = CONCAT44(local_res20._4_4_,uVar3);
      local_res8[0] = uVar3;
      local_res18[0] = iVar2;
      cVar8 = (**(code **)((longlong)this + 8))
                        (*(undefined8 *)((longlong)this + 0x10),local_res18,local_res8);
      _Var19 = GlobalVectorConstants::IntAllMask;
      if (cVar8 != '\0') {
        LOCK();
        piVar1 = (int *)((longlong)this + 0x38);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (iVar11 < *(int *)((longlong)this + 0x3c)) {
          AcquireSRWLockShared((PSRWLOCK)((longlong)this + 0x40));
          if ((iVar11 < 0 || *(int *)((longlong)this + 0x30) <= iVar11) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(ulonglong *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar11 * 8) =
               CONCAT44(uVar3,iVar2);
          ReleaseSRWLockShared((PSRWLOCK)((longlong)this + 0x40));
          _Var19 = GlobalVectorConstants::IntAllMask;
        }
        else {
          AcquireSRWLockExclusive((PSRWLOCK)((longlong)this + 0x40));
          this_00 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)this + 0x28);
          if (*(int *)((longlong)this + 0x3c) <= iVar11) {
            TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNum
                      (this_00,iVar11 + 1,Default);
            TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNum
                      (this_00,*(int *)((longlong)this + 0x34),Default);
            LOCK();
            *(undefined4 *)((longlong)this + 0x3c) = *(undefined4 *)((longlong)this + 0x30);
            UNLOCK();
          }
          local_res20 = CONCAT44((undefined4)local_res20,iVar2);
          if ((iVar11 < 0 || *(int *)((longlong)this + 0x30) <= iVar11) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined8 *)((this_00->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_res20;
          ReleaseSRWLockExclusive((PSRWLOCK)((longlong)this + 0x40));
          _Var19 = GlobalVectorConstants::IntAllMask;
        }
      }
    }
    lVar5 = *(longlong *)((longlong)this + 0x18);
    uVar9 = 0;
    if ((int)uVar10 < *(int *)(lVar5 + 0x18)) {
      uVar9 = local_res10;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       _Var19 = GlobalVectorConstants::IntAllMask, bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar10 = *(uint *)(*(longlong *)(lVar5 + 0x10) + 0x18 + (longlong)(int)uVar10 * 0x20);
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// AddResultsInCell @ 143a4a7c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::TSpatialHashGridPoints<int,float>::FindAllSelfProximities'::__l2::FParticleProximities::
AddResultsInCell(void *this,int param_1,FHashIndex *param_2)

{
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  __m128i _Var15;
  undefined4 local_res8 [2];
  int local_res10;
  FHashIndex *local_res18;
  int local_res20 [2];
  
  plVar3 = *(longlong **)((longlong)this + 0x18);
  auVar14 = pmulld((undefined1  [16])param_2->VectorIndex,
                   (undefined1  [16])
                   `public:_unsigned_int___cdecl_Chaos::TSpatialHashGridBase<int>::FHashIndex::GetTypeHash(void)const___ptr64'
                   ::__l2::Multiplier);
  iVar8 = (int)plVar3[1];
  uVar11 = (auVar14._0_4_ ^ auVar14._4_4_ ^ auVar14._8_4_ ^ auVar14._12_4_) & iVar8 - 1U;
  uVar9 = 0;
  if ((int)uVar11 < iVar8) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = *(uint *)(*plVar3 + (longlong)(int)uVar11 * 4);
  _Var15 = GlobalVectorConstants::IntAllMask;
  while( true ) {
    if (uVar9 == 0xffffffff) {
      return;
    }
    lVar4 = *(longlong *)((longlong)this + 0x18);
    uVar10 = ~uVar9 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar9 < *(int *)(lVar4 + 0x18)) {
      uVar11 = uVar10;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       _Var15 = GlobalVectorConstants::IntAllMask, bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    lVar12 = (longlong)(int)uVar9 * 0x20;
    piVar1 = (int *)(lVar12 + lVar4);
    auVar14._0_4_ = -(uint)(*piVar1 == (param_2->VectorIndex).m128i_i32[0]) ^ _Var15.m128i_u32[0];
    auVar14._4_4_ = -(uint)(piVar1[1] == (param_2->VectorIndex).m128i_i32[1]) ^ _Var15.m128i_u32[1];
    auVar14._8_4_ = -(uint)(piVar1[2] == (param_2->VectorIndex).m128i_i32[2]) ^ _Var15.m128i_u32[2];
    auVar14._12_4_ = -(uint)(piVar1[3] == (param_2->VectorIndex).m128i_i32[3]) ^ _Var15.m128i_u32[3]
    ;
    iVar8 = movmskps((int)lVar4,auVar14);
    if (iVar8 == 0) {
      lVar4 = *(longlong *)((longlong)this + 0x18);
      uVar11 = 0;
      if ((int)uVar9 < *(int *)(lVar4 + 0x18)) {
        uVar11 = uVar10;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 0x10 + lVar12);
      local_res8[0] = uVar2;
      local_res20[0] = param_1;
      cVar7 = (**(code **)((longlong)this + 8))
                        (*(undefined8 *)((longlong)this + 0x10),local_res20,local_res8);
      param_2 = local_res18;
      _Var15 = GlobalVectorConstants::IntAllMask;
      if (cVar7 != '\0') {
        LOCK();
        piVar1 = (int *)((longlong)this + 0x38);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (iVar8 < *(int *)((longlong)this + 0x3c)) {
          AcquireSRWLockShared((PSRWLOCK)((longlong)this + 0x40));
          uVar13 = CONCAT44(uVar2,local_res10);
          if ((iVar8 < 0 || *(int *)((longlong)this + 0x30) <= iVar8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined8 *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 8) = uVar13;
          ReleaseSRWLockShared((PSRWLOCK)((longlong)this + 0x40));
          param_2 = local_res18;
          _Var15 = GlobalVectorConstants::IntAllMask;
          param_1 = local_res10;
        }
        else {
          AcquireSRWLockExclusive((PSRWLOCK)((longlong)this + 0x40));
          this_00 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)this + 0x28);
          if (*(int *)((longlong)this + 0x3c) <= iVar8) {
            TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNum
                      (this_00,iVar8 + 1,Default);
            TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNum
                      (this_00,*(int *)((longlong)this + 0x34),Default);
            LOCK();
            *(undefined4 *)((longlong)this + 0x3c) = *(undefined4 *)((longlong)this + 0x30);
            UNLOCK();
          }
          uVar13 = CONCAT44(uVar2,local_res10);
          if ((iVar8 < 0 || *(int *)((longlong)this + 0x30) <= iVar8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined8 *)((this_00->AllocatorInstance).Data + (longlong)iVar8 * 8) = uVar13;
          ReleaseSRWLockExclusive((PSRWLOCK)((longlong)this + 0x40));
          param_2 = local_res18;
          _Var15 = GlobalVectorConstants::IntAllMask;
          param_1 = local_res10;
        }
      }
    }
    lVar4 = *(longlong *)((longlong)this + 0x18);
    uVar11 = 0;
    if ((int)uVar9 < *(int *)(lVar4 + 0x18)) {
      uVar11 = uVar10;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       _Var15 = GlobalVectorConstants::IntAllMask, bVar6)) break;
    uVar9 = *(uint *)((longlong)(int)uVar9 * 0x20 + 0x18 + *(longlong *)(lVar4 + 0x10));
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

