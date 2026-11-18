// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationDataCore
// Functions: 7

// IGlobalConfigurationRouter @ 14e9b7490

/* WARNING: Enum "Type": Some values do not have unique names */

IGlobalConfigurationRouter * __thiscall
IGlobalConfigurationRouter::IGlobalConfigurationRouter
          (IGlobalConfigurationRouter *this,FString *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  IGlobalConfigurationRouter *pIVar3;
  longlong lVar4;
  FIdentityFunctor local_res18 [16];
  IGlobalConfigurationRouter *local_18 [2];
  
  this->_padding_ = (longlong)&___7IGlobalConfigurationRouter__6B_;
  (this->RouterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RouterName).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RouterName).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->RouterName).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  this->Priority = param_2;
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                         ,0x34,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IGlobalConfigurationRouter *)(*pcVar1)();
    return pIVar3;
  }
  local_18[0] = this;
  if (((IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data <=
        (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data +
       (longlong)IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayMax * 8)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IGlobalConfigurationRouter *)(*pcVar1)();
    return pIVar3;
  }
  if (IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum ==
      IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayMax) {
    IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance,
                    &IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayMax);
  }
  lVar4 = (longlong)IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum;
  IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum =
       IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum + 1;
  *(IGlobalConfigurationRouter **)
   (IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data + lVar4 * 8) =
       local_18[0];
  AlgoImpl::
  IntroSortInternal<IGlobalConfigurationRouter_const_*,int,FIdentityFunctor,TDereferenceWrapper<IGlobalConfigurationRouter_const_*,_IGlobalConfigurationRouter::IGlobalConfigurationRouter_::__l2::<lambda_1>_>_>
            ((IGlobalConfigurationRouter **)
             IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data,
             IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum,local_res18[0],
             (<lambda_1> *)local_res18);
  if (5 < (byte)LogGlobalConfigurationData._0_1_) {
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_&>
              ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static,&this->RouterName);
  }
  return this;
}

