// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// AddByHash @ 142b53cd0

void __thiscall
TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::AddByHash
          (void *this,uint param_1,uint param_2,bool *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  float fVar8;
  
  if (param_2 == 0xffffffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                       ,0x1af,L"Add called with invalid element.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x10);
    if (iVar4 == 0) {
      Empty(this,8);
      iVar4 = *(int *)((longlong)this + 0x10);
    }
    if (((*(longlong *)((longlong)this + 8) == 0) || (iVar4 == 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Hash != nullptr && HashSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                           ,0x1b6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = *(uint *)((longlong)this + 0x10);
    if (uVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (ulonglong)param_1 % (ulonglong)uVar5;
      uVar7 = 0;
      if (uVar5 != 0) {
        do {
          uVar1 = *(uint *)(*(longlong *)((longlong)this + 8) + uVar6 * 4);
          if (uVar1 == 0xffffffff) {
            if (uVar7 < uVar5) goto LAB_142b53df1;
            break;
          }
          if ((uVar1 == param_2) && (param_3 != (bool *)0x0)) {
            *param_3 = true;
            goto LAB_142b53e09;
          }
          uVar6 = (ulonglong)((int)uVar6 + 1) % (ulonglong)uVar5;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar5);
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CollisionChainCount < HashSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                       ,0x1da,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_142b53df1:
    *(uint *)(*(longlong *)((longlong)this + 8) + uVar6 * 4) = param_2;
    *(int *)((longlong)this + 0x14) = *(int *)((longlong)this + 0x14) + 1;
    if (param_3 != (bool *)0x0) {
      *param_3 = false;
    }
LAB_142b53e09:
    fVar8 = (float)*(uint *)((longlong)this + 0x14);
    if (__real_3f400000 < fVar8 / (float)*(uint *)((longlong)this + 0x10)) {
      uVar5 = 0;
      if (*(uint *)((longlong)this + 0x14) != 0) {
        uVar7 = -((int)ROUND(__real_bf000000 - (fVar8 + fVar8 + fVar8 + fVar8)) >> 1);
        uVar5 = 8;
        if (8 < uVar7) {
          uVar5 = uVar7;
        }
      }
      Reallocate(this,uVar5);
    }
  }
  return;
}

// Empty @ 142b58100

void __thiscall
TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::Empty
          (void *this,int param_1)

{
  float fVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  
  uVar5 = 0;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    *(undefined8 *)((longlong)this + 8) = 0;
  }
  fVar1 = __real_bf000000;
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_1 != 0) {
    *(undefined4 *)((longlong)this + 0x14) = 0;
    fVar6 = (float)(uint)param_1 + (float)(uint)param_1;
    uVar2 = -((int)ROUND(fVar1 - (fVar6 + fVar6)) >> 1);
    uVar4 = 8;
    if (8 < uVar2) {
      uVar4 = uVar2;
    }
    *(uint *)((longlong)this + 0x10) = uVar4;
    if (uVar4 != 0) {
      pvVar3 = FMemory::Malloc((ulonglong)uVar4 << 2,4);
      *(void **)((longlong)this + 8) = pvVar3;
      if (*(int *)((longlong)this + 0x10) != 0) {
        do {
          uVar4 = (int)uVar5 + 1;
          *(undefined4 *)(*(longlong *)((longlong)this + 8) + uVar5 * 4) = 0xffffffff;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)((longlong)this + 0x10));
      }
    }
    return;
  }
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return;
}

// GetStats @ 142b597f0

FSetKeyFuncsStats __thiscall
TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::GetStats(void *this)

{
  int *piVar1;
  longlong *plVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FSetKeyFuncsStats FVar9;
  FAutomationTestFramework *pFVar10;
  uint uVar11;
  int iVar12;
  FSetKeyFuncsStats in_RDX;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong local_res8;
  FString local_38;
  
  if (*(int *)((longlong)this + 0x14) == 0) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  if (((*(int *)((longlong)this + 0x10) == 0) || (*(longlong *)((longlong)this + 8) == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("HashSize > 0 && Hash != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                         ,0x131,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar9 = (FSetKeyFuncsStats)(*pcVar4)();
    return FVar9;
  }
  piVar1 = *(int **)((longlong)this + 8);
  uVar16 = 0;
  uVar11 = 0;
  if (*piVar1 == -1) {
LAB_142b598bb:
    if (uVar11 < *(uint *)((longlong)this + 0x10)) goto LAB_142b598e7;
  }
  else {
    uVar13 = *(uint *)((longlong)this + 0x10);
    uVar11 = 1;
    uVar16 = uVar13 - 1;
    uVar14 = (ulonglong)uVar16;
    if (uVar13 < 2) goto LAB_142b598bb;
    do {
      if (piVar1[uVar14] == -1) {
        uVar16 = ((int)uVar14 + 1U) % uVar13;
        goto LAB_142b598e7;
      }
      uVar11 = uVar11 + 1;
      uVar14 = (ulonglong)((int)uVar14 - 1) % (ulonglong)uVar13;
      uVar16 = (uint)uVar14;
    } while (uVar11 < uVar13);
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CollisionChainCount < HashSize",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                     ,0x147,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    FVar9 = (FSetKeyFuncsStats)(*pcVar4)();
    return FVar9;
  }
LAB_142b598e7:
  uVar15 = 0;
  *(undefined4 *)((longlong)in_RDX + 4) = 0;
  local_res8 = 0;
  bVar5 = true;
  uVar14 = (ulonglong)uVar16;
  do {
    while( true ) {
      uVar11 = (uint)uVar14;
      if ((uVar11 == uVar16) && (!bVar5)) {
        *(float *)in_RDX = (float)uVar15 / (float)*(uint *)((longlong)this + 0x14);
        return in_RDX;
      }
      if (*(int *)(*(longlong *)((longlong)this + 8) + uVar14 * 4) != -1) break;
      if (*(uint *)((longlong)this + 0x10) == 0) {
        uVar14 = 0;
        bVar5 = false;
      }
      else {
        uVar14 = (ulonglong)(uVar11 + 1) % (ulonglong)*(uint *)((longlong)this + 0x10);
        bVar5 = false;
      }
    }
    while ((uVar13 = (uint)uVar14, uVar13 != uVar16 || (bVar5))) {
      uVar7 = *(uint *)(*(longlong *)((longlong)this + 8) + uVar14 * 4);
      if (uVar7 == 0xffffffff) break;
      plVar2 = *(longlong **)this;
      if (uVar7 < *(uint *)((longlong)plVar2 + 100)) {
        uVar6 = 0;
        if ((int)uVar7 < (int)plVar2[1]) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          FVar9 = (FSetKeyFuncsStats)(*pcVar4)();
          return FVar9;
        }
        uVar7 = *(uint *)(*plVar2 + (longlong)(int)uVar7 * 4);
        if (uVar7 == 0xffffffff) goto LAB_142b599b9;
      }
      else {
LAB_142b599b9:
        pFVar10 = FAutomationTestFramework::Get();
        pFVar3 = pFVar10->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_38,L"GetTypeHash was unexpectedly called on unknown value %u.")
        ;
        (*pcVar4)(pFVar3,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        uVar7 = 0xffffffff;
        uVar15 = local_res8;
      }
      if (*(uint *)((longlong)this + 0x10) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 % *(uint *)((longlong)this + 0x10);
      }
      if (uVar13 < uVar11) {
        if (uVar7 < uVar11) {
          if (uVar7 <= uVar13) {
LAB_142b59ac3:
            iVar12 = uVar13 - uVar7;
            goto LAB_142b59a89;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CollisionChainStart <= RealBucket || RealBucket <= Bucket",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                             ,0x16d,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            FVar9 = (FSetKeyFuncsStats)(*pcVar4)();
            return FVar9;
          }
        }
        else if (uVar7 <= uVar13) goto LAB_142b59ac3;
        iVar12 = (*(int *)((longlong)this + 0x10) - uVar7) + uVar13;
      }
      else {
        if (((uVar7 < uVar11) || (uVar13 < uVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CollisionChainStart <= RealBucket && RealBucket <= Bucket",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                               ,0x168,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          FVar9 = (FSetKeyFuncsStats)(*pcVar4)();
          return FVar9;
        }
        iVar12 = uVar13 - uVar7;
      }
LAB_142b59a89:
      iVar12 = iVar12 + 1;
      uVar7 = *(uint *)((longlong)this + 0x10);
      iVar8 = iVar12;
      if (iVar12 < *(int *)((longlong)in_RDX + 4)) {
        iVar8 = *(int *)((longlong)in_RDX + 4);
      }
      *(int *)((longlong)in_RDX + 4) = iVar8;
      uVar15 = uVar15 + (longlong)iVar12;
      local_res8 = uVar15;
      if (uVar7 == 0) {
        uVar14 = 0;
        bVar5 = false;
      }
      else {
        uVar14 = (ulonglong)(uVar13 + 1) % (ulonglong)uVar7;
        bVar5 = false;
      }
    }
  } while( true );
}

// Reallocate @ 142b61d60

void __thiscall
TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::Reallocate
          (void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  void *pvVar9;
  FAutomationTestFramework *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  FString local_38;
  
  if (((*(uint *)((longlong)this + 0x14) != 0) && (param_1 <= *(uint *)((longlong)this + 0x14))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumValues == 0 || NewHashSize > NumValues",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                         ,0x254,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_1 == 0) {
    Empty(this,0);
    return;
  }
  uVar1 = *(uint *)((longlong)this + 0x10);
  uVar15 = (ulonglong)uVar1;
  puVar4 = *(uint **)((longlong)this + 8);
  iVar2 = *(int *)((longlong)this + 0x14);
  *(uint *)((longlong)this + 0x10) = param_1;
  pvVar9 = FMemory::Malloc((ulonglong)param_1 << 2,4);
  uVar12 = 0;
  *(void **)((longlong)this + 8) = pvVar9;
  if (*(int *)((longlong)this + 0x10) != 0) {
    do {
      *(undefined4 *)(*(longlong *)((longlong)this + 8) + uVar12 * 4) = 0xffffffff;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)((longlong)this + 0x10));
  }
  *(undefined4 *)((longlong)this + 0x14) = 0;
  puVar14 = puVar4;
  if (uVar1 != 0) {
    do {
      uVar1 = *puVar14;
      if (uVar1 != 0xffffffff) {
        plVar5 = *(longlong **)this;
        if (uVar1 < *(uint *)((longlong)plVar5 + 100)) {
          uVar11 = 0;
          if ((int)uVar1 < (int)plVar5[1]) {
            uVar11 = ~uVar1 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar11 = *(uint *)(*plVar5 + (longlong)(int)uVar1 * 4);
          if (uVar11 == 0xffffffff) goto LAB_142b61e95;
        }
        else {
LAB_142b61e95:
          pFVar10 = FAutomationTestFramework::Get();
          pFVar6 = pFVar10->CurrentTest;
          pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_38,L"GetTypeHash was unexpectedly called on unknown value %u.");
          (*pcVar7)(pFVar6);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          uVar11 = 0xffffffff;
        }
        uVar3 = *(uint *)((longlong)this + 0x10);
        if (uVar3 == 0) {
          uVar12 = 0;
LAB_142b61f18:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CollisionChainCount < HashSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                             ,0x1da,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          uVar13 = 0;
          uVar12 = (ulonglong)uVar11 % (ulonglong)uVar3;
          if (uVar3 != 0) {
            do {
              if (*(int *)(*(longlong *)((longlong)this + 8) + uVar12 * 4) == -1)
              goto LAB_142b61f3e;
              uVar12 = (ulonglong)((int)uVar12 + 1) % (ulonglong)uVar3;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar3);
          }
          if (uVar3 <= uVar13) goto LAB_142b61f18;
        }
LAB_142b61f3e:
        *(uint *)(*(longlong *)((longlong)this + 8) + uVar12 * 4) = uVar1;
        *(int *)((longlong)this + 0x14) = *(int *)((longlong)this + 0x14) + 1;
      }
      uVar15 = uVar15 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar15 != 0);
  }
  FMemory::Free(puVar4);
  if ((*(int *)((longlong)this + 0x14) != iVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumValues == OldNumValues",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                         ,0x273,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// RemoveByHash @ 142b63080

int __thiscall
TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::RemoveByHash
          (void *this,uint param_1,uint *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAutomationTestFramework *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  FString local_38;
  
  if (*param_2 == 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                       ,0x1ef,L"Remove called with invalid element.");
    if (!bVar5) {
      return 0;
    }
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if (*(int *)((longlong)this + 0x14) == 0) {
    return 0;
  }
  if (((*(int *)((longlong)this + 0x10) == 0) || (*(longlong *)((longlong)this + 8) == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("HashSize != 0 && Hash != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                         ,0x1f6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uVar13 = *(uint *)((longlong)this + 0x10);
  if (uVar13 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulonglong)param_1 % (ulonglong)uVar13;
    uVar12 = 0;
    if (uVar13 != 0) {
      do {
        uVar10 = *(uint *)(*(longlong *)((longlong)this + 8) + uVar11 * 4);
        if (uVar10 == 0xffffffff) {
          return 0;
        }
        if (uVar10 == *param_2) goto LAB_142b63170;
        uVar11 = (ulonglong)((int)uVar11 + 1) % (ulonglong)uVar13;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CollisionChainCount < HashSize",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                     ,0x209,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
LAB_142b63170:
  uVar13 = *(uint *)((longlong)this + 0x10);
  if (uVar13 != 0) {
    uVar12 = 0;
    uVar9 = (ulonglong)((int)uVar11 + 1) % (ulonglong)uVar13;
    if (uVar13 != 0) {
      do {
        lVar1 = *(longlong *)((longlong)this + 8);
        uVar8 = (uint)uVar9;
        uVar10 = *(uint *)(lVar1 + uVar9 * 4);
        if (uVar10 == 0xffffffff) break;
        plVar2 = *(longlong **)this;
        if (uVar10 < *(uint *)((longlong)plVar2 + 100)) {
          uVar13 = 0;
          if ((int)uVar10 < (int)plVar2[1]) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar6 = (*pcVar4)();
            return iVar6;
          }
          uVar13 = *(uint *)(*plVar2 + (longlong)(int)uVar10 * 4);
          if (uVar13 == 0xffffffff) goto LAB_142b63225;
        }
        else {
LAB_142b63225:
          pFVar7 = FAutomationTestFramework::Get();
          pFVar3 = pFVar7->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_38,L"GetTypeHash was unexpectedly called on unknown value %u.");
          (*pcVar4)(pFVar3,&local_38,0);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          uVar13 = 0xffffffff;
        }
        if (*(uint *)((longlong)this + 0x10) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar13 % *(uint *)((longlong)this + 0x10);
        }
        if (uVar13 != uVar8) {
          uVar10 = (uint)uVar11;
          if (uVar13 < uVar8) {
            if ((uVar13 <= uVar10) && (uVar10 < uVar8)) {
LAB_142b63295:
              *(undefined4 *)(*(longlong *)((longlong)this + 8) + uVar11 * 4) =
                   *(undefined4 *)(lVar1 + uVar9 * 4);
              uVar11 = uVar9;
            }
          }
          else if ((uVar10 < uVar8) || (uVar13 <= uVar10)) goto LAB_142b63295;
        }
        uVar13 = *(uint *)((longlong)this + 0x10);
        if (uVar13 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (ulonglong)(uVar8 + 1) % (ulonglong)uVar13;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
    }
    if (uVar12 < uVar13) goto LAB_142b63304;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CollisionChainCount < HashSize",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                     ,0x247,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
LAB_142b63304:
  *(undefined4 *)(*(longlong *)((longlong)this + 8) + uVar11 * 4) = 0xffffffff;
  *(int *)((longlong)this + 0x14) = *(int *)((longlong)this + 0x14) + -1;
  return 1;
}

