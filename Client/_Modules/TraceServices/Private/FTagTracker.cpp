// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 13

// FTagTracker @ 14d3cd480

FTagTracker * __thiscall
TraceServices::FTagTracker::FTagTracker(FTagTracker *this,IAnalysisSession *param_1)

{
  this->Session = param_1;
  *(undefined8 *)&this->TrackerThreadStates = 0;
  *(undefined8 *)&(this->TrackerThreadStates).field_0x8 = 0;
  *(undefined8 *)&(this->TrackerThreadStates).field_0x20 = 0;
  *(undefined4 *)&(this->TrackerThreadStates).field_0x28 = 0;
  *(undefined4 *)&(this->TrackerThreadStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackerThreadStates).field_0x34 = 0;
  *(undefined4 *)&(this->TrackerThreadStates).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TrackerThreadStates).field_0x40 = 0;
  *(undefined4 *)&(this->TrackerThreadStates).field_0x48 = 0;
  *(undefined8 *)&this->TagMap = 0;
  *(undefined8 *)&(this->TagMap).field_0x8 = 0;
  *(undefined8 *)&(this->TagMap).field_0x20 = 0;
  *(undefined4 *)&(this->TagMap).field_0x28 = 0;
  *(undefined4 *)&(this->TagMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagMap).field_0x34 = 0;
  *(undefined4 *)&(this->TagMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TagMap).field_0x40 = 0;
  *(undefined4 *)&(this->TagMap).field_0x48 = 0;
  (this->PendingTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTags).ArrayNum = 0;
  (this->PendingTags).ArrayMax = 0;
  this->NumErrors = 0;
  this->NumWarnings = 0;
  this->CustomNameTag = 0xffffffff;
  return this;
}

// ~FTagTracker @ 14d3d13f0

void __thiscall TraceServices::FTagTracker::~FTagTracker(FTagTracker *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TTuple<unsigned_int,FString>,int>
            ((TTuple<unsigned_int,FString> *)(this->PendingTags).AllocatorInstance.Data,
             (this->PendingTags).ArrayNum);
  pFVar1 = (this->PendingTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TagMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TagMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTagTracker::FTagEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTagTracker::FTagEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTagTracker::FTagEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TagMap);
  *(undefined4 *)&(this->TrackerThreadStates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TrackerThreadStates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTagTracker::FThreadState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTagTracker::FThreadState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTagTracker::FThreadState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackerThreadStates);
  return;
}

