// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 12

// ~FRDGBuilderRecorder @ 145fb68a0

void __thiscall UE::Landscape::FRDGBuilderRecorder::~FRDGBuilderRecorder(FRDGBuilderRecorder *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->State != Immediate) || ((this->RDGCommands).ArrayNum != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(State == EState::Immediate) && IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                       ,0x61,
                       L"The command recorder has %d commands pending while being destroyed. These commands will not get executed unless they are appended to a render command : use Flush() (or Clear() to remove all commands if this is intended)."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)&(this->RDGExternalTextureAccessFinal).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RDGExternalTextureAccessFinal).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextureResource_*,enum_ERHIAccess>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextureResource_*,enum_ERHIAccess>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->RDGExternalTextureAccessFinal);
  DestructItems<TFunction<void___cdecl(FRDGBuilder_&)>,int>
            ((TFunction<void___cdecl(FRDGBuilder_&)> *)(this->RDGCommands).AllocatorInstance.Data,
             (this->RDGCommands).ArrayNum);
  pFVar2 = (this->RDGCommands).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 145fb7910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()
          (void *this,FRDGBuilder *param_1)

{
  int *piVar1;
  int iVar2;
  FRDGEventName *pFVar3;
  void *this_00;
  TRDGEmptyLambdaPass<_public:___cdecl__public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_5_::<lambda_1>::operator()(FRDGBuilder_&)const_::_2_::<lambda_1>_>
  *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_88 [40];
  FRDGEventName local_60;
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_48._0_8_ = *(undefined8 *)this;
  local_20 = (longlong *)0x0;
  if (local_48._0_8_ != 0) {
    puVar5 = (undefined8 *)((longlong)this + 0x10);
    if (*(undefined8 **)((longlong)this + 0x28) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)((longlong)this + 0x28);
    }
    (**(code **)*puVar5)(puVar5,local_48 + 0x10);
  }
  pFVar3 = FRDGEventName::FRDGEventName(&local_60,1,L"RDGRecordedRenderCommand");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar3,NeverCull);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1c0,0x10);
  pTVar4 = TRDGEmptyLambdaPass<``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<__UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                     (this_00,pFVar3,NeverCull,(<lambda_1> *)local_48);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar2 = (param_1->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar2 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar4;
  *(int *)&pTVar4->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar4);
  if (local_60.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_48._0_8_ != 0) {
    plVar6 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar6 = local_20;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// operator() @ 145fb7a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
`UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  EShaderPlatform EVar7;
  ERHIAccess EVar8;
  bool bVar9;
  wchar_t *pwVar10;
  FString *pFVar11;
  FRHIBreadcrumbAllocator *this_00;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_> *pTVar12;
  undefined8 uVar13;
  TRefCountPtr<IPooledRenderTarget> TVar14;
  FRDGTexture *pFVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined1 auStackY_938 [32];
  undefined1 local_908;
  undefined1 local_907 [7];
  longlong *local_900;
  int iStack_8f8;
  uint uStack_8f4;
  uint *local_8f0;
  undefined4 uStack_8e8;
  int iStack_8e4;
  int local_8e0;
  int iStack_8dc;
  int iStack_8d8;
  undefined4 uStack_8d4;
  int local_8d0;
  int local_8cc;
  undefined1 local_8c8 [20];
  uint uStack_8b4;
  uint *local_8b0;
  undefined8 uStack_8a8;
  longlong local_8a0;
  longlong lStack_898;
  FRHIBreadcrumbScope local_890;
  char local_880;
  FString local_878;
  longlong local_868;
  longlong lStack_860;
  FRDGEventName local_858;
  uint uStack_834;
  undefined4 local_830;
  undefined4 uStack_82c;
  FRDGBuilder local_818;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_938;
  pwVar10 = FRDGEventName::GetTCHAR((FRDGEventName *)((longlong)this + 0x60));
  pFVar11 = ::FString::FString(&local_878,pwVar10);
  iVar19 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_830 = 0;
    uStack_82c = 0;
    ::Desc._12_8_ = ZEXT48(uStack_834);
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_ = (longlong)u_FRDGBuilderReco;
    ::Desc._padding_ = (longlong)u__s;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0x86;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::Desc::operator()'::__l7::<lambda_1>
           ::operator()<FString>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pTVar12 = FRHIBreadcrumbAllocator::
            Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_&,FString_&>
                      (this_00,this_00,&::Desc,pFVar11);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope
            (&local_890,(FRHIComputeCommandList *)param_1,(FRHIBreadcrumbNode *)pTVar12);
  local_880 = '\x01';
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  EVar7 = GMaxRHIShaderPlatform;
  local_858.EventFormat = *(wchar_t **)((longlong)this + 0x60);
  ::FString::FString(&local_858.FormattedEventName,(FString *)((longlong)this + 0x68));
  FRDGBuilder::FRDGBuilder(&local_818,param_1,&local_858,None,EVar7);
  iVar4 = *(int *)((longlong)this + 8);
  puVar22 = *(undefined8 **)this;
  puVar24 = puVar22 + (longlong)iVar4 * 6;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar4) {
      local_908 = 0;
      `TCheckedPointerIterator<TFunction<void___cdecl(FRDGBuilder_&)>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_908);
    }
    if (puVar22 == puVar24) break;
    UE::Core::Private::Function::CheckCallable((void *)*puVar22);
    pcVar6 = (code *)*puVar22;
    plVar16 = puVar22 + 2;
    if ((longlong *)puVar22[5] != (longlong *)0x0) {
      plVar16 = (longlong *)puVar22[5];
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    (*pcVar6)(uVar13,&local_818);
    puVar22 = puVar22 + 6;
  }
  iVar4 = *(int *)((longlong)this + 0x38);
  puVar1 = (uint *)((longlong)this + 0x20);
  plVar16 = (longlong *)((longlong)this + 0x10);
  uStack_8f4 = 1;
  local_8e0 = 0;
  iStack_8e4 = iVar19;
  if (iVar4 != 0) {
    puVar23 = *(uint **)((longlong)this + 0x30);
    if (*(uint **)((longlong)this + 0x30) == (uint *)0x0) {
      puVar23 = puVar1;
    }
    uVar21 = *puVar23;
    local_8e0 = 0;
    iVar19 = 0;
    while (uVar21 == 0) {
      lVar17 = (longlong)iVar19;
      local_8e0 = local_8e0 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_8e4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_145fb7c2e;
      uVar21 = puVar23[lVar17 + 1];
    }
    uStack_8f4 = -uVar21 & uVar21;
    uVar3 = (ulonglong)uStack_8f4 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_8d0 = (int)lVar17;
    iStack_8e4 = local_8e0 + -1 + local_8d0;
    if (iVar4 < iStack_8e4) {
      iStack_8e4 = iVar4;
    }
  }
