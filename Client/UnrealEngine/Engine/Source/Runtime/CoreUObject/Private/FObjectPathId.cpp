// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// StoreObjectPathId<UE::CoreUObject::Private::TStringViewNamePathProducer<char>_> @ 1420e70a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __thiscall
UE::CoreUObject::Private::FObjectPathId::
StoreObjectPathId<UE::CoreUObject::Private::TStringViewNamePathProducer<char>_>
          (FObjectPathId *this,TStringViewNamePathProducer<char> *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ForElementType<FMinimalName> FVar14;
  FScriptContainerElement *pFVar15;
  FName FVar16;
  FName FVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  FNameEntryId FVar21;
  uint uVar22;
  FName FVar23;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  FName local_1b8;
  uint local_1b0;
  uint local_1ac;
  FObjectPathId *local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  uint uStack_198;
  int iStack_194;
  int local_190;
  TMultiMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>_>
  *local_188;
  uint uStack_180;
  int iStack_17c;
  int local_178;
  undefined8 local_170;
  uint local_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  undefined1 local_158 [16];
  void *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ForElementType<FMinimalName> local_128;
  int iStack_120;
  undefined4 uStack_11c;
  uint *local_118;
  uint *local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  TArrayView<FMinimalName_const_,int> local_d8;
  char *local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  ForElementType<FMinimalName> local_68;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_1a8 = this;
  if ((param_1->CurrentStringView).Size == 0) {
    local_1b8.ComparisonIndex.Value = 0;
    local_1b8.Number = 0;
    iVar18 = 0;
    uVar11 = 0;
    FVar21.Value = 0;
  }
  else {
    pcVar3 = (param_1->CurrentStringView).DataPtr;
    local_c8 = (param_1->CurrentStringView).DataPtr;
    uStack_c0 = *(undefined8 *)&(param_1->CurrentStringView).Size;
    pcVar19 = pcVar3 + (int)*(undefined8 *)&(param_1->CurrentStringView).Size;
    do {
      if (pcVar3 == pcVar19) {
        local_b8 = local_c8;
        uStack_b0 = uStack_c0;
        pFVar9 = ::FName::FName(&local_100,(int)*(undefined8 *)&(param_1->CurrentStringView).Size,
                                local_c8,FNAME_Add);
        iVar18 = 0;
        local_1b8 = *pFVar9;
        (param_1->CurrentStringView).DataPtr = (char *)0x0;
        (param_1->CurrentStringView).Size = 0;
        goto LAB_1420e7150;
      }
      pcVar1 = pcVar19 + -1;
      pcVar19 = pcVar19 + -1;
    } while ((*pcVar1 != '.') && (*pcVar1 != ':'));
    iVar2 = (param_1->CurrentStringView).Size;
    iVar18 = (int)pcVar19 - *(int *)&(param_1->CurrentStringView).DataPtr;
    iVar7 = (iVar2 - iVar18) + -1;
    iVar5 = iVar2;
    if (iVar7 < iVar2) {
      iVar5 = iVar7;
    }
    iVar7 = 0;
    if (0 < iVar5) {
      iVar7 = iVar5;
    }
    pFVar9 = ::FName::FName(&local_108,iVar7,pcVar3 + ((longlong)iVar2 - (longlong)iVar7),FNAME_Add)
    ;
    local_1b8 = *pFVar9;
    (param_1->CurrentStringView).Size = iVar18;
LAB_1420e7150:
    uVar11 = local_1b8.Number;
    FVar21.Value = local_1b8.ComparisonIndex.Value;
  }
  FVar17 = local_1b8;
  FVar23.ComparisonIndex.Value = 0;
  FVar23.Number = 0;
  if (local_1b8 != (FName)0x0) {
    uVar22 = 0;
    if (iVar18 == 0) {
      local_170 = 0;
      FVar16.ComparisonIndex.Value = 0;
      FVar16.Number = 0;
    }
    else {
      pcVar3 = (param_1->CurrentStringView).DataPtr;
      local_a8 = (param_1->CurrentStringView).DataPtr;
      uStack_a0 = *(undefined8 *)&(param_1->CurrentStringView).Size;
      pcVar19 = pcVar3 + (int)*(undefined8 *)&(param_1->CurrentStringView).Size;
      do {
        if (pcVar3 == pcVar19) {
          local_98 = local_a8;
          uStack_90 = uStack_a0;
          pFVar9 = ::FName::FName(&local_f0,(int)*(undefined8 *)&(param_1->CurrentStringView).Size,
                                  local_a8,FNAME_Add);
          FVar16 = *pFVar9;
          (param_1->CurrentStringView).DataPtr = (char *)0x0;
          (param_1->CurrentStringView).Size = 0;
          this = local_1a8;
          goto LAB_1420e721f;
        }
        pcVar1 = pcVar19 + -1;
        pcVar19 = pcVar19 + -1;
      } while ((*pcVar1 != '.') && (*pcVar1 != ':'));
      uVar13 = (param_1->CurrentStringView).Size;
      iVar18 = (int)pcVar19 - *(int *)&(param_1->CurrentStringView).DataPtr;
      uVar8 = (uVar13 - iVar18) - 1;
      uVar20 = uVar13;
      if ((int)uVar8 < (int)uVar13) {
        uVar20 = uVar8;
      }
      uVar8 = uVar22;
      if (0 < (int)uVar20) {
        uVar8 = uVar20;
      }
      pFVar9 = ::FName::FName(&local_f8,uVar8,
                              pcVar3 + ((longlong)(int)uVar13 - (longlong)(int)uVar8),FNAME_Add);
      FVar16 = *pFVar9;
      (param_1->CurrentStringView).Size = iVar18;
      this = local_1a8;
    }
LAB_1420e721f:
    if (((FVar16 == (FName)0x0) && ((uVar11 >> 0x1e & 1) == 0)) && (-1 < (int)uVar11)) {
      this->Index = FVar21.Value;
      this->Number = uVar11 | 0x40000000;
    }
    else {
      uStack_164 = FVar17.Number;
      local_68.SecondaryData = (ForElementType<FMinimalName>)0x0;
      local_44 = 3;
      local_1b0 = uStack_164 * 0x17 + FVar21.Value;
      local_48 = 1;
      local_68.InlineData[4] = (char)uStack_164;
      local_68.InlineData[5] = (char)(uStack_164 >> 8);
      local_68.InlineData[6] = (char)(uStack_164 >> 0x10);
      local_68.InlineData[7] = (char)(uStack_164 >> 0x18);
      local_68.InlineData[0] = (char)FVar21.Value;
      local_68.InlineData[1] = (char)(FVar21.Value >> 8);
      local_68.InlineData[2] = (char)(FVar21.Value >> 0x10);
      local_68.InlineData[3] = (char)(FVar21.Value >> 0x18);
      local_168 = FVar21.Value;
      while (iVar18 = local_48, FVar16 != (FName)0x0) {
        FVar17 = FVar23;
        local_1b8 = FVar16;
        if ((param_1->CurrentStringView).Size != 0) {
          pcVar3 = (param_1->CurrentStringView).DataPtr;
          local_88 = (param_1->CurrentStringView).DataPtr;
          uStack_80 = *(undefined8 *)&(param_1->CurrentStringView).Size;
          pcVar19 = pcVar3 + (int)*(undefined8 *)&(param_1->CurrentStringView).Size;
          do {
            if (pcVar3 == pcVar19) {
              local_78 = local_88;
              uStack_70 = uStack_80;
              pFVar9 = ::FName::FName(&local_e0,
                                      (int)*(undefined8 *)&(param_1->CurrentStringView).Size,
                                      local_88,FNAME_Add);
              FVar17 = *pFVar9;
              (param_1->CurrentStringView).DataPtr = (char *)0x0;
              (param_1->CurrentStringView).Size = 0;
              goto LAB_1420e7348;
            }
            pcVar1 = pcVar19 + -1;
            pcVar19 = pcVar19 + -1;
          } while ((*pcVar1 != '.') && (*pcVar1 != ':'));
          uVar11 = (param_1->CurrentStringView).Size;
          iVar18 = (int)pcVar19 - *(int *)&(param_1->CurrentStringView).DataPtr;
          uVar20 = (uVar11 - iVar18) - 1;
          uVar13 = uVar11;
          if ((int)uVar20 < (int)uVar11) {
            uVar13 = uVar20;
          }
          uVar20 = uVar22;
          if (0 < (int)uVar13) {
            uVar20 = uVar13;
          }
          pFVar9 = ::FName::FName(&local_e8,uVar20,
                                  pcVar3 + ((longlong)(int)uVar11 - (longlong)(int)uVar20),FNAME_Add
                                 );
          FVar17 = *pFVar9;
          (param_1->CurrentStringView).Size = iVar18;
        }
LAB_1420e7348:
        local_160 = (uint)FVar16.ComparisonIndex.Value;
        uVar11 = FVar16.Number;
        uStack_15c = uVar11;
        if (local_48 == local_44) {
          local_48 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FMinimalName>_>
                               (0x408,&local_68,&local_44);
        }
        FVar14 = (ForElementType<FMinimalName>)&local_68;
        if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
          FVar14 = local_68.SecondaryData;
        }
        lVar12 = (longlong)local_48;
        local_48 = local_48 + 1;
        *(ulonglong *)((longlong)FVar14 + lVar12 * 8) = CONCAT44(uStack_15c,local_160);
        uVar20 = uVar11 * 0x17 + local_1b8.ComparisonIndex.Value;
        uVar13 = local_1b0 - uVar20 ^ uVar20 >> 0xd;
        uVar11 = (-0x61c88647 - uVar13) - uVar20 ^ uVar13 << 8;
        uVar20 = (uVar20 - uVar11) - uVar13 ^ uVar11 >> 0xd;
        uVar13 = (uVar13 - uVar20) - uVar11 ^ uVar20 >> 0xc;
        uVar11 = (uVar11 - uVar13) - uVar20 ^ uVar13 << 0x10;
        uVar20 = (uVar20 - uVar11) - uVar13 ^ uVar11 >> 5;
        uVar13 = (uVar13 - uVar20) - uVar11 ^ uVar20 >> 3;
        uVar11 = (uVar11 - uVar13) - uVar20 ^ uVar13 << 10;
        local_1b0 = (uVar20 - uVar11) - uVar13 ^ uVar11 >> 0xf;
        FVar16 = FVar17;
      }
      local_128 = (ForElementType<FMinimalName>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
        local_128 = local_68.SecondaryData;
      }
      if ((local_48 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_d8._12_4_ = uStack_11c;
      local_d8.ArrayNum = iVar18;
      local_d8.DataPtr = (FMinimalName *)local_128;
      iStack_120 = iVar18;
      FStoredObjectPath::FStoredObjectPath((FStoredObjectPath *)(local_158 + 8),&local_d8);
      EnterCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
      uVar11 = local_1b0;
      local_188 = &GComplexPathHashToId;
      iStack_17c = -1;
      if (GComplexPathHashToId._72_4_ == 0) {
        local_178 = -1;
      }
      else {
        lVar12 = 0x154b91298;
        if (GComplexPathHashToId._64_8_ != 0) {
          lVar12 = GComplexPathHashToId._64_8_;
        }
        iVar18 = *(int *)(lVar12 + (longlong)(int)(GComplexPathHashToId._72_4_ - 1U & local_1b0) * 4
                         );
        do {
          iStack_17c = iVar18;
          local_178 = iStack_17c;
          if (iStack_17c == -1) break;
          local_178 = *(int *)(GComplexPathHashToId._0_8_ + 8 + (longlong)iStack_17c * 0x10);
          iVar18 = local_178;
        } while (*(uint *)(GComplexPathHashToId._0_8_ + (longlong)iStack_17c * 0x10) != local_1b0);
      }
      local_1a0 = 0x54b91260;
      uStack_19c = 1;
      uStack_180 = local_1b0;
      uStack_198 = local_1b0;
      iStack_194 = iStack_17c;
      lVar12 = local_1c0;
      iVar18 = local_178;
joined_r0x0001420e75a2:
      local_1c0 = lVar12;
      local_190 = iVar18;
      if (iStack_194 != -1) {
        local_1c0 = (longlong)GComplexPaths.ArrayNum;
        uVar20 = *(uint *)(GComplexPathHashToId._0_8_ + 4 + (longlong)iStack_194 * 0x10);
        uVar13 = uVar20 - 1;
        uVar8 = uVar22;
        if ((int)uVar13 < GComplexPaths.ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_1c8 = (longlong)(int)uVar13;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          lVar12 = local_1c0;
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_1c0 = lVar12;
        bVar6 = Private::operator==((FStoredObjectPath *)
                                    (GComplexPaths.AllocatorInstance.Data +
                                    (longlong)(int)uVar13 * 0x20),
                                    (FStoredObjectPath *)(local_158 + 8));
        if (bVar6) {
          local_1a8->Number = 0;
          FVar23.Number = 0;
          FVar23.ComparisonIndex.Value = local_158._8_4_;
          local_1a8->Index = uVar20;
          goto LAB_1420e7749;
        }
        iStack_194 = iVar18;
        if (iVar18 == -1) goto LAB_1420e7687;
        do {
          lVar10 = (longlong)iVar18;
          iVar2 = *(int *)(GComplexPathHashToId._0_8_ + 8 + lVar10 * 0x10);
          iStack_194 = iVar18;
          lVar12 = local_1c0;
          iVar18 = iVar2;
          if (*(uint *)(GComplexPathHashToId._0_8_ + lVar10 * 0x10) == uVar11) break;
          iStack_194 = iVar2;
        } while (iVar2 != -1);
        goto joined_r0x0001420e75a2;
      }
LAB_1420e7687:
      if (GComplexPaths.ArrayNum == GComplexPaths.ArrayMax) {
        GComplexPaths.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&GComplexPaths.AllocatorInstance,&GComplexPaths.ArrayMax);
      }
      local_1ac = GComplexPaths.ArrayNum + 1;
      pFVar15 = GComplexPaths.AllocatorInstance.Data + (longlong)GComplexPaths.ArrayNum * 0x20;
      GComplexPaths.ArrayNum = local_1ac;
      *(undefined4 *)pFVar15 = local_158._8_4_;
      if ((int)local_158._8_4_ < 4) {
        *(void **)(pFVar15 + 8) = local_148;
        *(undefined8 *)(pFVar15 + 0x10) = uStack_140;
        *(undefined8 *)(pFVar15 + 0x18) = local_138;
      }
      else {
        *(void **)(pFVar15 + 8) = local_148;
      }
      local_118 = &local_1b0;
      local_110 = &local_1ac;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>,FDefaultSetAllocator>
                  *)&GComplexPathHashToId,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)local_158,
                 (bool *)&local_118);
      local_1a8->Index = local_1ac;
      local_1a8->Number = 0;
      GCoreComplexObjectPathDebug = (FStoredObjectPathDebug *)GComplexPaths.AllocatorInstance.Data;
LAB_1420e7749:
      LeaveCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
      if (3 < (int)FVar23.ComparisonIndex.Value.Value) {
        operator_delete__(local_148);
      }
      if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
        FMemory::Free((void *)local_68.SecondaryData);
      }
    }
  }
  return;
}