// AddTagSpec @ 14d3d3f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTagTracker::AddTagSpec(FTagTracker *this,uint param_1,uint param_2,wchar_t *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  wchar_t wVar4;
  wchar_t *_Str2;
  IAnalysisSession *pIVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  uint uVar9;
  TMap<unsigned_int,TraceServices::FTagTracker::FTagEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  size_t sVar16;
  TStringView<wchar_t> *pTVar17;
  FScriptContainerElement *pFVar18;
  FTagEntry *pFVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  undefined4 *puVar23;
  undefined1 *puVar24;
  longlong lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined1 *puVar28;
  wchar_t *pwVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  undefined1 auStack_328 [32];
  wchar_t *local_308;
  uint local_300;
  undefined8 local_2f8;
  uint local_2e8;
  uint local_2e0 [2];
  undefined1 local_2d8;
  undefined1 local_2d7 [15];
  wchar_t *local_2c8;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  longlong local_2b8;
  FScriptContainerElement *local_2b0;
  wchar_t *local_2a8;
  uint uStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_298 [16];
  int local_288;
  TMap<unsigned_int,TraceServices::FTagTracker::FTagEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>_>
  *local_280;
  uint uStack_278;
  uint uStack_274;
  undefined1 *local_270;
  undefined4 uStack_268;
  uint uStack_264;
  uint local_260;
  uint uStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  int local_250;
  TMap<unsigned_int,TraceServices::FTagTracker::FTagEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>_>
  *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  TStringView<wchar_t> local_200;
  wchar_t *local_1f0;
  undefined4 local_1e8;
  uint *local_1e0;
  undefined8 *local_1d8;
  TStringView<wchar_t> local_1c8;
  TStringView<wchar_t> local_1b8;
  FString local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2e8 = param_2;
  local_2e0[0] = param_1;
  if (param_1 == 0xffffffff) {
    this->NumErrors = this->NumErrors + 1;
    if (100 < this->NumErrors) {
      return;
    }
    if ((byte)LogTraceServices._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    return;
  }
  if ((param_3 == (wchar_t *)0x0) || (*param_3 == L'\0')) {
    this->NumErrors = this->NumErrors + 1;
    if ((this->NumErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    param_3 = L"Unknown";
  }
  uVar13 = local_2e0[0];
  iVar12 = wcscmp(param_3,L"CustomName");
  if (iVar12 == 0) {
    this->CustomNameTag = uVar13;
  }
  if ((this->CustomNameTag != 0xffffffff) && (local_2e8 = param_2, param_2 == this->CustomNameTag))
  {
    param_2 = 0xffffffff;
    local_2e8 = param_2;
  }
  puVar27 = (undefined8 *)0x0;
  uVar21 = 0;
  uVar30 = 0;
  if (*(int *)&(this->TagMap).field_0x8 != *(int *)&(this->TagMap).field_0x34) {
    puVar24 = *(undefined1 **)&(this->TagMap).field_0x40;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = &(this->TagMap).field_0x38;
    }
    iVar12 = *(int *)(puVar24 + (ulonglong)(*(int *)&(this->TagMap).field_0x48 - 1U & uVar13) * 4);
    if (iVar12 != -1) {
      do {
        lVar25 = *(longlong *)&this->TagMap + (longlong)iVar12 * 0x28;
        if (*(uint *)(*(longlong *)&this->TagMap + (longlong)iVar12 * 0x28) == uVar13) {
          puVar26 = (undefined8 *)(lVar25 + 8);
          if (lVar25 == 0) {
            puVar26 = puVar27;
          }
          param_2 = local_2e8;
          if (puVar26 != (undefined8 *)0x0) {
            local_2a8 = param_3;
            if (param_3 != (wchar_t *)0x0) {
              sVar16 = wcslen(param_3);
              uVar21 = (uint)sVar16;
            }
            local_1c8._12_4_ = uStack_29c;
            local_1c8.Size = uVar21;
            local_1c8.DataPtr = local_2a8;
            uStack_2a0 = uVar21;
            iVar12 = UE::String::FindLastChar(&local_1c8,L'/',CaseSensitive);
            pwVar29 = param_3;
            if (iVar12 != -1) {
              uVar20 = (uVar21 - iVar12) - 1;
              uVar13 = uVar21;
              if ((int)uVar20 < (int)uVar21) {
                uVar13 = uVar20;
              }
              lVar22 = (longlong)(int)uVar21;
              uVar21 = uVar30;
              if (0 < (int)uVar13) {
                uVar21 = uVar13;
              }
              pwVar29 = param_3 + (lVar22 - (int)uVar21);
              local_2a8 = pwVar29;
            }
            puVar15 = (uint *)(lVar25 + 0x18);
            if (lVar25 == 0) {
              puVar15 = (uint *)&DAT_00000010;
            }
            local_308 = param_3;
            if (local_2e8 == *puVar15) {
              _Str2 = (wchar_t *)*puVar26;
              if (uVar21 == 0) {
                wVar4 = *_Str2;
              }
              else {
                iVar12 = wcsncmp(pwVar29,_Str2,(longlong)(int)uVar21);
                if (iVar12 != 0) goto LAB_14d3d4201;
                wVar4 = _Str2[(int)uVar21];
              }
              if (wVar4 == L'\0') {
                this->NumWarnings = this->NumWarnings + 1;
                if (100 < this->NumWarnings) {
                  return;
                }
                if ((byte)LogTraceServices._0_1_ < 3) {
                  return;
                }
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
                return;
              }
            }
LAB_14d3d4201:
            this->NumErrors = this->NumErrors + 1;
            if (100 < this->NumErrors) {
              return;
            }
            if ((byte)LogTraceServices._0_1_ < 2) {
              return;
            }
            local_2f8 = *puVar26;
            puVar23 = (undefined4 *)(lVar25 + 0x18);
            if (lVar25 == 0) {
              puVar23 = (undefined4 *)&DAT_00000010;
            }
            local_300 = *puVar23;
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u__MemAlloc__Tag__152b10078,
                       (FLogCategoryBase *)&LogTraceServices);
            return;
          }
          break;
        }
        iVar12 = *(int *)(lVar25 + 0x20);
      } while (iVar12 != -1);
    }
  }
  uStack_2c0 = uVar30;
  local_2c8 = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar16 = wcslen(param_3);
    uStack_2c0 = (uint)sVar16;
  }
  local_1b8._12_4_ = uStack_2bc;
  local_1b8.Size = uStack_2c0;
  local_1b8.DataPtr = local_2c8;
  iVar12 = UE::String::FindLastChar(&local_1b8,L'/',CaseSensitive);
  pIVar5 = this->Session;
  uVar13 = 0;
  if (iVar12 == -1) {
    local_2b8 = (**(code **)((longlong)*pIVar5 + 200))(pIVar5,&local_2c8);
    local_198._12_4_ = uStack_2bc;
    local_198.Size = uStack_2c0;
    local_178.Base = local_158;
    local_178.bIsDynamic = false;
    local_178.bIsExternal = false;
    local_178.CurPos = local_158;
    local_198.DataPtr = local_2c8;
    local_178.End = (wchar_t *)local_58;
    BuildTagPath(this,&local_178,&local_198,param_2);
    local_1f0 = local_178.Base;
    local_1e8 = (undefined4)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1);
    local_2b0 = (FScriptContainerElement *)
                (**(code **)((longlong)*this->Session + 200))(this->Session,&local_1f0);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  }
  else {
    lVar25 = (longlong)(int)uStack_2c0;
    uVar21 = (uStack_2c0 - iVar12) - 1;
    if ((int)uVar21 < (int)uStack_2c0) {
      uStack_2c0 = uVar21;
    }
    puVar26 = puVar27;
    if (0 < (int)uStack_2c0) {
      puVar26 = (undefined8 *)(ulonglong)uStack_2c0;
    }
    uStack_2c0 = (uint)puVar26;
    local_2c8 = local_2c8 + (lVar25 - (int)uStack_2c0);
    uStack_2bc = uStack_29c;
    local_2a8 = local_2c8;
    uStack_2a0 = uStack_2c0;
    local_2b8 = (**(code **)((longlong)*pIVar5 + 200))(pIVar5,&local_2c8);
    local_2b0 = (FScriptContainerElement *)
                (**(code **)((longlong)*this->Session + 0xd0))(this->Session,param_3);
    if (param_2 == 0xffffffff) {
      local_200.DataPtr = param_3;
      if (param_3 != (wchar_t *)0x0) {
        sVar16 = wcslen(param_3);
        uVar30 = (uint)sVar16;
      }
      local_200.Size = uVar30;
      pTVar17 = FPathViews::GetPath(&local_188,&local_200);
      FPathViews::GetPathLeaf((TStringView<wchar_t> *)(local_298 + 8),pTVar17);
      local_270 = &(this->TagMap).field_0x10;
      uVar21 = *(uint *)&(this->TagMap).field_0x28;
      local_280 = &this->TagMap;
      uStack_274 = 1;
      uStack_264 = uVar13;
      uStack_278 = uVar13;
      local_260 = uVar13;
      if (uVar21 != 0) {
        puVar15 = *(uint **)&(this->TagMap).field_0x20;
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)local_270;
        }
        uVar30 = *puVar15;
        puVar26 = puVar27;
        local_260 = 0;
        uStack_278 = 0;
        while (uVar30 == 0) {
          iVar12 = (int)puVar27;
          local_260 = (int)puVar26 + 0x20;
          puVar26 = (undefined8 *)(ulonglong)local_260;
          uStack_278 = iVar12 + 1;
          puVar27 = (undefined8 *)(ulonglong)uStack_278;
          uStack_264 = uVar21;
          if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_278)
          goto LAB_14d3d43cf;
          uVar30 = puVar15[(longlong)iVar12 + 1];
        }
        uStack_274 = -uVar30 & uVar30;
        uVar3 = (ulonglong)uStack_274 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_250 = (int)lVar25;
        uStack_264 = (local_260 - 1) + local_250;
        if ((int)uVar21 < (int)uStack_264) {
          uStack_264 = uVar21;
        }
      }
