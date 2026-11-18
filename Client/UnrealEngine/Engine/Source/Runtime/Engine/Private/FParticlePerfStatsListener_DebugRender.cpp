// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// RenderStats @ 14818fe20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FParticlePerfStatsListener_DebugRender::RenderStats
          (FParticlePerfStatsListener_DebugRender *this,UWorld *param_1,FViewport *param_2,
          FCanvas *param_3,int param_4,int param_5,TVector<double> *param_6,
          TRotator<double> *param_7)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  UFont *this_00;
  UObject *pUVar15;
  size_t sVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  undefined1 local_res8 [8];
  undefined1 local_308 [8];
  FString local_300;
  float local_2f0;
  uint local_2ec;
  float local_2e8;
  int local_2e4;
  longlong *local_2d8;
  undefined1 auStack_2d0 [16];
  uint uStack_2c0;
  uint uStack_2bc;
  longlong local_2b8;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_2b0;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *local_2a8;
  undefined2 local_2a0;
  undefined4 local_298;
  FName local_294;
  double local_288;
  FScriptContainerElement *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  FScriptContainerElement *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  FScriptContainerElement *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FScriptContainerElement *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  FString local_238;
  longlong local_228;
  undefined1 auStack_220 [16];
  uint uStack_210;
  int iStack_20c;
  longlong local_208;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_200;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *local_1f8;
  undefined2 local_1f0;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  undefined1 local_128 [32];
  longlong local_108;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_100;
  undefined1 local_f8 [32];
  longlong local_d8;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_d0;
  
  this_00 = UEngine::GetSmallFont();
  if ((this_00 == (UFont *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Font != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                          ,0x563,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    iVar12 = (*pcVar4)();
    return iVar12;
  }
  local_2f0 = 0.0;
  local_2e8 = 0.0;
  UFont::GetCharSize(this_00,L'W',&local_2f0,&local_2e8);
  fVar24 = local_2f0 * __real_42000000;
  fVar22 = UFont::GetMaxCharHeight(this_00);
  puVar18 = &this->field_0x98;
  iVar12 = (int)(fVar22 + __real_40000000);
  local_2e4 = iVar12;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_128,
             (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
              *)puVar18);
  iVar21 = 1;
  local_1f0 = 0;
  stack0xfffffffffffffde8 = local_128._16_16_;
  local_228 = local_128._0_8_;
  auStack_220._0_8_ = local_128._8_8_;
  local_208 = local_108;
  pTStack_200 = pTStack_100;
  local_1f8 = (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
               *)puVar18;
  if (local_128._28_4_ < *(int *)(local_128._16_8_ + 0x18)) {
    do {
      uStack_210 = uStack_210 & ~auStack_220._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_220);
    } while (iStack_20c < *(int *)(auStack_220._8_8_ + 0x18));
    if (((char)local_1f0 != '\0') && (local_1f0._1_1_ != '\0')) {
      uVar20 = *(int *)&(local_1f8->Elements).field_0x8 - *(int *)&(local_1f8->Elements).field_0x34;
      if (uVar20 < 4) {
        iVar13 = 1;
      }
      else {
        uVar17 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_298 = (undefined4)lVar3;
        iVar13 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar20) && (local_1f8->HashSize < iVar13)) || (iVar13 < local_1f8->HashSize)) {
        local_1f8->HashSize = iVar13;
        TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_1f8);
      }
    }
  }
  fVar22 = __real_3f800000;
  dVar7 = (double)(fVar24 * __real_40a00000 + __real_40800000);
  FCanvas::DrawTile(param_3,__real_4058800000000000,(double)(param_5 + -1),dVar7,(double)iVar12,0.0,
                    0.0,__real_3f800000,__real_3f800000,&HeaderBackground,(FTexture *)0x0,true);
  dVar8 = __real_4059000000000000;
  local_1e8 = L"System Name";
  dVar23 = (double)param_5;
  uStack_1e0 = 0xb;
  local_1a8._12_4_ = uStack_1dc;
  local_1a8.Size = 0xb;
  local_1a8.DataPtr = L"System Name";
  FCanvas::DrawShadowedString
            (param_3,__real_4059000000000000,dVar23,&local_1a8,this_00,&FLinearColor::Yellow,
             &FLinearColor::Black);
  fVar9 = __real_42c80000;
  local_1d8 = L"Average PerFrame GT | GT CNC | RT";
  uStack_1d0 = 0x21;
  local_198._12_4_ = uStack_1cc;
  local_198.Size = 0x21;
  local_198.DataPtr = L"Average PerFrame GT | GT CNC | RT";
  local_288 = (double)(fVar24 + __real_42c80000);
  FCanvas::DrawShadowedString
            (param_3,local_288,dVar23,&local_198,this_00,&FLinearColor::Yellow,&FLinearColor::Black)
  ;
  uStack_1c0 = 0x24;
  local_1c8 = L"Average PerInstance GT | GT CNC | RT";
  local_188._12_4_ = uStack_1bc;
  local_188.Size = 0x24;
  local_188.DataPtr = L"Average PerInstance GT | GT CNC | RT";
  dVar6 = (double)(fVar24 + fVar24 + fVar9);
  FCanvas::DrawShadowedString
            (param_3,dVar6,dVar23,&local_188,this_00,&FLinearColor::Yellow,&FLinearColor::Black);
  local_1b8 = L"Peak PerFrame GT | RT";
  uStack_1b0 = 0x15;
  local_178._12_4_ = uStack_1ac;
  local_178.Size = 0x15;
  local_178.DataPtr = L"Peak PerFrame GT | RT";
  dVar5 = (double)(fVar24 * __real_40400000 + fVar9);
  FCanvas::DrawShadowedString
            (param_3,dVar5,dVar23,&local_178,this_00,&FLinearColor::Yellow,&FLinearColor::Black);
  iVar13 = param_5 + iVar12;
  local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.Data.ArrayNum = 0;
  local_300.Data.ArrayMax = 0;
  uVar20 = 0;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_f8,
             (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
              *)puVar18);
  local_2a0 = 0;
  stack0xfffffffffffffd38 = local_f8._16_16_;
  local_2d8 = (longlong *)local_f8._0_8_;
  auStack_2d0._0_8_ = local_f8._8_8_;
  local_2b8 = local_d8;
  pTStack_2b0 = pTStack_d0;
  uVar17 = local_f8._24_8_ >> 0x20;
  param_5 = iVar13;
  local_2a8 = (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
               *)puVar18;
  if (local_f8._28_4_ < *(int *)(local_f8._16_8_ + 0x18)) {
    do {
      plVar10 = local_2d8;
      piVar2 = *(int **)(*local_2d8 + 8 + (longlong)(int)uVar17 * 0x18);
      if (piVar2 != (int *)0x0) {
        bVar11 = IsInGameThread();
        if (((!bVar11) && (bVar11 = IsInRenderingThread(), !bVar11)) &&
           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<392709136413884568>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                ,0x98,"IsInRenderingThread()"), bVar11)) {
          pcVar4 = (code *)swi(3);
          iVar12 = (*pcVar4)();
          return iVar12;
        }
        pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      (*plVar10 + (longlong)(int)uStack_2bc * 0x18));
        if (((*piVar2 != 0) && (piVar2[0x40] != 0)) && (pUVar15 != (UObject *)0x0)) {
          local_2ec = uVar20 + 1;
          FCanvas::DrawTile(param_3,__real_4058800000000000,(double)(iVar13 + -1),dVar7,
                            (double)iVar12,0.0,0.0,fVar22,fVar22,BackgroundColors + (local_2ec & 1),
                            (FTexture *)0x0,true);
          local_294.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
          local_294.Number = *(uint *)&pUVar15->field_0x1c;
          ::FName::ToString(&local_294,&local_238);
          if (local_238.Data.ArrayNum == 0) {
            local_278 = (FScriptContainerElement *)0x15060d16c;
LAB_1481903ed:
            sVar16 = wcslen((wchar_t *)local_278);
            iVar14 = (int)sVar16;
          }
          else {
            iVar14 = 0;
            local_278 = local_238.Data.AllocatorInstance.Data;
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_1481903ed;
          }
          dVar23 = (double)iVar13;
          local_168._12_4_ = uStack_26c;
          local_168.Size = iVar14;
          local_168.DataPtr = (wchar_t *)local_278;
          iStack_270 = iVar14;
          FCanvas::DrawShadowedString
                    (param_3,dVar8,dVar23,&local_168,this_00,&FLinearColor::Yellow,
                     &FLinearColor::Black);
          ::FString::Reset(&local_300,0);
          ::FString::AppendfImpl(&local_300,L"%4u | %4u | %4u | %4u");
          if (local_300.Data.ArrayNum == 0) {
            local_268 = (FScriptContainerElement *)0x15060d16c;
LAB_1481905c2:
            sVar16 = wcslen((wchar_t *)local_268);
            iVar13 = (int)sVar16;
          }
          else {
            iVar13 = 0;
            local_268 = local_300.Data.AllocatorInstance.Data;
            if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_1481905c2;
          }
          local_158._12_4_ = uStack_25c;
          local_158.Size = iVar13;
          local_158.DataPtr = (wchar_t *)local_268;
          iStack_260 = iVar13;
          FCanvas::DrawShadowedString
                    (param_3,local_288,dVar23,&local_158,this_00,&FLinearColor::Yellow,
                     &FLinearColor::Black);
          ::FString::Reset(&local_300,0);
          ::FString::AppendfImpl(&local_300,L"%4u | %4u | %4u | %4u");
          if (local_300.Data.ArrayNum == 0) {
            local_258 = (FScriptContainerElement *)0x15060d16c;
LAB_1481907e5:
            sVar16 = wcslen((wchar_t *)local_258);
            iVar13 = (int)sVar16;
          }
          else {
            iVar13 = 0;
            local_258 = local_300.Data.AllocatorInstance.Data;
            if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_1481907e5;
          }
          local_148._12_4_ = uStack_24c;
          local_148.Size = iVar13;
          local_148.DataPtr = (wchar_t *)local_258;
          iStack_250 = iVar13;
          FCanvas::DrawShadowedString
                    (param_3,dVar6,dVar23,&local_148,this_00,&FLinearColor::Yellow,
                     &FLinearColor::Black);
          ::FString::Reset(&local_300,0);
          ::FString::AppendChars(&local_300,L"GT[ ",4);
          piVar19 = piVar2 + 2;
          iVar13 = piVar2[0x18];
          if (*(int **)(piVar2 + 0x16) != (int *)0x0) {
            piVar19 = *(int **)(piVar2 + 0x16);
          }
          piVar1 = piVar19 + (longlong)iVar13 * 2;
          while( true ) {
            if (piVar2[0x18] != iVar13) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_res8);
            }
            if (piVar19 == piVar1) break;
            ::FString::AppendfImpl(&local_300,L"%4u ");
            piVar19 = piVar19 + 2;
          }
          ::FString::AppendChars(&local_300,L"] RT[",5);
          iVar13 = piVar2[0x5e];
          piVar19 = *(int **)(piVar2 + 0x5c);
          if (*(int **)(piVar2 + 0x5c) == (int *)0x0) {
            piVar19 = piVar2 + 0x48;
          }
          piVar1 = piVar19 + (longlong)iVar13 * 2;
          while( true ) {
            if (piVar2[0x5e] != iVar13) {
              local_308[0] = 0;
              `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_308);
            }
            if (piVar19 == piVar1) break;
            ::FString::AppendfImpl(&local_300,L"%4u ");
            piVar19 = piVar19 + 2;
          }
          ::FString::AppendChars(&local_300,L"]",1);
          if (local_300.Data.ArrayNum == 0) {
            local_248 = (FScriptContainerElement *)0x15060d16c;
LAB_1481909a8:
            sVar16 = wcslen((wchar_t *)local_248);
            iVar13 = (int)sVar16;
          }
          else {
            iVar13 = 0;
            local_248 = local_300.Data.AllocatorInstance.Data;
            if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_1481909a8;
          }
          local_138._12_4_ = uStack_23c;
          local_138.Size = iVar13;
          local_138.DataPtr = (wchar_t *)local_248;
          iStack_240 = iVar13;
          FCanvas::DrawShadowedString
                    (param_3,dVar5,dVar23,&local_138,this_00,&FLinearColor::Yellow,
                     &FLinearColor::Black);
          iVar13 = param_5 + local_2e4;
          uVar20 = local_2ec;
          param_5 = iVar13;
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
            uVar20 = local_2ec;
          }
        }
      }
      uStack_2c0 = uStack_2c0 & ~auStack_2d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2d0);
      uVar17 = (ulonglong)uStack_2bc;
    } while ((int)uStack_2bc < *(int *)(auStack_2d0._8_8_ + 0x18));
    if (((char)local_2a0 != '\0') && (local_2a0._1_1_ != '\0')) {
      uVar20 = *(int *)&(local_2a8->Elements).field_0x8 - *(int *)&(local_2a8->Elements).field_0x34;
      if (3 < uVar20) {
        uVar17 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar20) && (local_2a8->HashSize < iVar21)) || (iVar21 < local_2a8->HashSize)) {
        local_2a8->HashSize = iVar21;
        TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_2a8);
      }
    }
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  return iVar13;
}

