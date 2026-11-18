// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 21

// FShaderMapResource @ 145e819e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FShaderMapResource * __thiscall
FShaderMapResource::FShaderMapResource(FShaderMapResource *this,EShaderPlatform param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  TUniquePtr<std::atomic<FRHIShader_*>_[0],TDefaultDelete<std::atomic<FRHIShader_*>_[0]>_> *pTVar3;
  atomic<FRHIShader_*> *paVar4;
  undefined1 auVar5 [16];
  ulong64 uVar6;
  atomic<FRHIShader_*> *_Dst;
  ulonglong uVar7;
  undefined8 local_38 [2];
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RHIShadersCreationGuard,4000);
  this->Platform = param_1;
  (this->RayTracingLibraryIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RayTracingLibraryIndices).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->RayTracingLibraryIndices).ArrayMax;
  *piVar2 = 0;
  pTVar3 = &this->RHIShaders;
  pTVar3->Ptr = (atomic<FRHIShader_*> *)0x0;
  this->NumRefs = (atomic<int>)0x0;
  uVar7 = CONCAT44(0,param_2 & 0x7fffffff);
  this->NumRHIShaders = param_2;
  this->bAtLeastOneRHIShaderCreated = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar7;
  uVar6 = SUB168(ZEXT816(8) * auVar5,0);
  if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar6);
  if (_Dst == (atomic<FRHIShader_*> *)0x0) {
    _Dst = (atomic<FRHIShader_*> *)0x0;
  }
  else if (uVar7 != 0) {
    memset(_Dst,0,uVar7 * 8);
  }
  if (pTVar3 != (TUniquePtr<std::atomic<FRHIShader_*>_[0],TDefaultDelete<std::atomic<FRHIShader_*>_[0]>_>
                 *)local_38) {
    paVar4 = pTVar3->Ptr;
    pTVar3->Ptr = _Dst;
    _Dst = (atomic<FRHIShader_*> *)0x0;
    operator_delete__(paVar4);
  }
  operator_delete__(_Dst);
  if ((GRHIGlobals.RayTracing.Supported != false) &&
     (GRHIGlobals.RayTracing.SupportsShaders != false)) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_2,&(this->RayTracingLibraryIndices).AllocatorInstance,piVar1,piVar2);
    memset((this->RayTracingLibraryIndices).AllocatorInstance.Data,0xff,
           (ulonglong)(uint)(param_2 * 4));
  }
  return this;
}