// StoreObjectPathId<UE::CoreUObject::Private::TStringViewNamePathProducer<wchar_t>_> @ 1420e77b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __thiscall
UE::CoreUObject::Private::FObjectPathId::
StoreObjectPathId<UE::CoreUObject::Private::TStringViewNamePathProducer<wchar_t>_>
          (FObjectPathId *this,TStringViewNamePathProducer<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ForElementType<FMinimalName> FVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  wchar_t *pwVar17;
  FName FVar18;
  FName FVar19;
  uint uVar20;
  FNameEntryId FVar21;
  uint uVar22;
  FName FVar23;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  FName local_1b8;
  uint local_1b0;
  uint local_1ac;
  FObjectPathId *local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  uint uStack_198;
  int iStack_194;
  int local_190;
  TMultiMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>_>
  *local_188;
  uint uStack_180;
  int iStack_17c;
  int local_178;
  undefined8 local_170;
  uint local_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  undefined1 local_158 [16];
  void *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ForElementType<FMinimalName> local_128;
  int iStack_120;
  undefined4 uStack_11c;
  uint *local_118;
  uint *local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  TArrayView<FMinimalName_const_,int> local_d8;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  ForElementType<FMinimalName> local_68;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_1a8 = this;
  if ((param_1->CurrentStringView).Size == 0) {
    local_1b8.ComparisonIndex.Value = 0;
    local_1b8.Number = 0;
    iVar16 = 0;
    uVar11 = 0;
    FVar21.Value = 0;
  }
  else {
    pwVar3 = (param_1->CurrentStringView).DataPtr;
    local_c8 = (param_1->CurrentStringView).DataPtr;
    uStack_c0 = *(undefined8 *)&(param_1->CurrentStringView).Size;
    pwVar17 = pwVar3 + (int)*(undefined8 *)&(param_1->CurrentStringView).Size;
    do {
      if (pwVar3 == pwVar17) {
        local_b8 = local_c8;
        uStack_b0 = uStack_c0;
        pFVar9 = ::FName::FName(&local_100,(int)*(undefined8 *)&(param_1->CurrentStringView).Size,
                                local_c8,FNAME_Add);
        iVar16 = 0;
        local_1b8 = *pFVar9;
        (param_1->CurrentStringView).DataPtr = (wchar_t *)0x0;
        (param_1->CurrentStringView).Size = 0;
        goto LAB_1420e7865;
      }
      pwVar1 = pwVar17 + -1;
      pwVar17 = pwVar17 + -1;
    } while ((*pwVar1 != L'.') && (*pwVar1 != L':'));
    iVar2 = (param_1->CurrentStringView).Size;
    iVar16 = (int)((longlong)pwVar17 - (longlong)pwVar3 >> 1);
    iVar7 = (iVar2 - iVar16) + -1;
    iVar5 = iVar2;
    if (iVar7 < iVar2) {
      iVar5 = iVar7;
    }
    iVar7 = 0;
    if (0 < iVar5) {
      iVar7 = iVar5;
    }
    pFVar9 = ::FName::FName(&local_108,iVar7,pwVar3 + ((longlong)iVar2 - (longlong)iVar7),FNAME_Add)
    ;
    local_1b8 = *pFVar9;
    (param_1->CurrentStringView).Size = iVar16;
LAB_1420e7865:
    uVar11 = local_1b8.Number;
    FVar21.Value = local_1b8.ComparisonIndex.Value;
  }
  FVar19 = local_1b8;
  FVar23.ComparisonIndex.Value = 0;
  FVar23.Number = 0;
  if (local_1b8 != (FName)0x0) {
    uVar22 = 0;
    if (iVar16 == 0) {
      local_170 = 0;
      FVar18.ComparisonIndex.Value = 0;
      FVar18.Number = 0;
    }
    else {
      pwVar3 = (param_1->CurrentStringView).DataPtr;
      local_a8 = (param_1->CurrentStringView).DataPtr;
      uStack_a0 = *(undefined8 *)&(param_1->CurrentStringView).Size;
      pwVar17 = pwVar3 + (int)*(undefined8 *)&(param_1->CurrentStringView).Size;
      do {
        if (pwVar3 == pwVar17) {
          local_98 = local_a8;
          uStack_90 = uStack_a0;
          pFVar9 = ::FName::FName(&local_f0,(int)*(undefined8 *)&(param_1->CurrentStringView).Size,
                                  local_a8,FNAME_Add);
          FVar18 = *pFVar9;
          (param_1->CurrentStringView).DataPtr = (wchar_t *)0x0;
          (param_1->CurrentStringView).Size = 0;
          this = local_1a8;
          goto LAB_1420e7944;
        }
        pwVar1 = pwVar17 + -1;
        pwVar17 = pwVar17 + -1;
      } while ((*pwVar1 != L'.') && (*pwVar1 != L':'));
      uVar13 = (param_1->CurrentStringView).Size;
      iVar16 = (int)((longlong)pwVar17 - (longlong)pwVar3 >> 1);
      uVar8 = (uVar13 - iVar16) - 1;
      uVar20 = uVar13;
      if ((int)uVar8 < (int)uVar13) {
        uVar20 = uVar8;
      }
      uVar8 = uVar22;
      if (0 < (int)uVar20) {
        uVar8 = uVar20;
      }
      pFVar9 = ::FName::FName(&local_f8,uVar8,
                              pwVar3 + ((longlong)(int)uVar13 - (longlong)(int)uVar8),FNAME_Add);
      FVar18 = *pFVar9;
      (param_1->CurrentStringView).Size = iVar16;
      this = local_1a8;
    }
LAB_1420e7944:
    if (((FVar18 == (FName)0x0) && ((uVar11 >> 0x1e & 1) == 0)) && (-1 < (int)uVar11)) {
      this->Index = FVar21.Value;
      this->Number = uVar11 | 0x40000000;
    }
    else {
      uStack_164 = FVar19.Number;
      local_68.SecondaryData = (ForElementType<FMinimalName>)0x0;
      local_44 = 3;
      local_1b0 = uStack_164 * 0x17 + FVar21.Value;
      local_48 = 1;
      local_68.InlineData[4] = (char)uStack_164;
      local_68.InlineData[5] = (char)(uStack_164 >> 8);
      local_68.InlineData[6] = (char)(uStack_164 >> 0x10);
      local_68.InlineData[7] = (char)(uStack_164 >> 0x18);
      local_68.InlineData[0] = (char)FVar21.Value;
      local_68.InlineData[1] = (char)(FVar21.Value >> 8);
      local_68.InlineData[2] = (char)(FVar21.Value >> 0x10);
      local_68.InlineData[3] = (char)(FVar21.Value >> 0x18);
      local_168 = FVar21.Value;
      while (iVar16 = local_48, FVar18 != (FName)0x0) {
        FVar19 = FVar23;
        local_1b8 = FVar18;
        if ((param_1->CurrentStringView).Size != 0) {
          pwVar3 = (param_1->CurrentStringView).DataPtr;
          local_88 = (param_1->CurrentStringView).DataPtr;
          uStack_80 = *(undefined8 *)&(param_1->CurrentStringView).Size;
          pwVar17 = pwVar3 + (int)*(undefined8 *)&(param_1->CurrentStringView).Size;
          do {
            if (pwVar3 == pwVar17) {
              local_78 = local_88;
              uStack_70 = uStack_80;
              pFVar9 = ::FName::FName(&local_e0,
                                      (int)*(undefined8 *)&(param_1->CurrentStringView).Size,
                                      local_88,FNAME_Add);
              FVar19 = *pFVar9;
              (param_1->CurrentStringView).DataPtr = (wchar_t *)0x0;
              (param_1->CurrentStringView).Size = 0;
              goto LAB_1420e7a7d;
            }
            pwVar1 = pwVar17 + -1;
            pwVar17 = pwVar17 + -1;
          } while ((*pwVar1 != L'.') && (*pwVar1 != L':'));
          uVar11 = (param_1->CurrentStringView).Size;
          iVar16 = (int)((longlong)pwVar17 - (longlong)pwVar3 >> 1);
          uVar20 = (uVar11 - iVar16) - 1;
          uVar13 = uVar11;
          if ((int)uVar20 < (int)uVar11) {
            uVar13 = uVar20;
          }
          uVar20 = uVar22;
          if (0 < (int)uVar13) {
            uVar20 = uVar13;
          }
          pFVar9 = ::FName::FName(&local_e8,uVar20,
                                  pwVar3 + ((longlong)(int)uVar11 - (longlong)(int)uVar20),FNAME_Add
                                 );
          FVar19 = *pFVar9;
          (param_1->CurrentStringView).Size = iVar16;
        }
LAB_1420e7a7d:
        local_160 = (uint)FVar18.ComparisonIndex.Value;
        uVar11 = FVar18.Number;
        uStack_15c = uVar11;
        if (local_48 == local_44) {
          local_48 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FMinimalName>_>
                               (0x408,&local_68,&local_44);
        }
        FVar14 = (ForElementType<FMinimalName>)&local_68;
        if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
          FVar14 = local_68.SecondaryData;
        }
        lVar12 = (longlong)local_48;
        local_48 = local_48 + 1;
        *(ulonglong *)((longlong)FVar14 + lVar12 * 8) = CONCAT44(uStack_15c,local_160);
        uVar20 = uVar11 * 0x17 + local_1b8.ComparisonIndex.Value;
        uVar13 = local_1b0 - uVar20 ^ uVar20 >> 0xd;
        uVar11 = (-0x61c88647 - uVar13) - uVar20 ^ uVar13 << 8;
        uVar20 = (uVar20 - uVar11) - uVar13 ^ uVar11 >> 0xd;
        uVar13 = (uVar13 - uVar20) - uVar11 ^ uVar20 >> 0xc;
        uVar11 = (uVar11 - uVar13) - uVar20 ^ uVar13 << 0x10;
        uVar20 = (uVar20 - uVar11) - uVar13 ^ uVar11 >> 5;
        uVar13 = (uVar13 - uVar20) - uVar11 ^ uVar20 >> 3;
        uVar11 = (uVar11 - uVar13) - uVar20 ^ uVar13 << 10;
        local_1b0 = (uVar20 - uVar11) - uVar13 ^ uVar11 >> 0xf;
        FVar18 = FVar19;
      }
      local_128 = (ForElementType<FMinimalName>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
        local_128 = local_68.SecondaryData;
      }
      if ((local_48 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_d8._12_4_ = uStack_11c;
      local_d8.ArrayNum = iVar16;
      local_d8.DataPtr = (FMinimalName *)local_128;
      iStack_120 = iVar16;
      FStoredObjectPath::FStoredObjectPath((FStoredObjectPath *)(local_158 + 8),&local_d8);
      EnterCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
      uVar11 = local_1b0;
      local_188 = &GComplexPathHashToId;
      iStack_17c = -1;
      if (GComplexPathHashToId._72_4_ == 0) {
        local_178 = -1;
      }
      else {
        lVar12 = 0x154b91298;
        if (GComplexPathHashToId._64_8_ != 0) {
          lVar12 = GComplexPathHashToId._64_8_;
        }
        iVar16 = *(int *)(lVar12 + (longlong)(int)(GComplexPathHashToId._72_4_ - 1U & local_1b0) * 4
                         );
        do {
          iStack_17c = iVar16;
          local_178 = iStack_17c;
          if (iStack_17c == -1) break;
          local_178 = *(int *)(GComplexPathHashToId._0_8_ + 8 + (longlong)iStack_17c * 0x10);
          iVar16 = local_178;
        } while (*(uint *)(GComplexPathHashToId._0_8_ + (longlong)iStack_17c * 0x10) != local_1b0);
      }
      local_1a0 = 0x54b91260;
      uStack_19c = 1;
      uStack_180 = local_1b0;
      uStack_198 = local_1b0;
      iStack_194 = iStack_17c;
      lVar12 = local_1c0;
      iVar16 = local_178;
joined_r0x0001420e7ce2:
      local_1c0 = lVar12;
      local_190 = iVar16;
      if (iStack_194 != -1) {
        local_1c0 = (longlong)GComplexPaths.ArrayNum;
        uVar20 = *(uint *)(GComplexPathHashToId._0_8_ + 4 + (longlong)iStack_194 * 0x10);
        uVar13 = uVar20 - 1;
        uVar8 = uVar22;
        if ((int)uVar13 < GComplexPaths.ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_1c8 = (longlong)(int)uVar13;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          lVar12 = local_1c0;
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_1c0 = lVar12;
        bVar6 = Private::operator==((FStoredObjectPath *)
                                    (GComplexPaths.AllocatorInstance.Data +
                                    (longlong)(int)uVar13 * 0x20),
                                    (FStoredObjectPath *)(local_158 + 8));
        if (bVar6) {
          local_1a8->Number = 0;
          FVar23.Number = 0;
          FVar23.ComparisonIndex.Value = local_158._8_4_;
          local_1a8->Index = uVar20;
          goto LAB_1420e7e89;
        }
        iStack_194 = iVar16;
        if (iVar16 == -1) goto LAB_1420e7dc7;
        do {
          lVar10 = (longlong)iVar16;
          iVar2 = *(int *)(GComplexPathHashToId._0_8_ + 8 + lVar10 * 0x10);
          iStack_194 = iVar16;
          lVar12 = local_1c0;
          iVar16 = iVar2;
          if (*(uint *)(GComplexPathHashToId._0_8_ + lVar10 * 0x10) == uVar11) break;
          iStack_194 = iVar2;
        } while (iVar2 != -1);
        goto joined_r0x0001420e7ce2;
      }
LAB_1420e7dc7:
      if (GComplexPaths.ArrayNum == GComplexPaths.ArrayMax) {
        GComplexPaths.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&GComplexPaths.AllocatorInstance,&GComplexPaths.ArrayMax);
      }
      local_1ac = GComplexPaths.ArrayNum + 1;
      pFVar15 = GComplexPaths.AllocatorInstance.Data + (longlong)GComplexPaths.ArrayNum * 0x20;
      GComplexPaths.ArrayNum = local_1ac;
      *(undefined4 *)pFVar15 = local_158._8_4_;
      if ((int)local_158._8_4_ < 4) {
        *(void **)(pFVar15 + 8) = local_148;
        *(undefined8 *)(pFVar15 + 0x10) = uStack_140;
        *(undefined8 *)(pFVar15 + 0x18) = local_138;
      }
      else {
        *(void **)(pFVar15 + 8) = local_148;
      }
      local_118 = &local_1b0;
      local_110 = &local_1ac;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>,FDefaultSetAllocator>
                  *)&GComplexPathHashToId,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)local_158,
                 (bool *)&local_118);
      local_1a8->Index = local_1ac;
      local_1a8->Number = 0;
      GCoreComplexObjectPathDebug = (FStoredObjectPathDebug *)GComplexPaths.AllocatorInstance.Data;
LAB_1420e7e89:
      LeaveCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
      if (3 < (int)FVar23.ComparisonIndex.Value.Value) {
        operator_delete__(local_148);
      }
      if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
        FMemory::Free((void *)local_68.SecondaryData);
      }
    }
  }
  return;
}

