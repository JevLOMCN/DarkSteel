// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 13

// DumpShaderList @ 145d1f950

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderMapBase::DumpShaderList
          (FShaderMapBase *this,
          TDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy>
          *param_1)

{
  FShaderMapContent::DumpShaderList((this->Content).Object,this,param_1);
  return;
}

// PostFinalizeContent @ 145d47230

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderMapBase::PostFinalizeContent(FShaderMapBase *this)

{
  return;
}

// FShaderMapBase @ 145e81700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderMapBase * __thiscall FShaderMapBase::FShaderMapBase(FShaderMapBase *this)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  EShaderPermutationFlags EVar4;
  FShaderMapBase *pFVar5;
  longlong lVar6;
  FLLMScope local_res8 [2];
  FPlatformTypeLayoutParameters local_res10;
  FMemScope local_res18 [2];
  FShaderMapBase *local_28 [2];
  
  lVar6 = 0;
  local_res10.MaxFieldAlignment = 0xffffffff;
  (this->Resource).Reference = (FShaderMapResource *)0x0;
  this->_padding_ = (longlong)&___7FShaderMapBase__6B_;
  (this->Code).Reference = (FShaderMapResourceCode *)0x0;
  this->PointerTable = (FShaderMapPointerTable *)0x0;
  (this->Content).TypeDesc = (FTypeLayoutDesc *)0x0;
  (this->Content).Object = (FShaderMapContent *)0x0;
  (this->Content).FrozenSize = 0;
  this->NumFrozenShaders = 0;
  local_res10.Flags = 0;
  FPlatformTypeLayoutParameters::InitializeForCurrent(&local_res10);
  EVar4 = GetShaderPermutationFlags(&local_res10);
  this->PermutationFlags = EVar4;
  pTVar2 = CVarEnableShaderMapTracking.Ref;
  bVar3 = IsInParallelGameThread();
  if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
    lVar6 = 1;
  }
  if (pTVar2->ShadowedValue[lVar6] != false) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name151,L"Debug/ShaderMapsTracking");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_res8,LLMScope_Name151,false,None,Default,true);
    FMemScope::FMemScope(local_res18,&LLMScope_Name151,true);
    EnterCriticalSection((LPCRITICAL_SECTION)&GAllShaderMapsGuard);
    local_28[0] = this;
    if (((GAllShaderMaps.AllocatorInstance.Data <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 <
         GAllShaderMaps.AllocatorInstance.Data + (longlong)GAllShaderMaps.ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FShaderMapBase *)(*pcVar1)();
      return pFVar5;
    }
    if (GAllShaderMaps.ArrayNum == GAllShaderMaps.ArrayMax) {
      GAllShaderMaps.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&GAllShaderMaps.AllocatorInstance,&GAllShaderMaps.ArrayMax);
    }
    lVar6 = (longlong)GAllShaderMaps.ArrayNum;
    GAllShaderMaps.ArrayNum = GAllShaderMaps.ArrayNum + 1;
    *(FShaderMapBase **)(GAllShaderMaps.AllocatorInstance.Data + lVar6 * 8) = local_28[0];
    LeaveCriticalSection((LPCRITICAL_SECTION)&GAllShaderMapsGuard);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
  }
  return this;
}

// ~FShaderMapBase @ 145e849d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderMapBase::~FShaderMapBase(FShaderMapBase *this)

