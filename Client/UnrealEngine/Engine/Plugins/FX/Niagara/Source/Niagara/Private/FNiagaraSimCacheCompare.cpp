// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// operator() @ 14938ca20

bool __thiscall
`FNiagaraSimCacheCompare::CompareEmitter'::__l9::<lambda_1>::operator()
          (void *this,TArray<FNiagaraSimCacheVariable,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNiagaraSimCacheVariable,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  int iVar3;
  FName *pFVar4;
  FName *this_00;
  bool bVar5;
  undefined1 local_res10 [8];
  FString local_48;
  FString local_38;
  
  iVar3 = param_1->ArrayNum;
  this_00 = (FName *)(param_1->AllocatorInstance).Data;
  bVar5 = true;
  pFVar1 = this_00 + (longlong)iVar3 * 3;
  do {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraSimCacheVariable_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == pFVar1) {
      return bVar5;
    }
    pFVar4 = (FName *)(param_2->AllocatorInstance).Data;
    pFVar2 = pFVar4 + (longlong)param_2->ArrayNum * 3;
    if (pFVar4 != pFVar2) {
      do {
        if ((*this_00 == *pFVar4) &&
           (this_00[1].ComparisonIndex.Value == pFVar4[1].ComparisonIndex.Value))
        goto LAB_14938cb12;
        pFVar4 = pFVar4 + 3;
      } while (pFVar4 != pFVar2);
    }
    ::FName::ToString(this_00,&local_38);
    ::FString::PrintfImpl(&local_48,L"%s attribute %s does not exist in both caches.");
    NiagaraSimCacheCompareInternal::AddError(*(FString **)this,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar5 = false;
LAB_14938cb12:
    this_00 = this_00 + 3;
  } while( true );
}

// AddExcludeAttribute @ 14938f4a0

void __thiscall
FNiagaraSimCacheCompare::AddExcludeAttribute
          (FNiagaraSimCacheCompare *this,FNiagaraVariableBase *param_1)

{
  bool bVar1;
  TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator> *this_00;
  FNiagaraVariableBase local_res18;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr =
       (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
  local_18.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
  if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  bVar1 = FNiagaraVariableBase::RemoveRootNamespace(param_1,&local_18);
  this_00 = &this->AttributesToExclude_ParticleScript;
  if (!bVar1) {
    this_00 = &this->AttributesToExclude_SystemScript;
  }
  TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>::
  Emplace<FNiagaraVariableBase_const_&>(this_00,&local_res18,(bool *)param_1);
  return;
}

// AddExcludeAttributesByWildcard @ 14938f510

void __thiscall
FNiagaraSimCacheCompare::AddExcludeAttributesByWildcard
          (FNiagaraSimCacheCompare *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
            (&this->AttributesToExclude_ByWildcard,param_1);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Compare @ 1493978e0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FNiagaraSimCacheCompare::Compare
          (FNiagaraSimCacheCompare *this,UNiagaraSimCache *param_1,UNiagaraSimCache *param_2,
          FString *param_3)

{
  FName FVar1;
  ForElementType<FSetElementId> FVar2;
  UObject *pUVar3;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  FName FVar11;
  longlong lVar12;
  FNiagaraTypeDefinition *pFVar13;
  UClass *pUVar14;
  FString *pFVar15;
  longlong *plVar16;
  TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *pTVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  uchar *puVar22;
  UClass *pUVar23;
  wchar_t *pwVar24;
  ulonglong uVar25;
  ForElementType<FSetElementId> FVar26;
  int iVar27;
  size_t sVar28;
  FNiagaraVariableBase *pFVar29;
  UClass *pUVar30;
  ForAnyElementType FVar31;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *pTVar32;
  FScriptContainerElement *pFVar33;
  UClass *pUVar34;
  wchar_t *pwVar35;
  uint uVar36;
  ulonglong uVar37;
  uint uVar38;
  ulonglong uVar39;
  FScriptContainerElement *pFVar40;
  int iVar41;
  ForAnyElementType FVar42;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *this_01;
  byte bVar43;
  UClass *pUVar44;
  undefined4 local_res10;
  bool local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5;
  undefined1 local_2d4;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *local_2d0;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> local_2c8;
  ulonglong local_2b8;
  uint local_2b0;
  UClass *local_2a8;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *local_260;
  void *local_258;
  undefined8 local_250;
  FName local_248;
  undefined4 local_240;
  undefined1 local_23c;
  FNiagaraVariableBase local_238;
  FString local_228;
  FNiagaraVariableBase local_218;
  ForAnyElementType local_208;
  int local_200;
  int local_1fc;
  longlong local_1f8;
  undefined4 local_1f0;
  ForAnyElementType local_1e8;
  int local_1e0;
  int local_1dc;
  FNiagaraVariableBase local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TStringView<wchar_t> local_158;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  if ((param_1->CacheFrames).ArrayNum == (param_2->CacheFrames).ArrayNum) {
    iVar27 = (param_1->CacheLayout).EmitterLayouts.ArrayNum;
    if (iVar27 == (param_2->CacheLayout).EmitterLayouts.ArrayNum) {
      uVar39 = 0;
      uVar20 = uVar39;
      uVar25 = uVar39;
      if (0 < iVar27) {
        do {
          iVar27 = (int)uVar20;
          uVar20 = uVar39;
          if ((iVar27 < 0) || ((param_2->CacheLayout).EmitterLayouts.ArrayNum <= iVar27)) {
            uVar37 = uVar39;
            if (-1 < iVar27) goto LAB_149397a82;
          }
          else {
            if ((iVar27 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            uVar37 = *(ulonglong *)
                      ((param_2->CacheLayout).EmitterLayouts.AllocatorInstance.Data + uVar25);
LAB_149397a82:
            if (iVar27 < (param_1->CacheLayout).EmitterLayouts.ArrayNum) {
              if ((iVar27 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              uVar20 = *(ulonglong *)
                        ((param_1->CacheLayout).EmitterLayouts.AllocatorInstance.Data + uVar25);
            }
          }
          if (uVar20 != uVar37) {
            FVar11 = UNiagaraSimCache::GetEmitterName(param_2,(int)local_148);
            ::FName::ToString((FName *)FVar11,&local_128);
            FVar11 = UNiagaraSimCache::GetEmitterName(param_1,(int)local_140);
            ::FName::ToString((FName *)FVar11,&local_138);
            ::FString::PrintfImpl
                      (&local_270,L"Cache Emitter name is different. Expected: %s, Actual: %s");
            if (param_3 != &local_270) {
              pFVar40 = (param_3->Data).AllocatorInstance.Data;
              if (pFVar40 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar40);
              }
              (param_3->Data).AllocatorInstance.Data = local_270.Data.AllocatorInstance.Data;
              (param_3->Data).ArrayNum = local_270.Data.ArrayNum;
              (param_3->Data).ArrayMax = local_270.Data.ArrayMax;
              local_270.Data.ArrayNum = 0;
              local_270.Data.ArrayMax = 0;
              local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.Data.AllocatorInstance.Data);
            }
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
            if (local_128.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return false;
            }
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
            return false;
          }
          uVar20 = (ulonglong)(iVar27 + 1U);
          uVar25 = uVar25 + 0xb8;
        } while ((int)(iVar27 + 1U) < (param_1->CacheLayout).EmitterLayouts.ArrayNum);
      }
      FVar31.Data = INiagaraModule::Particles_ID.VarData.AllocatorInstance.Data;
      if (this->bExcludeNoneDeterministicVariables != false) {
        sVar28 = (size_t)INiagaraModule::Particles_ID.VarData.ArrayNum;
        local_218.Name.ComparisonIndex.Value = (undefined4)INiagaraModule::Particles_ID._padding_;
        local_218.Name.Number = INiagaraModule::Particles_ID._padding_._4_4_;
        local_218.TypeDefHandle.RegisteredTypeIndex = (int)INiagaraModule::Particles_ID._padding_;
        local_208.Data = (FScriptContainerElement *)0x0;
        local_200 = INiagaraModule::Particles_ID.VarData.ArrayNum;
        if (INiagaraModule::Particles_ID.VarData.ArrayNum == 0) {
          local_1fc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,INiagaraModule::Particles_ID.VarData.ArrayNum,0,&local_208,
                     INiagaraModule::Particles_ID.VarData.ArrayNum,&local_1fc);
          memcpy(local_208.Data,FVar31.Data,sVar28);
        }
        FVar31.Data = INiagaraModule::Particles_MaterialRandom.VarData.AllocatorInstance.Data;
        sVar28 = (size_t)INiagaraModule::Particles_MaterialRandom.VarData.ArrayNum;
        local_1f8 = INiagaraModule::Particles_MaterialRandom._padding_;
        local_1f0 = (undefined4)INiagaraModule::Particles_MaterialRandom._padding_;
        local_1e8.Data = (FScriptContainerElement *)0x0;
        local_1e0 = INiagaraModule::Particles_MaterialRandom.VarData.ArrayNum;
        if (INiagaraModule::Particles_MaterialRandom.VarData.ArrayNum == 0) {
          local_1dc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,INiagaraModule::Particles_MaterialRandom.VarData.ArrayNum,0,&local_1e8,
                     INiagaraModule::Particles_MaterialRandom.VarData.ArrayNum,&local_1dc);
          memcpy(local_1e8.Data,FVar31.Data,sVar28);
        }
        pFVar29 = &local_218;
        do {
          local_238.TypeDefHandle.RegisteredTypeIndex = (pFVar29->TypeDefHandle).RegisteredTypeIndex
          ;
          local_238.Name = pFVar29->Name;
          local_158.DataPtr =
               (wchar_t *)
               FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
          local_158.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
          if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
            local_158.Size = 0;
          }
          FNiagaraVariableBase::RemoveRootNamespace(&local_238,&local_158);
          TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>::
          Emplace<FNiagaraVariableBase_const_&>
                    (&this->AttributesToExclude_ParticleScript,&local_1d8,(bool *)&local_238);
          pFVar29 = (FNiagaraVariableBase *)&pFVar29[2].TypeDefHandle;
        } while (pFVar29 != &local_1d8);
        if (local_1e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data);
        }
        if (local_208.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data);
        }
      }
      ::FString::Reset(param_3,0x2000);
      uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar5 = __real_38d1b717;
      local_2d8 = true;
      if (0 < (param_1->CacheFrames).ArrayNum) {
        local_2d0 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                     *)0x0;
        local_2b8 = 0;
        do {
          uVar20 = local_2b8;
          pTVar32 = local_2d0;
          iVar27 = 0;
          uVar38 = (uint)uVar39;
          uVar36 = 0;
          if ((int)uVar38 < (param_1->CacheFrames).ArrayNum) {
            uVar36 = ~uVar38 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pFVar40 = (param_1->CacheFrames).AllocatorInstance.Data;
          uVar36 = 0;
          if ((int)uVar38 < (param_2->CacheFrames).ArrayNum) {
            uVar36 = ~uVar38 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          if (fVar5 < (float)((uint)(*(float *)(pFVar40 + uVar20 + 0x6c) -
                                    *(float *)((param_2->CacheFrames).AllocatorInstance.Data +
                                              uVar20 + 0x6c)) & uVar10)) {
            ::FString::PrintfImpl(&local_168,L"Simulation age different - frame %d");
            iVar41 = (param_3->Data).ArrayNum;
            iVar19 = 0;
            iVar18 = iVar41 + -1;
            if (iVar41 == 0) {
              iVar18 = iVar19;
            }
            if (iVar18 < 0x2000) {
              iVar41 = local_168.Data.ArrayNum + -1;
              if (local_168.Data.ArrayNum == 0) {
                iVar41 = iVar19;
              }
              ::FString::AppendChars
                        (param_3,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar41);
              iVar41 = (param_3->Data).ArrayNum;
              iVar18 = iVar41 + -1;
              if (iVar41 == 0) {
                iVar18 = iVar19;
              }
              if (iVar18 < 0x2000) {
                iVar41 = 1;
                pwVar24 = L"\n";
              }
              else {
                iVar41 = 4;
                pwVar24 = L"...\n";
              }
              ::FString::AppendChars(param_3,pwVar24,iVar41);
            }
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
            local_2d8 = false;
          }
          bVar6 = CompareEmitter(this,param_1,param_2,-1,uVar38,param_3);
          local_2d8 = (bool)(local_2d8 & bVar6);
          if (0 < (param_1->CacheLayout).EmitterLayouts.ArrayNum) {
            do {
              bVar6 = CompareEmitter(this,param_1,param_2,iVar27,uVar38,param_3);
              local_2d8 = (bool)(local_2d8 & bVar6);
              iVar27 = iVar27 + 1;
              pTVar32 = local_2d0;
              uVar20 = local_2b8;
            } while (iVar27 < (param_1->CacheLayout).EmitterLayouts.ArrayNum);
          }
          if (local_2d8 == false) {
            return false;
          }
          local_2d0 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                       *)((longlong)pTVar32 + 1);
          local_2b8 = uVar20 + 0x160;
          uVar39 = (ulonglong)(uVar38 + 1);
        } while ((int)(uVar38 + 1) < (param_1->CacheFrames).ArrayNum);
      }
      pUVar44 = (UClass *)0x0;
      if (this->bIncludeDataInterfaces == false) {
        return local_2d8;
      }
      local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.ArrayNum = 0;
      local_2a0.ArrayMax = 0;
      TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
                  *)&param_1->DataInterfaceStorage,&local_2a0);
      local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8.ArrayNum = 0;
      local_2c8.ArrayMax = 0;
      TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
                  *)&param_2->DataInterfaceStorage,&local_2c8);
      uVar25 = (ulonglong)local_2a0.ArrayNum;
      local_2b8 = CONCAT44(local_2b8._4_4_,local_2a0.ArrayNum);
      local_260 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                   *)(local_2a0.AllocatorInstance.Data + uVar25 * 0xc);
      uVar20 = uVar25;
      FVar31.Data = local_2a0.AllocatorInstance.Data;
      while( true ) {
        pTVar32 = local_260;
        if ((int)uVar25 != (int)uVar20) {
          local_2d7 = 0;
          `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_2d7);
        }
        iVar41 = 0;
        iVar27 = local_2c8.ArrayNum;
        if ((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
             *)FVar31.Data == pTVar32) break;
        local_2d0 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                     *)local_2c8.AllocatorInstance.Data;
        if (((local_2c8.AllocatorInstance.Data <= FVar31.Data) &&
            (FVar31.Data <
             (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              *)(local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 0xc))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar21 = (longlong)local_2c8.ArrayNum;
        local_2a8 = (UClass *)CONCAT44(local_2a8._4_4_,local_2c8.ArrayNum);
        local_2d0 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                     *)local_2c8.AllocatorInstance.Data;
        if (local_2c8.ArrayNum == 0) {
LAB_149398208:
          ::FName::ToString((FName *)FVar31.Data,&local_118);
          ::FString::PrintfImpl(&local_1c8,L"DataInterface(%s) was in Lhs and not Rhs cache.");
          iVar27 = (param_3->Data).ArrayNum;
          iVar18 = iVar27 + -1;
          if (iVar27 == 0) {
            iVar18 = iVar41;
          }
          if (iVar18 < 0x2000) {
            iVar27 = local_1c8.Data.ArrayNum + -1;
            if (local_1c8.Data.ArrayNum == 0) {
              iVar27 = iVar41;
            }
            ::FString::AppendChars(param_3,(wchar_t *)local_1c8.Data.AllocatorInstance.Data,iVar27);
            iVar27 = (param_3->Data).ArrayNum;
            iVar18 = iVar27 + -1;
            if (iVar27 == 0) {
              iVar18 = iVar41;
            }
            if (iVar18 < 0x2000) {
              iVar27 = 1;
              pwVar24 = L"\n";
            }
            else {
              iVar27 = 4;
              pwVar24 = L"...\n";
            }
            ::FString::AppendChars(param_3,pwVar24,iVar27);
          }
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          local_2d8 = false;
        }
        else {
          FVar1.ComparisonIndex.Value =
               *(uint *)&(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                            *)FVar31.Data)->Elements).field_0x0;
          FVar1.Number = *(uint *)&(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                                      *)FVar31.Data)->Elements).field_0x4;
          local_2b0 = 0;
          pUVar14 = pUVar44;
          pUVar23 = pUVar44;
          FVar42.Data = local_2c8.AllocatorInstance.Data;
          if ((*(FName *)local_2c8.AllocatorInstance.Data == FVar1) &&
             ((((FName *)(local_2c8.AllocatorInstance.Data + 8))->ComparisonIndex).Value ==
              *(uint *)&(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                           *)FVar31.Data)->Elements).field_0x8)) {
            bVar43 = 0;
            pUVar34 = pUVar44;
          }
          else {
            bVar43 = 1;
            pUVar34 = pUVar44;
          }
          do {
            uVar10 = (uint)pUVar23;
            uVar36 = (uint)pUVar34;
            pUVar30 = (UClass *)((longlong)&pUVar14->_padding_ + 1);
            pUVar34 = (UClass *)(ulonglong)(uVar36 + 1);
            if ((longlong)pUVar30 < lVar21) {
              puVar22 = (((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                           *)FVar42.Data)->Hash).InlineData +
                        (longlong)&pUVar14->_padding_ * 0xc + -0x2c;
              do {
                if ((*(longlong *)puVar22 !=
                     *(longlong *)
                      &((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                         *)FVar31.Data)->Elements) ||
                   (bVar8 = 0,
                   *(int *)(puVar22 + 8) !=
                   *(int *)&(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                               *)FVar31.Data)->Elements).field_0x8)) {
                  bVar8 = 1;
                }
                if (bVar43 != bVar8) break;
                pUVar34 = (UClass *)(ulonglong)((int)pUVar34 + 1);
                pUVar30 = (UClass *)((longlong)&pUVar30->_padding_ + 1);
                puVar22 = puVar22 + 0xc;
              } while ((longlong)pUVar30 < lVar21);
            }
            iVar27 = (int)pUVar34 - uVar36;
            if (bVar43 != 0) {
              if (uVar10 != uVar36) {
                memmove((((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                           *)FVar42.Data)->Hash).InlineData + (longlong)(int)uVar10 * 0xc + -0x38,
                        (((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                           *)FVar42.Data)->Hash).InlineData + (longlong)(int)uVar36 * 0xc + -0x38,
                        (longlong)iVar27 * 0xc);
                FVar42.Data = (FScriptContainerElement *)local_2d0;
                uVar10 = local_2b0;
              }
              local_2b0 = uVar10 + iVar27;
              pUVar23 = (UClass *)(ulonglong)local_2b0;
            }
            bVar43 = bVar43 ^ 1;
            pUVar14 = pUVar30;
          } while ((longlong)pUVar30 < lVar21);
          iVar27 = (int)local_2a8 - (int)pUVar23;
          local_2a8 = (UClass *)CONCAT44(local_2a8._4_4_,iVar27);
          local_2c8.ArrayNum = (int)pUVar23;
          if (iVar27 == 0) goto LAB_149398208;
        }
        uVar25 = local_2a0._8_8_ & 0xffffffff;
        FVar31.Data = (FScriptContainerElement *)
                      &(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                          *)FVar31.Data)->Elements).field_0xc;
        uVar20 = local_2b8 & 0xffffffff;
      }
      pTVar32 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)(local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayNum * 0xc);
      FVar31.Data = local_2c8.AllocatorInstance.Data;
      while( true ) {
        if (local_2c8.ArrayNum != iVar27) {
          local_2d6 = 0;
          `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_2d6);
        }
        if ((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
             *)FVar31.Data == pTVar32) break;
        ::FName::ToString((FName *)FVar31.Data,&local_d8);
        ::FString::PrintfImpl(&local_1b8,L"DataInterface(%s) was in Rhs and not Lhs cache.");
        iVar18 = (param_3->Data).ArrayNum;
        iVar19 = iVar18 + -1;
        if (iVar18 == 0) {
          iVar19 = iVar41;
        }
        if (iVar19 < 0x2000) {
          iVar18 = local_1b8.Data.ArrayNum + -1;
          if (local_1b8.Data.ArrayNum == 0) {
            iVar18 = iVar41;
          }
          ::FString::AppendChars(param_3,(wchar_t *)local_1b8.Data.AllocatorInstance.Data,iVar18);
          iVar18 = (param_3->Data).ArrayNum;
          iVar19 = iVar18 + -1;
          if (iVar18 == 0) {
            iVar19 = iVar41;
          }
          if (iVar19 < 0x2000) {
            iVar18 = 1;
            pwVar24 = L"\n";
          }
          else {
            iVar18 = 4;
            pwVar24 = L"...\n";
          }
          ::FString::AppendChars(param_3,pwVar24,iVar18);
        }
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        local_2d8 = false;
        FVar31.Data = (FScriptContainerElement *)
                      &(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                          *)FVar31.Data)->Elements).field_0xc;
      }
      if ((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           *)local_2c8.AllocatorInstance.Data !=
          (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           *)0x0) {
        FMemory::Free(local_2c8.AllocatorInstance.Data);
      }
      if (local_2d8 == false) goto LAB_149398ad1;
      uVar25 = (ulonglong)local_2a0.ArrayNum;
      local_res10 = SUB84(param_1,0);
      local_2b8 = CONCAT44(local_2b8._4_4_,local_2a0.ArrayNum);
      pTVar32 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)(local_2a0.AllocatorInstance.Data + uVar25 * 0xc);
      this_01 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)&param_1->DataInterfaceStorage;
      uVar20 = uVar25;
      FVar31.Data = local_2a0.AllocatorInstance.Data;
      local_2d0 = pTVar32;
      local_260 = this_01;
      do {
        if ((int)uVar25 != (int)uVar20) {
          local_2d5 = 0;
          `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_2d5);
        }
        if ((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
             *)FVar31.Data == pTVar32) goto LAB_149398ad1;
        uVar10 = ::GetTypeHash((FNiagaraVariableBase *)FVar31.Data);
        if (*(int *)&(this->AttributesToExclude_SystemScript).Elements.field_0x8 !=
            *(int *)&(this->AttributesToExclude_SystemScript).Elements.field_0x34) {
          FVar2 = (this->AttributesToExclude_SystemScript).Hash.SecondaryData;
          FVar26 = (ForElementType<FSetElementId>)&(this->AttributesToExclude_SystemScript).Hash;
          if (FVar2 != (ForElementType<FSetElementId>)0x0) {
            FVar26 = FVar2;
          }
          iVar27 = *(int *)((longlong)FVar26 +
                           (ulonglong)
                           ((this->AttributesToExclude_SystemScript).HashSize - 1U & uVar10) * 4);
          if (iVar27 != -1) {
            lVar21 = *(longlong *)&(this->AttributesToExclude_SystemScript).Elements;
            do {
              lVar12 = (longlong)iVar27;
              if ((*(longlong *)(lVar21 + lVar12 * 0x14) ==
                   *(longlong *)
                    &((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                       *)FVar31.Data)->Elements) &&
                 (*(int *)(lVar21 + 8 + lVar12 * 0x14) ==
                  *(int *)&(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                              *)FVar31.Data)->Elements).field_0x8)) {
                if (iVar27 != -1) goto LAB_1493988cb;
                break;
              }
              iVar27 = *(int *)(lVar21 + 0xc + lVar12 * 0x14);
            } while (iVar27 != -1);
          }
        }
        iVar27 = (this->AttributesToExclude_ByWildcard).ArrayNum;
        pwVar24 = L"";
        FVar11.ComparisonIndex.Value =
             *(uint *)&(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                          *)FVar31.Data)->Elements).field_0x0;
        FVar11.Number =
             *(uint *)&(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                          *)FVar31.Data)->Elements).field_0x4;
        pFVar40 = (this->AttributesToExclude_ByWildcard).AllocatorInstance.Data;
        if ((iVar27 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar41 = 0;
        local_248 = FVar11;
        if (iVar27 != 0) {
          ::FName::ToString(&local_248,&local_1a8);
          pFVar33 = pFVar40 + (longlong)iVar27 * 0x10;
          for (; pFVar40 != pFVar33; pFVar40 = pFVar40 + 0x10) {
            if (*(int *)(pFVar40 + 8) == 0) {
              pwVar35 = L"";
              iVar27 = iVar41;
            }
            else {
              pwVar35 = *(wchar_t **)pFVar40;
              iVar27 = *(int *)(pFVar40 + 8) + -1;
            }
            bVar6 = ::FString::MatchesWildcard(&local_1a8,pwVar35,iVar27,IgnoreCase);
            if (bVar6) {
              pTVar32 = local_2d0;
              if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                pTVar32 = local_2d0;
              }
              goto LAB_1493988cb;
            }
          }
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
        }
        pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)
                             &(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                                 *)FVar31.Data)->Elements).field_0x8);
        if (pFVar13->UnderlyingType != 1) {
          ::FString::FString(&local_228,L"None");
LAB_1493989de:
          ::FName::ToString((FName *)FVar31.Data,&local_e8);
          ::FString::PrintfImpl(&local_178,L"DataInterface(%s) could not find CDO for Class(%s).");
          iVar27 = (param_3->Data).ArrayNum;
          iVar18 = iVar27 + -1;
          if (iVar27 == 0) {
            iVar18 = iVar41;
          }
          if (iVar18 < 0x2000) {
            iVar27 = local_178.Data.ArrayNum + -1;
            if (local_178.Data.ArrayNum == 0) {
              iVar27 = iVar41;
            }
            ::FString::AppendChars(param_3,(wchar_t *)local_178.Data.AllocatorInstance.Data,iVar27);
            iVar27 = (param_3->Data).ArrayNum;
            iVar18 = iVar27 + -1;
            if (iVar27 == 0) {
              iVar18 = iVar41;
            }
            if (iVar18 < 0x2000) {
              iVar27 = 1;
              pwVar24 = L"\n";
            }
            else {
              iVar27 = 4;
              pwVar24 = L"...\n";
            }
            ::FString::AppendChars(param_3,pwVar24,iVar27);
          }
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
LAB_1493989a6:
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          local_2d8 = false;
LAB_149398ad1:
          if ((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)local_2a0.AllocatorInstance.Data !=
              (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)0x0) {
            FMemory::Free(local_2a0.AllocatorInstance.Data);
            return local_2d8;
          }
          return local_2d8;
        }
        if ((pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
          pFVar15 = GetTypeName<UClass>(&local_88);
          if ((pFVar15->Data).ArrayNum != 0) {
            pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar24);
        }
        pUVar14 = Z_Construct_UClass_UClass_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)pFVar13,pUVar14);
        if ((!bVar6) ||
           (pUVar3 = (pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr, pUVar3 == (UObject *)0x0)) {
          pFVar15 = GetTypeName<UClass>(&local_a8);
          if ((pFVar15->Data).ArrayNum == 0) {
            pwVar35 = L"";
          }
          else {
            pwVar35 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
          }
          pFVar15 = GetFullNameForCastLogError<UObject>
                              (&local_98,(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr);
          if ((pFVar15->Data).ArrayNum != 0) {
            pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar24,pwVar35);
        }
        pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)
                             &(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                                 *)FVar31.Data)->Elements).field_0x8);
        pUVar14 = pUVar44;
        if (pFVar13->UnderlyingType == 1) {
          if ((pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
            pFVar15 = GetTypeName<UClass>(&local_b8);
            if ((pFVar15->Data).ArrayNum != 0) {
              pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar24);
          }
          pUVar14 = Z_Construct_UClass_UClass_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)pFVar13,pUVar14);
          if ((!bVar6) ||
             (pUVar14 = (UClass *)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr,
             pUVar14 == (UClass *)0x0)) {
            pFVar15 = GetTypeName<UClass>(&local_c8);
            if ((pFVar15->Data).ArrayNum == 0) {
              pwVar35 = L"";
            }
            else {
              pwVar35 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            }
            pFVar15 = GetFullNameForCastLogError<UObject>
                                (local_78,(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr);
            if ((pFVar15->Data).ArrayNum != 0) {
              pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar24,pwVar35);
          }
        }
        if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar14);
        }
        this_00 = (UObjectBaseUtility *)(pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
        if (this_00 == (UObjectBaseUtility *)0x0) {
LAB_1493989b7:
          local_1d8.Name.Number = *(uint *)&pUVar3->field_0x18;
          local_1d8.TypeDefHandle.RegisteredTypeIndex = *(int *)&pUVar3->field_0x1c;
          ::FName::ToString((FName *)&local_1d8.Name.Number,&local_228);
          goto LAB_1493989de;
        }
        pUVar14 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
        plVar16 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar14);
        if (plVar16 == (longlong *)0x0) goto LAB_1493989b7;
        uVar10 = ::GetTypeHash((FNiagaraVariableBase *)FVar31.Data);
        iVar27 = TSet<TTuple<FNiagaraVariableBase,float>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FNiagaraVariableBase>
                           ((TSet<TTuple<FNiagaraVariableBase,float>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>,FDefaultSetAllocator>
                             *)&this->VariableToFloatTolerances_SystemScript,uVar10,
                            (FNiagaraVariableBase *)FVar31.Data);
        pUVar14 = pUVar44;
        if (iVar27 == -1) {
LAB_1493986d1:
          bVar6 = pUVar14 == (UClass *)0x0;
        }
        else {
          lVar21 = *(longlong *)&this->VariableToFloatTolerances_SystemScript +
                   (longlong)iVar27 * 0x18;
          pUVar14 = (UClass *)(lVar21 + 0xc);
          if (lVar21 == 0) {
            pUVar14 = pUVar44;
          }
          bVar6 = pUVar14 == (UClass *)0x0;
          if (!bVar6) {
            local_res10 = (undefined4)pUVar14->_padding_;
            goto LAB_1493986d1;
          }
        }
        local_2d4 = !bVar6;
        pTVar17 = TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  ::Find(this_01,(FNiagaraVariableBase *)FVar31.Data);
        pUVar23 = (UClass *)&pTVar17->field_0x10;
        if (pTVar17 == (TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *)0x0) {
          pUVar23 = pUVar44;
        }
        pUVar34 = pUVar44;
        if (pUVar23 != (UClass *)0x0) {
          pUVar34 = (UClass *)pUVar23->_padding_;
        }
        local_2a8 = pUVar34;
        pTVar17 = TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                          *)&param_2->DataInterfaceStorage,(FNiagaraVariableBase *)FVar31.Data);
        pUVar23 = (UClass *)&pTVar17->field_0x10;
        if (pTVar17 == (TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *)0x0) {
          pUVar23 = pUVar44;
        }
        pUVar30 = pUVar44;
        if (pUVar23 != (UClass *)0x0) {
          pUVar30 = (UClass *)pUVar23->_padding_;
        }
        if ((pUVar34 == (UClass *)0x0) || (pUVar30 == (UClass *)0x0)) {
          ::FName::ToString((FName *)FVar31.Data,&local_f8);
          ::FString::PrintfImpl
                    (&local_188,L"DataInterface(%s) storage was not found in Rhs(%p) Lhs(%p) cache."
                    );
          iVar27 = (param_3->Data).ArrayNum;
          iVar18 = iVar27 + -1;
          if (iVar27 == 0) {
            iVar18 = iVar41;
          }
          if (iVar18 < 0x2000) {
            iVar27 = local_188.Data.ArrayNum + -1;
            if (local_188.Data.ArrayNum == 0) {
              iVar27 = iVar41;
            }
            ::FString::AppendChars(param_3,(wchar_t *)local_188.Data.AllocatorInstance.Data,iVar27);
            iVar27 = (param_3->Data).ArrayNum;
            iVar18 = iVar27 + -1;
            if (iVar27 == 0) {
              iVar18 = iVar41;
            }
            if (iVar18 < 0x2000) {
              iVar27 = 1;
              pwVar24 = L"\n";
            }
            else {
              iVar27 = 4;
              pwVar24 = L"...\n";
            }
            ::FString::AppendChars(param_3,pwVar24,iVar27);
          }
          local_228.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
            local_228.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
          }
          goto LAB_1493989a6;
        }
        pUVar23 = pUVar44;
        if (0 < (param_1->CacheFrames).ArrayNum) {
          do {
            local_23c = local_2d4;
            local_258 = (void *)0x0;
            local_250 = 0;
            if (pUVar14 != (UClass *)0x0) {
              local_240 = local_res10;
            }
            cVar9 = (**(code **)(*plVar16 + 0x40))
                              (plVar16,pUVar34,pUVar30,pUVar23,&local_240,&local_258);
            if (cVar9 == '\0') {
              ::FName::ToString((FName *)FVar31.Data,&local_108);
              ::FString::PrintfImpl(&local_198,L"DataInterface(%s) frame (%d) is not equal - %s.");
              iVar27 = (param_3->Data).ArrayNum;
              iVar18 = iVar27 + -1;
              if (iVar27 == 0) {
                iVar18 = iVar41;
              }
              if (iVar18 < 0x2000) {
                iVar27 = local_198.Data.ArrayNum + -1;
                if (local_198.Data.ArrayNum == 0) {
                  iVar27 = iVar41;
                }
                ::FString::AppendChars
                          (param_3,(wchar_t *)local_198.Data.AllocatorInstance.Data,iVar27);
                iVar27 = (param_3->Data).ArrayNum;
                iVar18 = iVar27 + -1;
                if (iVar27 == 0) {
                  iVar18 = iVar41;
                }
                if (iVar18 < 0x2000) {
                  iVar27 = 1;
                  pwVar24 = L"\n";
                }
                else {
                  iVar27 = 4;
                  pwVar24 = L"...\n";
                }
                ::FString::AppendChars(param_3,pwVar24,iVar27);
              }
              if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.Data.AllocatorInstance.Data);
              }
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              local_2d8 = false;
              pUVar34 = local_2a8;
            }
            if (local_258 != (void *)0x0) {
              FMemory::Free(local_258);
            }
            uVar10 = (int)pUVar23 + 1;
            pUVar23 = (UClass *)(ulonglong)uVar10;
          } while ((int)uVar10 < (param_1->CacheFrames).ArrayNum);
        }
        pTVar32 = local_2d0;
        this_01 = local_260;
        if (local_2d8 == false) goto LAB_149398ad1;