// FObjectPathId @ 1420e9d10

FObjectPathId * __thiscall
UE::CoreUObject::Private::FObjectPathId::FObjectPathId
          (FObjectPathId *this,FObjectImport *param_1,FLinkerTables *param_2)

{
  FImportObjectNamePathProducer local_18;
  
  this->Index = 0;
  this->Number = 0;
  local_18.CurrentImport = param_1;
  local_18.LinkerTables = param_2;
  if (CpuChannel->Enabled < 0) {
    StoreObjectPathId<_UE::CoreUObject::Private::FObjectPathId::MakeImportPathIdAndPackageName_::__l2::FImportObjectNamePathProducer>
              (this,&local_18);
    return this;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId233,"FObjectPathId::MakeImportPathIdAndPackageName",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectPathId.cpp"
             ,0xe9);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId233);
  StoreObjectPathId<_UE::CoreUObject::Private::FObjectPathId::MakeImportPathIdAndPackageName_::__l2::FImportObjectNamePathProducer>
            (this,&local_18);
  FCpuProfilerTrace::OutputEndEvent();
  return this;
}

// FObjectPathId @ 1420e9dd0

FObjectPathId * __thiscall
UE::CoreUObject::Private::FObjectPathId::FObjectPathId(FObjectPathId *this,UObject *param_1)

