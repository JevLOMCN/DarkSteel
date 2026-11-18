// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 17

// InitResource @ 145ddc6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRenderResource::InitResource(FRenderResource *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FRenderResourceList *this_00;
  uint uVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (this->ListIndex == -1) {
    FLLMScope::FLLMScope(local_res8,SceneRender,false,None,Default,true);
    FMemScope::FMemScope(&local_res18,SceneRender,true);
    if (this->InitPhase == Pre) {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar2 = (this_00->FreeIndexList).ArrayNum;
    if (iVar2 == 0) {
      uVar6 = (this_00->ResourceList).ArrayNum;
      piVar1 = &(this_00->ResourceList).ArrayMax;
      uVar5 = uVar6;
      if (uVar6 == *piVar1) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this_00->ResourceList).AllocatorInstance,piVar1);
        (this_00->ResourceList).ArrayNum = uVar5;
      }
      (this_00->ResourceList).ArrayNum = uVar5 + 1;
      *(FRenderResource **)
       ((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) = this;
    }
    else {
      if (iVar2 < 1) {
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
      iVar2 = (this_00->FreeIndexList).ArrayNum;
      uVar6 = *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar2 * 4 + -4);
      (this_00->FreeIndexList).ArrayNum = iVar2 + -1;
      uVar5 = 0;
      if ((int)uVar6 < (this_00->ResourceList).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
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
      *(FRenderResource **)
       ((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = this;
    }
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
    if (GRHIGlobals.IsRHIInitialized != false) {
      if (__CsvProfilerStat197 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("InitRenderResource");
        __CsvProfilerStat197 = true;
      }
      FCsvProfiler::BeginExclusiveStat("InitRenderResource","CSV_InitRenderResource");
      (**(code **)(this->_padding_ + 8))(this,param_1);
      FCsvProfiler::EndExclusiveStat("InitRenderResource");
    }
    this->ListIndex = uVar6;
  }
  return;
}

// ReleaseResource @ 145ddc8b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRenderResource::ReleaseResource(FRenderResource *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && (this->ListIndex != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (this->InitPhase == Pre) {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = this->ListIndex;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    this->ListIndex = -1;
  }
  return;
}

// FRenderResource @ 145dede40

FRenderResource * __thiscall
FRenderResource::FRenderResource(FRenderResource *this,FRenderResource *param_1)

{
  this->_padding_ = (longlong)&___7FRenderResource__6B_;
  this->OwnerName = param_1->OwnerName;
  this->ResourceName = param_1->ResourceName;
  this->ListIndex = param_1->ListIndex;
  (this->FeatureLevel).Value = (param_1->FeatureLevel).Value;
  this->InitPhase = param_1->InitPhase;
  this->ResourceState = param_1->ResourceState;
  return this;
}

// FRenderResource @ 145dede80

FRenderResource * __thiscall
FRenderResource::FRenderResource(FRenderResource *this,FRenderResource *param_1)

{
  this->_padding_ = (longlong)&___7FRenderResource__6B_;
  this->OwnerName = param_1->OwnerName;
  this->ResourceName = param_1->ResourceName;
  this->ListIndex = param_1->ListIndex;
  (this->FeatureLevel).Value = (param_1->FeatureLevel).Value;
  this->InitPhase = param_1->InitPhase;
  this->ResourceState = param_1->ResourceState;
  return this;
}

// FRenderResource @ 145dedec0

FRenderResource * __thiscall FRenderResource::FRenderResource(FRenderResource *this,Type param_1)

{
  this->ListIndex = -1;
  this->_padding_ = (longlong)&___7FRenderResource__6B_;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
  (this->FeatureLevel).Value = (uchar)param_1;
  this->InitPhase = Default;
  this->ResourceState = Default;
  return this;
}

// FRenderResource @ 145dedef0

FRenderResource * __thiscall FRenderResource::FRenderResource(FRenderResource *this)

{
  this->ListIndex = -1;
  this->_padding_ = (longlong)&___7FRenderResource__6B_;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
  this->ResourceState = Default;
  this->FeatureLevel = '\x05';
  this->InitPhase = Default;
  return this;
}