// ~FShaderMapResource @ 145e84bd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderMapResource::~FShaderMapResource(FShaderMapResource *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  ReleaseShaders(this);
  if (this->NumRefs != (atomic<int>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
                       ,0x1fb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  operator_delete__((this->RHIShaders).Ptr);
  pFVar1 = (this->RayTracingLibraryIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RHIShadersCreationGuard);
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// AddRef @ 145e8b230

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderMapResource::AddRef(FShaderMapResource *this)

{
  LOCK();
  this->NumRefs = (atomic<int>)((int)this->NumRefs + 1);
  UNLOCK();
  return;
}

// ArePlatformsCompatible @ 145e8d9e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FShaderMapResource::ArePlatformsCompatible(EShaderPlatform param_1,EShaderPlatform param_2)

{
  Type TVar1;
  Type TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_1 == param_2) {
    return true;
  }
  bVar4 = IsPCPlatform((FStaticShaderPlatform)param_1);
  if (!bVar4) {
    return false;
  }
  bVar4 = IsPCPlatform((FStaticShaderPlatform)param_2);
  if (!bVar4) {
    return false;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  TVar1 = FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  TVar2 = FGenericDataDrivenShaderPlatformInfo::Infos[param_2].MaxFeatureLevel;
  bVar4 = IsD3DPlatform((FStaticShaderPlatform)param_2);
  bVar6 = IsD3DPlatform((FStaticShaderPlatform)param_1);
  bVar7 = IsMetalPlatform((FStaticShaderPlatform)param_1);
  bVar8 = IsMetalPlatform((FStaticShaderPlatform)param_2);
  if ((bVar7 != bVar8) || (bVar7 = IsMetalPlatform((FStaticShaderPlatform)param_1), bVar7)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  bVar8 = IsOpenGLPlatform((FStaticShaderPlatform)param_1);
  bVar9 = IsOpenGLPlatform((FStaticShaderPlatform)param_2);
  if (((((int)TVar1 < (int)TVar2) || (bVar6 != bVar4)) || (!bVar7)) || (bVar8 != bVar9)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

// BeginCreateAllShaders @ 145e8e730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderMapResource::BeginCreateAllShaders(FShaderMapResource *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FShaderMapResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FShaderMapResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FShaderMapResource::BeginCreateAllShaders'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FShaderMapResource::BeginCreateAllShaders'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FShaderMapResource::BeginCreateAllShaders_::__l2::TSTR_InitCommand616>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FShaderMapResource::BeginCreateAllShaders'::__l2::TSTR_InitCommand616>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// CreateShaderOrCrash @ 145e940d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRHIShader * __thiscall
FShaderMapResource::CreateShaderOrCrash(FShaderMapResource *this,int param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar1;
  atomic<FRHIShader_*> aVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  atomic<FRHIShader_*> this_00;
  FRHIShader *pFVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMapsUsedForRendering> FVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FCsvProfiler *this_03;
  FRayTracingShaderLibrary *this_04;
  uint uVar10;
  longlong lVar11;
  FName local_res8;
  FName local_res20;
  FName local_58;
  FStatMessage local_50;
  
  lVar11 = (longlong)param_1;
  this_00 = (atomic<FRHIShader_*>)(**(code **)(this->_padding_ + 0x78))(this,param_1);
  if (this_00 == (atomic<FRHIShader_*>)0x0) {
    if ((param_2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bRequired",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
                           ,0x27a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRHIShader *)(*pcVar4)();
      return pFVar7;
    }
    return (FRHIShader *)0x0;
  }
  lpCriticalSection = &this->RHIShadersCreationGuard;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar2 = (this->RHIShaders).Ptr[lVar11];
  if (aVar2 != (atomic<FRHIShader_*>)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FRHIResource::Release((FRHIResource *)this_00);
    return (FRHIShader *)aVar2;
  }
  if (!(BADTYPE)this->bAtLeastOneRHIShaderCreated) {
    FVar9 = StatPtr_STAT_Shaders_NumShaderMapsUsedForRendering;
    if (StatPtr_STAT_Shaders_NumShaderMapsUsedForRendering ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMapsUsedForRendering>)0x0) {
      pFVar8 = ::FName::FName(&local_58,"STAT_Shaders_NumShaderMapsUsedForRendering");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMapsUsedForRendering>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Shaders_NumShaderMapsUsedForRendering,*pFVar8,
                         L"Num ShaderMaps Used","STATGROUP_Shaders","STATCAT_Advanced",
                         L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar9;
    local_res8 = FVar3;
    local_res20 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_50.NameAndInfo.Index = local_res20.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_50.StatData.Pad[0] = '\x01';
      local_50.StatData.Pad[1] = '\0';
      local_50.StatData.Pad[2] = '\0';
      local_50.StatData.Pad[3] = '\0';
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_res8 = FVar3;
      FThreadStats::AddStatMessage(this_01,&local_50);
      FStatsTrace::Add(&local_res8,1);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
    if (CsvStatNumShaderMapsUsedForRendering == (TCsvPersistentCustomStat<int> *)0x0) {
      this_03 = FCsvProfiler::Get();
      uVar10 = _GCsvCategory_Shaders.Index;
      pFVar8 = ::FName::FName(&local_res20,L"NumShaderMapsUsedForRendering");
      CsvStatNumShaderMapsUsedForRendering =
           FCsvProfiler::GetOrCreatePersistentCustomStatInt(this_03,*pFVar8,uVar10,false);
    }
    LOCK();
    CsvStatNumShaderMapsUsedForRendering->Value =
         (atomic<int>)((int)CsvStatNumShaderMapsUsedForRendering->Value + 1);
    UNLOCK();
    this->bAtLeastOneRHIShaderCreated = 1;
  }
  if ((GRHIGlobals.RayTracing.Supported != false) &&
     (GRHIGlobals.RayTracing.SupportsShaders != false)) {
    cVar1 = *(char *)((longlong)this_00 + 0x104);
    if (cVar1 == '\a') {
      this_04 = &GlobalRayTracingMissShaderLibrary;
    }
    else if (cVar1 == '\b') {
      this_04 = &GlobalRayTracingHitGroupLibrary;
    }
    else {
      if (cVar1 != '\t') goto LAB_145e943e4;
      this_04 = &GlobalRayTracingCallableShaderLibrary;
    }
    uVar6 = FRayTracingShaderLibrary::AddShader
                      (this_04,this->Platform,(FRHIRayTracingShader *)this_00);
    uVar10 = 0;
    if (param_1 < (this->RayTracingLibraryIndices).ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRHIShader *)(*pcVar4)();
      return pFVar7;
    }
    *(uint *)((this->RayTracingLibraryIndices).AllocatorInstance.Data + lVar11 * 4) = uVar6;
  }
LAB_145e943e4:
  (this->RHIShaders).Ptr[lVar11] = this_00;
  (**(code **)(this->_padding_ + 0x80))(this,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (FRHIShader *)this_00;
}

// GetGroupIndexForShader @ 145e9daa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall FShaderMapResource::GetGroupIndexForShader(FShaderMapResource *this,int param_1)

{
  return -1;
}

// GetLibraryId @ 145e9dbf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall FShaderMapResource::GetLibraryId(FShaderMapResource *this)

{
  return -1;
}

// GetLibraryShaderIndex @ 145e9dc00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall FShaderMapResource::GetLibraryShaderIndex(FShaderMapResource *this,int param_1)

{
  return -1;
}

// GetRayTracingCallableShaderLibrary @ 145e9ea00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FShaderMapResource::GetRayTracingCallableShaderLibrary
          (EShaderPlatform param_1,
          TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *param_2,
          FRHIRayTracingShader *param_3)

{
  FRayTracingShaderLibrary::GetShaders
            (&GlobalRayTracingCallableShaderLibrary,param_1,param_2,param_3);
  return;
}

// GetRayTracingHitGroupLibrary @ 145e9ea20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FShaderMapResource::GetRayTracingHitGroupLibrary
          (EShaderPlatform param_1,
          TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *param_2,
          FRHIRayTracingShader *param_3)

{
  FRayTracingShaderLibrary::GetShaders(&GlobalRayTracingHitGroupLibrary,param_1,param_2,param_3);
  return;
}

// GetRayTracingMissShaderLibrary @ 145e9ea40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FShaderMapResource::GetRayTracingMissShaderLibrary
          (EShaderPlatform param_1,
          TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *param_2,
          FRHIRayTracingShader *param_3)

{
  FRayTracingShaderLibrary::GetShaders(&GlobalRayTracingMissShaderLibrary,param_1,param_2,param_3);
  return;
}

// GetShaderMapHash @ 145ea01a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSHAHash * __thiscall
FShaderMapResource::GetShaderMapHash(FShaderMapResource *this,FSHAHash *__return_storage_ptr__)

{
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  return __return_storage_ptr__;
}

// GetShaderSizeBytes @ 145ea0630

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall FShaderMapResource::GetShaderSizeBytes(FShaderMapResource *this,int param_1)

{
  return 0;
}

// PreloadShader @ 145eab480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderMapResource::PreloadShader
          (FShaderMapResource *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  return;
}

// PreloadShaderMap @ 145eab490

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderMapResource::PreloadShaderMap
          (FShaderMapResource *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  return;
}

// Release @ 145eae460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderMapResource::Release(FShaderMapResource *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FDeferredCleanupInterface *pFVar10;
  uchar auVar11 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (((int)this->NumRefs < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs.load(std::memory_order_relaxed) > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
                         ,0x20b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  paVar1 = &this->NumRefs;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((aVar2 == (atomic<int>)0x1) &&
     (cVar6 = (**(code **)(this->_padding_ + 0x88))(this), cVar6 != '\0')) {
    BeginReleaseResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
    pFVar10 = (FDeferredCleanupInterface *)&this->_padding_;
    if (this == (FShaderMapResource *)0x0) {
      pFVar10 = (FDeferredCleanupInterface *)0x0;
    }
    BeginCleanup(pFVar10);
    uVar7 = (**(code **)(this->_padding_ + 0x70))(this);
    auVar11[4] = '\0';
    auVar11[5] = '\0';
    auVar11[6] = '\0';
    auVar11[7] = '\0';
    auVar11[0] = (char)uVar7;
    auVar11[1] = (char)(uVar7 >> 8);
    auVar11[2] = (char)(uVar7 >> 0x10);
    auVar11[3] = (char)(uVar7 >> 0x18);
    if (uVar7 != 0) {
      FVar9 = StatPtr_STAT_Shaders_ShaderResourceMemory;
      if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
        pFVar8 = ::FName::FName(&local_res10,"STAT_Shaders_ShaderResourceMemory");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderResourceMemory,
                           *pFVar8,L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                           L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar3 = *(FName *)FVar9;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res8 = FVar3;
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_28.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar3;
        local_28.StatData.Pad = auVar11;
        local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_28);
        FStatsTrace::Add(&local_res8,-(longlong)auVar11);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// ReleasePreloadedShaderCode @ 145eae670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderMapResource::ReleasePreloadedShaderCode(FShaderMapResource *this,int param_1)

{
  return;
}

// ReleaseRHI @ 145eae820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall FShaderMapResource::ReleaseRHI(FShaderMapResource *this)

{
  int *piVar1;
  char cVar2;
  atomic<FRHIShader_*> aVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRayTracingShaderLibrary *this_00;
  uint uVar7;
  ulonglong uVar8;
  
  if ((GRHIGlobals.RayTracing.Supported) && (GRHIGlobals.RayTracing.SupportsShaders)) {
    if ((this->NumRHIShaders != (this->RayTracingLibraryIndices).ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRHIShaders == static_cast<uint32>(RayTracingLibraryIndices.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
                           ,0x247,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = 0;
    if (this->NumRHIShaders != 0) {
      do {
        aVar3 = (this->RHIShaders).Ptr[uVar8];
        uVar7 = (uint)uVar8;
        if (aVar3 != (atomic<FRHIShader_*>)0x0) {
          uVar6 = 0;
          if ((int)uVar7 < (this->RayTracingLibraryIndices).ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          cVar2 = *(char *)((longlong)aVar3 + 0x104);
          if (cVar2 == '\a') {
            this_00 = &GlobalRayTracingMissShaderLibrary;
          }
          else if (cVar2 == '\b') {
            this_00 = &GlobalRayTracingHitGroupLibrary;
          }
          else {
            if (cVar2 != '\t') goto LAB_145eae931;
            this_00 = &GlobalRayTracingCallableShaderLibrary;
          }
          FRayTracingShaderLibrary::RemoveShader
                    (this_00,this->Platform,
                     *(uint *)((this->RayTracingLibraryIndices).AllocatorInstance.Data +
                              (longlong)(int)uVar7 * 4),(FRHIRayTracingShader *)aVar3);
        }
LAB_145eae931:
        uVar8 = (ulonglong)(uVar7 + 1);
      } while (uVar7 + 1 < this->NumRHIShaders);
    }
  }
  piVar1 = &(this->RayTracingLibraryIndices).ArrayMax;
  (this->RayTracingLibraryIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->RayTracingLibraryIndices).AllocatorInstance,0,piVar1);
  }
  ReleaseShaders(this);
  return;
}

// ReleaseShaders @ 145eae990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderMapResource::ReleaseShaders(FShaderMapResource *this)

{
  atomic<unsigned_int> *paVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> aVar3;
  atomic<FRHIShader_*> this_00;
  FName FVar4;
  atomic<FRHIShader_*> *paVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FCsvProfiler *pFVar12;
  TCsvPersistentCustomStat<int> *pTVar13;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMapsUsedForRendering> FVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_70;
  FStatMessage local_60 [2];
  
  if ((this->RHIShaders).Ptr != (atomic<FRHIShader_*> *)0x0) {
    if (&this->RHIShadersCreationGuard == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->RHIShadersCreationGuard);
    uVar16 = 0;
    iVar17 = 0;
    uVar18 = uVar16;
    if (this->NumRHIShaders != 0) {
      do {
        this_00 = (this->RHIShaders).Ptr[uVar18];
        if (this_00 != (atomic<FRHIShader_*>)0x0) {
          LOCK();
          paVar1 = (atomic<unsigned_int> *)((longlong)this_00 + 8);
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 - 1);
          UNLOCK();
          if (((int)aVar3 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(OldPacked & DeletingBit) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                 ,0xa2,L"Resource is being deleted."), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar15 = (uint)aVar3 & 0x3fffffff;
          if (uVar15 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumRefs >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                               ,0xa4,L"Reference count has underflowed.");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewValue >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                               ,0x53,L"");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else if (uVar15 == 1) {
            FRHIResource::MarkForDelete((FRHIResource *)this_00);
          }
          uVar16 = (ulonglong)((int)uVar16 + 1);
          FVar9 = StatPtr_STAT_Shaders_NumShadersCreated;
          if (StatPtr_STAT_Shaders_NumShadersCreated ==
              (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated>)0x0) {
            pFVar8 = ::FName::FName(&local_res20,"STAT_Shaders_NumShadersCreated");
            FVar9 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersCreated,
                               *pFVar8,L"Num Shaders Created","STATGROUP_Shaders","STATCAT_Advanced"
                               ,L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
          }
          FVar4 = *(FName *)FVar9;
          if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar10 == (FThreadStats *)0x0) {
              pFVar11 = FThreadStatsPool::Get();
              pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
            }
            local_70.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
            local_70.StatData.Pad[0] = '\x01';
            local_70.StatData.Pad[1] = '\0';
            local_70.StatData.Pad[2] = '\0';
            local_70.StatData.Pad[3] = '\0';
            local_70.StatData.Pad[4] = '\0';
            local_70.StatData.Pad[5] = '\0';
            local_70.StatData.Pad[6] = '\0';
            local_70.StatData.Pad[7] = '\0';
            local_res10 = FVar4;
            local_70.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar10,&local_70);
            FStatsTrace::Add(&local_res10,-1);
            if (pFVar10->ScopeCount == 0) {
              FThreadStats::Flush(pFVar10,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar10,false,false);
            }
          }
        }
        iVar17 = (int)uVar16;
        uVar15 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar15;
      } while (uVar15 < this->NumRHIShaders);
    }
    pFVar12 = FCsvProfiler::Get();
    uVar15 = _GCsvCategory_Shaders.Index;
    pFVar8 = ::FName::FName(&local_88,L"NumShadersCreated");
    pTVar13 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar12,*pFVar8,uVar15,false);
    LOCK();
    pTVar13->Value = (atomic<int>)((int)pTVar13->Value - iVar17);
    UNLOCK();
    paVar5 = (this->RHIShaders).Ptr;
    (this->RHIShaders).Ptr = (atomic<FRHIShader_*> *)0x0;
    operator_delete__(paVar5);
    puVar2 = &this->field_0x68;
    this->NumRHIShaders = 0;
    if (this->NumRHIShaders != 0 || this->bAtLeastOneRHIShaderCreated != 0) {
      FVar14 = StatPtr_STAT_Shaders_NumShaderMapsUsedForRendering;
      if (StatPtr_STAT_Shaders_NumShaderMapsUsedForRendering ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMapsUsedForRendering>)0x0) {
        pFVar8 = ::FName::FName(&local_80,"STAT_Shaders_NumShaderMapsUsedForRendering");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMapsUsedForRendering>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_Shaders_NumShaderMapsUsedForRendering,*pFVar8,
                            L"Num ShaderMaps Used","STATGROUP_Shaders","STATCAT_Advanced",
                            L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar4 = *(FName *)FVar14;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar10 == (FThreadStats *)0x0) {
          pFVar11 = FThreadStatsPool::Get();
          pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
        }
        local_60[0].NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_60[0].StatData.Pad[0] = '\x01';
        local_60[0].StatData.Pad[1] = '\0';
        local_60[0].StatData.Pad[2] = '\0';
        local_60[0].StatData.Pad[3] = '\0';
        local_60[0].StatData.Pad[4] = '\0';
        local_60[0].StatData.Pad[5] = '\0';
        local_60[0].StatData.Pad[6] = '\0';
        local_60[0].StatData.Pad[7] = '\0';
        local_res18 = FVar4;
        local_60[0].NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar10,local_60);
        FStatsTrace::Add(&local_res18,-1);
        if (pFVar10->ScopeCount == 0) {
          FThreadStats::Flush(pFVar10,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar10,false,false);
        }
      }
      if (CsvStatNumShaderMapsUsedForRendering == (TCsvPersistentCustomStat<int> *)0x0) {
        pFVar12 = FCsvProfiler::Get();
        uVar15 = _GCsvCategory_Shaders.Index;
        pFVar8 = ::FName::FName(&local_78,L"NumShaderMapsUsedForRendering");
        CsvStatNumShaderMapsUsedForRendering =
             FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar12,*pFVar8,uVar15,false);
      }
      LOCK();
      CsvStatNumShaderMapsUsedForRendering->Value =
           (atomic<int>)((int)CsvStatNumShaderMapsUsedForRendering->Value + -1);
      UNLOCK();
    }
    this->bAtLeastOneRHIShaderCreated = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->RHIShadersCreationGuard);
  }
  return;
}

// TryRelease @ 145eba8f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FShaderMapResource::TryRelease(FShaderMapResource *this)

{
  return true;
}

