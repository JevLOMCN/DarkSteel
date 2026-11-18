// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 12

// <lambda_1> @ 145e40160

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

<lambda_1> * __thiscall
`FShaderLibraryInstance::PreloadShader'::__l5::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  int iVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  
  *(FShaderLibraryInstance **)this = param_1->__this;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  FVar3 = (param_1->PreloadCompletionEvents).AllocatorInstance.SecondaryData;
  iVar1 = (param_1->PreloadCompletionEvents).ArrayNum;
  *(int *)((longlong)this + 0x30) = iVar1;
  if (FVar3 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar3 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&param_1->PreloadCompletionEvents;
  }
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0x34) = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,iVar1,0,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)this + 8),
               iVar1,(int *)((longlong)this + 0x34));
    pFVar2 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)this + 0x28);
    if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)this + 0x28) ==
        (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
      pFVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)this + 8);
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              (pFVar2,(TRefCountPtr<FBaseGraphTask> *)FVar3,iVar1);
  }
  return this;
}

// <lambda_1> @ 145e40210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

<lambda_1> * __thiscall
`FShaderLibraryInstance::AddResource'::__l14::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  int iVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  
  *(FShaderLibraryInstance **)this = param_1->__this;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  FVar3 = (param_1->PreloadCompletionEvents).AllocatorInstance.SecondaryData;
  iVar1 = (param_1->PreloadCompletionEvents).ArrayNum;
  *(int *)((longlong)this + 0x30) = iVar1;
  if (FVar3 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar3 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&param_1->PreloadCompletionEvents;
  }
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0x34) = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,iVar1,0,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)this + 8),
               iVar1,(int *)((longlong)this + 0x34));
    pFVar2 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)this + 0x28);
    if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)this + 0x28) ==
        (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
      pFVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)this + 8);
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              (pFVar2,(TRefCountPtr<FBaseGraphTask> *)FVar3,iVar1);
  }
  return this;
}

