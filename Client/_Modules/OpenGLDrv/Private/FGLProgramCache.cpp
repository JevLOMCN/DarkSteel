// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 7

// Add @ 145bf04b0

void __thiscall
FGLProgramCache::Add(FGLProgramCache *this,FOpenGLProgramKey *param_1,FOpenGLLinkedProgram *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FOpenGLLinkedProgram *local_res18 [2];
  FOpenGLProgramKey *local_18;
  FOpenGLLinkedProgram **local_10;
  
  local_res18[0] = param_2;
  bVar2 = IsUsingLRU();
  if (bVar2) {
    FGLProgramCacheLRU::Add(&this->ProgramCacheLRU,param_1,local_res18[0]);
    return;
  }
  uVar3 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
  iVar4 = TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOpenGLProgramKey>
                    ((TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
                      *)&this->ProgramCache,uVar3,param_1);
  if (iVar4 != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ProgramCache.Contains(ProgramKey)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x728,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10 = local_res18;
  local_18 = param_1;
  TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_const_&>_>
            ((TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
              *)&this->ProgramCache,
             (TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_const_&> *)
             (local_res18 + 1),(bool *)&local_18);
  return;
}

// Empty @ 145bfbf90

void __thiscall FGLProgramCache::Empty(FGLProgramCache *this)

{
  TMap<FOpenGLProgramKey,FOpenGLLinkedProgram_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  FOpenGLLinkedProgram *this_01;
  FOpenGLProgramBinary *this_02;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar4 = IsUsingLRU();
  if (bVar4) {
    FGLProgramCacheLRU::Empty(&this->ProgramCacheLRU);
    return;
  }
  this_00 = &this->ProgramCache;
  uVar5 = 1;
  iVar9 = 0;
  puVar1 = &(this->ProgramCache).field_0x10;
  iVar2 = *(int *)&(this->ProgramCache).field_0x28;
  iVar11 = 0;
  iVar6 = iVar11;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(this->ProgramCache).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar8 = *puVar12;
    iVar11 = 0;
    while (uVar8 == 0) {
      lVar7 = (longlong)iVar9;
      iVar11 = iVar11 + 0x20;
      iVar9 = iVar9 + 1;
      iVar6 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_145bfc07f;
      uVar8 = puVar12[lVar7 + 1];
    }
    uVar5 = -uVar8 & uVar8;
    uVar14 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    iVar6 = local_res18 + -1 + iVar11;
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
  }
LAB_145bfc07f:
  uVar8 = *(uint *)&(this->ProgramCache).field_0x28;
  uVar13 = uVar8 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar9);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar8 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar11;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ProgramCache).field_0x8 -
                       *(int *)&(this->ProgramCache).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar8 < 0) || (iVar2 < (int)uVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(this->ProgramCache).field_0x28;
  if (uVar8 != uVar5) {
    puVar10 = *(undefined1 **)&(this->ProgramCache).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar9 * 4);
    while (uVar8 == 0) {
      lVar7 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar8 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_145bfc190;
      uVar8 = *(uint *)(puVar10 + lVar7 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    uVar8 = local_res20 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
  }
LAB_145bfc190:
  do {
    if (*(int *)&(this->ProgramCache).field_0x8 - *(int *)&(this->ProgramCache).field_0x34 !=
        (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      bVar4 = 1 < *(int *)&(this->ProgramCache).field_0x48;
      if (!bVar4) {
        TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar1 = &(this->ProgramCache).field_0xc;
      *(undefined4 *)&(this->ProgramCache).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->ProgramCache).field_0x34 = 0;
      *(undefined4 *)&(this->ProgramCache).field_0x30 = 0xffffffff;
      iVar2 = *(int *)&(this->ProgramCache).field_0x2c;
      *(undefined4 *)&(this->ProgramCache).field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->ProgramCache).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ProgramCache).field_0x10,0);
      }
      if (bVar4) {
        *(undefined4 *)&(this->ProgramCache).field_0x48 = 1;
        TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      return;
    }
    this_01 = *(FOpenGLLinkedProgram **)
               ((longlong)TStack_60.CurrentBitIndex * 0x88 + 0x78 + *(longlong *)&this_00->field_0x0
               );
    if (this_01 != (FOpenGLLinkedProgram *)0x0) {
      FOpenGLLinkedProgram::DeleteGLResources(this_01);
      this_02 = (this_01->LRUInfo).CachedProgramBinary.Obj.Ptr;
      if (this_02 != (FOpenGLProgramBinary *)0x0) {
        FOpenGLProgramBinary::~FOpenGLProgramBinary(this_02);
        ::operator_delete(this_02,0x20);
      }
      uVar14 = (ulonglong)(this_01->Config).TypeIndex;
      if ((2 < uVar14) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(&this_01->Config);
      if ((void *)this_01->_padding_ != (void *)0x0) {
        FMemory::Free((void *)this_01->_padding_);
      }
      if ((void *)this_01->_padding_ != (void *)0x0) {
        FMemory::Free((void *)this_01->_padding_);
      }
      ::operator_delete(this_01,0x2a8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// EvictLeastRecentByPredicate @ 145bfd980

void __thiscall
FGLProgramCache::EvictLeastRecentByPredicate
          (FGLProgramCache *this,TUniqueFunction<bool___cdecl(FOpenGLLinkedProgram_*)> *param_1)

{
  FCacheEntry *pFVar1;
  FOpenGLLinkedProgram *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FOpenGLLinkedProgram *local_58 [2];
  code *local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  
  bVar4 = IsUsingLRU();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsUsingLRU()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x753,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(this->ProgramCacheLRU).LRU.LookupSet.Elements.field_0x8 !=
      *(int *)&(this->ProgramCacheLRU).LRU.LookupSet.Elements.field_0x34) {
    local_20 = *(longlong **)&param_1->field_0x28;
    local_48 = *(code **)param_1;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_28 = *(undefined8 *)&param_1->field_0x20;
    local_38 = *(longlong *)&param_1->field_0x10;
    uStack_30 = *(undefined8 *)&param_1->field_0x18;
    if (local_48 != (code *)0x0) {
      *(undefined8 *)param_1 = 0;
    }
    while( true ) {
      if (((this->ProgramCacheLRU).LRU.LeastRecent == (FCacheEntry *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LeastRecent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                             ,0x192,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58[0] = ((this->ProgramCacheLRU).LRU.LeastRecent)->Value;
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar3 = local_48;
      plVar7 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar7 = local_20;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar5 = (*pcVar3)(uVar6,local_58);
      if (cVar5 == '\0') break;
      if (((this->ProgramCacheLRU).LRU.LeastRecent == (FCacheEntry *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LeastRecent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                             ,0x185,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->ProgramCacheLRU).LRU.LeastRecent;
      pFVar2 = pFVar1->Value;
      TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::Remove
                (&(this->ProgramCacheLRU).LRU,pFVar1);
      FGLProgramCacheLRU::EvictFromLRU(&this->ProgramCacheLRU,pFVar2);
    }
    if (local_48 != (code *)0x0) {
      plVar7 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar7 = local_20;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if (*(longlong *)param_1 == 0) {
    return;
  }
  plVar7 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_1->field_0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x000145bfdb21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Find @ 145bffa20

FOpenGLLinkedProgram * __thiscall
FGLProgramCache::Find(FGLProgramCache *this,FOpenGLProgramKey *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FCacheEntry **ppFVar5;
  FOpenGLLinkedProgram *pFVar6;
  longlong lVar7;
  FOpenGLLinkedProgram *pFVar8;
  FOpenGLLinkedProgram **ppFVar9;
  
  bVar2 = IsUsingLRU();
  if (!bVar2) {
    uVar3 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
    iVar4 = TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FOpenGLProgramKey>
                      ((TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
                        *)&this->ProgramCache,uVar3,param_1);
    pFVar6 = (FOpenGLLinkedProgram *)0x0;
    if (iVar4 != -1) {
      lVar7 = (longlong)iVar4 * 0x88 + *(longlong *)&this->ProgramCache;
      pFVar8 = (FOpenGLLinkedProgram *)(lVar7 + 0x78);
      if (lVar7 == 0) {
        pFVar8 = pFVar6;
      }
      if (pFVar8 != (FOpenGLLinkedProgram *)0x0) {
        pFVar6 = (FOpenGLLinkedProgram *)pFVar8->_padding_;
      }
    }
    return pFVar6;
  }
  ppFVar5 = TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
            ::Find(&(this->ProgramCacheLRU).LRU.LookupSet,param_1);
  if (ppFVar5 != (FCacheEntry **)0x0) {
    TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::MarkAsRecent
              (&(this->ProgramCacheLRU).LRU,*ppFVar5);
    ppFVar9 = &(*ppFVar5)->Value;
    if (ppFVar9 != (FOpenGLLinkedProgram **)0x0) {
      if (((*ppFVar9)->LRUInfo).LRUNode.Index == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*Found)->LRUInfo.LRUNode.IsValidId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                           ,0x6ab,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FOpenGLLinkedProgram *)(*pcVar1)();
          return pFVar6;
        }
      }
      return *ppFVar9;
    }
  }
  if (param_2) {
    pFVar6 = FGLProgramCacheLRU::FindEvictedAndUpdateLRU(&this->ProgramCacheLRU,param_1);
    return pFVar6;
  }
  uVar3 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
  iVar4 = TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOpenGLProgramKey>
                    ((TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
                      *)&(this->ProgramCacheLRU).EvictedPrograms,uVar3,param_1);
  pFVar6 = (FOpenGLLinkedProgram *)0x0;
  if (iVar4 != -1) {
    lVar7 = (longlong)iVar4 * 0x90 + *(longlong *)&(this->ProgramCacheLRU).EvictedPrograms;
    pFVar8 = (FOpenGLLinkedProgram *)(lVar7 + 0x78);
    if (lVar7 == 0) {
      pFVar8 = pFVar6;
    }
    if (pFVar8 != (FOpenGLLinkedProgram *)0x0) {
      pFVar6 = (FOpenGLLinkedProgram *)pFVar8->_padding_;
    }
  }
  return pFVar6;
}

// IsEvicted @ 145c0aab0

bool __thiscall FGLProgramCache::IsEvicted(FGLProgramCache *this,FOpenGLProgramKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  
  bVar2 = IsUsingLRU();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsUsingLRU()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x76f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
  iVar5 = TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOpenGLProgramKey>
                    ((TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
                      *)&(this->ProgramCacheLRU).EvictedPrograms,uVar4,param_1);
  return iVar5 != -1;
}

// IsUsingLRU @ 145c0af40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGLProgramCache::IsUsingLRU(void)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  pTVar2 = CVarEnableLRU.Ref;
  if (UseLRUCacheStatus == 0xffffffff) {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    if (((*(int *)((longlong)pTVar2->ShadowedValue + lVar5) != 0) &&
        (glProgramBinary == (_func___cdecl_void_uint_uint_void_ptr_int *)0x0)) &&
       (2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_bool___cdecl_FGLProgramCache::IsUsingLRU(void)'::__l9::LOG_Static,
                 (FLogCategoryBase *)&LogRHI);
    }
    pTVar2 = CVarEnableLRU.Ref;
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    if ((*(int *)((longlong)pTVar2->ShadowedValue + lVar5) == 1) &&
       (FOpenGLProgramBinaryCache::CachePtr != (FOpenGLProgramBinaryCache *)0x0)) {
      UseLRUCacheStatus = 1;
    }
    else {
      UseLRUCacheStatus = 0;
    }
    if (4 < (byte)LogRHI._0_1_) {
      bVar3 = IsInParallelGameThread();
      if (!bVar3) {
        IsInGameThread();
      }
      UE::Logging::Private::BasicLog<5>
                (&`public:_static_bool___cdecl_FGLProgramCache::IsUsingLRU(void)'::__l27::LOG_Static
                 ,(FLogCategoryBase *)&LogRHI);
    }
    if ((UseLRUCacheStatus == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UseLRUCacheStatus != -1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                           ,0x6fa,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  return UseLRUCacheStatus == 1;
}

// Touch @ 145c32470

void __thiscall FGLProgramCache::Touch(FGLProgramCache *this,FOpenGLLinkedProgram *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FOpenGLLinkedProgram *pFVar4;
  
  bVar3 = IsUsingLRU();
  if (bVar3) {
    iVar1 = (param_1->LRUInfo).LRUNode.Index;
    if (iVar1 == -1) {
      pFVar4 = FGLProgramCacheLRU::FindEvictedAndUpdateLRU
                         (&this->ProgramCacheLRU,(FOpenGLProgramKey *)param_1);
      if (pFVar4 == (FOpenGLLinkedProgram *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8399118768520824520>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                           ,0x6c8,"FindEvictedAndUpdateLRU(LinkedProgram->ProgramKey)");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    else {
      TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::MarkAsRecent
                (&(this->ProgramCacheLRU).LRU,
                 *(FCacheEntry **)
                  (*(longlong *)&(this->ProgramCacheLRU).LRU.LookupSet.Elements +
                  (longlong)iVar1 * 0x10));
    }
    (param_1->LRUInfo).LastTouchedFrame = GFrameNumber;
  }
  return;
}