LAB_145fb7c2e:
  uVar21 = *(uint *)((longlong)this + 0x38);
  uVar20 = uVar21 & 0xffffffe0;
  iStack_8d8 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44);
  uStack_8e8 = 0xffffffff;
  unique0x1000039b = CONCAT44(uStack_8f4,iVar19);
  uStack_8a8 = CONCAT44(iStack_8e4,0xffffffff);
  iVar18 = (int)uVar21 >> 5;
  local_8a0 = CONCAT44(iStack_8e4,local_8e0);
  lStack_898 = CONCAT44(uStack_8d4,iStack_8d8);
  local_900 = plVar16;
  iStack_8f8 = iVar19;
  local_8f0 = puVar1;
  iStack_8dc = iStack_8e4;
  local_8c8._8_8_ = plVar16;
  local_8b0 = puVar1;
  if ((((int)uVar21 < 0) || (iVar4 < (int)uVar21)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)((longlong)this + 0x38);
  if (uVar21 != uVar5) {
    puVar23 = *(uint **)((longlong)this + 0x30);
    if (*(uint **)((longlong)this + 0x30) == (uint *)0x0) {
      puVar23 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & puVar23[iVar18];
    while (uVar21 == 0) {
      lVar17 = (longlong)iVar18;
      uVar20 = uVar20 + 0x20;
      iVar18 = iVar18 + 1;
      uVar21 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_145fb7d40;
      uVar21 = puVar23[lVar17 + 1];
    }
    uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_8cc = (int)lVar17;
    uVar21 = local_8cc + -1 + uVar20;
    if ((int)uVar5 < (int)uVar21) {
      uVar21 = uVar5;
    }
  }
LAB_145fb7d40:
  while( true ) {
    uVar13 = local_8c8._8_8_;
    if ((int)*(longlong *)(local_8c8._8_8_ + 8) - *(int *)(local_8c8._8_8_ + 0x34) !=
        (int)lStack_898) {
      local_907[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextureResource_*,enum_ERHIAccess>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_907);
    }
    if (((uStack_8a8._4_4_ == uVar21) && (local_8b0 == puVar1)) && ((longlong *)uVar13 == plVar16))
    break;
    plVar2 = (longlong *)(*(longlong *)uVar13 + (longlong)(int)uStack_8a8._4_4_ * 0x18);
    local_868 = *plVar2;
    lStack_860 = plVar2[1];
    TVar14 = CreateRenderTarget((FRHITexture *)local_8c8,*(wchar_t **)(local_868 + 0x20));
    pFVar15 = FRDGBuilder::RegisterExternalTexture
                        (&local_818,(TRefCountPtr<IPooledRenderTarget> *)TVar14.Reference,None);
    if ((longlong *)local_8c8._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_8c8._0_8_ + 0x38))();
    }
    if ((pFVar15 == (FRDGTexture *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TextureRef != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                           ,0x92,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar8 = (ERHIAccess)lStack_860;
    FRDGUserValidation::ValidateSetAccessFinal
              (&local_818.UserValidation,(FRDGViewableResource *)pFVar15,(ERHIAccess)lStack_860);
    *(ERHIAccess *)&pFVar15->_padding_ = EVar8;
    uStack_8a8 = CONCAT44(uStack_8a8._4_4_,(uint)uStack_8a8 & ~uStack_8b4);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_8c8 + 0x10));
  }
  FRDGBuilder::Execute(&local_818);
  FRDGBuilder::~FRDGBuilder(&local_818);
  if (local_880 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_890);
  }
  return;
}

