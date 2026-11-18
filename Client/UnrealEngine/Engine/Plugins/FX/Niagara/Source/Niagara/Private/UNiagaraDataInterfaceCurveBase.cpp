// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 28

// StaticClass @ 149076f50

UClass * __cdecl UNiagaraDataInterfaceCurveBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCurveBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCurveBase",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCurveBase.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCurveBase,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceCurveBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCurveBase>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCurveBase.InnerSingleton;
}

// UNiagaraDataInterfaceCurveBase @ 1490b4ab0

UNiagaraDataInterfaceCurveBase * __thiscall
UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase
          (UNiagaraDataInterfaceCurveBase *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->LUTOffset = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurveBase__6B_;
  (this->ShaderLUT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderLUT).ArrayNum = 0;
  (this->ShaderLUT).ArrayMax = 0;
  (this->ExposedName).ComparisonIndex = 0;
  (this->ExposedName).Number = 0;
  (this->ExposedTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  return this;
}

// UNiagaraDataInterfaceCurveBase @ 1490b4b00

UNiagaraDataInterfaceCurveBase * __thiscall
UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase
          (UNiagaraDataInterfaceCurveBase *this,FObjectInitializer *param_1)

{
  uint uVar1;
  FObjectInitializer *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FObjectInitializer::Get();
  pFVar2 = FObjectInitializer::Get();
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,pFVar2);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurveBase__6B_;
  puVar4 = (undefined8 *)0x0;
  this->LUTMaxTime = 1.0;
  this->_padding_ = 0;
  (this->ShaderLUT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bUseLUT = 1;
  this->bExposeCurve = 0;
  (this->ShaderLUT).ArrayNum = 0;
  (this->ShaderLUT).ArrayMax = 0;
  this->LUTMinTime = 0.0;
  this->LUTInvTimeRange = 1.0;
  this->LUTOffset = 0xffffffff;
  ::FName::FName(&this->ExposedName,L"Curve");
  (this->ExposedTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  puVar3 = ::operator_new(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
    *puVar3 = &___7FNiagaraDataInterfaceProxyCurveBase__6B_;
    puVar3[7] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)this->_padding_;
  if ((puVar3 != puVar4) && (this->_padding_ = (longlong)puVar4, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return this;
}

// UNiagaraDataInterfaceCurveBase @ 1490b4bf0

UNiagaraDataInterfaceCurveBase * __thiscall
UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase(UNiagaraDataInterfaceCurveBase *this)

{
  uint uVar1;
  FObjectInitializer *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FObjectInitializer::Get();
  pFVar2 = FObjectInitializer::Get();
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,pFVar2);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurveBase__6B_;
  puVar4 = (undefined8 *)0x0;
  this->LUTMaxTime = 1.0;
  this->_padding_ = 0;
  (this->ShaderLUT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bUseLUT = 1;
  this->bExposeCurve = 0;
  (this->ShaderLUT).ArrayNum = 0;
  (this->ShaderLUT).ArrayMax = 0;
  this->LUTMinTime = 0.0;
  this->LUTInvTimeRange = 1.0;
  this->LUTOffset = 0xffffffff;
  ::FName::FName(&this->ExposedName,L"Curve");
  (this->ExposedTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  puVar3 = ::operator_new(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
    *puVar3 = &___7FNiagaraDataInterfaceProxyCurveBase__6B_;
    puVar3[7] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)this->_padding_;
  if ((puVar3 != puVar4) && (this->_padding_ = (longlong)puVar4, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceCurveBase @ 1490b9380

void __thiscall
UNiagaraDataInterfaceCurveBase::~UNiagaraDataInterfaceCurveBase
          (UNiagaraDataInterfaceCurveBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurveBase__6B_;
  pFVar1 = (this->ShaderLUT).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 1490bd2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceCurveBase::PushToRenderThreadImpl'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FName FVar1;
  longlong lVar2;
  FRHIResource *pFVar3;
  uint uVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  void *_Dst;
  uchar auVar9 [8];
  uchar auVar10 [8];
  FName local_res8;
  FStatMessage local_38;
  
  *(undefined4 *)(*(longlong *)this + 0x10) = *(undefined4 *)((longlong)this + 8);
  *(undefined4 *)(*(longlong *)this + 0x14) = *(undefined4 *)((longlong)this + 0xc);
  *(undefined4 *)(*(longlong *)this + 0x18) = *(undefined4 *)((longlong)this + 0x10);
  *(int *)(*(longlong *)this + 0x1c) = (int)(longlong)*(float *)((longlong)this + 0x14);
  *(undefined4 *)(*(longlong *)this + 0x20) = *(undefined4 *)((longlong)this + 0x18);
  auVar9[4] = '\0';
  auVar9[5] = '\0';
  auVar9[6] = '\0';
  auVar9[7] = '\0';
  auVar9._0_4_ = *(uint *)(*(longlong *)this + 0x38);
  if (auVar9 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar5,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar9);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  lVar2 = *(longlong *)this;
  *(undefined4 *)(lVar2 + 0x38) = 0;
  pFVar3 = *(FRHIResource **)(lVar2 + 0x28);
  if (pFVar3 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar2 + 0x28) = 0;
    FRHIResource::Release(pFVar3);
  }
  pFVar3 = *(FRHIResource **)(lVar2 + 0x30);
  if (pFVar3 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar2 + 0x30) = 0;
    FRHIResource::Release(pFVar3);
  }
  if (0 < (int)*(uint *)((longlong)this + 0x28)) {
    FReadBuffer::Initialize
              ((FReadBuffer *)(*(longlong *)this + 0x28),(FRHICommandListBase *)param_1,L"CurveLUT",
               4,*(uint *)((longlong)this + 0x28),PF_R32_FLOAT,Static,
               (FResourceArrayUploadInterface *)0x0);
    uVar4 = *(int *)((longlong)this + 0x28) << 2;
    _Dst = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x28),0,
                      uVar4,RLM_WriteOnly);
    memcpy(_Dst,*(void **)((longlong)this + 0x20),(ulonglong)uVar4);
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x28));
    auVar10[4] = '\0';
    auVar10[5] = '\0';
    auVar10[6] = '\0';
    auVar10[7] = '\0';
    auVar10._0_4_ = *(uint *)(*(longlong *)this + 0x38);
    if (auVar10 != (uchar  [8])0x0) {
      FVar6 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                           *pFVar5,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                           "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar6;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res8 = FVar1;
        pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar7 == (FThreadStats *)0x0) {
          pFVar8 = FThreadStatsPool::Get();
          pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
        }
        local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_res8 = FVar1;
        local_38.StatData.Pad = auVar10;
        local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar7,&local_38);
        FStatsTrace::Add(&local_res8,(long64)auVar10);
        if (pFVar7->ScopeCount == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
    }
  }
  return;
}

// BuildLUT @ 1490d0960

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraDataInterfaceCurveBase::BuildLUT
          (UNiagaraDataInterfaceCurveBase *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceCurveBase.h"
             ,0xa1,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// BuildShaderParameters @ 1490d1020

void __thiscall
UNiagaraDataInterfaceCurveBase::BuildShaderParameters
          (UNiagaraDataInterfaceCurveBase *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<FNiagaraDataInterfaceCurveParameters>::GetStructMetadata()
  ;
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x20;
  return;
}

// CacheStaticBuffers @ 1490d10e0

void __thiscall
UNiagaraDataInterfaceCurveBase::CacheStaticBuffers
          (UNiagaraDataInterfaceCurveBase *this,FNiagaraSystemStaticBuffers *param_1,
          FNiagaraVariable *param_2,bool param_3,bool param_4)

{
  bool bVar1;
  uint uVar2;
  TArrayView<float_const_,int> *pTVar3;
  TArrayView<float_const_,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  this->LUTOffset = 0xffffffff;
  if (param_4) {
    bVar1 = FNiagaraVariableBase::IsInExternalNamespace((FNiagaraVariableBase *)param_2);
    if (!bVar1) {
      pTVar3 = TArrayView<float_const_,int>::
               TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                         (&local_18,&this->ShaderLUT);
      local_28.DataPtr = pTVar3->DataPtr;
      local_28.ArrayNum = pTVar3->ArrayNum;
      local_28._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
      uVar2 = FNiagaraSystemStaticBuffers::AddGpuData(param_1,&local_28);
      this->LUTOffset = uVar2;
    }
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  if ((this->_padding_ & 4) != 0) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// CanExecuteOnTarget @ 1490d2ac0

bool __thiscall
UNiagaraDataInterfaceCurveBase::CanExecuteOnTarget
          (UNiagaraDataInterfaceCurveBase *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CanExposeVariables @ 1490d2ad0

bool __thiscall
UNiagaraDataInterfaceCurveBase::CanExposeVariables(UNiagaraDataInterfaceCurveBase *this)

{
  return true;
}

// CompareLUTS @ 1490d5600

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceCurveBase::CompareLUTS
          (UNiagaraDataInterfaceCurveBase *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_38d1b717;
  iVar2 = (this->ShaderLUT).ArrayNum;
  if (iVar2 != param_1->ArrayNum) {
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    return false;
  }
  uVar9 = 0;
  if (0 < iVar2) {
    lVar10 = 0;
    do {
      uVar11 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      fVar1 = *(float *)((param_1->AllocatorInstance).Data + lVar10);
      uVar7 = 0;
      if ((int)uVar9 < (this->ShaderLUT).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (fVar4 < (float)((uint)(*(float *)((this->ShaderLUT).AllocatorInstance.Data + lVar10) -
                                fVar1) & uVar8)) {
        if ((byte)LogNiagara._0_1_ < 5) {
          return false;
        }
        uVar8 = 0;
        if ((int)uVar9 < (this->ShaderLUT).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar8 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar8 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar8 = 0;
        if ((int)uVar9 < (this->ShaderLUT).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        return false;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 4;
    } while ((int)uVar9 < (this->ShaderLUT).ArrayNum);
  }
  return true;
}

// CopyToInternal @ 1490d9840

bool __thiscall
UNiagaraDataInterfaceCurveBase::CopyToInternal
          (UNiagaraDataInterfaceCurveBase *this,UNiagaraDataInterface *param_1)

{
  FName FVar1;
  UNiagaraDataInterfaceCurveBase *pUVar2;
  
  if ((param_1 != (UNiagaraDataInterface *)0x0) && (param_1->_padding_ == this->_padding_)) {
    pUVar2 = CastChecked<UNiagaraDataInterfaceCurveBase,UNiagaraDataInterface>(param_1);
    *(uint *)&pUVar2->field_0x5c =
         *(uint *)&pUVar2->field_0x5c ^ (pUVar2->bUseLUT ^ this->bUseLUT) & 1;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(&pUVar2->ShaderLUT,&this->ShaderLUT);
    pUVar2->LUTMinTime = this->LUTMinTime;
    pUVar2->LUTMaxTime = this->LUTMaxTime;
    pUVar2->LUTInvTimeRange = this->LUTInvTimeRange;
    pUVar2->LUTNumSamplesMinusOne = this->LUTNumSamplesMinusOne;
    *(uint *)&pUVar2->field_0x5c =
         *(uint *)&pUVar2->field_0x5c ^
         (*(uint *)&pUVar2->field_0x5c ^ *(uint *)&this->field_0x5c) & 2;
    FVar1 = this->ExposedName;
    *(uint *)&pUVar2->_padding_ = (uint)pUVar2->_padding_ | 1;
    pUVar2->ExposedName = FVar1;
    if ((pUVar2->_padding_ & 4) != 0) {
      (**(code **)(pUVar2->_padding_ + 0x448))(pUVar2);
      *(uint *)&pUVar2->_padding_ = (uint)pUVar2->_padding_ & 0xfffffffe;
    }
    return true;
  }
  return false;
}

// Equals @ 1490f2cf0

bool __thiscall
UNiagaraDataInterfaceCurveBase::Equals
          (UNiagaraDataInterfaceCurveBase *this,UNiagaraDataInterface *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  bool bVar7;
  wchar_t *pwVar8;
  uint uVar9;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_1->_padding_ != this->_padding_)) {
    return false;
  }
  pUVar4 = StaticClass();
  iVar3 = (int)pUVar4->_padding_;
  if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      == &pUVar4->_padding_)) {
    uVar1 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
    uVar9 = ZPULL(*(undefined4 *)&this->field_0x5c,0,1);
    bVar7 = false;
    if ((FName)param_1[1].Proxy.Ptr == this->ExposedName) {
      bVar7 = (bool)((~(byte)(uVar1 >> 1) ^ (byte)((uint)*(undefined4 *)&this->field_0x5c >> 1)) &
                    (uVar1 & 1) == uVar9);
    }
    if (bVar7 != false) {
      if (uVar9 != 0) {
        iVar3 = (int)param_1[1]._padding_;
        if ((iVar3 == (this->ShaderLUT).ArrayNum) &&
           ((iVar3 == 0 ||
            (iVar3 = memcmp((void *)param_1[1]._padding_,(this->ShaderLUT).AllocatorInstance.Data,
                            (longlong)iVar3 << 2), iVar3 == 0)))) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        return (bool)(bVar7 & bVar2);
      }
      return bVar7;
    }
    return false;
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceCurveBase>(&local_28);
  pwVar8 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar6);
}

// GetCurveData @ 149104aa0

void __thiscall
UNiagaraDataInterfaceCurveBase::GetCurveData
          (UNiagaraDataInterfaceCurveBase *this,
          TArray<UNiagaraDataInterfaceCurveBase::FCurveData,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetCurveNumElems @ 149104ad0

int __thiscall
UNiagaraDataInterfaceCurveBase::GetCurveNumElems(UNiagaraDataInterfaceCurveBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceCurveBase.h"
             ,0x9b,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetExposedVariableValue @ 149105320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceCurveBase::GetExposedVariableValue
          (UNiagaraDataInterfaceCurveBase *this,FNiagaraVariableBase *param_1,void *param_2,
          FNiagaraSystemInstance *param_3,void *param_4)

{
  UTexture2D *pUVar1;
  
  if ((this->bExposeCurve != 0) &&
     (pUVar1 = (this->ExposedTexture).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    *(UTexture2D **)param_4 = pUVar1;
    return true;
  }
  return false;
}

// GetExposedVariables @ 149105350

void __thiscall
UNiagaraDataInterfaceCurveBase::GetExposedVariables
          (UNiagaraDataInterfaceCurveBase *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  uint uVar3;
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (this->bExposeCurve != 0) {
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    iVar2 = param_1->ArrayNum;
    if (iVar2 == param_1->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar2 + 1;
    pFVar1 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar2 * 0xc);
    *pFVar1 = this->ExposedName;
    uVar3 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)(pFVar1 + 1),
                       (FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    pFVar1[1].ComparisonIndex.Value = uVar3;
  }
  return;
}

// GetPrivateStaticClass @ 149109e90

UClass * __cdecl UNiagaraDataInterfaceCurveBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCurveBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCurveBase",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCurveBase.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCurveBase,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceCurveBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCurveBase>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCurveBase.InnerSingleton;
}

// PostCompile @ 14911f5e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCurveBase::PostCompile
          (UNiagaraDataInterfaceCurveBase *this,UNiagaraSystem *param_1)

{
  return;
}

// PostLoad @ 149120e80

void __thiscall UNiagaraDataInterfaceCurveBase::PostLoad(UNiagaraDataInterfaceCurveBase *this)

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
    if (*(UNiagaraDataInterfaceCurveBase **)FVar5 == this) {
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

// PushToRenderThreadImpl @ 149125a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceCurveBase::PushToRenderThreadImpl(UNiagaraDataInterfaceCurveBase *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  FScriptContainerElement *_Src;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ForAnyElementType *pFVar13;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar14;
  code **ppcVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  undefined1 auStackY_158 [32];
  ForAnyElementType local_118;
  int local_110;
  int aiStack_10c [3];
  ForAnyElementType local_100;
  undefined8 local_f8;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  undefined1 local_b8 [40];
  code **local_90;
  byte local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pcVar9 = (code *)this->_padding_;
  aiStack_10c[1] = 0;
  if (pcVar9 == (code *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypedProxy != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                        ,0x3a0,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar5 = this->LUTOffset;
  FVar17.Data = (FScriptContainerElement *)0x0;
  fVar1 = this->LUTMinTime;
  fVar2 = this->LUTMaxTime;
  fVar3 = this->LUTInvTimeRange;
  fVar4 = this->LUTNumSamplesMinusOne;
  if (uVar5 == 0xffffffff) {
    iVar6 = (this->ShaderLUT).ArrayNum;
    _Src = (this->ShaderLUT).AllocatorInstance.Data;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = iVar6;
    if (iVar6 == 0) {
      aiStack_10c[0] = 0;
      pFVar13 = &local_118;
      bVar10 = true;
      bVar11 = false;
      FVar17.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar6,0,&local_118,iVar6,aiStack_10c);
      memcpy(local_118.Data,_Src,(longlong)iVar6 << 2);
      pFVar13 = &local_118;
      bVar10 = true;
      bVar11 = false;
      FVar17.Data = local_118.Data;
    }
  }
  else {
    local_f8 = 0;
    pFVar13 = &local_100;
    bVar10 = false;
    bVar11 = true;
  }
  pFVar13->Data = (FScriptContainerElement *)0x0;
  uVar7 = *(undefined4 *)&pFVar13[1].Data;
  uVar8 = *(undefined4 *)((longlong)&pFVar13[1].Data + 4);
  pFVar13[1].Data = (FScriptContainerElement *)0x0;
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x38,8);
  *(float *)(local_c0 + 2) = fVar1;
  *(float *)((longlong)local_c0 + 0x14) = fVar2;
  *local_c0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceCurveBase::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *(float *)(local_c0 + 3) = fVar3;
  *(float *)((longlong)local_c0 + 0x1c) = fVar4;
  local_c0[1] = pcVar9;
  *(uint *)(local_c0 + 4) = uVar5;
  local_c0[5] = (code *)FVar17.Data;
  *(undefined4 *)(local_c0 + 6) = uVar7;
  *(undefined4 *)((longlong)local_c0 + 0x34) = uVar8;
  if (local_c0 + 1 != (code **)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceCurveBase::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceCurveBase::PushToRenderThreadImpl_::__l2::TSTR_FUpdateDICurve532>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_b8._0_8_ = local_e8[0];
    local_90 = local_c0;
    local_c0 = (code **)0x0;
    local_b8._16_8_ = local_d8[0];
    local_b8._24_8_ = local_d8[1];
    local_b8._32_8_ = local_d8[2];
    local_e8[0] = (code *)0x0;
    local_88 = 2;
    pFVar14 = (FRenderCommandTag *)
              TRenderCommandTag<`UNiagaraDataInterfaceCurveBase::PushToRenderThreadImpl'::__l2::TSTR_FUpdateDICurve532>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_b8,pFVar14);
    uVar16 = (ulonglong)local_88;
    if (2 < uVar16) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_b8._0_8_ != (code *)0x0) {
        ppcVar15 = (code **)(local_b8 + 0x10);
        if (local_90 != (code **)0x0) {
          ppcVar15 = local_90;
        }
        (**(code **)(*ppcVar15 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(local_b8);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    ppcVar15 = local_e8 + 2;
    if (local_c0 != (code **)0x0) {
      ppcVar15 = local_c0;
    }
    (**(code **)(*ppcVar15 + 0x10))();
  }
  if (bVar11) {
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
  }
  if ((bVar10) && (local_118.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_118.Data);
  }
  return;
}

// Serialize @ 14912d1f0

void __thiscall
UNiagaraDataInterfaceCurveBase::Serialize(UNiagaraDataInterfaceCurveBase *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) &&
     (*(uint *)&this->_padding_ = (uint)this->_padding_ | 1, (this->_padding_ & 4) != 0)) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// Serialize @ 14912d240

void __thiscall
UNiagaraDataInterfaceCurveBase::Serialize
          (UNiagaraDataInterfaceCurveBase *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) &&
     (*(uint *)&this->_padding_ = (uint)this->_padding_ | 1, (this->_padding_ & 4) != 0)) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// SetDefaultLUT @ 14912d3f0

void __thiscall UNiagaraDataInterfaceCurveBase::SetDefaultLUT(UNiagaraDataInterfaceCurveBase *this)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = (**(code **)(this->_padding_ + 0x468))();
  if (-1 < (int)uVar3) {
    piVar1 = &(this->ShaderLUT).ArrayMax;
    piVar2 = &(this->ShaderLUT).ArrayNum;
    *piVar2 = 0;
    if (*piVar1 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&(this->ShaderLUT).AllocatorInstance,0,piVar1);
    }
    iVar4 = (**(code **)(this->_padding_ + 0x468))(this);
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar4,&(this->ShaderLUT).AllocatorInstance,piVar2,piVar1);
    memset((this->ShaderLUT).AllocatorInstance.Data + (longlong)iVar5 * 4,0,(longlong)iVar4 << 2);
    this->LUTNumSamplesMinusOne = 0.0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// SetShaderParameters @ 1491331b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCurveBase::SetShaderParameters
          (UNiagaraDataInterfaceCurveBase *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FRHIShaderResourceView *pFVar6;
  uint uVar7;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar7 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<FNiagaraDataInterfaceCurveParameters>::GetStructMetadata()
  ;
  param_1->ParametersOffset = pFVar5->Size + uVar7;
  puVar2 = param_1->BaseParameters;
  *(int *)(puVar2 + uVar7) = (int)pFVar1[1]._padding_;
  *(undefined4 *)(puVar2 + (ulonglong)uVar7 + 4) =
       *(undefined4 *)((longlong)&pFVar1[1]._padding_ + 4);
  *(uint *)(puVar2 + (ulonglong)uVar7 + 8) = pFVar1[1].SourceDIName.ComparisonIndex.Value;
  *(uint *)(puVar2 + (ulonglong)uVar7 + 0xc) = pFVar1[1].SourceDIName.Number;
  *(int *)(puVar2 + (ulonglong)uVar7 + 0x10) = (int)pFVar1[2]._padding_;
  pFVar6 = (FRHIShaderResourceView *)pFVar1[3]._padding_;
  if (pFVar6 == (FRHIShaderResourceView *)0x0) {
    pFVar6 = FNiagaraRenderer::GetDummyFloatBuffer();
  }
  *(FRHIShaderResourceView **)(puVar2 + (ulonglong)uVar7 + 0x18) = pFVar6;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceCurveBase @ 14913a000

void __cdecl
UNiagaraDataInterfaceCurveBase::StaticRegisterNativesUNiagaraDataInterfaceCurveBase(void)

{
  return;
}

// UpdateTimeRanges @ 149141640

void __thiscall
UNiagaraDataInterfaceCurveBase::UpdateTimeRanges(UNiagaraDataInterfaceCurveBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceCurveBase.h"
             ,0xa0,L"Pure virtual not implemented (%s)");
  return;
}

