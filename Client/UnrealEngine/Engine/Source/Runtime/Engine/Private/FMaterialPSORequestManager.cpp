// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// operator() @ 1483ec990

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FMaterialPSORequestManager::PrecachePSOs'::__l38::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  FMaterialPSORequestManager *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  FPrecacheData *pFVar7;
  
  this_00 = *(FMaterialPSORequestManager **)this;
  uVar1 = *(uint *)((longlong)this + 0x30);
  AcquireSRWLockExclusive((PSRWLOCK)this_00);
  uVar4 = ::GetTypeHash((FMaterialPSOPrecacheParams *)((longlong)this + 8));
  iVar5 = TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMaterialPSOPrecacheParams>
                    ((TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
                      *)&this_00->MaterialPSORequestData,uVar4,
                     (FMaterialPSOPrecacheParams *)((longlong)this + 8));
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0xa8 + *(longlong *)&this_00->MaterialPSORequestData;
    pFVar7 = (FPrecacheData *)(lVar6 + 0x28);
    if (lVar6 == 0) {
      pFVar7 = (FPrecacheData *)0x0;
    }
    if ((pFVar7 != (FPrecacheData *)0x0) && (uVar1 == this_00->LifecycleID)) {
      bVar3 = FMaterialPSORequestManager::CheckCompilingPSOs(this_00,pFVar7,false);
      if (bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!CheckCompilingPSOs(*FindResult, false )",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                           ,0x23e,
                           L"CheckCompilingPSOs should not be active: EState=%d, ActivePSOPrecacheRequests.Num()=%d"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001483eca51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this_00);
  return;
}

