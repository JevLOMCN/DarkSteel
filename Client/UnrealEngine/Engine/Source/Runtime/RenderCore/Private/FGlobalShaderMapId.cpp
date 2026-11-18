// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FGlobalShaderMapId @ 145d0a1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FGlobalShaderMapId * __thiscall
FGlobalShaderMapId::FGlobalShaderMapId
          (FGlobalShaderMapId *this,EShaderPlatform param_1,ITargetPlatform *param_2)

{
  longlong *plVar1;
  TLinkedList<FShaderType_*> *pTVar2;
  FShaderPipelineType *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  EShaderPlatform EVar5;
  FHashedName FVar6;
  FHashedName FVar7;
  FScriptContainerElement *pFVar8;
  TSet<TTuple<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  TArray<FShaderPipelineTypeDependency,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  EShaderPermutationFlags EVar11;
  int iVar12;
  ITargetPlatformManagerModule *pIVar13;
  FGlobalShaderMapId *pFVar14;
  undefined8 *puVar15;
  FName *pFVar16;
  TLinkedList<FShaderType_*> **ppTVar17;
  FSHAHash *pFVar18;
  FShaderType *pFVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  FHashedName *this_02;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  ulonglong uVar26;
  uint uVar27;
  undefined1 auStack_198 [32];
  FHashedName *local_178;
  FScriptContainerElement *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148;
  undefined1 local_147;
  FIdentityFunctor local_146 [2];
  EShaderPlatform local_144;
  ForAnyElementType local_140;
  undefined8 local_138;
  ForAnyElementType local_130;
  undefined8 local_128;
  FHashedName local_120;
  FHashedName local_118;
  uint local_110;
  int local_10c;
  FScriptContainerElement *local_108;
  FGlobalShaderMapId *local_100;
  FString local_f8;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *local_e8;
  FScriptContainerElement *local_e0;
  TSet<TTuple<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_d8;
  FString *local_d0;
  TArray<FShaderPipelineTypeDependency,TSizedDefaultAllocator<32>_> *local_c8;
  FShaderPermutationParameters local_c0;
  FName local_b4;
  FShaderPermutationParameters local_ac;
  FName local_a0;
  FName local_98;
  void *local_90 [2];
  FHashedName local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  FHashedName local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  FShaderType *pFVar25;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_d8 = (TSet<TTuple<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->ShaderFilenameToDependenciesMap;
  (this->LayoutParams).MaxFieldAlignment = 0xffffffff;
  *(undefined8 *)
   &((TMap<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>,0>_>
      *)local_d8)->field_0x0 = 0;
  local_c8 = &this->ShaderPipelineTypeDependencies;
  *(undefined8 *)&(this->ShaderFilenameToDependenciesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ShaderFilenameToDependenciesMap).field_0x20 = 0;
  (this->LayoutParams).Flags = 0;
  (this->IniPlatformName).ComparisonIndex = 0;
  (this->IniPlatformName).Number = 0;
  *(undefined4 *)&(this->ShaderFilenameToDependenciesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ShaderFilenameToDependenciesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShaderFilenameToDependenciesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShaderFilenameToDependenciesMap).field_0x34 = 0;
  *(undefined8 *)&(this->ShaderFilenameToDependenciesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ShaderFilenameToDependenciesMap).field_0x48 = 0;
  (local_c8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ShaderPipelineTypeDependencies).ArrayNum = 0;
  (this->ShaderPipelineTypeDependencies).ArrayMax = 0;
  local_144 = param_1;
  local_100 = this;
  if (param_2 == (ITargetPlatform *)0x0) {
    pIVar13 = GetTargetPlatformManagerRef();
    param_2 = (ITargetPlatform *)(**(code **)((longlong)*pIVar13 + 0xa8))(pIVar13);
    if ((param_2 == (ITargetPlatform *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TargetPlatform",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalShader.cpp"
                            ,0x180,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FGlobalShaderMapId *)(*pcVar3)();
      return pFVar14;
    }
  }
  this->ShaderPlatform = param_1;
  puVar15 = (undefined8 *)(**(code **)(*(longlong *)param_2 + 8))(param_2,local_90);
  iVar12 = *(int *)(puVar15 + 1) + -1;
  if (*(int *)(puVar15 + 1) == 0) {
    iVar12 = 0;
  }
  pFVar16 = ::FName::FName(&local_98,iVar12,(wchar_t *)*puVar15,FNAME_Add);
  this->IniPlatformName = *pFVar16;
  if (local_90[0] != (void *)0x0) {
    FMemory::Free(local_90[0]);
  }
  FPlatformTypeLayoutParameters::InitializeForPlatform(&this->LayoutParams,param_2);
  EVar11 = GetShaderPermutationFlags(&this->LayoutParams);
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128 = 0;
  ppTVar17 = FShaderType::GetTypeList();
  for (pTVar2 = *ppTVar17; pTVar2 != (TLinkedList<FShaderType_*> *)0x0;
      pTVar2 = (TLinkedList<FShaderType_*> *)pTVar2->_padding_) {
    pFVar25 = (FShaderType *)0x0;
    pFVar19 = pFVar25;
    if (pTVar2->Element->ShaderTypeForDynamicCast == Global) {
      pFVar19 = pTVar2->Element;
    }
    if ((pFVar19 != (FShaderType *)0x0) && (0 < pFVar19->TotalPermutationCount)) {
      do {
        local_b4 = pFVar19->TypeName;
        local_c0.Platform = param_1;
        local_c0.PermutationId = (int)pFVar25;
        local_c0.Flags = EVar11;
        bVar10 = FShaderType::ShouldCompilePermutation(pFVar19,&local_c0);
        if (bVar10) {
          local_118.Hash = (ulong64)pFVar19;
          if (local_140.Data <= (FScriptContainerElement *)&local_118) {
            if ((FScriptContainerElement *)&local_118 <
                local_140.Data + (longlong)local_138._4_4_ * 8) {
              local_160 = (longlong)(int)local_138;
              local_158 = 8;
              local_178 = &local_118;
              local_170 = local_140.Data;
              local_168 = (longlong)local_138._4_4_;
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar10) {
                pcVar3 = (code *)swi(3);
                pFVar14 = (FGlobalShaderMapId *)(*pcVar3)();
                return pFVar14;
              }
            }
          }
          iVar12 = (int)local_138;
          if ((int)local_138 == local_138._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_140,(int *)((longlong)&local_138 + 4));
          }
          local_138 = CONCAT44(local_138._4_4_,iVar12 + 1);
          *(ulong64 *)(local_140.Data + (longlong)iVar12 * 8) = local_118.Hash;
          break;
        }
        uVar24 = (int)pFVar25 + 1;
        pFVar25 = (FShaderType *)(ulonglong)uVar24;
      } while ((int)uVar24 < pFVar19->TotalPermutationCount);
    }
  }
  local_e8 = FShaderPipelineType::GetSortedTypes(Global);
  local_110 = local_e8->ArrayNum;
  uVar20 = (ulonglong)(int)local_110;
  pFVar23 = (local_e8->AllocatorInstance).Data;
  local_e0 = pFVar23 + uVar20 * 8;
  do {
    pFVar8 = local_e0;
    uVar26 = 0;
    local_108 = pFVar23;
    if (local_e8->ArrayNum != (int)uVar20) {
      local_148 = 0;
      `TCheckedPointerIterator<FShaderPipelineType_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_148);
    }
    if (pFVar23 == pFVar8) {
      AlgoImpl::
      IntroSortInternal<FShaderType_*,int,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>
                ((FShaderType **)local_140.Data,(int)local_138,local_146[0],
                 (FCompareShaderTypes *)local_146);
      this_01 = local_d8;
      EVar5 = local_144;
      uVar20 = uVar26;
      if (0 < (int)local_138) {
        do {
          uVar27 = (uint)uVar26;
          uVar24 = 0;
          if ((int)uVar27 < (int)local_138) {
            uVar24 = ~uVar27 >> 0x1f;
          }
          if (uVar24 == 0) {
            local_170 = (FScriptContainerElement *)(longlong)(int)local_138;
            local_178 = (FHashedName *)(longlong)(int)uVar27;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              pFVar14 = (FGlobalShaderMapId *)(*pcVar3)();
              return pFVar14;
            }
          }
          pFVar19 = *(FShaderType **)(local_140.Data + uVar20);
          FHashedName::FHashedName(&local_80,&pFVar19->HashedName);
          local_78 = 0;
          local_64 = 0;
          local_74 = 0;
          uStack_6c = 0;
          if (pFVar19 != (FShaderType *)0x0) {
            pFVar18 = FShaderType::GetSourceHash(pFVar19,EVar5);
            local_74 = *(undefined8 *)pFVar18->Hash;
            uStack_6c = *(undefined8 *)(pFVar18->Hash + 8);
            local_64 = *(undefined4 *)(pFVar18->Hash + 0x10);
          }
          ::FString::FString(&local_f8,pFVar19->SourceFilename);
          iVar12 = local_f8.Data.ArrayNum + -1;
          FVar4.Data = local_f8.Data.AllocatorInstance.Data;
          if (local_f8.Data.ArrayNum == 0) {
            iVar12 = 0;
            FVar4.Data = (FScriptContainerElement *)L"";
          }
          uVar24 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar4.Data);
          iVar12 = TSet<TTuple<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>(this_01,uVar24,&local_f8);
          if ((iVar12 == -1) ||
             (lVar22 = *(longlong *)&this_01->Elements + (longlong)iVar12 * 0x28, lVar22 == 0)) {
            local_d0 = &local_f8;
            local_178 = (FHashedName *)0x0;
            TSet<TTuple<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FString_&&>_>
                      (this_01,(uint)&local_10c,(TKeyInitializer<FString_&&> *)(ulonglong)uVar24,
                       (bool *)&local_d0);
            lVar22 = *(longlong *)&this_01->Elements + (longlong)local_10c * 0x28;
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          pFVar23 = *(FScriptContainerElement **)(lVar22 + 0x10);
          if ((pFVar23 <= (FScriptContainerElement *)&local_80) &&
             ((FScriptContainerElement *)&local_80 <
              pFVar23 + (longlong)*(int *)(lVar22 + 0x1c) * 0x20)) {
            local_160 = (longlong)*(int *)(lVar22 + 0x18);
            local_158 = 0x20;
            local_178 = &local_80;
            local_170 = pFVar23;
            local_168 = (longlong)*(int *)(lVar22 + 0x1c);
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              pFVar14 = (FGlobalShaderMapId *)(*pcVar3)();
              return pFVar14;
            }
          }
          iVar12 = *(int *)(lVar22 + 0x18);
          if (iVar12 == *(int *)(lVar22 + 0x1c)) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
          }
          *(int *)(lVar22 + 0x18) = iVar12 + 1;
          this_02 = (FHashedName *)(*(longlong *)(lVar22 + 0x10) + (longlong)iVar12 * 0x20);
          FHashedName::FHashedName(this_02,&local_80);
          uVar26 = (ulonglong)(uVar27 + 1);
          *(undefined4 *)&this_02[1].Hash = local_78;
          *(undefined8 *)((longlong)&this_02[1].Hash + 4) = local_74;
          *(undefined8 *)((longlong)&this_02[2].Hash + 4) = uStack_6c;
          *(undefined4 *)((longlong)&this_02[3].Hash + 4) = local_64;
          uVar20 = uVar20 + 8;
        } while ((int)(uVar27 + 1) < (int)local_138);
      }
      pTVar9 = local_c8;
      uVar26 = 0;
      uVar20 = uVar26;
      if (0 < (int)local_128) {
        do {
          uVar27 = (uint)uVar20;
          uVar24 = 0;
          if ((int)uVar27 < (int)local_128) {
            uVar24 = ~uVar27 >> 0x1f;
          }
          if (uVar24 == 0) {
            local_170 = (FScriptContainerElement *)(longlong)(int)local_128;
            local_178 = (FHashedName *)(longlong)(int)uVar27;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              pFVar14 = (FGlobalShaderMapId *)(*pcVar3)();
              return pFVar14;
            }
          }
          this_00 = *(FShaderPipelineType **)(local_130.Data + uVar26);
          FHashedName::FHashedName(&local_60,&this_00->HashedName);
          local_48 = 0;
          local_58 = 0;
          uStack_50 = 0;
          if (this_00 != (FShaderPipelineType *)0x0) {
            pFVar18 = FShaderPipelineType::GetSourceHash(this_00,EVar5);
            local_58 = *(undefined8 *)pFVar18->Hash;
            uStack_50 = *(undefined8 *)(pFVar18->Hash + 8);
            local_48 = *(undefined4 *)(pFVar18->Hash + 0x10);
          }
          pFVar23 = (pTVar9->AllocatorInstance).Data;
          if ((pFVar23 <= (FScriptContainerElement *)&local_60) &&
             ((FScriptContainerElement *)&local_60 < pFVar23 + (longlong)pTVar9->ArrayMax * 0x20)) {
            local_160 = (longlong)pTVar9->ArrayNum;
            local_158 = 0x20;
            local_178 = &local_60;
            local_170 = pFVar23;
            local_168 = (longlong)pTVar9->ArrayMax;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              pFVar14 = (FGlobalShaderMapId *)(*pcVar3)();
              return pFVar14;
            }
          }
          iVar12 = pTVar9->ArrayNum;
          if (iVar12 == pTVar9->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
          }
          pFVar23 = (pTVar9->AllocatorInstance).Data + (longlong)iVar12 * 0x20;
          pTVar9->ArrayNum = iVar12 + 1;
          FHashedName::FHashedName((FHashedName *)pFVar23,&local_60);
          uVar26 = uVar26 + 8;
          *(undefined8 *)&pFVar23[8].field_0x0 = local_58;
          *(undefined8 *)&pFVar23[0x10].field_0x0 = uStack_50;
          *(undefined4 *)&pFVar23[0x18].field_0x0 = local_48;
          uVar20 = (ulonglong)(uVar27 + 1);
        } while ((int)(uVar27 + 1) < (int)local_128);
      }
      if (local_130.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data);
      }
      if (local_140.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data);
      }
      return local_100;
    }
    local_120.Hash = *(ulong64 *)pFVar23;
    if ((local_120.Hash == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pipeline",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalShader.cpp"
                            ,0x1a7,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FGlobalShaderMapId *)(*pcVar3)();
      return pFVar14;
    }
    FVar6.Hash = local_120.Hash;
    if (*(int *)(local_120.Hash + 0x28) < 1) {
      local_178 = (FHashedName *)0x0;
      local_170 = (FScriptContainerElement *)(longlong)*(int *)(local_120.Hash + 0x28);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        pFVar14 = (FGlobalShaderMapId *)(*pcVar3)();
        return pFVar14;
      }
    }
    FVar7.Hash = local_120.Hash;
    EVar5 = local_144;
    uVar20 = uVar26;
    if (*(int *)(**(ulonglong **)(FVar6.Hash + 0x20) + 8) == 0) {
      uVar20 = **(ulonglong **)(FVar6.Hash + 0x20);
    }
    if (uVar20 != 0) {
      plVar21 = *(longlong **)(local_120.Hash + 0x20);
      iVar12 = *(int *)(local_120.Hash + 0x28);
      plVar1 = plVar21 + iVar12;
      while( true ) {
        if (*(int *)(FVar7.Hash + 0x28) != iVar12) {
          local_147 = 0;
          `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_147);
        }
        if (plVar21 == plVar1) break;
        local_ac.PermutationId = 0;
        local_ac.Platform = EVar5;
        pFVar19 = (FShaderType *)0x0;
        if (((FShaderType *)*plVar21)->ShaderTypeForDynamicCast == Global) {
          pFVar19 = (FShaderType *)*plVar21;
        }
        local_a0 = pFVar19->TypeName;
        local_ac.Flags = EVar11;
        bVar10 = FShaderType::ShouldCompilePermutation(pFVar19,&local_ac);
        if (!bVar10) break;
        uVar26 = (ulonglong)((int)uVar26 + 1);
        plVar21 = plVar21 + 1;
      }
      pFVar23 = local_108;
      if ((int)uVar26 == *(int *)(FVar7.Hash + 0x28)) {
        if (local_130.Data <= (FScriptContainerElement *)&local_120) {
          if ((FScriptContainerElement *)&local_120 < local_130.Data + (longlong)local_128._4_4_ * 8
             ) {
            local_160 = (longlong)(int)local_128;
            local_158 = 8;
            local_178 = &local_120;
            local_170 = local_130.Data;
            local_168 = (longlong)local_128._4_4_;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              pFVar14 = (FGlobalShaderMapId *)(*pcVar3)();
              return pFVar14;
            }
          }
        }
        iVar12 = (int)local_128;
        if ((int)local_128 == local_128._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_130,(int *)((longlong)&local_128 + 4));
        }
        local_128 = CONCAT44(local_128._4_4_,iVar12 + 1);
        *(ulong64 *)(local_130.Data + (longlong)iVar12 * 8) = local_120.Hash;
      }
    }
    pFVar23 = pFVar23 + 8;
    uVar20 = (ulonglong)local_110;
  } while( true );
}

// AppendKeyString @ 145d12710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGlobalShaderMapId::AppendKeyString
          (FGlobalShaderMapId *this,FString *param_1,
          TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// WithEditorOnly @ 145d62740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FGlobalShaderMapId::WithEditorOnly(FGlobalShaderMapId *this)

{
  return (bool)((byte)((this->LayoutParams).Flags >> 3) & 1);
}