// ~FShaderLibraryInstance @ 145e44360

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderLibraryInstance::~FShaderLibraryInstance(FShaderLibraryInstance *this)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FRHIShaderLibrary *this_00;
  code *pcVar4;
  bool bVar5;
  BOOLEAN BVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uchar auVar12 [8];
  longlong lVar13;
  FPlatformRWLock *SRWLock;
  TSparseArray<TSparseSetElement<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar14;
  FNameEntryId FVar15;
  undefined1 local_res8 [8];
  uint local_res10;
  uint uStackX_14;
  FName local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  pTVar14 = (TSparseArray<TSparseSetElement<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&this->Resources;
  pFVar10 = (((TArray<FShaderMapResource_SharedCode_*,TSizedDefaultAllocator<32>_> *)pTVar14)->
            AllocatorInstance).Data;
  iVar1 = (this->Resources).ArrayNum;
  pFVar3 = pFVar10 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Resources).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FShaderMapResource_SharedCode_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar10 == pFVar3) break;
    if (*(FRenderResource **)pFVar10 != (FRenderResource *)0x0) {
      BeginReleaseResource(*(FRenderResource **)pFVar10,(FRenderCommandPipe *)0x0);
    }
    pFVar10 = pFVar10 + 8;
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0x411,
                         L"Shader library closure is expected to happen only on the game thread, at the \'top\' of the pipeline"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FlushRenderingCommands();
  (**(code **)(((this->Library).Reference)->_padding_ + 0xc0))();
  uVar7 = GetSizeBytes(this);
  auVar12[4] = '\0';
  auVar12[5] = '\0';
  auVar12[6] = '\0';
  auVar12[7] = '\0';
  auVar12[0] = (char)uVar7;
  auVar12[1] = (char)(uVar7 >> 8);
  auVar12[2] = (char)(uVar7 >> 0x10);
  auVar12[3] = (char)(uVar7 >> 0x18);
  if (uVar7 != 0) {
    FVar9 = StatPtr_STAT_Shaders_ShaderResourceMemory;
    if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_res20,"STAT_Shaders_ShaderResourceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderResourceMemory,
                         *pFVar8,L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                         L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar9;
    FVar15 = FVar2.ComparisonIndex.Value;
    uVar7 = FVar2.Number;
    local_res10 = FVar15.Value;
    uStackX_14 = uVar7;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_48.NameAndInfo.Number = uVar7 & 0xffffbfff | 0xb000;
      local_res18 = FVar2;
      local_48.StatData.Pad = auVar12;
      local_48.NameAndInfo.Index.Value = FVar15.Value;
      FThreadStats::AddStatMessage(this_01,&local_48);
      FStatsTrace::Add(&local_res18,-(longlong)auVar12);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  pFVar3 = (this->ShaderCodeDirectory).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SRWLock = &this->ResourceLock;
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar6 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  lVar11 = 0x20;
  lVar13 = 0x20;
  do {
    SRWLock = SRWLock + -1;
    lVar13 = lVar13 + -1;
    BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (BVar6 == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  } while (lVar13 != 0);
  pFVar3 = (((TArray<FShaderMapResource_SharedCode_*,TSizedDefaultAllocator<32>_> *)pTVar14)->
           AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  do {
    lVar11 = lVar11 + -1;
    *(undefined4 *)((longlong)(pTVar14 + 0xffffffffffffffff) + 0x30) = 0;
    if (*(void **)((longlong)(pTVar14 + 0xffffffffffffffff) + 0x28) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(pTVar14 + 0xffffffffffffffff) + 0x28));
    }
    TSparseArray<TSparseSetElement<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)(pTVar14 + 0xfffffffffffffffe) + 0x20U));
    pTVar14 = (TSparseArray<TSparseSetElement<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)((longlong)(pTVar14 + 0xfffffffffffffffe) + 0x20U);
  } while (lVar11 != 0);
  this_00 = (this->Library).Reference;
  if (this_00 != (FRHIShaderLibrary *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// AddResource @ 145e4b100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

TRefCountPtr<FShaderMapResource_SharedCode> __thiscall
FShaderLibraryInstance::AddResource(FShaderLibraryInstance *this,int param_1,FArchive *param_2)

{
  int iVar1;
  FShaderMapResource *pFVar2;
  FShaderMapResource *pFVar3;
  FRHIShaderLibrary *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  TRefCountPtr<FShaderMapResource_SharedCode> TVar11;
  FShaderMapResource_SharedCode *pFVar12;
  longlong *plVar13;
  TRefCountPtr<FBaseGraphTask> *pTVar14;
  undefined4 in_register_00000014;
  FShaderMapResource_SharedCode *pFVar15;
  uint uVar16;
  longlong *in_R9;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong *local_118;
  FBaseGraphTask *local_110;
  longlong lStack_108;
  longlong local_100;
  longlong lStack_f8;
  FShaderLibraryInstance *local_f0;
  TRefCountPtr<FBaseGraphTask> local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  TRefCountPtr<FBaseGraphTask> local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  TRefCountPtr<FBaseGraphTask> *local_98;
  int local_90;
  undefined4 local_8c;
  code *local_88 [2];
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  pFVar15 = (FShaderMapResource_SharedCode *)CONCAT44(in_register_00000014,param_1);
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  uVar16 = (uint)param_2;
  lVar18 = (longlong)(int)uVar16;
  pFVar15->_padding_ = 0;
  bVar8 = false;
  local_118 = in_R9;
  AcquireSRWLockExclusive((PSRWLOCK)&this->ResourceLock);
  iVar1 = (this->Resources).ArrayNum;
  uVar17 = ~uVar16 >> 0x1f;
  uVar10 = 0;
  if ((int)uVar16 < iVar1) {
    uVar10 = uVar17;
  }
  if ((uVar10 == 0) &&
     (local_128 = lVar18, local_120 = (longlong)iVar1,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar5 = (code *)swi(3);
    TVar11.Reference = (FShaderMapResource_SharedCode *)(*pcVar5)();
    return (TRefCountPtr<FShaderMapResource_SharedCode>)TVar11.Reference;
  }
  pFVar2 = *(FShaderMapResource **)((this->Resources).AllocatorInstance.Data + lVar18 * 8);
  if (pFVar2 == (FShaderMapResource *)0x0) {
    pFVar12 = ::operator_new(0x88);
    if (pFVar12 == (FShaderMapResource_SharedCode *)0x0) {
      pFVar12 = (FShaderMapResource_SharedCode *)0x0;
    }
    else {
      pFVar12 = FShaderMapResource_SharedCode::FShaderMapResource_SharedCode(pFVar12,this,uVar16);
    }
    iVar1 = (this->Resources).ArrayNum;
    uVar10 = 0;
    if ((int)uVar16 < iVar1) {
      uVar10 = uVar17;
    }
    if ((uVar10 == 0) &&
       (local_128 = lVar18, local_120 = (longlong)iVar1,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      TVar11.Reference = (FShaderMapResource_SharedCode *)(*pcVar5)();
      return (TRefCountPtr<FShaderMapResource_SharedCode>)TVar11.Reference;
    }
    *(FShaderMapResource_SharedCode **)((this->Resources).AllocatorInstance.Data + lVar18 * 8) =
         pFVar12;
    iVar1 = (this->Resources).ArrayNum;
    uVar10 = 0;
    if ((int)uVar16 < iVar1) {
      uVar10 = uVar17;
    }
    if ((uVar10 == 0) &&
       (local_128 = lVar18, local_120 = (longlong)iVar1,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      TVar11.Reference = (FShaderMapResource_SharedCode *)(*pcVar5)();
      return (TRefCountPtr<FShaderMapResource_SharedCode>)TVar11.Reference;
    }
    pFVar2 = (FShaderMapResource *)pFVar15->_padding_;
    pFVar3 = *(FShaderMapResource **)((this->Resources).AllocatorInstance.Data + lVar18 * 8);
    if (pFVar2 != pFVar3) {
      pFVar15->_padding_ = (longlong)pFVar3;
      if (pFVar3 != (FShaderMapResource *)0x0) {
        FShaderMapResource::AddRef(pFVar3);
      }
      if (pFVar2 != (FShaderMapResource *)0x0) {
        FShaderMapResource::Release(pFVar2);
      }
    }
    if ((GRHIGlobals.LazyShaderCodeLoading == false) && (GPreloadShaderMaps != 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
  }
  else {
    pFVar3 = (FShaderMapResource *)pFVar15->_padding_;
    if (pFVar3 != pFVar2) {
      pFVar15->_padding_ = (longlong)pFVar2;
      FShaderMapResource::AddRef(pFVar2);
      if (pFVar3 != (FShaderMapResource *)0x0) {
        FShaderMapResource::Release(pFVar3);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ResourceLock);
  if (bVar8) {
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_class_TRefCountPtr<FShaderMapResource_SharedCode>___cdecl_FShaderLibraryInstance::AddResource(int,FArchive*___ptr64)___ptr64'
                  ::__l11::__CpuProfilerEventSpecId1152,"FShaderLibraryInstance_PreloadShaderMap",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                 ,0x480);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_class_TRefCountPtr<FShaderMapResource_SharedCode>___cdecl_FShaderLibraryInstance::AddResource(int,FArchive*___ptr64)___ptr64'
                 ::__l11::__CpuProfilerEventSpecId1152);
    }
    pFVar4 = (this->Library).Reference;
    local_8c = 4;
    local_98 = (TRefCountPtr<FBaseGraphTask> *)0x0;
    local_90 = 0;
    uVar9 = (**(code **)(pFVar4->_padding_ + 0x88))
                      (pFVar4,(ulonglong)param_2 & 0xffffffff,&local_b8);
    uVar6 = local_8c;
    iVar1 = local_90;
    pTVar14 = local_98;
    *(undefined1 *)(pFVar15->_padding_ + 0x84) = uVar9;
    if ((in_R9 != (longlong *)0x0) && (0 < local_90)) {
      if (local_98 == (TRefCountPtr<FBaseGraphTask> *)0x0) {
        local_e8.Reference = local_b8.Reference;
        lStack_e0 = lStack_b0;
        local_d8 = local_a8;
        lStack_d0 = lStack_a0;
      }
      local_8c = 4;
      local_98 = (TRefCountPtr<FBaseGraphTask> *)0x0;
      local_90 = 0;
      local_88[0] = (code *)0x0;
      local_110 = local_e8.Reference;
      lStack_108 = lStack_e0;
      local_100 = local_d8;
      lStack_f8 = lStack_d0;
      local_f0 = this;
      local_60 = FMemory::Malloc(0x40,8);
      local_60[1] = (longlong)this;
      local_60[6] = 0;
      *local_60 = (longlong)
                  &
                  ___7__TFunction_OwnedObject_V<lambda_1>__O___AddResource_FShaderLibraryInstance__QEAA_AV__TRefCountPtr_VFShaderMapResource_SharedCode____HPEAVFArchive___Z__0A__00_Function_Private_Core_UE__6B_
      ;
      if (pTVar14 == (TRefCountPtr<FBaseGraphTask> *)0x0) {
        local_60[2] = (longlong)local_110;
        local_60[3] = lStack_108;
        local_60[4] = local_100;
        local_60[5] = lStack_f8;
      }
      local_60[6] = (longlong)pTVar14;
      *(int *)(local_60 + 7) = iVar1;
      *(undefined4 *)((longlong)local_60 + 0x3c) = uVar6;
      if (local_60 != (longlong *)&DAT_fffffffffffffff8) {
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FShaderLibraryInstance::AddResource'::__l14::<lambda_1>,bool,double>
                      ::Call;
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 4;
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>(&local_e8,0);
      (**(code **)(*local_118 + 0x250))(local_118,local_88);
      if (local_88[0] != (code *)0x0) {
        plVar13 = local_78;
        if (local_60 != (longlong *)0x0) {
          plVar13 = local_60;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    pTVar14 = &local_b8;
    if (local_98 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      pTVar14 = local_98;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar14,local_90);
    if (local_98 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      FMemory::Free(local_98);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return (TRefCountPtr<FShaderMapResource_SharedCode>)pFVar15;
}

// Create @ 145e4fd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShaderLibraryInstance * __cdecl
FShaderLibraryInstance::Create(EShaderPlatform param_1,FString *param_2,FString *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  TEventRef<unsigned_int> TVar10;
  void *pvVar11;
  TStringBuilderBase<wchar_t> *this;
  FShaderLibraryInstance *pFVar12;
  FIoDispatcher *pFVar13;
  FName FVar14;
  FString *pFVar15;
  FString *pFVar16;
  IFileManager *pIVar17;
  FArchive *this_00;
  wchar_t *pwVar18;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar19;
  FShaderLibraryInstance *pFVar20;
  TMap<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
  *pTVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar23;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FWriteBuffer *pFVar24;
  longlong lVar25;
  ulong64 uVar26;
  FName FVar27;
  FScriptContainerElement *pFVar28;
  ForAnyElementType FVar29;
  uchar auVar30 [8];
  bool bVar31;
  undefined1 auStackY_608 [32];
  uint local_5a4 [3];
  FString local_598;
  ForAnyElementType local_588;
  int local_580 [2];
  FName local_578;
  FLLMScope local_570 [2];
  FString local_568;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  FName local_540;
  FName local_538;
  FName local_530;
  FMemScope local_528;
  FString local_520;
  FStatMessage local_510;
  FString local_500;
  FName local_4f0;
  FName local_4e8;
  FName local_4e0;
  FName local_4d8;
  FName local_4d0;
  FName local_4c8 [2];
  FName local_4b8;
  FName local_4b0;
  FString local_4a8;
  FString local_498;
  undefined4 *local_488;
  longlong local_480;
  TStringBuilderBase<wchar_t> local_478;
  wchar_t local_458 [520];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_608;
  bVar31 = false;
  local_5a4[0] = 0;
  FLLMScope::FLLMScope(local_570,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_528,Shaders,true);
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_558 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_558;
  }
  else {
    if ((param_3->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_4f0,pwVar18);
    TVar10 = FStringTrace::GetNameRef(&local_4e8);
  }
  uVar1 = *(undefined8 *)TVar10;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_550 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_550;
  }
  else {
    ::FName::FName(&local_4e0,L"ShaderLibraryInstance");
    TVar10 = FStringTrace::GetNameRef(&local_4d8);
  }
  uVar2 = *(undefined8 *)TVar10;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_548 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_548;
  }
  else {
    pFVar28 = (param_2->Data).AllocatorInstance.Data;
    local_478.Base = local_458;
    local_478.End = (wchar_t *)local_48;
    local_478.bIsDynamic = false;
    local_478.bIsExternal = false;
    local_478.CurPos = local_458;
    iVar7 = (param_2->Data).ArrayNum;
    iVar8 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar8 = 0;
    }
    uVar26 = (ulong64)iVar8;
    if (local_48 < local_458 + uVar26) {
      TStringBuilderBase<wchar_t>::Extend(&local_478,uVar26);
    }
    if (iVar8 != 0) {
      pvVar11 = FGenericPlatformString::Memcpy(local_478.CurPos,pFVar28,uVar26 * 2);
      local_478.CurPos = (wchar_t *)((longlong)pvVar11 + uVar26 * 2);
    }
    this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_478,L"/",1);
    iVar8 = (param_3->Data).ArrayNum;
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (this,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar7);
    if (local_478.End < local_478.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_478,1);
    }
    *local_478.CurPos = L'\0';
    ::FName::FName(&local_4d0,local_478.Base);
    TVar10 = FStringTrace::GetNameRef(local_4c8);
    bVar31 = true;
  }
  uVar3 = *(undefined8 *)TVar10;
  if (bVar31) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
  }
  bVar31 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_488);
    bVar31 = true;
    *local_488 = (int)uVar1;
    local_488[1] = (int)uVar2;
    local_488[2] = (int)uVar3;
    *(undefined8 *)(local_480 + 0x28) = *(undefined8 *)(local_480 + 0x20);
  }
  FVar27.ComparisonIndex.Value = 0;
  FVar27.Number = 0;
  local_598.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_598.Data.ArrayNum = 0;
  local_598.Data.ArrayMax = 0;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xbb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FShaderLibraryInstance *)(*pcVar5)();
    return pFVar12;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Language == LANGUAGE_Metal) {
    (**(code **)(GDynamicRHI->_padding_ + 0xb0))(GDynamicRHI,&local_578,param_1,param_2);
    FVar27 = local_578;
    local_578.ComparisonIndex.Value = 0;
    local_578.Number = 0;
    if (&local_598 != param_2) {
      iVar7 = (param_2->Data).ArrayNum;
      pFVar28 = (param_2->Data).AllocatorInstance.Data;
      local_598.Data.ArrayNum = iVar7;
      if (((iVar7 != 0) || (local_598.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,local_598.Data.ArrayMax,(ForAnyElementType *)&local_598,iVar7,
                     &local_598.Data.ArrayMax), iVar7 != 0)) {
        memcpy(local_598.Data.AllocatorInstance.Data,pFVar28,(longlong)iVar7 * 2);
      }
    }
    if (FVar27 == (FName)0x0) goto LAB_145e50128;
  }
  else {
LAB_145e50128:
    bVar6 = UE::ShaderLibrary::Private::IsRunningWithIoStore();
    if (!bVar6) {
LAB_145e5017d:
      bVar6 = UE::ShaderLibrary::Private::ShouldLookForLooseCookedChunks();
      if (bVar6) {
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid(Platform)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                  ,0x9d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FShaderLibraryInstance *)(*pcVar5)();
          return pFVar12;
        }
        local_540 = FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Name;
        LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_538);
        pFVar15 = ::FName::ToString(&local_540,&local_498);
        pFVar16 = ::FName::ToString(&local_538,&local_4a8);
        ::FString::ConcatFC(&local_500,pFVar16,L"-");
        ::FString::ConcatFF(&local_520,&local_500,pFVar15);
        if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_500.Data.AllocatorInstance.Data);
        }
        if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
        }
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
        iVar7 = local_520.Data.ArrayNum + -1;
        if (local_520.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        pFVar22 = ::FName::FName(&local_4b8,iVar7,(wchar_t *)local_520.Data.AllocatorInstance.Data,
                                 FNAME_Add);
        GetCodeArchiveFilename(&local_568,param_2,param_3,*pFVar22);
        FVar29.Data = (FScriptContainerElement *)L"";
        if (local_568.Data.ArrayNum != 0) {
          FVar29.Data = local_568.Data.AllocatorInstance.Data;
        }
        pIVar17 = IFileManager::Get();
        this_00 = (FArchive *)(**(code **)((longlong)*pIVar17 + 0x18))(pIVar17,FVar29.Data,0);
        if (this_00 != (FArchive *)0x0) {
          local_5a4[0] = 0;
          puVar4 = (uint *)**(undefined8 **)&this_00->field_0x8;
          if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar4 + 1) {
            if ((this_00->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_5a4,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(this_00,local_5a4);
            }
          }
          else {
            local_5a4[0] = *puVar4;
            **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
          }
          if ((local_5a4[0] == GShaderCodeArchiveVersion) &&
             (FVar14 = (FName)FShaderCodeArchive::Create(param_1,this_00,&local_568,param_2,param_3)
             , FVar14 != (FName)0x0)) {
            FRHIResource::AddRef((FRHIResource *)FVar14);
            ::FString::operator=(&local_598,param_2);
            pwVar18 = FCommandLine::Get();
            bVar6 = FParse::Param(pwVar18,L"ShaderCodeLibrarySeparateLoadingCache");
            FVar27 = FVar14;
            if ((GShaderCodeLibrarySeparateLoadingCache != 0) || (bVar6)) {
              local_588.Data = (FScriptContainerElement *)0x0;
              local_580[0] = 0;
              local_580[1] = 0;
              iVar7 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,8,1,&local_588,local_580,local_580 + 1);
              *(undefined8 *)&local_588.Data[(longlong)iVar7 * 0x10].field_0x0 = 0;
              *(undefined8 *)(local_588.Data + (longlong)iVar7 * 0x10 + 8) = 0;
              if ((local_580[0] < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar12 = (FShaderLibraryInstance *)(*pcVar5)();
                return pFVar12;
              }
              FVar29.Data = local_588.Data;
                    /* WARNING: Load size is inaccurate */
              if (((*local_588.Data <= (FScriptContainerElement *)&local_568) &&
                  ((FScriptContainerElement *)&local_568 <
                   *local_588.Data + (longlong)*(int *)(local_588.Data + 0xc) * 0x10)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar12 = (FShaderLibraryInstance *)(*pcVar5)();
                return pFVar12;
              }
              iVar7 = *(int *)(FVar29.Data + 8);
              if (iVar7 == *(int *)(FVar29.Data + 0xc)) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,(ForAnyElementType *)FVar29.Data,(int *)(FVar29.Data + 0xc)
                                  );
              }
              _Src.Data = local_568.Data.AllocatorInstance.Data;
              *(int *)(FVar29.Data + 8) = iVar7 + 1;
                    /* WARNING: Load size is inaccurate */
              pFVar28 = *FVar29.Data + (longlong)iVar7 * 0x10;
              *(FScriptContainerElement **)pFVar28 = (FScriptContainerElement *)0x0;
              *(int *)(pFVar28 + 8) = local_568.Data.ArrayNum;
              if (local_568.Data.ArrayNum == 0) {
                *(int *)(pFVar28 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_568.Data.ArrayNum,0,(ForAnyElementType *)pFVar28,
                           local_568.Data.ArrayNum,(int *)(pFVar28 + 0xc));
                    /* WARNING: Load size is inaccurate */
                memcpy(*pFVar28,_Src.Data,(longlong)local_568.Data.ArrayNum * 2);
              }
              this_01 = FPlatformFileManager::Get();
              pIVar19 = FPlatformFileManager::GetPlatformFile(this_01);
              (**(code **)((longlong)*pIVar19 + 0x38))(pIVar19,&local_588);
              DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_588.Data,local_580[0])
              ;
              if ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_588.Data !=
                  (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_588.Data);
              }
            }
          }
          (*(code *)**(undefined8 **)this_00)(this_00);
        }
        if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.Data.AllocatorInstance.Data);
        }
        if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_520.Data.AllocatorInstance.Data);
        }
        if (FVar27 != (FName)0x0) goto LAB_145e50530;
      }
      pFVar12 = (FShaderLibraryInstance *)0x0;
      goto LAB_145e507a2;
    }
    pFVar13 = FIoDispatcher::Get();
    FVar14 = (FName)FIoStoreShaderCodeArchive::Create(param_1,param_3,pFVar13);
    if (FVar14 == (FName)0x0) {
      ::FString::Empty(&local_598);
      if (FVar27 == (FName)0x0) goto LAB_145e5017d;
    }
    else {
      FRHIResource::AddRef((FRHIResource *)FVar14);
      ::FString::Empty(&local_598);
      FVar27 = FVar14;
    }
  }