{
  longlong *plVar1;
  FShaderMapPointerTable *pFVar2;
  FShaderMapResourceCode *pFVar3;
  FShaderMapResource *this_00;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  
  this->_padding_ = (longlong)&___7FShaderMapBase__6B_;
  DestroyContent(this);
  pFVar2 = this->PointerTable;
  if (pFVar2 != (FShaderMapPointerTable *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  pTVar5 = CVarEnableShaderMapTracking.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar8 = 1;
    if (!bVar6) goto LAB_145e84a2c;
  }
  lVar8 = 0;
LAB_145e84a2c:
  if (pTVar5->ShadowedValue[lVar8] != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GAllShaderMapsGuard);
    for (FVar10 = GAllShaderMaps.AllocatorInstance;
        FVar10.Data != GAllShaderMaps.AllocatorInstance.Data + (longlong)GAllShaderMaps.ArrayNum * 8
        ; FVar10.Data = FVar10.Data + 8) {
      if (*(FShaderMapBase **)FVar10.Data == this) {
        uVar9 = (uint)((longlong)FVar10.Data - (longlong)GAllShaderMaps.AllocatorInstance.Data >> 3)
        ;
        if (uVar9 != 0xffffffff) {
          uVar11 = 0;
          if ((int)(uVar9 + 1) <= GAllShaderMaps.ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (GAllShaderMaps.ArrayNum - uVar9) + -1;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(GAllShaderMaps.AllocatorInstance.Data + (longlong)(int)uVar9 * 8,
                    GAllShaderMaps.AllocatorInstance.Data +
                    (longlong)(GAllShaderMaps.ArrayNum - iVar7) * 8,(longlong)iVar7 << 3);
          }
          GAllShaderMaps.ArrayNum = GAllShaderMaps.ArrayNum + -1;
        }
        break;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GAllShaderMapsGuard);
  }
  pFVar3 = (this->Code).Reference;
  if (pFVar3 != (FShaderMapResourceCode *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  this_00 = (this->Resource).Reference;
  if (this_00 != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(this_00);
  }
  return;
}

// AssignContent @ 145e8db50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderMapBase::AssignContent(FShaderMapBase *this,TMemoryImageObject<FShaderMapContent> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  FTypeLayoutDesc *pFVar9;
  FShaderMapPointerTable *pFVar10;
  
  if ((this->Content).Object != (FShaderMapContent *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Content.Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                       ,0xba,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->PointerTable != (FShaderMapPointerTable *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PointerTable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                       ,0xbb,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar9 = (FTypeLayoutDesc *)(**(code **)(this->_padding_ + 0x20))(this);
  if (param_1->TypeDesc != pFVar9) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("*InContent.TypeDesc == ExpectedTypeDesc",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                       ,0xbd,L"FShaderMapBase expected content of type %s, got %s");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = *(undefined4 *)((longlong)&param_1->TypeDesc + 4);
  uVar4 = *(undefined4 *)&param_1->Object;
  uVar5 = *(undefined4 *)((longlong)&param_1->Object + 4);
  lVar1 = this->_padding_;
  uVar6 = param_1->FrozenSize;
  uVar7 = *(undefined4 *)&param_1->field_0x14;
  *(undefined4 *)&(this->Content).TypeDesc = *(undefined4 *)&param_1->TypeDesc;
  *(undefined4 *)((longlong)&(this->Content).TypeDesc + 4) = uVar3;
  *(undefined4 *)&(this->Content).Object = uVar4;
  *(undefined4 *)((longlong)&(this->Content).Object + 4) = uVar5;
  (this->Content).FrozenSize = uVar6;
  *(undefined4 *)&(this->Content).field_0x14 = uVar7;
  pFVar10 = (FShaderMapPointerTable *)(**(code **)(lVar1 + 0x28))(this);
  this->PointerTable = pFVar10;
                    /* WARNING: Could not recover jumptable at 0x000145e8dc31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x30))(this);
  return;
}

// AssignCopy @ 145e8dc40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderMapBase::AssignCopy(FShaderMapBase *this,FShaderMapBase *param_1)

{
  longlong *plVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  TCsvPersistentCustomStat<float> *pTVar5;
  bool bVar6;
  uint uVar7;
  atomic<float> aVar8;
  atomic<float> aVar9;
  FShaderMapPointerTable *pFVar10;
  TMemoryImageObject<void> *pTVar11;
  FShaderMapContent *_Dst;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded> FVar16;
  FShaderMapResourceCode *pFVar17;
  FShaderMapResourceCode *pFVar18;
  FCsvProfiler *pFVar19;
  uint *puVar20;
  uchar auVar21 [8];
  uchar auVar22 [8];
  float fVar23;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FTypeLayoutDesc *local_98;
  FShaderMapContent *pFStack_90;
  uint local_88;
  undefined4 uStack_84;
  FName local_80;
  FName local_78;
  FName local_70;
  TMemoryImageObject<void> local_68;
  
  if ((this->PointerTable != (FShaderMapPointerTable *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PointerTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,199,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->Code).Reference != (FShaderMapResourceCode *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Code",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,200,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_1->Content).Object == (FShaderMapContent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Source.Content.Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0xc9,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1->Content).FrozenSize == 0) {
    pFVar10 = (FShaderMapPointerTable *)(**(code **)(this->_padding_ + 0x28))(this);
    this->PointerTable = pFVar10;
    pTVar11 = FreezeMemoryImageObject
                        (&local_68,(param_1->Content).Object,(param_1->Content).TypeDesc,
                         (FPointerTableBase *)pFVar10);
    local_98 = pTVar11->TypeDesc;
    pFStack_90 = pTVar11->Object;
    local_88 = pTVar11->FrozenSize;
    (this->Content).TypeDesc = local_98;
    (this->Content).Object = pFStack_90;
    *(ulonglong *)&(this->Content).FrozenSize = CONCAT44(uStack_84,local_88);
  }
  else {
    pFVar10 = (FShaderMapPointerTable *)(**(code **)(param_1->PointerTable->_padding_ + 0x28))();
    this->PointerTable = pFVar10;
    puVar20 = &(this->Content).FrozenSize;
    (this->Content).TypeDesc = (param_1->Content).TypeDesc;
    uVar7 = (param_1->Content).FrozenSize;
    *puVar20 = uVar7;
    _Dst = FMemory::Malloc((ulonglong)uVar7,0);
    (this->Content).Object = _Dst;
    memcpy(_Dst,(param_1->Content).Object,(ulonglong)*puVar20);
  }
  puVar20 = &(this->Content).FrozenSize;
  uVar7 = FShaderMapContent::GetNumShaders((this->Content).Object);
  auVar21[4] = '\0';
  auVar21[5] = '\0';
  auVar21[6] = '\0';
  auVar21[7] = '\0';
  auVar21._0_4_ = *puVar20;
  this->NumFrozenShaders = uVar7;
  if (auVar21 != (uchar  [8])0x0) {
    FVar13 = StatPtr_STAT_Shaders_ShaderMemory;
    if (StatPtr_STAT_Shaders_ShaderMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)0x0) {
      pFVar12 = ::FName::FName(&local_res20,"STAT_Shaders_ShaderMemory");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderMemory,*pFVar12,
                          L"Shader Memory","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar13;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar14 == (FThreadStats *)0x0) {
        pFVar15 = FThreadStatsPool::Get();
        pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
      }
      local_b8.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res10 = FVar2;
      local_b8.StatData.Pad = auVar21;
      local_b8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar14,&local_b8);
      FStatsTrace::Add(&local_res10,(long64)auVar21);
      if (pFVar14->ScopeCount == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  auVar22[4] = '\0';
  auVar22[5] = '\0';
  auVar22[6] = '\0';
  auVar22[7] = '\0';
  auVar22._0_4_ = this->NumFrozenShaders;
  pFVar18 = (FShaderMapResourceCode *)0x0;
  if (auVar22 != (uchar  [8])0x0) {
    FVar16 = StatPtr_STAT_Shaders_NumShadersLoaded;
    if (StatPtr_STAT_Shaders_NumShadersLoaded ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)0x0) {
      pFVar12 = ::FName::FName(&local_80,"STAT_Shaders_NumShadersLoaded");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersLoaded,
                          *pFVar12,L"Num Shaders Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar16;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar14 == (FThreadStats *)0x0) {
        pFVar15 = FThreadStatsPool::Get();
        pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
      }
      local_a8.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res18 = FVar2;
      local_a8.StatData.Pad = auVar22;
      local_a8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar14,&local_a8);
      FStatsTrace::Add(&local_res18,(long64)auVar22);
      if (pFVar14->ScopeCount == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar19 = FCsvProfiler::Get();
    uVar7 = _GCsvCategory_Shaders.Index;
    pFVar12 = ::FName::FName(&local_78,L"ShaderMemoryMB");
    CsvStatShaderMemoryMB =
         FCsvProfiler::GetOrCreatePersistentCustomStatFloat(pFVar19,*pFVar12,uVar7,false);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar19 = FCsvProfiler::Get();
    uVar7 = _GCsvCategory_Shaders.Index;
    pFVar12 = ::FName::FName(&local_70,L"NumShadersLoaded");
    CsvStatNumShadersLoaded =
         FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar19,*pFVar12,uVar7,false);
    _Init_thread_footer(&::_TSS1);
  }
  pTVar5 = CsvStatShaderMemoryMB;
  fVar23 = (float)*puVar20 * __real_35800000;
  aVar8 = CsvStatShaderMemoryMB->Value;
  do {
    LOCK();
    aVar9 = pTVar5->Value;
    bVar6 = aVar8 == aVar9;
    if (bVar6) {
      pTVar5->Value = (atomic<float>)((float)aVar8 + fVar23);
      aVar9 = aVar8;
    }
    UNLOCK();
    aVar8 = aVar9;
  } while (!bVar6);
  LOCK();
  CsvStatNumShadersLoaded->Value =
       (atomic<int>)((int)CsvStatNumShadersLoaded->Value + this->NumFrozenShaders);
  UNLOCK();
  pFVar17 = ::operator_new(0x48);
  if (pFVar17 != (FShaderMapResourceCode *)0x0) {
    pFVar18 = FShaderMapResourceCode::FShaderMapResourceCode(pFVar17,(param_1->Code).Reference);
  }
  pFVar17 = (this->Code).Reference;
  if (pFVar17 != pFVar18) {
    (this->Code).Reference = pFVar18;
    if (pFVar18 != (FShaderMapResourceCode *)0x0) {
      LOCK();
      *(int *)&pFVar18->_padding_ = (int)pFVar18->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar17 != (FShaderMapResourceCode *)0x0) {
      plVar1 = &pFVar17->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar17->_padding_)(pFVar17,1);
      }
    }
  }
  InitResource(this);
  return;
}

// DestroyContent @ 145e94530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderMapBase::DestroyContent(FShaderMapBase *this)

{
  FName FVar1;
  longlong lVar2;
  FShaderMapContent *pFVar3;
  TCsvPersistentCustomStat<float> *pTVar4;
  uint uVar5;
  atomic<float> aVar6;
  atomic<float> aVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded> FVar12;
  FCsvProfiler *pFVar13;
  uchar auVar14 [8];
  uchar auVar15 [8];
  FNameEntryId FVar16;
  bool bVar17;
  float fVar18;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_68;
  FStatMessage local_58;
  
  auVar14[4] = '\0';
  auVar14[5] = '\0';
  auVar14[6] = '\0';
  auVar14[7] = '\0';
  auVar14._0_4_ = (this->Content).FrozenSize;
  if (auVar14 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_Shaders_ShaderMemory;
    if (StatPtr_STAT_Shaders_ShaderMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_res20,"STAT_Shaders_ShaderMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderMemory,*pFVar8,
                         L"Shader Memory","STATGROUP_Shaders","STATCAT_Advanced",
                         L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar9;
    FVar16 = FVar1.ComparisonIndex.Value;
    uVar5 = FVar1.Number;
    local_res8.ComparisonIndex.Value = FVar16.Value;
    local_res8.Number = uVar5;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_68.NameAndInfo.Number = uVar5 & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_68.StatData.Pad = auVar14;
      local_68.NameAndInfo.Index.Value = FVar16.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_68);
      FStatsTrace::Add(&local_res10,-(longlong)auVar14);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  auVar15[4] = '\0';
  auVar15[5] = '\0';
  auVar15[6] = '\0';
  auVar15[7] = '\0';
  auVar15._0_4_ = this->NumFrozenShaders;
  if (auVar15 != (uchar  [8])0x0) {
    FVar12 = StatPtr_STAT_Shaders_NumShadersLoaded;
    if (StatPtr_STAT_Shaders_NumShadersLoaded ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)0x0) {
      pFVar8 = ::FName::FName((FName *)&local_68,"STAT_Shaders_NumShadersLoaded");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersLoaded,
                          *pFVar8,L"Num Shaders Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar12;
    FVar16 = FVar1.ComparisonIndex.Value;
    uVar5 = FVar1.Number;
    local_res8.ComparisonIndex.Value = FVar16.Value;
    local_res8.Number = uVar5;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_58.NameAndInfo.Number = uVar5 & 0xffffbfff | 0xb000;
      local_res18 = FVar1;
      local_58.StatData.Pad = auVar15;
      local_58.NameAndInfo.Index.Value = FVar16.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_58);
      FStatsTrace::Add(&local_res18,-(longlong)auVar15);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar13 = FCsvProfiler::Get();
    uVar5 = _GCsvCategory_Shaders.Index;
    pFVar8 = ::FName::FName(&local_res8,L"ShaderMemoryMB");
    CsvStatShaderMemoryMB =
         FCsvProfiler::GetOrCreatePersistentCustomStatFloat(pFVar13,*pFVar8,uVar5,false);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar13 = FCsvProfiler::Get();
    uVar5 = _GCsvCategory_Shaders.Index;
    pFVar8 = ::FName::FName(&local_res8,L"NumShadersLoaded");
    CsvStatNumShadersLoaded =
         FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar13,*pFVar8,uVar5,false);
    _Init_thread_footer(&::_TSS1);
  }
  pTVar4 = CsvStatShaderMemoryMB;
  local_res8.ComparisonIndex.Value = *(uint *)&CsvStatShaderMemoryMB->Value;
  fVar18 = (float)(this->Content).FrozenSize * __real_b5800000;
  aVar6 = (atomic<float>)local_res8.ComparisonIndex.Value;
  do {
    LOCK();
    aVar7 = pTVar4->Value;
    bVar17 = aVar6 == aVar7;
    if (bVar17) {
      pTVar4->Value = (atomic<float>)((float)aVar6 + fVar18);
      aVar7 = aVar6;
    }
    UNLOCK();
    aVar6 = aVar7;
  } while (!bVar17);
  LOCK();
  CsvStatNumShadersLoaded->Value =
       (atomic<int>)((int)CsvStatNumShadersLoaded->Value - this->NumFrozenShaders);
  UNLOCK();
  pFVar3 = (this->Content).Object;
  if (pFVar3 != (FShaderMapContent *)0x0) {
    InternalDeleteObjectFromLayout
              (pFVar3,(this->Content).TypeDesc,(FPointerTableBase *)this->PointerTable,
               (this->Content).FrozenSize != 0);
    if ((this->Content).FrozenSize != 0) {
      FMemory::Free((this->Content).Object);
    }
    (this->Content).Object = (FShaderMapContent *)0x0;
    (this->Content).FrozenSize = 0;
  }
  this->NumFrozenShaders = 0;
  return;
}

// FinalizeContent @ 145e9a6d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderMapBase::FinalizeContent(FShaderMapBase *this)

{
  FName FVar1;
  longlong lVar2;
  TCsvPersistentCustomStat<float> *pTVar3;
  bool bVar4;
  uint uVar5;
  atomic<float> aVar6;
  atomic<float> aVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded> FVar12;
  FCsvProfiler *pFVar13;
  FNameEntryId FVar14;
  uchar auVar15 [8];
  uchar auVar16 [8];
  float fVar17;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_58;
  FStatMessage local_48;
  
  bVar4 = TMemoryImageObject<FShaderMapContent>::Freeze
                    (&this->Content,(FPointerTableBase *)this->PointerTable);
  if (bVar4) {
    uVar5 = FShaderMapContent::GetNumShaders((this->Content).Object);
    auVar15[4] = '\0';
    auVar15[5] = '\0';
    auVar15[6] = '\0';
    auVar15[7] = '\0';
    auVar15._0_4_ = (this->Content).FrozenSize;
    this->NumFrozenShaders = uVar5;
    if (auVar15 != (uchar  [8])0x0) {
      FVar9 = StatPtr_STAT_Shaders_ShaderMemory;
      if (StatPtr_STAT_Shaders_ShaderMemory ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)0x0) {
        pFVar8 = ::FName::FName(&local_res20,"STAT_Shaders_ShaderMemory");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderMemory,*pFVar8,
                           L"Shader Memory","STATGROUP_Shaders","STATCAT_Advanced",
                           L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar9;
      FVar14 = FVar1.ComparisonIndex.Value;
      uVar5 = FVar1.Number;
      local_res8.ComparisonIndex.Value = FVar14.Value;
      local_res8.Number = uVar5;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar10 == (FThreadStats *)0x0) {
          pFVar11 = FThreadStatsPool::Get();
          pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
        }
        local_58.NameAndInfo.Number = uVar5 & 0xffffafff | 0xa000;
        local_res10 = FVar1;
        local_58.StatData.Pad = auVar15;
        local_58.NameAndInfo.Index.Value = FVar14.Value;
        FThreadStats::AddStatMessage(pFVar10,&local_58);
        FStatsTrace::Add(&local_res10,(long64)auVar15);
        if (pFVar10->ScopeCount == 0) {
          FThreadStats::Flush(pFVar10,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar10,false,false);
        }
      }
    }
    auVar16[4] = '\0';
    auVar16[5] = '\0';
    auVar16[6] = '\0';
    auVar16[7] = '\0';
    auVar16._0_4_ = this->NumFrozenShaders;
    if (auVar16 != (uchar  [8])0x0) {
      FVar12 = StatPtr_STAT_Shaders_NumShadersLoaded;
      if (StatPtr_STAT_Shaders_NumShadersLoaded ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)0x0) {
        pFVar8 = ::FName::FName((FName *)&local_58,"STAT_Shaders_NumShadersLoaded");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersLoaded,
                            *pFVar8,L"Num Shaders Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                            L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar1 = *(FName *)FVar12;
      FVar14 = FVar1.ComparisonIndex.Value;
      uVar5 = FVar1.Number;
      local_res8.ComparisonIndex.Value = FVar14.Value;
      local_res8.Number = uVar5;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar10 == (FThreadStats *)0x0) {
          pFVar11 = FThreadStatsPool::Get();
          pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
        }
        local_48.NameAndInfo.Number = uVar5 & 0xffffafff | 0xa000;
        local_res18 = FVar1;
        local_48.StatData.Pad = auVar16;
        local_48.NameAndInfo.Index.Value = FVar14.Value;
        FThreadStats::AddStatMessage(pFVar10,&local_48);
        FStatsTrace::Add(&local_res18,(long64)auVar16);
        if (pFVar10->ScopeCount == 0) {
          FThreadStats::Flush(pFVar10,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar10,false,false);
        }
      }
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pFVar13 = FCsvProfiler::Get();
      uVar5 = _GCsvCategory_Shaders.Index;
      pFVar8 = ::FName::FName(&local_res8,L"ShaderMemoryMB");
      CsvStatShaderMemoryMB =
           FCsvProfiler::GetOrCreatePersistentCustomStatFloat(pFVar13,*pFVar8,uVar5,false);
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      pFVar13 = FCsvProfiler::Get();
      uVar5 = _GCsvCategory_Shaders.Index;
      pFVar8 = ::FName::FName(&local_res8,L"NumShadersLoaded");
      CsvStatNumShadersLoaded =
           FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar13,*pFVar8,uVar5,false);
      _Init_thread_footer(&::_TSS1);
    }
    pTVar3 = CsvStatShaderMemoryMB;
    local_res8.ComparisonIndex.Value = *(uint *)&CsvStatShaderMemoryMB->Value;
    fVar17 = (float)(this->Content).FrozenSize * __real_35800000;
    aVar6 = (atomic<float>)local_res8.ComparisonIndex.Value;
    do {
      LOCK();
      aVar7 = pTVar3->Value;
      bVar4 = aVar6 == aVar7;
      if (bVar4) {
        pTVar3->Value = (atomic<float>)((float)aVar6 + fVar17);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar4);
    LOCK();
    CsvStatNumShadersLoaded->Value =
         (atomic<int>)((int)CsvStatNumShadersLoaded->Value + this->NumFrozenShaders);
    UNLOCK();
  }
  InitResource(this);
  return;
}

// GetResourceCode @ 145e9ec80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderMapResourceCode * __thiscall FShaderMapBase::GetResourceCode(FShaderMapBase *this)

{
  longlong *plVar1;
  longlong lVar2;
  FShaderMapResourceCode *pFVar3;
  FShaderMapResourceCode *pFVar4;
  
  if ((this->Code).Reference != (FShaderMapResourceCode *)0x0) {
    return (this->Code).Reference;
  }
  pFVar3 = ::operator_new(0x48);
  pFVar4 = (FShaderMapResourceCode *)0x0;
  if (pFVar3 != (FShaderMapResourceCode *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FShaderMapResourceCode__6B_;
    (pFVar3->ResourceHash).Hash[0] = '\0';
    (pFVar3->ResourceHash).Hash[1] = '\0';
    (pFVar3->ResourceHash).Hash[2] = '\0';
    (pFVar3->ResourceHash).Hash[3] = '\0';
    (pFVar3->ResourceHash).Hash[4] = '\0';
    (pFVar3->ResourceHash).Hash[5] = '\0';
    (pFVar3->ResourceHash).Hash[6] = '\0';
    (pFVar3->ResourceHash).Hash[7] = '\0';
    (pFVar3->ResourceHash).Hash[8] = '\0';
    (pFVar3->ResourceHash).Hash[9] = '\0';
    (pFVar3->ResourceHash).Hash[10] = '\0';
    (pFVar3->ResourceHash).Hash[0xb] = '\0';
    (pFVar3->ResourceHash).Hash[0xc] = '\0';
    (pFVar3->ResourceHash).Hash[0xd] = '\0';
    (pFVar3->ResourceHash).Hash[0xe] = '\0';
    (pFVar3->ResourceHash).Hash[0xf] = '\0';
    (pFVar3->ResourceHash).Hash[0x10] = '\0';
    (pFVar3->ResourceHash).Hash[0x11] = '\0';
    (pFVar3->ResourceHash).Hash[0x12] = '\0';
    (pFVar3->ResourceHash).Hash[0x13] = '\0';
    (pFVar3->ShaderHashes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->ShaderHashes).ArrayNum = 0;
    (pFVar3->ShaderHashes).ArrayMax = 0;
    (pFVar3->ShaderCodeResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->ShaderCodeResources).ArrayNum = 0;
    (pFVar3->ShaderCodeResources).ArrayMax = 0;
    pFVar4 = pFVar3;
  }
  pFVar3 = (this->Code).Reference;
  if (pFVar3 == pFVar4) {
    return pFVar3;
  }
  (this->Code).Reference = pFVar4;
  if (pFVar4 != (FShaderMapResourceCode *)0x0) {
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
  }
  if (pFVar3 != (FShaderMapResourceCode *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return (this->Code).Reference;
}

// InitResource @ 145ea35d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderMapBase::InitResource(FShaderMapBase *this)

{
  FShaderMapResource *this_00;
  FShaderMapResourceCode *pFVar1;
  FShaderMapContent *pFVar2;
  FName FVar3;
  EShaderPlatform EVar4;
  FShaderMapResource_InlineCode *pFVar5;
  FShaderMapResource_InlineCode *pFVar6;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint uStack_b4;
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar6 = (FShaderMapResource_InlineCode *)0x0;
  this_00 = (this->Resource).Reference;
  if (this_00 != (FShaderMapResource *)0x0) {
    (this->Resource).Reference = (FShaderMapResource *)0x0;
    FShaderMapResource::Release(this_00);
  }
  pFVar1 = (this->Code).Reference;
  if (pFVar1 != (FShaderMapResourceCode *)0x0) {
    FSHA1::FSHA1(&local_a8);
    FSHA1::Update(&local_a8,(uchar *)(pFVar1->ShaderHashes).AllocatorInstance.Data,
                  (longlong)(pFVar1->ShaderHashes).ArrayNum * 0x14);
    FSHA1::Final(&local_a8);
    FSHA1::GetHash(&local_a8,(pFVar1->ResourceHash).Hash);
    ApplyResourceStats(pFVar1);
    FSHA1::~FSHA1(&local_a8);
    pFVar5 = ::operator_new(0x80);
    if (pFVar5 != (FShaderMapResource_InlineCode *)0x0) {
      pFVar2 = (this->Content).Object;
      pFVar1 = (this->Code).Reference;
      if (pFVar2 == (FShaderMapContent *)0x0) {
        EVar4 = SP_NumPlatforms;
      }
      else {
        FVar3.ComparisonIndex.Value = (pFVar2->ShaderPlatformName).ComparisonIndex.Value;
        FVar3.Number = (pFVar2->ShaderPlatformName).Number;
        local_b8 = FVar3.ComparisonIndex.Value;
        uStack_b4 = FVar3.Number;
        EVar4 = FGenericDataDrivenShaderPlatformInfo::GetShaderPlatformFromName(FVar3);
      }
      pFVar6 = FShaderMapResource_InlineCode::FShaderMapResource_InlineCode(pFVar5,EVar4,pFVar1);
    }
    pFVar5 = (FShaderMapResource_InlineCode *)(this->Resource).Reference;
    if (pFVar5 != pFVar6) {
      (this->Resource).Reference = (FShaderMapResource *)pFVar6;
      if (pFVar6 != (FShaderMapResource_InlineCode *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->_padding_ + 1);
        UNLOCK();
      }
      if (pFVar5 != (FShaderMapResource_InlineCode *)0x0) {
        FShaderMapResource::Release((FShaderMapResource *)pFVar5);
      }
    }
    BeginInitResource((FRenderResource *)(this->Resource).Reference,(FRenderCommandPipe *)0x0);
  }
  (**(code **)(this->_padding_ + 0x30))(this);
  return;
}

// Serialize @ 145eb3770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FShaderMapBase::Serialize(FShaderMapBase *this,FShaderSerializeContext *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FShaderMapResource *pFVar4;
  FName FVar5;
  longlong lVar6;
  FShaderMapContent *pFVar7;
  code *pcVar8;
  TCsvPersistentCustomStat<float> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  EShaderPlatform EVar12;
  EShaderPermutationFlags EVar13;
  uint uVar14;
  atomic<float> aVar15;
  atomic<float> aVar16;
  FPointerTableBase *pFVar17;
  FShaderMapPointerTable *pFVar18;
  FTypeLayoutDesc *pFVar19;
  TRefCountPtr<FShaderMapResource> TVar20;
  FShaderMapResource_InlineCode *pFVar21;
  FShaderMapResource_InlineCode *pFVar22;
  FShaderMapResource_InlineCode *pFVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory> FVar25;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded> FVar26;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar27;
  FCsvProfiler *pFVar28;
  wchar_t *pwVar29;
  ulonglong uVar30;
  TRefCountPtr<FShaderMapResource> *pTVar31;
  float fVar32;
  undefined1 auStackY_208 [32];
  uint local_1a8 [2];
  FMemoryImageWriter local_1a0;
  atomic<float> local_198;
  FLLMScope local_194;
  FPlatformTypeLayoutParameters local_190;
  FName local_188;
  FString local_180;
  TMemoryImageObject<void> local_170;
  FMemoryImage local_158;
  FMemoryImageResult local_118;
  FShaderMapResource *local_c8;
  FMemScope local_c0;
  FTypeLayoutDesc *local_b8;
  FShaderMapContent *pFStack_b0;
  uint local_a8;
  undefined4 uStack_a4;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_1->Ar == (FArchive *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ar",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderSerialization.h"
                          ,0x38,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  this_00 = (FArchiveState *)param_1->Ar;
  FLLMScope::FLLMScope(&local_194,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_c0,Shaders,true);
  if (this_00->ArIsSaving != '\0') {
    if (((this->Content).Object == (FShaderMapContent *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Content.Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                            ,0x122,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    FShaderMapContent::Validate((this->Content).Object,this);
    pFVar17 = (FPointerTableBase *)(**(code **)(this->_padding_ + 0x28))(this);
    local_158.HostLayoutParameters.MaxFieldAlignment = 0xffffffff;
    local_158.Sections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Sections.ArrayNum = 0;
    local_158.Sections.ArrayMax = 0;
    local_158.PointerTable = (FPointerTableBase *)0x0;
    local_158.PrevPointerTable = (FPointerTableBase *)0x0;
    local_158.HostLayoutParameters.Flags = 0;
    local_158.TargetLayoutParameters.MaxFieldAlignment = 0xffffffff;
    local_158.TargetLayoutParameters.Flags = 0;
    local_158.CurrentStruct = (UStruct *)0x0;
    FPlatformTypeLayoutParameters::InitializeForCurrent(&local_158.HostLayoutParameters);
    local_158.PrevPointerTable = (FPointerTableBase *)this->PointerTable;
    local_158.PointerTable = pFVar17;
    FPlatformTypeLayoutParameters::InitializeForArchive
              (&local_158.TargetLayoutParameters,(FArchive *)this_00);
    FMemoryImageWriter::FMemoryImageWriter(&local_1a0,&local_158);
    FMemoryImageWriter::WriteRootObject(&local_1a0,(this->Content).Object,(this->Content).TypeDesc);
    local_118.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Bytes.ArrayNum = 0;
    local_118.Bytes.ArrayMax = 0;
    local_118.PointerTable = (FPointerTableBase *)0x0;
    local_118.TargetLayoutParameters.MaxFieldAlignment = 0xffffffff;
    local_118.TargetLayoutParameters.Flags = 0;
    local_118.VTables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.VTables.ArrayNum = 0;
    local_118.VTables.ArrayMax = 0;
    local_118.ScriptNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ScriptNames.ArrayNum = 0;
    local_118.ScriptNames.ArrayMax = 0;
    local_118.MemoryImageNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.MemoryImageNames.ArrayNum = 0;
    local_118.MemoryImageNames.ArrayMax = 0;
    FMemoryImage::Flatten(&local_158,&local_118,true);
    FMemoryImageResult::SaveToArchive(&local_118,(FArchive *)this_00);
    if (local_118.MemoryImageNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.MemoryImageNames.AllocatorInstance.Data);
    }
    if (local_118.ScriptNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.ScriptNames.AllocatorInstance.Data);
    }
    if (local_118.VTables.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.VTables.AllocatorInstance.Data);
    }
    if (local_118.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Bytes.AllocatorInstance.Data);
    }
    FMemoryImageWriter::~FMemoryImageWriter(&local_1a0);
    DestructItems<TRefCountPtr<FMemoryImageSection>,int>
              ((TRefCountPtr<FMemoryImageSection> *)local_158.Sections.AllocatorInstance.Data,
               local_158.Sections.ArrayNum);
    if (local_158.Sections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Sections.AllocatorInstance.Data);
    }
    if (pFVar17 != (FPointerTableBase *)0x0) {
      (**(code **)*pFVar17)(pFVar17,1);
    }
    pFVar3 = this_00->ActiveFPLB;
    if (pFVar3->EndFastPathLoadBuffer < pFVar3->StartFastPathLoadBuffer + 4) {
      local_198 = (atomic<float>)0x0;
      (**(code **)(this_00->_padding_ + 0x188))(this_00,&local_198,4);
      if (1 < (uint)local_198) {
        FArchiveState::SetError(this_00);
      }
      FShaderMapResourceCode::Serialize((this->Code).Reference,param_1);
    }
    else {
      pFVar3->StartFastPathLoadBuffer = pFVar3->StartFastPathLoadBuffer + 4;
      FShaderMapResourceCode::Serialize((this->Code).Reference,param_1);
    }
    goto LAB_145eb405a;
  }
  if ((this->PointerTable != (FShaderMapPointerTable *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!PointerTable",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                          ,0x151,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  pFVar18 = (FShaderMapPointerTable *)(**(code **)(this->_padding_ + 0x28))(this);
  pFVar23 = (FShaderMapResource_InlineCode *)0x0;
  this->PointerTable = pFVar18;
  local_190.MaxFieldAlignment = 0xffffffff;
  local_190.Flags = 0;
  pFVar19 = (FTypeLayoutDesc *)(**(code **)(this->_padding_ + 0x20))(this);
  FMemoryImageResult::LoadFromArchive
            (&local_170,(FArchive *)this_00,pFVar19,(FPointerTableBase *)pFVar18,&local_190);
  EVar13 = GetShaderPermutationFlags(&local_190);
  this->PermutationFlags = EVar13;
  bVar10 = false;
  pFVar3 = this_00->ActiveFPLB;
  puVar1 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar1) {
    local_1a8[0] = 0;
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_1a8,4);
    if (1 < local_1a8[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar14 = local_1a8[0];
    if (this_00->ArIsLoading != 0) goto LAB_145eb3aac;
  }
  else {
    uVar14 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar1;
LAB_145eb3aac:
    bVar10 = uVar14 != 0;
  }
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  (**(code **)(this_00->_padding_ + 0x178))(this_00,&local_188);
  EVar12 = FGenericDataDrivenShaderPlatformInfo::GetShaderPlatformFromName(local_188);
  local_1a8[0] = CONCAT22(local_1a8[0]._2_2_,EVar12);
  if (bVar10) {
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    (**(code **)(this_00->_padding_ + 0x188))(this_00,&stack0xffffffffffffffa8,0x14);
    TVar20 = FShaderCodeLibrary::LoadResource
                       ((FSHAHash *)&local_c8,(FArchive *)&stack0xffffffffffffffa8);
    pTVar31 = &this->Resource;
    if ((FShaderMapResource *)pTVar31 != TVar20.Reference) {
      pFVar4 = pTVar31->Reference;
      pTVar31->Reference = (FShaderMapResource *)(TVar20.Reference)->_padding_;
      (TVar20.Reference)->_padding_ = 0;
      if (pFVar4 != (FShaderMapResource *)0x0) {
        FShaderMapResource::Release(pFVar4);
      }
    }
    if (local_c8 != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_c8);
    }
    if (pTVar31->Reference == (FShaderMapResource *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar29 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar29,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
          && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
              bHasNullRHIOnCommandline == false)) &&
         ((EVar12 == GMaxRHIShaderPlatform && (1 < (byte)LogShaders._0_1_)))) {
        ::FName::ToString(&param_1->SerializingAsset,&local_68);
        ::LexToString(&local_78,(EShaderPlatform)local_1a8[0],true);
        local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_180.Data.ArrayNum = 0;
        local_180.Data.ArrayMax = 0;
        BytesToHex((uchar *)&stack0xffffffffffffffa8,0x14,&local_180);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    pFVar21 = ::operator_new(0x48);
    pFVar22 = pFVar23;
    if (pFVar21 != (FShaderMapResource_InlineCode *)0x0) {
      *(undefined4 *)&pFVar21->_padding_ = 0;
      pFVar21->_padding_ = (longlong)&___7FShaderMapResourceCode__6B_;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      *(undefined4 *)&pFVar21->_padding_ = 0;
      (((FWindowsRecursiveMutex *)&pFVar21->_padding_)->CriticalSection).Opaque1[0] = (void *)0x0;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      pFVar22 = pFVar21;
    }
    pFVar21 = (FShaderMapResource_InlineCode *)(this->Code).Reference;
    if (pFVar21 != pFVar22) {
      (this->Code).Reference = (FShaderMapResourceCode *)pFVar22;
      if (pFVar22 != (FShaderMapResource_InlineCode *)0x0) {
        LOCK();
        *(int *)&pFVar22->_padding_ = (int)pFVar22->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar21 != (FShaderMapResource_InlineCode *)0x0) {
        plVar2 = &pFVar21->_padding_;
        LOCK();
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
          (**(code **)pFVar21->_padding_)(pFVar21,1);
        }
      }
    }
    FShaderMapResourceCode::Serialize((this->Code).Reference,param_1);
    pFVar22 = ::operator_new(0x80);
    if (pFVar22 != (FShaderMapResource_InlineCode *)0x0) {
      pFVar23 = FShaderMapResource_InlineCode::FShaderMapResource_InlineCode
                          (pFVar22,EVar12,(this->Code).Reference);
    }
    pFVar22 = (FShaderMapResource_InlineCode *)(this->Resource).Reference;
    if (pFVar22 != pFVar23) {
      (this->Resource).Reference = (FShaderMapResource *)pFVar23;
      if (pFVar23 != (FShaderMapResource_InlineCode *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar23->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar23->_padding_ + 1);
        UNLOCK();
      }
      if (pFVar22 != (FShaderMapResource_InlineCode *)0x0) {
        FShaderMapResource::Release((FShaderMapResource *)pFVar22);
      }
    }
  }
  pTVar31 = &this->Resource;
  if (local_170.Object != (FShaderMapContent *)0x0) {
    if (pTVar31->Reference != (FShaderMapResource *)0x0) {
      local_b8 = local_170.TypeDesc;
      pFStack_b0 = local_170.Object;
      local_a8 = local_170.FrozenSize;
      (this->Content).TypeDesc = local_170.TypeDesc;
      (this->Content).Object = local_170.Object;
      *(ulonglong *)&(this->Content).FrozenSize = CONCAT44(uStack_a4,local_170.FrozenSize);
      if ((this->Content).FrozenSize == 0) {
        TMemoryImageObject<FShaderMapContent>::Freeze
                  (&this->Content,(FPointerTableBase *)this->PointerTable);
      }
      (**(code **)(this->_padding_ + 0x30))(this);
      uVar14 = FShaderMapContent::GetNumShaders((this->Content).Object);
      uVar30 = (ulonglong)(this->Content).FrozenSize;
      this->NumFrozenShaders = uVar14;
      if (uVar30 != 0) {
        FVar25 = StatPtr_STAT_Shaders_ShaderMemory;
        if (StatPtr_STAT_Shaders_ShaderMemory ==
            (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)0x0) {
          pFVar24 = ::FName::FName(&local_a0,"STAT_Shaders_ShaderMemory");
          FVar25 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderMemory,
                              *pFVar24,L"Shader Memory","STATGROUP_Shaders","STATCAT_Advanced",
                              L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar5 = *(FName *)FVar25;
        local_1a0.Section._0_4_ = FVar5.ComparisonIndex.Value;
        local_1a0.Section._4_4_ = FVar5.Number;
        FThreadStats::AddMessage<__int64>(FVar5,Add,uVar30,false);
      }
      uVar14 = this->NumFrozenShaders;
      if ((ulonglong)uVar14 != 0) {
        FVar26 = StatPtr_STAT_Shaders_NumShadersLoaded;
        if (StatPtr_STAT_Shaders_NumShadersLoaded ==
            (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)0x0) {
          pFVar24 = ::FName::FName(&local_98,"STAT_Shaders_NumShadersLoaded");
          FVar26 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersLoaded,
                              *pFVar24,L"Num Shaders Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                              L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
        }
        FVar5 = *(FName *)FVar26;
        local_1a0.Section._0_4_ = FVar5.ComparisonIndex.Value;
        local_1a0.Section._4_4_ = FVar5.Number;
        FThreadStats::AddMessage<__int64>(FVar5,Add,(ulonglong)uVar14,false);
      }
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pFVar28 = FCsvProfiler::Get();
        uVar14 = _GCsvCategory_Shaders.Index;
        pFVar24 = ::FName::FName(&local_90,L"ShaderMemoryMB");
        CsvStatShaderMemoryMB =
             FCsvProfiler::GetOrCreatePersistentCustomStatFloat(pFVar28,*pFVar24,uVar14,false);
        _Init_thread_footer(&::_TSS0);
      }
      if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pFVar28 = FCsvProfiler::Get();
        uVar14 = _GCsvCategory_Shaders.Index;
        pFVar24 = ::FName::FName(&local_88,L"NumShadersLoaded");
        CsvStatNumShadersLoaded =
             FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar28,*pFVar24,uVar14,false);
        _Init_thread_footer(&::_TSS1);
      }
      pTVar9 = CsvStatShaderMemoryMB;
      local_198 = CsvStatShaderMemoryMB->Value;
      fVar32 = (float)(this->Content).FrozenSize * __real_35800000;
      aVar15 = local_198;
      do {
        LOCK();
        aVar16 = pTVar9->Value;
        bVar10 = aVar15 == aVar16;
        if (bVar10) {
          pTVar9->Value = (atomic<float>)((float)aVar15 + fVar32);
          aVar16 = aVar15;
        }
        UNLOCK();
        aVar15 = aVar16;
      } while (!bVar10);
      LOCK();
      CsvStatNumShadersLoaded->Value =
           (atomic<int>)((int)CsvStatNumShadersLoaded->Value + this->NumFrozenShaders);
      UNLOCK();
      BeginInitResource((FRenderResource *)pTVar31->Reference,(FRenderCommandPipe *)0x0);
      uVar14 = (**(code **)(pTVar31->Reference->_padding_ + 0x70))();
      if (uVar14 != 0) {
        FVar27 = StatPtr_STAT_Shaders_ShaderResourceMemory;
        if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
            (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
          pFVar24 = ::FName::FName(&local_80,"STAT_Shaders_ShaderResourceMemory");
          FVar27 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_Shaders_ShaderResourceMemory,*pFVar24,
                              L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                              L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar5 = *(FName *)FVar27;
        local_1a0.Section._0_4_ = FVar5.ComparisonIndex.Value;
        local_1a0.Section._4_4_ = FVar5.Number;
        FThreadStats::AddMessage<__int64>(FVar5,Add,(ulonglong)uVar14,false);
      }
      goto LAB_145eb405a;
    }
    InternalDeleteObjectFromLayout
              (local_170.Object,local_170.TypeDesc,(FPointerTableBase *)this->PointerTable,
               local_170.FrozenSize != 0);
    if (local_170.FrozenSize != 0) {
      FMemory::Free(local_170.Object);
    }
    local_170.Object = (FShaderMapContent *)0x0;
    local_170.FrozenSize = 0;
  }
  pFVar4 = pTVar31->Reference;
  if (pFVar4 != (FShaderMapResource *)0x0) {
    pTVar31->Reference = (FShaderMapResource *)0x0;
    FShaderMapResource::Release(pFVar4);
  }
LAB_145eb405a:
  pFVar7 = (this->Content).Object;
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(&local_194);
  return pFVar7 != (FShaderMapContent *)0x0;
}

// ToString @ 145eba3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FString * __thiscall FShaderMapBase::ToString(FShaderMapBase *this,FString *__return_storage_ptr__)

{
  FTypeLayoutDesc *pFVar1;
  FShaderMapResourceCode *this_00;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  undefined1 auStack_fa88 [32];
  FString local_fa68;
  FMemoryToStringContext local_fa58;
  TStringBuilderBase<wchar_t> local_fa38;
  wchar_t local_fa18 [32000];
  ulonglong local_18 [2];
  
  local_18[1] = 0x145eba3d5;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_fa88;
  local_fa38.Base = local_fa18;
  local_fa38.bIsDynamic = false;
  local_fa38.bIsExternal = false;
  local_fa38.CurPos = local_fa18;
  local_fa68.Data.AllocatorInstance.Data._0_4_ = 0xffffffff;
  local_fa38.End = (wchar_t *)local_18;
  local_fa58.Indent = 0;
  local_fa58.PrevPointerTable = (FPointerTableBase *)this->PointerTable;
  local_fa58.String = &local_fa38;
  local_fa68.Data.AllocatorInstance.Data._4_4_ = 0;
  FPlatformTypeLayoutParameters::InitializeForCurrent((FPlatformTypeLayoutParameters *)&local_fa68);
  pFVar1 = (this->Content).TypeDesc;
  (*pFVar1->ToStringFunc)
            ((this->Content).Object,pFVar1,(FPlatformTypeLayoutParameters *)&local_fa68,&local_fa58)
  ;
  this_00 = (this->Code).Reference;
  if (this_00 != (FShaderMapResourceCode *)0x0) {
    FShaderMapResourceCode::ToString(this_00,&local_fa38);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = ::FString::ConstructFromPtrSize
                     (&local_fa68,local_fa38.Base,
                      (int)((longlong)local_fa38.CurPos - (longlong)local_fa38.Base >> 1));
  if (__return_storage_ptr__ != pFVar3) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if ((void *)CONCAT44(local_fa68.Data.AllocatorInstance.Data._4_4_,
                       (uint)local_fa68.Data.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_fa68.Data.AllocatorInstance.Data._4_4_,
                                   (uint)local_fa68.Data.AllocatorInstance.Data));
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_fa38);
  return __return_storage_ptr__;
}

// UnfreezeContent @ 145ebb1a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderMapBase::UnfreezeContent(FShaderMapBase *this)

{
  FName FVar1;
  longlong lVar2;
  FShaderMapPointerTable *pFVar3;
  FShaderMapContent *pFVar4;
  TCsvPersistentCustomStat<float> *pTVar5;
  uint uVar6;
  atomic<float> aVar7;
  atomic<float> aVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded> FVar13;
  FShaderMapContent *pFVar14;
  FCsvProfiler *pFVar15;
  uchar auVar16 [8];
  uchar auVar17 [8];
  FNameEntryId FVar18;
  bool bVar19;
  float fVar20;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_68;
  FStatMessage local_58;
  
  auVar16[4] = '\0';
  auVar16[5] = '\0';
  auVar16[6] = '\0';
  auVar16[7] = '\0';
  auVar16._0_4_ = (this->Content).FrozenSize;
  if (auVar16 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_Shaders_ShaderMemory;
    if (StatPtr_STAT_Shaders_ShaderMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_res20,"STAT_Shaders_ShaderMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderMemory,*pFVar9,
                          L"Shader Memory","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar10;
    FVar18 = FVar1.ComparisonIndex.Value;
    uVar6 = FVar1.Number;
    local_res8.ComparisonIndex.Value = FVar18.Value;
    local_res8.Number = uVar6;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_68.NameAndInfo.Number = uVar6 & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_68.StatData.Pad = auVar16;
      local_68.NameAndInfo.Index.Value = FVar18.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_68);
      FStatsTrace::Add(&local_res10,-(longlong)auVar16);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  auVar17[4] = '\0';
  auVar17[5] = '\0';
  auVar17[6] = '\0';
  auVar17[7] = '\0';
  auVar17._0_4_ = this->NumFrozenShaders;
  if (auVar17 != (uchar  [8])0x0) {
    FVar13 = StatPtr_STAT_Shaders_NumShadersLoaded;
    if (StatPtr_STAT_Shaders_NumShadersLoaded ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)0x0) {
      pFVar9 = ::FName::FName((FName *)&local_68,"STAT_Shaders_NumShadersLoaded");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersLoaded,
                          *pFVar9,L"Num Shaders Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar13;
    FVar18 = FVar1.ComparisonIndex.Value;
    uVar6 = FVar1.Number;
    local_res8.ComparisonIndex.Value = FVar18.Value;
    local_res8.Number = uVar6;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_58.NameAndInfo.Number = uVar6 & 0xffffbfff | 0xb000;
      local_res18 = FVar1;
      local_58.StatData.Pad = auVar17;
      local_58.NameAndInfo.Index.Value = FVar18.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_58);
      FStatsTrace::Add(&local_res18,-(longlong)auVar17);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar15 = FCsvProfiler::Get();
    uVar6 = _GCsvCategory_Shaders.Index;
    pFVar9 = ::FName::FName(&local_res8,L"ShaderMemoryMB");
    CsvStatShaderMemoryMB =
         FCsvProfiler::GetOrCreatePersistentCustomStatFloat(pFVar15,*pFVar9,uVar6,false);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar15 = FCsvProfiler::Get();
    uVar6 = _GCsvCategory_Shaders.Index;
    pFVar9 = ::FName::FName(&local_res8,L"NumShadersLoaded");
    CsvStatNumShadersLoaded =
         FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar15,*pFVar9,uVar6,false);
    _Init_thread_footer(&::_TSS1);
  }
  pTVar5 = CsvStatShaderMemoryMB;
  local_res8.ComparisonIndex.Value = *(uint *)&CsvStatShaderMemoryMB->Value;
  fVar20 = (float)(this->Content).FrozenSize * __real_b5800000;
  aVar7 = (atomic<float>)local_res8.ComparisonIndex.Value;
  do {
    LOCK();
    aVar8 = pTVar5->Value;
    bVar19 = aVar7 == aVar8;
    if (bVar19) {
      pTVar5->Value = (atomic<float>)((float)aVar7 + fVar20);
      aVar8 = aVar7;
    }
    UNLOCK();
    aVar7 = aVar8;
  } while (!bVar19);
  LOCK();
  CsvStatNumShadersLoaded->Value =
       (atomic<int>)((int)CsvStatNumShadersLoaded->Value - this->NumFrozenShaders);
  UNLOCK();
  if ((this->Content).FrozenSize != 0) {
    pFVar3 = this->PointerTable;
    pFVar14 = UnfreezeMemoryImageObject
                        ((this->Content).Object,(this->Content).TypeDesc,(FPointerTableBase *)pFVar3
                        );
    pFVar4 = (this->Content).Object;
    if ((pFVar4 != (FShaderMapContent *)0x0) &&
       (InternalDeleteObjectFromLayout
                  (pFVar4,(this->Content).TypeDesc,(FPointerTableBase *)pFVar3,
                   (this->Content).FrozenSize != 0), (this->Content).FrozenSize != 0)) {
      FMemory::Free((this->Content).Object);
    }
    (this->Content).Object = pFVar14;
    (this->Content).FrozenSize = 0;
  }
  this->NumFrozenShaders = 0;
  return;
}