// operator() @ 145fb8870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::__l11::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  ERHIAccess EVar2;
  code *pcVar3;
  EShaderPlatform EVar4;
  bool bVar5;
  FRDGEventName *pFVar6;
  undefined8 uVar7;
  TRefCountPtr<IPooledRenderTarget> TVar8;
  FRDGTexture *pFVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStackY_878 [32];
  undefined1 local_848 [8];
  undefined1 local_840 [16];
  FString local_830;
  FRDGEventName local_820;
  FRDGBuilder local_808;
  ulonglong local_38;
  
  EVar4 = GMaxRHIShaderPlatform;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_878;
  pFVar6 = FRDGEventName::FRDGEventName(&local_820,1,L"RDGImmediateRDGCommand");
  local_840._8_8_ = pFVar6->EventFormat;
  ::FString::FString(&local_830,&pFVar6->FormattedEventName);
  FRDGBuilder::FRDGBuilder(&local_808,param_1,(FRDGEventName *)(local_840 + 8),None,EVar4);
  if (local_820.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.FormattedEventName.Data.AllocatorInstance.Data);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar3 = *(code **)this;
  plVar10 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar10 = *(longlong **)((longlong)this + 0x28);
  }
  uVar7 = (**(code **)(*plVar10 + 8))();
  (*pcVar3)(uVar7,&local_808);
  iVar1 = *(int *)((longlong)this + 0x38);
  plVar10 = *(longlong **)((longlong)this + 0x30);
  plVar11 = plVar10 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)this + 0x38) != iVar1) {
      local_848[0] = 0;
      `TCheckedPointerIterator<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_848);
    }
    if (plVar10 == plVar11) break;
    TVar8 = CreateRenderTarget((FRHITexture *)local_840,*(wchar_t **)(*plVar10 + 0x20));
    pFVar9 = FRDGBuilder::RegisterExternalTexture
                       (&local_808,(TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference,None);
    if ((longlong *)local_840._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_840._0_8_ + 0x38))();
    }
    if (pFVar9 == (FRDGTexture *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureRef != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                         ,0xb4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EVar2 = *(ERHIAccess *)(plVar10 + 1);
    FRDGUserValidation::ValidateSetAccessFinal
              (&local_808.UserValidation,(FRDGViewableResource *)pFVar9,EVar2);
    plVar10 = plVar10 + 2;
    *(ERHIAccess *)&pFVar9->_padding_ = EVar2;
  }
  FRDGBuilder::Execute(&local_808);
  FRDGBuilder::~FRDGBuilder(&local_808);
  return;
}

// Clear @ 145fbb0b0

void __thiscall UE::Landscape::FRDGBuilderRecorder::Clear(FRDGBuilderRecorder *this)

{
  int *piVar1;
  int iVar2;
  TFunction<void___cdecl(FRDGBuilder_&)> *pTVar3;
  
  piVar1 = &(this->RDGCommands).ArrayMax;
  pTVar3 = (TFunction<void___cdecl(FRDGBuilder_&)> *)(this->RDGCommands).AllocatorInstance.Data;
  iVar2 = (this->RDGCommands).ArrayNum;
  if ((this->RDGCommands).ArrayMax < 0) {
    DestructItems<TFunction<void___cdecl(FRDGBuilder_&)>,int>(pTVar3,iVar2);
    (this->RDGCommands).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,&(this->RDGCommands).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(FRDGBuilder_&)>,int>(pTVar3,iVar2);
    (this->RDGCommands).ArrayNum = 0;
  }
  TSet<TTuple<FTextureResource_*,enum_ERHIAccess>,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>,FDefaultSetAllocator>
  ::Reset(&this->RDGExternalTextureAccessFinal);
  return;
}

// EnqueueRDGCommand @ 145fbdbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand
          (FRDGBuilderRecorder *this,TFunction<void___cdecl(FRDGBuilder_&)> *param_1,
          TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>
          *param_2)

{
  int *piVar1;
  ERHIAccess EVar2;
  TFunction<void___cdecl(FRDGBuilder_&)> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ERHIAccess *pEVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  uint uVar9;
  undefined8 *puVar10;
  code **ppcVar11;
  longlong *plVar12;
  ulonglong uVar13;
  FRDGExternalTextureAccessFinal *pFVar14;
  FScriptContainerElement *pFVar15;
  FRDGExternalTextureAccessFinal *pFVar16;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  code *local_e8;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code **local_c0;
  FScriptContainerElement *local_b8;
  undefined8 local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (this->State == Recording) {
    pTVar3 = (TFunction<void___cdecl(FRDGBuilder_&)> *)(this->RDGCommands).AllocatorInstance.Data;
    if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->RDGCommands).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->RDGCommands).ArrayNum;
    piVar1 = &(this->RDGCommands).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&(this->RDGCommands).AllocatorInstance,piVar1);
    }
    (this->RDGCommands).ArrayNum = iVar6 + 1;
    pFVar15 = (this->RDGCommands).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
    *(longlong *)pFVar15 = *(longlong *)param_1;
    *(longlong *)(pFVar15 + 0x28) = 0;
    if (*(longlong *)pFVar15 != 0) {
      puVar10 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar10)();
    }
    pFVar14 = param_2->DataPtr;
    pFVar16 = pFVar14 + param_2->ArrayNum;
    for (; pFVar14 != pFVar16; pFVar14 = pFVar14 + 1) {
      EVar2 = pFVar14->Access;
      uVar9 = ((uint)((ulonglong)pFVar14->TextureResource >> 0x14) & 0xffff ^
              (uint)((ulonglong)pFVar14->TextureResource >> 4)) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      pEVar7 = TMapBase<FTextureResource_*,enum_ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>_>
               ::FindOrAddImpl<FTextureResource_*_const_&>
                         (&this->RDGExternalTextureAccessFinal,uVar9 >> 0x10 ^ uVar9,
                          &pFVar14->TextureResource);
      *pEVar7 = EVar2;
    }
  }
  else {
    iVar6 = param_2->ArrayNum;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = CONCAT44(local_f0._4_4_,iVar6);
    if (iVar6 == 0) {
      local_f0 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,0,&local_f8,iVar6,(int *)((longlong)&local_f0 + 4));
      memcpy(local_f8.Data,param_2->DataPtr,(longlong)iVar6 << 4);
    }
    local_e8 = *(code **)param_1;
    local_c0 = (code **)0x0;
    if (local_e8 != (code *)0x0) {
      puVar10 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,&local_d8);
    }
    local_b8 = local_f8.Data;
    local_b0._0_4_ = (undefined4)local_f0;
    local_b0._4_4_ = local_f0._4_4_;
    local_f0 = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x50,0x10);
    *local_80 = (code *)&Core::Private::Function::
                         TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::`11'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar11 = local_80 + 2;
    *ppcVar11 = local_e8;
    local_80[7] = (code *)local_c0;
    local_c0 = (code **)0x0;
    local_80[4] = local_d8;
    local_80[5] = pcStack_d0;
    local_80[6] = local_c8;
    if (*ppcVar11 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    local_80[8] = (code *)0x0;
    local_80[8] = (code *)local_b8;
    local_b8 = (void *)0x0;
    *(undefined4 *)(local_80 + 9) = (undefined4)local_b0;
    *(undefined4 *)((longlong)local_80 + 0x4c) = local_b0._4_4_;
    if (ppcVar11 != (code **)0x0) {
      local_a8[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    local_b0 = 0;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand_::__l11::TSTR_FRDGBuilderRecorder_RDGCommand171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::__l11::TSTR_FRDGBuilderRecorder_RDGCommand171>
               ::Get();
      RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar8);
      uVar13 = (ulonglong)local_48;
      if ((2 < uVar13) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar11 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar11 = local_50;
          }
          (**(code **)(*ppcVar11 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar11 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar11 = local_80;
      }
      (**(code **)(*ppcVar11 + 0x10))();
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_e8 != (code *)0x0) {
      ppcVar11 = &local_d8;
      if (local_c0 != (code **)0x0) {
        ppcVar11 = local_c0;
      }
      (**(code **)(*ppcVar11 + 0x10))();
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  if (*(longlong *)param_1 != 0) {
    plVar12 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return;
}

// EnqueueRenderCommand @ 145fbe000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145fbe1b6) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x000145fbe1ba */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand
          (FRDGBuilderRecorder *this,TFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  undefined1 auStack_148 [32];
  code **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  code *local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined8 *local_d0;
  undefined1 local_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68 [48];
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar9 = *(longlong *)param_1;
  if (this->State == Recording) {
    local_70 = (longlong *)0x0;
    local_98 = lVar9;
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,local_88);
    }
    local_f8[0] = (code *)0x0;
    puVar5 = FMemory::Malloc(0x40,0x10);
    local_d0 = puVar5;
    *puVar5 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::`5'::<lambda_1>,0,1>
               ::_vftable_;
    puVar5[7] = 0;
    puVar5[2] = local_98;
    if (local_98 != 0) {
      plVar8 = local_88;
      if (local_70 != (longlong *)0x0) {
        plVar8 = local_70;
      }
      (**(code **)*plVar8)();
    }
    if (puVar5 + 2 != (longlong *)0x0) {
      local_f8[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>,void,FRDGBuilder_&>
                    ::Call;
    }
    pFVar10 = (this->RDGCommands).AllocatorInstance.Data;
    if ((pFVar10 <= (FScriptContainerElement *)local_f8) &&
       (lVar9 = (longlong)(this->RDGCommands).ArrayMax,
       (FScriptContainerElement *)local_f8 < pFVar10 + lVar9 * 0x30)) {
      local_110 = (longlong)(this->RDGCommands).ArrayNum;
      local_108 = 0x30;
      local_128 = local_f8;
      local_120 = pFVar10;
      local_118 = lVar9;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (this->RDGCommands).ArrayNum;
    piVar1 = &(this->RDGCommands).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&(this->RDGCommands).AllocatorInstance,piVar1);
    }
    (this->RDGCommands).ArrayNum = iVar4 + 1;
    pFVar10 = (this->RDGCommands).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
    *(code **)pFVar10 = local_f8[0];
    *(undefined8 **)(pFVar10 + 0x28) = local_d0;
    local_d0 = (undefined8 *)0x0;
    *(undefined4 *)(pFVar10 + 0x10) = local_e8;
    *(undefined4 *)(pFVar10 + 0x14) = uStack_e4;
    *(undefined4 *)(pFVar10 + 0x18) = uStack_e0;
    *(undefined4 *)(pFVar10 + 0x1c) = uStack_dc;
    *(longlong *)(pFVar10 + 0x20) = local_d8;
    if ((*(longlong *)pFVar10 == 0) && (local_f8[0] != (code *)0x0)) {
      (**(code **)(CONCAT44(uStack_e4,local_e8) + 0x10))();
    }
    if (local_98 == 0) goto LAB_145fbe2e7;
    plVar8 = local_88;
    plVar7 = local_70;
  }
  else {
    local_a0 = (longlong *)0x0;
    local_c8._0_8_ = lVar9;
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,local_c8 + 0x10);
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand_::__l7::TSTR_RDGImmediateRenderCommand201>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_c8._0_8_;
      local_68._40_8_ = local_a0;
      local_a0 = (longlong *)0x0;
      local_68._16_8_ = local_c8._16_8_;
      local_68._24_8_ = local_c8._24_8_;
      local_68._32_8_ = local_c8._32_8_;
      local_c8._0_8_ = 0;
      local_38 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l7::TSTR_RDGImmediateRenderCommand201>
               ::Get();
      RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar6);
      uVar11 = (ulonglong)local_38;
      if ((2 < uVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_68._0_8_ != 0) {
          plVar8 = (longlong *)(local_68 + 0x10);
          if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
            plVar8 = (longlong *)local_68._40_8_;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_68);
      }
    }
    if (local_c8._0_8_ == 0) goto LAB_145fbe2e7;
    plVar8 = (longlong *)(local_c8 + 0x10);
    plVar7 = local_a0;
  }
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  (**(code **)(*plVar8 + 0x10))();
LAB_145fbe2e7:
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// Flush @ 145fc09b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Landscape::FRDGBuilderRecorder::Flush(FRDGBuilderRecorder *this,FRDGEventName *param_1)

{
  int *piVar1;
  int iVar2;
  TFunction<void___cdecl(FRDGBuilder_&)> *pTVar3;
  code *pcVar4;
  bool bVar5;
  code **ppcVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_168 [32];
  code *local_138 [2];
  code *local_128 [3];
  code **local_110;
  TFunction<void___cdecl(FRDGBuilder_&)> *local_108;
  undefined8 local_100;
  undefined1 local_f8 [72];
  undefined4 local_b0;
  code *local_a8;
  FString local_a0;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((this->RDGCommands).ArrayNum != 0) {
    if (this->State != Immediate) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State == EState::Immediate",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                         ,0x81,
                         L"StopRecording needs to be called before flushing the recorded commands");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_108 = (TFunction<void___cdecl(FRDGBuilder_&)> *)(this->RDGCommands).AllocatorInstance.Data
    ;
    piVar1 = &(this->RDGCommands).ArrayMax;
    (this->RDGCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100._0_4_ = (this->RDGCommands).ArrayNum;
    local_100._4_4_ = *piVar1;
    *piVar1 = 0;
    (this->RDGCommands).ArrayNum = 0;
    TMap<FTextureResource_*,enum_ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>_>
    ::
    TMap<FTextureResource_*,enum_ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>_>
              (local_f8,&this->RDGExternalTextureAccessFinal);
    local_a8 = (code *)param_1->EventFormat;
    ::FString::FString(&local_a0,&param_1->FormattedEventName);
    local_138[0] = (code *)0x0;
    ppcVar6 = FMemory::Malloc(0x80,8);
    ppcVar6[1] = (code *)0x0;
    *ppcVar6 = (code *)&Core::Private::Function::
                        TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::Flush'::`5'::<lambda_1>,1,1>
                        ::_vftable_;
    ppcVar6[1] = (code *)local_108;
    local_108 = (TFunction<void___cdecl(FRDGBuilder_&)> *)0x0;
    *(int *)(ppcVar6 + 2) = (int)local_100;
    *(int *)((longlong)ppcVar6 + 0x14) = local_100._4_4_;
    local_100 = 0;
    local_110 = ppcVar6;
    TMap<FTextureResource_*,enum_ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>_>
    ::
    TMap<FTextureResource_*,enum_ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>_>
              (ppcVar6 + 3,
               (TMap<FTextureResource_*,ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,ERHIAccess,0>_>
                *)local_f8);
    ppcVar6[0xd] = local_a8;
    ::FString::FString((FString *)(ppcVar6 + 0xe),&local_a0);
    if (ppcVar6 + 1 != (code **)0x0) {
      local_138[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UE::Landscape::FRDGBuilderRecorder::Flush_::__l5::TSTR_FRDGBuilderRecorder_Flush131>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_138);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_138[0];
      local_60 = local_110;
      local_110 = (code **)0x0;
      local_88._16_8_ = local_128[0];
      local_88._24_8_ = local_128[1];
      local_88._32_8_ = local_128[2];
      local_138[0] = (code *)0x0;
      local_58 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::TSTR_FRDGBuilderRecorder_Flush131>
               ::Get();
      RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar7);
      uVar8 = (ulonglong)local_58;
      if (2 < uVar8) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar6 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar6 = local_60;
          }
          (**(code **)(*ppcVar6 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_88);
      }
    }
    if (local_138[0] != (code *)0x0) {
      ppcVar6 = local_138 + 2;
      if (local_110 != (code **)0x0) {
        ppcVar6 = local_110;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    local_b0 = 0;
    if ((void *)local_f8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FTextureResource_*,enum_ERHIAccess>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FTextureResource_*,enum_ERHIAccess>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_f8);
    DestructItems<TFunction<void___cdecl(FRDGBuilder_&)>,int>(local_108,(int)local_100);
    if (local_108 != (TFunction<void___cdecl(FRDGBuilder_&)> *)0x0) {
      FMemory::Free(local_108);
    }
    if ((this->RDGCommands).ArrayNum != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                         ,0x98,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar3 = (TFunction<void___cdecl(FRDGBuilder_&)> *)(this->RDGCommands).AllocatorInstance.Data;
    iVar2 = (this->RDGCommands).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TFunction<void___cdecl(FRDGBuilder_&)>,int>(pTVar3,iVar2);
      (this->RDGCommands).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,0,&(this->RDGCommands).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TFunction<void___cdecl(FRDGBuilder_&)>,int>(pTVar3,iVar2);
      (this->RDGCommands).ArrayNum = 0;
    }
    TSet<TTuple<FTextureResource_*,enum_ERHIAccess>,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>,FDefaultSetAllocator>
    ::Reset(&this->RDGExternalTextureAccessFinal);
  }
  return;
}

// IsEmpty @ 145fc5190

bool __thiscall UE::Landscape::FRDGBuilderRecorder::IsEmpty(FRDGBuilderRecorder *this)

{
  return (this->RDGCommands).ArrayNum == 0;
}

// StartRecording @ 145fc84c0

void __thiscall UE::Landscape::FRDGBuilderRecorder::StartRecording(FRDGBuilderRecorder *this)

{
  if (this->State == Immediate) {
    this->State = Recording;
  }
  return;
}

// StopRecording @ 145fc87f0

void __thiscall UE::Landscape::FRDGBuilderRecorder::StopRecording(FRDGBuilderRecorder *this)

{
  if (this->State == Recording) {
    this->State = Immediate;
  }
  return;
}

// StopRecordingAndFlush @ 145fc8810

void __thiscall
UE::Landscape::FRDGBuilderRecorder::StopRecordingAndFlush
          (FRDGBuilderRecorder *this,FRDGEventName *param_1)

{
  if (this->State == Recording) {
    this->State = Immediate;
    Flush(this,param_1);
    return;
  }
  return;
}