// ~IGlobalConfigurationRouter @ 14e9b77d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IGlobalConfigurationRouter::~IGlobalConfigurationRouter(IGlobalConfigurationRouter *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  longlong lVar5;
  IGlobalConfigurationRouter *pIVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  IGlobalConfigurationRouter *local_38 [2];
  
  this->_padding_ = (longlong)&___7IGlobalConfigurationRouter__6B_;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                         ,0x41,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38[0] = this;
  if (((IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data <=
        (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data +
       (longlong)IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar3.Data = IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data;
  lVar5 = (longlong)IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum;
  iVar10 = IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum;
  if (IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum != 0) {
    iVar10 = 0;
    bVar4 = *(IGlobalConfigurationRouter **)
             IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data !=
            local_38[0];
    lVar7 = 0;
    pIVar6 = local_38[0];
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (lVar5 <= lVar7) break;
      } while (bVar4 == (*(IGlobalConfigurationRouter **)(FVar3.Data + lVar7 * 8) != pIVar6));
      if (bVar4 != false) {
        if (iVar10 != iVar8) {
          memmove(FVar3.Data + (longlong)iVar10 * 8,FVar3.Data + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
          pIVar6 = local_38[0];
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < lVar5);
  }
  IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum = iVar10;
  if (5 < (byte)LogGlobalConfigurationData._0_1_) {
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_&>
              ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static,&this->RouterName);
  }
  pFVar1 = (this->RouterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetAllRegisteredData @ 14e9b8560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
IGlobalConfigurationRouter::GetAllRegisteredData
          (TMap<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>_>
           *param_1)

{
  FString *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  FJsonValue *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178;
  undefined1 local_177 [3];
  int local_174;
  uint local_170;
  FScriptContainerElement *local_168;
  TSharedRef<FJsonValue,1> local_160;
  FScriptContainerElement *local_150;
  TReferenceControllerBase<1> *local_148;
  int local_140;
  int local_13c;
  TPairInitializer<FString_const_&,TSharedRef<FJsonValue,1>_const_&> local_138;
  FScriptContainerElement *local_128;
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
  longlong *local_c0;
  FScriptContainerElement **local_b8;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                         ,0x7b,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_170 = IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum;
  uVar10 = IGlobalConfigurationRouter_Private::RegisteredRouters._8_8_ & 0xffffffff;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_128 = IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data +
              (longlong)(int)local_170 * 8;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  FVar12.Data = IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data;
  do {
    pFVar5 = local_128;
    uVar14 = 0;
    local_168 = FVar12.Data;
    if (IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum != (int)uVar10) {
      local_178 = 0;
      `TCheckedPointerIterator<IGlobalConfigurationRouter_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_178);
    }
    if (FVar12.Data == pFVar5) {
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return;
    }
    plVar2 = *(longlong **)FVar12.Data;
    bVar7 = 1 < local_40;
    if (!bVar7) {
      TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
                        *)local_88);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    bVar17 = local_88._12_4_ != 0;
    local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
    if (bVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (bVar7) {
      local_40 = 1;
      TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
                *)local_88);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,local_88);
    uVar16 = local_60;
    uStack_114 = 1;
    uStack_104 = uVar14;
    local_100 = uVar14;
    if (local_60 != 0) {
      puVar15 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar15 = local_68;
      }
      uVar13 = *puVar15;
      while (uVar13 == 0) {
        lVar9 = (longlong)(int)uVar14;
        local_100 = local_100 + 0x20;
        uVar14 = uVar14 + 1;
        uStack_104 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_14e9b8752;
        uVar13 = (puVar15 + 1)[lVar9];
      }
      uStack_114 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_114 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_140 = (int)lVar9;
      uStack_104 = (local_100 - 1) + local_140;
      if ((int)local_60 < (int)uStack_104) {
        uStack_104 = local_60;
      }
    }
LAB_14e9b8752:
    local_120 = (longlong *)local_88;
    uStack_fc = local_94;
    local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uVar13 = local_60 & 0xffffffe0;
    iStack_f8 = local_88._8_4_ - local_54;
    TStack_e8._padding_ = CONCAT44(uStack_114,uVar14);
    uStack_108 = 0xffffffff;
    TStack_e8.CurrentBitIndex = uStack_104;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)local_60 >> 5;
    TStack_e8._28_4_ = local_94;
    TStack_e8.BaseBitIndex = local_100;
    uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
    bVar8 = (byte)local_60;
    uStack_118 = uVar14;
    local_f0 = local_120;
    TStack_e8.Array = local_110;
    if (((int)local_60 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar16 != local_60) {
      puVar15 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar15 = local_68;
      }
      uVar14 = -1 << (bVar8 & 0x1f) & puVar15[iVar11];
      while (uVar14 == 0) {
        lVar9 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14e9b8860;
        uVar14 = (puVar15 + 1)[lVar9];
      }
      uVar10 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_13c = (int)lVar9;
      uVar16 = local_13c + -1 + uVar13;
      if ((int)local_60 < (int)uVar16) {
        uVar16 = local_60;
      }
    }
LAB_14e9b8860:
    while( true ) {
      plVar6 = local_f0;
      if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
        local_177[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_177);
      }
      if (((TStack_e8.CurrentBitIndex == uVar16) &&
          (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar6 == (longlong *)local_88)) break;
      pFVar1 = (FString *)(*plVar6 + (longlong)TStack_e8.CurrentBitIndex * 0x28);
      ::FString::FString((FString *)&local_160,pFVar1);
      local_150 = pFVar1[1].Data.AllocatorInstance.Data;
      local_148 = *(TReferenceControllerBase<1> **)&pFVar1[1].Data.ArrayNum;
      if (local_148 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_148->SharedReferenceCount = (atomic<int>)((int)local_148->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar11 = (int)local_160.SharedReferenceCount.ReferenceController + -1;
      pFVar4 = local_160.Object;
      if ((int)local_160.SharedReferenceCount.ReferenceController == 0) {
        iVar11 = 0;
        pFVar4 = (FJsonValue *)L"";
      }
      uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)pFVar4);
      iVar11 = TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
                           *)param_1,uVar14,(FString *)&local_160);
      if ((iVar11 == -1) || (lVar9 = (longlong)iVar11 * 0x68 + *(longlong *)param_1, lVar9 == 0)) {
        local_138.Value = &local_160;
        TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
                    *)param_1,(uint)&local_174,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar14
                   ,(bool *)&local_138.Value);
        lVar9 = (longlong)local_174 * 0x68 + *(longlong *)param_1;
      }
      local_c0 = plVar2 + 1;
      local_b8 = &local_150;
      TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FJsonValue,1>_const_&>_>
                ((TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
                  *)(lVar9 + 0x10),&local_138,(bool *)&local_c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_148)
      ;
      if (local_160.Object != (FJsonValue *)0x0) {
        FMemory::Free(local_160.Object);
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
    FVar12.Data = local_168 + 8;
    uVar10 = (ulonglong)local_170;
  } while( true );
}

// GetAllowFlattenJsonObject @ 14e9b8a40

bool __cdecl IGlobalConfigurationRouter::GetAllowFlattenJsonObject(void)

{
  return IGlobalConfigurationRouter_Private::bAllowFlattenJsonObject;
}

// TryGetData @ 14e9b98d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FJsonValue,1> * __cdecl
IGlobalConfigurationRouter::TryGetData
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,FString *param_1)

{
  longlong *plVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<FJsonValue,1> *pTVar7;
  longlong *plVar8;
  FString *pFVar9;
  FString *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FJsonValue *pFVar14;
  ForAnyElementType FVar15;
  uint local_res18 [2];
  uint local_res20;
  FJsonValue *local_168;
  TReferenceControllerBase<1> *pTStack_160;
  FString local_158;
  FString local_148;
  FScriptContainerElement *local_138;
  FString local_130;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  TReferenceControllerBase<1> *pTStack_100;
  FJsonValue *local_f8;
  TReferenceControllerBase<1> *local_f0;
  TSharedPtr<FJsonValue,1> local_e8;
  TStringView<wchar_t> local_d8;
  TSharedPtr<FJsonValue,1> local_c8;
  FString local_b8;
  TSharedPtr<FJsonValue,1> local_a8;
  FString local_98;
  FString local_88;
  TSharedPtr<FJsonValue,1> local_78;
  FString local_68;
  TSharedPtr<FJsonValue,1> local_58;
  FString local_48;
  
  bVar4 = false;
  bVar3 = false;
  local_res18[0] = 0;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                         ,0x48,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
    return pTVar7;
  }
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  ::FString::FString(&local_130,L".");
  bVar5 = ::FString::Split(param_1,&local_130,&local_148,&local_158);
  pFVar10 = &local_148;
  if (!bVar5) {
    pFVar10 = param_1;
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if ((6 < (byte)LogGlobalConfigurationData._0_1_) && (1 < local_158.Data.ArrayNum)) {
    UE::Logging::Private::
    LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_&>
              ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static,pFVar10,&local_158);
  }
  local_res20 = IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum;
  uVar11 = IGlobalConfigurationRouter_Private::RegisteredRouters._8_8_ & 0xffffffff;
  local_138 = IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data +
              (longlong)(int)local_res20 * 8;
  pFVar12 = local_138;
  FVar15.Data = IGlobalConfigurationRouter_Private::RegisteredRouters.AllocatorInstance.Data;
  do {
    while( true ) {
      pFVar14 = (FJsonValue *)0x0;
      if (IGlobalConfigurationRouter_Private::RegisteredRouters.ArrayNum != (int)uVar11) {
        local_res18[0] = local_res18[0] & 0xffffff00;
        `TCheckedPointerIterator<IGlobalConfigurationRouter_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (FVar15.Data == pFVar12) {
        if (6 < (byte)LogGlobalConfigurationData._0_1_) {
          UE::Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&>
                    ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static,param_1);
        }
        __return_storage_ptr__->Object = (FJsonValue *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e9b9e00;
      }
      plVar1 = *(longlong **)FVar15.Data;
      (**(code **)(*plVar1 + 8))(plVar1,&local_168,pFVar10);
      if (local_168 != (FJsonValue *)0x0) break;
LAB_14e9b9c51:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_160);
      FVar15.Data = FVar15.Data + 8;
      uVar11 = (ulonglong)local_res20;
    }
    if (local_158.Data.ArrayNum < 2) {
      if (6 < (byte)LogGlobalConfigurationData._0_1_) {
        local_58.Object = local_168;
        local_58.SharedReferenceCount.ReferenceController = pTStack_160;
        if (pTStack_160 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_160->SharedReferenceCount =
               (atomic<int>)((int)pTStack_160->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar10 = TryPrintString(&local_48,&local_58);
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_const_&,FString>
                  ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static,param_1,
                   (FString *)(plVar1 + 1),pFVar10);
        local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
LAB_14e9b9d46:
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
LAB_14e9b9d55:
      __return_storage_ptr__->Object = local_168;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_160;
      pTStack_160 = (TReferenceControllerBase<1> *)0x0;
      local_168 = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_14e9b9e00;
    }
    if ((local_168 == (FJsonValue *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
      return pTVar7;
    }
    if (local_168->Type != Object) {
      if (IGlobalConfigurationRouter_Private::bAllowFlattenJsonObject == false) {
        if (2 < (byte)LogGlobalConfigurationData._0_1_) {
          local_a8.Object = local_168;
          local_a8.SharedReferenceCount.ReferenceController = pTStack_160;
          if (pTStack_160 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_160->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_160->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar9 = TryPrintString(&local_98,&local_a8);
          UE::Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_&,FString_const_&,FString>
                    ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static,pFVar10,
                     &local_158,(FString *)(plVar1 + 1),pFVar9);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14e9b9c51;
      }
      if (5 < (byte)LogGlobalConfigurationData._0_1_) {
        local_78.Object = local_168;
        local_78.SharedReferenceCount.ReferenceController = pTStack_160;
        if (pTStack_160 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_160->SharedReferenceCount =
               (atomic<int>)((int)pTStack_160->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar9 = TryPrintString(&local_68,&local_78);
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_&,FString_const_&,FString>
                  ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static,pFVar10,&local_158,
                   (FString *)(plVar1 + 1),pFVar9);
        goto LAB_14e9b9d46;
      }
      goto LAB_14e9b9d55;
    }
    plVar8 = (longlong *)(**(code **)local_168->_padding_)();
    if ((*plVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
      return pTVar7;
    }
    this = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)*plVar8;
    local_118 = local_158.Data.AllocatorInstance.Data;
    iStack_110 = local_158.Data.ArrayNum + -1;
    if (local_158.Data.ArrayNum == 0) {
      iStack_110 = 0;
    }
    local_d8._12_4_ = uStack_10c;
    local_d8.Size = iStack_110;
    local_d8.DataPtr = (wchar_t *)local_158.Data.AllocatorInstance.Data;
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>
                      (iStack_110,(wchar_t *)local_158.Data.AllocatorInstance.Data);
    pTVar7 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>(this,uVar6,&local_d8);
    if ((pTVar7 == (TSharedPtr<FJsonValue,1> *)0x0) ||
       (pFVar14 = pTVar7->Object, pFVar14 == (FJsonValue *)0x0)) {
      bVar3 = true;
      local_108 = 0;
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      pTStack_100 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar13 = (pTVar7->SharedReferenceCount).ReferenceController;
      bVar4 = true;
      local_f8 = pFVar14;
      local_f0 = pTVar13;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
    }
    if (bVar3) {
      bVar3 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_100);
    }
    if (bVar4) {
      bVar4 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
    }
    if (pFVar14 != (FJsonValue *)0x0) {
      if (6 < (byte)LogGlobalConfigurationData._0_1_) {
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_e8.Object = pFVar14;
        local_e8.SharedReferenceCount.ReferenceController = pTVar13;
        pFVar10 = TryPrintString(&local_88,&local_e8);
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_const_&,FString>
                  ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static,param_1,
                   (FString *)(plVar1 + 1),pFVar10);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      __return_storage_ptr__->Object = pFVar14;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_160);
LAB_14e9b9e00:
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (2 < (byte)LogGlobalConfigurationData._0_1_) {
      local_c8.Object = local_168;
      local_c8.SharedReferenceCount.ReferenceController = pTStack_160;
      if (pTStack_160 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_160->SharedReferenceCount =
             (atomic<int>)((int)pTStack_160->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9 = TryPrintString(&local_b8,&local_c8);
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_&,FString_const_&,FString>
                ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static,pFVar10,&local_158,
                 (FString *)(plVar1 + 1),pFVar9);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_160)
    ;
    FVar15.Data = FVar15.Data + 8;
    uVar11 = (ulonglong)local_res20;
    pFVar12 = local_138;
  } while( true );
}

// TryParseString @ 14e9ba150

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FJsonValue,1> * __cdecl
IGlobalConfigurationRouter::TryParseString
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  FString *pFVar5;
  TSharedRef<TJsonValueString<wchar_t>,1> *pTVar6;
  FStaticLogRecord *pFVar7;
  FString local_1b8;
  TSharedPtr<FJsonValue,1> local_1a8;
  StackState local_198;
  TJsonReader<wchar_t> local_158;
  FArchiveState local_e8;
  wchar_t *local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40;
  FString local_38;
  TSharedRef<TJsonValueString<wchar_t>,1> local_28;
  
  iVar1 = param_1->Size;
  if (iVar1 == 0) {
    __return_storage_ptr__->Object = (FJsonValue *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pwVar2 = param_1->DataPtr;
  local_158.Stream = (FArchive *)&local_e8;
  local_158._padding_ = (longlong)&___7FStackJsonReader_IGlobalConfigurationRouter_Private__6B_;
  local_158.NumberValue = 0.0;
  local_1a8.Object = (FJsonValue *)0x0;
  local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_158.ParseState.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ParseState.ArrayNum = 0;
  local_158.ParseState.ArrayMax = 0;
  local_158.CurrentToken = None;
  local_158.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Identifier.Data.ArrayNum = 0;
  local_158.Identifier.Data.ArrayMax = 0;
  local_158.ErrorMessage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ErrorMessage.Data.ArrayNum = 0;
  local_158.ErrorMessage.Data.ArrayMax = 0;
  local_158.StringValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.StringValue.Data.ArrayNum = 0;
  local_158.StringValue.Data.ArrayMax = 0;
  local_158.LineNumber = 1;
  local_158.CharacterNumber = 0;
  local_158.BoolValue = false;
  local_158.FinishedReadingRootObject = false;
  FArchiveState::FArchiveState(&local_e8);
  local_48 = (longlong)iVar1 * 2;
  local_50 = 0;
  local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
  local_40 = '\0';
  local_58 = pwVar2;
  FArchiveState::SetIsLoading(&local_e8,true);
  (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
  local_198.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Identifier.Data.ArrayNum = 0;
  local_198.Identifier.Data.ArrayMax = 0;
  local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
  local_198.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Array.ArrayNum = 0;
  local_198.Array.ArrayMax = 0;
  local_198.Object.Object = (FJsonObject *)0x0;
  local_198.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    (&local_158,&local_198,None);
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_198,&local_1a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_198.Array.AllocatorInstance.Data,
               local_198.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_198.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_198.Array.AllocatorInstance.Data);
    }
    if (local_198.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      __return_storage_ptr__->Object = local_1a8.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_1a8.SharedReferenceCount.ReferenceController;
      local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_1a8.Object = (FJsonValue *)0x0;
      goto LAB_14e9ba408;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_198.Array.AllocatorInstance.Data,
               local_198.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_198.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_198.Array.AllocatorInstance.Data);
    }
    if (local_198.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Identifier.Data.AllocatorInstance.Data);
    }
  }
  if (IGlobalConfigurationRouter_Private::bShowParseErrorsAsWarning == false) {
    if (5 < (byte)LogGlobalConfigurationData._0_1_) {
      pFVar7 = &::LOG_Static;
      goto LAB_14e9ba35d;
    }
  }
  else if (2 < (byte)LogGlobalConfigurationData._0_1_) {
    pFVar7 = &::LOG_Static;
LAB_14e9ba35d:
    UE::Logging::Private::
    LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<wchar_t>_const_&,FString_const_&>
              ((FLogCategoryBase *)&LogGlobalConfigurationData,pFVar7,param_1,
               &local_158.ErrorMessage);
  }
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_38,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_1b8 != pFVar5) {
    local_1b8.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_1b8.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pTVar6 = MakeShared<TJsonValueString<wchar_t>,1,FString>(&local_28,&local_1b8);
  __return_storage_ptr__->Object = (FJsonValue *)pTVar6->Object;
  pTVar3 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
LAB_14e9ba408:
  local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
  if (local_40 != '\0') {
    FMemory::Free(local_58);
    local_58 = (wchar_t *)0x0;
  }
  local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)&local_e8);
  local_158._padding_ = (longlong)&___7__TJsonReader__W__6B_;
  if (local_158.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_158.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.ErrorMessage.Data.AllocatorInstance.Data);
  }
  if (local_158.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Identifier.Data.AllocatorInstance.Data);
  }
  if (local_158.ParseState.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.ParseState.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// TryPrintString @ 14e9ba4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl
IGlobalConfigurationRouter::TryPrintString
          (FString *__return_storage_ptr__,TSharedPtr<FJsonValue,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FArchiveState *this;
  FString *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FArchiveState *pFVar6;
  ForAnyElementType local_78;
  undefined8 local_70;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_68;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> local_58;
  FFastPathLoadBuffer local_30;
  
  pFVar6 = (FArchiveState *)0x0;
  if (param_1->Object == (FJsonValue *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    this = ::operator_new(0xa8);
    if (this != (FArchiveState *)0x0) {
      this->_padding_ = 0;
      this->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this->field_0x28 = 0;
      this->ArSerializingDefaults = 0;
      this->ArPortFlags = 0;
      this->ArMaxSerializeSize = 0;
      (this->ArUEVer).FileVersionUE4 = 0;
      (this->ArUEVer).FileVersionUE5 = 0;
      this->ArLicenseeUEVer = 0;
      (this->ArEngineVer).Major = 0;
      (this->ArEngineVer).Minor = 0;
      (this->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this->ArEngineVer).field_0x6 = 0;
      (this->ArEngineVer).Changelist = 0;
      this->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this->SavePackageData = (FArchiveSavePackageData *)0x0;
      this->SerializedProperty = (FProperty *)0x0;
      this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this->bCustomVersionsAreReset = 0;
      this->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this);
      this[1]._padding_ = 0;
      this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      this[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      this[1].ActiveFPLB = &local_30;
      FArchiveState::SetIsSaving(this,true);
      (**(code **)(this->_padding_ + 0x108))(this,0);
      this->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      pFVar6 = this;
    }
    local_30.OriginalFastPathLoadBuffer = (uchar *)&local_78;
    local_58.Stack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58._padding_ = (longlong)&___7FStackJsonWriter_IGlobalConfigurationRouter_Private__6B_;
    local_58.Stack.ArrayNum = 0;
    local_58.Stack.ArrayMax = 0;
    local_58.PreviousTokenWritten = None;
    local_58.IndentLevel = 0;
    local_30.StartFastPathLoadBuffer = (uchar *)0x0;
    local_30.EndFastPathLoadBuffer = (uchar *)0x0;
    local_58.Stream = (FArchive *)pFVar6;
    local_68.SharedReferenceCount.ReferenceController = ::operator_new(0x38);
    if (local_68.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_68.Object = ___xmm_00000000000000000000000000000010;
      local_68.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_68.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
      ;
      local_68.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
      local_68.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_68.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      local_68.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)param_1->Object;
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)
       &local_68.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = (FElement *)(local_68.SharedReferenceCount.ReferenceController + 1);
      *(undefined2 *)&local_68.SharedReferenceCount.ReferenceController[3]._padding_ = 0x100;
      if ((local_68.Object == (FElement *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
    TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
    Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_68,&local_58,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_70;
    (__return_storage_ptr__->Data).ArrayMax = local_70._4_4_;
    local_58._padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    cVar3 = (**(code **)(*(longlong *)&(local_58.Stream)->field_0x0 + 0x210))();
    if ((cVar3 == '\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("this->Stream->Close()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x2ef,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    if ((FArchiveState *)local_58.Stream != (FArchiveState *)0x0) {
      (*(code *)**(undefined8 **)&(local_58.Stream)->field_0x0)(local_58.Stream,1);
    }
    if (local_30.StartFastPathLoadBuffer != (uchar *)0x0) {
      FMemory::Free(local_30.StartFastPathLoadBuffer);
    }
    local_58._padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
    if (local_58.Stack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Stack.AllocatorInstance.Data);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

