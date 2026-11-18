// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 3

// Construct<UE::Dataflow::FCategoryRegistry> @ 14440de80

void __cdecl FLazySingleton::Construct<UE::Dataflow::FCategoryRegistry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Construct<UE::Dataflow::FNodeColorsRegistry> @ 14440deb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLazySingleton::Construct<UE::Dataflow::FNodeColorsRegistry>(void *param_1)

{
  ulonglong uVar1;
  UObject *pUVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *this;
  FDelegateHandle FVar7;
  longlong lVar8;
  FName *pFVar9;
  FNodeColors *pFVar10;
  byte bVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FNameEntryId FVar16;
  uint uVar17;
  undefined1 auStackY_138 [32];
  undefined1 auStack_108 [8];
  FName FStack_100;
  FName FStack_f8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  int iStack_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  FName FStack_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FName FStack_98;
  FName FStack_90;
  undefined1 auStack_88 [32];
  uint *puStack_68;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  FDelegateHandle FStack_48;
  int iStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar16.Value = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  this = UDataflowSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  FVar7 = TMulticastDelegateRegistration<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
          ::AddRaw<UE::Dataflow::FNodeColorsRegistry>
                    ((TMulticastDelegateRegistration<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
                      *)&pUVar2[6].field_0x8,(FNodeColorsRegistry *)&FStack_98,(pmf_8a83b43d)param_1
                    );
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)FVar7.ID;
  auStack_88._0_8_ = (FScriptContainerElement *)0x0;
  auStack_88._8_8_ = 0;
  puStack_68 = (uint *)0x0;
  uStack_60 = 0;
  uStack_5c = 0x80;
  uStack_58 = 0xffffffff;
  iStack_54 = 0;
  FStack_48.ID = 0;
  iStack_40 = 0;
  TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
               *)auStack_88,
              (TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
               *)&pUVar2[1].field_0x10);
  uVar14 = uStack_60;
  FStack_f8.Number = 1;
  iStack_e0 = 0;
  uStack_e4 = 0;
  if (uStack_60 != 0) {
    puVar12 = (uint *)(auStack_88 + 0x10);
    if (puStack_68 != (uint *)0x0) {
      puVar12 = puStack_68;
    }
    uVar17 = *puVar12;
    iStack_e0 = 0;
    while (uVar17 == 0) {
      lVar8 = (longlong)(int)FVar16.Value;
      iStack_e0 = iStack_e0 + 0x20;
      FVar16.Value = FVar16.Value + 1;
      uStack_e4 = uStack_60;
      if ((int)(((int)(uStack_60 - 1) >> 0x1f & 0x1fU) + (uStack_60 - 1)) >> 5 < (int)FVar16.Value)
      goto LAB_144431991;
      uVar17 = (puVar12 + 1)[lVar8];
    }
    FStack_f8.Number = -uVar17 & uVar17;
    uVar1 = (ulonglong)FStack_f8.Number * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_d0 = (int)lVar8;
    uStack_e4 = iStack_e0 + -1 + iStack_d0;
    if ((int)uStack_60 < (int)uStack_e4) {
      uStack_e4 = uStack_60;
    }
  }