LAB_145e50530:
  pFVar20 = ::operator_new(0xb30);
  pFVar12 = (FShaderLibraryInstance *)0x0;
  if (pFVar20 != (FShaderLibraryInstance *)0x0) {
    (pFVar20->Library).Reference = (FRHIShaderLibrary *)0x0;
    lVar25 = 0x20;
    pTVar21 = pFVar20->RHIShaders;
    do {
      *(undefined8 *)pTVar21 = 0;
      *(undefined8 *)&pTVar21->field_0x8 = 0;
      *(undefined8 *)&pTVar21->field_0x20 = 0;
      *(undefined4 *)&pTVar21->field_0x28 = 0;
      *(undefined4 *)&pTVar21->field_0x2c = 0x80;
      *(undefined4 *)&pTVar21->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar21->field_0x34 = 0;
      *(undefined8 *)&pTVar21->field_0x40 = 0;
      *(undefined4 *)&pTVar21->field_0x48 = 0;
      pTVar21 = pTVar21 + 1;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    (pFVar20->Resources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->Resources).ArrayNum = 0;
    (pFVar20->Resources).ArrayMax = 0;
    memset(pFVar20->ShaderLocks,0,0x100);
    (pFVar20->ResourceLock).Mutex.Mutex.Ptr = (void *)0x0;
    (pFVar20->ShaderCodeDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->ShaderCodeDirectory).Data.ArrayNum = 0;
    (pFVar20->ShaderCodeDirectory).Data.ArrayMax = 0;
    pFVar12 = pFVar20;
  }
  FVar14 = (FName)(pFVar12->Library).Reference;
  if (FVar14 != FVar27) {
    (pFVar12->Library).Reference = (FRHIShaderLibrary *)FVar27;
    if (FVar27 != (FName)0x0) {
      FRHIResource::AddRef((FRHIResource *)FVar27);
    }
    if (FVar14 != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)FVar14);
    }
  }
  iVar7 = local_598.Data.ArrayNum + -1;
  if (local_598.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange
            (&pFVar12->ShaderCodeDirectory,(wchar_t *)local_598.Data.AllocatorInstance.Data,iVar7);
  iVar7 = (**(code **)(*(longlong *)FVar27 + 0x18))(FVar27);
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar7,&(pFVar12->Resources).AllocatorInstance,
                     &(pFVar12->Resources).ArrayNum,&(pFVar12->Resources).ArrayMax);
  memset((pFVar12->Resources).AllocatorInstance.Data + (longlong)iVar8 * 8,0,(longlong)iVar7 << 3);
  uVar9 = GetSizeBytes(pFVar12);
  auVar30[4] = '\0';
  auVar30[5] = '\0';
  auVar30[6] = '\0';
  auVar30[7] = '\0';
  auVar30[0] = (char)uVar9;
  auVar30[1] = (char)(uVar9 >> 8);
  auVar30[2] = (char)(uVar9 >> 0x10);
  auVar30[3] = (char)(uVar9 >> 0x18);
  if (uVar9 != 0) {
    FVar23 = StatPtr_STAT_Shaders_ShaderResourceMemory;
    if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
      pFVar22 = ::FName::FName(&local_4b0,"STAT_Shaders_ShaderResourceMemory");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderResourceMemory,
                          *pFVar22,L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar14 = *(FName *)FVar23;
    local_578 = FVar14;
    if (((FVar14 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      local_510.NameAndInfo.Number = FVar14.Number & 0xffffafff | 0xa000;
      local_530 = FVar14;
      local_510.StatData.Pad = auVar30;
      local_510.NameAndInfo.Index.Value = FVar14.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_02,&local_510);
      FStatsTrace::Add(&local_530,(long64)auVar30);
      if (this_02->ScopeCount == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
LAB_145e507a2:
  if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.Data.AllocatorInstance.Data);
  }
  if (FVar27 != (FName)0x0) {
    FRHIResource::Release((FRHIResource *)FVar27);
  }
  if (bVar31) {
    lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar25 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar24 = *(FWriteBuffer **)(lVar25 + 0x20);
    if ((int)pFVar24 - *(int *)&pFVar24->Cursor < 1) {
      pFVar24 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar24->Cursor = '\n';
    pFVar24->Cursor = pFVar24->Cursor + 1;
    pFVar24->Committed = pFVar24->Cursor;
  }
  FMemScope::~FMemScope(&local_528);
  FLLMScope::~FLLMScope(local_570);
  return pFVar12;
}

// GetOrCreateShader @ 145e596b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIShader> __thiscall
FShaderLibraryInstance::GetOrCreateShader(FShaderLibraryInstance *this,int param_1,bool param_2)

{
  FPlatformRWLock *SRWLock;
  FRHIResource *this_00;
  FRHIShaderLibrary *pFVar1;
  FRHIResource *pFVar2;
  FRHIShader *this_01;
  uint uVar3;
  uint *puVar4;
  FCachedRHIShader *pFVar5;
  FRHIShader *pFVar6;
  uint *puVar7;
  undefined4 in_register_00000014;
  FRHIShader *pFVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined7 in_register_00000081;
  undefined1 in_R9B;
  FRHIResource *local_res8;
  uint local_res18 [2];
  FCachedRHIShader local_38;
  
  pFVar8 = (FRHIShader *)CONCAT44(in_register_00000014,param_1);
  local_res18[0] = (uint)CONCAT71(in_register_00000081,param_2);
  pFVar8->_padding_ = 0;
  uVar10 = local_res18[0] & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  SRWLock = this->ShaderLocks + (int)uVar10;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (*(int *)&this->RHIShaders[(int)uVar10].field_0x8 !=
      *(int *)&this->RHIShaders[(int)uVar10].field_0x34) {
    puVar9 = *(undefined1 **)&this->RHIShaders[(int)uVar10].field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &this->RHIShaders[(int)uVar10].field_0x38;
    }
    uVar3 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&this->RHIShaders[(int)uVar10].field_0x48 - 1U &
                               local_res18[0]) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar3 * 0x20 +
                         *(longlong *)(this->RHIShaders + (int)uVar10));
        if (*puVar7 == local_res18[0]) {
          puVar4 = puVar7 + 2;
          if (puVar7 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 != (uint *)0x0) {
            pFVar2 = *(FRHIResource **)(puVar4 + 2);
            this_00 = (FRHIResource *)pFVar8->_padding_;
            if (this_00 != pFVar2) {
              pFVar8->_padding_ = (longlong)pFVar2;
              if (pFVar2 != (FRHIResource *)0x0) {
                FRHIResource::AddRef(pFVar2);
              }
              if (this_00 != (FRHIResource *)0x0) {
                FRHIResource::Release(this_00);
              }
            }
          }
          break;
        }
        uVar3 = puVar7[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  if (pFVar8->_padding_ == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_38.PreloadingState = NotPreloaded;
    local_38._1_7_ = 0;
    local_38.RHIShader.Reference = (FRHIShader *)0x0;
    pFVar5 = TMapBase<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
             ::FindOrAddImpl<int_const_&,FShaderLibraryInstance::FCachedRHIShader>
                       ((TMapBase<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
                         *)(this->RHIShaders + (int)uVar10),local_res18[0],(int *)local_res18,
                        &local_38);
    if (local_38.RHIShader.Reference != (FRHIShader *)0x0) {
      FRHIResource::Release((FRHIResource *)local_38.RHIShader.Reference);
    }
    if (pFVar5->PreloadingState == NotPreloaded) {
      pFVar5->PreloadingState = CannotPreload;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    pFVar1 = (this->Library).Reference;
    pFVar6 = (FRHIShader *)
             (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,&local_res8,local_res18[0],in_R9B);
    if (pFVar8 != pFVar6) {
      pFVar2 = (FRHIResource *)pFVar8->_padding_;
      pFVar8->_padding_ = pFVar6->_padding_;
      pFVar6->_padding_ = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (pFVar8->_padding_ != 0) {
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      local_38.PreloadingState = NotPreloaded;
      local_38._1_7_ = 0;
      local_38.RHIShader.Reference = (FRHIShader *)0x0;
      pFVar5 = TMapBase<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
               ::FindOrAddImpl<int_const_&,FShaderLibraryInstance::FCachedRHIShader>
                         ((TMapBase<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
                           *)(this->RHIShaders + (int)uVar10),local_res18[0],(int *)local_res18,
                          &local_38);
      if (local_38.RHIShader.Reference != (FRHIShader *)0x0) {
        FRHIResource::Release((FRHIResource *)local_38.RHIShader.Reference);
      }
      pFVar6 = (pFVar5->RHIShader).Reference;
      if (pFVar6 == (FRHIShader *)0x0) {
        pFVar6 = (FRHIShader *)pFVar8->_padding_;
        if (pFVar6 != (FRHIShader *)0x0) {
          (pFVar5->RHIShader).Reference = pFVar6;
          FRHIResource::AddRef((FRHIResource *)pFVar6);
        }
        if (pFVar5->PreloadingState == Preloaded) {
          ReleasePreloadedShader(this,local_res18[0]);
          pFVar5->PreloadingState = PreloadedAndCreated;
        }
      }
      else {
        this_01 = (FRHIShader *)pFVar8->_padding_;
        if (this_01 != pFVar6) {
          pFVar8->_padding_ = (longlong)pFVar6;
          FRHIResource::AddRef((FRHIResource *)pFVar6);
          if (this_01 != (FRHIShader *)0x0) {
            FRHIResource::Release((FRHIResource *)this_01);
          }
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return (TRefCountPtr<FRHIShader>)pFVar8;
}

// GetResource @ 145e59cb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FShaderMapResource_SharedCode> __thiscall
FShaderLibraryInstance::GetResource(FShaderLibraryInstance *this,int param_1)

{
  FShaderMapResource *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TRefCountPtr<FShaderMapResource_SharedCode> TVar4;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ResourceLock);
  uVar3 = 0;
  if ((int)in_R8D < (this->Resources).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Reference = (FShaderMapResource_SharedCode *)(*pcVar1)();
      return (TRefCountPtr<FShaderMapResource_SharedCode>)TVar4.Reference;
    }
  }
  this_00 = *(FShaderMapResource **)
             ((this->Resources).AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
  ((FShaderMapResource_SharedCode *)CONCAT44(in_register_00000014,param_1))->_padding_ =
       (longlong)this_00;
  if (this_00 != (FShaderMapResource *)0x0) {
    FShaderMapResource::AddRef(this_00);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->ResourceLock);
  return (TRefCountPtr<FShaderMapResource_SharedCode>)
         (FShaderMapResource_SharedCode *)CONCAT44(in_register_00000014,param_1);
}

// GetSizeBytes @ 145e5bc40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall FShaderLibraryInstance::GetSizeBytes(FShaderLibraryInstance *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  FPlatformRWLock *SRWLock;
  longlong lVar4;
  
  piVar2 = (int *)&this->RHIShaders[0].field_0x2c;
  iVar3 = 0;
  SRWLock = this->ShaderLocks;
  lVar4 = 0x20;
  do {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    iVar1 = piVar2[7] * 4;
    if ((uint)piVar2[7] < 2) {
      iVar1 = 0;
    }
    iVar3 = iVar1 + iVar3 + ((*piVar2 + 0x1fU >> 5) + piVar2[-8] * 8) * 4;
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    SRWLock = SRWLock + 1;
    piVar2 = piVar2 + 0x14;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return iVar3 + ((this->Resources).ArrayMax + 0x166) * 8;
}

// OnExternalReadCallback @ 145e63c30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FShaderLibraryInstance::OnExternalReadCallback
          (FShaderLibraryInstance *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,double param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  FTaskGraphInterface *pFVar4;
  undefined1 local_res10 [8];
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  if (iVar2 != 0) {
    if (param_2 < 0.0) {
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        param_1 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar3;
      }
      FVar3 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
              ((longlong)param_1 + (longlong)iVar2 * 8);
      while( true ) {
        if (*piVar1 != iVar2) {
          `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1 == FVar3) break;
        if (*(char *)(*(longlong *)param_1 + 0xd0) == '\0') {
          return false;
        }
        param_1 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)((longlong)param_1 + 8);
      }
    }
    else {
      pFVar4 = FTaskGraphInterface::Get();
      (**(code **)((longlong)*pFVar4 + 0x60))(pFVar4,param_1,0xff);
    }
  }
  return true;
}

// PreloadShader @ 145e67990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FShaderLibraryInstance::PreloadShader
          (FShaderLibraryInstance *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FRHIShaderLibrary *pFVar1;
  bool bVar2;
  uint uVar3;
  FCachedRHIShader *pFVar4;
  FLLMScope local_res8 [2];
  uint local_res10 [4];
  FMemScope local_res20;
  FCachedRHIShader local_38;
  
  local_res10[0] = param_1;
  FLLMScope::FLLMScope(local_res8,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Shaders,true);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FShaderLibraryInstance::PreloadShader(int,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1100,"FShaderLibraryInstance_PreloadShader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
               ,0x44c);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FShaderLibraryInstance::PreloadShader(int,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1100);
  }
  uVar3 = local_res10[0] & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(this->ShaderLocks + (int)uVar3));
  local_38.PreloadingState = NotPreloaded;
  local_38._1_7_ = 0;
  local_38.RHIShader.Reference = (FRHIShader *)0x0;
  pFVar4 = TMapBase<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
           ::FindOrAddImpl<int_const_&,FShaderLibraryInstance::FCachedRHIShader>
                     ((TMapBase<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
                       *)(this->RHIShaders + (int)uVar3),local_res10[0],(int *)local_res10,&local_38
                     );
  if (local_38.RHIShader.Reference != (FRHIShader *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.RHIShader.Reference);
  }
  if (pFVar4->PreloadingState == NotPreloaded) {
    pFVar1 = (this->Library).Reference;
    (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,local_res10[0],param_2);
    pFVar4->PreloadingState = Preloaded;
  }
  else if (pFVar4->PreloadingState == Preloaded) {
    pFVar1 = (this->Library).Reference;
    (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,local_res10[0],param_2);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(this->ShaderLocks + (int)uVar3));
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PreloadShader @ 145e67b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderLibraryInstance::PreloadShader(FShaderLibraryInstance *this,int param_1,FArchive *param_2)

{
  FRHIShaderLibrary *pFVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  TRefCountPtr<FBaseGraphTask> *pTVar6;
  undefined1 auStack_128 [32];
  FBaseGraphTask *local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  FShaderLibraryInstance *local_e8;
  TRefCountPtr<FBaseGraphTask> local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  TRefCountPtr<FBaseGraphTask> local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  TRefCountPtr<FBaseGraphTask> *local_90;
  int local_88;
  undefined4 local_84;
  code *local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FShaderLibraryInstance::PreloadShader(int,FArchive*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1084,"FShaderLibraryInstance_PreloadShader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
               ,0x43c);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FShaderLibraryInstance::PreloadShader(int,FArchive*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1084);
  }
  pFVar1 = (this->Library).Reference;
  local_84 = 4;
  local_90 = (TRefCountPtr<FBaseGraphTask> *)0x0;
  local_88 = 0;
  (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,param_1,&local_b0);
  uVar4 = local_84;
  iVar3 = local_88;
  pTVar6 = local_90;
  if ((param_2 != (FArchive *)0x0) && (0 < local_88)) {
    if (local_90 == (TRefCountPtr<FBaseGraphTask> *)0x0) {
      local_e0.Reference = local_b0.Reference;
      lStack_d8 = lStack_a8;
      local_d0 = local_a0;
      lStack_c8 = lStack_98;
    }
    local_84 = 4;
    local_90 = (TRefCountPtr<FBaseGraphTask> *)0x0;
    local_88 = 0;
    local_78[0] = (code *)0x0;
    local_108 = local_e0.Reference;
    lStack_100 = lStack_d8;
    local_f8 = local_d0;
    lStack_f0 = lStack_c8;
    local_e8 = this;
    local_50 = FMemory::Malloc(0x40,8);
    local_50[1] = (longlong)this;
    local_50[6] = 0;
    *local_50 = (longlong)
                &
                ___7__TFunction_OwnedObject_V<lambda_1>__4__PreloadShader_FShaderLibraryInstance__QEAAXHPEAVFArchive___Z__0A__00_Function_Private_Core_UE__6B_
    ;
    if (pTVar6 == (TRefCountPtr<FBaseGraphTask> *)0x0) {
      local_50[2] = (longlong)local_108;
      local_50[3] = lStack_100;
      local_50[4] = local_f8;
      local_50[5] = lStack_f0;
    }
    local_50[6] = (longlong)pTVar6;
    *(int *)(local_50 + 7) = iVar3;
    *(undefined4 *)((longlong)local_50 + 0x3c) = uVar4;
    if (local_50 != (longlong *)&DAT_fffffffffffffff8) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FShaderLibraryInstance::PreloadShader'::__l5::<lambda_1>,bool,double>
                    ::Call;
    }
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 4;
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>(&local_e0,0);
    (**(code **)(*(longlong *)param_2 + 0x250))(param_2,local_78);
    if (local_78[0] != (code *)0x0) {
      plVar5 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar5 = local_50;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  pTVar6 = &local_b0;
  if (local_90 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar6 = local_90;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar6,local_88);
  if (local_90 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    FMemory::Free(local_90);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReleasePreloadedShader @ 145e6a5d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderLibraryInstance::ReleasePreloadedShader(FShaderLibraryInstance *this,int param_1)

{
  FRHIShaderLibrary *pFVar1;
  
  if ((-1 < CpuChannel->Enabled) && (-1 < LoadTimeChannel->Enabled)) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FShaderLibraryInstance::ReleasePreloadedShader(int)___ptr64'::
                __l2::__CpuProfilerEventSpecId1121,"FShaderLibraryInstance_PreloadShader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
               ,0x461);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FShaderLibraryInstance::ReleasePreloadedShader(int)___ptr64'::
               __l2::__CpuProfilerEventSpecId1121);
    pFVar1 = (this->Library).Reference;
    (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145e6a65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Library).Reference)->_padding_ + 0x90))();
  return;
}