LAB_14d3d43cf:
      iStack_258 = *(int *)&(this->TagMap).field_0x8 - *(int *)&(this->TagMap).field_0x34;
      uVar21 = *(uint *)&(this->TagMap).field_0x28;
      uStack_268 = 0xffffffff;
      TStack_240.CurrentBitIndex = uStack_264;
      TStack_240.UnvisitedBitMask = 0xffffffff;
      puVar24 = &(this->TagMap).field_0x10;
      TStack_240._padding_ = CONCAT44(uStack_274,uStack_278);
      uVar30 = uVar21 & 0xffffffe0;
      iVar12 = (int)uVar21 >> 5;
      TStack_240._28_4_ = uStack_264;
      TStack_240.BaseBitIndex = local_260;
      uStack_220 = CONCAT44(uStack_254,iStack_258);
      uStack_25c = uStack_264;
      local_248 = local_280;
      TStack_240.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_270;
      if (((int)uVar21 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar20 = *(uint *)&(this->TagMap).field_0x28;
      if (uVar21 != uVar20) {
        puVar6 = *(undefined1 **)&(this->TagMap).field_0x20;
        puVar28 = puVar24;
        if (puVar6 != (undefined1 *)0x0) {
          puVar28 = puVar6;
        }
        uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar12 * 4);
        while (uVar21 == 0) {
          lVar25 = (longlong)iVar12;
          uVar30 = uVar30 + 0x20;
          iVar12 = iVar12 + 1;
          uVar21 = uVar20;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14d3d44cc;
          uVar21 = *(uint *)(puVar28 + lVar25 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        uVar21 = (int)lVar25 + -1 + uVar30;
        if ((int)uVar20 < (int)uVar21) {
          uVar21 = uVar20;
        }
      }
LAB_14d3d44cc:
      do {
        pTVar10 = local_248;
        if (*(int *)&local_248->field_0x8 - *(int *)&local_248->field_0x34 != (int)uStack_220) {
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTagTracker::FTagEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
        }
        lVar25 = (longlong)TStack_240.CurrentBitIndex;
        if (((TStack_240.CurrentBitIndex == uVar21) &&
            (TStack_240.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar24)) &&
           (pTVar10 == &this->TagMap)) goto LAB_14d3d457b;
        lVar22 = *(longlong *)pTVar10;
        local_208 = *(undefined8 *)(lVar22 + 0x18 + lVar25 * 0x28);
        param_2 = *(uint *)(lVar22 + lVar25 * 0x28);
        pwVar29 = *(wchar_t **)(lVar22 + 8 + lVar25 * 0x28);
        if (local_288 == 0) {
          wVar4 = *pwVar29;
LAB_14d3d454c:
          if (wVar4 == L'\0') goto LAB_14d3d4564;
        }
        else {
          iVar12 = wcsncmp((wchar_t *)local_298._8_8_,pwVar29,(longlong)local_288);
          if (iVar12 == 0) {
            wVar4 = pwVar29[local_288];
            goto LAB_14d3d454c;
          }
        }
        TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
      } while( true );
    }
  }
LAB_14d3d46d3:
  local_218 = local_2b8;
  local_210 = local_2b0;
  local_1e0 = local_2e0;
  local_208 = CONCAT44(local_208._4_4_,param_2);
  local_1d8 = &local_218;
  TSet<TTuple<unsigned_int,TraceServices::FTagTracker::FTagEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,TraceServices::FTagTracker::FTagEntry_&&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FTagTracker::FTagEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>,FDefaultSetAllocator>
              *)&this->TagMap,
             (TPairInitializer<unsigned_int_&,TraceServices::FTagTracker::FTagEntry_&&> *)local_298,
             (bool *)&local_1e0);
  iVar12 = (this->PendingTags).ArrayNum;
  pFVar31 = (this->PendingTags).AllocatorInstance.Data;
  local_2b8 = *(longlong *)&this->TagMap + ((longlong)(int)local_298._0_4_ * 5 + 1) * 8;
  local_2b0 = pFVar31 + (longlong)iVar12 * 0x18;
  while( true ) {
    pFVar2 = local_2b0;
    if ((this->PendingTags).ArrayNum != iVar12) {
      `TCheckedPointerIterator<TTuple<unsigned_int,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2d7);
    }
    uVar21 = uStack_2c0;
    if (pFVar31 == pFVar2) break;
    uVar30 = *(uint *)pFVar31;
    uVar20 = *(uint *)(pFVar31 + 0x10) - 1;
    if (*(uint *)(pFVar31 + 0x10) == 0) {
      uVar20 = uVar13;
    }
    if ((uStack_2c0 == uVar20) &&
       ((((uStack_2c0 == 0 || (uVar20 == 0)) ||
         (iVar14 = wcsncmp(local_2c8,*(wchar_t **)(pFVar31 + 8),(longlong)(int)uVar20), iVar14 == 0)
         ) && (uVar9 = local_2e0[0], uVar21 == uVar20)))) {
      pFVar19 = TMapBase<unsigned_int,TraceServices::FTagTracker::FTagEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>_>
                ::FindChecked((TMapBase<unsigned_int,TraceServices::FTagTracker::FTagEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>_>
                               *)&this->TagMap,uVar30);
      pFVar19->ParentTag = uVar9;
    }
    pFVar31 = pFVar31 + 0x18;
  }
  if (5 < (byte)LogTraceServices._0_1_) {
    local_300 = local_2e8;
    local_308 = (wchar_t *)CONCAT44(local_308._4_4_,local_2e0[0]);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return;
LAB_14d3d4564:
  local_2e8 = param_2;
  if (param_2 == 0xffffffff) {
LAB_14d3d457b:
    param_2 = local_2e8;
    iVar12 = (this->PendingTags).ArrayNum;
    piVar1 = &(this->PendingTags).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&(this->PendingTags).AllocatorInstance,piVar1);
    }
    (this->PendingTags).ArrayNum = iVar12 + 1;
    pFVar2 = (this->PendingTags).AllocatorInstance.Data + (longlong)iVar12 * 0x18;
    *(uint *)pFVar2 = local_2e0[0];
    pFVar31 = pFVar2 + 8;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar31->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)(pFVar2 + 0x10) = 0;
    pFVar18 = (FScriptContainerElement *)
              ::FString::ConstructFromPtrSize(&local_1a8,(wchar_t *)local_298._8_8_,local_288);
    if (pFVar31 != pFVar18) {
      pFVar7 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar31->field_0x0)->
               AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar31->field_0x0)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(uint *)(pFVar2 + 0x10) = *(uint *)&pFVar18[8].field_0x0;
      *(uint *)(pFVar2 + 0x14) = *(uint *)&pFVar18[0xc].field_0x0;
      *(undefined8 *)&pFVar18[8].field_0x0 = 0;
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  goto LAB_14d3d46d3;
}

// BuildTagPath @ 14d3d5d60

void __thiscall
TraceServices::FTagTracker::BuildTagPath
          (FTagTracker *this,TStringBuilderBase<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          uint param_3)

{
  longlong lVar1;
  uint uVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  int iVar8;
  undefined1 *puVar9;
  TStringView<wchar_t> local_28 [2];
  
  if (*(int *)&(this->TagMap).field_0x8 != *(int *)&(this->TagMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->TagMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->TagMap).field_0x38;
    }
    iVar8 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->TagMap).field_0x48 - 1U & param_3) * 4);
    if (iVar8 != -1) {
      do {
        lVar1 = *(longlong *)&this->TagMap + (longlong)iVar8 * 0x28;
        if (*(uint *)(*(longlong *)&this->TagMap + (longlong)iVar8 * 0x28) == param_3) {
          iVar8 = 0;
          puVar5 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          if (puVar5 != (undefined8 *)0x0) {
            uVar2 = *(uint *)(puVar5 + 2);
            local_28[0].DataPtr = (wchar_t *)*puVar5;
            if (local_28[0].DataPtr != (wchar_t *)0x0) {
              sVar3 = wcslen(local_28[0].DataPtr);
              iVar8 = (int)sVar3;
            }
            local_28[0].Size = iVar8;
            BuildTagPath(this,param_1,local_28,uVar2);
            pwVar6 = param_1->CurPos;
            if (param_1->End < pwVar6 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
              pwVar6 = param_1->CurPos;
            }
            pvVar4 = FGenericPlatformString::Memcpy(pwVar6,&u__,2);
            param_1->CurPos = (wchar_t *)((longlong)pvVar4 + 2);
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x20);
      } while (iVar8 != -1);
    }
  }
  pwVar6 = param_2->DataPtr;
  iVar8 = (int)*(undefined8 *)&param_2->Size;
  uVar7 = (ulong64)iVar8;
  if (param_1->End < param_1->CurPos + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(param_1,uVar7);
  }
  if (iVar8 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(param_1->CurPos,pwVar6,uVar7 * 2);
    param_1->CurPos = (wchar_t *)((longlong)pvVar4 + uVar7 * 2);
  }
  return;
}

// EnumerateTags @ 14d3dcd60

void __thiscall
TraceServices::FTagTracker::EnumerateTags
          (FTagTracker *this,
          TFunctionRef<void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int)>
          *param_1)

{
  undefined1 *puVar1;
  TMap<unsigned_int,TraceServices::FTagTracker::FTagEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>_>
  *pTVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TMap<unsigned_int,TraceServices::FTagTracker::FTagEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined8 local_78;
  TMap<unsigned_int,TraceServices::FTagTracker::FTagEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar14 = 0;
  puVar1 = &(this->TagMap).field_0x10;
  iVar5 = *(int *)&(this->TagMap).field_0x28;
  pTVar2 = &this->TagMap;
  uVar9 = 1;
  iVar16 = 0;
  iVar10 = 0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->TagMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d3dce0d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar4 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = (int)lVar11 + -1 + iVar16;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_14d3dce0d:
  uVar13 = *(uint *)&(this->TagMap).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar9,iVar14);
  TStack_68.CurrentBitIndex = iVar10;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar10;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_8c,
                       *(int *)&(this->TagMap).field_0x8 - *(int *)&(this->TagMap).field_0x34);
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)&(this->TagMap).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->TagMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d3dcf10;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_14d3dcf10:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTagTracker::FTagEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar11 = *(longlong *)pTVar7;
    puVar3 = (undefined4 *)(lVar11 + (longlong)TStack_68.CurrentBitIndex * 0x28);
    local_res18[0] = *(undefined4 *)(lVar11 + 0x18 + (longlong)TStack_68.CurrentBitIndex * 0x28);
    local_res20[0] = *puVar3;
    local_80 = *(undefined8 *)(puVar3 + 4);
    local_78 = *(undefined8 *)(puVar3 + 2);
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,&local_78,&local_80,local_res20,local_res18);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GetCurrentTag @ 14d3e0570

uint __thiscall
TraceServices::FTagTracker::GetCurrentTag(FTagTracker *this,uint param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar7 = (uint)param_2 << 0x18 | param_1 & 0xffffff;
  if (*(int *)&(this->TrackerThreadStates).field_0x8 !=
      *(int *)&(this->TrackerThreadStates).field_0x34) {
    puVar5 = *(undefined1 **)&(this->TrackerThreadStates).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->TrackerThreadStates).field_0x38;
    }
    uVar3 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->TrackerThreadStates).field_0x48 - 1U & uVar7) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->TrackerThreadStates);
        if (*puVar4 == uVar7) {
          puVar6 = puVar4 + 2;
          if (puVar4 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 == (uint *)0x0) {
            return 0;
          }
          uVar7 = puVar6[2];
          if (uVar7 == 0) {
            return 0;
          }
          uVar3 = 0;
          if ((int)(uVar7 - 1) < (int)uVar7) {
            uVar3 = ~(uVar7 - 1) >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar7 = (*pcVar1)();
            return uVar7;
          }
          return *(uint *)(*(longlong *)puVar6 + -8 + (longlong)(int)puVar6[2] * 8);
        }
        uVar3 = puVar4[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  return 0;
}

// GetTagFullPath @ 14d3e2d10

wchar_t * __thiscall TraceServices::FTagTracker::GetTagFullPath(FTagTracker *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->TagMap).field_0x8 != *(int *)&(this->TagMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TagMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TagMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->TagMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->TagMap + (longlong)iVar2 * 0x28;
        if (*(uint *)(*(longlong *)&this->TagMap + (longlong)iVar2 * 0x28) == param_1) {
          lVar3 = lVar1 + 8;
          if (lVar1 == 0) {
            lVar3 = 0;
          }
          if (lVar3 == 0) {
            return L"Unknown";
          }
          return *(wchar_t **)(lVar3 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return L"Unknown";
}

// GetTagString @ 14d3e2e40

wchar_t * __thiscall TraceServices::FTagTracker::GetTagString(FTagTracker *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->TagMap).field_0x8 != *(int *)&(this->TagMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TagMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TagMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->TagMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->TagMap + (longlong)iVar2 * 0x28;
        if (*(uint *)(*(longlong *)&this->TagMap + (longlong)iVar2 * 0x28) == param_1) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return L"Unknown";
          }
          return (wchar_t *)*puVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return L"Unknown";
}

// HasTagFromPtrScope @ 14d3e67f0

bool __thiscall
TraceServices::FTagTracker::HasTagFromPtrScope(FTagTracker *this,uint param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar8 = (uint)param_2 << 0x18 | param_1 & 0xffffff;
  if (*(int *)&(this->TrackerThreadStates).field_0x8 !=
      *(int *)&(this->TrackerThreadStates).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TrackerThreadStates).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TrackerThreadStates).field_0x38;
    }
    uVar5 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->TrackerThreadStates).field_0x48 - 1U & uVar8) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)&this->TrackerThreadStates);
        if (*puVar4 == uVar8) {
          puVar7 = puVar4 + 2;
          if (puVar4 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 == (uint *)0x0) {
            return false;
          }
          uVar8 = puVar7[2];
          if ((int)uVar8 < 1) {
            return false;
          }
          uVar5 = 0;
          if ((int)(uVar8 - 1) < (int)uVar8) {
            uVar5 = ~(uVar8 - 1) >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if ((*(byte *)(*(longlong *)puVar7 + -4 + (longlong)(int)puVar7[2] * 8) & 1) == 0) {
            return false;
          }
          return true;
        }
        uVar5 = puVar4[6];
      } while (uVar5 != 0xffffffff);
    }
  }
  return false;
}

// PopTag @ 14d3fb570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FTagTracker::PopTag(FTagTracker *this,uint param_1,uchar param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  ForAnyElementType *pFVar7;
  uint uVar8;
  
  uVar8 = (uint)param_2 << 0x18 | param_1 & 0xffffff;
  if (*(int *)&(this->TrackerThreadStates).field_0x8 !=
      *(int *)&(this->TrackerThreadStates).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TrackerThreadStates).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TrackerThreadStates).field_0x38;
    }
    uVar4 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->TrackerThreadStates).field_0x48 - 1U & uVar8) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this->TrackerThreadStates);
        if (*puVar5 == uVar8) {
          pFVar7 = (ForAnyElementType *)(puVar5 + 2);
          if (puVar5 == (uint *)0x0) {
            pFVar7 = (ForAnyElementType *)0x0;
          }
          if (pFVar7 != (ForAnyElementType *)0x0) {
            if (*(int *)&pFVar7[1].Data != 0) {
              if (*(int *)&pFVar7[1].Data < 1) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              uVar8 = *(int *)&pFVar7[1].Data - 1;
              iVar1 = ~uVar8 + *(int *)&pFVar7[1].Data;
              if (iVar1 != 0) {
                memmove(pFVar7->Data + (longlong)(int)uVar8 * 8,
                        pFVar7->Data + (longlong)(int)uVar8 * 8 + 8,(longlong)iVar1 << 3);
              }
              *(int *)&pFVar7[1].Data = *(int *)&pFVar7[1].Data + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,pFVar7,*(int *)&pFVar7[1].Data,(int *)((longlong)&pFVar7[1].Data + 4));
              return;
            }
          }
          break;
        }
        uVar4 = puVar5[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  this->NumErrors = this->NumErrors + 1;
  if ((this->NumErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    return;
  }
  return;
}

// PopTagFromPtr @ 14d3fb6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTagTracker::PopTagFromPtr(FTagTracker *this,uint param_1,uchar param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  ForAnyElementType *pFVar7;
  uint uVar8;
  
  uVar8 = (uint)param_2 << 0x18 | param_1 & 0xffffff;
  if (*(int *)&(this->TrackerThreadStates).field_0x8 !=
      *(int *)&(this->TrackerThreadStates).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TrackerThreadStates).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TrackerThreadStates).field_0x38;
    }
    uVar4 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->TrackerThreadStates).field_0x48 - 1U & uVar8) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this->TrackerThreadStates);
        if (*puVar5 == uVar8) {
          pFVar7 = (ForAnyElementType *)(puVar5 + 2);
          if (puVar5 == (uint *)0x0) {
            pFVar7 = (ForAnyElementType *)0x0;
          }
          if (pFVar7 != (ForAnyElementType *)0x0) {
            if (*(int *)&pFVar7[1].Data != 0) {
              if (*(int *)&pFVar7[1].Data < 1) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              uVar8 = *(int *)&pFVar7[1].Data - 1;
              iVar1 = ~uVar8 + *(int *)&pFVar7[1].Data;
              if (iVar1 != 0) {
                memmove(pFVar7->Data + (longlong)(int)uVar8 * 8,
                        pFVar7->Data + (longlong)(int)uVar8 * 8 + 8,(longlong)iVar1 << 3);
              }
              *(int *)&pFVar7[1].Data = *(int *)&pFVar7[1].Data + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,pFVar7,*(int *)&pFVar7[1].Data,(int *)((longlong)&pFVar7[1].Data + 4));
              return;
            }
          }
          break;
        }
        uVar4 = puVar5[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  this->NumErrors = this->NumErrors + 1;
  if ((this->NumErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    return;
  }
  return;
}

// PushTag @ 14d3fcb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTagTracker::PushTag(FTagTracker *this,uint param_1,uchar param_2,uint param_3)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint *local_res8;
  int local_res10 [2];
  uint local_res18 [4];
  uint local_38;
  undefined4 uStack_34;
  
  local_res18[0] = (uint)param_2 << 0x18 | param_1 & 0xffffff;
  if (*(int *)&(this->TrackerThreadStates).field_0x8 !=
      *(int *)&(this->TrackerThreadStates).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TrackerThreadStates).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TrackerThreadStates).field_0x38;
    }
    uVar4 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->TrackerThreadStates).field_0x48 - 1U &
                               local_res18[0]) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this->TrackerThreadStates);
        if (*puVar5 == local_res18[0]) {
          if (puVar5 != (uint *)0x0) goto LAB_14d3fcbc0;
          break;
        }
        uVar4 = puVar5[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_res8 = local_res18;
  TSet<TTuple<unsigned_int,TraceServices::FTagTracker::FThreadState>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FThreadState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FTagTracker::FThreadState>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FThreadState,0>,FDefaultSetAllocator>
              *)&this->TrackerThreadStates,(uint)local_res10,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res18[0],(bool *)&local_res8)
  ;
  puVar5 = (uint *)((longlong)local_res10[0] * 0x20 + *(longlong *)&this->TrackerThreadStates);
LAB_14d3fcbc0:
  pFVar1 = (ForAnyElementType *)(puVar5 + 2);
  if (((param_3 == 0xffffffff) && (this->NumErrors = this->NumErrors + 1, this->NumErrors < 0x65))
     && (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  uStack_34 = 0;
  local_38 = param_3;
  if (((pFVar1->Data <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar1->Data + (longlong)(int)puVar5[5] * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = puVar5[4];
  if (uVar4 == puVar5[5]) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar1,(int *)(puVar5 + 5));
  }
  puVar5[4] = uVar4 + 1;
  *(ulonglong *)(pFVar1->Data + (longlong)(int)uVar4 * 8) = CONCAT44(uStack_34,local_38);
  return;
}

// PushTagFromPtr @ 14d3fccb0

void __thiscall
TraceServices::FTagTracker::PushTagFromPtr
          (FTagTracker *this,uint param_1,uchar param_2,uint param_3)

{
  TMap<unsigned_int,TraceServices::FTagTracker::FThreadState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FThreadState,0>_>
  *this_00;
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint *local_res8;
  int local_res10 [2];
  uint local_res18 [2];
  uint local_18;
  undefined4 uStack_14;
  
  this_00 = &this->TrackerThreadStates;
  local_res18[0] = (uint)param_2 << 0x18 | param_1 & 0xffffff;
  if (*(int *)&(this->TrackerThreadStates).field_0x8 !=
      *(int *)&(this->TrackerThreadStates).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TrackerThreadStates).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TrackerThreadStates).field_0x38;
    }
    uVar4 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->TrackerThreadStates).field_0x48 - 1U &
                               local_res18[0]) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this_00->field_0x0);
        if (*puVar5 == local_res18[0]) {
          if (puVar5 != (uint *)0x0) goto LAB_14d3fcd62;
          break;
        }
        uVar4 = puVar5[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_res8 = local_res18;
  TSet<TTuple<unsigned_int,TraceServices::FTagTracker::FThreadState>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FThreadState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FTagTracker::FThreadState>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FThreadState,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res10,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res18[0],(bool *)&local_res8)
  ;
  puVar5 = (uint *)((longlong)local_res10[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_14d3fcd62:
  pFVar1 = (ForAnyElementType *)(puVar5 + 2);
  uStack_14 = 1;
  local_18 = param_3;
  if (((pFVar1->Data <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar1->Data + (longlong)(int)puVar5[5] * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = puVar5[4];
  if (uVar4 == puVar5[5]) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar1,(int *)(puVar5 + 5));
  }
  puVar5[4] = uVar4 + 1;
  *(ulonglong *)(pFVar1->Data + (longlong)(int)uVar4 * 8) = CONCAT44(uStack_14,local_18);
  return;
}

