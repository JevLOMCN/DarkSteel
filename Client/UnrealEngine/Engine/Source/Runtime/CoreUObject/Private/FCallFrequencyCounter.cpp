// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// SerializeExpr @ 14221d120

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EExprToken __thiscall
`OutputMostFrequentlyCalledFunctions'::__l2::FCallFrequencyCounter::SerializeExpr
          (void *this,int *param_1,FArchive *param_2)

{
  char cVar1;
  TSet<TTuple<UFunction_*,int>,TDefaultMapHashableKeyFuncs<UFunction_*,int,0>,FDefaultSetAllocator>
  *this_00;
  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_01;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  EExprToken EVar5;
  EExprToken EVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  FString *pFVar11;
  byte bVar12;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  ushort uVar18;
  uint uVar19;
  undefined1 local_res20 [8];
  undefined1 local_3f4;
  undefined1 local_3f3;
  undefined1 local_3f2;
  undefined1 local_3f1;
  undefined1 local_3f0;
  uchar local_3ef;
  uchar local_3ee;
  uchar local_3ed;
  schar local_3ec [4];
  ushort local_3e8 [2];
  ushort local_3e4 [2];
  ushort local_3e0;
  ushort local_3dc [2];
  ushort local_3d8 [2];
  uint local_3d4;
  uint local_3d0;
  uint local_3cc;
  uint local_3c8;
  uint local_3c4;
  uint local_3c0;
  uint local_3bc;
  uint local_3b8;
  uint local_3b4;
  uint local_3b0;
  uint local_3ac;
  FString local_3a8;
  float local_398;
  int local_394;
  int local_390;
  int local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  int local_338;
  uint local_334;
  int local_330;
  int local_32c;
  uint local_328;
  undefined4 uStack_324;
  uint local_320;
  undefined4 uStack_31c;
  uint local_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  uint local_2d0;
  undefined4 uStack_2cc;
  ulong64 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  int local_248;
  FName local_244;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  FString local_220;
  ulonglong local_210;
  uint local_208;
  long64 local_200;
  long64 local_1f8;
  long64 local_1f0;
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
  uint local_170;
  undefined4 uStack_16c;
  double local_168;
  ulong64 local_160;
  uint local_158;
  undefined4 uStack_154;
  UObjectBase *local_150;
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
  UObjectBase **local_f8 [2];
  FScriptContainerElement *local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  FString local_58;
  TStringView<wchar_t> local_48 [2];
  
  plVar17 = *(longlong **)this;
  iVar7 = *param_1;
  uVar16 = 0;
  if (iVar7 < (int)plVar17[1]) {
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    cVar1 = *(char *)((longlong)iVar7 + *plVar17);
    if (cVar1 == '\x1b') {
LAB_14221d375:
      if (*(longlong *)((longlong)this + 0x10) != 0) {
        plVar17 = *(longlong **)this;
        uVar15 = *param_1 + 1;
        local_210 = local_210 & 0xffffffff00000000;
        local_208 = 0;
        uVar13 = uVar16;
        if ((int)uVar15 < (int)plVar17[1]) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        lVar9 = *plVar17;
        this_01 = *(TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    **)((longlong)this + 0x10);
        local_210 = *(ulonglong *)((int)uVar15 + lVar9);
        uVar13 = *(uint *)((longlong)(int)uVar15 + 8 + lVar9);
        local_244.ComparisonIndex.Value = local_210._0_4_;
        local_244.Number = uVar13;
        local_208 = uVar13;
        uVar15 = ::GetTypeHash(local_210._0_4_);
        piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::FindOrAddImpl<FName>(this_01,uVar15 + uVar13,&local_244);
        *piVar10 = *piVar10 + 1;
      }
    }
    else {
      if (cVar1 != '\x1c') {
        if (cVar1 == 'E') goto LAB_14221d375;
        if ((cVar1 != 'F') && (cVar1 != 'h')) goto LAB_14221d43b;
      }
      if (*(longlong *)((longlong)this + 8) != 0) {
        plVar17 = *(longlong **)this;
        uVar15 = *param_1 + 1;
        uVar13 = uVar16;
        if ((int)uVar15 < (int)plVar17[1]) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_150 = *(UObjectBase **)((longlong)(int)uVar15 + *plVar17);
        if (local_150 == (UObjectBase *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7634585018982988139>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                             ,0x695,"Fn");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
        }
        else {
          bVar4 = UObjectBase::IsValidLowLevel(local_150);
          if ((!bVar4) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Fn->IsValidLowLevel()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                                 ,0x697,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
          this_00 = *(TSet<TTuple<UFunction_*,int>,TDefaultMapHashableKeyFuncs<UFunction_*,int,0>,FDefaultSetAllocator>
                      **)((longlong)this + 8);
          uVar13 = ((uint)((ulonglong)local_150 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_150 >> 4)) * -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          uVar13 = uVar13 >> 0x10 ^ uVar13;
          if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
            FVar14 = (this_00->Hash).SecondaryData;
            if (FVar14 == (ForElementType<FSetElementId>)0x0) {
              FVar14 = (ForElementType<FSetElementId>)&this_00->Hash;
            }
            iVar7 = *(int *)((longlong)FVar14 + (ulonglong)(this_00->HashSize - 1U & uVar13) * 4);
            if (iVar7 != -1) {
              do {
                lVar9 = *(longlong *)&this_00->Elements + (longlong)iVar7 * 0x18;
                if (*(UObjectBase **)(*(longlong *)&this_00->Elements + (longlong)iVar7 * 0x18) ==
                    local_150) {
                  if (lVar9 != 0) goto LAB_14221d36d;
                  break;
                }
                iVar7 = *(int *)(lVar9 + 0x10);
              } while (iVar7 != -1);
            }
          }
          local_f8[0] = &local_150;
          TSet<TTuple<UFunction_*,int>,TDefaultMapHashableKeyFuncs<UFunction_*,int,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<UFunction_*_const_&>_>
                    (this_00,(uint)&local_248,
                     (TKeyInitializer<UFunction_*_const_&> *)(ulonglong)uVar13,(bool *)local_f8);
          lVar9 = *(longlong *)&this_00->Elements + (longlong)local_248 * 0x18;
LAB_14221d36d:
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        }
      }
    }
  }
LAB_14221d43b:
  if ((param_2->field_0x28 & 1) == 0) {
    uVar13 = *param_1;
    plVar17 = *(longlong **)this;
    uVar15 = uVar16;
    if ((int)uVar13 < (int)plVar17[1]) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    local_res20[0] = *(undefined1 *)((longlong)(int)uVar13 + *plVar17);
  }
  plVar17 = *(longlong **)&param_2->field_0x8;
  if ((undefined1 *)plVar17[1] < (undefined1 *)*plVar17 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res20,1);
  }
  else {
    local_res20[0] = *(undefined1 *)*plVar17;
    *plVar17 = *plVar17 + 1;
  }
  if ((param_2->field_0x28 & 4) == 0) {
    uVar13 = *param_1;
    plVar17 = *(longlong **)this;
    uVar15 = uVar16;
    if ((int)uVar13 < (int)plVar17[1]) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    *(undefined1 *)((longlong)(int)uVar13 + *plVar17) = local_res20[0];
  }
  uVar13 = *param_1;
  *param_1 = uVar13 + 1;
  plVar17 = *(longlong **)this;
  uVar15 = uVar16;
  if ((int)uVar13 < (int)plVar17[1]) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    EVar5 = (*pcVar2)();
    return EVar5;
  }
  EVar5 = *(EExprToken *)((longlong)(int)uVar13 + *plVar17);
  uVar13 = 0;
  uVar15 = 0;
  uVar8 = 0;
  uVar19 = 0;
  switch(EVar5) {
  case EX_LocalVariable:
  case EX_InstanceVariable:
  case EX_DefaultVariable:
  case EX_PropertyConst:
  case EX_LocalOutVariable:
  case EX_ClassSparseDataVariable:
    local_2b8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar15 = uVar13;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_2b8 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_2b8);
    uVar3 = local_2b8;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    *param_1 = *param_1 + 8;
    break;
  case EX_DefaultVariable|EX_InstanceVariable:
  case EX_Return|EX_InstanceVariable:
  case 8:
  case 10:
  case EX_NothingInt32|EX_InstanceVariable:
  case EX_NothingInt32|EX_DefaultVariable:
  case 0x10:
  case EX_LocalFinalFunction|EX_InstanceVariable:
  case EX_LocalOutVariable|EX_InstanceVariable:
  case EX_CrossInterfaceCast|EX_DefaultVariable:
  case EX_CrossInterfaceCast|EX_DefaultVariable|EX_InstanceVariable:
  case 0x58:
  case EX_Breakpoint|EX_Assert:
  case EX_ClassSparseDataVariable|EX_DefaultVariable:
  case EX_ClassSparseDataVariable|EX_DefaultVariable|EX_InstanceVariable:
  default:
    if (2 < (byte)LogScriptSerialization._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScriptSerialization);
    }
    break;
  case EX_Return:
  case EX_ComputedJump:
  case EX_PopExecutionFlowIfNot:
  case EX_InterfaceContext:
  case EX_ClearMulticastDelegate:
  case EX_FieldPathConst:
  case EX_AutoRtfmAbortIfNot:
    goto switchD_14221d5ba_caseD_4;
  case EX_Jump:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar15 = uVar13;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3d4 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3d4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3d4);
      }
    }
    else {
      local_3d4 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3d4;
    }
    *param_1 = *param_1 + 4;
    break;
  case EX_JumpIfNot:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_344 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_344);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      uVar13 = local_344;
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar13 = local_344, bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
LAB_142222831:
      *(uint *)((longlong)(int)uVar16 + *plVar17) = uVar13;
    }
    goto LAB_142222837;
  case EX_Assert:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3dc[0] = *(ushort *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,local_3dc);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(ushort *)((longlong)(int)uVar16 + *plVar17) = local_3dc[0];
    }
    uVar16 = *param_1 + 2;
    *param_1 = uVar16;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3ed = *(uchar *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_3ed);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uchar *)((longlong)(int)uVar16 + *plVar17) = local_3ed;
    }
    *param_1 = *param_1 + 1;
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_Nothing:
  case EX_EndParmValue:
  case EX_EndFunctionParms:
  case EX_Self:
  case EX_IntZero:
  case EX_IntOne:
  case EX_True:
  case EX_False:
  case EX_NoObject:
  case EX_NoInterface:
  case EX_EndStructConst:
  case EX_EndArray:
  case EX_EndSet:
  case EX_EndMap:
  case EX_EndSetConst:
  case EX_EndMapConst:
  case EX_DeprecatedOp4A:
  case EX_PopExecutionFlow:
  case EX_EndOfScript:
  case EX_WireTracepoint:
  case EX_Tracepoint:
  case EX_EndArrayConst:
    break;
  case EX_NothingInt32:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3cc = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3cc,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3cc);
      }
    }
    else {
      local_3cc = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3cc;
    }
    *param_1 = *param_1 + 4;
    break;
  case EX_Let:
    local_230 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar15 = uVar13;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_230 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_230);
    uVar3 = local_230;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    *param_1 = *param_1 + 8;
  case EX_LetBool:
  case EX_LetMulticastDelegate:
  case EX_LetDelegate:
  case EX_AddMulticastDelegate:
  case EX_LetObj:
  case EX_LetWeakObjPtr:
  case EX_RemoveMulticastDelegate:
  case EX_ArrayGetByRef:
    SerializeExpr(this,param_1,param_2);
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_BitFieldConst:
    local_260 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_260 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_260);
    uVar3 = local_260;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    uVar16 = *param_1 + 8;
    *param_1 = uVar16;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3f1 = *(undefined1 *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((undefined1 *)plVar17[1] < (undefined1 *)*plVar17 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3f1,1);
    }
    else {
      local_3f1 = *(undefined1 *)*plVar17;
      *plVar17 = *plVar17 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar19 = ~uVar16 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined1 *)((longlong)(int)uVar16 + *plVar17) = local_3f1;
    }
    *param_1 = *param_1 + 1;
    break;
  case EX_ClassContext:
  case EX_Context:
  case EX_Context_FailSilent:
    SerializeExpr(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3c8 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3c8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3c8);
      }
    }
    else {
      local_3c8 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3c8;
    }
    uVar16 = *param_1 + 4;
    *param_1 = uVar16;
    local_2a0 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_2a0 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_2a0);
    uVar3 = local_2a0;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    *param_1 = *param_1 + 8;
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_MetaCast:
    local_258 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_258 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_258);
    uVar3 = local_258;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    *param_1 = *param_1 + 8;
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_Skip:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_340 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_340);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      uVar13 = local_340;
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar13 = local_340, bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      goto LAB_142222831;
    }
LAB_142222837:
    *param_1 = *param_1 + 4;
LAB_14222283b:
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_VirtualFunction:
  case EX_LocalVirtualFunction:
    local_2d0 = 0;
    uStack_2cc = 0;
    local_310 = (ulonglong)local_310._4_4_ << 0x20;
    local_308 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      lVar9 = *plVar17;
      uStack_154 = *(undefined4 *)((longlong)(int)uVar16 + 8 + lVar9);
      local_310 = *(ulonglong *)((int)uVar16 + lVar9);
      local_158 = (uint)local_310;
      local_2d0 = (uint)local_310;
      uStack_2cc = uStack_154;
    }
    local_308 = uStack_2cc;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_2d0);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      local_13c = local_2d0;
      local_134 = uStack_2cc;
      local_308 = uStack_2cc;
      uStack_138 = 0;
      local_310 = (ulonglong)local_2d0;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      lVar9 = *plVar17;
      *(ulonglong *)((int)uVar16 + lVar9) = local_310;
      *(undefined4 *)((longlong)(int)uVar16 + 8 + lVar9) = local_308;
    }
    *param_1 = *param_1 + 0xc;
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_EndFunctionParms);
    break;
  case EX_FinalFunction:
  case EX_LocalFinalFunction:
  case EX_CallMath:
    local_2b0 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_2b0 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_2b0);
    uVar3 = local_2b0;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    *param_1 = *param_1 + 8;
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_EndFunctionParms);
    break;
  case EX_IntConst:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3c4 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3c4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3c4);
      }
    }
    else {
      local_3c4 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3c4;
    }
    *param_1 = *param_1 + 4;
    break;
  case EX_FloatConst:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_398 = *(float *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_398);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(float *)((longlong)(int)uVar16 + *plVar17) = local_398;
    }
    *param_1 = *param_1 + 4;
    break;
  case EX_StringConst:
    do {
      if ((param_2->field_0x28 & 1) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar15;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_3f3 = *(undefined1 *)((longlong)(int)uVar16 + *plVar17);
      }
      plVar17 = *(longlong **)&param_2->field_0x8;
      if ((undefined1 *)plVar17[1] < (undefined1 *)*plVar17 + 1) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3f3,1);
      }
      else {
        local_3f3 = *(undefined1 *)*plVar17;
        *plVar17 = *plVar17 + 1;
      }
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar15;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(undefined1 *)((longlong)(int)uVar16 + *plVar17) = local_3f3;
      }
      uVar16 = *param_1;
      *param_1 = uVar16 + 1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
    } while (*(char *)((longlong)(int)uVar16 + *plVar17) != '\0');
    break;
  case EX_ObjectConst:
    local_290 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_290 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x150))(param_2,&local_290);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = local_290;
    }
    *param_1 = *param_1 + 8;
    break;
  case EX_NameConst:
    local_328 = 0;
    uStack_324 = 0;
    local_300 = (ulonglong)local_300._4_4_ << 0x20;
    local_2f8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      lVar9 = *plVar17;
      uStack_16c = *(undefined4 *)((longlong)(int)uVar16 + 8 + lVar9);
      local_300 = *(longlong *)((int)uVar16 + lVar9);
      local_170 = (uint)local_300;
      local_328 = (uint)local_300;
      uStack_324 = uStack_16c;
    }
    local_2f8 = uStack_324;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_328);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      local_130 = local_328;
      local_128 = uStack_324;
      local_2f8 = uStack_324;
      uStack_12c = 0;
      local_300 = (ulonglong)local_328;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      lVar9 = *plVar17;
      *(ulonglong *)((int)uVar16 + lVar9) = local_300;
      *(undefined4 *)((longlong)(int)uVar16 + 8 + lVar9) = local_2f8;
    }
    *param_1 = *param_1 + 0xc;
    break;
  case EX_RotationConst:
    bVar12 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar12 == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_394 = *(int *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_394);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(int *)((longlong)(int)uVar16 + *plVar17) = local_394;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_390 = *(int *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_390);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(int *)((longlong)(int)uVar16 + *plVar17) = local_390;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_38c = *(int *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_38c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(int *)((longlong)(int)uVar16 + *plVar17) = local_38c;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar12 == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_200 = *(long64 *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_200);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(long64 *)((longlong)(int)uVar16 + *plVar17) = local_200;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1f8 = *(long64 *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1f8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(long64 *)((longlong)(int)uVar16 + *plVar17) = local_1f8;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1f0 = *(long64 *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1f0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(long64 *)((longlong)(int)uVar16 + *plVar17) = local_1f0;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case EX_VectorConst:
    bVar12 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar12 == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_388 = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_388);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_388;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_384 = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_384);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_384;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_380 = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_380);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_380;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar12 == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1e8 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1e8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_1e8;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1e0 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1e0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_1e0;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1d8 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1d8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_1d8;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case EX_ByteConst:
  case EX_IntConstByte:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3f0 = *(undefined1 *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((undefined1 *)plVar17[1] < (undefined1 *)*plVar17 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3f0,1);
    }
    else {
      local_3f0 = *(undefined1 *)*plVar17;
      *plVar17 = *plVar17 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined1 *)((longlong)(int)uVar16 + *plVar17) = local_3f0;
    }
    *param_1 = *param_1 + 1;
    break;
  case EX_TextConst:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3ef = *(uchar *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_3ef);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uchar *)((longlong)(int)uVar16 + *plVar17) = local_3ef;
    }
    uVar16 = *param_1;
    *param_1 = uVar16 + 1;
    plVar17 = *(longlong **)this;
    uVar13 = uVar8;
    if ((int)uVar16 < (int)plVar17[1]) {
      uVar13 = ~uVar16 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    cVar1 = *(char *)((longlong)(int)uVar16 + *plVar17);
    if (cVar1 == '\0') {
      return EVar5;
    }
    if (cVar1 == '\x01') {
      SerializeExpr(this,param_1,param_2);
      SerializeExpr(this,param_1,param_2);
      SerializeExpr(this,param_1,param_2);
      return EVar5;
    }
    if ((cVar1 != '\x02') && (cVar1 != '\x03')) {
      if (cVar1 != '\x04') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ScriptSerialization.h"
                           ,399,
                           L"Unknown EBlueprintTextLiteralType! Please update XFERTEXT to handle this type of text."
                          );
        if (!bVar4) {
          return EVar5;
        }
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_298 = 0;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_298 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
      }
      (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_298);
      uVar3 = local_298;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
      }
      *param_1 = *param_1 + 8;
      SerializeExpr(this,param_1,param_2);
      SerializeExpr(this,param_1,param_2);
      return EVar5;
    }
    goto switchD_14221d5ba_caseD_4;
  case EX_TransformConst:
    bVar12 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar12 == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar8;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_370 = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_370);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar8;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_370;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_36c = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_36c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_36c;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_368 = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_368);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_368;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_364 = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_364);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_364;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_360 = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_360);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_360;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_35c = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_35c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_35c;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_358 = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_358);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_358;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_354 = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_354);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_354;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_350 = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_350);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_350;
      }
      uVar16 = *param_1 + 4;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar8;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_34c = *(float *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_34c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(float *)((longlong)(int)uVar16 + *plVar17) = local_34c;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar12 == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar8;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1d0 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1d0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar8;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_1d0;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1c8 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1c8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_1c8;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1c0 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1c0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_1c0;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1b8 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1b8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_1b8;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1b0 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1b0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_1b0;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1a8 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1a8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_1a8;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_1a0 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_1a0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_1a0;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_198 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_198);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_198;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_190 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_190);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_190;
      }
      uVar16 = *param_1 + 8;
      *param_1 = uVar16;
      if ((param_2->field_0x28 & 1) == 0) {
        plVar17 = *(longlong **)this;
        uVar13 = uVar8;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_188 = *(double *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_188);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(double *)((longlong)(int)uVar16 + *plVar17) = local_188;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case EX_DynamicCast:
    local_250 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_250 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_250);
    uVar3 = local_250;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    *param_1 = *param_1 + 8;
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_StructConst:
    local_288 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_288 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_288);
    uVar3 = local_288;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    uVar16 = *param_1 + 8;
    *param_1 = uVar16;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_32c = *(int *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_32c);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(int *)((longlong)(int)uVar16 + *plVar17) = local_32c;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_EndStructConst);
    break;
  case EX_SetArray:
    SerializeExpr(this,param_1,param_2);
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_EndArray);
    break;
  case EX_UnicodeStringConst:
    do {
      do {
        if ((param_2->field_0x28 & 1) == 0) {
          uVar16 = *param_1;
          plVar17 = *(longlong **)this;
          uVar13 = uVar8;
          if ((int)uVar16 < (int)plVar17[1]) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
          local_3e8[0] = *(ushort *)((longlong)(int)uVar16 + *plVar17);
        }
        plVar17 = *(longlong **)&param_2->field_0x8;
        if ((ushort *)plVar17[1] < (ushort *)*plVar17 + 1) {
          if ((param_2->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3e8,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_2,local_3e8);
          }
        }
        else {
          local_3e8[0] = *(ushort *)*plVar17;
          *plVar17 = *plVar17 + 2;
        }
        if ((param_2->field_0x28 & 4) == 0) {
          uVar16 = *param_1;
          plVar17 = *(longlong **)this;
          uVar13 = uVar8;
          if ((int)uVar16 < (int)plVar17[1]) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
          *(ushort *)((longlong)(int)uVar16 + *plVar17) = local_3e8[0];
        }
        *param_1 = *param_1 + 2;
        plVar17 = *(longlong **)this;
        uVar13 = *param_1 - 1;
        uVar16 = uVar8;
        if ((int)uVar13 < (int)plVar17[1]) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
      } while (*(char *)((longlong)(int)uVar13 + *plVar17) != '\0');
      plVar17 = *(longlong **)this;
      uVar13 = *param_1 - 2;
      uVar16 = uVar8;
      if ((int)uVar13 < (int)plVar17[1]) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
    } while (*(char *)((longlong)(int)uVar13 + *plVar17) != '\0');
    break;
  case EX_Int64Const:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_2c8 = *(ulong64 *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)plVar17[1] < (ulong64 *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_2c8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_2c8);
      }
    }
    else {
      local_2c8 = *(ulong64 *)*plVar17;
      *plVar17 = *plVar17 + 8;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(ulong64 *)((longlong)(int)uVar16 + *plVar17) = local_2c8;
    }
    *param_1 = *param_1 + 8;
    break;
  case EX_UInt64Const:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_160 = *(ulong64 *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_160);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(ulong64 *)((longlong)(int)uVar16 + *plVar17) = local_160;
    }
    *param_1 = *param_1 + 8;
    break;
  case EX_DoubleConst:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_168 = *(double *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_168);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(double *)((longlong)(int)uVar16 + *plVar17) = local_168;
    }
    *param_1 = *param_1 + 8;
    break;
  case EX_Cast:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar15 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar15 < (int)plVar17[1]) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3f4 = *(undefined1 *)((longlong)(int)uVar15 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((undefined1 *)plVar17[1] < (undefined1 *)*plVar17 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3f4,1);
    }
    else {
      local_3f4 = *(undefined1 *)*plVar17;
      *plVar17 = *plVar17 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined1 *)((longlong)(int)uVar16 + *plVar17) = local_3f4;
    }
    *param_1 = *param_1 + 1;
    goto switchD_14221d5ba_caseD_4;
  case EX_SetSet:
    SerializeExpr(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3c0 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3c0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3c0);
      }
    }
    else {
      local_3c0 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3c0;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_EndSet);
    break;
  case EX_SetMap:
    SerializeExpr(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3bc = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3bc,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3bc);
      }
    }
    else {
      local_3bc = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3bc;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_EndMap);
    break;
  case EX_SetConst:
    local_278 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_278 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_278);
    uVar3 = local_278;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    uVar16 = *param_1 + 8;
    *param_1 = uVar16;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3b4 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3b4);
      }
    }
    else {
      local_3b4 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3b4;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_EndSetConst);
    break;
  case EX_MapConst:
    local_270 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_270 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_270);
    uVar3 = local_270;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    uVar16 = *param_1 + 8;
    *param_1 = uVar16;
    local_268 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_268 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_268);
    uVar3 = local_268;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    uVar16 = *param_1 + 8;
    *param_1 = uVar16;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3b0 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3b0);
      }
    }
    else {
      local_3b0 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar19 = ~uVar16 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3b0;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_EndMapConst);
    break;
  case EX_Vector3fConst:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_37c = *(float *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_37c);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(float *)((longlong)(int)uVar16 + *plVar17) = local_37c;
    }
    uVar16 = *param_1 + 4;
    *param_1 = uVar16;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_378 = *(float *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_378);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar19 = ~uVar16 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(float *)((longlong)(int)uVar16 + *plVar17) = local_378;
    }
    uVar16 = *param_1 + 4;
    *param_1 = uVar16;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_374 = *(float *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_374);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(float *)((longlong)(int)uVar16 + *plVar17) = local_374;
    }
    *param_1 = *param_1 + 4;
    break;
  case EX_StructMemberContext:
    local_2c0 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar15 = uVar13;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_2c0 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_2c0);
    uVar3 = local_2c0;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    *param_1 = *param_1 + 8;
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_InstanceDelegate:
    local_320 = 0;
    uStack_31c = 0;
    local_2f0 = (ulonglong)local_2f0._4_4_ << 0x20;
    local_2e8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      lVar9 = *plVar17;
      uStack_17c = *(undefined4 *)((longlong)(int)uVar16 + 8 + lVar9);
      local_2f0 = *(longlong *)((int)uVar16 + lVar9);
      local_180 = (uint)local_2f0;
      local_320 = (uint)local_2f0;
      uStack_31c = uStack_17c;
    }
    local_2e8 = uStack_31c;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_320);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      local_124 = local_320;
      local_11c = uStack_31c;
      local_2e8 = uStack_31c;
      uStack_120 = 0;
      local_2f0 = (ulonglong)local_320;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      lVar9 = *plVar17;
      *(ulonglong *)((int)uVar16 + lVar9) = local_2f0;
      *(undefined4 *)((longlong)(int)uVar16 + 8 + lVar9) = local_2e8;
    }
    *param_1 = *param_1 + 0xc;
    break;
  case EX_PushExecutionFlow:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar15 = uVar13;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3d0 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3d0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3d0);
      }
    }
    else {
      local_3d0 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3d0;
    }
    *param_1 = *param_1 + 4;
    break;
  case EX_Breakpoint:
    if ((param_2->field_0x28 & 1) != 0) {
      plVar17 = *(longlong **)this;
      uVar16 = *param_1 - 1;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined1 *)((longlong)(int)uVar16 + *plVar17) = 0x5e;
    }
    break;
  case EX_ObjToInterfaceCast:
  case EX_CrossInterfaceCast:
  case EX_InterfaceToObjCast:
    local_238 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar15 = uVar13;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_238 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_238);
    uVar3 = local_238;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    *param_1 = *param_1 + 8;
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_SkipOffsetConst:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_348 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_348);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_348;
    }
    *param_1 = *param_1 + 4;
    break;
  case EX_BindDelegate:
    local_318 = 0;
    uStack_314 = 0;
    local_2e0 = (ulonglong)local_2e0._4_4_ << 0x20;
    local_2d8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      lVar9 = *plVar17;
      uStack_174 = *(undefined4 *)((longlong)(int)uVar16 + 8 + lVar9);
      local_2e0 = *(ulonglong *)((int)uVar16 + lVar9);
      local_178 = (uint)local_2e0;
      local_318 = (uint)local_2e0;
      uStack_314 = uStack_174;
    }
    local_2d8 = uStack_314;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_318);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      local_148 = local_318;
      local_140 = uStack_314;
      local_2d8 = uStack_314;
      uStack_144 = 0;
      local_2e0 = (ulonglong)local_318;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      lVar9 = *plVar17;
      *(ulonglong *)((int)uVar16 + lVar9) = local_2e0;
      *(undefined4 *)((longlong)(int)uVar16 + 8 + lVar9) = local_2d8;
    }
    *param_1 = *param_1 + 0xc;
    SerializeExpr(this,param_1,param_2);
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_CallMulticastDelegate:
    local_2a8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar15;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_2a8 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_2a8);
    uVar3 = local_2a8;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    *param_1 = *param_1 + 8;
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_EndFunctionParms);
    break;
  case EX_LetValueOnPersistentFrame:
    local_228 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar15 = uVar13;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_228 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_228);
    uVar3 = local_228;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    *param_1 = *param_1 + 8;
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_ArrayConst:
    local_280 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_280 = *(undefined8 *)((longlong)(int)uVar16 + *plVar17);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_280);
    uVar3 = local_280;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(undefined8 *)((longlong)(int)uVar16 + *plVar17) = uVar3;
    }
    uVar16 = *param_1 + 8;
    *param_1 = uVar16;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3b8 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    plVar17 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3b8);
      }
    }
    else {
      local_3b8 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3b8;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_EndArrayConst);
    break;
  case EX_SoftObjectConst:
    if (((param_2->field_0x28 & 4) != 0) && ((param_2->field_0x2b & 1) != 0)) {
      if ((param_2->field_0x28 & 1) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        local_3ee = *(uchar *)((longlong)(int)uVar16 + *plVar17);
      }
      ::operator<<(param_2,&local_3ee);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar16 = *param_1;
        plVar17 = *(longlong **)this;
        uVar13 = uVar19;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        *(uchar *)((longlong)(int)uVar16 + *plVar17) = local_3ee;
      }
      uVar16 = *param_1;
      *param_1 = uVar16 + 1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      EVar5 = *(EExprToken *)((longlong)(int)uVar16 + *plVar17);
      if (((EVar5 != EX_StringConst) && (EVar5 != EX_UnicodeStringConst)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Expr == EX_StringConst || Expr == EX_UnicodeStringConst",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ScriptSerialization.h"
                             ,0x1a0,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a8.Data.ArrayNum = 0;
      local_3a8.Data.ArrayMax = 0;
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if (EVar5 == EX_StringConst) {
        uVar13 = uVar8;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        ::FString::FString(&local_220,(char *)((longlong)(int)uVar16 + *plVar17));
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        local_3a8.Data.AllocatorInstance.Data = local_220.Data.AllocatorInstance.Data;
        local_3a8.Data.ArrayNum = local_220.Data.ArrayNum;
        local_3a8.Data.ArrayMax = local_220.Data.ArrayMax;
        local_220.Data.ArrayNum = 0;
        local_220.Data.ArrayMax = 0;
        local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        do {
          if ((param_2->field_0x28 & 1) == 0) {
            uVar16 = *param_1;
            plVar17 = *(longlong **)this;
            uVar13 = uVar8;
            if ((int)uVar16 < (int)plVar17[1]) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              EVar5 = (*pcVar2)();
              return EVar5;
            }
            local_3f2 = *(undefined1 *)((longlong)(int)uVar16 + *plVar17);
          }
          plVar17 = *(longlong **)&param_2->field_0x8;
          if ((undefined1 *)plVar17[1] < (undefined1 *)*plVar17 + 1) {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3f2,1);
          }
          else {
            local_3f2 = *(undefined1 *)*plVar17;
            *plVar17 = *plVar17 + 1;
          }
          if ((param_2->field_0x28 & 4) == 0) {
            uVar16 = *param_1;
            plVar17 = *(longlong **)this;
            uVar13 = uVar19;
            if ((int)uVar16 < (int)plVar17[1]) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              EVar5 = (*pcVar2)();
              return EVar5;
            }
            *(undefined1 *)((longlong)(int)uVar16 + *plVar17) = local_3f2;
          }
          uVar16 = *param_1;
          *param_1 = uVar16 + 1;
          plVar17 = *(longlong **)this;
          uVar13 = uVar19;
          if ((int)uVar16 < (int)plVar17[1]) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
        } while (*(char *)((longlong)(int)uVar16 + *plVar17) != '\0');
      }
      else {
        uVar13 = uVar8;
        if ((int)uVar16 < (int)plVar17[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        pFVar11 = ::FString::FString(&local_58,(ushort *)((longlong)(int)uVar16 + *plVar17));
        if (&local_3a8 != pFVar11) {
          if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
          }
          local_3a8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3a8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
          local_3a8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        StringConv::InlineCombineSurrogates(&local_3a8);
        do {
          do {
            if ((param_2->field_0x28 & 1) == 0) {
              uVar16 = *param_1;
              plVar17 = *(longlong **)this;
              uVar13 = uVar8;
              if ((int)uVar16 < (int)plVar17[1]) {
                uVar13 = ~uVar16 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                EVar5 = (*pcVar2)();
                return EVar5;
              }
              local_3e4[0] = *(ushort *)((longlong)(int)uVar16 + *plVar17);
            }
            plVar17 = *(longlong **)&param_2->field_0x8;
            if ((ushort *)plVar17[1] < (ushort *)*plVar17 + 1) {
              if ((param_2->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3e4,2);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_2,local_3e4);
              }
            }
            else {
              local_3e4[0] = *(ushort *)*plVar17;
              *plVar17 = *plVar17 + 2;
            }
            if ((param_2->field_0x28 & 4) == 0) {
              uVar16 = *param_1;
              plVar17 = *(longlong **)this;
              uVar13 = uVar8;
              if ((int)uVar16 < (int)plVar17[1]) {
                uVar13 = ~uVar16 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                EVar5 = (*pcVar2)();
                return EVar5;
              }
              *(ushort *)((longlong)(int)uVar16 + *plVar17) = local_3e4[0];
            }
            *param_1 = *param_1 + 2;
            plVar17 = *(longlong **)this;
            uVar13 = *param_1 - 1;
            uVar16 = uVar8;
            if ((int)uVar13 < (int)plVar17[1]) {
              uVar16 = ~uVar13 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              EVar5 = (*pcVar2)();
              return EVar5;
            }
          } while (*(char *)((longlong)(int)uVar13 + *plVar17) != '\0');
          plVar17 = *(longlong **)this;
          uVar13 = *param_1 - 2;
          uVar16 = uVar8;
          if ((int)uVar13 < (int)plVar17[1]) {
            uVar16 = ~uVar13 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
        } while (*(char *)((longlong)(int)uVar13 + *plVar17) != '\0');
      }
      local_e8 = local_3a8.Data.AllocatorInstance.Data;
      local_118.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_118.AssetPath.PackageName.Number = 0;
      local_118.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_118.AssetPath.AssetName.Number = 0;
      local_118.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.SubPathString.Data.ArrayNum = 0;
      local_118.SubPathString.Data.ArrayMax = 0;
      uStack_e0 = local_3a8.Data.ArrayNum - 1;
      if (local_3a8.Data.ArrayNum == 0) {
        uStack_e0 = uVar8;
      }
      local_48[0]._12_4_ = uStack_dc;
      local_48[0].Size = uStack_e0;
      local_48[0].DataPtr = (wchar_t *)local_3a8.Data.AllocatorInstance.Data;
      FSoftObjectPath::SetPath(&local_118,local_48);
      (**(code **)(*(longlong *)param_2 + 0x140))(param_2,&local_118);
      if (local_118.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        return EVar5;
      }
      return EVar5;
    }
switchD_14221d5ba_caseD_4:
    SerializeExpr(this,param_1,param_2);
    break;
  case EX_SwitchValue:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar15 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3d8[0] = *(ushort *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,local_3d8);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar15 = uVar8;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(ushort *)((longlong)(int)uVar16 + *plVar17) = local_3d8[0];
    }
    uVar16 = *param_1;
    *param_1 = uVar16 + 2;
    plVar17 = *(longlong **)this;
    uVar15 = uVar13;
    if ((int)uVar16 < (int)plVar17[1]) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    local_3e0 = *(ushort *)((longlong)(int)uVar16 + *plVar17);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar15 = uVar13;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_33c = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_33c);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_33c;
    }
    *param_1 = *param_1 + 4;
    SerializeExpr(this,param_1,param_2);
    uVar18 = 0;
    if (local_3e0 != 0) {
      do {
        SerializeExpr(this,param_1,param_2);
        if ((param_2->field_0x28 & 1) == 0) {
          uVar16 = *param_1;
          plVar17 = *(longlong **)this;
          uVar13 = uVar8;
          if ((int)uVar16 < (int)plVar17[1]) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
          local_3ac = *(uint *)((longlong)(int)uVar16 + *plVar17);
        }
        plVar17 = *(longlong **)&param_2->field_0x8;
        if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
          if ((param_2->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3ac,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_2,&local_3ac);
          }
        }
        else {
          local_3ac = *(uint *)*plVar17;
          *plVar17 = *plVar17 + 4;
        }
        if ((param_2->field_0x28 & 4) == 0) {
          uVar16 = *param_1;
          plVar17 = *(longlong **)this;
          uVar13 = uVar8;
          if ((int)uVar16 < (int)plVar17[1]) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
          *(uint *)((longlong)(int)uVar16 + *plVar17) = local_3ac;
        }
        *param_1 = *param_1 + 4;
        SerializeExpr(this,param_1,param_2);
        uVar18 = uVar18 + 1;
        if (local_3e0 <= uVar18) {
          SerializeExpr(this,param_1,param_2);
          return EVar5;
        }
      } while( true );
    }
    goto LAB_14222283b;
  case EX_InstrumentationEvent:
    uVar16 = *param_1;
    plVar17 = *(longlong **)this;
    if ((int)uVar16 < (int)plVar17[1]) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    if (*(char *)((longlong)(int)uVar16 + *plVar17) == '\x04') {
      *param_1 = *param_1 + 0xc;
    }
    *param_1 = *param_1 + 1;
    break;
  case EX_AutoRtfmTransact:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_338 = *(int *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_338);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(int *)((longlong)(int)uVar16 + *plVar17) = local_338;
    }
    uVar16 = *param_1 + 4;
    *param_1 = uVar16;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_334 = *(uint *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_334);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar19 = ~uVar16 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(uint *)((longlong)(int)uVar16 + *plVar17) = local_334;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar6 = SerializeExpr(this,param_1,param_2);
    } while (EVar6 != EX_AutoRtfmStopTransact);
    break;
  case EX_AutoRtfmStopTransact:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_330 = *(int *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,&local_330);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(int *)((longlong)(int)uVar16 + *plVar17) = local_330;
    }
    uVar16 = *param_1 + 4;
    *param_1 = uVar16;
    if ((param_2->field_0x28 & 1) == 0) {
      plVar17 = *(longlong **)this;
      uVar13 = uVar19;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      local_3ec[0] = *(schar *)((longlong)(int)uVar16 + *plVar17);
    }
    ::operator<<(param_2,local_3ec);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar16 = *param_1;
      plVar17 = *(longlong **)this;
      if ((int)uVar16 < (int)plVar17[1]) {
        uVar19 = ~uVar16 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
      *(schar *)((longlong)(int)uVar16 + *plVar17) = local_3ec[0];
    }
    *param_1 = *param_1 + 1;
  }
  return EVar5;
}