{
  FLoadedObjectNamePathProducer local_res8 [4];
  
  this->Index = 0;
  this->Number = 0;
  local_res8[0].CurrentObject = param_1;
  StoreObjectPathId<_UE::CoreUObject::Private::FObjectPathId::FObjectPathId_::__l2::FLoadedObjectNamePathProducer>
            (this,local_res8);
  return this;
}

// FObjectPathId @ 1420e9e00

FObjectPathId * __thiscall
UE::CoreUObject::Private::FObjectPathId::FObjectPathId
          (FObjectPathId *this,TStringView<char> *param_1)

{
  TStringViewNamePathProducer<char> local_18;
  
  local_18.CurrentStringView.DataPtr = param_1->DataPtr;
  local_18.CurrentStringView.Size = param_1->Size;
  local_18.CurrentStringView._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this->Index = 0;
  this->Number = 0;
  StoreObjectPathId<UE::CoreUObject::Private::TStringViewNamePathProducer<char>_>(this,&local_18);
  return this;
}

// FObjectPathId @ 1420e9e30

FObjectPathId * __thiscall
UE::CoreUObject::Private::FObjectPathId::FObjectPathId
          (FObjectPathId *this,TStringView<wchar_t> *param_1)

{
  TStringViewNamePathProducer<wchar_t> local_18;
  
  local_18.CurrentStringView.DataPtr = param_1->DataPtr;
  local_18.CurrentStringView.Size = param_1->Size;
  local_18.CurrentStringView._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this->Index = 0;
  this->Number = 0;
  StoreObjectPathId<UE::CoreUObject::Private::TStringViewNamePathProducer<wchar_t>_>(this,&local_18)
  ;
  return this;
}