// BoostPriority @ 1483f04c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialPSORequestManager::BoostPriority
          (FMaterialPSORequestManager *this,EPSOPrecachePriority param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  FPrecacheData *pFVar8;
  FWriteBuffer *pFVar9;
  FMaterialPSOPrecacheParams *pFVar10;
  bool bVar11;
  undefined1 auStackY_a8 [32];
  FLLMScope local_74;
  FLLMScope local_70;
  FLLMScope local_6c;
  longlong local_68;
  FMemScope local_60;
  TLogScope<0> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FLLMScope::FLLMScope(&local_6c,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_60,PSO,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_70,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_74,AssetClasses,Default);
  bVar11 = -1 < MetadataChannel->Enabled;
  if (bVar11) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_58);
    *(undefined8 *)(local_58._8_8_ + 0x28) = *(undefined8 *)(local_58._8_8_ + 0x20);
  }
  if (param_2 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialPSORequestID != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                       ,0x1a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  uVar4 = (this->MaterialPSORequests).ArrayNum;
  if (param_2 < uVar4) {
    uVar3 = 0;
    if ((int)param_2 < (int)uVar4) {
      uVar3 = ~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_68 = (longlong)(int)param_2 * 0x28;
    pFVar10 = (FMaterialPSOPrecacheParams *)
              ((this->MaterialPSORequests).AllocatorInstance.Data + local_68);
    uVar4 = ::GetTypeHash(pFVar10);
    iVar5 = TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FMaterialPSOPrecacheParams>
                      ((TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
                        *)&this->MaterialPSORequestData,uVar4,pFVar10);
    if (iVar5 != -1) {
      lVar6 = (longlong)iVar5 * 0xa8 + *(longlong *)&this->MaterialPSORequestData;
      lVar7 = lVar6 + 0x28;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      if (((lVar7 != 0) && (*(EPSOPrecachePriority *)(lVar7 + 0x60) < param_1)) &&
         (*(char *)(lVar7 + 4) != '\x03')) {
        ReleaseSRWLockShared((PSRWLOCK)this);
        AcquireSRWLockExclusive((PSRWLOCK)this);
        uVar4 = 0;
        if ((int)param_2 < (this->MaterialPSORequests).ArrayNum) {
          uVar4 = ~param_2 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar8 = TMapBase<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>_>
                 ::Find((TMapBase<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>_>
                         *)&this->MaterialPSORequestData,
                        (FMaterialPSOPrecacheParams *)
                        ((this->MaterialPSORequests).AllocatorInstance.Data + local_68));
        if (pFVar8 == (FPrecacheData *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("FindResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                             ,0x1b8,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar8->Priority = param_1;
        CheckCompilingPSOs(this,pFVar8,true);
        ReleaseSRWLockExclusive((PSRWLOCK)this);
        goto LAB_1483f0732;
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)this);
LAB_1483f0732:
  if (bVar11) {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar7 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar9 = *(FWriteBuffer **)(lVar7 + 0x20);
    if ((int)pFVar9 - *(int *)&pFVar9->Cursor < 1) {
      pFVar9 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar9->Cursor = '\n';
    pFVar9->Cursor = pFVar9->Cursor + 1;
    pFVar9->Committed = pFVar9->Cursor;
  }
  FLLMScope::~FLLMScope(&local_74);
  FLLMScope::~FLLMScope(&local_70);
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(&local_6c);
  return;
}

// CheckCompilingPSOs @ 1483f3540

bool __thiscall
FMaterialPSORequestManager::CheckCompilingPSOs
          (FMaterialPSORequestManager *this,FPrecacheData *param_1,bool param_2)

{
  undefined1 *puVar1;
  ForElementType<FPSOPrecacheRequestResult> FVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<FPSOPrecacheRequestResult> FVar9;
  uint uVar10;
  FPSOPrecacheRequestID *pFVar11;
  
  if ((param_1->State == Unknown) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrecacheData.State != EState::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                         ,0x217,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (param_1->State == Compiling) {
    iVar8 = (param_1->ActivePSOPrecacheRequests).ArrayNum;
    uVar10 = 0;
    if (0 < iVar8) {
      do {
        uVar7 = 0;
        if ((int)uVar10 < (param_1->ActivePSOPrecacheRequests).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FVar2 = (param_1->ActivePSOPrecacheRequests).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<FPSOPrecacheRequestResult>)&param_1->ActivePSOPrecacheRequests;
        if (FVar2 != (ForElementType<FPSOPrecacheRequestResult>)0x0) {
          FVar9 = FVar2;
        }
        pFVar11 = (FPSOPrecacheRequestID *)((longlong)(int)uVar10 * 0x10 + (longlong)FVar9);
        bVar5 = PipelineStateCache::IsPrecaching(pFVar11);
        if (bVar5) {
          if (param_2) {
            PipelineStateCache::BoostPrecachePriority(param_1->Priority,pFVar11);
          }
        }
        else {
          uVar7 = 0;
          if ((int)uVar10 < (param_1->ActivePSOPrecacheRequests).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          TArray<FPSOPrecacheRequestResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          ::RemoveAtSwapImpl(&param_1->ActivePSOPrecacheRequests,uVar10);
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheRequestResult>_>
                    (0x10,8,&(param_1->ActivePSOPrecacheRequests).AllocatorInstance,
                     (param_1->ActivePSOPrecacheRequests).ArrayNum,
                     &(param_1->ActivePSOPrecacheRequests).ArrayMax);
          uVar10 = uVar10 - 1;
        }
        iVar8 = (param_1->ActivePSOPrecacheRequests).ArrayNum;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar8);
    }
    if (iVar8 == 0) {
      param_1->State = Completed;
      pFVar3 = (param_1->CollectionGraphEvent).Reference;
      if (pFVar3 != (FBaseGraphTask *)0x0) {
        (param_1->CollectionGraphEvent).Reference = (FBaseGraphTask *)0x0;
        LOCK();
        puVar1 = &pFVar3->field_0x30;
        iVar8 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
        }
      }
    }
  }
  return param_1->State != Completed;
}

// ClearMaterialPSORequests @ 1483f44b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMaterialPSORequestManager::ClearMaterialPSORequests(FMaterialPSORequestManager *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int *piVar3;
  code *pcVar4;
  FMaterialPSORequestManager *SRWLock;
  longlong *plVar5;
  bool bVar6;
  FWriteBuffer *pFVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [2];
  undefined1 local_146 [2];
  FLLMScope local_144;
  FLLMScope local_140;
  FLLMScope local_13c;
  undefined8 local_138;
  FMaterialPSORequestManager *local_130;
  FMemScope local_128;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  TLogScope<0> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_130 = this;
  FLLMScope::FLLMScope(&local_13c,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_128,PSO,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_140,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_144,AssetClasses,Default);
  bVar16 = -1 < MetadataChannel->Enabled;
  if (bVar16) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_48);
    *(undefined8 *)(local_48._8_8_ + 0x28) = *(undefined8 *)(local_48._8_8_ + 0x20);
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                         ,0x1c4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  this->LifecycleID = this->LifecycleID + 1;
  iVar10 = (this->MaterialPSORequests).ArrayNum;
  pFVar11 = (this->MaterialPSORequests).AllocatorInstance.Data;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  pFVar1 = pFVar11 + (longlong)iVar10 * 0x28;
  uVar12 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  while( true ) {
    if ((this->MaterialPSORequests).ArrayNum != iVar10) {
      local_148[0] = 0;
      `TCheckedPointerIterator<FMaterialPSOPrecacheParams,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_148);
    }
    uVar14 = local_70;
    if (pFVar11 == pFVar1) break;
    if (*(longlong *)(pFVar11 + 8) != 0) {
      TSet<FMaterial_*,DefaultKeyFuncs<FMaterial_*,0>,FDefaultSetAllocator>::
      Emplace<FMaterial_*_const_&>
                ((TSet<FMaterial_*,DefaultKeyFuncs<FMaterial_*,0>,FDefaultSetAllocator> *)local_98,
                 (FMaterial **)&local_138,(bool *)(pFVar11 + 8));
    }
    pFVar11 = pFVar11 + 0x28;
  }
  uStack_114 = 1;
  local_100 = 0;
  uStack_104 = local_100;
  if (local_70 != 0) {
    puVar13 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar13 = local_78;
    }
    uVar15 = *puVar13;
    local_100 = 0;
    uVar12 = 0;
    while (uVar15 == 0) {
      lVar9 = (longlong)(int)uVar12;
      local_100 = local_100 + 0x20;
      uVar12 = uVar12 + 1;
      uStack_104 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_1483f46a1;
      uVar15 = puVar13[lVar9 + 1];
    }
    uStack_114 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_114 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_138._4_4_ = (int)lVar9;
    uStack_104 = (local_100 - 1) + local_138._4_4_;
    if ((int)local_70 < (int)uStack_104) {
      uStack_104 = local_70;
    }
  }
LAB_1483f46a1:
  local_120 = (longlong *)local_98;
  uStack_fc = local_a4;
  local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar15 = local_70 & 0xffffffe0;
  iStack_f8 = local_98._8_4_ - local_64;
  uStack_108 = 0xffffffff;
  TStack_e8.CurrentBitIndex = uStack_104;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_114,uVar12);
  iVar10 = (int)local_70 >> 5;
  TStack_e8._28_4_ = local_a4;
  TStack_e8.BaseBitIndex = local_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  bVar8 = (byte)local_70;
  uStack_118 = uVar12;
  local_f0 = local_120;
  TStack_e8.Array = local_110;
  if (((int)local_70 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar14 != local_70) {
    puVar13 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar13 = local_78;
    }
    uVar12 = -1 << (bVar8 & 0x1f) & puVar13[iVar10];
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar14 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_1483f47ad;
      uVar12 = puVar13[lVar9 + 1];
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar14 = (int)lVar9 + -1 + uVar15;
    if ((int)local_70 < (int)uVar14) {
      uVar14 = local_70;
    }
  }
LAB_1483f47ad:
  while( true ) {
    plVar5 = local_f0;
    if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
      `TSparseArray<TSparseSetElement<FMaterial_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_146);
    }
    SRWLock = local_130;
    if (((TStack_e8.CurrentBitIndex == uVar14) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar5 == (longlong *)local_98)) break;
    FMaterial::ClearPrecachedPSORequestIDs
              (*(FMaterial **)(*plVar5 + (longlong)TStack_e8.CurrentBitIndex * 0x10));
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  uVar12 = (local_130->MaterialPSORequests).ArrayNum;
  if (-1 < (int)uVar12) {
    piVar3 = &(this->MaterialPSORequests).ArrayMax;
    (this->MaterialPSORequests).ArrayNum = 0;
    if (*piVar3 != uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar12,&(this->MaterialPSORequests).AllocatorInstance,0,piVar3);
    }
    TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
             *)&SRWLock->MaterialPSORequestData,
            *(int *)&(SRWLock->MaterialPSORequestData).field_0x8 -
            *(int *)&(SRWLock->MaterialPSORequestData).field_0x34);
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FMaterial_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FMaterial_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FMaterial_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (bVar16) {
      lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar9 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar7 = *(FWriteBuffer **)(lVar9 + 0x20);
      if ((int)pFVar7 - *(int *)&pFVar7->Cursor < 1) {
        pFVar7 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar7->Cursor = '\n';
      pFVar7->Cursor = pFVar7->Cursor + 1;
      pFVar7->Committed = pFVar7->Cursor;
    }
    FLLMScope::~FLLMScope(&local_144);
    FLLMScope::~FLLMScope(&local_140);
    FMemScope::~FMemScope(&local_128);
    FLLMScope::~FLLMScope(&local_13c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
}

// GetMaterialPSOPrecacheData @ 148408d20

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> * __thiscall
FMaterialPSORequestManager::GetMaterialPSOPrecacheData
          (FMaterialPSORequestManager *this,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,uint param_1)

{
  FMaterialPSOPrecacheParams *pFVar1;
  FPSOPrecacheData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((param_1 == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaterialPSORequestID != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                         ,0x1ec,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  uVar5 = 0;
  if ((int)param_1 < (this->MaterialPSORequests).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
  pFVar1 = (FMaterialPSOPrecacheParams *)
           ((this->MaterialPSORequests).AllocatorInstance.Data + (longlong)(int)param_1 * 0x28);
  uVar5 = ::GetTypeHash(pFVar1);
  iVar6 = TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMaterialPSOPrecacheParams>
                    ((TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
                      *)&this->MaterialPSORequestData,uVar5,pFVar1);
  lVar9 = 0;
  if (iVar6 != -1) {
    lVar8 = (longlong)iVar6 * 0xa8 + *(longlong *)&this->MaterialPSORequestData;
    lVar9 = lVar8 + 0x28;
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    if (lVar9 != 0) goto LAB_148408e3d;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("FindResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                     ,0x1f1,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
LAB_148408e3d:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = *(int *)(lVar9 + 0x70);
  pFVar2 = *(FPSOPrecacheData **)(lVar9 + 0x68);
  __return_storage_ptr__->ArrayNum = iVar6;
  if (iVar6 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x138,8,iVar6,0,&__return_storage_ptr__->AllocatorInstance,iVar6,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FPSOPrecacheData,FPSOPrecacheData,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar6);
  }
  ReleaseSRWLockShared((PSRWLOCK)this);
  return __return_storage_ptr__;
}

// MarkCollectionComplete @ 148412930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FMaterialPSORequestManager::MarkCollectionComplete
          (FMaterialPSORequestManager *this,FMaterialPSOPrecacheParams *param_1,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FPSOPrecacheRequestResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3,uint param_4)

{
  TArray<FPSOPrecacheRequestResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1
  ;
  int *piVar2;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  FPSOPrecacheData *pFVar5;
  FBaseGraphTask *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FWriteBuffer *pFVar12;
  FPrecacheData *pFVar13;
  ForElementType<FPSOPrecacheRequestResult> FVar14;
  FPrecacheData *pFVar15;
  bool bVar16;
  undefined1 auStackY_b8 [32];
  FLLMScope local_74;
  FLLMScope local_70;
  FLLMScope local_6c;
  FMemScope local_68;
  TLogScope<0> local_60;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  FLLMScope::FLLMScope(&local_6c,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_68,PSO,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_70,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_74,AssetClasses,Default);
  bVar16 = -1 < MetadataChannel->Enabled;
  if (bVar16) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_60);
    *(undefined8 *)(local_60._8_8_ + 0x28) = *(undefined8 *)(local_60._8_8_ + 0x20);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  if (param_4 == this->LifecycleID) {
    uVar10 = ::GetTypeHash(param_1);
    iVar11 = TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FMaterialPSOPrecacheParams>
                       ((TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
                         *)&this->MaterialPSORequestData,uVar10,param_1);
    pFVar13 = (FPrecacheData *)0x0;
    if (iVar11 != -1) {
      pFVar13 = (FPrecacheData *)
                ((longlong)iVar11 * 0xa8 + *(longlong *)&this->MaterialPSORequestData);
    }
    pFVar15 = (FPrecacheData *)
              ((pFVar13->ActivePSOPrecacheRequests).AllocatorInstance.InlineData + 0x18);
    if (pFVar13 == (FPrecacheData *)0x0) {
      pFVar15 = (FPrecacheData *)0x0;
    }
    if ((pFVar15->State != Collecting) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindResult->State == EState::Collecting",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                           ,0x174,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((pFVar15->ActivePSOPrecacheRequests).ArrayNum != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindResult->ActivePSOPrecacheRequests.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                           ,0x175,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar1 = &pFVar15->ActivePSOPrecacheRequests;
    if (pTVar1 != param_3) {
      FVar14 = (pFVar15->ActivePSOPrecacheRequests).AllocatorInstance.SecondaryData;
      if (FVar14 == (ForElementType<FPSOPrecacheRequestResult>)0x0) {
        FVar14 = (ForElementType<FPSOPrecacheRequestResult>)pTVar1;
      }
      DestructItems<FPSOPrecacheRequestResult,int>
                ((FPSOPrecacheRequestResult *)FVar14,(pFVar15->ActivePSOPrecacheRequests).ArrayNum);
      FVar14 = (param_3->AllocatorInstance).SecondaryData;
      piVar2 = &(pFVar15->ActivePSOPrecacheRequests).ArrayMax;
      iVar11 = param_3->ArrayNum;
      if (FVar14 != (ForElementType<FPSOPrecacheRequestResult>)0x0) {
        param_3 = (TArray<FPSOPrecacheRequestResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar14;
      }
      (pFVar15->ActivePSOPrecacheRequests).ArrayNum = iVar11;
      if ((iVar11 == 0) && (*piVar2 == 0)) {
        *piVar2 = 4;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheRequestResult>_>
                  (0x10,8,iVar11,*piVar2,&pTVar1->AllocatorInstance,iVar11,piVar2);
        FVar14 = (pFVar15->ActivePSOPrecacheRequests).AllocatorInstance.SecondaryData;
        if (FVar14 == (ForElementType<FPSOPrecacheRequestResult>)0x0) {
          FVar14 = (ForElementType<FPSOPrecacheRequestResult>)pTVar1;
        }
        ConstructItems<FPSOPrecacheRequestResult,FPSOPrecacheRequestResult,int>
                  ((void *)FVar14,(FPSOPrecacheRequestResult *)param_3,iVar11);
      }
    }
    pTVar3 = &pFVar15->PSOPrecachaData;
    if (pTVar3 != param_2) {
      DestructItems<FPSOPrecacheData,int>
                ((FPSOPrecacheData *)(pTVar3->AllocatorInstance).Data,
                 (pFVar15->PSOPrecachaData).ArrayNum);
      iVar11 = param_2->ArrayNum;
      piVar2 = &(pFVar15->PSOPrecachaData).ArrayMax;
      pFVar5 = (FPSOPrecacheData *)(param_2->AllocatorInstance).Data;
      (pFVar15->PSOPrecachaData).ArrayNum = iVar11;
      if ((iVar11 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x138,8,iVar11,*piVar2,&pTVar3->AllocatorInstance,iVar11,piVar2);
        ConstructItems<FPSOPrecacheData,FPSOPrecacheData,int>
                  ((pTVar3->AllocatorInstance).Data,pFVar5,iVar11);
      }
    }
    iVar11 = (pFVar15->ActivePSOPrecacheRequests).ArrayNum;
    pFVar15->State = (iVar11 == 0) + Compiling;
    if ((iVar11 == 0) &&
       (pFVar6 = (pFVar15->CollectionGraphEvent).Reference, pFVar6 != (FBaseGraphTask *)0x0)) {
      (pFVar15->CollectionGraphEvent).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar4 = &pFVar6->field_0x30;
      iVar11 = *(int *)puVar4;
      *(int *)puVar4 = *(int *)puVar4 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      }
    }
    if (pFVar15->Priority != Medium) {
      CheckCompilingPSOs(this,pFVar15,true);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  if (bVar16) {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar7 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar7 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar12->Cursor = '\n';
    pFVar12->Cursor = pFVar12->Cursor + 1;
    pFVar12->Committed = pFVar12->Cursor;
  }
  FLLMScope::~FLLMScope(&local_74);
  FLLMScope::~FLLMScope(&local_70);
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(&local_6c);
  return;
}

// PrecachePSOs @ 148418bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

uint __thiscall
FMaterialPSORequestManager::PrecachePSOs
          (FMaterialPSORequestManager *this,FMaterialPSOPrecacheParams *param_1,
          EPSOPrecachePriority param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  int *piVar2;
  uchar *puVar3;
  atomic<unsigned_int> *paVar4;
  atomic<unsigned_int> aVar5;
  FBaseGraphTask *pFVar6;
  FMaterialPSOPrecacheParams *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined8 *puVar9;
  code *pcVar10;
  FMaterial *pFVar11;
  FRHIVertexDeclaration *pFVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  TRefCountPtr<FBaseGraphTask> TVar21;
  undefined8 *puVar22;
  UObjectBase *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar23;
  FWriteBuffer *pFVar24;
  ForElementType<FPSOPrecacheRequestResult> FVar25;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar26;
  FPSOPrecacheRequestResult *pFVar27;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar28;
  longlong lVar29;
  FPrecacheData *pFVar30;
  bool bVar31;
  undefined1 auStackY_288 [32];
  undefined1 local_237;
  EExtendedTaskPriority local_236;
  ETaskPriority local_235 [5];
  undefined1 local_230 [24];
  FLLMScope local_218;
  FLLMScope local_214;
  FLLMScope local_210 [2];
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> local_208;
  TPairInitializer<FMaterialPSOPrecacheParams_const_&,FMaterialPSORequestManager::FPrecacheData_const_&>
  local_1f8;
  ulong64 local_1e8;
  undefined8 *local_1e0;
  FMemScope local_1d8;
  FMaterialPSOPrecacheParams *local_1d0;
  uint *local_1c8;
  FMaterialPSORequestManager *local_1c0;
  undefined8 uStack_1b8;
  FMaterial *pFStack_1b0;
  FVertexFactoryType *pFStack_1a8;
  FRHIVertexDeclaration *pFStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint local_190;
  undefined4 uStack_18c;
  code *local_188 [5];
  undefined8 *local_160;
  uint local_158;
  undefined1 local_154;
  undefined8 *local_150;
  FPSOPrecacheRequestResult local_148 [4];
  FPSOPrecacheRequestResult *local_108;
  int local_100;
  undefined4 local_fc;
  EPSOPrecachePriority local_f8;
  FPSOPrecacheData *local_f0;
  undefined8 local_e8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_e0;
  TArray<FPSOPrecacheRequestResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_b0;
  TLogScope<0> local_60;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_230._16_8_ = this;
  FLLMScope::FLLMScope(local_210,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_1d8,PSO,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_214,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_218,AssetClasses,Default);
  bVar31 = -1 < MetadataChannel->Enabled;
  if (bVar31) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_60);
    *(undefined8 *)(local_60._8_8_ + 0x28) = *(undefined8 *)(local_60._8_8_ + 0x20);
  }
  uVar18 = 0xffffffff;
  if ((GPSOPrecacheMode != 0) && (GPSOPrecacheMode == 1)) {
    PreloadShaders(this,param_1,param_3);
    goto LAB_148419569;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  uVar16 = ::GetTypeHash(param_1);
  iVar17 = TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FMaterialPSOPrecacheParams>
                     ((TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
                       *)&this->MaterialPSORequestData,uVar16,param_1);
  if (iVar17 != -1) {
    lVar20 = (longlong)iVar17 * 0xa8 + *(longlong *)&this->MaterialPSORequestData;
    lVar29 = lVar20 + 0x28;
    if (lVar20 == 0) {
      lVar29 = 0;
    }
    if ((lVar29 != 0) && (*(char *)(lVar29 + 4) == '\x03')) {
      ReleaseSRWLockShared((PSRWLOCK)this);
      goto LAB_148419569;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)this);
  if (GPSOUseBackgroundThreadForCollection == 0) {
LAB_148418d37:
    bVar15 = false;
  }
  else {
    bVar14 = FApp::ShouldUseThreadingForPerformance();
    bVar15 = true;
    if (!bVar14) goto LAB_148418d37;
  }
  local_230._0_8_ = (undefined8 *)0x0;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar18 = ::GetTypeHash(param_1);
  iVar17 = TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FMaterialPSOPrecacheParams>
                     ((TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
                       *)&this->MaterialPSORequestData,uVar18,param_1);
  if (iVar17 == -1) {
LAB_148418fdc:
    pFVar7 = (FMaterialPSOPrecacheParams *)(this->MaterialPSORequests).AllocatorInstance.Data;
    if (((pFVar7 <= param_1) && (param_1 < pFVar7 + (this->MaterialPSORequests).ArrayMax)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar18 = (*pcVar10)();
      return uVar18;
    }
    uVar18 = (this->MaterialPSORequests).ArrayNum;
    piVar2 = &(this->MaterialPSORequests).ArrayMax;
    local_230._16_4_ = uVar18;
    if (uVar18 == *piVar2) {
      uVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(this->MaterialPSORequests).AllocatorInstance,piVar2);
      local_230._16_4_ = uVar18;
    }
    (this->MaterialPSORequests).ArrayNum = uVar18 + 1;
    pFVar11 = param_1->Material;
    lVar29 = (longlong)(int)uVar18;
    pFVar8 = (this->MaterialPSORequests).AllocatorInstance.Data;
    *(undefined8 *)(pFVar8 + lVar29 * 0x28) = *(undefined8 *)param_1;
    *(FMaterial **)(pFVar8 + lVar29 * 0x28 + 8) = pFVar11;
    pFVar12 = (param_1->VertexFactoryData).CustomDefaultVertexDeclaration;
    *(FVertexFactoryType **)(pFVar8 + lVar29 * 0x28 + 0x10) =
         (param_1->VertexFactoryData).VertexFactoryType;
    *(FRHIVertexDeclaration **)(pFVar8 + lVar29 * 0x28 + 0x10 + 8) = pFVar12;
    *(FPSOPrecacheParams_u_0 *)(pFVar8 + lVar29 * 0x28 + 0x20) =
         (param_1->PrecachePSOParams).field0_0x0;
    local_150 = (undefined8 *)0x0;
    local_108 = (FPSOPrecacheRequestResult *)0x0;
    local_100 = 0;
    local_fc = 4;
    local_f0 = (FPSOPrecacheData *)0x0;
    local_e8 = 0;
    local_154 = 1;
    local_158 = uVar18;
    local_f8 = param_2;
    if (bVar15) {
      TVar21 = FBaseGraphTask::CreateGraphEvent();
      uVar13 = local_230._0_8_;
      puVar22 = (undefined8 *)local_230._0_8_;
      if ((FBaseGraphTask *)local_230 != TVar21.Reference) {
        puVar22 = *(undefined8 **)TVar21.Reference;
        *(undefined8 *)TVar21.Reference = 0;
        if ((undefined8 *)local_230._0_8_ != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(local_230._0_8_ + 0x30);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            puVar9 = *(undefined8 **)local_230._0_8_;
            local_230._0_8_ = puVar22;
            (*(code *)*puVar9)(uVar13,1);
            puVar22 = (undefined8 *)local_230._0_8_;
          }
        }
      }
      local_230._0_8_ = puVar22;
      if (local_1f8.Value != (FPrecacheData *)0x0) {
        LOCK();
        puVar3 = ((local_1f8.Value)->ActivePSOPrecacheRequests).AllocatorInstance.InlineData + 0x20;
        iVar17 = *(int *)puVar3;
        *(int *)puVar3 = *(int *)puVar3 + -1;
        UNLOCK();
        if ((iVar17 == 1) && (local_1f8.Value != (FPrecacheData *)0x0)) {
          (*(code *)**(undefined8 **)local_1f8.Value)(local_1f8.Value,1);
        }
      }
      puVar22 = local_150;
      if (local_150 != (undefined8 *)local_230._0_8_) {
        local_150 = (undefined8 *)local_230._0_8_;
        if ((undefined8 *)local_230._0_8_ != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_230._0_8_ + 0x30) = *(int *)(local_230._0_8_ + 0x30) + 1;
          UNLOCK();
        }
        if (puVar22 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar22 + 6);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)*puVar22)(puVar22,1);
          }
        }
      }
      uStack_1b8._0_4_ = param_1->FeatureLevel;
      uStack_1b8._4_4_ = *(undefined4 *)&param_1->field_0x4;
      pFStack_1b0 = param_1->Material;
      local_190 = this->LifecycleID;
      pFStack_1a8 = (param_1->VertexFactoryData).VertexFactoryType;
      pFStack_1a0 = (param_1->VertexFactoryData).CustomDefaultVertexDeclaration;
      local_1e8 = (param_1->PrecachePSOParams).field0_0x0.Data;
      local_188[0] = (code *)0x0;
      local_1c0 = this;
      local_160 = FMemory::Malloc(0x40,8);
      *local_160 = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__CG___PrecachePSOs_FMaterialPSORequestManager__QEAAIAEBUFMaterialPSOPrecacheParams__W4EPSOPrecachePriority__AEAV__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA________Z__00_00_Function_Private_Core_UE__6B_
      ;
      local_160[1] = local_1c0;
      local_160[2] = uStack_1b8;
      local_160[3] = pFStack_1b0;
      local_160[4] = pFStack_1a8;
      uStack_198 = (undefined4)local_1e8;
      uStack_194 = (undefined4)(local_1e8 >> 0x20);
      *(undefined4 *)(local_160 + 5) = pFStack_1a0._0_4_;
      *(undefined4 *)((longlong)local_160 + 0x2c) = pFStack_1a0._4_4_;
      *(undefined4 *)(local_160 + 6) = uStack_198;
      *(undefined4 *)((longlong)local_160 + 0x34) = uStack_194;
      local_160[7] = CONCAT44(uStack_18c,local_190);
      if (local_160 + 1 != (undefined8 *)0x0) {
        local_188[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FMaterialPSORequestManager::PrecachePSOs'::__l38::<lambda_1>,void>
                       ::Call;
      }
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)&local_1e0,(TStatIdData *)local_188,
                 (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)local_230);
      if (local_1e0 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_1e0 + 6);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)*local_1e0)(local_1e0,1);
        }
      }
    }
    local_1c8 = &local_158;
    local_1d0 = param_1;
    TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FMaterialPSOPrecacheParams_const_&,FMaterialPSORequestManager::FPrecacheData_const_&>_>
              ((TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
                *)&this->MaterialPSORequestData,&local_1f8,(bool *)&local_1d0);
    DestructItems<FPSOPrecacheData,int>(local_f0,(int)local_e8);
    if (local_f0 != (FPSOPrecacheData *)0x0) {
      FMemory::Free(local_f0);
    }
    pFVar27 = local_148;
    if (local_108 != (FPSOPrecacheRequestResult *)0x0) {
      pFVar27 = local_108;
    }
    DestructItems<FPSOPrecacheRequestResult,int>(pFVar27,local_100);
    if (local_108 != (FPSOPrecacheRequestResult *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_150 + 6);
      iVar17 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)*local_150)(local_150,1);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    if (bVar15) {
      puVar22 = ::operator_new(8);
      if (puVar22 != (undefined8 *)0x0) {
        this_00 = (UObjectBase *)(**(code **)(param_1->Material->_padding_ + 0x4e0))();
        *puVar22 = 0;
        if (this_00 != (UObjectBase *)0x0) {
          UObjectBase::AddRef(this_00);
          *puVar22 = this_00;
        }
      }
      local_e0.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_e0.ArrayNum = 0;
      local_e0.ArrayMax = 4;
      this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x118,8);
      if (this_01 != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_01,&local_e0);
        this_01->_padding_ = (longlong)&___7__TGraphTask_VFMaterialPSOPrecacheCollectionTask____6B_;
      }
      uVar18 = this->LifecycleID;
      this_01[1]._padding_ = (longlong)puVar22;
      pFVar11 = param_1->Material;
      this_01[1]._padding_ = *(longlong *)param_1;
      this_01[1]._padding_ = (longlong)pFVar11;
      pFVar12 = (param_1->VertexFactoryData).CustomDefaultVertexDeclaration;
      this_01[1]._padding_ = (longlong)(param_1->VertexFactoryData).VertexFactoryType;
      this_01[1]._padding_ = (longlong)pFVar12;
      this_01[1]._padding_ = (longlong)(param_1->PrecachePSOParams).field0_0x0;
      this_01[1].RefCount = (atomic<unsigned_int>)0x0;
      this_01[1].NumLocks = (atomic<unsigned_int>)0x0;
      this_01[1].RefCount = (atomic<unsigned_int>)local_230._0_4_;
      this_01[1].NumLocks = (atomic<unsigned_int>)local_230._4_4_;
      if ((undefined8 *)local_230._0_8_ != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_230._0_8_ + 0x30) = *(int *)(local_230._0_8_ + 0x30) + 1;
        UNLOCK();
      }
      *(uint *)&this_01[1].Pipe = uVar18;
      UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_235,&local_236);
      UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_235[0],local_236,None);
      if (this_01 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x118);
      }
      else {
        LOCK();
        this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x118);
        LOCK();
        paVar4 = &this_01->RefCount;
        aVar5 = *paVar4;
        *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_01->_padding_)(this_01,1);
        }
      }
      FVar28 = (param_3->AllocatorInstance).SecondaryData;
      FVar23 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_3;
      if (FVar28 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar23 = FVar28;
      }
      if ((ulonglong)FVar23 <= local_230) {
        FVar23 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_3;
        if (FVar28 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar23 = FVar28;
        }
        if ((local_230 < (undefined1 *)((longlong)FVar23 + (longlong)param_3->ArrayMax * 8)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          uVar18 = (*pcVar10)();
          return uVar18;
        }
      }
      iVar17 = param_3->ArrayNum;
      if (iVar17 == param_3->ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar17 + 1;
      FVar28 = (param_3->AllocatorInstance).SecondaryData;
      if (FVar28 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        param_3 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar28;
      }
      puVar22 = (undefined8 *)((longlong)param_3 + (longlong)iVar17 * 8);
      *puVar22 = 0;
      *puVar22 = local_230._0_8_;
      if ((undefined8 *)local_230._0_8_ != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_230._0_8_ + 0x30) = *(int *)(local_230._0_8_ + 0x30) + 1;
        UNLOCK();
      }
      FVar28 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_e0;
      if (local_e0.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar28 = local_e0.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar28,local_e0.ArrayNum);
      if (local_e0.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_e0.AllocatorInstance.SecondaryData);
      }
      uVar18 = local_230._16_4_;
    }
    else {
      FMaterialShaderMap::CollectPSOPrecacheData
                ((param_1->Material->GameThreadShaderMap).Reference,&local_208,param_1);
      RequestPrecachePSOs(&local_b0,MeshPass,&local_208);
      MarkCollectionComplete(this,param_1,&local_208,&local_b0,this->LifecycleID);
      iVar17 = local_b0.ArrayNum;
      lVar29 = (longlong)local_b0.ArrayNum;
      FVar25 = (ForElementType<FPSOPrecacheRequestResult>)&local_b0;
      if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<FPSOPrecacheRequestResult>)0x0
         ) {
        FVar25 = local_b0.AllocatorInstance.SecondaryData;
      }
      FVar28 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar25 + 8);
      while( true ) {
        if (local_b0.ArrayNum != iVar17) {
          local_235[1] = 0;
          `TCheckedPointerIterator<FPSOPrecacheRequestResult,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_235 + 1);
        }
        if ((FPSOPrecacheRequestResult *)((longlong)FVar28 + -8) ==
            (FPSOPrecacheRequestResult *)(lVar29 * 0x10 + (longlong)FVar25)) break;
        if ((((FPSOPrecacheRequestResult *)((longlong)FVar28 + -8)).Type == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                                ,0x132,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          uVar18 = (*pcVar10)();
          return uVar18;
        }
        FVar23 = (param_3->AllocatorInstance).SecondaryData;
        FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_3;
        if (FVar23 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar26 = FVar23;
        }
        if ((ulonglong)FVar26 <= (ulonglong)FVar28) {
          FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_3;
          if (FVar23 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar26 = FVar23;
          }
          if (((ulonglong)FVar28 < (ulonglong)((longlong)FVar26 + (longlong)param_3->ArrayMax * 8))
             && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar15)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return uVar18;
          }
        }
        iVar19 = param_3->ArrayNum;
        if (iVar19 == param_3->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar19 + 1;
        FVar23 = (param_3->AllocatorInstance).SecondaryData;
        FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_3;
        if (FVar23 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar26 = FVar23;
        }
        *(undefined8 *)((longlong)FVar26 + (longlong)iVar19 * 8) = 0;
        TVar21.Reference = *(FBaseGraphTask **)FVar28;
        *(FBaseGraphTask **)((longlong)FVar26 + (longlong)iVar19 * 8) = TVar21.Reference;
        if (TVar21.Reference != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&(TVar21.Reference)->field_0x30 = *(int *)&(TVar21.Reference)->field_0x30 + 1;
          UNLOCK();
        }
        FVar28 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar28 + 0x10);
      }
      FVar25 = (ForElementType<FPSOPrecacheRequestResult>)&local_b0;
      if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<FPSOPrecacheRequestResult>)0x0
         ) {
        FVar25 = local_b0.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPSOPrecacheRequestResult,int>
                ((FPSOPrecacheRequestResult *)FVar25,local_b0.ArrayNum);
      if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<FPSOPrecacheRequestResult>)0x0
         ) {
        FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
      }
      DestructItems<FPSOPrecacheData,int>
                ((FPSOPrecacheData *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
      if ((FPSOPrecacheData *)local_208.AllocatorInstance.Data != (FPSOPrecacheData *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
      }
    }
    if ((undefined8 *)local_230._0_8_ == (undefined8 *)0x0) goto LAB_148419569;
    LOCK();
    piVar2 = (int *)(local_230._0_8_ + 0x30);
    iVar17 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  else {
    lVar29 = (longlong)iVar17 * 0xa8 + *(longlong *)&this->MaterialPSORequestData;
    pFVar30 = (FPrecacheData *)(lVar29 + 0x28);
    if (lVar29 == 0) {
      pFVar30 = (FPrecacheData *)0x0;
    }
    if (pFVar30 == (FPrecacheData *)0x0) goto LAB_148418fdc;
    if ((param_2 == High) && (pFVar30->Priority != High)) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    CheckCompilingPSOs(this,pFVar30,bVar15);
    if (pFVar30->State == Completed) {
      uVar18 = 0xffffffff;
    }
    else {
      pTVar1 = &pFVar30->CollectionGraphEvent;
      if ((pFVar30->CollectionGraphEvent).Reference == (FBaseGraphTask *)0x0) {
        FVar25 = (pFVar30->ActivePSOPrecacheRequests).AllocatorInstance.SecondaryData;
        iVar17 = (pFVar30->ActivePSOPrecacheRequests).ArrayNum;
        if (FVar25 == (ForElementType<FPSOPrecacheRequestResult>)0x0) {
          FVar25 = (ForElementType<FPSOPrecacheRequestResult>)&pFVar30->ActivePSOPrecacheRequests;
        }
        FVar28 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar25 + 8);
        while( true ) {
          if ((pFVar30->ActivePSOPrecacheRequests).ArrayNum != iVar17) {
            local_237 = 0;
            `TCheckedPointerIterator<FPSOPrecacheRequestResult,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_237);
          }
          this = (FMaterialPSORequestManager *)local_230._16_8_;
          if ((longlong *)((longlong)FVar28 + -8) ==
              (longlong *)((longlong)iVar17 * 0x10 + (longlong)FVar25)) break;
          FVar23 = (param_3->AllocatorInstance).SecondaryData;
          FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_3;
          if (FVar23 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar26 = FVar23;
          }
          if ((ulonglong)FVar26 <= (ulonglong)FVar28) {
            FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_3;
            if (FVar23 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar26 = FVar23;
            }
            if (((ulonglong)FVar28 < (ulonglong)((longlong)FVar26 + (longlong)param_3->ArrayMax * 8)
                ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return uVar18;
            }
          }
          iVar19 = param_3->ArrayNum;
          if (iVar19 == param_3->ArrayMax) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                               (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar19 + 1;
          FVar23 = (param_3->AllocatorInstance).SecondaryData;
          FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_3;
          if (FVar23 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar26 = FVar23;
          }
          *(undefined8 *)((longlong)FVar26 + (longlong)iVar19 * 8) = 0;
          lVar29 = *(longlong *)FVar28;
          *(longlong *)((longlong)FVar26 + (longlong)iVar19 * 8) = lVar29;
          if (lVar29 != 0) {
            LOCK();
            *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
            UNLOCK();
          }
          FVar28 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar28 + 0x10);
        }
      }
      else {
        FVar28 = (param_3->AllocatorInstance).SecondaryData;
        FVar23 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_3;
        if (FVar28 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar23 = FVar28;
        }
        if ((ulonglong)FVar23 <= pTVar1) {
          FVar23 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_3;
          if (FVar28 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar23 = FVar28;
          }
          if ((pTVar1 < (undefined1 *)((longlong)FVar23 + (longlong)param_3->ArrayMax * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return uVar18;
          }
        }
        iVar17 = param_3->ArrayNum;
        if (iVar17 == param_3->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar17 + 1;
        FVar28 = (param_3->AllocatorInstance).SecondaryData;
        if (FVar28 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          param_3 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                     *)FVar28;
        }
        *(undefined8 *)((longlong)param_3 + (longlong)iVar17 * 8) = 0;
        pFVar6 = pTVar1->Reference;
        *(FBaseGraphTask **)((longlong)param_3 + (longlong)iVar17 * 8) = pFVar6;
        if (pFVar6 != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&pFVar6->field_0x30 = *(int *)&pFVar6->field_0x30 + 1;
          UNLOCK();
          uVar18 = pFVar30->RequestID;
          goto LAB_148418fb3;
        }
      }
      uVar18 = pFVar30->RequestID;
    }
LAB_148418fb3:
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    if ((undefined8 *)local_230._0_8_ == (undefined8 *)0x0) goto LAB_148419569;
    LOCK();
    piVar2 = (int *)(local_230._0_8_ + 0x30);
    iVar17 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if ((iVar17 == 1) && ((undefined8 *)local_230._0_8_ != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)local_230._0_8_)(local_230._0_8_,1);
  }