LAB_1493988cb:
        uVar25 = local_2a0._8_8_ & 0xffffffff;
        FVar31.Data = (FScriptContainerElement *)
                      &(((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                          *)FVar31.Data)->Elements).field_0xc;
        uVar20 = local_2b8 & 0xffffffff;
      } while( true );
    }
    ::FString::PrintfImpl(&local_280,L"Cache Emitter count is different. Expected: %d, Actual: %d");
    if (param_3 != &local_280) {
      pFVar40 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar40 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar40);
      }
      (param_3->Data).AllocatorInstance.Data = local_280.Data.AllocatorInstance.Data;
      (param_3->Data).ArrayNum = local_280.Data.ArrayNum;
      (param_3->Data).ArrayMax = local_280.Data.ArrayMax;
      local_280.Data.ArrayNum = 0;
      local_280.Data.ArrayMax = 0;
      local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
      return false;
    }
  }
  else {
    ::FString::PrintfImpl(&local_290,L"Cache Frame count is different. Expected: %d, Actual: %d");
    if (param_3 != &local_290) {
      pFVar40 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar40 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar40);
      }
      (param_3->Data).AllocatorInstance.Data = local_290.Data.AllocatorInstance.Data;
      (param_3->Data).ArrayNum = local_290.Data.ArrayNum;
      (param_3->Data).ArrayMax = local_290.Data.ArrayMax;
      local_290.Data.ArrayNum = 0;
      local_290.Data.ArrayMax = 0;
      local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
      return false;
    }
  }
  return false;
}