// GetSimpleName @ 1420fd690

FMinimalName __thiscall UE::CoreUObject::Private::FObjectPathId::GetSimpleName(FObjectPathId *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FMinimalName FVar4;
  FMinimalName in_RDX;
  
  if ((this->Number == 0xc0000000) || ((this->Number >> 0x1e & 1) == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSimple()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectPathId.cpp"
                       ,0x163,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FMinimalName)(*pcVar2)();
      return FVar4;
    }
  }
  uVar1 = this->Number;
  *(uint *)in_RDX = this->Index;
  *(uint *)((longlong)in_RDX + 4) = uVar1 & 0xbfffffff;
  return in_RDX;
}

// GetStoredPath @ 1420fd720

FStoredObjectPath * __thiscall
UE::CoreUObject::Private::FObjectPathId::GetStoredPath(FObjectPathId *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FStoredObjectPath *pFVar4;
  uint uVar5;
  
  if ((this->Number == 0xc0000000) || ((this->Index == 0 && (this->Number == 0)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid() && !IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectPathId.cpp"
                       ,0x189,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStoredObjectPath *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar5 = this->Index - 1;
  uVar3 = 0;
  if ((int)uVar5 < GComplexPaths.ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStoredObjectPath *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FStoredObjectPath *)(GComplexPaths.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20);
}

// GetWeakObjPtr @ 1420fda20

FWeakObjectPtr __thiscall
UE::CoreUObject::Private::FObjectPathId::GetWeakObjPtr(FObjectPathId *this)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr FVar3;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  if ((this->Number == 0xc0000000) || (-1 < (int)this->Number)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsWeakObj()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectPathId.cpp"
                       ,0x179,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FWeakObjectPtr)(*pcVar1)();
      return FVar3;
    }
  }
  local_res8.ObjectIndex = this->Index;
  local_res8.ObjectSerialNumber = this->Number & 0x7fffffff;
  local_res10 = FWeakObjectPtr::Get(&local_res8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_res10);
  }
  *(undefined8 *)in_RDX = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res10);
  return in_RDX;
}