LAB_148419569:
  if (bVar31) {
    lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar29 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar24 = *(FWriteBuffer **)(lVar29 + 0x20);
    if ((int)pFVar24 - *(int *)&pFVar24->Cursor < 1) {
      pFVar24 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar24->Cursor = '\n';
    pFVar24->Cursor = pFVar24->Cursor + 1;
    pFVar24->Committed = pFVar24->Cursor;
  }
  FLLMScope::~FLLMScope(&local_218);
  FLLMScope::~FLLMScope(&local_214);
  FMemScope::~FMemScope(&local_1d8);
  FLLMScope::~FLLMScope(local_210);
  return uVar18;
}

// PreloadShaderMap @ 148419840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FMaterialPSORequestManager::PreloadShaderMap
          (FMaterialPSORequestManager *this,FMaterial *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FMaterialShaderMap *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  UObjectBase *this_00;
  FTaskBase *this_01;
  FTaskBase *pFVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  FTaskBase *this_02;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_88;
  ETaskPriority local_87;
  EExtendedTaskPriority local_86;
  ETaskPriority local_85 [5];
  FBaseGraphTask *local_80;
  FLLMScope local_78 [2];
  TRefCountPtr<FBaseGraphTask> local_70;
  FMemScope local_68;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FLLMScope::FLLMScope(local_78,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_68,PSO,true);
  bVar6 = IsPSOShaderPreloadingEnabled();
  if (bVar6) {
    puVar8 = ::operator_new(8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      this_00 = (UObjectBase *)(**(code **)(param_1->_padding_ + 0x4e0))(param_1);
      *puVar8 = 0;
      if (this_00 != (UObjectBase *)0x0) {
        UObjectBase::AddRef(this_00);
        *puVar8 = this_00;
      }
    }
    this_02 = (FTaskBase *)0x0;
    pFVar4 = (param_1->GameThreadShaderMap).Reference;
    FBaseGraphTask::CreateGraphEvent();
    this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
    pFVar9 = this_02;
    if (this_01 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)this_01,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      this_01->_padding_ = (longlong)&___7__TGraphTask_VFShaderMapPreloadTask____6B_;
      pFVar9 = this_01;
    }
    if (local_80 == (FBaseGraphTask *)0x0) {
      pFVar9[1]._padding_ = (longlong)puVar8;
      pFVar9[1]._padding_ = (longlong)pFVar4;
      pFVar9[1]._padding_ = 0;
    }
    else {
      LOCK();
      *(int *)&local_80->field_0x30 = *(int *)&local_80->field_0x30 + 1;
      UNLOCK();
      pFVar9[1]._padding_ = (longlong)puVar8;
      pFVar9[1]._padding_ = (longlong)pFVar4;
      pFVar9[1]._padding_ = (longlong)local_80;
      LOCK();
      *(int *)&local_80->field_0x30 = *(int *)&local_80->field_0x30 + 1;
      UNLOCK();
      LOCK();
      puVar1 = &local_80->field_0x30;
      iVar7 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (*(code *)**(undefined8 **)local_80)(local_80,1);
      }
    }
    UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,&local_87,&local_88);
    UE::Tasks::Private::FTaskBase::Init(pFVar9,L"GraphTask",local_87,local_88,None);
    if (pFVar9 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0xf0);
    }
    else {
      LOCK();
      pFVar9->RefCount = (atomic<unsigned_int>)((int)pFVar9->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar9,0xf0);
      LOCK();
      paVar2 = &pFVar9->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar9->_padding_)(pFVar9,1);
      }
    }
    local_70.Reference = local_80;
    if (local_80 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_80->field_0x30 = *(int *)&local_80->field_0x30 + 1;
      UNLOCK();
    }
    local_60.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_60.ArrayNum = 1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,1,0,&local_60.AllocatorInstance,1,&local_60.ArrayMax);
    FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar11 = local_60.AllocatorInstance.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar11,&local_70,1);
    if (local_70.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_70.Reference)->field_0x30;
      iVar7 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
      }
    }
    pFVar9 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
    if (pFVar9 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar9,&local_60);
      pFVar9->_padding_ = (longlong)&___7__TGraphTask_VFMaterialInterfaceReleaseTask____6B_;
      this_02 = pFVar9;
    }
    this_02[1]._padding_ = (longlong)puVar8;
    UE::Tasks::Private::TranslatePriority(GameThread,local_85,&local_86);
    UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_85[0],local_86,None);
    LOCK();
    this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0xe0);
    LOCK();
    paVar2 = &this_02->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_02->_padding_)(this_02,1);
    }
    FVar11 = (param_2->AllocatorInstance).SecondaryData;
    FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
    if (FVar11 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar10 = FVar11;
    }
    if ((ulonglong)FVar10 <= &local_80) {
      FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
      if (FVar11 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar10 = FVar11;
      }
      if ((&local_80 < (FBaseGraphTask **)((longlong)FVar10 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    FVar11 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar11 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      param_2 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar11;
    }
    puVar8 = (undefined8 *)((longlong)param_2 + (longlong)iVar7 * 8);
    *puVar8 = 0;
    *puVar8 = local_80;
    if (local_80 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_80->field_0x30 = *(int *)&local_80->field_0x30 + 1;
      UNLOCK();
    }
    FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar11 = local_60.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar11,local_60.ArrayNum);
    if (local_60.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
    }
    if (local_80 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &local_80->field_0x30;
      iVar7 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar7 == 1) && (local_80 != (FBaseGraphTask *)0x0)) {
        (*(code *)**(undefined8 **)local_80)(local_80,1);
      }
    }
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_78);
  return;
}