LAB_144431991:
  FStack_100 = (FName)auStack_88;
  pTStack_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_88 + 0x10);
  uVar17 = uStack_60 & 0xffffffe0;
  iStack_d8 = auStack_88._8_4_ - iStack_54;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  FStack_f8.ComparisonIndex.Value = FVar16.Value;
  TStack_c0._padding_._0_4_ = FVar16.Value;
  TStack_c0._padding_._4_4_ = FStack_f8.Number;
  iVar13 = (int)uStack_60 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = iStack_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar11 = (byte)uStack_60;
  uStack_dc = uStack_e4;
  FStack_c8 = FStack_100;
  TStack_c0.Array = pTStack_f0;
  if (((int)uStack_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar14 != uStack_60) {
    puVar12 = (uint *)(auStack_88 + 0x10);
    if (puStack_68 != (uint *)0x0) {
      puVar12 = puStack_68;
    }
    uVar14 = -1 << (bVar11 & 0x1f) & puVar12[iVar13];
    while (uVar14 == 0) {
      lVar8 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uStack_60;
      if ((int)(((int)(uStack_60 - 1) >> 0x1f & 0x1fU) + (uStack_60 - 1)) >> 5 < iVar13)
      goto LAB_144431a9c;
      uVar14 = (puVar12 + 1)[lVar8];
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar14 = (int)lVar8 + -1 + uVar17;
    if ((int)uStack_60 < (int)uVar14) {
      uVar14 = uStack_60;
    }
  }
LAB_144431a9c:
  do {
    FVar3 = FStack_c8;
    if (*(int *)((longlong)FStack_c8 + 8) - *(int *)((longlong)FStack_c8 + 0x34) != (int)uStack_a0)
    {
      `TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStack_108);
    }
    if (((TStack_c0.CurrentBitIndex == uVar14) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_88 + 0x10))) &&
       (FVar3 == (FName)auStack_88)) {
      iStack_40 = 0;
      if ((void *)FStack_48.ID != (void *)0x0) {
        FMemory::Free((void *)FStack_48.ID);
      }
      iVar13 = SUB84(auStack_88._8_8_,4);
      auStack_88._8_8_ = auStack_88._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,0,(ForAnyElementType *)auStack_88,0,(int *)(auStack_88 + 0xc));
      }
      uStack_58 = 0xffffffff;
      iStack_54 = 0;
      uStack_60 = 0;
      if (0x80 < uStack_5c) {
        uStack_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_88 + 0x10),0);
      }
      if (puStack_68 != (uint *)0x0) {
        FMemory::Free(puStack_68);
      }
      if ((FScriptContainerElement *)auStack_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_88._0_8_);
      }
      return;
    }
    pFVar15 = (FName *)((longlong)TStack_c0.CurrentBitIndex * 0x30 + *(longlong *)FVar3);
    FStack_98 = pFVar15[1];
    FStack_90 = pFVar15[2];
    FVar3 = *pFVar15;
    FStack_100 = pFVar15[3];
    FStack_f8 = pFVar15[4];
    uVar17 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    uVar17 = uVar17 + FVar3.Number;
    if (*(int *)((longlong)param_1 + 8) != *(int *)((longlong)param_1 + 0x34)) {
      lVar8 = (longlong)param_1 + 0x38;
      if (*(longlong *)((longlong)param_1 + 0x40) != 0) {
        lVar8 = *(longlong *)((longlong)param_1 + 0x40);
      }
      uVar6 = *(uint *)(lVar8 + (ulonglong)(*(int *)((longlong)param_1 + 0x48) - 1U & uVar17) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          pFVar9 = (FName *)((longlong)(int)uVar6 * 0x30 + *(longlong *)param_1);
          if (*pFVar9 == *pFVar15) {
            if (pFVar9 != (FName *)0x0) {
              pFVar10 = (FNodeColors *)(pFVar9 + 1);
              goto LAB_144431b68;
            }
            break;
          }
          uVar6 = pFVar9[5].ComparisonIndex.Value;
        } while (uVar6 != 0xffffffff);
      }
    }
    pFVar10 = TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
              ::EmplaceByHash<FName_const_&>(param_1,uVar17,pFVar15);
LAB_144431b68:
    *(FName *)&(pFVar10->NodeTitleColor).field0_0x0 = FStack_98;
    *(FName *)((longlong)&(pFVar10->NodeTitleColor).field0_0x0 + 8) = FStack_90;
    *(FName *)&(pFVar10->NodeBodyTintColor).field0_0x0 = FStack_100;
    *(FName *)((longlong)&(pFVar10->NodeBodyTintColor).field0_0x0 + 8) = FStack_f8;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// Construct<UE::Dataflow::FPinSettingsRegistry> @ 14440dec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLazySingleton::Construct<UE::Dataflow::FPinSettingsRegistry>(void *param_1)

{
  FName *pFVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  float fVar4;
  UObject *pUVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *plVar9;
  bool bVar10;
  UClass *this;
  FDelegateHandle FVar11;
  longlong lVar12;
  FPinSettings *pFVar13;
  byte bVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 auStackY_138 [32];
  undefined1 auStack_108 [8];
  longlong *plStack_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  int iStack_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  longlong *plStack_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [32];
  uint *puStack_68;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  FDelegateHandle FStack_48;
  int iStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  iVar18 = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  this = UDataflowSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar5 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  FVar11 = TMulticastDelegateRegistration<void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
           ::AddRaw<UE::Dataflow::FPinSettingsRegistry>
                     ((TMulticastDelegateRegistration<void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
                       *)(pUVar5 + 7),(FPinSettingsRegistry *)auStack_98,(pmf_a39961ab)param_1);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)FVar11.ID;
  auStack_88._0_8_ = (FScriptContainerElement *)0x0;
  auStack_88._8_8_ = 0;
  puStack_68 = (uint *)0x0;
  uStack_60 = 0;
  uStack_5c = 0x80;
  uStack_58 = 0xffffffff;
  iStack_54 = 0;
  FStack_48.ID = 0;
  iStack_40 = 0;
  TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
               *)auStack_88,
              (TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
               *)&pUVar5[3].field_0x10);
  uVar17 = uStack_60;
  uStack_f4 = 1;
  iStack_e0 = 0;
  uStack_e4 = 0;
  if (uStack_60 != 0) {
    puVar15 = (uint *)(auStack_88 + 0x10);
    if (puStack_68 != (uint *)0x0) {
      puVar15 = puStack_68;
    }
    uVar19 = *puVar15;
    iStack_e0 = 0;
    while (uVar19 == 0) {
      lVar12 = (longlong)iVar18;
      iStack_e0 = iStack_e0 + 0x20;
      iVar18 = iVar18 + 1;
      uStack_e4 = uStack_60;
      if ((int)(((int)(uStack_60 - 1) >> 0x1f & 0x1fU) + (uStack_60 - 1)) >> 5 < iVar18)
      goto LAB_144431ec1;
      uVar19 = (puVar15 + 1)[lVar12];
    }
    uStack_f4 = -uVar19 & uVar19;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_d0 = (int)lVar12;
    uStack_e4 = iStack_e0 + -1 + iStack_d0;
    if ((int)uStack_60 < (int)uStack_e4) {
      uStack_e4 = uStack_60;
    }
  }
LAB_144431ec1:
  plStack_100 = (longlong *)auStack_88;
  pTStack_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_88 + 0x10);
  uVar19 = uStack_60 & 0xffffffe0;
  iStack_d8 = auStack_88._8_4_ - iStack_54;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_f4,iVar18);
  iVar16 = (int)uStack_60 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = iStack_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar14 = (byte)uStack_60;
  iStack_f8 = iVar18;
  uStack_dc = uStack_e4;
  plStack_c8 = plStack_100;
  TStack_c0.Array = pTStack_f0;
  if (((int)uStack_60 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar17 != uStack_60) {
    puVar15 = (uint *)(auStack_88 + 0x10);
    if (puStack_68 != (uint *)0x0) {
      puVar15 = puStack_68;
    }
    uVar17 = -1 << (bVar14 & 0x1f) & puVar15[iVar16];
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar16;
      uVar19 = uVar19 + 0x20;
      iVar16 = iVar16 + 1;
      uVar17 = uStack_60;
      if ((int)(((int)(uStack_60 - 1) >> 0x1f & 0x1fU) + (uStack_60 - 1)) >> 5 < iVar16)
      goto LAB_144431fcc;
      uVar17 = (puVar15 + 1)[lVar12];
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar17 = (int)lVar12 + -1 + uVar19;
    if ((int)uStack_60 < (int)uVar17) {
      uVar17 = uStack_60;
    }
  }
LAB_144431fcc:
  do {
    plVar9 = plStack_c8;
    if ((int)plStack_c8[1] - *(int *)((longlong)plStack_c8 + 0x34) != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStack_108);
    }
    lVar12 = (longlong)TStack_c0.CurrentBitIndex;
    if (((TStack_c0.CurrentBitIndex == uVar17) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_88 + 0x10))) &&
       (plVar9 == (longlong *)auStack_88)) {
      iStack_40 = 0;
      if ((void *)FStack_48.ID != (void *)0x0) {
        FMemory::Free((void *)FStack_48.ID);
      }
      iVar18 = SUB84(auStack_88._8_8_,4);
      auStack_88._8_8_ = auStack_88._8_8_ & 0xffffffff00000000;
      if (iVar18 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,0,(ForAnyElementType *)auStack_88,0,(int *)(auStack_88 + 0xc));
      }
      uStack_58 = 0xffffffff;
      iStack_54 = 0;
      uStack_60 = 0;
      if (0x80 < uStack_5c) {
        uStack_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_88 + 0x10),0);
      }
      if (puStack_68 != (uint *)0x0) {
        FMemory::Free(puStack_68);
      }
      if ((FScriptContainerElement *)auStack_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_88._0_8_);
      }
      return;
    }
    lVar6 = *plVar9;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar12 * 0x24);
    auStack_98._0_8_ = *puVar3;
    auStack_98._8_8_ = puVar3[1];
    uVar7 = *(undefined8 *)(lVar6 + lVar12 * 0x24);
    pFVar1 = (FName *)(lVar6 + lVar12 * 0x24);
    fVar4 = (float)pFVar1[3].ComparisonIndex.Value;
    uVar19 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
    uVar19 = uVar19 + (int)((ulonglong)uVar7 >> 0x20);
    if (*(int *)((longlong)param_1 + 8) != *(int *)((longlong)param_1 + 0x34)) {
      lVar12 = (longlong)param_1 + 0x38;
      if (*(longlong *)((longlong)param_1 + 0x40) != 0) {
        lVar12 = *(longlong *)((longlong)param_1 + 0x40);
      }
      iVar18 = *(int *)(lVar12 + (ulonglong)(*(int *)((longlong)param_1 + 0x48) - 1U & uVar19) * 4);
      if (iVar18 != -1) {
        do {
          lVar12 = *(longlong *)param_1 + (longlong)iVar18 * 0x24;
          if (*(FName *)(*(longlong *)param_1 + (longlong)iVar18 * 0x24) == *pFVar1) {
            if (lVar12 != 0) {
              pFVar13 = (FPinSettings *)(lVar12 + 8);
              goto LAB_144432096;
            }
            break;
          }
          iVar18 = *(int *)(lVar12 + 0x1c);
        } while (iVar18 != -1);
      }
    }
    pFVar13 = TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
              ::EmplaceByHash<FName_const_&>(param_1,uVar19,pFVar1);
LAB_144432096:
    *(undefined8 *)&(pFVar13->PinColor).field0_0x0 = auStack_98._0_8_;
    *(undefined8 *)((longlong)&(pFVar13->PinColor).field0_0x0 + 8) = auStack_98._8_8_;
    pFVar13->WireThickness = fVar4;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

