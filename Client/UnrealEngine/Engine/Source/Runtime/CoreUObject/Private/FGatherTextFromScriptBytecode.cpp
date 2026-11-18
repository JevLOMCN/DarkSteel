// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// SerializeExpr @ 141f46100

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EExprToken __thiscall
FGatherTextFromScriptBytecode::SerializeExpr
          (FGatherTextFromScriptBytecode *this,int *param_1,FArchive *param_2)

{
  FScriptContainerElement FVar1;
  ushort uVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  EExprToken EVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FString *pFVar13;
  byte bVar14;
  uint uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> **ppTVar19;
  FScriptContainerElement local_res20 [8];
  FScriptContainerElement local_3b8;
  FScriptContainerElement local_3b7;
  FScriptContainerElement local_3b6;
  FScriptContainerElement local_3b5;
  FScriptContainerElement local_3b4;
  FScriptContainerElement local_3b3 [3];
  ushort local_3b0 [2];
  ushort local_3ac [2];
  uint local_3a8;
  uint local_3a4;
  uint local_3a0;
  uint local_39c;
  uint local_398;
  uint local_394;
  uint local_390;
  uint local_38c;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350 [2];
  FString local_348;
  int local_338;
  int local_334;
  int local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300 [2];
  uint local_2f8;
  undefined4 uStack_2f4;
  uint local_2f0;
  undefined4 uStack_2ec;
  uint local_2e8;
  undefined4 uStack_2e4;
  ulonglong local_2e0;
  float local_2d8 [2];
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  ulonglong local_2a0;
  undefined4 local_298;
  ulong64 local_290;
  ulong64 local_288;
  ulong64 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  FString local_1e8;
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
  double local_180;
  uint local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  uint local_168;
  undefined4 uStack_164;
  long64 local_160;
  double local_158;
  uint local_150;
  undefined4 uStack_14c;
  long64 local_148;
  long64 local_140;
  uint local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  uint local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  uint local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  FSoftObjectPath local_108;
  FScriptContainerElement *local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  FString local_60;
  TStringView<wchar_t> local_48 [2];
  
  ppTVar19 = &this->Script;
  uVar15 = 0;
  if ((param_2->field_0x28 & 1) == 0) {
    uVar17 = *param_1;
    pTVar3 = *ppTVar19;
    uVar10 = uVar15;
    if ((int)uVar17 < pTVar3->ArrayNum) {
      uVar10 = ~uVar17 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    local_res20[0] = (pTVar3->AllocatorInstance).Data[(int)uVar17];
  }
  plVar4 = *(longlong **)&param_2->field_0x8;
  if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res20,1);
  }
  else {
    local_res20[0] = *(FScriptContainerElement *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  if ((param_2->field_0x28 & 4) == 0) {
    uVar17 = *param_1;
    pTVar3 = *ppTVar19;
    uVar10 = uVar15;
    if ((int)uVar17 < pTVar3->ArrayNum) {
      uVar10 = ~uVar17 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    (pTVar3->AllocatorInstance).Data[(int)uVar17] = local_res20[0];
  }
  uVar17 = *param_1;
  *param_1 = uVar17 + 1;
  pTVar3 = *ppTVar19;
  uVar10 = uVar15;
  if ((int)uVar17 < pTVar3->ArrayNum) {
    uVar10 = ~uVar17 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    EVar9 = (*pcVar6)();
    return EVar9;
  }
  FVar1 = (pTVar3->AllocatorInstance).Data[(int)uVar17];
  uVar17 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar18 = 0;
  uVar12 = 0;
  switch(FVar1) {
  case (FScriptContainerElement)0x0:
  case (FScriptContainerElement)0x1:
  case (FScriptContainerElement)0x2:
  case (FScriptContainerElement)0x33:
  case (FScriptContainerElement)0x48:
  case (FScriptContainerElement)0x6c:
    local_1f0 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar10;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_1f0 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_1f0);
    uVar7 = local_1f0;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = uVar7;
    }
    *param_1 = *param_1 + 8;
    break;
  case (FScriptContainerElement)0x3:
  case (FScriptContainerElement)0x5:
  case (FScriptContainerElement)0x8:
  case (FScriptContainerElement)0xa:
  case (FScriptContainerElement)0xd:
  case (FScriptContainerElement)0xe:
  case (FScriptContainerElement)0x10:
  case (FScriptContainerElement)0x47:
  case (FScriptContainerElement)0x49:
  case (FScriptContainerElement)0x56:
  case (FScriptContainerElement)0x57:
  case (FScriptContainerElement)0x58:
  case (FScriptContainerElement)0x59:
  case (FScriptContainerElement)0x6e:
  case (FScriptContainerElement)0x6f:
  default:
    if (2 < (byte)LogScriptSerialization._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`private:_enum_EExprToken___cdecl_FGatherTextFromScriptBytecode::SerializeExpr(int&___ptr64,FArchive&___ptr64)___ptr64'
                  ::__l745::LOG_Static,(FLogCategoryBase *)&LogScriptSerialization);
    }
    break;
  case (FScriptContainerElement)0x4:
  case (FScriptContainerElement)0x4e:
  case (FScriptContainerElement)0x4f:
  case (FScriptContainerElement)0x51:
  case (FScriptContainerElement)0x5d:
  case (FScriptContainerElement)0x6d:
  case (FScriptContainerElement)0x72:
    goto switchD_141f462d8_caseD_4;
  case (FScriptContainerElement)0x6:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_3a8 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3a8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3a8);
      }
    }
    else {
      local_3a8 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_3a8;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x7:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_368 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_368,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_368);
      }
    }
    else {
      local_368 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_368;
    }
    *param_1 = *param_1 + 4;
    SerializeExpr(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0x9:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_3b0[0] = *(ushort *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3b0,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_3b0);
      }
    }
    else {
      local_3b0[0] = *(ushort *)*plVar4;
      *plVar4 = *plVar4 + 2;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(ushort *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_3b0[0];
    }
    uVar15 = *param_1 + 2;
    *param_1 = uVar15;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_3b5 = (pTVar3->AllocatorInstance).Data[(int)uVar15];
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b5,1);
    }
    else {
      local_3b5 = *(FScriptContainerElement *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      (pTVar3->AllocatorInstance).Data[(int)uVar15] = local_3b5;
    }
    *param_1 = *param_1 + 1;
    SerializeExpr(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0xb:
  case (FScriptContainerElement)0x15:
  case (FScriptContainerElement)0x16:
  case (FScriptContainerElement)0x17:
  case (FScriptContainerElement)0x25:
  case (FScriptContainerElement)0x26:
  case (FScriptContainerElement)0x27:
  case (FScriptContainerElement)0x28:
  case (FScriptContainerElement)0x2a:
  case (FScriptContainerElement)0x2d:
  case (FScriptContainerElement)0x30:
  case (FScriptContainerElement)0x32:
  case (FScriptContainerElement)0x3a:
  case (FScriptContainerElement)0x3c:
  case (FScriptContainerElement)0x3e:
  case (FScriptContainerElement)0x40:
  case (FScriptContainerElement)0x4a:
  case (FScriptContainerElement)0x4d:
  case (FScriptContainerElement)0x53:
  case (FScriptContainerElement)0x5a:
  case (FScriptContainerElement)0x5e:
  case (FScriptContainerElement)0x66:
    break;
  case (FScriptContainerElement)0xc:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar10;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_3a0 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3a0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3a0);
      }
    }
    else {
      local_3a0 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_3a0;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0xf:
    local_208 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar10 = uVar17;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_208 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_208);
    uVar7 = local_208;
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = uVar7;
    }
    *param_1 = *param_1 + 8;
  case (FScriptContainerElement)0x14:
  case (FScriptContainerElement)0x43:
  case (FScriptContainerElement)0x44:
  case (FScriptContainerElement)0x5f:
  case (FScriptContainerElement)0x60:
    SerializeExpr(this,param_1,param_2);
    SerializeExpr(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0x11:
    local_230 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_230 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_230);
    uVar7 = local_230;
    if ((param_2->field_0x28 & 4) == 0) {
      local_218 = this->Script;
      uVar15 = *param_1;
      uVar17 = uVar18;
      if ((int)uVar15 < local_218->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((local_218->AllocatorInstance).Data + (int)uVar15) = uVar7;
    }
    uVar15 = *param_1 + 8;
    *param_1 = uVar15;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_3b7 = (pTVar3->AllocatorInstance).Data[(int)uVar15];
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b7,1);
    }
    else {
      local_3b7 = *(FScriptContainerElement *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      (pTVar3->AllocatorInstance).Data[(int)uVar15] = local_3b7;
    }
    *param_1 = *param_1 + 1;
    break;
  case (FScriptContainerElement)0x12:
  case (FScriptContainerElement)0x19:
  case (FScriptContainerElement)0x1a:
    SerializeExpr(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_39c = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_39c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_39c);
      }
    }
    else {
      local_39c = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      uVar10 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_39c;
    }
    uVar15 = *param_1 + 4;
    *param_1 = uVar15;
    local_268 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_268 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_268);
    bVar14 = param_2->field_0x28;
    uVar7 = local_268;
    goto joined_r0x000141f46688;
  case (FScriptContainerElement)0x13:
    local_228 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_228 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_228);
    bVar14 = param_2->field_0x28;
    uVar7 = local_228;
    goto joined_r0x000141f46688;
  case (FScriptContainerElement)0x18:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_364 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_364,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_364);
      }
    }
    else {
      local_364 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_364;
    }
    *param_1 = *param_1 + 4;
    SerializeExpr(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0x1b:
  case (FScriptContainerElement)0x45:
    local_2f8 = 0;
    uStack_2f4 = 0;
    local_2d0 = (ulonglong)local_2d0._4_4_ << 0x20;
    local_2c8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar10;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      uStack_164 = *(undefined4 *)(pFVar5 + (longlong)(int)uVar15 + 8);
      local_2d0 = *(ulonglong *)(pFVar5 + (int)uVar15);
      local_168 = (uint)local_2d0;
      local_2f8 = (uint)local_2d0;
      uStack_2f4 = uStack_164;
    }
    local_2c8 = uStack_2f4;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_2f8);
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      local_138 = local_2f8;
      local_130 = uStack_2f4;
      local_2c8 = uStack_2f4;
      uStack_134 = 0;
      local_2d0 = (ulonglong)local_2f8;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      *(ulonglong *)(pFVar5 + (int)uVar15) = local_2d0;
      *(undefined4 *)(pFVar5 + (longlong)(int)uVar15 + 8) = local_2c8;
    }
    *param_1 = *param_1 + 0xc;
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_EndFunctionParms);
    break;
  case (FScriptContainerElement)0x1c:
  case (FScriptContainerElement)0x46:
  case (FScriptContainerElement)0x68:
    local_278 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar10;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_278 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_278);
    uVar7 = local_278;
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = uVar7;
    }
    *param_1 = *param_1 + 8;
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_EndFunctionParms);
    break;
  case (FScriptContainerElement)0x1d:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_398 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_398,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_398);
      }
    }
    else {
      local_398 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_398;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x1e:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_390 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_390,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_390);
      }
    }
    else {
      local_390 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_390;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x1f:
    SerializeString(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0x20:
    local_260 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_260 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x150))(param_2,&local_260);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_260;
    }
    *param_1 = *param_1 + 8;
    break;
  case (FScriptContainerElement)0x21:
    local_2f0 = 0;
    uStack_2ec = 0;
    local_2c0 = (ulonglong)local_2c0._4_4_ << 0x20;
    local_2b8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      uStack_14c = *(undefined4 *)(pFVar5 + (longlong)(int)uVar15 + 8);
      local_2c0 = *(ulonglong *)(pFVar5 + (int)uVar15);
      local_150 = (uint)local_2c0;
      local_2f0 = (uint)local_2c0;
      uStack_2ec = uStack_14c;
    }
    local_2b8 = uStack_2ec;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_2f0);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      local_12c = local_2f0;
      local_124 = uStack_2ec;
      local_2b8 = uStack_2ec;
      uStack_128 = 0;
      local_2c0 = (ulonglong)local_2f0;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      *(ulonglong *)(pFVar5 + (int)uVar15) = local_2c0;
      *(undefined4 *)(pFVar5 + (longlong)(int)uVar15 + 8) = local_2b8;
    }
    *param_1 = *param_1 + 0xc;
    break;
  case (FScriptContainerElement)0x22:
    bVar14 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar14 == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_338 = *(int *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ppTVar19 = &this->Script;
      ::operator<<(param_2,&local_338);
      if ((param_2->field_0x28 & 4) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(int *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_338;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_334 = *(int *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_334);
      if ((param_2->field_0x28 & 4) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(int *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_334;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_330 = *(int *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_330);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(int *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_330;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar14 == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar11;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_148 = *(long64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ppTVar19 = &this->Script;
      ::operator<<(param_2,&local_148);
      if ((param_2->field_0x28 & 4) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(long64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_148;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_140 = *(long64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_140);
      if ((param_2->field_0x28 & 4) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(long64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_140;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_160 = *(long64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_160);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(long64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_160;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case (FScriptContainerElement)0x23:
    bVar14 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar14 == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_32c = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ppTVar19 = &this->Script;
      ::operator<<(param_2,&local_32c);
      if ((param_2->field_0x28 & 4) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_32c;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_328 = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_328);
      if ((param_2->field_0x28 & 4) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_328;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_324 = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_324);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_324;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar14 == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_158 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ppTVar19 = &this->Script;
      ::operator<<(param_2,&local_158);
      if ((param_2->field_0x28 & 4) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_158;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_1d8 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_1d8);
      if ((param_2->field_0x28 & 4) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_1d8;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_1d0 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_1d0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_1d0;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case (FScriptContainerElement)0x24:
  case (FScriptContainerElement)0x2c:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_3b6 = (pTVar3->AllocatorInstance).Data[(int)uVar15];
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b6,1);
    }
    else {
      local_3b6 = *(FScriptContainerElement *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      (pTVar3->AllocatorInstance).Data[(int)uVar15] = local_3b6;
    }
    *param_1 = *param_1 + 1;
    break;
  case (FScriptContainerElement)0x29:
    SerializeText(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0x2b:
    bVar14 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar14 == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_320 = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ppTVar19 = &this->Script;
      ::operator<<(param_2,&local_320);
      if ((param_2->field_0x28 & 4) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_320;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_31c = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_31c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_31c;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_318 = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_318);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_318;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_314 = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_314);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_314;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_310 = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_310);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_310;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_30c = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_30c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_30c;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_308 = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_308);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_308;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_2d8[0] = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,local_2d8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_2d8[0];
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_304 = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_304);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_304;
      }
      uVar15 = *param_1 + 4;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_300[0] = *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,local_300);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(float *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_300[0];
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar14 == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_1c8 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ppTVar19 = &this->Script;
      ::operator<<(param_2,&local_1c8);
      if ((param_2->field_0x28 & 4) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_1c8;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_1c0 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_1c0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_1c0;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_1b8 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_1b8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_1b8;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_1b0 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_1b0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_1b0;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_1a8 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_1a8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_1a8;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_1a0 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_1a0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_1a0;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_198 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_198);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_198;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar12;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_190 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_190);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_190;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_188 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_188);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_188;
      }
      uVar15 = *param_1 + 8;
      *param_1 = uVar15;
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_180 = *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
      }
      ::operator<<(param_2,&local_180);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = *ppTVar19;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        *(double *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_180;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case (FScriptContainerElement)0x2e:
    local_220 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_220 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_220);
    bVar14 = param_2->field_0x28;
    uVar7 = local_220;
    goto joined_r0x000141f46688;
  case (FScriptContainerElement)0x2f:
    local_258 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_258 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_258);
    uVar7 = local_258;
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = uVar7;
    }
    uVar15 = *param_1 + 8;
    *param_1 = uVar15;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_380 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_380,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_380);
      }
    }
    else {
      local_380 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_380;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_EndStructConst);
    break;
  case (FScriptContainerElement)0x31:
    SerializeExpr(this,param_1,param_2);
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_EndArray);
    break;
  case (FScriptContainerElement)0x34:
    SerializeUnicodeString(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0x35:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_280 = *(ulong64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_280,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_280);
      }
    }
    else {
      local_280 = *(ulong64 *)*plVar4;
      *plVar4 = *plVar4 + 8;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(ulong64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_280;
    }
    *param_1 = *param_1 + 8;
    break;
  case (FScriptContainerElement)0x36:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_290 = *(ulong64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_290,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_290);
      }
    }
    else {
      local_290 = *(ulong64 *)*plVar4;
      *plVar4 = *plVar4 + 8;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(ulong64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_290;
    }
    *param_1 = *param_1 + 8;
    break;
  case (FScriptContainerElement)0x37:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_288 = *(ulong64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_288,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_288);
      }
    }
    else {
      local_288 = *(ulong64 *)*plVar4;
      *plVar4 = *plVar4 + 8;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(ulong64 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_288;
    }
    *param_1 = *param_1 + 8;
    break;
  case (FScriptContainerElement)0x38:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar10 = *param_1;
      pTVar3 = *ppTVar19;
      if ((int)uVar10 < pTVar3->ArrayNum) {
        uVar15 = ~uVar10 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_3b8 = (pTVar3->AllocatorInstance).Data[(int)uVar10];
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b8,1);
    }
    else {
      local_3b8 = *(FScriptContainerElement *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      (pTVar3->AllocatorInstance).Data[(int)uVar15] = local_3b8;
    }
    *param_1 = *param_1 + 1;
    goto switchD_141f462d8_caseD_4;
  case (FScriptContainerElement)0x39:
    SerializeExpr(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_37c = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_37c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_37c);
      }
    }
    else {
      local_37c = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_37c;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_EndSet);
    break;
  case (FScriptContainerElement)0x3b:
    SerializeExpr(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_378 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_378,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_378);
      }
    }
    else {
      local_378 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_378;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_EndMap);
    break;
  case (FScriptContainerElement)0x3d:
    local_248 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_248 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_248);
    uVar7 = local_248;
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = uVar7;
    }
    uVar15 = *param_1 + 8;
    *param_1 = uVar15;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_370 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_370,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_370);
      }
    }
    else {
      local_370 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_370;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_EndSetConst);
    break;
  case (FScriptContainerElement)0x3f:
    local_240 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_240 = *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)
                   ((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    ppTVar19 = &this->Script;
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_240);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      local_218 = local_240;
      pTVar3 = *ppTVar19;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)
       ((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_218;
    }
    uVar15 = *param_1 + 8;
    *param_1 = uVar15;
    local_238 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_238 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_238);
    uVar7 = local_238;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = *ppTVar19;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = uVar7;
    }
    uVar15 = *param_1 + 8;
    *param_1 = uVar15;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_36c = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_36c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_36c);
      }
    }
    else {
      local_36c = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_36c;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_EndMapConst);
    break;
  case (FScriptContainerElement)0x41:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_38c = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_38c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_38c);
      }
    }
    else {
      local_38c = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_38c;
    }
    uVar15 = *param_1 + 4;
    *param_1 = uVar15;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_388 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_388,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_388);
      }
    }
    else {
      local_388 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_388;
    }
    uVar15 = *param_1 + 4;
    *param_1 = uVar15;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_384 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_384,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_384);
      }
    }
    else {
      local_384 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_384;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x42:
    local_1f8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar10 = uVar17;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_1f8 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_1f8);
    bVar14 = param_2->field_0x28;
    uVar7 = local_1f8;
    goto joined_r0x000141f46688;
  case (FScriptContainerElement)0x4b:
    local_2e8 = 0;
    uStack_2e4 = 0;
    local_2b0 = (ulonglong)local_2b0._4_4_ << 0x20;
    local_2a8 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      uStack_174 = *(undefined4 *)(pFVar5 + (longlong)(int)uVar15 + 8);
      local_2b0 = *(ulonglong *)(pFVar5 + (int)uVar15);
      local_178 = (uint)local_2b0;
      local_2e8 = (uint)local_2b0;
      uStack_2e4 = uStack_174;
    }
    local_2a8 = uStack_2e4;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_2e8);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      local_120 = local_2e8;
      local_118 = uStack_2e4;
      local_2a8 = uStack_2e4;
      uStack_11c = 0;
      local_2b0 = (ulonglong)local_2e8;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      *(ulonglong *)(pFVar5 + (int)uVar15) = local_2b0;
      *(undefined4 *)(pFVar5 + (longlong)(int)uVar15 + 8) = local_2a8;
    }
    *param_1 = *param_1 + 0xc;
    break;
  case (FScriptContainerElement)0x4c:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar10;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_3a4 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3a4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3a4);
      }
    }
    else {
      local_3a4 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_3a4;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x50:
    if ((param_2->field_0x28 & 1) != 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1 - 1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      (pTVar3->AllocatorInstance).Data[(int)uVar15] = (FScriptContainerElement)0x5e;
    }
    break;
  case (FScriptContainerElement)0x52:
  case (FScriptContainerElement)0x54:
  case (FScriptContainerElement)0x55:
    local_210 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar15 = *param_1;
      pTVar3 = *ppTVar19;
      uVar10 = uVar17;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_210 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_210);
    bVar14 = param_2->field_0x28;
    uVar7 = local_210;
    goto joined_r0x000141f46688;
  case (FScriptContainerElement)0x5b:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_394 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_394,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_394);
      }
    }
    else {
      local_394 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_394;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x5c:
  case (FScriptContainerElement)0x62:
  case (FScriptContainerElement)0x6b:
    goto switchD_141f462d8_caseD_5c;
  case (FScriptContainerElement)0x61:
    local_2e0 = 0;
    local_2a0 = local_2a0 & 0xffffffff00000000;
    local_298 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      local_298 = *(undefined4 *)(pFVar5 + (longlong)(int)uVar15 + 8);
      local_2a0 = *(ulonglong *)(pFVar5 + (int)uVar15);
      local_170 = (undefined4)local_2a0;
      local_2e0 = CONCAT44(local_298,(undefined4)local_2a0);
      uStack_16c = local_298;
    }
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_2e0);
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      local_114 = (undefined4)local_2e0;
      local_298 = (undefined4)(local_2e0 >> 0x20);
      uStack_110 = 0;
      local_2a0 = local_2e0 & 0xffffffff;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      local_10c = local_298;
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      *(ulonglong *)(pFVar5 + (int)uVar15) = local_2a0;
      *(undefined4 *)(pFVar5 + (longlong)(int)uVar15 + 8) = local_298;
    }
    *param_1 = *param_1 + 0xc;
switchD_141f462d8_caseD_5c:
    SerializeExpr(this,param_1,param_2);
    SerializeExpr(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0x63:
    local_270 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar10;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_270 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_270);
    uVar7 = local_270;
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = uVar7;
    }
    *param_1 = *param_1 + 8;
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_EndFunctionParms);
    break;
  case (FScriptContainerElement)0x64:
    local_200 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar10 = uVar17;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_200 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_200);
    bVar14 = param_2->field_0x28;
    uVar7 = local_200;
joined_r0x000141f46688:
    if ((bVar14 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = uVar7;
    }
    *param_1 = *param_1 + 8;
LAB_141f464dc:
    SerializeExpr(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0x65:
    local_250 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_250 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_250);
    uVar7 = local_250;
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = uVar7;
    }
    uVar15 = *param_1 + 8;
    *param_1 = uVar15;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_374 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_374,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_374);
      }
    }
    else {
      local_374 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_374;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_EndArrayConst);
    break;
  case (FScriptContainerElement)0x67:
    if (((param_2->field_0x28 & 4) != 0) && ((param_2->field_0x2b & 1) != 0)) {
      if ((param_2->field_0x28 & 1) == 0) {
        pTVar3 = *ppTVar19;
        uVar15 = *param_1;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        local_3b3[0] = (pTVar3->AllocatorInstance).Data[(int)uVar15];
      }
      ::operator<<(param_2,(uchar *)local_3b3);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar15 = *param_1;
        pTVar3 = this->Script;
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        (pTVar3->AllocatorInstance).Data[(int)uVar15] = local_3b3[0];
      }
      uVar15 = *param_1;
      *param_1 = uVar15 + 1;
      pTVar3 = this->Script;
      uVar17 = uVar11;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      FVar1 = (pTVar3->AllocatorInstance).Data[(int)uVar15];
      if (((FVar1 != (FScriptContainerElement)0x1f) && (FVar1 != (FScriptContainerElement)0x34)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Expr == EX_StringConst || Expr == EX_UnicodeStringConst",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ScriptSerialization.h"
                             ,0x1a0,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348.Data.ArrayNum = 0;
      local_348.Data.ArrayMax = 0;
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if (FVar1 == (FScriptContainerElement)0x1f) {
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        ::FString::FString(&local_1e8,(char *)((pTVar3->AllocatorInstance).Data + (int)uVar15));
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
        local_348.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
        local_348.Data.ArrayNum = local_1e8.Data.ArrayNum;
        local_348.Data.ArrayMax = local_1e8.Data.ArrayMax;
        local_1e8.Data.ArrayNum = 0;
        local_1e8.Data.ArrayMax = 0;
        local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        SerializeString(this,param_1,param_2);
      }
      else {
        uVar17 = uVar18;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        pFVar13 = ::FString::FString(&local_60,
                                     (ushort *)((pTVar3->AllocatorInstance).Data + (int)uVar15));
        if (&local_348 != pFVar13) {
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          local_348.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
          (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_348.Data.ArrayNum = (pFVar13->Data).ArrayNum;
          local_348.Data.ArrayMax = (pFVar13->Data).ArrayMax;
          (pFVar13->Data).ArrayNum = 0;
          (pFVar13->Data).ArrayMax = 0;
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        StringConv::InlineCombineSurrogates(&local_348);
        SerializeUnicodeString(this,param_1,param_2);
      }
      local_e8 = local_348.Data.AllocatorInstance.Data;
      local_108.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_108.AssetPath.PackageName.Number = 0;
      local_108.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_108.AssetPath.AssetName.Number = 0;
      local_108.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.SubPathString.Data.ArrayNum = 0;
      local_108.SubPathString.Data.ArrayMax = 0;
      uStack_e0 = local_348.Data.ArrayNum - 1;
      if (local_348.Data.ArrayNum == 0) {
        uStack_e0 = uVar18;
      }
      local_48[0]._12_4_ = uStack_dc;
      local_48[0].Size = uStack_e0;
      local_48[0].DataPtr = (wchar_t *)local_348.Data.AllocatorInstance.Data;
      FSoftObjectPath::SetPath(&local_108,local_48);
      (**(code **)(*(longlong *)param_2 + 0x140))(param_2,&local_108);
      if (local_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
        return (EExprToken)FVar1;
      }
      return (EExprToken)FVar1;
    }
switchD_141f462d8_caseD_4:
    SerializeExpr(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0x69:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar10 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_3ac[0] = *(ushort *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3ac,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_3ac);
      }
    }
    else {
      local_3ac[0] = *(ushort *)*plVar4;
      *plVar4 = *plVar4 + 2;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      uVar10 = uVar18;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(ushort *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_3ac[0];
    }
    uVar15 = *param_1;
    *param_1 = uVar15 + 2;
    pTVar3 = this->Script;
    uVar10 = uVar11;
    if ((int)uVar15 < pTVar3->ArrayNum) {
      uVar10 = ~uVar15 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    uVar2 = *(ushort *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_360 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_360,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_360);
      }
    }
    else {
      local_360 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_360;
    }
    *param_1 = *param_1 + 4;
    SerializeExpr(this,param_1,param_2);
    uVar16 = 0;
    if (uVar2 != 0) {
      do {
        SerializeExpr(this,param_1,param_2);
        if ((param_2->field_0x28 & 1) == 0) {
          uVar15 = *param_1;
          pTVar3 = this->Script;
          uVar17 = uVar18;
          if ((int)uVar15 < pTVar3->ArrayNum) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            EVar9 = (*pcVar6)();
            return EVar9;
          }
          local_35c = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
        }
        plVar4 = *(longlong **)&param_2->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_2->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_35c,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_2,&local_35c);
          }
        }
        else {
          local_35c = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        if ((param_2->field_0x28 & 4) == 0) {
          uVar15 = *param_1;
          pTVar3 = this->Script;
          uVar17 = uVar18;
          if ((int)uVar15 < pTVar3->ArrayNum) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            EVar9 = (*pcVar6)();
            return EVar9;
          }
          *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_35c;
        }
        *param_1 = *param_1 + 4;
        SerializeExpr(this,param_1,param_2);
        uVar16 = uVar16 + 1;
        if (uVar2 <= uVar16) {
          SerializeExpr(this,param_1,param_2);
          return (EExprToken)FVar1;
        }
      } while( true );
    }
    goto LAB_141f464dc;
  case (FScriptContainerElement)0x6a:
    uVar15 = *param_1;
    pTVar3 = *ppTVar19;
    if ((int)uVar15 < pTVar3->ArrayNum) {
      uVar10 = ~uVar15 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    if ((pTVar3->AllocatorInstance).Data[(int)uVar15] == (FScriptContainerElement)0x4) {
      *param_1 = *param_1 + 0xc;
    }
    *param_1 = *param_1 + 1;
    break;
  case (FScriptContainerElement)0x70:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_358 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_358,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_358);
      }
    }
    else {
      local_358 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_358;
    }
    uVar15 = *param_1 + 4;
    *param_1 = uVar15;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_354 = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_354,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_354);
      }
    }
    else {
      local_354 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      pTVar3 = this->Script;
      uVar15 = *param_1;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_354;
    }
    *param_1 = *param_1 + 4;
    do {
      EVar9 = SerializeExpr(this,param_1,param_2);
    } while (EVar9 != EX_AutoRtfmStopTransact);
    break;
  case (FScriptContainerElement)0x71:
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = *ppTVar19;
      uVar15 = *param_1;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_350[0] = *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_350,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_350);
      }
    }
    else {
      local_350[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      *(uint *)((pTVar3->AllocatorInstance).Data + (int)uVar15) = local_350[0];
    }
    uVar15 = *param_1 + 4;
    *param_1 = uVar15;
    if ((param_2->field_0x28 & 1) == 0) {
      pTVar3 = this->Script;
      uVar17 = uVar12;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      local_3b4 = (pTVar3->AllocatorInstance).Data[(int)uVar15];
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b4,1);
    }
    else {
      local_3b4 = *(FScriptContainerElement *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar15 = *param_1;
      pTVar3 = this->Script;
      if ((int)uVar15 < pTVar3->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      (pTVar3->AllocatorInstance).Data[(int)uVar15] = local_3b4;
    }
    *param_1 = *param_1 + 1;
  }
  return (EExprToken)FVar1;
}

// SerializeString @ 141f4c750

void __thiscall
FGatherTextFromScriptBytecode::SerializeString
          (FGatherTextFromScriptBytecode *this,int *param_1,FArchive *param_2)

{
  uint uVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bIsParsingText == false) {
    do {
      uVar1 = *param_1;
      *param_1 = uVar1 + 1;
      pTVar2 = this->Script;
      uVar5 = 0;
      if ((int)uVar1 < pTVar2->ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    } while ((pTVar2->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0);
  }
  else {
    ::FString::Reset(&this->LastParsedString,0);
    do {
      uVar1 = *param_1;
      pTVar2 = this->Script;
      uVar5 = 0;
      if ((int)uVar1 < pTVar2->ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::AppendChar
                (&this->LastParsedString,(short)(char)(pTVar2->AllocatorInstance).Data[(int)uVar1]);
      uVar1 = *param_1;
      *param_1 = uVar1 + 1;
      pTVar2 = this->Script;
      uVar5 = 0;
      if ((int)uVar1 < pTVar2->ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    } while ((pTVar2->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0);
  }
  return;
}

// SerializeText @ 141f4c8e0

void __thiscall
FGatherTextFromScriptBytecode::SerializeText
          (FGatherTextFromScriptBytecode *this,int *param_1,FArchive *param_2)

{
  FScriptContainerElement FVar1;
  uint uVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  FPropertyLocalizationDataGatherer *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FTextKey local_res8 [2];
  FTextKey local_res10 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  FString local_38;
  
  uVar2 = *param_1;
  pTVar3 = this->Script;
  *param_1 = uVar2 + 1;
  uVar6 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar1 = (pTVar3->AllocatorInstance).Data[(int)uVar2];
  if (FVar1 != (FScriptContainerElement)0x0) {
    if (FVar1 == (FScriptContainerElement)0x1) {
      this->bIsParsingText = true;
      SerializeExpr(this,param_1,param_2);
      local_58.Data.AllocatorInstance.Data = (this->LastParsedString).Data.AllocatorInstance.Data;
      (this->LastParsedString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (this->LastParsedString).Data.ArrayNum;
      local_58.Data.ArrayMax = (this->LastParsedString).Data.ArrayMax;
      (this->LastParsedString).Data.ArrayNum = 0;
      (this->LastParsedString).Data.ArrayMax = 0;
      SerializeExpr(this,param_1,param_2);
      local_68.Data.AllocatorInstance.Data = (this->LastParsedString).Data.AllocatorInstance.Data;
      (this->LastParsedString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (this->LastParsedString).Data.ArrayNum;
      local_68.Data.ArrayMax = (this->LastParsedString).Data.ArrayMax;
      (this->LastParsedString).Data.ArrayNum = 0;
      (this->LastParsedString).Data.ArrayMax = 0;
      SerializeExpr(this,param_1,param_2);
      local_78.Data.AllocatorInstance.Data = (this->LastParsedString).Data.AllocatorInstance.Data;
      (this->LastParsedString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = (this->LastParsedString).Data.ArrayNum;
      local_78.Data.ArrayMax = (this->LastParsedString).Data.ArrayMax;
      (this->LastParsedString).Data.ArrayNum = 0;
      (this->LastParsedString).Data.ArrayMax = 0;
      this->bIsParsingText = false;
      FTextKey::FTextKey(local_res8,&local_68);
      FTextKey::FTextKey(local_res10,&local_78);
      FText::AsLocalizable_Advanced(&local_48,local_res10,local_res8,&local_58);
      bVar5 = FPropertyLocalizationDataGatherer::IsDefaultTextInstance
                        (this->PropertyLocalizationDataGatherer,&local_48);
      if (!bVar5) {
        this_00 = this->PropertyLocalizationDataGatherer;
        bVar5 = this->bTreatAsEditorOnlyData;
        ::FString::PrintfImpl(&local_38,L"%s [Script Bytecode]");
        FPropertyLocalizationDataGatherer::GatherTextInstance(this_00,&local_48,&local_38,bVar5);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      if ((FVar1 != (FScriptContainerElement)0x2) && (FVar1 != (FScriptContainerElement)0x3)) {
        if (FVar1 != (FScriptContainerElement)0x4) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PropertyLocalizationDataGathering.cpp"
                             ,0x30d,
                             L"Unknown EBlueprintTextLiteralType! Please update FGatherTextFromScriptBytecode::SerializeText to handle this type of text."
                            );
          if (!bVar5) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *param_1 = *param_1 + 8;
        SerializeExpr(this,param_1,param_2);
      }
      SerializeExpr(this,param_1,param_2);
    }
  }
  return;
}

// SerializeUnicodeString @ 141f4cf60

void __thiscall
FGatherTextFromScriptBytecode::SerializeUnicodeString
          (FGatherTextFromScriptBytecode *this,int *param_1,FArchive *param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (this->bIsParsingText == false) {
    do {
      do {
        *param_1 = *param_1 + 2;
        pTVar1 = this->Script;
        uVar5 = *param_1 - 1;
        uVar4 = 0;
        if ((int)uVar5 < pTVar1->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      } while ((pTVar1->AllocatorInstance).Data[(int)uVar5] != (FScriptContainerElement)0x0);
      pTVar1 = this->Script;
      uVar5 = *param_1 - 2;
      uVar4 = 0;
      if ((int)uVar5 < pTVar1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    } while ((pTVar1->AllocatorInstance).Data[(int)uVar5] != (FScriptContainerElement)0x0);
  }
  else {
    ::FString::Reset(&this->LastParsedString,0);
    do {
      do {
        uVar4 = *param_1;
        pTVar1 = this->Script;
        uVar5 = 0;
        if ((int)uVar4 < pTVar1->ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        ::FString::AppendChar
                  (&this->LastParsedString,
                   *(wchar_t *)((pTVar1->AllocatorInstance).Data + (int)uVar4));
        *param_1 = *param_1 + 2;
        pTVar1 = this->Script;
        uVar5 = *param_1 - 1;
        uVar4 = 0;
        if ((int)uVar5 < pTVar1->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      } while ((pTVar1->AllocatorInstance).Data[(int)uVar5] != (FScriptContainerElement)0x0);
      pTVar1 = this->Script;
      uVar5 = *param_1 - 2;
      uVar4 = 0;
      if ((int)uVar5 < pTVar1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    } while ((pTVar1->AllocatorInstance).Data[(int)uVar5] != (FScriptContainerElement)0x0);
    StringConv::InlineCombineSurrogates(&this->LastParsedString);
  }
  return;
}