// ~FRenderResource @ 145df1610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRenderResource::~FRenderResource(FRenderResource *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this->_padding_ = (longlong)&___7FRenderResource__6B_;
  if ((this->ResourceState != Default) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceState == ERenderResourceState::Default",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderResource.cpp"
                         ,0xfc,L" Invalid Resource State: %s"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->ResourceState = Deleted;
  if ((this->ListIndex != -1) && (GIsCriticalError == false)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ::FName::ToString((FName *)(lVar1 + 0xee0),&local_28);
    local_res8 = this->OwnerName;
    ::FName::ToString(&local_res8,&local_38);
    local_res10 = this->ResourceName;
    ::FName::ToString(&local_res10,&local_48);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator= @ 145df23b0

FRenderResource * __thiscall
FRenderResource::operator=(FRenderResource *this,FRenderResource *param_1)

{
  this->OwnerName = param_1->OwnerName;
  this->ResourceName = param_1->ResourceName;
  this->ListIndex = param_1->ListIndex;
  (this->FeatureLevel).Value = (param_1->FeatureLevel).Value;
  this->InitPhase = param_1->InitPhase;
  this->ResourceState = param_1->ResourceState;
  return this;
}

// operator= @ 145df23f0

FRenderResource * __thiscall
FRenderResource::operator=(FRenderResource *this,FRenderResource *param_1)

{
  this->OwnerName = param_1->OwnerName;
  this->ResourceName = param_1->ResourceName;
  this->ListIndex = param_1->ListIndex;
  (this->FeatureLevel).Value = (param_1->FeatureLevel).Value;
  this->InitPhase = param_1->InitPhase;
  this->ResourceState = param_1->ResourceState;
  return this;
}

// ChangeFeatureLevel @ 145dfd410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FRenderResource::ChangeFeatureLevel(Type param_1)

{
  FRenderCommandList *this;
  code *pcVar1;
  bool bVar2;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  Type TStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48 [3];
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRenderResource::ChangeFeatureLevel'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRenderResource::ChangeFeatureLevel'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  this = *(FRenderCommandList **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0);
  TStack_70 = param_1;
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRenderResource::ChangeFeatureLevel_::__l2::TSTR_FRenderResourceChangeFeatureLevel147>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_48[1]._4_4_ = uStack_6c;
    local_48[1]._0_4_ = TStack_70;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48[0] = local_78;
    local_48[2] = (undefined **)local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FRenderResource::ChangeFeatureLevel'::__l2::TSTR_FRenderResourceChangeFeatureLevel147>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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

// CreateRHIBufferInternal @ 145e00fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
FRenderResource::CreateRHIBufferInternal
          (FRHICommandListBase *param_1,wchar_t *param_2,FName *param_3,uint param_4,
          EBufferUsageFlags param_5,FResourceArrayInterface *param_6,bool param_7)

{
  longlong *plVar1;
  undefined7 in_stack_00000039;
  
  plVar1 = (longlong *)CONCAT71(in_stack_00000039,param_7);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  ::FName::FName((FName *)&param_7,(wchar_t *)param_3);
  FRHICommandListBase::CreateBuffer((FRHICommandListBase *)param_2,(FRHIBufferCreateDesc *)param_1);
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// GetImmediateCommandList @ 145e0f530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandListBase * __cdecl FRenderResource::GetImmediateCommandList(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHICommandListBase *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FRHICommandListBase *)&GRHICommandList.CommandListImmediate;
}

// InitPreRHIResources @ 145e16940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FRenderResource::InitPreRHIResources(void)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FRenderResourceList *this;
  FRenderResourceList *this_00;
  <lambda_1> local_res8;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar2 = GRHICommandList.CommandListImmediate._668_4_;
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,
             (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  FRHICommandListImmediate::InitializeImmediateContexts(&GRHICommandList.CommandListImmediate);
  this = FRenderResourceList::Get<0>();
  this_00 = FRenderResourceList::Get<1>();
  local_res8.RHICmdList = &GRHICommandList.CommandListImmediate;
  FRenderResourceList::ForEach<_FRenderResource::InitPreRHIResources_::__l2::<lambda_1>_>
            (this,&local_res8);
  FRenderResourceList::ForEach<_FRenderResource::InitPreRHIResources_::__l2::<lambda_1>_>
            (this_00,&local_res8);
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,(FRHIGPUMask)uVar2);
  return;
}

// ReleaseRHIForAllResources @ 145e216a0

void __cdecl FRenderResource::ReleaseRHIForAllResources(void)

{
  FRenderResourceList *pFVar1;
  <lambda_1> local_res8 [32];
  
  pFVar1 = FRenderResourceList::Get<1>();
  FRenderResourceList::
  ForEachReverse<_FRenderResource::ReleaseRHIForAllResources_::__l2::<lambda_1>_>(pFVar1,local_res8)
  ;
  pFVar1 = FRenderResourceList::Get<0>();
  FRenderResourceList::
  ForEachReverse<_FRenderResource::ReleaseRHIForAllResources_::__l2::<lambda_1>_>(pFVar1,local_res8)
  ;
  return;
}

// SetScopeName @ 145e263f0

FName __cdecl FRenderResource::SetScopeName(FName param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 in_RDX;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar1 = *(char *)(lVar2 + 0x9d48);
  *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + 0xee0);
  if (cVar1 == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined8 *)(lVar2 + 0xee0) = in_RDX;
  return param_1;
}

// ShouldFreeResourceObject @ 145e2dab0

bool __cdecl
FRenderResource::ShouldFreeResourceObject(void *param_1,FResourceArrayInterface *param_2)

{
  int iVar1;
  
  if (param_1 == (void *)0x0) {
    return false;
  }
  if ((param_2 != (FResourceArrayInterface *)0x0) &&
     (iVar1 = (**(code **)((longlong)*param_2 + 0x10))(param_2), iVar1 != 0)) {
    return false;
  }
  return true;
}

// UpdateRHI @ 145e36970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRenderResource::UpdateRHI(FRenderResource *this,FRHICommandListBase *param_1)

{
  if ((this->ListIndex != -1) && (GRHIGlobals.IsRHIInitialized)) {
    (**(code **)(this->_padding_ + 0x10))();
    (**(code **)(this->_padding_ + 8))(this,param_1);
  }
  return;
}

