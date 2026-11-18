// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// SerializeExpr @ 1422235d0

/* WARNING: Enum "Type": Some values do not have unique names */

EExprToken __thiscall
`OutputMostFrequentlyUsedInstructions'::__l2::FInstructionFrequencyCounter::SerializeExpr
          (void *this,int *param_1,FArchive *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  EExprToken EVar7;
  int iVar8;
  uint uVar9;
  FString *pFVar10;
  byte bVar11;
  byte *pbVar12;
  longlong *plVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res20 [8];
  undefined1 local_3e8;
  undefined1 local_3e7;
  undefined1 local_3e6;
  undefined1 local_3e5;
  undefined1 local_3e4;
  undefined1 local_3e3;
  uchar local_3e2;
  uchar local_3e1;
  schar local_3e0 [4];
  ushort local_3dc [2];
  ushort local_3d8 [2];
  byte local_3d4 [2];
  ushort local_3d2;
  ushort local_3d0 [2];
  ushort local_3cc [2];
  uint local_3c8;
  uint local_3c4;
  uint local_3c0;
  uint local_3bc;
  uint local_3b8;
  uint local_3b4;
  uint local_3b0;
  uint local_3ac;
  uint local_3a8;
  uint local_3a4;
  uint local_3a0;
  uint local_39c;
  uint local_398 [2];
  FString local_390;
  longlong *local_380;
  int local_378;
  int local_374;
  int local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  uint local_324;
  int local_320;
  uint local_31c;
  int local_318 [2];
  uint local_310;
  undefined4 uStack_30c;
  uint local_308;
  undefined4 uStack_304;
  uint local_300 [2];
  uint local_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  uint local_2b0;
  undefined4 uStack_2ac;
  ulong64 local_2a8;
  ulong64 local_2a0;
  ulong64 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  int local_220 [2];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  FString local_1f8;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  uint local_180;
  undefined4 uStack_17c;
  uint local_178;
  undefined4 uStack_174;
  long64 local_170;
  uint local_168;
  undefined4 uStack_164;
  uint local_160;
  undefined4 uStack_15c;
  long64 local_158;
  long64 local_150;
  uint local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  uint local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  uint local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  uint local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  FSoftObjectPath local_118;
  byte *local_f8;
  longlong *local_f0;
  FScriptContainerElement *local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  FString local_58;
  TStringView<wchar_t> local_48 [2];
  
  local_380 = *(longlong **)this;
  uVar18 = *param_1;
  local_f0 = local_380;
  if (((int)uVar18 < (int)local_380[1]) &&
     (plVar2 = *(longlong **)((longlong)this + 8), plVar2 != (longlong *)0x0)) {
    if (((int)uVar18 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    local_3d4[0] = *(byte *)((longlong)(int)uVar18 + *local_f0);
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      plVar13 = (longlong *)plVar2[8];
      if ((longlong *)plVar2[8] == (longlong *)0x0) {
        plVar13 = plVar2 + 7;
      }
      iVar8 = *(int *)((longlong)plVar13 +
                      ((ulonglong)((int)plVar2[9] - 1) & (ulonglong)local_3d4[0]) * 4);
      if (iVar8 != -1) {
        do {
          pbVar12 = (byte *)((longlong)iVar8 * 0x10 + *plVar2);
          if (*pbVar12 == local_3d4[0]) {
            if (pbVar12 != (byte *)0x0) goto LAB_142223714;
            break;
          }
          iVar8 = *(int *)(pbVar12 + 8);
        } while (iVar8 != -1);
      }
    }
    local_f8 = local_3d4;
    TSet<TTuple<enum_EExprToken,int>,TDefaultMapHashableKeyFuncs<enum_EExprToken,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EExprToken_&&>_>
              (plVar2,(uint)local_220,(TKeyInitializer<EExprToken_&&> *)(ulonglong)local_3d4[0],
               (bool *)&local_f8);
    pbVar12 = (byte *)((longlong)local_220[0] * 0x10 + *plVar2);
LAB_142223714:
    *(int *)(pbVar12 + 4) = *(int *)(pbVar12 + 4) + 1;
    local_380 = *(longlong **)this;
    uVar18 = *param_1;
  }
  uVar17 = 0;
  if ((param_2->field_0x28 & 1) == 0) {
    uVar16 = uVar17;
    if ((int)uVar18 < (int)local_380[1]) {
      uVar16 = ~uVar18 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    local_res20[0] = *(undefined1 *)((longlong)(int)uVar18 + *local_380);
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res20,1);
  }
  else {
    local_res20[0] = *(undefined1 *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  if ((param_2->field_0x28 & 4) == 0) {
    uVar18 = *param_1;
    plVar2 = *(longlong **)this;
    uVar16 = uVar17;
    if ((int)uVar18 < (int)plVar2[1]) {
      uVar16 = ~uVar18 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    *(undefined1 *)((longlong)(int)uVar18 + *plVar2) = local_res20[0];
  }
  uVar18 = *param_1;
  *param_1 = uVar18 + 1;
  plVar2 = *(longlong **)this;
  uVar16 = uVar17;
  if ((int)uVar18 < (int)plVar2[1]) {
    uVar16 = ~uVar18 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  bVar11 = *(byte *)((longlong)(int)uVar18 + *plVar2);
  local_380 = (longlong *)CONCAT44(local_380._4_4_,(uint)bVar11);
  uVar16 = 0;
  uVar15 = 0;
  uVar18 = 0;
  uVar9 = 0;
  switch(bVar11) {
  case 0:
  case 1:
  case 2:
  case 0x33:
  case 0x48:
  case 0x6c:
    local_290 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_290 = *(undefined8 *)((longlong)(int)uVar17 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_290);
    uVar5 = local_290;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar17 + *plVar2) = uVar5;
    }
    *param_1 = *param_1 + 8;
    break;
  case 3:
  case 5:
  case 8:
  case 10:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x47:
  case 0x49:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x6e:
  case 0x6f:
  default:
    if (2 < (byte)LogScriptSerialization._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScriptSerialization);
    }
    break;
  case 4:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x5d:
  case 0x6d:
  case 0x72:
    goto switchD_1422238a9_caseD_4;
  case 6:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3c8 = *(uint *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3c8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3c8);
      }
    }
    else {
      local_3c8 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar18 + *plVar2) = local_3c8;
    }
    *param_1 = *param_1 + 4;
    break;
  case 7:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_39c = *(uint *)((longlong)(int)uVar17 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_39c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_39c);
      }
    }
    else {
      local_39c = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar17 + *plVar2) = local_39c;
    }
    *param_1 = *param_1 + 4;
    SerializeExpr(this,param_1,param_2);
    break;
  case 9:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3d0[0] = *(ushort *)((longlong)(int)uVar17 + *plVar2);
    }
    ::operator<<(param_2,local_3d0);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(ushort *)((longlong)(int)uVar17 + *plVar2) = local_3d0[0];
    }
    uVar17 = *param_1 + 2;
    *param_1 = uVar17;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3e1 = *(uchar *)((longlong)(int)uVar17 + *plVar2);
    }
    ::operator<<(param_2,&local_3e1);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uchar *)((longlong)(int)uVar17 + *plVar2) = local_3e1;
    }
    *param_1 = *param_1 + 1;
    SerializeExpr(this,param_1,param_2);
    break;
  case 0xb:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2d:
  case 0x30:
  case 0x32:
  case 0x3a:
  case 0x3c:
  case 0x3e:
  case 0x40:
  case 0x4a:
  case 0x4d:
  case 0x53:
  case 0x5a:
  case 0x5e:
  case 0x66:
    break;
  case 0xc:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3c0 = *(uint *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3c0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3c0);
      }
    }
    else {
      local_3c0 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar18 + *plVar2) = local_3c0;
    }
    *param_1 = *param_1 + 4;
    break;
  case 0xf:
    local_210 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_210 = *(undefined8 *)((longlong)(int)uVar18 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_210);
    uVar5 = local_210;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar18 + *plVar2) = uVar5;
    }
    *param_1 = *param_1 + 8;
  case 0x14:
  case 0x43:
  case 0x44:
  case 0x5f:
  case 0x60:
    SerializeExpr(this,param_1,param_2);
    SerializeExpr(this,param_1,param_2);
    break;
  case 0x11:
    local_238 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_238 = *(undefined8 *)((longlong)(int)uVar18 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_238);
    uVar5 = local_238;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar18 + *plVar2) = uVar5;
    }
    uVar18 = *param_1 + 8;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3e4 = *(undefined1 *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3e4,1);
    }
    else {
      local_3e4 = *(undefined1 *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined1 *)((longlong)(int)uVar18 + *plVar2) = local_3e4;
    }
    *param_1 = *param_1 + 1;
    break;
  case 0x12:
  case 0x19:
  case 0x1a:
    SerializeExpr(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3bc = *(uint *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3bc,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3bc);
      }
    }
    else {
      local_3bc = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar18 + *plVar2) = local_3bc;
    }
    uVar18 = *param_1 + 4;
    *param_1 = uVar18;
    local_278 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_278 = *(undefined8 *)((longlong)(int)uVar18 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_278);
    bVar11 = param_2->field_0x28;
    uVar5 = local_278;
    goto joined_r0x000142223c40;
  case 0x13:
    local_230 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_230 = *(undefined8 *)((longlong)(int)uVar17 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_230);
    bVar11 = param_2->field_0x28;
    uVar5 = local_230;
    goto joined_r0x000142223c40;
  case 0x18:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_300[0] = *(uint *)((longlong)(int)uVar18 + *plVar2);
    }
    ::operator<<(param_2,local_300);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar18 + *plVar2) = local_300[0];
    }
    *param_1 = *param_1 + 4;
    SerializeExpr(this,param_1,param_2);
    break;
  case 0x1b:
  case 0x45:
    local_310 = 0;
    uStack_30c = 0;
    local_2f0 = (ulonglong)local_2f0._4_4_ << 0x20;
    local_2e8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      lVar3 = *plVar2;
      uStack_15c = *(undefined4 *)((longlong)(int)uVar17 + 8 + lVar3);
      local_2f0 = *(ulonglong *)((int)uVar17 + lVar3);
      local_160 = (uint)local_2f0;
      local_310 = (uint)local_2f0;
      uStack_30c = uStack_15c;
    }
    local_2e8 = uStack_30c;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_310);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      local_148 = local_310;
      local_140 = uStack_30c;
      local_2e8 = uStack_30c;
      uStack_144 = 0;
      local_2f0 = (ulonglong)local_310;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      lVar3 = *plVar2;
      *(ulonglong *)((int)uVar17 + lVar3) = local_2f0;
      *(undefined4 *)((longlong)(int)uVar17 + 8 + lVar3) = local_2e8;
    }
    *param_1 = *param_1 + 0xc;
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_EndFunctionParms);
    break;
  case 0x1c:
  case 0x46:
  case 0x68:
    local_288 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_288 = *(undefined8 *)((longlong)(int)uVar18 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_288);
    uVar5 = local_288;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar18 + *plVar2) = uVar5;
    }
    *param_1 = *param_1 + 8;
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_EndFunctionParms);
    break;
  case 0x1d:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_328 = *(int *)((longlong)(int)uVar18 + *plVar2);
    }
    ::operator<<(param_2,&local_328);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(int *)((longlong)(int)uVar18 + *plVar2) = local_328;
    }
    *param_1 = *param_1 + 4;
    break;
  case 0x1e:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar15;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3b4 = *(uint *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3b4);
      }
    }
    else {
      local_3b4 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar18 + *plVar2) = local_3b4;
    }
    *param_1 = *param_1 + 4;
    break;
  case 0x1f:
    do {
      if ((param_2->field_0x28 & 1) == 0) {
        uVar18 = *param_1;
        plVar2 = *(longlong **)this;
        uVar17 = uVar15;
        if ((int)uVar18 < (int)plVar2[1]) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_3e7 = *(undefined1 *)((longlong)(int)uVar18 + *plVar2);
      }
      plVar2 = *(longlong **)&param_2->field_0x8;
      if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3e7,1);
      }
      else {
        local_3e7 = *(undefined1 *)*plVar2;
        *plVar2 = *plVar2 + 1;
      }
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        plVar2 = *(longlong **)this;
        uVar17 = uVar15;
        if ((int)uVar18 < (int)plVar2[1]) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(undefined1 *)((longlong)(int)uVar18 + *plVar2) = local_3e7;
      }
      uVar18 = *param_1;
      *param_1 = uVar18 + 1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar15;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
    } while (*(char *)((longlong)(int)uVar18 + *plVar2) != '\0');
    break;
  case 0x20:
    local_268 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar15;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_268 = *(undefined8 *)((longlong)(int)uVar18 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x150))(param_2,&local_268);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar18 + *plVar2) = local_268;
    }
    *param_1 = *param_1 + 8;
    break;
  case 0x21:
    local_308 = 0;
    uStack_304 = 0;
    local_2e0 = (ulonglong)local_2e0._4_4_ << 0x20;
    local_2d8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      lVar3 = *plVar2;
      uStack_164 = *(undefined4 *)((longlong)(int)uVar17 + 8 + lVar3);
      local_2e0 = *(longlong *)((int)uVar17 + lVar3);
      local_168 = (uint)local_2e0;
      local_308 = (uint)local_2e0;
      uStack_304 = uStack_164;
    }
    local_2d8 = uStack_304;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_308);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      local_13c = local_308;
      local_134 = uStack_304;
      local_2d8 = uStack_304;
      uStack_138 = 0;
      local_2e0 = (ulonglong)local_308;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      lVar3 = *plVar2;
      *(ulonglong *)((int)uVar17 + lVar3) = local_2e0;
      *(undefined4 *)((longlong)(int)uVar17 + 8 + lVar3) = local_2d8;
    }
    *param_1 = *param_1 + 0xc;
    break;
  case 0x22:
    bVar11 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar11 == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_378 = *(int *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_378);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(int *)((longlong)(int)uVar17 + *plVar2) = local_378;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar17 = uVar9;
        if ((int)uVar18 < (int)plVar2[1]) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_374 = *(int *)((longlong)(int)uVar18 + *plVar2);
      }
      ::operator<<(param_2,&local_374);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        plVar2 = *(longlong **)this;
        uVar17 = uVar9;
        if ((int)uVar18 < (int)plVar2[1]) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(int *)((longlong)(int)uVar18 + *plVar2) = local_374;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar17 = uVar9;
        if ((int)uVar18 < (int)plVar2[1]) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_370 = *(int *)((longlong)(int)uVar18 + *plVar2);
      }
      ::operator<<(param_2,&local_370);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar18 < (int)plVar2[1]) {
          uVar9 = ~uVar18 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(int *)((longlong)(int)uVar18 + *plVar2) = local_370;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar11 == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar9;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_170 = *(long64 *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_170);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar9;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(long64 *)((longlong)(int)uVar17 + *plVar2) = local_170;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar9;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_150 = *(long64 *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_150);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(long64 *)((longlong)(int)uVar17 + *plVar2) = local_150;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_158 = *(long64 *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_158);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(long64 *)((longlong)(int)uVar17 + *plVar2) = local_158;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case 0x23:
    bVar11 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar11 == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_36c = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_36c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_36c;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar17 = uVar9;
        if ((int)uVar18 < (int)plVar2[1]) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_368 = *(float *)((longlong)(int)uVar18 + *plVar2);
      }
      ::operator<<(param_2,&local_368);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        plVar2 = *(longlong **)this;
        uVar17 = uVar9;
        if ((int)uVar18 < (int)plVar2[1]) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar18 + *plVar2) = local_368;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar17 = uVar9;
        if ((int)uVar18 < (int)plVar2[1]) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_364 = *(float *)((longlong)(int)uVar18 + *plVar2);
      }
      ::operator<<(param_2,&local_364);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar18 < (int)plVar2[1]) {
          uVar9 = ~uVar18 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar18 + *plVar2) = local_364;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar11 == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar9;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_1e8 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_1e8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar9;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_1e8;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar9;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_1e0 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_1e0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_1e0;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_1d8 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_1d8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_1d8;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case 0x24:
  case 0x2c:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3e3 = *(undefined1 *)((longlong)(int)uVar17 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3e3,1);
    }
    else {
      local_3e3 = *(undefined1 *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined1 *)((longlong)(int)uVar17 + *plVar2) = local_3e3;
    }
    *param_1 = *param_1 + 1;
    break;
  case 0x29:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3e6 = *(undefined1 *)((longlong)(int)uVar17 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3e6,1);
    }
    else {
      local_3e6 = *(undefined1 *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined1 *)((longlong)(int)uVar17 + *plVar2) = local_3e6;
    }
    uVar17 = *param_1;
    *param_1 = uVar17 + 1;
    plVar2 = *(longlong **)this;
    uVar16 = uVar18;
    if ((int)uVar17 < (int)plVar2[1]) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    cVar1 = *(char *)((longlong)(int)uVar17 + *plVar2);
    if (cVar1 == '\0') break;
    if (cVar1 == '\x01') {
      SerializeExpr(this,param_1,param_2);
      goto switchD_1422238a9_caseD_5c;
    }
    if ((cVar1 != '\x02') && (cVar1 != '\x03')) {
      if (cVar1 == '\x04') {
        local_270 = 0;
        if ((param_2->field_0x28 & 1) == 0) {
          uVar17 = *param_1;
          plVar2 = *(longlong **)this;
          if ((int)uVar17 < (int)plVar2[1]) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
          local_270 = *(undefined8 *)((longlong)(int)uVar17 + *plVar2);
        }
        (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_270);
        uVar5 = local_270;
        if ((param_2->field_0x28 & 4) == 0) {
          uVar18 = *param_1;
          plVar2 = *(longlong **)this;
          if ((int)uVar18 < (int)plVar2[1]) {
            uVar15 = ~uVar18 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
          *(undefined8 *)((longlong)(int)uVar18 + *plVar2) = uVar5;
        }
        *param_1 = *param_1 + 8;
        SerializeExpr(this,param_1,param_2);
        SerializeExpr(this,param_1,param_2);
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ScriptSerialization.h"
                           ,399,
                           L"Unknown EBlueprintTextLiteralType! Please update XFERTEXT to handle this type of text."
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
      }
      break;
    }
    goto switchD_1422238a9_caseD_4;
  case 0x2b:
    bVar11 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar11 == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_360 = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_360);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_360;
      }
      uVar17 = *param_1 + 4;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_35c = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_35c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_35c;
      }
      uVar17 = *param_1 + 4;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_358 = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_358);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_358;
      }
      uVar17 = *param_1 + 4;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_354 = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_354);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_354;
      }
      uVar17 = *param_1 + 4;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_350 = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_350);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_350;
      }
      uVar17 = *param_1 + 4;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_34c = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_34c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_34c;
      }
      uVar17 = *param_1 + 4;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_348 = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_348);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_348;
      }
      uVar17 = *param_1 + 4;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_344 = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_344);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_344;
      }
      uVar17 = *param_1 + 4;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_340 = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_340);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_340;
      }
      uVar17 = *param_1 + 4;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_33c = *(float *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_33c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(float *)((longlong)(int)uVar17 + *plVar2) = local_33c;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar11 == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_1d0 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_1d0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_1d0;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_1c8 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_1c8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_1c8;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_1c0 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_1c0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_1c0;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_1b8 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_1b8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_1b8;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_1b0 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_1b0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_1b0;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_1a8 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_1a8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_1a8;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_1a0 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_1a0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_1a0;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_198 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_198);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_198;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar15;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_190 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_190);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_190;
      }
      uVar17 = *param_1 + 8;
      *param_1 = uVar17;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar2 = *(longlong **)this;
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_188 = *(double *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_188);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(double *)((longlong)(int)uVar17 + *plVar2) = local_188;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case 0x2e:
    local_228 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_228 = *(undefined8 *)((longlong)(int)uVar17 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_228);
    bVar11 = param_2->field_0x28;
    uVar5 = local_228;
    goto joined_r0x000142223c40;
  case 0x2f:
    local_260 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_260 = *(undefined8 *)((longlong)(int)uVar17 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_260);
    uVar5 = local_260;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar17 + *plVar2) = uVar5;
    }
    uVar17 = *param_1 + 8;
    *param_1 = uVar17;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_338 = *(int *)((longlong)(int)uVar17 + *plVar2);
    }
    ::operator<<(param_2,&local_338);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(int *)((longlong)(int)uVar17 + *plVar2) = local_338;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_EndStructConst);
    break;
  case 0x31:
    SerializeExpr(this,param_1,param_2);
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_EndArray);
    break;
  case 0x34:
    do {
      do {
        if ((param_2->field_0x28 & 1) == 0) {
          uVar16 = *param_1;
          plVar2 = *(longlong **)this;
          uVar15 = uVar18;
          if ((int)uVar16 < (int)plVar2[1]) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
          local_3dc[0] = *(ushort *)((longlong)(int)uVar16 + *plVar2);
        }
        plVar2 = *(longlong **)&param_2->field_0x8;
        if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
          if ((param_2->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3dc,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_2,local_3dc);
          }
        }
        else {
          local_3dc[0] = *(ushort *)*plVar2;
          *plVar2 = *plVar2 + 2;
        }
        if ((param_2->field_0x28 & 4) == 0) {
          uVar16 = *param_1;
          plVar2 = *(longlong **)this;
          uVar15 = uVar18;
          if ((int)uVar16 < (int)plVar2[1]) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
          *(ushort *)((longlong)(int)uVar16 + *plVar2) = local_3dc[0];
        }
        *param_1 = *param_1 + 2;
        plVar2 = *(longlong **)this;
        uVar15 = *param_1 - 1;
        uVar16 = uVar17;
        if ((int)uVar15 < (int)plVar2[1]) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
      } while (*(char *)((longlong)(int)uVar15 + *plVar2) != '\0');
      plVar2 = *(longlong **)this;
      uVar15 = *param_1 - 2;
      uVar16 = uVar17;
      if ((int)uVar15 < (int)plVar2[1]) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
    } while (*(char *)((longlong)(int)uVar15 + *plVar2) != '\0');
    break;
  case 0x35:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_298 = *(ulong64 *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_298,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_298);
      }
    }
    else {
      local_298 = *(ulong64 *)*plVar2;
      *plVar2 = *plVar2 + 8;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(ulong64 *)((longlong)(int)uVar18 + *plVar2) = local_298;
    }
    *param_1 = *param_1 + 8;
    break;
  case 0x36:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar15;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_2a8 = *(ulong64 *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_2a8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_2a8);
      }
    }
    else {
      local_2a8 = *(ulong64 *)*plVar2;
      *plVar2 = *plVar2 + 8;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(ulong64 *)((longlong)(int)uVar18 + *plVar2) = local_2a8;
    }
    *param_1 = *param_1 + 8;
    break;
  case 0x37:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar15;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_2a0 = *(ulong64 *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_2a0,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_2a0);
      }
    }
    else {
      local_2a0 = *(ulong64 *)*plVar2;
      *plVar2 = *plVar2 + 8;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(ulong64 *)((longlong)(int)uVar18 + *plVar2) = local_2a0;
    }
    *param_1 = *param_1 + 8;
    break;
  case 0x38:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3e8 = *(undefined1 *)((longlong)(int)uVar17 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3e8,1);
    }
    else {
      local_3e8 = *(undefined1 *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined1 *)((longlong)(int)uVar17 + *plVar2) = local_3e8;
    }
    *param_1 = *param_1 + 1;
    goto switchD_1422238a9_caseD_4;
  case 0x39:
    SerializeExpr(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_334 = *(int *)((longlong)(int)uVar17 + *plVar2);
    }
    ::operator<<(param_2,&local_334);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(int *)((longlong)(int)uVar17 + *plVar2) = local_334;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_EndSet);
    break;
  case 0x3b:
    SerializeExpr(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_330 = *(int *)((longlong)(int)uVar17 + *plVar2);
    }
    ::operator<<(param_2,&local_330);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(int *)((longlong)(int)uVar17 + *plVar2) = local_330;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_EndMap);
    break;
  case 0x3d:
    local_250 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_250 = *(undefined8 *)((longlong)(int)uVar17 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_250);
    uVar5 = local_250;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar17 + *plVar2) = uVar5;
    }
    uVar18 = *param_1 + 8;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3a4 = *(uint *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3a4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3a4);
      }
    }
    else {
      local_3a4 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar18 + *plVar2) = local_3a4;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_EndSetConst);
    break;
  case 0x3f:
    local_248 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_248 = *(undefined8 *)((longlong)(int)uVar18 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_248);
    uVar5 = local_248;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar18 + *plVar2) = uVar5;
    }
    uVar18 = *param_1 + 8;
    *param_1 = uVar18;
    local_240 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_240 = *(undefined8 *)((longlong)(int)uVar18 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_240);
    uVar5 = local_240;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar18 + *plVar2) = uVar5;
    }
    uVar18 = *param_1 + 8;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3a0 = *(uint *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3a0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3a0);
      }
    }
    else {
      local_3a0 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar18 + *plVar2) = local_3a0;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_EndMapConst);
    break;
  case 0x41:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar9;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3b0 = *(uint *)((longlong)(int)uVar17 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3b0);
      }
    }
    else {
      local_3b0 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar9;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar17 + *plVar2) = local_3b0;
    }
    uVar17 = *param_1 + 4;
    *param_1 = uVar17;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar16 = uVar9;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3ac = *(uint *)((longlong)(int)uVar17 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3ac,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3ac);
      }
    }
    else {
      local_3ac = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar9 = ~uVar17 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar17 + *plVar2) = local_3ac;
    }
    uVar17 = *param_1 + 4;
    *param_1 = uVar17;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3a8 = *(uint *)((longlong)(int)uVar17 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3a8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3a8);
      }
    }
    else {
      local_3a8 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar17 + *plVar2) = local_3a8;
    }
    *param_1 = *param_1 + 4;
    break;
  case 0x42:
    local_200 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_200 = *(undefined8 *)((longlong)(int)uVar18 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_200);
    bVar11 = param_2->field_0x28;
    uVar5 = local_200;
    goto joined_r0x000142223c40;
  case 0x4b:
    local_2b0 = 0;
    uStack_2ac = 0;
    local_2d0 = (ulonglong)local_2d0._4_4_ << 0x20;
    local_2c8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      lVar3 = *plVar2;
      uStack_17c = *(undefined4 *)((longlong)(int)uVar18 + 8 + lVar3);
      local_2d0 = *(longlong *)((int)uVar18 + lVar3);
      local_180 = (uint)local_2d0;
      local_2b0 = (uint)local_2d0;
      uStack_2ac = uStack_17c;
    }
    local_2c8 = uStack_2ac;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_2b0);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      local_130 = local_2b0;
      local_128 = uStack_2ac;
      local_2c8 = uStack_2ac;
      uStack_12c = 0;
      local_2d0 = (ulonglong)local_2b0;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      lVar3 = *plVar2;
      *(ulonglong *)((int)uVar18 + lVar3) = local_2d0;
      *(undefined4 *)((longlong)(int)uVar18 + 8 + lVar3) = local_2c8;
    }
    *param_1 = *param_1 + 0xc;
    break;
  case 0x4c:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3c4 = *(uint *)((longlong)(int)uVar17 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3c4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3c4);
      }
    }
    else {
      local_3c4 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar17 + *plVar2) = local_3c4;
    }
    *param_1 = *param_1 + 4;
    break;
  case 0x50:
    if ((param_2->field_0x28 & 1) != 0) {
      plVar2 = *(longlong **)this;
      uVar18 = *param_1 - 1;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined1 *)((longlong)(int)uVar18 + *plVar2) = 0x5e;
    }
    break;
  case 0x52:
  case 0x54:
  case 0x55:
    local_218 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_218 = *(undefined8 *)((longlong)(int)uVar18 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_218);
    bVar11 = param_2->field_0x28;
    uVar5 = local_218;
    goto joined_r0x000142223c40;
  case 0x5b:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar15;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3b8 = *(uint *)((longlong)(int)uVar18 + *plVar2);
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3b8);
      }
    }
    else {
      local_3b8 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar18 + *plVar2) = local_3b8;
    }
    *param_1 = *param_1 + 4;
    break;
  case 0x5c:
  case 0x62:
  case 0x6b:
switchD_1422238a9_caseD_5c:
    SerializeExpr(this,param_1,param_2);
    SerializeExpr(this,param_1,param_2);
    break;
  case 0x61:
    local_2f8 = 0;
    uStack_2f4 = 0;
    local_2c0 = (ulonglong)local_2c0._4_4_ << 0x20;
    local_2b8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      lVar3 = *plVar2;
      uStack_174 = *(undefined4 *)((longlong)(int)uVar18 + 8 + lVar3);
      local_2c0 = *(ulonglong *)((int)uVar18 + lVar3);
      local_178 = (uint)local_2c0;
      local_2f8 = (uint)local_2c0;
      uStack_2f4 = uStack_174;
    }
    local_2b8 = uStack_2f4;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_2f8);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      local_124 = local_2f8;
      local_11c = uStack_2f4;
      local_2b8 = uStack_2f4;
      uStack_120 = 0;
      local_2c0 = (ulonglong)local_2f8;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      lVar3 = *plVar2;
      *(ulonglong *)((int)uVar18 + lVar3) = local_2c0;
      *(undefined4 *)((longlong)(int)uVar18 + 8 + lVar3) = local_2b8;
    }
    *param_1 = *param_1 + 0xc;
    SerializeExpr(this,param_1,param_2);
    SerializeExpr(this,param_1,param_2);
    break;
  case 99:
    local_280 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_280 = *(undefined8 *)((longlong)(int)uVar17 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_280);
    uVar5 = local_280;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar17 + *plVar2) = uVar5;
    }
    *param_1 = *param_1 + 8;
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_EndFunctionParms);
    break;
  case 100:
    local_208 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar16;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_208 = *(undefined8 *)((longlong)(int)uVar18 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_208);
    bVar11 = param_2->field_0x28;
    uVar5 = local_208;
joined_r0x000142223c40:
    if ((bVar11 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar18 + *plVar2) = uVar5;
    }
    *param_1 = *param_1 + 8;
LAB_142223aa0:
    SerializeExpr(this,param_1,param_2);
    break;
  case 0x65:
    local_258 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_258 = *(undefined8 *)((longlong)(int)uVar17 + *plVar2);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_258);
    uVar5 = local_258;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(undefined8 *)((longlong)(int)uVar17 + *plVar2) = uVar5;
    }
    uVar17 = *param_1 + 8;
    *param_1 = uVar17;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_32c = *(int *)((longlong)(int)uVar17 + *plVar2);
    }
    ::operator<<(param_2,&local_32c);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(int *)((longlong)(int)uVar17 + *plVar2) = local_32c;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_EndArrayConst);
    break;
  case 0x67:
    if (((param_2->field_0x28 & 4) != 0) && ((param_2->field_0x2b & 1) != 0)) {
      if ((param_2->field_0x28 & 1) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        local_3e2 = *(uchar *)((longlong)(int)uVar17 + *plVar2);
      }
      ::operator<<(param_2,&local_3e2);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar17 = *param_1;
        plVar2 = *(longlong **)this;
        uVar16 = uVar9;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        *(uchar *)((longlong)(int)uVar17 + *plVar2) = local_3e2;
      }
      uVar17 = *param_1;
      *param_1 = uVar17 + 1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar9;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      bVar11 = *(byte *)((longlong)(int)uVar17 + *plVar2);
      local_380 = (longlong *)CONCAT44(local_380._4_4_,(uint)bVar11);
      if (((bVar11 != 0x1f) && (bVar11 != 0x34)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Expr == EX_StringConst || Expr == EX_UnicodeStringConst",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ScriptSerialization.h"
                             ,0x1a0,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_390.Data.ArrayNum = 0;
      local_390.Data.ArrayMax = 0;
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if (bVar11 == 0x1f) {
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        ::FString::FString(&local_1f8,(char *)((longlong)(int)uVar17 + *plVar2));
        if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_390.Data.AllocatorInstance.Data);
        }
        local_390.Data.AllocatorInstance.Data = local_1f8.Data.AllocatorInstance.Data;
        local_390.Data.ArrayNum = local_1f8.Data.ArrayNum;
        local_390.Data.ArrayMax = local_1f8.Data.ArrayMax;
        local_1f8.Data.ArrayNum = 0;
        local_1f8.Data.ArrayMax = 0;
        local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        do {
          if ((param_2->field_0x28 & 1) == 0) {
            uVar17 = *param_1;
            plVar2 = *(longlong **)this;
            uVar16 = uVar18;
            if ((int)uVar17 < (int)plVar2[1]) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              EVar7 = (*pcVar4)();
              return EVar7;
            }
            local_3e5 = *(undefined1 *)((longlong)(int)uVar17 + *plVar2);
          }
          plVar2 = *(longlong **)&param_2->field_0x8;
          if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3e5,1);
          }
          else {
            local_3e5 = *(undefined1 *)*plVar2;
            *plVar2 = *plVar2 + 1;
          }
          if ((param_2->field_0x28 & 4) == 0) {
            uVar17 = *param_1;
            plVar2 = *(longlong **)this;
            uVar16 = uVar9;
            if ((int)uVar17 < (int)plVar2[1]) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              EVar7 = (*pcVar4)();
              return EVar7;
            }
            *(undefined1 *)((longlong)(int)uVar17 + *plVar2) = local_3e5;
          }
          uVar17 = *param_1;
          *param_1 = uVar17 + 1;
          plVar2 = *(longlong **)this;
          uVar16 = uVar9;
          if ((int)uVar17 < (int)plVar2[1]) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
        } while (*(char *)((longlong)(int)uVar17 + *plVar2) != '\0');
      }
      else {
        uVar16 = uVar18;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar7 = (*pcVar4)();
          return EVar7;
        }
        pFVar10 = ::FString::FString(&local_58,(ushort *)((longlong)(int)uVar17 + *plVar2));
        if (&local_390 != pFVar10) {
          if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_390.Data.AllocatorInstance.Data);
          }
          local_390.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_390.Data.ArrayNum = (pFVar10->Data).ArrayNum;
          local_390.Data.ArrayMax = (pFVar10->Data).ArrayMax;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        StringConv::InlineCombineSurrogates(&local_390);
        do {
          do {
            if ((param_2->field_0x28 & 1) == 0) {
              uVar17 = *param_1;
              plVar2 = *(longlong **)this;
              uVar16 = uVar18;
              if ((int)uVar17 < (int)plVar2[1]) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                EVar7 = (*pcVar4)();
                return EVar7;
              }
              local_3d8[0] = *(ushort *)((longlong)(int)uVar17 + *plVar2);
            }
            plVar2 = *(longlong **)&param_2->field_0x8;
            if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
              if ((param_2->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3d8,2);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_2,local_3d8);
              }
            }
            else {
              local_3d8[0] = *(ushort *)*plVar2;
              *plVar2 = *plVar2 + 2;
            }
            if ((param_2->field_0x28 & 4) == 0) {
              uVar17 = *param_1;
              plVar2 = *(longlong **)this;
              uVar16 = uVar18;
              if ((int)uVar17 < (int)plVar2[1]) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                EVar7 = (*pcVar4)();
                return EVar7;
              }
              *(ushort *)((longlong)(int)uVar17 + *plVar2) = local_3d8[0];
            }
            *param_1 = *param_1 + 2;
            plVar2 = *(longlong **)this;
            uVar16 = *param_1 - 1;
            uVar17 = uVar18;
            if ((int)uVar16 < (int)plVar2[1]) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              EVar7 = (*pcVar4)();
              return EVar7;
            }
          } while (*(char *)((longlong)(int)uVar16 + *plVar2) != '\0');
          plVar2 = *(longlong **)this;
          uVar16 = *param_1 - 2;
          uVar17 = uVar18;
          if ((int)uVar16 < (int)plVar2[1]) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
        } while (*(char *)((longlong)(int)uVar16 + *plVar2) != '\0');
      }
      local_e8 = local_390.Data.AllocatorInstance.Data;
      local_118.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_118.AssetPath.PackageName.Number = 0;
      local_118.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_118.AssetPath.AssetName.Number = 0;
      local_118.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.SubPathString.Data.ArrayNum = 0;
      local_118.SubPathString.Data.ArrayMax = 0;
      uStack_e0 = local_390.Data.ArrayNum - 1;
      if (local_390.Data.ArrayNum == 0) {
        uStack_e0 = uVar18;
      }
      local_48[0]._12_4_ = uStack_dc;
      local_48[0].Size = uStack_e0;
      local_48[0].DataPtr = (wchar_t *)local_390.Data.AllocatorInstance.Data;
      FSoftObjectPath::SetPath(&local_118,local_48);
      (**(code **)(*(longlong *)param_2 + 0x140))(param_2,&local_118);
      if (local_118.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
      break;
    }
switchD_1422238a9_caseD_4:
    SerializeExpr(this,param_1,param_2);
    break;
  case 0x69:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar9;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3cc[0] = *(ushort *)((longlong)(int)uVar17 + *plVar2);
    }
    ::operator<<(param_2,local_3cc);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar9;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(ushort *)((longlong)(int)uVar17 + *plVar2) = local_3cc[0];
    }
    uVar17 = *param_1;
    *param_1 = uVar17 + 2;
    plVar2 = *(longlong **)this;
    uVar16 = uVar18;
    if ((int)uVar17 < (int)plVar2[1]) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    local_3d2 = *(ushort *)((longlong)(int)uVar17 + *plVar2);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      uVar16 = uVar18;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_324 = *(uint *)((longlong)(int)uVar17 + *plVar2);
    }
    ::operator<<(param_2,&local_324);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar17 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar17 + *plVar2) = local_324;
    }
    *param_1 = *param_1 + 4;
    SerializeExpr(this,param_1,param_2);
    uVar14 = 0;
    if (local_3d2 != 0) {
      do {
        SerializeExpr(this,param_1,param_2);
        if ((param_2->field_0x28 & 1) == 0) {
          uVar18 = *param_1;
          plVar2 = *(longlong **)this;
          uVar17 = uVar9;
          if ((int)uVar18 < (int)plVar2[1]) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
          local_398[0] = *(uint *)((longlong)(int)uVar18 + *plVar2);
        }
        plVar2 = *(longlong **)&param_2->field_0x8;
        if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
          if ((param_2->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_398,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_2,local_398);
          }
        }
        else {
          local_398[0] = *(uint *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
        if ((param_2->field_0x28 & 4) == 0) {
          uVar18 = *param_1;
          plVar2 = *(longlong **)this;
          uVar17 = uVar9;
          if ((int)uVar18 < (int)plVar2[1]) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
          *(uint *)((longlong)(int)uVar18 + *plVar2) = local_398[0];
        }
        *param_1 = *param_1 + 4;
        SerializeExpr(this,param_1,param_2);
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_3d2);
      SerializeExpr(this,param_1,param_2);
      break;
    }
    goto LAB_142223aa0;
  case 0x6a:
    uVar18 = *param_1;
    plVar2 = *(longlong **)this;
    if ((int)uVar18 < (int)plVar2[1]) {
      uVar16 = ~uVar18 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    if (*(char *)((longlong)(int)uVar18 + *plVar2) == '\x04') {
      *param_1 = *param_1 + 0xc;
    }
    *param_1 = *param_1 + 1;
    break;
  case 0x70:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_320 = *(int *)((longlong)(int)uVar18 + *plVar2);
    }
    ::operator<<(param_2,&local_320);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(int *)((longlong)(int)uVar18 + *plVar2) = local_320;
    }
    uVar18 = *param_1 + 4;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_31c = *(uint *)((longlong)(int)uVar18 + *plVar2);
    }
    ::operator<<(param_2,&local_31c);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(uint *)((longlong)(int)uVar18 + *plVar2) = local_31c;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar7 = SerializeExpr(this,param_1,param_2);
    } while (EVar7 != EX_AutoRtfmStopTransact);
    break;
  case 0x71:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_318[0] = *(int *)((longlong)(int)uVar18 + *plVar2);
    }
    ::operator<<(param_2,local_318);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(int *)((longlong)(int)uVar18 + *plVar2) = local_318[0];
    }
    uVar18 = *param_1 + 4;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar2 = *(longlong **)this;
      uVar17 = uVar9;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      local_3e0[0] = *(schar *)((longlong)(int)uVar18 + *plVar2);
    }
    ::operator<<(param_2,local_3e0);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      plVar2 = *(longlong **)this;
      if ((int)uVar18 < (int)plVar2[1]) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      *(schar *)((longlong)(int)uVar18 + *plVar2) = local_3e0[0];
    }
    *param_1 = *param_1 + 1;
  }
  return (EExprToken)local_380;
}