// MakeImportPathIdAndPackageName @ 142101df0

FName __cdecl
UE::CoreUObject::Private::FObjectPathId::MakeImportPathIdAndPackageName
          (FObjectImport *param_1,FLinkerTables *param_2,FObjectPathId *param_3)

{
  FScriptContainerElement *pFVar1;
  FObjectPathId *in_R9;
  bool bVar2;
  FImportObjectNamePathProducer local_18;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId233,"FObjectPathId::MakeImportPathIdAndPackageName",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectPathId.cpp"
               ,0xe9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId233);
  }
  local_18.CurrentImport = (FObjectImport *)param_2;
  local_18.LinkerTables = (FLinkerTables *)param_3;
  StoreObjectPathId<_UE::CoreUObject::Private::FObjectPathId::MakeImportPathIdAndPackageName_::__l2::FImportObjectNamePathProducer>
            (in_R9,&local_18);
  if (((FLinkerTables *)local_18.CurrentImport == (FLinkerTables *)0x0) ||
     (((TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)&(local_18.CurrentImport)->_padding_)->
      ArrayNum != 0)) {
    pFVar1 = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar1 = (((TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)
              &(local_18.CurrentImport)->_padding_)->AllocatorInstance).Data;
  }
  param_1->_padding_ = (longlong)pFVar1;
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FName)param_1;
}

