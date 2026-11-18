// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 16

// StaticClass @ 14dd5ced0

UClass * __cdecl UMoviePipelineSetting_BlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineSetting_BlueprintBase",
               &Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineSetting_BlueprintBase,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineSetting_BlueprintBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineSetting_BlueprintBase>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.InnerSingleton;
}

// UMoviePipelineSetting_BlueprintBase @ 14dd6b7b0

UMoviePipelineSetting_BlueprintBase * __thiscall
UMoviePipelineSetting_BlueprintBase::UMoviePipelineSetting_BlueprintBase
          (UMoviePipelineSetting_BlueprintBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMoviePipelineSetting_BlueprintBase__6B_;
  FText::FText(&this->CategoryText);
  return this;
}

// ~UMoviePipelineSetting_BlueprintBase @ 14dd6c4c0

void __thiscall
UMoviePipelineSetting_BlueprintBase::~UMoviePipelineSetting_BlueprintBase
          (UMoviePipelineSetting_BlueprintBase *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineSetting_BlueprintBase__6B_;
  pIVar1 = (this->CategoryText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UMoviePipelineSetting__6B_;
  DestructItems<FText,int>((FText *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetFormatArguments @ 14dd88600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMoviePipelineSetting_BlueprintBase::GetFormatArguments
          (UMoviePipelineSetting_BlueprintBase *this,FMoviePipelineFormatArgs *param_1)

{
  UMoviePipelineExecutorJob *pUVar1;
  FMoviePipelineFormatArgs *pFVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [72];
  undefined4 local_80;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_78;
  void *local_38;
  undefined4 local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar2 = ReceiveGetFormatArguments(this,(FMoviePipelineFormatArgs *)local_c8,param_1);
  if (param_1 != pFVar2) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_1,
               (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)pFVar2);
  }
  if (&param_1->FileMetadata != &pFVar2->FileMetadata) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&param_1->FileMetadata,
               (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&pFVar2->FileMetadata);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (pFVar2->InJob).field0_0x0.DebugPtr, pUVar1 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (param_1->InJob).field0_0x0 = (pFVar2->InJob).field0_0x0;
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78);
  local_80 = 0;
  if ((void *)local_c8._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  return;
}

// GetPrivateStaticClass @ 14dd8c3b0

UClass * __cdecl UMoviePipelineSetting_BlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineSetting_BlueprintBase",
               &Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineSetting_BlueprintBase,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineSetting_BlueprintBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineSetting_BlueprintBase>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.InnerSingleton;
}

// IsValidOnPrimary @ 14dd903a0

bool __thiscall
UMoviePipelineSetting_BlueprintBase::IsValidOnPrimary(UMoviePipelineSetting_BlueprintBase *this)

{
  return this->bIsValidOnPrimary;
}

// IsValidOnShots @ 14dd90400

bool __thiscall
UMoviePipelineSetting_BlueprintBase::IsValidOnShots(UMoviePipelineSetting_BlueprintBase *this)

{
  return this->bIsValidOnShots;
}

// OnEngineTickBeginFrame @ 14dd91170

void __thiscall
UMoviePipelineSetting_BlueprintBase::OnEngineTickBeginFrame
          (UMoviePipelineSetting_BlueprintBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014dd9119d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// PostLoad @ 14dd95c70

void __thiscall
UMoviePipelineSetting_BlueprintBase::PostLoad(UMoviePipelineSetting_BlueprintBase *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UMoviePipelineSetting_BlueprintBase **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// ReceiveGetFormatArguments @ 14dd98110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMoviePipelineFormatArgs * __thiscall
UMoviePipelineSetting_BlueprintBase::ReceiveGetFormatArguments
          (UMoviePipelineSetting_BlueprintBase *this,
          FMoviePipelineFormatArgs *__return_storage_ptr__,FMoviePipelineFormatArgs *param_1)

{
  UMoviePipelineExecutorJob *pUVar1;
  int iVar2;
  uint uVar3;
  UFunction *this_00;
  UClass *pUVar4;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [32];
  void *local_178;
  undefined4 local_170;
  uint local_16c;
  undefined4 local_168;
  undefined4 local_164;
  ForElementType<FSetElementId> local_158;
  int local_150;
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  UMoviePipelineExecutorJob *local_f8;
  undefined1 auStack_f0 [32];
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  void *local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,
                       NAME_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments);
  pUVar4 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar4->ClassFlags & CLASS_Native) == CLASS_None) {
    local_f8 = (UMoviePipelineExecutorJob *)0x0;
    auStack_f0._0_8_ = (FScriptContainerElement *)0x0;
    local_c8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_c0 = _UNK_150631d98;
    local_78 = ___xmm_00000000ffffffff0000008000000000;
    uStack_70 = _UNK_150631d98;
    local_198._0_8_ = (FScriptContainerElement *)0x0;
    local_198._8_8_ = 0;
    local_178 = (void *)0x0;
    local_170 = 0;
    local_16c = 0x80;
    local_168 = 0xffffffff;
    local_164 = 0;
    local_158 = (ForElementType<FSetElementId>)0x0;
    local_150 = 0;
    local_148._0_8_ = (FScriptContainerElement *)0x0;
    local_148._8_8_ = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_11c = 0x80;
    local_118 = 0xffffffff;
    local_114 = 0;
    local_108 = (ForElementType<FSetElementId>)0x0;
    local_100 = 0;
    auStack_f0._8_8_ = 0;
    local_d0 = (void *)0x0;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    local_a0._0_8_ = (FScriptContainerElement *)0x0;
    local_a0._8_8_ = 0;
    local_80 = (void *)0x0;
    local_60 = (void *)0x0;
    local_58 = 0;
    local_50.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_198,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)param_1);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_148,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&param_1->FileMetadata);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_1->InJob).field0_0x0.DebugPtr, pUVar1 != (UMoviePipelineExecutorJob *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_f8 = (param_1->InJob).field0_0x0.DebugPtr;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_198);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)param_1,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_198);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&param_1->FileMetadata,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_148);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f8 != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f8);
    }
    (param_1->InJob).field0_0x0.DebugPtr = local_f8;
    FMoviePipelineFormatArgs::FMoviePipelineFormatArgs
              (__return_storage_ptr__,(FMoviePipelineFormatArgs *)auStack_f0);
    local_58 = 0;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a0,0,local_a0._8_4_);
    iVar2 = SUB84(local_a0._8_8_,4);
    local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
    }
    uVar3 = local_78._4_4_;
    uStack_70 = 0xffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_78 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a0._0_8_);
    }
    local_a8 = 0;
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)auStack_f0,0,auStack_f0._8_4_);
    iVar2 = SUB84(auStack_f0._8_8_,4);
    auStack_f0._8_8_ = auStack_f0._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)auStack_f0,0,(int *)(auStack_f0 + 0xc));
    }
    uVar3 = local_c8._4_4_;
    uStack_c0 = 0xffffffff;
    local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_c8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_f0 + 0x10),0);
    }
    if (local_d0 != (void *)0x0) {
      FMemory::Free(local_d0);
    }
    if ((FScriptContainerElement *)auStack_f0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_f0._0_8_);
    }
    local_100 = 0;
    if (local_108 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_148,0,local_148._8_4_);
    iVar2 = SUB84(local_148._8_8_,4);
    local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
    }
    local_118 = 0xffffffff;
    local_114 = 0;
    local_120 = 0;
    if (0x80 < local_11c) {
      local_11c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
    local_150 = 0;
    if (local_158 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_158);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_198,0,local_198._8_4_);
    iVar2 = SUB84(local_198._8_8_,4);
    local_198._8_8_ = local_198._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_198,0,(int *)(local_198 + 0xc));
    }
    local_164 = 0;
    local_170 = 0;
    local_168 = 0xffffffff;
    if (0x80 < local_16c) {
      local_16c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),0);
    }
    if (local_178 != (void *)0x0) {
      FMemory::Free(local_178);
    }
    if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_198._0_8_);
    }
  }
  else {
    FMoviePipelineFormatArgs::FMoviePipelineFormatArgs(__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// ReceiveSetupForPipelineImpl @ 14dd98560

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineSetting_BlueprintBase::ReceiveSetupForPipelineImpl
          (UMoviePipelineSetting_BlueprintBase *this,UMoviePipeline *param_1)

{
  UFunction *pUVar1;
  UMoviePipeline *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveTeardownForPipelineImpl @ 14dd985a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineSetting_BlueprintBase::ReceiveTeardownForPipelineImpl
          (UMoviePipelineSetting_BlueprintBase *this,UMoviePipeline *param_1)

{
  UFunction *pUVar1;
  UMoviePipeline *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// SetupForPipelineImpl @ 14dda54f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineSetting_BlueprintBase::SetupForPipelineImpl
          (UMoviePipelineSetting_BlueprintBase *this,UMoviePipeline *param_1)

{
  UFunction *pUVar1;
  UMoviePipeline *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMoviePipelineSetting_BlueprintBase>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrame,(UMoviePipelineSetting_BlueprintBase *)local_res8,
             (pmf_f3c8152a)this);
  return;
}

// StaticRegisterNativesUMoviePipelineSetting_BlueprintBase @ 14dda6850

void __cdecl
UMoviePipelineSetting_BlueprintBase::StaticRegisterNativesUMoviePipelineSetting_BlueprintBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TeardownForPipelineImpl @ 14dda68f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineSetting_BlueprintBase::TeardownForPipelineImpl
          (UMoviePipelineSetting_BlueprintBase *this,UMoviePipeline *param_1)

{
  UFunction *pUVar1;
  UMoviePipeline *local_res8;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
             this);
  local_res8 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  return;
}

// execReceiveGetFormatArguments @ 14ddad5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMoviePipelineSetting_BlueprintBase::execReceiveGetFormatArguments
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMoviePipelineFormatArgs *pFVar3;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [32];
  void *local_168;
  undefined4 local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  void *local_148;
  undefined4 local_140;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  void *local_f8;
  undefined4 local_f0;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_e8;
  undefined1 local_d8 [72];
  int local_90;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_88;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_15c = 0x80;
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158 = 0xffffffff;
  local_154 = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_e8.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  pFVar3 = (FMoviePipelineFormatArgs *)local_188;
  if ((FMoviePipelineFormatArgs *)param_2->MostRecentPropertyAddress !=
      (FMoviePipelineFormatArgs *)0x0) {
    pFVar3 = (FMoviePipelineFormatArgs *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMoviePipelineFormatArgs::FMoviePipelineFormatArgs((FMoviePipelineFormatArgs *)local_d8,pFVar3);
  if (param_3 != local_d8) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              (param_3,(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)local_d8);
  }
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)((longlong)param_3 + 0x50) != &local_88) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)((longlong)param_3 + 0x50),&local_88);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_38.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
  }
  ((TObjectPtr<UMoviePipelineExecutorJob>_u_0 *)((longlong)param_3 + 0xa0))->DebugPtr =
       (UMoviePipelineExecutorJob *)local_38;
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  local_90 = 0;
  if ((ForElementType<FSetElementId>)local_d8._64_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  local_f0 = 0;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_138,0,local_138._8_4_);
  iVar2 = SUB84(local_138._8_8_,4);
  local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
  }
  local_108 = 0xffffffff;
  local_104 = 0;
  local_110 = 0;
  if (0x80 < local_10c) {
    local_10c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._0_8_);
  }
  local_140 = 0;
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_188,0,local_188._8_4_);
  iVar2 = SUB84(local_188._8_8_,4);
  local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_188,0,(int *)(local_188 + 0xc));
  }
  local_158 = 0xffffffff;
  local_154 = 0;
  local_160 = 0;
  if (0x80 < local_15c) {
    local_15c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10),0);
  }
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  return;
}