// CompareEmitter @ 149398bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraSimCacheCompare::CompareEmitter
          (FNiagaraSimCacheCompare *this,UNiagaraSimCache *param_1,UNiagaraSimCache *param_2,
          int param_3,int param_4,FString *param_5)

{
  FNiagaraVariableBase *pFVar1;
  code *pcVar2;
  float fVar3;
  UNiagaraSimCache *this_00;
  TSet<TTuple<FNiagaraVariableBase,float>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>,FDefaultSetAllocator>
  *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FString *pFVar12;
  FName FVar13;
  TArrayView<FString_const_,int> *pTVar14;
  FNiagaraTypeDefinition *pFVar15;
  int iVar16;
  ulonglong uVar17;
  wchar_t *pwVar18;
  uint uVar19;
  longlong lVar20;
  uchar *puVar21;
  UNiagaraSimCache *this_01;
  ForAnyElementType FVar22;
  ulonglong uVar23;
  byte bVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStackY_b28 [32];
  undefined1 local_ae4 [4];
  FName local_ae0;
  TArray<int,TSizedDefaultAllocator<32>_> local_ad8;
  FScriptContainerElement *local_ac8;
  int local_ac0;
  int local_abc;
  UNiagaraSimCache *local_ab8;
  TArray<FNiagaraSimCacheVariable,TSizedDefaultAllocator<32>_> local_ab0;
  TArray<int,TSizedDefaultAllocator<32>_> local_aa0;
  TArray<FNiagaraSimCacheVariable,TSizedDefaultAllocator<32>_> local_a90;
  TArray<int,TSizedDefaultAllocator<32>_> local_a80;
  UNiagaraSimCache *local_a70;
  FString *local_a68;
  TArray<float,TSizedDefaultAllocator<32>_> local_a60;
  TArray<float,TSizedDefaultAllocator<32>_> local_a50;
  undefined8 local_a40;
  FName local_a38;
  FNiagaraSimCacheCompare *local_a30;
  FName local_a28;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> local_a20;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> local_a10;
  TArray<int,TSizedDefaultAllocator<32>_> local_a00;
  TArray<int,TSizedDefaultAllocator<32>_> local_9f0;
  TSet<TTuple<FNiagaraVariableBase,float>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>,FDefaultSetAllocator>
  *local_9e0;
  FString *local_9d8;
  FScriptContainerElement **local_9d0;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  undefined1 local_978 [8];
  FString local_970;
  FString local_960;
  FString *local_948;
  undefined8 uStack_940;
  FString *local_938;
  undefined8 uStack_930;
  FString local_928;
  code *local_918 [5];
  undefined8 *local_8f0;
  code *local_8e8 [5];
  undefined8 *local_8c0;
  TArrayView<FString_const_,int> local_8b8;
  TArrayView<FString_const_,int> local_8a8;
  TStringBuilderWithBuffer<wchar_t,1024> local_898;
  ulonglong local_78 [7];
  
  local_78[0] = __security_cookie.value ^ (ulonglong)auStackY_b28;
  local_a68 = param_5;
  local_ae0 = (FName)((ulonglong)local_ae0 & 0xffffffff00000000);
  bVar25 = param_3 != -1;
  local_ab8 = param_1;
  local_a70 = param_2;
  local_a30 = this;
  if (bVar25) {
    FVar13 = UNiagaraSimCache::GetEmitterName(param_1,(int)local_978);
    local_ae0 = *(FName *)FVar13;
    pFVar12 = ::FName::ToString(&local_ae0,&local_970);
  }
  else {
    local_a40 = 0;
    local_ae0.ComparisonIndex.Value = 0;
    local_ae0.Number = 0;
    pFVar12 = ::FString::FString(&local_960,L"SystemInstance");
  }
  local_ac8 = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ac0 = (pFVar12->Data).ArrayNum;
  local_abc = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  if ((bVar25) && (local_970.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_970.Data.AllocatorInstance.Data);
  }
  if ((!bVar25) && (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_960.Data.AllocatorInstance.Data);
  }
  lVar20 = 0x10;
  if (param_3 != -1) {
    lVar20 = 0x60;
  }
  puVar21 = (this->AttributesToExclude_SystemScript).Hash.InlineData + lVar20 + -0x48;
  lVar20 = 0xc0;
  if (param_3 != -1) {
    lVar20 = 0x110;
  }
  local_9e0 = (TSet<TTuple<FNiagaraVariableBase,float>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>,FDefaultSetAllocator>
               *)((this->AttributesToExclude_SystemScript).Hash.InlineData + lVar20 + -0x48);
  iVar9 = UNiagaraSimCache::GetEmitterNumInstances(param_1,param_3,param_4);
  lVar20 = (longlong)iVar9;
  iVar10 = UNiagaraSimCache::GetEmitterNumInstances(local_a70,param_3,param_4);
  if (iVar9 != iVar10) {
    ::FString::PrintfImpl
              (&local_9b8,L"%s instance count different frame %d.  Expected: %d, Actual %d");
    NiagaraSimCacheCompareInternal::AddError(param_5,&local_9b8);
    if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
    }
    bVar25 = false;
    goto LAB_1493996ae;
  }
  if (iVar9 == 0) {
    bVar25 = true;
    goto LAB_1493996ae;
  }
  pTVar14 = TArrayView<FString_const_,int>::
            TArrayView<FString_const_,int><TArray<FString,TSizedDefaultAllocator<32>_>_&,TArray<FString,TSizedDefaultAllocator<32>_>_>
                      (&local_8b8,&this->AttributesToExclude_ByWildcard);
  local_948 = pTVar14->DataPtr;
  uStack_940 = *(undefined8 *)&pTVar14->ArrayNum;
  local_ab0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ab0.ArrayNum = 0;
  local_ab0.ArrayMax = 0;
  local_918[0] = (code *)0x0;
  local_8f0 = FMemory::Malloc(0x20,8);
  *local_8f0 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  local_8f0[1] = &local_ab0;
  local_8f0[2] = puVar21;
  local_8f0[3] = &local_948;
  if (local_8f0 + 1 != (longlong *)0x0) {
    local_918[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
                   ::Call;
  }
  UNiagaraSimCache::ForEachEmitterAttribute
            (param_1,param_3,(TFunction<bool___cdecl(FNiagaraSimCacheVariable_const_&)> *)local_918)
  ;
  bVar24 = 1;
  pTVar14 = TArrayView<FString_const_,int>::
            TArrayView<FString_const_,int><TArray<FString,TSizedDefaultAllocator<32>_>_&,TArray<FString,TSizedDefaultAllocator<32>_>_>
                      (&local_8a8,&this->AttributesToExclude_ByWildcard);
  local_938 = pTVar14->DataPtr;
  uStack_930 = *(undefined8 *)&pTVar14->ArrayNum;
  local_a90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a90.ArrayNum = 0;
  local_a90.ArrayMax = 0;
  local_8e8[0] = (code *)0x0;
  local_8c0 = FMemory::Malloc(0x20,8);
  this_00 = local_a70;
  *local_8c0 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  local_8c0[1] = &local_a90;
  local_8c0[2] = puVar21;
  local_8c0[3] = &local_938;
  if (local_8c0 + 1 != (longlong *)0x0) {
    local_8e8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
                   ::Call;
  }
  UNiagaraSimCache::ForEachEmitterAttribute
            (local_a70,param_3,
             (TFunction<bool___cdecl(FNiagaraSimCacheVariable_const_&)> *)local_8e8);
  if (local_ab0.ArrayNum != local_a90.ArrayNum) {
    ::FString::PrintfImpl
              (&local_9a8,L"%s attribute count different frame %d.  Expected: %d, Actual %d");
    NiagaraSimCacheCompareInternal::AddError(param_5,&local_9a8);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
    bVar24 = 0;
  }
  local_9d0 = &local_ac8;
  local_9d8 = param_5;
  bVar25 = `FNiagaraSimCacheCompare::CompareEmitter'::__l9::<lambda_1>::operator()
                     (&local_9d8,&local_ab0,&local_a90);
  bVar5 = `FNiagaraSimCacheCompare::CompareEmitter'::__l9::<lambda_1>::operator()
                    (&local_9d8,&local_a90,&local_ab0);
  if ((bVar25 & bVar24 & bVar5) != 0) {
    if (local_a90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a90.AllocatorInstance.Data);
    }
    uVar17 = 0;
    local_ad8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ad8.ArrayNum = 0;
    local_ad8.ArrayMax = 0;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar9,&local_ad8.AllocatorInstance,&local_ad8.ArrayNum,
                        &local_ad8.ArrayMax);
    memset(local_ad8.AllocatorInstance.Data + (longlong)iVar10 * 4,0,lVar20 * 4);
    ::FName::FName(&local_a38,"UniqueID");
    this_01 = local_ab8;
    local_a80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a80.ArrayNum = 0;
    local_a80.ArrayMax = 0;
    local_aa0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_aa0.ArrayNum = 0;
    local_aa0.ArrayMax = 0;
    UNiagaraSimCache::ReadIntAttribute(local_ab8,&local_a80,local_a38,local_ae0,param_4);
    UNiagaraSimCache::ReadIntAttribute(this_00,&local_aa0,local_a38,local_ae0,param_4);
    if ((local_a80.ArrayNum < 1) && (local_aa0.ArrayNum < 1)) {
      this_01 = local_ab8;
      uVar23 = uVar17;
      if (0 < iVar9) {
        do {
          uVar19 = (uint)uVar17;
          uVar11 = 0;
          if ((int)uVar19 < local_ad8.ArrayNum) {
            uVar11 = ~uVar19 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          *(uint *)(local_ad8.AllocatorInstance.Data + uVar23 * 4) = uVar19;
          uVar17 = (ulonglong)(uVar19 + 1);
          uVar23 = uVar23 + 1;
          this_01 = local_ab8;
        } while ((longlong)uVar23 < lVar20);
      }
    }
    else {
      if ((local_a80.ArrayNum != local_aa0.ArrayNum) || (local_a80.ArrayNum != iVar9)) {
        ::FString::PrintfImpl(&local_988,L"%s has invalid particle IDs - frame %d.");
        NiagaraSimCacheCompareInternal::AddError(local_a68,&local_988);
        if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_988.Data.AllocatorInstance.Data);
        }
        goto LAB_149399671;
      }
      bVar25 = true;
      uVar23 = uVar17;
      if (0 < iVar9) {
        do {
          uVar19 = (uint)uVar17;
          uVar11 = 0;
          if ((int)uVar19 < local_a80.ArrayNum) {
            uVar11 = ~uVar19 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          for (FVar22.Data = local_aa0.AllocatorInstance.Data;
              FVar22.Data != local_aa0.AllocatorInstance.Data + (longlong)local_aa0.ArrayNum * 4;
              FVar22.Data = FVar22.Data + 4) {
            if (*(int *)FVar22.Data == *(int *)(local_a80.AllocatorInstance.Data + uVar23 * 4)) {
              iVar9 = (int)((longlong)FVar22.Data - (longlong)local_aa0.AllocatorInstance.Data >> 2)
              ;
              if (iVar9 != -1) goto LAB_149399377;
              goto LAB_1493992ba;
            }
          }
          iVar9 = -1;
LAB_1493992ba:
          ::FString::PrintfImpl
                    (&local_9c8,L"%s has inconsistent particle IDs - frame %d.  ID %d not found.");
          pFVar12 = local_a68;
          iVar10 = (local_a68->Data).ArrayNum;
          iVar16 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar16 = 0;
          }
          if (iVar16 < 0x2000) {
            iVar10 = local_9c8.Data.ArrayNum + -1;
            if (local_9c8.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            ::FString::AppendChars
                      (local_a68,(wchar_t *)local_9c8.Data.AllocatorInstance.Data,iVar10);
            iVar16 = (pFVar12->Data).ArrayNum;
            iVar10 = iVar16 + -1;
            if (iVar16 == 0) {
              iVar10 = 0;
            }
            if (iVar10 < 0x2000) {
              iVar10 = 1;
              pwVar18 = L"\n";
            }
            else {
              iVar10 = 4;
              pwVar18 = L"...\n";
            }
            ::FString::AppendChars(pFVar12,pwVar18,iVar10);
          }
          if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
          }
          bVar25 = false;
LAB_149399377:
          uVar11 = 0;
          if ((int)uVar19 < local_ad8.ArrayNum) {
            uVar11 = ~uVar19 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          uVar17 = (ulonglong)(uVar19 + 1);
          *(int *)(local_ad8.AllocatorInstance.Data + uVar23 * 4) = iVar9;
          uVar23 = uVar23 + 1;
          if (lVar20 <= (longlong)uVar23) goto LAB_1493993d8;
        } while( true );
      }
    }
    goto LAB_1493990a6;
  }
  if (local_a90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a90.AllocatorInstance.Data);
  }
  bVar25 = false;