// PreloadShaders @ 148419c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FMaterialPSORequestManager::PreloadShaders
          (FMaterialPSORequestManager *this,FMaterialPSOPrecacheParams *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FMaterial *pFVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  UObjectBase *this_00;
  FTaskBase *this_01;
  FTaskBase *pFVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  FTaskBase *this_02;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_88;
  ETaskPriority local_87;
  EExtendedTaskPriority local_86;
  ETaskPriority local_85 [5];
  FBaseGraphTask *local_80;
  FLLMScope local_78 [2];
  TRefCountPtr<FBaseGraphTask> local_70;
  FMemScope local_68;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FLLMScope::FLLMScope(local_78,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_68,PSO,true);
  bVar9 = IsPSOShaderPreloadingEnabled();
  if (bVar9) {
    puVar11 = ::operator_new(8);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      this_00 = (UObjectBase *)(**(code **)(param_1->Material->_padding_ + 0x4e0))();
      *puVar11 = 0;
      if (this_00 != (UObjectBase *)0x0) {
        UObjectBase::AddRef(this_00);
        *puVar11 = this_00;
      }
    }
    this_02 = (FTaskBase *)0x0;
    FBaseGraphTask::CreateGraphEvent();
    this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x118,8);
    pFVar12 = this_02;
    if (this_01 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)this_01,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      this_01->_padding_ = (longlong)&___7__TGraphTask_VFShaderPreloadCollectionTask____6B_;
      pFVar12 = this_01;
    }
    if (local_80 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_80->field_0x30 = *(int *)&local_80->field_0x30 + 1;
      UNLOCK();
    }
    pFVar12[1]._padding_ = (longlong)puVar11;
    pFVar8 = param_1->Material;
    pFVar12[1]._padding_ = *(longlong *)param_1;
    pFVar12[1]._padding_ = (longlong)pFVar8;
    uVar5 = *(undefined4 *)((longlong)&(param_1->VertexFactoryData).VertexFactoryType + 4);
    uVar6 = *(undefined4 *)&(param_1->VertexFactoryData).CustomDefaultVertexDeclaration;
    uVar7 = *(undefined4 *)
             ((longlong)&(param_1->VertexFactoryData).CustomDefaultVertexDeclaration + 4);
    *(undefined4 *)&pFVar12[1]._padding_ =
         *(undefined4 *)&(param_1->VertexFactoryData).VertexFactoryType;
    *(undefined4 *)((longlong)&pFVar12[1]._padding_ + 4) = uVar5;
    *(undefined4 *)&pFVar12[1]._padding_ = uVar6;
    *(undefined4 *)((longlong)&pFVar12[1]._padding_ + 4) = uVar7;
    pFVar12[1]._padding_ = (longlong)(param_1->PrecachePSOParams).field0_0x0;
    *(FBaseGraphTask **)&pFVar12[1].RefCount = local_80;
    if (local_80 == (FBaseGraphTask *)0x0) {
      *(undefined1 *)((longlong)&pFVar12[1].Pipe + 4) = 0;
    }
    else {
      LOCK();
      *(int *)&local_80->field_0x30 = *(int *)&local_80->field_0x30 + 1;
      UNLOCK();
      *(undefined1 *)((longlong)&pFVar12[1].Pipe + 4) = 0;
      LOCK();
      puVar1 = &local_80->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_80)(local_80,1);
      }
    }
    UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,&local_87,&local_88);
    UE::Tasks::Private::FTaskBase::Init(pFVar12,L"GraphTask",local_87,local_88,None);
    if (pFVar12 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x118);
    }
    else {
      LOCK();
      pFVar12->RefCount = (atomic<unsigned_int>)((int)pFVar12->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar12,0x118);
      LOCK();
      paVar2 = &pFVar12->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar12->_padding_)(pFVar12,1);
      }
    }
    local_70.Reference = local_80;
    if (local_80 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_80->field_0x30 = *(int *)&local_80->field_0x30 + 1;
      UNLOCK();
    }
    local_60.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_60.ArrayNum = 1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,1,0,&local_60.AllocatorInstance,1,&local_60.ArrayMax);
    FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar14 = local_60.AllocatorInstance.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar14,&local_70,1);
    if (local_70.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_70.Reference)->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
      }
    }
    pFVar12 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
    if (pFVar12 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar12,&local_60);
      pFVar12->_padding_ = (longlong)&___7__TGraphTask_VFMaterialInterfaceReleaseTask____6B_;
      this_02 = pFVar12;
    }
    this_02[1]._padding_ = (longlong)puVar11;
    UE::Tasks::Private::TranslatePriority(GameThread,local_85,&local_86);
    UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_85[0],local_86,None);
    LOCK();
    this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0xe0);
    LOCK();
    paVar2 = &this_02->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_02->_padding_)(this_02,1);
    }
    FVar14 = (param_2->AllocatorInstance).SecondaryData;
    FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
    if (FVar14 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar13 = FVar14;
    }
    if ((ulonglong)FVar13 <= &local_80) {
      FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
      if (FVar14 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar13 = FVar14;
      }
      if ((&local_80 < (FBaseGraphTask **)((longlong)FVar13 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar10 + 1;
    FVar14 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar14 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      param_2 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar14;
    }
    puVar11 = (undefined8 *)((longlong)param_2 + (longlong)iVar10 * 8);
    *puVar11 = 0;
    *puVar11 = local_80;
    if (local_80 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_80->field_0x30 = *(int *)&local_80->field_0x30 + 1;
      UNLOCK();
    }
    FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar14 = local_60.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar14,local_60.ArrayNum);
    if (local_60.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
    }
    if (local_80 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &local_80->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar10 == 1) && (local_80 != (FBaseGraphTask *)0x0)) {
        (*(code *)**(undefined8 **)local_80)(local_80,1);
      }
    }
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_78);
  return;
}