// MakeWeakObjPtr @ 1421021c0

void __thiscall
UE::CoreUObject::Private::FObjectPathId::MakeWeakObjPtr(FObjectPathId *this,UObject *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = *(uint *)&param_1->field_0xc;
  uVar4 = FUObjectArray::AllocateSerialNumber(&GUObjectArray,uVar1);
  if ((int)uVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(ObjectSerialNumber & WeakObjectMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectPathId.cpp"
                       ,0x172,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Index = uVar1;
  this->Number = uVar4 | 0x80000000;
  return;
}

// Resolve @ 14210ab40

void __thiscall
UE::CoreUObject::Private::FObjectPathId::Resolve
          (FObjectPathId *this,
          TArray<FName,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FName> FVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ForElementType<FName> FVar10;
  
  if ((this->Number == 0xc0000000) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectPathId.cpp"
                         ,0x147,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = this->Index;
  if ((uVar7 != 0) || (this->Number != 0)) {
    uVar9 = this->Number;
    if ((uVar9 >> 0x1e & 1) == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
      uVar9 = this->Index - 1;
      uVar7 = 0;
      if ((int)uVar9 < GComplexPaths.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = GComplexPaths.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8;
      iVar6 = *(int *)(GComplexPaths.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20);
      if (iVar6 < 4) {
        if ((iVar6 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        pFVar8 = *(FScriptContainerElement **)pFVar8;
      }
      pFVar1 = pFVar8 + (longlong)iVar6 * 8;
      for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
        uVar3 = *(undefined8 *)pFVar8;
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<FName>)param_1;
        if (FVar2 != (ForElementType<FName>)0x0) {
          FVar10 = FVar2;
        }
        *(undefined8 *)((longlong)FVar10 + (longlong)iVar6 * 8) = uVar3;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
    }
    else {
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                          (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      if (FVar2 != (ForElementType<FName>)0x0) {
        param_1 = (TArray<FName,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
      }
      *(uint *)((longlong)param_1 + (longlong)iVar6 * 8) = uVar7;
      *(uint *)((uchar *)((longlong)param_1 + 4) + (longlong)iVar6 * 8) = uVar9 & 0xbfffffff;
    }
  }
  return;
}