LAB_14939969f:
  if ((FNiagaraVariableBase *)local_ab0.AllocatorInstance.Data != (FNiagaraVariableBase *)0x0) {
    FMemory::Free(local_ab0.AllocatorInstance.Data);
  }
LAB_1493996ae:
  if (local_ac8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8);
  }
  return bVar25;
LAB_1493993d8:
  this_01 = local_ab8;
  if (bVar25) {
LAB_1493990a6:
    if (local_aa0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa0.AllocatorInstance.Data);
    }
    if (local_a80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a80.AllocatorInstance.Data);
    }
    fVar3 = __real_38d1b717;
    iVar9 = local_ab0.ArrayNum;
    uVar17 = (ulonglong)local_ab0.ArrayNum;
    bVar25 = true;
    pFVar1 = (FNiagaraVariableBase *)(local_ab0.AllocatorInstance.Data + uVar17 * 0x18);
    FVar22.Data = local_ab0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar17 != iVar9) {
        `TCheckedPointerIterator<FNiagaraSimCacheVariable_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_ae4);
      }
      if ((FNiagaraVariableBase *)FVar22.Data == pFVar1) break;
      local_a28 = ((FNiagaraVariableBase *)FVar22.Data)->Name;
      local_a50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a50.ArrayNum = 0;
      local_a50.ArrayMax = 0;
      local_a60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a60.ArrayNum = 0;
      local_a60.ArrayMax = 0;
      local_a10.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a10.ArrayNum = 0;
      local_a10.ArrayMax = 0;
      local_a20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a20.ArrayNum = 0;
      local_a20.ArrayMax = 0;
      local_9f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9f0.ArrayNum = 0;
      local_9f0.ArrayMax = 0;
      local_a00.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a00.ArrayNum = 0;
      local_a00.ArrayMax = 0;
      UNiagaraSimCache::ReadAttribute
                (this_01,&local_a50,&local_a10,&local_9f0,local_a28,local_ae0,param_4);
      UNiagaraSimCache::ReadAttribute
                (local_a70,&local_a60,&local_a20,&local_a00,local_a28,local_ae0,param_4);
      local_898._padding_ = (longlong)local_898.StringBuffer;
      local_898._padding_._0_2_ = 0;
      local_898._padding_ = (longlong)local_898.StringBuffer;
      local_898._padding_ = (longlong)local_78;
      pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                          (&((FNiagaraVariableBase *)FVar22.Data)->TypeDefHandle);
      if ((((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
            FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) &&
          (pFVar15->UnderlyingType == FNiagaraTypeDefinition::QuatDef.UnderlyingType)) &&
         (pFVar15->Flags == FNiagaraTypeDefinition::QuatDef.Flags)) {
        fVar26 = fVar3;
        if ((local_a30->DefaultQuaternionTolerance).bIsSet != false) {
          fVar26 = (local_a30->DefaultQuaternionTolerance).TypedValue;
        }
        bVar5 = NiagaraSimCacheCompareInternal::
                CompareQuatAttributeData<TStringBuilderWithBuffer<wchar_t,1024>_>
                          (&local_ad8,&local_a50,&local_a60,&local_898,fVar26);
        bVar5 = !bVar5;
      }
      else {
        fVar26 = local_a30->DefaultFloatTolerance;
        uVar11 = ::GetTypeHash((FNiagaraVariableBase *)FVar22.Data);
        pTVar4 = local_9e0;
        iVar10 = TSet<TTuple<FNiagaraVariableBase,float>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FNiagaraVariableBase>
                           (local_9e0,uVar11,(FNiagaraVariableBase *)FVar22.Data);
        if ((iVar10 != -1) &&
           (lVar20 = *(longlong *)&pTVar4->Elements + (longlong)iVar10 * 0x18, lVar20 != 0)) {
          fVar26 = *(float *)(lVar20 + 0xc);
        }
        bVar5 = NiagaraSimCacheCompareInternal::
                CompareAttributeData<float,TStringBuilderWithBuffer<wchar_t,1024>_>
                          (&local_ad8,&local_a50,&local_a60,
                           (uint)*(ushort *)
                                  ((longlong)
                                   &(((FNiagaraVariableBase *)((longlong)FVar22.Data + 0xc))->Name).
                                    ComparisonIndex.Value + 2),&local_898,fVar26);
        bVar7 = NiagaraSimCacheCompareInternal::
                CompareAttributeData<FFloat16,TStringBuilderWithBuffer<wchar_t,1024>_>
                          (&local_ad8,&local_a10,&local_a20,
                           (uint)*(ushort *)
                                  ((longlong)
                                   &(((FNiagaraVariableBase *)((longlong)FVar22.Data + 0xc))->Name).
                                    Number + 2),&local_898,fVar26);
        bVar8 = NiagaraSimCacheCompareInternal::
                CompareAttributeData<int,TStringBuilderWithBuffer<wchar_t,1024>_>
                          (&local_ad8,&local_9f0,&local_a00,
                           (uint)*(ushort *)
                                  ((longlong)
                                   &(((FNiagaraVariableBase *)((longlong)FVar22.Data + 0xc))->
                                    TypeDefHandle).RegisteredTypeIndex + 2),&local_898,fVar26);
        bVar5 = (!bVar8 || !bVar7) || !bVar5;
      }
      if (bVar5) {
        if ((ulonglong)local_898._padding_ < (wchar_t *)(local_898._padding_ + 2)) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_898,1);
        }
        *(wchar_t *)local_898._padding_ = L'\0';
        ::FName::ToString(&local_a28,&local_928);
        ::FString::PrintfImpl(&local_998,L"%s different particle data - frame %d attribute %s - %s")
        ;
        NiagaraSimCacheCompareInternal::AddError(local_a68,&local_998);
        if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_998.Data.AllocatorInstance.Data);
        }
        if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_928.Data.AllocatorInstance.Data);
        }
        bVar25 = false;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)&local_898);
      if (local_a00.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a00.AllocatorInstance.Data);
      }
      if (local_9f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9f0.AllocatorInstance.Data);
      }
      if (local_a20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a20.AllocatorInstance.Data);
      }
      if (local_a10.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a10.AllocatorInstance.Data);
      }
      if (local_a60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a60.AllocatorInstance.Data);
      }
      if (local_a50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a50.AllocatorInstance.Data);
      }
      uVar17 = local_ab0._8_8_ & 0xffffffff;
      FVar22.Data = FVar22.Data + 0x18;
      this_01 = local_ab8;
    }
  }
  else {
LAB_149399671:
    if (local_aa0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa0.AllocatorInstance.Data);
    }
    if (local_a80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a80.AllocatorInstance.Data);
    }
    bVar25 = false;
  }
  if (local_ad8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.AllocatorInstance.Data);
  }
  goto LAB_14939969f;
}

// SetToleranceByName @ 1493b6d50

void __thiscall
FNiagaraSimCacheCompare::SetToleranceByName
          (FNiagaraSimCacheCompare *this,UNiagaraSimCache *param_1,FString *param_2,float param_3)

{
  int iVar1;
  undefined4 uStack_6c;
  code *local_58 [5];
  undefined8 *local_30;
  
  NiagaraSimCacheCompareInternal::InternalSetToleranceByName
            (param_1,param_2,param_3,-1,&this->VariableToFloatTolerances_SystemScript);
  iVar1 = 0;
  if (0 < (param_1->CacheLayout).EmitterLayouts.ArrayNum) {
    do {
      local_58[0] = (code *)0x0;
      local_30 = (undefined8 *)0x0;
      local_30 = FMemory::Malloc(0x20,8);
      *local_30 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_30[1] = param_2;
      *(float *)(local_30 + 2) = param_3;
      *(undefined4 *)((longlong)local_30 + 0x14) = uStack_6c;
      local_30[3] = &this->VariableToFloatTolerances_ParticleScript;
      if (local_30 + 1 != (undefined8 *)0x0) {
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::__l2::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
                      ::Call;
      }
      UNiagaraSimCache::ForEachEmitterAttribute
                (param_1,iVar1,(TFunction<bool___cdecl(FNiagaraSimCacheVariable_const_&)> *)local_58
                );
      iVar1 = iVar1 + 1;
    } while (iVar1 < (param_1->CacheLayout).EmitterLayouts.ArrayNum);
  }
  return;
}

// SetToleranceByType @ 1493b6e80

void __thiscall
FNiagaraSimCacheCompare::SetToleranceByType
          (FNiagaraSimCacheCompare *this,UNiagaraSimCache *param_1,FNiagaraTypeDefinition *param_2,
          float param_3)

{
  int iVar1;
  undefined4 uStack_6c;
  code *local_58 [5];
  undefined8 *local_30;
  
  NiagaraSimCacheCompareInternal::InternalSetToleranceByType
            (param_1,param_2,param_3,-1,&this->VariableToFloatTolerances_SystemScript);
  iVar1 = 0;
  if (0 < (param_1->CacheLayout).EmitterLayouts.ArrayNum) {
    do {
      local_58[0] = (code *)0x0;
      local_30 = (undefined8 *)0x0;
      local_30 = FMemory::Malloc(0x20,8);
      *local_30 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_30[1] = param_2;
      *(float *)(local_30 + 2) = param_3;
      *(undefined4 *)((longlong)local_30 + 0x14) = uStack_6c;
      local_30[3] = &this->VariableToFloatTolerances_ParticleScript;
      if (local_30 + 1 != (undefined8 *)0x0) {
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::__l2::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
                      ::Call;
      }
      UNiagaraSimCache::ForEachEmitterAttribute
                (param_1,iVar1,(TFunction<bool___cdecl(FNiagaraSimCacheVariable_const_&)> *)local_58
                );
      iVar1 = iVar1 + 1;
    } while (iVar1 < (param_1->CacheLayout).EmitterLayouts.ArrayNum);
  }
  return;
}