// ReleasePrecacheData @ 14841f120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialPSORequestManager::ReleasePrecacheData(FMaterialPSORequestManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FWriteBuffer *pFVar7;
  bool bVar8;
  undefined1 auStackY_108 [32];
  FLLMScope local_d4;
  FLLMScope local_d0;
  FLLMScope local_cc;
  FMaterialPSOPrecacheParams *local_c8;
  longlong local_c0;
  FMemScope local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  TLogScope<0> local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FLLMScope::FLLMScope(&local_cc,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_b8,PSO,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_d0,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_d4,AssetClasses,Default);
  bVar8 = -1 < MetadataChannel->Enabled;
  if (bVar8) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_88);
    *(undefined8 *)(local_88._8_8_ + 0x28) = *(undefined8 *)(local_88._8_8_ + 0x20);
  }
  if (param_1 == 0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialPSORequestID != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                       ,0x191,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar5 = 0;
  if ((int)param_1 < (this->MaterialPSORequests).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_c0 = (longlong)(int)param_1 * 0x28;
  local_c8 = (FMaterialPSOPrecacheParams *)
             ((this->MaterialPSORequests).AllocatorInstance.Data + local_c0);
  if (*(int *)&(this->MaterialPSORequestData).field_0x8 !=
      *(int *)&(this->MaterialPSORequestData).field_0x34) {
    uVar5 = ::GetTypeHash(local_c8);
    iVar6 = TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
            ::RemoveImpl<FMaterialPSOPrecacheParams>
                      ((TSet<TTuple<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData>,TDefaultMapHashableKeyFuncs<FMaterialPSOPrecacheParams,FMaterialPSORequestManager::FPrecacheData,0>,FDefaultSetAllocator>
                        *)&this->MaterialPSORequestData,uVar5,local_c8);
    if (iVar6 == 1) goto LAB_14841f2e1;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("MaterialPSORequestData.Remove(Params) == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                     ,0x197,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14841f2e1:
  uStack_98 = 0;
  local_b0 = 5;
  local_90 = 0x13c00;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uVar5 = 0;
  if ((int)param_1 < (this->MaterialPSORequests).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->MaterialPSORequests).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + local_c0) = 5;
  *(undefined8 *)(pFVar1 + local_c0 + 8) = 0;
  *(undefined8 *)(pFVar1 + local_c0 + 0x10) = 0;
  *(undefined8 *)(pFVar1 + local_c0 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar1 + local_c0 + 0x20) = 0x13c00;
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  if (bVar8) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar7 = *(FWriteBuffer **)(lVar2 + 0x20);
    if ((int)pFVar7 - *(int *)&pFVar7->Cursor < 1) {
      pFVar7 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar7->Cursor = '\n';
    pFVar7->Cursor = pFVar7->Cursor + 1;
    pFVar7->Committed = pFVar7->Cursor;
  }
  FLLMScope::~FLLMScope(&local_d4);
  FLLMScope::~FLLMScope(&local_d0);
  FMemScope::~FMemScope(&local_b8);
  FLLMScope::~FLLMScope(&local_cc);
  return;
}

