// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 33

// FNiagaraEmitterInstanceImpl @ 149275e00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraEmitterInstanceImpl * __thiscall
FNiagaraEmitterInstanceImpl::FNiagaraEmitterInstanceImpl
          (FNiagaraEmitterInstanceImpl *this,FNiagaraSystemInstance *param_1)

{
  TSharedPtr<FNiagaraGpuComputeDispatchInterface,1> *pTVar1;
  undefined1 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  FNiagaraDataSet *this_00;
  FNiagaraGpuComputeDispatchInterface *pFVar7;
  FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *pFVar8;
  FNiagaraEmitterInstanceImpl *pFVar9;
  FNiagaraGpuComputeDispatchInterface *pFVar10;
  FNiagaraGpuComputeDispatchInterface *pFVar11;
  bool bVar12;
  undefined8 local_38 [2];
  
  pFVar10 = (FNiagaraGpuComputeDispatchInterface *)0x0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNiagaraEmitterInstance__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)&this->_padding_);
  lVar4 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(byte *)&this->_padding_ = (byte)lVar4 & 0xf3 | 3;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
  this->_padding_ = (longlong)&___7FNiagaraEmitterInstanceImpl__6B_;
  (this->SpawnInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnInfos).ArrayNum = 0;
  (this->SpawnInfos).ArrayMax = 0;
  FNiagaraScriptExecutionContextBase::FNiagaraScriptExecutionContextBase
            ((FNiagaraScriptExecutionContextBase *)&this->SpawnExecContext);
  (this->SpawnExecContext)._padding_ = (longlong)&___7FNiagaraScriptExecutionContext__6B_;
  (this->SpawnExecContext).LocalFunctionTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnExecContext).LocalFunctionTable.ArrayNum = 0;
  (this->SpawnExecContext).LocalFunctionTable.ArrayMax = 0;
  FNiagaraScriptExecutionContextBase::FNiagaraScriptExecutionContextBase
            ((FNiagaraScriptExecutionContextBase *)&this->UpdateExecContext);
  (this->UpdateExecContext)._padding_ = (longlong)&___7FNiagaraScriptExecutionContext__6B_;
  (this->UpdateExecContext).LocalFunctionTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateExecContext).LocalFunctionTable.ArrayNum = 0;
  (this->UpdateExecContext).LocalFunctionTable.ArrayMax = 0;
  (this->SpawnIntervalBinding).ValuePtr = (float *)0x0;
  (this->SpawnIntervalBinding).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->SpawnIntervalBinding).BoundVariable._padding_ = 0;
  iVar5 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->SpawnIntervalBinding).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->SpawnIntervalBinding).BoundVariable._padding_ = iVar5;
  (this->SpawnIntervalBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnIntervalBinding).BoundVariable.VarData.ArrayNum = 0;
  (this->SpawnIntervalBinding).BoundVariable.VarData.ArrayMax = 0;
  (this->InterpSpawnStartBinding).ValuePtr = (float *)0x0;
  (this->InterpSpawnStartBinding).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->InterpSpawnStartBinding).BoundVariable._padding_ = 0;
  iVar5 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->InterpSpawnStartBinding).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->InterpSpawnStartBinding).BoundVariable._padding_ = iVar5;
  (this->InterpSpawnStartBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InterpSpawnStartBinding).BoundVariable.VarData.ArrayNum = 0;
  (this->InterpSpawnStartBinding).BoundVariable.VarData.ArrayMax = 0;
  (this->SpawnGroupBinding).ValuePtr = (int *)0x0;
  (this->SpawnGroupBinding).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->SpawnGroupBinding).BoundVariable._padding_ = 0;
  iVar5 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->SpawnGroupBinding).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->SpawnGroupBinding).BoundVariable._padding_ = iVar5;
  (this->SpawnGroupBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnGroupBinding).BoundVariable.VarData.ArrayNum = 0;
  (this->SpawnGroupBinding).BoundVariable.VarData.ArrayMax = 0;
  (this->SpawnExecCountBinding).ValuePtr = (int *)0x0;
  (this->SpawnExecCountBinding).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->SpawnExecCountBinding).BoundVariable._padding_ = 0;
  iVar5 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->SpawnExecCountBinding).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->SpawnExecCountBinding).BoundVariable._padding_ = iVar5;
  (this->SpawnExecCountBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnExecCountBinding).BoundVariable.VarData.ArrayNum = 0;
  (this->SpawnExecCountBinding).BoundVariable.VarData.ArrayMax = 0;
  (this->UpdateExecCountBinding).ValuePtr = (int *)0x0;
  (this->UpdateExecCountBinding).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->UpdateExecCountBinding).BoundVariable._padding_ = 0;
  iVar5 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->UpdateExecCountBinding).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->UpdateExecCountBinding).BoundVariable._padding_ = iVar5;
  pTVar1 = &this->ComputeDispatchInterfacePtr;
  (this->UpdateExecCountBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateExecCountBinding).BoundVariable.VarData.ArrayNum = 0;
  (this->UpdateExecCountBinding).BoundVariable.VarData.ArrayMax = 0;
  (this->EmitterCompiledData).Object = (FNiagaraEmitterCompiledData *)0x0;
  (this->EmitterCompiledData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EventInstanceData).Ptr = (FEventInstanceData *)0x0;
  pTVar1->Object = (FNiagaraGpuComputeDispatchInterface *)0x0;
  (this->ComputeDispatchInterfacePtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedIDName).ComparisonIndex = 0;
  (this->CachedIDName).Number = 0;
  this->EmitterAge = 0.0;
  this->RandomSeed = 0;
  iVar5 = rand();
  this->bResetPending = 0;
  this->bAllowSpawning_GT = 1;
  this->bAllowSpawning_CNC = 1;
  this->InstanceSeed = iVar5;
  this->TickCount = 0;
  this->MaxRuntimeAllocation = 0;
  this->MaxAllocationCount = 0;
  this->MinOverallocation = -1;
  this->ReallocationCount = 0;
  this->MaxInstanceCount = 0;
  *(undefined8 *)&this->ParticlesWithComponents = 0;
  *(undefined8 *)&(this->ParticlesWithComponents).field_0x8 = 0;
  *(undefined8 *)&(this->ParticlesWithComponents).field_0x20 = 0;
  *(undefined4 *)&(this->ParticlesWithComponents).field_0x28 = 0;
  *(undefined4 *)&(this->ParticlesWithComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParticlesWithComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParticlesWithComponents).field_0x34 = 0;
  *(undefined8 *)&(this->ParticlesWithComponents).field_0x40 = 0;
  *(undefined4 *)&(this->ParticlesWithComponents).field_0x48 = 0;
  this_00 = ::operator_new(0xc0);
  pFVar7 = pFVar10;
  if (this_00 != (FNiagaraDataSet *)0x0) {
    pFVar7 = (FNiagaraGpuComputeDispatchInterface *)FNiagaraDataSet::FNiagaraDataSet(this_00);
  }
  this->_padding_ = (longlong)pFVar7;
  lVar4 = *(longlong *)(this->_padding_ + 0x920);
  if (lVar4 != 0) {
    pFVar7 = *(FNiagaraGpuComputeDispatchInterface **)(lVar4 + 0x10);
    pFVar11 = pFVar7;
    if (pFVar7 != (FNiagaraGpuComputeDispatchInterface *)0x0) {
      iVar5 = *(int *)&((FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)
                       &pFVar7->_padding_)->StructPtr;
      do {
        pFVar11 = pFVar10;
        if (iVar5 == 0) goto LAB_149276205;
        LOCK();
        iVar6 = *(int *)&((FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)
                         &pFVar7->_padding_)->StructPtr;
        bVar12 = iVar5 == iVar6;
        if (bVar12) {
          *(int *)&((FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)&pFVar7->_padding_
                   )->StructPtr = iVar5 + 1;
          iVar6 = iVar5;
        }
        UNLOCK();
        iVar5 = iVar6;
      } while (!bVar12);
      pFVar10 = *(FNiagaraGpuComputeDispatchInterface **)(lVar4 + 8);
      pFVar11 = pFVar7;
    }
LAB_149276205:
    pFVar8 = (FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)&pFVar10->_padding_;
    if (pFVar10 == (FNiagaraGpuComputeDispatchInterface *)0x0) {
      pFVar8 = (FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)0x0;
    }
    if ((pFVar8 != (FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)(lVar4 + 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FNiagaraEmitterInstanceImpl *)(*pcVar3)();
      return pFVar9;
    }
    if (pFVar10 == (FNiagaraGpuComputeDispatchInterface *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FNiagaraEmitterInstanceImpl *)(*pcVar3)();
        return pFVar9;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FNiagaraEmitterInstanceImpl *)(*pcVar3)();
        return pFVar9;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar11 != (FNiagaraGpuComputeDispatchInterface *)0x0) {
      LOCK();
      *(int *)&((FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)&pFVar11->_padding_)->
               StructPtr =
           *(int *)&((FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)
                    &pFVar11->_padding_)->StructPtr + 1;
      UNLOCK();
      LOCK();
      *(int *)&((FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)&pFVar11->_padding_)->
               StructPtr =
           *(int *)&((FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)
                    &pFVar11->_padding_)->StructPtr + 1;
      UNLOCK();
    }
    pFVar7 = pFVar11;
    if (pTVar1 != (TSharedPtr<FNiagaraGpuComputeDispatchInterface,1> *)local_38) {
      pTVar1->Object = pFVar10;
      pFVar10 = (FNiagaraGpuComputeDispatchInterface *)
                (this->ComputeDispatchInterfacePtr).SharedReferenceCount.ReferenceController;
      if (pFVar11 != pFVar10) {
        (this->ComputeDispatchInterfacePtr).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pFVar11;
        pFVar7 = (FNiagaraGpuComputeDispatchInterface *)0x0;
        if (pFVar10 != (FNiagaraGpuComputeDispatchInterface *)0x0) {
          LOCK();
          pFVar8 = (FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)&pFVar10->_padding_
          ;
          iVar5 = *(int *)&pFVar8->StructPtr;
          *(int *)&pFVar8->StructPtr = *(int *)&pFVar8->StructPtr + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)pFVar10->_padding_)(pFVar10);
            LOCK();
            puVar2 = (undefined1 *)
                     ((longlong)
                      &((FNiagaraCompiledDataReference<FNiagaraDataSetCompiledData> *)
                       &pFVar10->_padding_)->StructPtr + 4);
            iVar5 = *(int *)puVar2;
            *(int *)puVar2 = *(int *)puVar2 + -1;
            UNLOCK();
            pFVar7 = (FNiagaraGpuComputeDispatchInterface *)0x0;
            if (iVar5 == 1) {
              (**(code **)(pFVar10->_padding_ + 8))(pFVar10,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
  }
  return this;
}

// ~FNiagaraEmitterInstanceImpl @ 14927a300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl(FNiagaraEmitterInstanceImpl *this)

{
  FNiagaraDataSet *this_00;
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 uStack_98;
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  longlong local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  longlong local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this->_padding_ = (longlong)&___7FNiagaraEmitterInstanceImpl__6B_;
  this->_padding_ = 0;
  local_a0 = 0;
  uStack_98 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar4;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  UnbindParameters(this,false);
  if (this->_padding_ == 0) {
    this_00 = (FNiagaraDataSet *)this->_padding_;
    if (this_00 == (FNiagaraDataSet *)0x0) goto LAB_14927a4e6;
    FNiagaraDataSet::~FNiagaraDataSet(this_00);
    ::operator_delete(this_00,0xc0);
  }
  else {
    FNiagaraParameterStore::UnbindAll((FNiagaraParameterStore *)(this->_padding_ + 0x80));
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    lStack_70 = this->_padding_;
    local_68 = this->_padding_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl_::__l5::TSTR_FDeleteContextCommand140>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      lStack_40 = lStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::TSTR_FDeleteContextCommand140>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar6);
      uVar8 = (ulonglong)local_28;
      if (2 < uVar8) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar7 = local_30;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar7 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar7 = local_60;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    this->_padding_ = 0;
  }
  this->_padding_ = 0;
LAB_14927a4e6:
  *(undefined4 *)&(this->ParticlesWithComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ParticlesWithComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParticlesWithComponents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeDispatchInterfacePtr).SharedReferenceCount.ReferenceController);
  TDefaultDelete<FNiagaraEmitterInstanceImpl::FEventInstanceData>::operator()
            ((TDefaultDelete<FNiagaraEmitterInstanceImpl::FEventInstanceData> *)
             &this->EventInstanceData,(this->EventInstanceData).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EmitterCompiledData).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->UpdateExecCountBinding).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SpawnExecCountBinding).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SpawnGroupBinding).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InterpSpawnStartBinding).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SpawnIntervalBinding).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
              *)(this->UpdateExecContext).LocalFunctionTable.AllocatorInstance.Data,
             (this->UpdateExecContext).LocalFunctionTable.ArrayNum);
  pFVar2 = (this->UpdateExecContext).LocalFunctionTable.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FNiagaraScriptExecutionContextBase::~FNiagaraScriptExecutionContextBase
            ((FNiagaraScriptExecutionContextBase *)&this->UpdateExecContext);
  DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
              *)(this->SpawnExecContext).LocalFunctionTable.AllocatorInstance.Data,
             (this->SpawnExecContext).LocalFunctionTable.ArrayNum);
  pFVar2 = (this->SpawnExecContext).LocalFunctionTable.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FNiagaraScriptExecutionContextBase::~FNiagaraScriptExecutionContextBase
            ((FNiagaraScriptExecutionContextBase *)&this->SpawnExecContext);
  pFVar2 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FNiagaraEmitterInstance::~FNiagaraEmitterInstance((FNiagaraEmitterInstance *)this);
  return;
}

// operator() @ 1492800b0

void __thiscall
`FNiagaraEmitterInstanceImpl::Tick'::__l245::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined4 uVar1;
  FRHIUniformBufferLayout *pFVar2;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar3;
  FRHIUniformBufferLayout *this_00;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_88;
  int local_80 [2];
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_78;
  undefined8 local_70;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_68;
  undefined8 local_60;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_58;
  undefined8 local_50;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_48;
  undefined8 local_40;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_38;
  undefined8 local_30;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  pFVar2 = ::operator_new(0x98);
  this_00 = (FRHIUniformBufferLayout *)0x0;
  if (pFVar2 != (FRHIUniformBufferLayout *)0x0) {
    uVar1 = *(undefined4 *)((longlong)this + 8);
    local_88.Packed = 0;
    local_80[0] = 0;
    local_80[1] = 0;
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (2,2,0x1d,(ForAnyElementType *)&local_88.Frozen,local_80,local_80 + 1);
    TVar3 = local_88;
    if ((local_88.Packed & 1) != 0) {
      TVar3.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_88 + ((longlong)local_88.Packed >> 0x18));
    }
    FGenericPlatformString::Memcpy(TVar3.UnfrozenPtr,L"Niagara GPU External CBuffer",0x3a);
    local_78.Packed = 0;
    local_70 = 0;
    local_68.Packed = 0;
    local_60 = 0;
    local_58.Packed = 0;
    local_50 = 0;
    local_48.Packed = 0;
    local_40 = 0;
    local_38.Packed = 0;
    local_30 = 0;
    local_28.Packed = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0x1ffffff;
    local_c = 0;
    local_14 = uVar1;
    FRHIUniformBufferLayoutInitializer::ComputeHash
              ((FRHIUniformBufferLayoutInitializer *)&local_88.Frozen);
    FRHIUniformBufferLayout::FRHIUniformBufferLayout
              (pFVar2,(FRHIUniformBufferLayoutInitializer *)&local_88.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_28.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_38.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_48.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_58.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_68.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_78.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_88.Frozen);
    pFVar2->_padding_ = (longlong)&___7FNiagaraRHIUniformBufferLayout__6B_;
    this_00 = pFVar2;
  }
  pFVar2 = *(FRHIUniformBufferLayout **)(*(longlong *)this + 0x78);
  if (pFVar2 != this_00) {
    *(FRHIUniformBufferLayout **)(*(longlong *)this + 0x78) = this_00;
    if (this_00 != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (pFVar2 != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  return;
}

// operator() @ 1492803f0

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

void __thiscall
`FNiagaraEmitterInstanceImpl::Tick'::__l385::<lambda_3>::operator()
          (void *this,int param_1,wchar_t *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FNiagaraDataSet *pFVar6;
  FNiagaraDataBuffer *pFVar7;
  code *pcVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  FNiagaraEmitterParameters *pFVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int local_res8;
  undefined1 local_res10 [8];
  wchar_t *local_res18;
  uint local_res20;
  FName local_84;
  FName local_7c;
  undefined8 *local_70;
  FString local_68;
  FString local_58;
  
  lVar14 = *(longlong *)this;
  local_res18 = param_2;
  if ((*(longlong *)(lVar14 + 0x80) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DestinationData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x15e,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = *(longlong *)this;
  iVar3 = *(int *)(*(longlong *)(lVar14 + 0x80) + 0x124);
  if ((*(longlong *)(lVar5 + 0x80) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DestinationData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x15e,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar14 = *(longlong *)(lVar5 + 0x80);
  if ((*(uint *)(lVar14 + 0x128) < (uint)(iVar3 + param_1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNumInstances <= NumInstancesAllocated",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x9c,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(int *)(lVar14 + 0x124) = iVar3 + param_1;
  lVar14 = *(longlong *)((longlong)this + 8);
  iVar4 = *(int *)(lVar14 + 0xcc);
  pFVar12 = FNiagaraSystemInstance::EditEmitterParameters
                      (*(FNiagaraSystemInstance **)(lVar14 + 8),*(int *)(lVar14 + 200));
  pFVar12->EmitterTotalSpawnedParticles = iVar4;
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0xcc);
  *piVar1 = *piVar1 + param_1;
  piVar1 = *(int **)(*(longlong *)((longlong)this + 8) + 0x7a8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
  }
  FNiagaraScriptExecutionContextBase::BindData
            ((FNiagaraScriptExecutionContextBase *)(*(longlong *)((longlong)this + 8) + 0x1a0),0,
             *(FNiagaraDataSet **)this,iVar3,true);
  lVar14 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x828);
  if (lVar14 != 0) {
    local_res20 = *(uint *)(lVar14 + 0x38);
    uVar13 = (ulonglong)(int)local_res20;
    puVar17 = *(undefined8 **)(lVar14 + 0x30);
    local_res8 = 1;
    local_70 = puVar17 + uVar13;
    while( true ) {
      puVar9 = local_70;
      if (*(int *)(lVar14 + 0x38) != (int)uVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar17 == puVar9) break;
      pFVar6 = (FNiagaraDataSet *)*puVar17;
      if ((pFVar6->DestinationData == (FNiagaraDataBuffer *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("DestinationData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x15e,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = pFVar6->DestinationData->NumInstances;
      if ((pFVar6->DestinationData == (FNiagaraDataBuffer *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("DestinationData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x15e,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = pFVar6->DestinationData;
      uVar15 = uVar11 + param_1;
      if ((pFVar7->NumInstancesAllocated < uVar15) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InNumInstances <= NumInstancesAllocated",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x9c,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7->NumInstances = uVar15;
      FNiagaraScriptExecutionContextBase::BindData
                ((FNiagaraScriptExecutionContextBase *)(*(longlong *)((longlong)this + 8) + 0x1a0),
                 local_res8,pFVar6,uVar11,true);
      uVar13 = (ulonglong)local_res20;
      puVar17 = puVar17 + 1;
      local_res8 = local_res8 + 1;
    }
  }
  plVar2 = (longlong *)(*(longlong *)((longlong)this + 8) + 0x1a0);
  (**(code **)(*plVar2 + 0x20))
            (plVar2,*(undefined8 *)(*(longlong *)((longlong)this + 8) + 8),
             **(undefined4 **)((longlong)this + 0x10),param_1,*(undefined8 *)((longlong)this + 0x18)
            );
  if ((GbDumpParticleData != 0) ||
     ((*(byte *)(**(longlong **)((longlong)this + 0x20) + 0x6c) & 2) != 0)) {
    lVar14 = *(longlong *)this;
    if ((*(longlong *)(lVar14 + 0x80) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DestinationData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x15e,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = *(FNiagaraDataBuffer **)(lVar14 + 0x80);
    uVar13 = 0;
    local_84.ComparisonIndex.Value = 0;
    local_84.Number = 0;
    ::FString::PrintfImpl(&local_68,L"===  %s Spawned %d Particles===");
    FNiagaraDataBuffer::Dump(pFVar7,iVar3,param_1,&local_68,&local_84);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    lVar14 = *(longlong *)((longlong)this + 8);
    if ((*(longlong *)(lVar14 + 0x828) != 0) &&
       (uVar16 = uVar13, 0 < *(int *)(*(longlong *)(lVar14 + 0x828) + 0x38))) {
      do {
        lVar14 = *(longlong *)(lVar14 + 0x828);
        uVar15 = (uint)uVar16;
        uVar11 = 0;
        if ((int)uVar15 < *(int *)(lVar14 + 0x38)) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar14 = *(longlong *)(uVar13 + *(longlong *)(lVar14 + 0x30));
        if (lVar14 != 0) {
          if ((*(longlong *)(lVar14 + 0x80) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DestinationData",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                  ,0x15e,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)(*(longlong *)(lVar14 + 0x80) + 0x124) != 0) {
            if ((*(longlong *)(lVar14 + 0x80) == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DestinationData",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                    ,0x15e,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar7 = *(FNiagaraDataBuffer **)(lVar14 + 0x80);
            local_7c.ComparisonIndex.Value = 0;
            local_7c.Number = 0;
            ::FString::PrintfImpl(&local_58,L"Spawn Script Event %d");
            FNiagaraDataBuffer::Dump(pFVar7,0,-1,&local_58,&local_7c);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
        }
        lVar14 = *(longlong *)((longlong)this + 8);
        uVar13 = uVar13 + 8;
        uVar16 = (ulonglong)(uVar15 + 1);
      } while ((int)(uVar15 + 1) < *(int *)(*(longlong *)(lVar14 + 0x828) + 0x38));
    }
    FNiagaraParameterStore::Dump((FNiagaraParameterStore *)(lVar14 + 0x1d8));
  }
  return;
}

// AsStateful @ 149284e60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraEmitterInstanceImpl * __thiscall
FNiagaraEmitterInstanceImpl::AsStateful(FNiagaraEmitterInstanceImpl *this)

{
  return this;
}

// BindParameters @ 149284ea0

/* WARNING: Removing unreachable block (ram,0x000149285385) */
/* WARNING: Removing unreachable block (ram,0x000149285392) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstanceImpl::BindParameters(FNiagaraEmitterInstanceImpl *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  UNiagaraParameterCollection *pUVar2;
  longlong lVar3;
  FEventInstanceData *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FNiagaraParameterStore *pFVar8;
  bool bVar9;
  bool bVar10;
  TArray<TObjectPtr<UNiagaraParameterCollection>,TSizedDefaultAllocator<32>_> *pTVar11;
  UNiagaraParameterCollectionInstance *pUVar12;
  FVersionedNiagaraEmitterData *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  FNiagaraParameterStore *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196;
  undefined1 local_195;
  undefined1 local_194 [4];
  FScriptContainerElement *local_190;
  uint local_188;
  FNiagaraParameterStore *local_180;
  FVersionedNiagaraEmitterData *local_178;
  FScriptContainerElement *local_170;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar6 = false;
  bVar10 = false;
  local_res18[0] = 0;
  if (*(int *)((longlong)&this->_padding_ + 4) == 4) {
    return;
  }
  pTVar11 = UNiagaraScript::GetCachedParameterCollectionReferences
                      ((UNiagaraScript *)(this->SpawnExecContext)._padding_);
  pFVar18 = (pTVar11->AllocatorInstance).Data;
  iVar19 = pTVar11->ArrayNum;
  pFVar20 = pFVar18 + (longlong)iVar19 * 8;
LAB_149284f02:
  do {
    bVar7 = false;
    bVar9 = false;
    if (pTVar11->ArrayNum != iVar19) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar18 == pFVar20) break;
    pUVar2 = *(UNiagaraParameterCollection **)pFVar18;
    if (pUVar2 == (UNiagaraParameterCollection *)0x0) {
      if (1 < (byte)LogNiagara._0_1_) {
        if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
          bVar6 = true;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_148,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbc30,
                   (FLogCategoryBase *)&LogNiagara);
        if (bVar6) {
          bVar6 = false;
          FVar15.Data = local_148.Data.AllocatorInstance.Data;
          goto LAB_149285054;
        }
      }
    }
    else {
      pUVar12 = FNiagaraSystemInstance::GetParameterCollectionInstance
                          ((FNiagaraSystemInstance *)this->_padding_,pUVar2);
      if (pUVar12 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Bind
                  (&pUVar12->ParameterStorage,
                   (FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_,
                   (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
        pFVar18 = pFVar18 + 8;
        goto LAB_149284f02;
      }
      if (1 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar2,&local_158,(UObject *)0x0);
        if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
          bVar10 = true;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_168,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbb48,
                   (FLogCategoryBase *)&LogNiagara);
        FVar15.Data = local_158.Data.AllocatorInstance.Data;
        if ((bVar10) &&
           (bVar10 = false, local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
          FVar15.Data = local_158.Data.AllocatorInstance.Data;
        }
LAB_149285054:
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
      }
    }
    pFVar18 = pFVar18 + 8;
  } while( true );
  pTVar11 = UNiagaraScript::GetCachedParameterCollectionReferences
                      ((UNiagaraScript *)(this->UpdateExecContext)._padding_);
  pFVar18 = (pTVar11->AllocatorInstance).Data;
  iVar19 = pTVar11->ArrayNum;
  pFVar20 = pFVar18 + (longlong)iVar19 * 8;
LAB_149285081:
  do {
    bVar10 = false;
    if (pTVar11->ArrayNum != iVar19) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar18 == pFVar20) break;
    pUVar2 = *(UNiagaraParameterCollection **)pFVar18;
    if (pUVar2 == (UNiagaraParameterCollection *)0x0) {
      if (1 < (byte)LogNiagara._0_1_) {
        if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
          bVar9 = true;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_118,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbc30,
                   (FLogCategoryBase *)&LogNiagara);
        if (bVar9) {
          bVar9 = false;
          FVar15.Data = local_118.Data.AllocatorInstance.Data;
          goto LAB_1492851cd;
        }
      }
    }
    else {
      pUVar12 = FNiagaraSystemInstance::GetParameterCollectionInstance
                          ((FNiagaraSystemInstance *)this->_padding_,pUVar2);
      if (pUVar12 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Bind
                  (&pUVar12->ParameterStorage,
                   (FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_,
                   (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
        pFVar18 = pFVar18 + 8;
        goto LAB_149285081;
      }
      if (1 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar2,&local_128,(UObject *)0x0);
        if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
          bVar7 = true;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_138,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbb48,
                   (FLogCategoryBase *)&LogNiagara);
        FVar15.Data = local_128.Data.AllocatorInstance.Data;
        if ((bVar7) &&
           (bVar7 = false, local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
          FVar15.Data = local_128.Data.AllocatorInstance.Data;
        }
LAB_1492851cd:
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
      }
    }
    pFVar18 = pFVar18 + 8;
  } while( true );
  local_178 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_)
  ;
  if (local_178->SimTarget == GPUComputeSim) {
    pTVar11 = UNiagaraScript::GetCachedParameterCollectionReferences
                        ((UNiagaraScript *)(this->SpawnExecContext)._padding_);
    pFVar18 = (pTVar11->AllocatorInstance).Data;
    iVar19 = pTVar11->ArrayNum;
    pFVar20 = pFVar18 + (longlong)iVar19 * 8;
LAB_149285220:
    bVar9 = false;
    bVar6 = false;
    if (pTVar11->ArrayNum != iVar19) {
      local_198 = 0;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_198);
    }
    if (pFVar18 == pFVar20) goto LAB_1492853a7;
    pUVar2 = *(UNiagaraParameterCollection **)pFVar18;
    lVar3 = this->_padding_;
    if (pUVar2 == (UNiagaraParameterCollection *)0x0) {
      if (1 < (byte)LogNiagara._0_1_) {
        if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_e8,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbc30,
                   (FLogCategoryBase *)&LogNiagara);
      }
    }
    else {
      pUVar12 = FNiagaraSystemInstance::GetParameterCollectionInstance
                          ((FNiagaraSystemInstance *)this->_padding_,pUVar2);
      if (pUVar12 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Bind
                  (&pUVar12->ParameterStorage,(FNiagaraParameterStore *)(lVar3 + 0x80),
                   (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
        pFVar18 = pFVar18 + 8;
        goto LAB_149285220;
      }
      if (1 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar2,&local_f8,(UObject *)0x0);
        if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
          bVar10 = true;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_108,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbb48,
                   (FLogCategoryBase *)&LogNiagara);
        if ((bVar10) &&
           (bVar10 = false, local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_14928539e;
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        pFVar18 = pFVar18 + 8;
        goto LAB_149285220;
      }
    }
LAB_14928539e:
    pFVar18 = pFVar18 + 8;
    goto LAB_149285220;
  }
LAB_14928552f:
  bVar6 = false;
  bVar10 = false;
  pFVar4 = (this->EventInstanceData).Ptr;
  if (pFVar4 == (FEventInstanceData *)0x0) {
    iVar19 = 0;
    pFVar20 = (FScriptContainerElement *)0x0;
  }
  else {
    iVar19 = (pFVar4->EventExecContexts).ArrayNum;
    pFVar20 = (pFVar4->EventExecContexts).AllocatorInstance.Data;
    if ((iVar19 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_190 = pFVar20 + (longlong)iVar19 * 0x2b0;
  if (pFVar20 == local_190) {
LAB_14928572a:
    bVar6 = false;
    bVar10 = false;
    if (local_178->SimTarget == GPUComputeSim) {
      local_180 = (FNiagaraParameterStore *)(this->_padding_ + 0x80);
    }
    else {
      local_180 = (FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_;
    }
    local_188 = (local_178->SimulationStages).ArrayNum;
    uVar14 = (ulonglong)(int)local_188;
    pFVar20 = (local_178->SimulationStages).AllocatorInstance.Data;
    pFVar18 = pFVar20 + uVar14 * 8;
    pFVar13 = local_178;
    local_170 = pFVar18;
    while( true ) {
      local_190 = pFVar20;
      if ((pFVar13->SimulationStages).ArrayNum != (int)uVar14) {
        local_195 = 0;
        `TCheckedPointerIterator<UNiagaraSimulationStageBase_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_195);
      }
      if (pFVar20 == pFVar18) {
        if (!param_1) {
          pFVar16 = (FNiagaraParameterStore *)(this->_padding_ + 0x290);
          FNiagaraParameterStore::Bind
                    (pFVar16,(FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_,
                     (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
          FNiagaraParameterStore::Bind
                    (pFVar16,(FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_,
                     (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
          pFVar4 = (this->EventInstanceData).Ptr;
          if (pFVar4 == (FEventInstanceData *)0x0) {
            pFVar20 = (FScriptContainerElement *)0x0;
            iVar19 = 0;
          }
          else {
            pFVar20 = (pFVar4->EventExecContexts).AllocatorInstance.Data;
            iVar19 = (pFVar4->EventExecContexts).ArrayNum;
            if ((iVar19 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pFVar18 = pFVar20 + (longlong)iVar19 * 0x2b0;
          for (; pFVar20 != pFVar18; pFVar20 = pFVar20 + 0x2b0) {
            FNiagaraParameterStore::Bind
                      (pFVar16,(FNiagaraParameterStore *)(pFVar20 + 0x38),
                       (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
          }
          if (pFVar13->SimTarget == GPUComputeSim) {
            FNiagaraParameterStore::Bind
                      (pFVar16,(FNiagaraParameterStore *)(this->_padding_ + 0x80),
                       (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
          }
        }
        if ((FNiagaraSystemInstance *)this->_padding_ != (FNiagaraSystemInstance *)0x0) {
          FNiagaraSystemInstance::BindToParameterStore
                    ((FNiagaraSystemInstance *)this->_padding_,
                     (FNiagaraParameterStore *)&this->_padding_);
        }
        pFVar13 = FVersionedNiagaraEmitter::GetEmitterData
                            ((FVersionedNiagaraEmitter *)&this->_padding_);
        FNiagaraParameterStore::Bind
                  (&pFVar13->RendererBindings,(FNiagaraParameterStore *)&this->_padding_,
                   (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
        return;
      }
      if ((*(byte *)(*(longlong *)pFVar20 + 0x38) & 1) != 0) break;
LAB_149285938:
      uVar14 = (ulonglong)local_188;
      pFVar20 = pFVar20 + 8;
    }
    pTVar11 = UNiagaraScript::GetCachedParameterCollectionReferences
                        (*(UNiagaraScript **)(*(longlong *)pFVar20 + 0x28));
    pFVar16 = local_180;
    pFVar17 = (pTVar11->AllocatorInstance).Data;
    iVar19 = pTVar11->ArrayNum;
    pFVar1 = pFVar17 + (longlong)iVar19 * 8;
LAB_1492857c3:
    do {
      if (pTVar11->ArrayNum != iVar19) {
        local_194[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_194);
      }
      pFVar18 = local_170;
      pFVar20 = local_190;
      pFVar13 = local_178;
      if (pFVar17 == pFVar1) goto LAB_149285938;
      pUVar2 = *(UNiagaraParameterCollection **)pFVar17;
      if (pUVar2 == (UNiagaraParameterCollection *)0x0) {
        if (1 < (byte)LogNiagara._0_1_) {
          if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
            bVar6 = true;
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)this->_padding_,&local_58,(UObject *)0x0);
          }
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbc30,
                     (FLogCategoryBase *)&LogNiagara);
          if (bVar6) {
            bVar6 = false;
            FVar15.Data = local_58.Data.AllocatorInstance.Data;
            goto LAB_149285916;
          }
        }
      }
      else {
        pUVar12 = FNiagaraSystemInstance::GetParameterCollectionInstance
                            ((FNiagaraSystemInstance *)this->_padding_,pUVar2);
        if (pUVar12 != (UNiagaraParameterCollectionInstance *)0x0) {
          FNiagaraParameterStore::Bind
                    (&pUVar12->ParameterStorage,pFVar16,
                     (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
          pFVar17 = pFVar17 + 8;
          goto LAB_1492857c3;
        }
        if (1 < (byte)LogNiagara._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar2,&local_68,(UObject *)0x0);
          if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
            bVar10 = true;
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)this->_padding_,&local_78,(UObject *)0x0);
          }
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbb48,
                     (FLogCategoryBase *)&LogNiagara);
          FVar15.Data = local_68.Data.AllocatorInstance.Data;
          if ((bVar10) &&
             (bVar10 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
            FVar15.Data = local_68.Data.AllocatorInstance.Data;
          }
LAB_149285916:
          if (FVar15.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar15.Data);
          }
        }
      }
      pFVar17 = pFVar17 + 8;
    } while( true );
  }
  pFVar16 = (FNiagaraParameterStore *)(pFVar20 + 0x38);
LAB_149285590:
  pTVar11 = UNiagaraScript::GetCachedParameterCollectionReferences
                      (*(UNiagaraScript **)&pFVar16[-1].OriginalPositionData.ArrayNum);
  pFVar18 = (pTVar11->AllocatorInstance).Data;
  iVar19 = pTVar11->ArrayNum;
  pFVar20 = pFVar18 + (longlong)iVar19 * 8;
LAB_1492855a7:
  do {
    if (pTVar11->ArrayNum != iVar19) {
      local_196 = 0;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_196);
    }
    if (pFVar18 == pFVar20) goto LAB_14928570d;
    pUVar2 = *(UNiagaraParameterCollection **)pFVar18;
    if (pUVar2 == (UNiagaraParameterCollection *)0x0) {
      if (1 < (byte)LogNiagara._0_1_) {
        if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
          bVar6 = true;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_88,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbc30,
                   (FLogCategoryBase *)&LogNiagara);
        if (bVar6) {
          bVar6 = false;
          FVar15.Data = local_88.Data.AllocatorInstance.Data;
          goto LAB_1492856fa;
        }
      }
    }
    else {
      pUVar12 = FNiagaraSystemInstance::GetParameterCollectionInstance
                          ((FNiagaraSystemInstance *)this->_padding_,pUVar2);
      if (pUVar12 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Bind
                  (&pUVar12->ParameterStorage,pFVar16,
                   (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
        pFVar18 = pFVar18 + 8;
        goto LAB_1492855a7;
      }
      if (1 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar2,&local_98,(UObject *)0x0);
        if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
          bVar10 = true;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_a8,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbb48,
                   (FLogCategoryBase *)&LogNiagara);
        FVar15.Data = local_98.Data.AllocatorInstance.Data;
        if ((bVar10) &&
           (bVar10 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          FVar15.Data = local_98.Data.AllocatorInstance.Data;
        }
LAB_1492856fa:
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
      }
    }
    pFVar18 = pFVar18 + 8;
  } while( true );
LAB_1492853a7:
  pTVar11 = UNiagaraScript::GetCachedParameterCollectionReferences
                      ((UNiagaraScript *)(this->UpdateExecContext)._padding_);
  pFVar18 = (pTVar11->AllocatorInstance).Data;
  iVar19 = pTVar11->ArrayNum;
  pFVar20 = pFVar18 + (longlong)iVar19 * 8;
LAB_1492853c1:
  do {
    if (pTVar11->ArrayNum != iVar19) {
      local_197 = 0;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_197);
    }
    if (pFVar18 == pFVar20) goto LAB_14928552f;
    pUVar2 = *(UNiagaraParameterCollection **)pFVar18;
    lVar3 = this->_padding_;
    if (pUVar2 == (UNiagaraParameterCollection *)0x0) {
      if (1 < (byte)LogNiagara._0_1_) {
        if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
          bVar9 = true;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_b8,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbc30,
                   (FLogCategoryBase *)&LogNiagara);
        if (bVar9) {
          bVar9 = false;
          FVar15.Data = local_b8.Data.AllocatorInstance.Data;
          goto LAB_149285515;
        }
      }
    }
    else {
      pUVar12 = FNiagaraSystemInstance::GetParameterCollectionInstance
                          ((FNiagaraSystemInstance *)this->_padding_,pUVar2);
      if (pUVar12 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Bind
                  (&pUVar12->ParameterStorage,(FNiagaraParameterStore *)(lVar3 + 0x80),
                   (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
        pFVar18 = pFVar18 + 8;
        goto LAB_1492853c1;
      }
      if (1 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar2,&local_c8,(UObject *)0x0);
        if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
          bVar6 = true;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_d8,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Emitter_attempt_151dcbb48,
                   (FLogCategoryBase *)&LogNiagara);
        FVar15.Data = local_c8.Data.AllocatorInstance.Data;
        if ((bVar6) &&
           (bVar6 = false, local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          FVar15.Data = local_c8.Data.AllocatorInstance.Data;
        }
LAB_149285515:
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
      }
    }
    pFVar18 = pFVar18 + 8;
  } while( true );
LAB_14928570d:
  pFVar8 = pFVar16 + 4;
  pFVar16 = (FNiagaraParameterStore *)&pFVar16[5].Owner;
  if ((FScriptContainerElement *)&(pFVar8->OriginalPositionData).ArrayNum == local_190)
  goto LAB_14928572a;
  goto LAB_149285590;
}

// BuildConstantBufferTable @ 149285aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstanceImpl::BuildConstantBufferTable
          (FNiagaraEmitterInstanceImpl *this,FNiagaraScriptExecutionContext *param_1,
          FScriptExecutionConstantBufferTable *param_2)

{
  uint uVar1;
  byte bVar2;
  uchar *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  TArrayView<unsigned_char_const_,int> local_38;
  
  FNiagaraScriptExecutionContextBase::GetScriptLiterals
            ((FNiagaraScriptExecutionContextBase *)param_1,&local_38);
  puVar3 = (uchar *)param_1->_padding_;
  uVar7 = FNiagaraScriptInstanceParameterStore::GetExternalParameterSize
                    ((FNiagaraScriptInstanceParameterStore *)&param_1->_padding_);
  iVar9 = 6;
  if ((param_1->_padding_ & 0x100000000) != 0) {
    iVar9 = 0xb;
  }
  (param_2->Buffers).ArrayNum = 0;
  if ((param_2->Buffers).ArrayMax < iVar9) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char_const_*>_>
              (8,8,iVar9,(ForElementType<unsigned_char_const_*> *)param_2,0,
               &(param_2->Buffers).ArrayMax);
  }
  (param_2->BufferSizes).ArrayNum = 0;
  if ((param_2->BufferSizes).ArrayMax < iVar9) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar9,&(param_2->BufferSizes).AllocatorInstance,0,
               &(param_2->BufferSizes).ArrayMax);
  }
  FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraGlobalParameters>
            (param_2,(FNiagaraGlobalParameters *)
                     (((ulonglong)(*(byte *)(this->_padding_ + 0x840) & 1) + 0x19) * 0x20 +
                     this->_padding_));
  FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraSystemParameters>
            (param_2,(FNiagaraSystemParameters *)
                     (this->_padding_ + 0x360 +
                     (ulonglong)(*(byte *)(this->_padding_ + 0x840) & 1) * 0x40));
  FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraOwnerParameters>
            (param_2,(FNiagaraOwnerParameters *)
                     (this->_padding_ + 0x3e0 +
                     (ulonglong)(*(byte *)(this->_padding_ + 0x840) & 1) * 0x200));
  lVar4 = this->_padding_;
  uVar1 = (*(byte *)(lVar4 + 0x840) & 1) + (int)this->_padding_ * 2;
  uVar8 = 0;
  if ((int)uVar1 < *(int *)(lVar4 + 0x7e8)) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraEmitterParameters>
            (param_2,(FNiagaraEmitterParameters *)
                     ((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar4 + 0x7e0)));
  FScriptExecutionConstantBufferTable::AddRawBuffer(param_2,puVar3,uVar7);
  if ((param_1->_padding_ & 0x100000000) != 0) {
    bVar2 = *(byte *)(this->_padding_ + 0x840);
    FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraGlobalParameters>
              (param_2,(FNiagaraGlobalParameters *)
                       (((ulonglong)(bVar2 >> 1 & 1 ^ bVar2 & 1) + 0x19) * 0x20 + this->_padding_));
    bVar2 = *(byte *)(this->_padding_ + 0x840);
    FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraSystemParameters>
              (param_2,(FNiagaraSystemParameters *)
                       (this->_padding_ + 0x360 + (ulonglong)(bVar2 >> 1 & 1 ^ bVar2 & 1) * 0x40));
    bVar2 = *(byte *)(this->_padding_ + 0x840);
    FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraOwnerParameters>
              (param_2,(FNiagaraOwnerParameters *)
                       (this->_padding_ + 0x3e0 + (ulonglong)(bVar2 >> 1 & 1 ^ bVar2 & 1) * 0x200));
    lVar4 = this->_padding_;
    uVar1 = (*(byte *)(lVar4 + 0x840) >> 1 & 1 ^ *(byte *)(lVar4 + 0x840) & 1) +
            (int)this->_padding_ * 2;
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x7e8)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraEmitterParameters>
              (param_2,(FNiagaraEmitterParameters *)
                       ((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar4 + 0x7e0)));
    FScriptExecutionConstantBufferTable::AddRawBuffer(param_2,puVar3 + uVar7,uVar7);
  }
  FScriptExecutionConstantBufferTable::AddRawBuffer(param_2,local_38.DataPtr,local_38.ArrayNum);
  return;
}

// CalculateEventSpawnCount @ 149287220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
FNiagaraEmitterInstanceImpl::CalculateEventSpawnCount
          (FNiagaraEmitterInstanceImpl *this,FNiagaraEventScriptProperties *param_1,
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2,
          FNiagaraDataSet *param_3)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ForElementType<int> FVar12;
  int iVar13;
  ulonglong uVar14;
  uint local_58 [8];
  
  uVar8 = 0;
  if (param_3 == (FNiagaraDataSet *)0x0) {
    return 0;
  }
  if ((param_3->CurrentData == (FNiagaraDataBuffer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x158,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return uVar8;
  }
  uVar11 = param_1->MaxEventsPerFrame;
  uVar9 = param_3->CurrentData->NumInstances;
  if (uVar11 != 0) {
    if ((param_3->CurrentData == (FNiagaraDataBuffer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x158,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
    uVar2 = param_3->CurrentData->NumInstances;
    uVar9 = uVar11;
    if ((int)uVar2 < (int)uVar11) {
      uVar9 = uVar2;
    }
  }
  fVar5 = __real_38000100;
  puVar1 = &param_1->SpawnNumber;
  if ((param_1->bRandomSpawnNumber == false) || (*puVar1 <= param_1->MinSpawnNumber)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (0 < (int)uVar9) {
    uVar14 = (ulonglong)uVar9;
    do {
      if (bVar6) {
        uVar11 = param_1->MinSpawnNumber;
        iVar13 = *puVar1 - uVar11;
        if (0 < iVar13 + 1) {
          uVar9 = rand();
          iVar10 = (int)((float)(uVar9 & 0x7fff) * (float)(iVar13 + 1) * fVar5);
          if (iVar10 < iVar13) {
            iVar13 = iVar10;
          }
          uVar11 = iVar13 + uVar11;
        }
      }
      else {
        uVar11 = *puVar1;
      }
      if (((*(int *)((longlong)&this->_padding_ + 4) == 0) && (uVar11 != 0)) &&
         (uVar11 + uVar8 < 0x7fffffff)) {
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<int>)param_2;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar12 = FVar3;
        }
        local_58[0] = uVar11;
        if ((ulonglong)FVar12 <= local_58) {
          FVar12 = (ForElementType<int>)param_2;
          if (FVar3 != (ForElementType<int>)0x0) {
            FVar12 = FVar3;
          }
          if ((local_58 < (uint *)((longlong)FVar12 + (longlong)param_2->ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return uVar8;
          }
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar13 + 1;
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<int>)param_2;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar12 = FVar3;
        }
        *(uint *)((longlong)FVar12 + (longlong)iVar13 * 4) = local_58[0];
        uVar8 = uVar11 + uVar8;
      }
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return uVar8;
}

// CheckForErrors @ 149289600

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstanceImpl::CheckForErrors(FNiagaraEmitterInstanceImpl *this)

{
  int iVar1;
  UNiagaraScript *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterErrorCheck> FVar11;
  FVersionedNiagaraEmitterData *pFVar12;
  FName FVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  
  uVar15 = 0;
  FVar11 = StatPtr_STAT_NiagaraEmitterErrorCheck;
  if (StatPtr_STAT_NiagaraEmitterErrorCheck ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterErrorCheck>)0x0) {
    pFVar10 = ::FName::FName(&local_res20,"STAT_NiagaraEmitterErrorCheck");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterErrorCheck>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEmitterErrorCheck,*pFVar10
                        ,L"Emitter Error Check [CNC]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  if ((FVar13.ComparisonIndex.Value.Value == 0) && (FVar13.Number == 0)) {
LAB_14928975a:
    bVar5 = false;
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_res10.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                   ,0x212);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14928975a;
    local_res18 = FVar13;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
  }
  pFVar12 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_);
  pUVar2 = (pFVar12->UpdateScriptProps).Script.field0_0x0.DebugPtr;
  if ((pUVar2 == (UNiagaraScript *)0x0) ||
     ((pFVar12->SpawnScriptProps).Script.field0_0x0.DebugPtr == (UNiagaraScript *)0x0)) {
    if (1 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this->_padding_,&local_58,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
LAB_149289abe:
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar7 = UNiagaraScript::IsReadyToRun(pUVar2,CPUSim);
    if ((bVar7) &&
       (bVar7 = UNiagaraScript::IsReadyToRun
                          ((pFVar12->SpawnScriptProps).Script.field0_0x0.DebugPtr,CPUSim), bVar7)) {
      pUVar2 = (pFVar12->SpawnScriptProps).Script.field0_0x0.DebugPtr;
      if ((pUVar2->CachedScriptVM).DataUsage.bReadsAttributeData == false) {
        if (((((pFVar12->UpdateScriptProps).Script.field0_0x0.DebugPtr)->CachedScriptVM).Attributes.
             ArrayNum == 0) || ((pUVar2->CachedScriptVM).Attributes.ArrayNum == 0)) {
          if (1 < (byte)LogNiagara._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
        }
        else {
          if (pFVar12->SimTarget == CPUSim) {
            bVar7 = false;
            bVar8 = UNiagaraScript::DidScriptCompilationSucceed(pUVar2,false);
            if ((!bVar8) && (bVar7 = true, 1 < (byte)LogNiagara._0_1_)) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            }
            bVar8 = UNiagaraScript::DidScriptCompilationSucceed
                              ((pFVar12->UpdateScriptProps).Script.field0_0x0.DebugPtr,false);
            if ((!bVar8) && (bVar7 = true, 1 < (byte)LogNiagara._0_1_)) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            }
            iVar1 = (pFVar12->EventHandlerScriptProps).ArrayNum;
            if ((iVar1 != 0) && (uVar16 = uVar15, 0 < iVar1)) {
              do {
                uVar14 = (uint)uVar15;
                uVar9 = 0;
                if ((int)uVar14 < (pFVar12->EventHandlerScriptProps).ArrayNum) {
                  uVar9 = ~uVar14 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                bVar8 = UNiagaraScript::DidScriptCompilationSucceed
                                  (*(UNiagaraScript **)
                                    ((pFVar12->EventHandlerScriptProps).AllocatorInstance.Data +
                                    uVar16),false);
                if ((!bVar8) && (bVar7 = true, 1 < (byte)LogNiagara._0_1_)) {
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)&PTR_u_This_emitter_ca_151dcb900,
                             (FLogCategoryBase *)&LogNiagara);
                }
                uVar15 = (ulonglong)(uVar14 + 1);
                uVar16 = uVar16 + 0x58;
              } while ((int)(uVar14 + 1) < (pFVar12->EventHandlerScriptProps).ArrayNum);
            }
            if (bVar7) goto LAB_149289ac8;
          }
          if (pFVar12->SimTarget != GPUComputeSim) goto LAB_149289adb;
          bVar7 = UNiagaraScript::IsScriptCompilationPending
                            ((pFVar12->GPUComputeScript).field0_0x0.DebugPtr,true);
          if (bVar7) {
            if (1 < (byte)LogNiagara._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            }
          }
          else {
            bVar7 = UNiagaraScript::DidScriptCompilationSucceed
                              ((pFVar12->GPUComputeScript).field0_0x0.DebugPtr,true);
            if (bVar7) goto LAB_149289adb;
            if (1 < (byte)LogNiagara._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            }
          }
        }
      }
      else if (1 < (byte)LogNiagara._0_1_) {
        local_res18 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res18,&local_78);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        goto LAB_149289abe;
      }
    }
    else if (1 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this->_padding_,&local_68,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      goto LAB_149289abe;
    }
  }
LAB_149289ac8:
  if (*(int *)((longlong)&this->_padding_ + 4) != 4) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 4;
  }
LAB_149289adb:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// DirtyDataInterfaces @ 14928cb20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstanceImpl::DirtyDataInterfaces(FNiagaraEmitterInstanceImpl *this)

{
  FEventInstanceData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FVersionedNiagaraEmitterData *pFVar4;
  int iVar5;
  FNiagaraScriptExecutionContextBase *this_00;
  FNiagaraScriptExecutionContextBase *pFVar6;
  
  if (*(int *)((longlong)&this->_padding_ + 4) != 4) {
    FNiagaraScriptExecutionContextBase::DirtyDataInterfaces
              ((FNiagaraScriptExecutionContextBase *)&this->SpawnExecContext);
    FNiagaraScriptExecutionContextBase::DirtyDataInterfaces
              ((FNiagaraScriptExecutionContextBase *)&this->UpdateExecContext);
    pFVar4 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_);
    if ((pFVar4->SimTarget == GPUComputeSim) &&
       ((FNiagaraComputeExecutionContext *)this->_padding_ != (FNiagaraComputeExecutionContext *)0x0
       )) {
      FNiagaraComputeExecutionContext::DirtyDataInterfaces
                ((FNiagaraComputeExecutionContext *)this->_padding_);
    }
    pFVar1 = (this->EventInstanceData).Ptr;
    if (pFVar1 == (FEventInstanceData *)0x0) {
      this_00 = (FNiagaraScriptExecutionContextBase *)0x0;
      iVar5 = 0;
    }
    else {
      iVar5 = (pFVar1->EventExecContexts).ArrayNum;
      this_00 = (FNiagaraScriptExecutionContextBase *)
                (pFVar1->EventExecContexts).AllocatorInstance.Data;
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar6 = (FNiagaraScriptExecutionContextBase *)((longlong)iVar5 * 0x2b0 + (longlong)this_00);
    for (; this_00 != pFVar6;
        this_00 = (FNiagaraScriptExecutionContextBase *)&this_00[1].VectorVMState) {
      FNiagaraScriptExecutionContextBase::DirtyDataInterfaces(this_00);
    }
  }
  return;
}

// Dump @ 14929a880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstanceImpl::Dump(FNiagaraEmitterInstanceImpl *this)

{
  FNiagaraDataSet *this_00;
  FVersionedNiagaraEmitterData *pFVar1;
  FName local_res8;
  FString local_18;
  
  if (*(int *)((longlong)&this->_padding_ + 4) != 4) {
    if ((4 < (byte)LogNiagara._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
       4 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    FNiagaraParameterStore::DumpParameters
              ((FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_,true);
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    FNiagaraParameterStore::DumpParameters
              ((FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_,true);
    pFVar1 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_);
    if ((pFVar1->SimTarget == GPUComputeSim) && (this->_padding_ != 0)) {
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      FNiagaraParameterStore::DumpParameters
                ((FNiagaraParameterStore *)(this->_padding_ + 0x80),false);
      return;
    }
    this_00 = (FNiagaraDataSet *)this->_padding_;
    ::FName::FName(&local_res8,L"UniqueID");
    ::FString::FString(&local_18,L"Particle Data");
    FNiagaraDataSet::Dump(this_00,0,-1,&local_18,&local_res8);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetEventExecutionContexts @ 1492a3f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArrayView<FNiagaraScriptExecutionContext,int> * __thiscall
FNiagaraEmitterInstanceImpl::GetEventExecutionContexts
          (FNiagaraEmitterInstanceImpl *this,
          TArrayView<FNiagaraScriptExecutionContext,int> *__return_storage_ptr__)

{
  int iVar1;
  FEventInstanceData *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FNiagaraScriptExecutionContext,int> *pTVar5;
  
  pFVar2 = (this->EventInstanceData).Ptr;
  if (pFVar2 == (FEventInstanceData *)0x0) {
    __return_storage_ptr__->DataPtr = (FNiagaraScriptExecutionContext *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar2->EventExecContexts).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FNiagaraScriptExecutionContext *)(pFVar2->EventExecContexts).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FNiagaraScriptExecutionContext,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetRenderers @ 1492a6930

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArrayView<UNiagaraRendererProperties_*_const,int> * __thiscall
FNiagaraEmitterInstanceImpl::GetRenderers
          (FNiagaraEmitterInstanceImpl *this,
          TArrayView<UNiagaraRendererProperties_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FVersionedNiagaraEmitterData *pFVar5;
  TArrayView<UNiagaraRendererProperties_*_const,int> *pTVar6;
  undefined4 uStack_1c;
  uint uStack_c;
  
  pFVar5 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_);
  if (pFVar5 == (FVersionedNiagaraEmitterData *)0x0) {
    __return_storage_ptr__->DataPtr = (UNiagaraRendererProperties **)0x0;
    *(ulonglong *)&__return_storage_ptr__->ArrayNum = (ulonglong)uStack_c << 0x20;
    return __return_storage_ptr__;
  }
  pFVar2 = (pFVar5->RendererProperties).AllocatorInstance.Data;
  iVar1 = (pFVar5->RendererProperties).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<UNiagaraRendererProperties_*_const,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->DataPtr = (UNiagaraRendererProperties **)pFVar2;
  *(ulonglong *)&__return_storage_ptr__->ArrayNum = CONCAT44(uStack_1c,iVar1);
  return __return_storage_ptr__;
}

// HandleCompletion @ 1492a89c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNiagaraEmitterInstanceImpl::HandleCompletion(FNiagaraEmitterInstanceImpl *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FEventInstanceData *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar2 != 4) {
    if (param_1) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 3;
    }
    else if (iVar2 != 3) {
      return false;
    }
    if ((FNiagaraComputeExecutionContext *)this->_padding_ != (FNiagaraComputeExecutionContext *)0x0
       ) {
      FNiagaraComputeExecutionContext::Reset
                ((FNiagaraComputeExecutionContext *)this->_padding_,
                 (this->ComputeDispatchInterfacePtr).Object);
    }
    FNiagaraDataSet::ResetBuffers((FNiagaraDataSet *)this->_padding_);
    pFVar3 = (this->EventInstanceData).Ptr;
    if (pFVar3 != (FEventInstanceData *)0x0) {
      pFVar4 = (pFVar3->UpdateScriptEventDataSets).AllocatorInstance.Data;
      iVar2 = (pFVar3->UpdateScriptEventDataSets).ArrayNum;
      pFVar1 = pFVar4 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar3->UpdateScriptEventDataSets).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar4 == pFVar1) break;
        FNiagaraDataSet::ResetBuffers(*(FNiagaraDataSet **)pFVar4);
        pFVar4 = pFVar4 + 8;
      }
      pFVar3 = (this->EventInstanceData).Ptr;
      pFVar4 = (pFVar3->SpawnScriptEventDataSets).AllocatorInstance.Data;
      iVar2 = (pFVar3->SpawnScriptEventDataSets).ArrayNum;
      pFVar1 = pFVar4 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar3->SpawnScriptEventDataSets).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar4 == pFVar1) break;
        FNiagaraDataSet::ResetBuffers(*(FNiagaraDataSet **)pFVar4);
        pFVar4 = pFVar4 + 8;
      }
    }
  }
  return true;
}

// Init @ 1492aa570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstanceImpl::Init(FNiagaraEmitterInstanceImpl *this,int param_1)

{
  longlong *this_00;
  TUniquePtr<FNiagaraEmitterInstanceImpl::FEventInstanceData,TDefaultDelete<FNiagaraEmitterInstanceImpl::FEventInstanceData>_>
  *this_01;
  ENiagaraSimTarget EVar1;
  UNiagaraEmitter *pUVar2;
  FName FVar3;
  FNiagaraDataSet *this_02;
  FScriptContainerElement *pFVar4;
  TAtomic<FMinimalName> TVar5;
  FNiagaraEventHandlingInfo *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterInit> FVar17;
  FNiagaraEmitterHandle *pFVar18;
  FVersionedNiagaraEmitterData *pFVar19;
  FVersionedNiagaraEmitterData *pFVar20;
  FNiagaraEmitterCompiledData *pFVar21;
  FNiagaraTypeDefinition *this_03;
  int *piVar22;
  longlong lVar23;
  FNiagaraComputeExecutionContext *pFVar24;
  FVersionedNiagaraEmitterWeakPtr *pFVar25;
  TObjectPtr<UNiagaraScript>_u_0 TVar26;
  byte bVar27;
  ulonglong uVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  TStatIdData *pTVar31;
  FName FVar32;
  wchar_t *pwVar33;
  ForAnyElementType FVar34;
  FScriptContainerElement FVar35;
  uint uVar36;
  FEventInstanceData *pFVar37;
  undefined8 uVar38;
  TObjectPtr<UNiagaraScript>_u_0 *pTVar39;
  ForElementType<int> *pFVar40;
  uint uVar41;
  TArray<FNiagaraParameterDirectBinding<int>,TSizedDefaultAllocator<32>_> *this_04;
  TObjectPtr<UNiagaraScript>_u_0 *pTVar42;
  FScriptContainerElement *pFVar43;
  longlong lVar44;
  longlong lVar45;
  FScriptContainerElement *pFVar46;
  TSharedPtr<FNiagaraEmitterCompiledData_const_,1> *pTVar47;
  TArray<FNiagaraEventHandlingInfo,TSizedDefaultAllocator<32>_> *this_05;
  FEventInstanceData *pFVar48;
  ulonglong uVar49;
  undefined1 auStackY_208 [32];
  undefined1 local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined1 local_1a4 [4];
  ulonglong local_1a0;
  uint local_198;
  FName local_190;
  uint local_188;
  ulonglong local_180;
  FNiagaraEmitterHandle *local_178;
  undefined8 local_170;
  uint uStack_168;
  uint uStack_164;
  FNiagaraDataSet *local_160;
  FNiagaraDataSet *local_158;
  TObjectPtr<UNiagaraScript>_u_0 local_150;
  TObjectPtr<UNiagaraScript>_u_0 local_148;
  TObjectPtr<UNiagaraScript>_u_0 local_140;
  TObjectPtr<UNiagaraScript>_u_0 local_138;
  FNiagaraEmitterInstanceImpl *local_130;
  FColor_u_0 local_128 [2];
  FEventInstanceData *local_120;
  FString local_118;
  FName local_108;
  TSharedPtr<FNiagaraEmitterCompiledData_const_,1> local_100;
  FName local_f0;
  UObject *local_e0;
  undefined8 local_d8;
  TSharedPtr<FNiagaraSimStageExecutionData,1> local_d0;
  FName local_c0;
  FName local_b8 [2];
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  FVersionedNiagaraEmitterWeakPtr local_98;
  TObjectPtr<UNiagaraScript>_u_0 local_80 [8];
  TObjectPtr<UNiagaraScript>_u_0 local_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_198 = 0;
  FVar17 = StatPtr_STAT_NiagaraEmitterInit;
  local_130 = this;
  if (StatPtr_STAT_NiagaraEmitterInit == (FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterInit>)0x0)
  {
    pFVar16 = ::FName::FName(&local_c0,"STAT_NiagaraEmitterInit");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterInit>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEmitterInit,*pFVar16,
                        L"Init Emitters [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar17;
  bVar9 = false;
  bVar10 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_1492aa6e9:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    local_190 = local_f0;
    FVar32 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_108.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                   ,0xda);
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1492aa6e9;
    local_190 = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar11 = true;
  }
  if ((this->_padding_ == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentSystemInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                          ,0x10,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->_padding_ == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParticleDataSet",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                          ,0x11,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(int *)&this->_padding_ = param_1;
  pFVar18 = FNiagaraEmitterInstance::GetEmitterHandle((FNiagaraEmitterInstance *)this);
  pUVar2 = (pFVar18->VersionedInstance).Emitter.field0_0x0.DebugPtr;
  local_178 = pFVar18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UNiagaraEmitter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this_00 = &this->_padding_;
  local_a8 = (pFVar18->VersionedInstance).Version.A;
  uStack_a4 = (pFVar18->VersionedInstance).Version.B;
  uStack_168 = (pFVar18->VersionedInstance).Version.C;
  uStack_164 = (pFVar18->VersionedInstance).Version.D;
  uStack_a0 = uStack_168;
  uStack_9c = uStack_164;
  local_170._0_4_ = local_a8;
  local_170._4_4_ = uStack_a4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UNiagaraEmitter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *this_00 = (longlong)pUVar2;
  *(uint *)&this->_padding_ = (uint)local_170;
  *(uint *)((longlong)&this->_padding_ + 4) = local_170._4_4_;
  *(uint *)&this->_padding_ = uStack_168;
  *(uint *)((longlong)&this->_padding_ + 4) = uStack_164;
  FVar3 = pFVar18->IdName;
  this->bResetPending = 0;
  this->CachedIDName = FVar3;
  this->MaxAllocationCount = 0;
  this->ReallocationCount = 0;
  this->MinOverallocation = -1;
  pFVar19 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)this_00);
  local_170 = pFVar19;
  if (pFVar19 != (FVersionedNiagaraEmitterData *)0x0) {
    bVar27 = (byte)this->_padding_;
    bVar27 = (bVar27 ^ pFVar19->bLocalSpace) & 1 ^ bVar27;
    *(byte *)&this->_padding_ = bVar27;
    bVar27 = (pFVar19->bDeterminism * '\x02' ^ bVar27) & 2 ^ bVar27;
    *(byte *)&this->_padding_ = bVar27;
    bVar27 = ((byte)*(undefined4 *)&pFVar19->field_0x2b8 & 0xfc ^ bVar27) & 4 ^ bVar27;
    *(byte *)&this->_padding_ = bVar27;
    *(byte *)&this->_padding_ =
         ((char)(*(uint *)&pFVar19->field_0x2b8 >> 1) << 3 ^ bVar27) & 8 ^ bVar27;
    *(ENiagaraSimTarget *)((longlong)&this->_padding_ + 1) = pFVar19->SimTarget;
    this->RandomSeed = *(int *)(this->_padding_ + 0x100) + pFVar19->RandomSeed;
    iVar13 = FVersionedNiagaraEmitterData::GetMaxParticleCountEstimate(pFVar19);
    this->MaxAllocationCount = iVar13;
    pFVar20 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)this_00);
    pFVar18 = FNiagaraEmitterInstance::GetEmitterHandle((FNiagaraEmitterInstance *)this);
    if (((pFVar18->bIsEnabled != false) && (pFVar20 != (FVersionedNiagaraEmitterData *)0x0)) &&
       (pFVar20->bIsAllowedToExecute != 0)) {
      iVar13 = (int)this->_padding_;
      lVar44 = *(longlong *)(this->_padding_ + 0x50);
      if ((-1 < iVar13) && (iVar13 < *(int *)(lVar44 + 0x100))) {
        if ((iVar13 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar44 = *(longlong *)(lVar44 + 0xf8);
        local_100.Object = *(FNiagaraEmitterCompiledData **)(lVar44 + (longlong)iVar13 * 0x10);
        local_100.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar44 + 8 + (longlong)iVar13 * 0x10);
        if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar47 = &this->EmitterCompiledData;
        if (pTVar47 != &local_100) {
          pTVar47->Object = local_100.Object;
          local_100.Object = (FNiagaraEmitterCompiledData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->EmitterCompiledData).SharedReferenceCount,
                     &local_100.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_100.SharedReferenceCount.ReferenceController);
        CheckForErrors(this);
        if (*(int *)((longlong)&this->_padding_ + 4) != 4) {
          pFVar21 = TSharedPtr<FNiagaraEmitterCompiledData_const_,1>::operator->(pTVar47);
          TArray<FNiagaraSpawnInfo,TSizedDefaultAllocator<32>_>::SetNum
                    (&this->SpawnInfos,(pFVar21->SpawnAttributes).ArrayNum,Default);
          this_02 = (FNiagaraDataSet *)this->_padding_;
          pFVar21 = TSharedPtr<FNiagaraEmitterCompiledData_const_,1>::operator->(pTVar47);
          FNiagaraDataSet::Init(this_02,&pFVar21->DataSetCompiledData,0);
          ResetSimulation(this,false);
          uVar14 = (pFVar19->UpdateScriptProps).EventGenerators.ArrayNum;
          iVar13 = (pFVar19->SpawnScriptProps).EventGenerators.ArrayNum;
          local_188 = (pFVar19->EventHandlerScriptProps).ArrayNum;
          local_1a0 = CONCAT44(local_1a0._4_4_,iVar13);
          if (((uVar14 != 0) || (iVar13 != 0)) || (local_188 != 0)) {
            local_120 = ::operator_new(0x78);
            if (local_120 == (FEventInstanceData *)0x0) {
              local_120 = (FEventInstanceData *)0x0;
            }
            else {
              *(undefined8 *)&local_120->EventSpawnTotal = 0;
              (local_120->EventExecContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0
              ;
              (local_120->EventExecContexts).ArrayNum = 0;
              (local_120->EventExecContexts).ArrayMax = 0;
              (local_120->EventExecCountBindings).AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (local_120->EventExecCountBindings).ArrayNum = 0;
              (local_120->EventExecCountBindings).ArrayMax = 0;
              (local_120->UpdateScriptEventDataSets).AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (local_120->UpdateScriptEventDataSets).ArrayNum = 0;
              (local_120->UpdateScriptEventDataSets).ArrayMax = 0;
              (local_120->SpawnScriptEventDataSets).AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (local_120->SpawnScriptEventDataSets).ArrayNum = 0;
              (local_120->SpawnScriptEventDataSets).ArrayMax = 0;
              (local_120->UpdateEventGeneratorIsSharedByIndex).AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (local_120->UpdateEventGeneratorIsSharedByIndex).ArrayNum = 0;
              (local_120->UpdateEventGeneratorIsSharedByIndex).ArrayMax = 0;
              (local_120->SpawnEventGeneratorIsSharedByIndex).AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (local_120->SpawnEventGeneratorIsSharedByIndex).ArrayNum = 0;
              (local_120->SpawnEventGeneratorIsSharedByIndex).ArrayMax = 0;
              (local_120->EventHandlingInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0
              ;
              (local_120->EventHandlingInfo).ArrayNum = 0;
              (local_120->EventHandlingInfo).ArrayMax = 0;
            }
            pFVar48 = (FEventInstanceData *)0x0;
            this_01 = &this->EventInstanceData;
            pFVar37 = local_120;
            if (this_01 !=
                (TUniquePtr<FNiagaraEmitterInstanceImpl::FEventInstanceData,TDefaultDelete<FNiagaraEmitterInstanceImpl::FEventInstanceData>_>
                 *)&local_120) {
              pFVar37 = this_01->Ptr;
              this_01->Ptr = local_120;
              local_120 = (FEventInstanceData *)0x0;
              TDefaultDelete<FNiagaraEmitterInstanceImpl::FEventInstanceData>::operator()
                        ((TDefaultDelete<FNiagaraEmitterInstanceImpl::FEventInstanceData> *)this_01,
                         pFVar37);
              pFVar37 = pFVar48;
            }
            TDefaultDelete<FNiagaraEmitterInstanceImpl::FEventInstanceData>::operator()
                      ((TDefaultDelete<FNiagaraEmitterInstanceImpl::FEventInstanceData> *)&local_120
                       ,pFVar37);
            pFVar37 = this_01->Ptr;
            if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
            }
            piVar22 = &(pFVar37->UpdateScriptEventDataSets).ArrayMax;
            (pFVar37->UpdateScriptEventDataSets).ArrayNum = 0;
            if (*piVar22 != uVar14) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar14,&(pFVar37->UpdateScriptEventDataSets).AllocatorInstance,0,
                         piVar22);
            }
            TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
                      (&this_01->Ptr->UpdateEventGeneratorIsSharedByIndex,uVar14,Default);
            iVar13 = (pFVar19->UpdateScriptProps).EventGenerators.ArrayNum;
            uVar28 = (ulonglong)iVar13;
            pFVar46 = (pFVar19->UpdateScriptProps).EventGenerators.AllocatorInstance.Data;
            local_180 = CONCAT44(local_180._4_4_,iVar13);
            pFVar43 = pFVar46 + uVar28 * 0x58;
            lVar44 = 0;
            while( true ) {
              pFVar19 = local_170;
              if ((local_170->UpdateScriptProps).EventGenerators.ArrayNum != (int)uVar28) {
                local_1a7 = 0;
                `TCheckedPointerIterator<FNiagaraEventGeneratorProperties,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_1a7);
              }
              if (pFVar46 == pFVar43) break;
              local_160 = FNiagaraSystemInstance::CreateEventDataSet
                                    ((FNiagaraSystemInstance *)this->_padding_,local_178->IdName,
                                     *(FName *)(pFVar46 + 4));
              FNiagaraDataSet::Init(local_160,(FNiagaraDataSetCompiledData *)(pFVar46 + 0x10),0);
              pFVar37 = (this->EventInstanceData).Ptr;
              pFVar4 = (pFVar37->UpdateScriptEventDataSets).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_160) &&
                  ((FScriptContainerElement *)&local_160 <
                   pFVar4 + (longlong)(pFVar37->UpdateScriptEventDataSets).ArrayMax * 8)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = (pFVar37->UpdateScriptEventDataSets).ArrayNum;
              piVar22 = &(pFVar37->UpdateScriptEventDataSets).ArrayMax;
              if (iVar13 == *piVar22) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&(pFVar37->UpdateScriptEventDataSets).AllocatorInstance,
                                    piVar22);
              }
              (pFVar37->UpdateScriptEventDataSets).ArrayNum = iVar13 + 1;
              *(FNiagaraDataSet **)
               ((pFVar37->UpdateScriptEventDataSets).AllocatorInstance.Data + (longlong)iVar13 * 8)
                   = local_160;
              pFVar29 = (pFVar19->SharedEventGeneratorIds).AllocatorInstance.Data;
              pFVar4 = pFVar29 + (longlong)(pFVar19->SharedEventGeneratorIds).ArrayNum * 8;
              for (; pFVar29 != pFVar4; pFVar29 = pFVar29 + 8) {
                if (*(longlong *)pFVar29 == *(longlong *)(pFVar46 + 4)) {
                  FVar35 = (FScriptContainerElement)0x1;
                  goto LAB_1492aac06;
                }
              }
              FVar35 = (FScriptContainerElement)0x0;
LAB_1492aac06:
              pFVar37 = (this->EventInstanceData).Ptr;
              uVar41 = (uint)pFVar48;
              uVar14 = 0;
              if ((int)uVar41 < (pFVar37->UpdateEventGeneratorIsSharedByIndex).ArrayNum) {
                uVar14 = ~uVar41 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar48 = (FEventInstanceData *)(ulonglong)(uVar41 + 1);
              uVar28 = local_180 & 0xffffffff;
              (pFVar37->UpdateEventGeneratorIsSharedByIndex).AllocatorInstance.Data[lVar44] = FVar35
              ;
              lVar44 = lVar44 + 1;
              pFVar46 = pFVar46 + 0x58;
            }
            pFVar37 = (this->EventInstanceData).Ptr;
            iVar13 = (int)local_1a0;
            if ((int)local_1a0 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(local_1a0 & 0xffffffff);
            }
            uVar28 = 0;
            piVar22 = &(pFVar37->SpawnScriptEventDataSets).ArrayMax;
            (pFVar37->SpawnScriptEventDataSets).ArrayNum = 0;
            if (*piVar22 != (int)local_1a0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(int)local_1a0,&(pFVar37->SpawnScriptEventDataSets).AllocatorInstance,0
                         ,piVar22);
            }
            TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
                      (&((this->EventInstanceData).Ptr)->SpawnEventGeneratorIsSharedByIndex,iVar13,
                       Default);
            iVar13 = (pFVar19->SpawnScriptProps).EventGenerators.ArrayNum;
            uVar30 = (ulonglong)iVar13;
            pFVar46 = (pFVar19->SpawnScriptProps).EventGenerators.AllocatorInstance.Data;
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar13);
            pFVar43 = pFVar46 + uVar30 * 0x58;
            uVar49 = uVar28;
            while( true ) {
              if ((pFVar19->SpawnScriptProps).EventGenerators.ArrayNum != (int)uVar30) {
                local_1a6 = 0;
                `TCheckedPointerIterator<FNiagaraEventGeneratorProperties,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_1a6);
              }
              uVar14 = local_188;
              FVar32 = local_190;
              if (pFVar46 == pFVar43) break;
              local_158 = FNiagaraSystemInstance::CreateEventDataSet
                                    ((FNiagaraSystemInstance *)this->_padding_,local_178->IdName,
                                     *(FName *)(pFVar46 + 4));
              FNiagaraDataSet::Init(local_158,(FNiagaraDataSetCompiledData *)(pFVar46 + 0x10),0);
              pFVar37 = (this->EventInstanceData).Ptr;
              pFVar4 = (pFVar37->SpawnScriptEventDataSets).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_158) &&
                  ((FScriptContainerElement *)&local_158 <
                   pFVar4 + (longlong)(pFVar37->SpawnScriptEventDataSets).ArrayMax * 8)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = (pFVar37->SpawnScriptEventDataSets).ArrayNum;
              piVar22 = &(pFVar37->SpawnScriptEventDataSets).ArrayMax;
              if (iVar13 == *piVar22) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&(pFVar37->SpawnScriptEventDataSets).AllocatorInstance,
                                    piVar22);
              }
              (pFVar37->SpawnScriptEventDataSets).ArrayNum = iVar13 + 1;
              *(FNiagaraDataSet **)
               ((pFVar37->SpawnScriptEventDataSets).AllocatorInstance.Data + (longlong)iVar13 * 8) =
                   local_158;
              pFVar29 = (pFVar19->SharedEventGeneratorIds).AllocatorInstance.Data;
              pFVar4 = pFVar29 + (longlong)(pFVar19->SharedEventGeneratorIds).ArrayNum * 8;
              for (; pFVar29 != pFVar4; pFVar29 = pFVar29 + 8) {
                if (*(longlong *)pFVar29 == *(longlong *)(pFVar46 + 4)) {
                  FVar35 = (FScriptContainerElement)0x1;
                  goto LAB_1492aadf8;
                }
              }
              FVar35 = (FScriptContainerElement)0x0;
LAB_1492aadf8:
              pFVar37 = (this->EventInstanceData).Ptr;
              uVar41 = (uint)uVar49;
              uVar14 = 0;
              if ((int)uVar41 < (pFVar37->SpawnEventGeneratorIsSharedByIndex).ArrayNum) {
                uVar14 = ~uVar41 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar49 = (ulonglong)(uVar41 + 1);
              uVar30 = local_1a0 & 0xffffffff;
              (pFVar37->SpawnEventGeneratorIsSharedByIndex).AllocatorInstance.Data[uVar28] = FVar35;
              uVar28 = uVar28 + 1;
              pFVar46 = pFVar46 + 0x58;
              pFVar19 = local_170;
            }
            pFVar37 = (this->EventInstanceData).Ptr;
            iVar13 = (pFVar37->EventExecContexts).ArrayNum;
            piVar22 = &(pFVar37->EventExecContexts).ArrayNum;
            uVar28 = (ulonglong)local_188;
            if (iVar13 < (int)local_188) {
              iVar13 = local_188 - iVar13;
              iVar15 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x2b0,8,iVar13,(ForAnyElementType *)pFVar37,piVar22,
                                  &(pFVar37->EventExecContexts).ArrayMax);
              DefaultConstructItems<FNiagaraScriptExecutionContext,int>
                        ((pFVar37->EventExecContexts).AllocatorInstance.Data +
                         (longlong)iVar15 * 0x2b0,iVar13);
            }
            else {
              if ((int)local_188 < 0) goto LAB_1492abdfa;
              if ((int)local_188 < iVar13) {
                uVar41 = iVar13 - local_188;
                if (((int)(local_188 | uVar41) < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (uVar41 != 0) {
                  TArray<FNiagaraScriptExecutionContext,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                            (&pFVar37->EventExecContexts,uVar14,uVar41);
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x2b0,8,(ForAnyElementType *)pFVar37,*piVar22,
                             &(pFVar37->EventExecContexts).ArrayMax);
                }
              }
            }
            pFVar37 = (this->EventInstanceData).Ptr;
            this_04 = &pFVar37->EventExecCountBindings;
            iVar13 = (pFVar37->EventExecCountBindings).ArrayNum;
            piVar22 = &(pFVar37->EventExecCountBindings).ArrayNum;
            if (iVar13 < (int)uVar14) {
              iVar15 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x38,8,uVar14 - iVar13,&this_04->AllocatorInstance,piVar22,
                                  &(pFVar37->EventExecCountBindings).ArrayMax);
              DefaultConstructItems<FNiagaraParameterDirectBinding<int>,int>
                        ((this_04->AllocatorInstance).Data + (longlong)iVar15 * 0x38,uVar14 - iVar13
                        );
            }
            else {
              if ((int)uVar14 < 0) {
LAB_1492abdfa:
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum(uVar28);
              }
              if ((int)uVar14 < iVar13) {
                uVar41 = iVar13 - uVar14;
                if (((int)(uVar14 | uVar41) < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (uVar41 != 0) {
                  TArray<FNiagaraParameterDirectBinding<int>,TSizedDefaultAllocator<32>_>::
                  RemoveAtImpl(this_04,uVar14,uVar41);
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x38,8,&this_04->AllocatorInstance,*piVar22,
                             &(pFVar37->EventExecCountBindings).ArrayMax);
                }
              }
            }
            uVar41 = 0;
            pFVar19 = local_170;
            if (0 < (int)uVar14) {
              lVar45 = 0;
              local_180 = 0;
              lVar44 = 0;
              local_1a0 = 0;
              do {
                pFVar19 = local_170;
                uVar36 = ~uVar41 >> 0x1f;
                uVar14 = 0;
                if ((int)uVar41 < (local_170->EventHandlerScriptProps).ArrayNum) {
                  uVar14 = uVar36;
                }
                if ((uVar14 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar37 = (this->EventInstanceData).Ptr;
                uVar38 = *(undefined8 *)
                          ((pFVar19->EventHandlerScriptProps).AllocatorInstance.Data + lVar44);
                uVar14 = 0;
                if ((int)uVar41 < (pFVar37->EventExecContexts).ArrayNum) {
                  uVar14 = uVar36;
                }
                if ((uVar14 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar46 = (pFVar37->EventExecContexts).AllocatorInstance.Data + local_180;
                (**(code **)(*(longlong *)pFVar46 + 8))(pFVar46,this->_padding_,uVar38,0);
                pFVar37 = (this->EventInstanceData).Ptr;
                uVar14 = 0;
                if ((int)uVar41 < (pFVar37->EventExecCountBindings).ArrayNum) {
                  uVar14 = uVar36;
                }
                if ((uVar14 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar46 = (pFVar37->EventExecCountBindings).AllocatorInstance.Data + local_1a0;
                pFVar37 = (this->EventInstanceData).Ptr;
                uVar14 = 0;
                if ((int)uVar41 < (pFVar37->EventExecContexts).ArrayNum) {
                  uVar14 = uVar36;
                }
                if ((uVar14 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar28 = local_180;
                pFVar43 = (pFVar37->EventExecContexts).AllocatorInstance.Data + local_180 + 0x38;
                *(FScriptContainerElement **)(pFVar46 + 8) = pFVar43;
                *(longlong *)(pFVar46 + 0x10) = INiagaraModule::Engine_ExecutionCount._padding_;
                *(undefined4 *)(pFVar46 + 0x18) =
                     (undefined4)INiagaraModule::Engine_ExecutionCount._padding_;
                TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                          ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar46 + 0x20),
                           &INiagaraModule::Engine_ExecutionCount.VarData);
                *(undefined4 *)(pFVar46 + 0x30) = *(undefined4 *)(*(longlong *)(pFVar46 + 8) + 0x84)
                ;
                this_03 = FNiagaraTypeDefinitionHandle::Resolve
                                    ((FNiagaraTypeDefinitionHandle *)
                                     &INiagaraModule::Engine_ExecutionCount._padding_);
                iVar13 = FNiagaraTypeDefinition::GetSize(this_03);
                if ((iVar13 != 4) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("DestVariable.GetSizeInBytes() == sizeof(T)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                        ,0x328,L""), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                piVar22 = (int *)(**(code **)(*(longlong *)pFVar43 + 0x58))
                                           (pFVar43,&INiagaraModule::Engine_ExecutionCount,0);
                if ((piVar22 == (int *)0x0) || (*piVar22 == -1)) {
                  lVar23 = 0;
                }
                else {
                  lVar23 = (longlong)*piVar22 + *(longlong *)(pFVar43 + 0x20);
                }
                local_1a0 = local_1a0 + 0x38;
                local_180 = uVar28 + 0x2b0;
                uVar41 = uVar41 + 1;
                lVar45 = lVar45 + 1;
                *(longlong *)pFVar46 = lVar23;
                lVar44 = lVar44 + 0x58;
                FVar32 = local_190;
                pFVar19 = local_170;
              } while (lVar45 < (int)local_188);
            }
          }
          pTVar47 = &this->EmitterCompiledData;
          (**(code **)((this->SpawnExecContext)._padding_ + 8))
                    (&this->SpawnExecContext,this->_padding_,
                     (pFVar19->SpawnScriptProps).Script.field0_0x0.DebugPtr,pFVar19->SimTarget);
          (**(code **)((this->UpdateExecContext)._padding_ + 8))
                    (&this->UpdateExecContext,this->_padding_,
                     (pFVar19->UpdateScriptProps).Script.field0_0x0.DebugPtr,pFVar19->SimTarget);
          if (pFVar19->SimTarget == GPUComputeSim) {
            pFVar24 = ::operator_new(0x250);
            if (pFVar24 == (FNiagaraComputeExecutionContext *)0x0) {
              pFVar24 = (FNiagaraComputeExecutionContext *)0x0;
            }
            else {
              pFVar24 = FNiagaraComputeExecutionContext::FNiagaraComputeExecutionContext(pFVar24);
            }
            this->_padding_ = (longlong)pFVar24;
            local_d0.Object = (pFVar19->SimStageExecutionData).Object;
            EVar1 = pFVar19->SimTarget;
            local_d0.SharedReferenceCount.ReferenceController =
                 (pFVar19->SimStageExecutionData).SharedReferenceCount.ReferenceController;
            if (local_d0.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            FNiagaraComputeExecutionContext::InitParams
                      (pFVar24,(pFVar19->GPUComputeScript).field0_0x0.DebugPtr,&local_d0,EVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0.SharedReferenceCount.ReferenceController);
            lVar44 = this->_padding_;
            uVar38 = 0;
            if (this->_padding_ != 0) {
              uVar38 = *(undefined8 *)(*(longlong *)(this->_padding_ + 0x50) + 0x18);
            }
            if ((pFVar19->DebugSimName).Data.ArrayNum == 0) {
              pwVar33 = L"";
            }
            else {
              pwVar33 = (wchar_t *)(pFVar19->DebugSimName).Data.AllocatorInstance.Data;
            }
            ::FString::operator=((FString *)(lVar44 + 0x28),pwVar33);
            *(undefined8 *)(lVar44 + 0x20) = uVar38;
            if (this->_padding_ == 0) {
              local_e0 = (UObject *)0x0;
            }
            else {
              local_e0 = FWeakObjectPtr::Get((FWeakObjectPtr *)(this->_padding_ + 0x60));
            }
            lVar44 = this->_padding_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_e0);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar44 + 0x38),(FObjectPtr)&local_e0);
            pFVar25 = FVersionedNiagaraEmitter::ToWeakPtr
                                ((FVersionedNiagaraEmitter *)&this->_padding_,&local_98);
            uVar8 = *(undefined8 *)&pFVar25->Version;
            uVar38 = *(undefined8 *)&(pFVar25->Version).C;
            lVar44 = this->_padding_;
            *(FWeakObjectPtr *)(lVar44 + 0x40) = (pFVar25->Emitter).WeakPtr;
            *(undefined8 *)(lVar44 + 0x48) = uVar8;
            *(undefined8 *)(lVar44 + 0x50) = uVar38;
            *(longlong *)(this->_padding_ + 0x58) = this->_padding_;
            *(FNiagaraShaderScript **)(this->_padding_ + 0x68) =
                 (((pFVar19->GPUComputeScript).field0_0x0.DebugPtr)->ScriptResource).Object;
            UNiagaraSystem::GetStatID
                      (*(UNiagaraSystem **)(this->_padding_ + 0x50),SUB81(&local_d8,0),false);
            *(undefined8 *)(this->_padding_ + 0x10) = local_d8;
            pUVar2 = (UNiagaraEmitter *)this->_padding_;
            if (pUVar2 == (UNiagaraEmitter *)0x0) {
              pTVar31 = &TStatId::TStatId_NAME_None;
            }
            else {
              TVar5 = ((pUVar2->StatID_GT).StatIdPtr)->Name;
              if ((TVar5._0_4_ == 0) && (TVar5._4_4_ == 0)) {
                UNiagaraEmitter::GenerateStatID(pUVar2);
              }
              pTVar31 = (pUVar2->StatID_RT).StatIdPtr;
            }
            *(TStatIdData **)(this->_padding_ + 0x18) = pTVar31;
            this->_padding_ = this->_padding_;
          }
          if ((pTVar47->Object == (FNiagaraEmitterCompiledData *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FNiagaraParameterDirectBinding<float>::Init
                    (&this->SpawnIntervalBinding,
                     (FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_,
                     &pTVar47->Object->EmitterSpawnIntervalVar);
          if ((pTVar47->Object == (FNiagaraEmitterCompiledData *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FNiagaraParameterDirectBinding<float>::Init
                    (&this->InterpSpawnStartBinding,
                     (FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_,
                     &pTVar47->Object->EmitterInterpSpawnStartDTVar);
          if ((pTVar47->Object == (FNiagaraEmitterCompiledData *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FNiagaraParameterDirectBinding<int>::Init
                    (&this->SpawnGroupBinding,
                     (FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_,
                     &pTVar47->Object->EmitterSpawnGroupVar);
          FNiagaraParameterDirectBinding<int>::Init
                    (&this->SpawnExecCountBinding,
                     (FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_,
                     &INiagaraModule::Engine_ExecutionCount);
          FNiagaraParameterDirectBinding<int>::Init
                    (&this->UpdateExecCountBinding,
                     (FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_,
                     &INiagaraModule::Engine_ExecutionCount);
          local_150 = (pFVar19->SpawnScriptProps).Script.field0_0x0;
          local_40 = (TObjectPtr<UNiagaraScript>_u_0)0x0;
          local_34 = 8;
          local_38 = 0;
          iVar13 = 0;
          if ((local_80 <= &local_150) && (&local_150 < local_80 + 8)) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar13 = local_38;
            if (local_38 == local_34) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UNiagaraScript_*>_>
                                 (0x808,(ForElementType<UNiagaraScript_*> *)&local_80[0].ObjectPtr,
                                  &local_34);
            }
          }
          local_38 = iVar13 + 1;
          TVar26 = (TObjectPtr<UNiagaraScript>_u_0)local_80;
          if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
            TVar26 = local_40;
          }
          *(TObjectPtr<UNiagaraScript>_u_0 *)((longlong)TVar26.DebugPtr + (longlong)iVar13 * 8) =
               local_150;
          local_148 = (pFVar19->UpdateScriptProps).Script.field0_0x0;
          TVar26 = (TObjectPtr<UNiagaraScript>_u_0)local_80;
          if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
            TVar26 = local_40;
          }
          if (TVar26.DebugPtr <= &local_148) {
            TVar26 = (TObjectPtr<UNiagaraScript>_u_0)local_80;
            if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
              TVar26 = local_40;
            }
            if ((&local_148 <
                 (TObjectPtr<UNiagaraScript>_u_0 *)
                 ((longlong)TVar26.DebugPtr + (longlong)local_34 * 8)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (local_38 == local_34) {
            local_38 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UNiagaraScript_*>_>
                                 (0x808,(ForElementType<UNiagaraScript_*> *)&local_80[0].ObjectPtr,
                                  &local_34);
          }
          TVar26 = (TObjectPtr<UNiagaraScript>_u_0)local_80;
          if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
            TVar26 = local_40;
          }
          lVar44 = (longlong)local_38;
          local_38 = local_38 + 1;
          *(TObjectPtr<UNiagaraScript>_u_0 *)((longlong)TVar26.DebugPtr + lVar44 * 8) = local_148;
          iVar13 = (pFVar19->EventHandlerScriptProps).ArrayNum;
          pTVar39 = (TObjectPtr<UNiagaraScript>_u_0 *)
                    (pFVar19->EventHandlerScriptProps).AllocatorInstance.Data;
          pTVar42 = pTVar39 + (longlong)iVar13 * 0xb;
          while( true ) {
            if ((pFVar19->EventHandlerScriptProps).ArrayNum != iVar13) {
              local_1a5 = 0;
              `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_1a5);
            }
            if (pTVar39 == pTVar42) break;
            local_140 = *pTVar39;
            TVar26 = (TObjectPtr<UNiagaraScript>_u_0)local_80;
            if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
              TVar26 = local_40;
            }
            if (TVar26.DebugPtr <= &local_140) {
              TVar26 = (TObjectPtr<UNiagaraScript>_u_0)local_80;
              if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
                TVar26 = local_40;
              }
              if ((&local_140 <
                   (TObjectPtr<UNiagaraScript>_u_0 *)
                   ((longlong)TVar26.DebugPtr + (longlong)local_34 * 8)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if (local_38 == local_34) {
              local_38 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UNiagaraScript_*>_>
                                   (0x808,(ForElementType<UNiagaraScript_*> *)&local_80[0].ObjectPtr
                                    ,&local_34);
            }
            TVar26 = (TObjectPtr<UNiagaraScript>_u_0)local_80;
            if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
              TVar26 = local_40;
            }
            lVar44 = (longlong)local_38;
            pTVar39 = pTVar39 + 0xb;
            local_38 = local_38 + 1;
            *(TObjectPtr<UNiagaraScript>_u_0 *)((longlong)TVar26.DebugPtr + lVar44 * 8) = local_140;
          }
          pFVar43 = (pFVar19->SimulationStages).AllocatorInstance.Data;
          iVar13 = (pFVar19->SimulationStages).ArrayNum;
          pFVar46 = pFVar43 + (longlong)iVar13 * 8;
          while( true ) {
            if ((pFVar19->SimulationStages).ArrayNum != iVar13) {
              local_1a4[0] = 0;
              `TCheckedPointerIterator<UNiagaraSimulationStageBase_*_const,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_1a4);
            }
            if (pFVar43 == pFVar46) break;
            local_138 = *(TObjectPtr<UNiagaraScript>_u_0 *)(*(longlong *)pFVar43 + 0x28);
            TVar26 = (TObjectPtr<UNiagaraScript>_u_0)local_80;
            if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
              TVar26 = local_40;
            }
            if (TVar26.DebugPtr <= &local_138) {
              TVar26 = (TObjectPtr<UNiagaraScript>_u_0)local_80;
              if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
                TVar26 = local_40;
              }
              if ((&local_138 <
                   (TObjectPtr<UNiagaraScript>_u_0 *)
                   ((longlong)TVar26.DebugPtr + (longlong)local_34 * 8)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if (local_38 == local_34) {
              local_38 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UNiagaraScript_*>_>
                                   (0x808,(ForElementType<UNiagaraScript_*> *)&local_80[0].ObjectPtr
                                    ,&local_34);
            }
            TVar26 = (TObjectPtr<UNiagaraScript>_u_0)local_80;
            if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
              TVar26 = local_40;
            }
            lVar44 = (longlong)local_38;
            pFVar43 = pFVar43 + 8;
            local_38 = local_38 + 1;
            *(TObjectPtr<UNiagaraScript>_u_0 *)((longlong)TVar26.DebugPtr + lVar44 * 8) = local_138;
          }
          pFVar37 = (this->EventInstanceData).Ptr;
          if (pFVar37 != (FEventInstanceData *)0x0) {
            piVar22 = &(pFVar37->EventHandlingInfo).ArrayMax;
            uVar14 = (pFVar19->EventHandlerScriptProps).ArrayNum;
            pFVar6 = (FNiagaraEventHandlingInfo *)
                     (pFVar37->EventHandlingInfo).AllocatorInstance.Data;
            iVar13 = (pFVar37->EventHandlingInfo).ArrayNum;
            if (*piVar22 < 0) {
              DestructItems<FNiagaraEventHandlingInfo,int>(pFVar6,iVar13);
              (pFVar37->EventHandlingInfo).ArrayNum = 0;
              if (*piVar22 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x78,8,0,&(pFVar37->EventHandlingInfo).AllocatorInstance,0,piVar22);
              }
            }
            else {
              DestructItems<FNiagaraEventHandlingInfo,int>(pFVar6,iVar13);
              (pFVar37->EventHandlingInfo).ArrayNum = 0;
            }
            pFVar37 = (this->EventInstanceData).Ptr;
            this_05 = &pFVar37->EventHandlingInfo;
            iVar13 = (pFVar37->EventHandlingInfo).ArrayNum;
            piVar22 = &(pFVar37->EventHandlingInfo).ArrayNum;
            if (iVar13 < (int)uVar14) {
              iVar15 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x78,8,uVar14 - iVar13,&this_05->AllocatorInstance,piVar22,
                                  &(pFVar37->EventHandlingInfo).ArrayMax);
              DefaultConstructItems<FNiagaraEventHandlingInfo,int>
                        ((this_05->AllocatorInstance).Data + (longlong)iVar15 * 0x78,uVar14 - iVar13
                        );
            }
            else {
              if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
              }
              if ((int)uVar14 < iVar13) {
                uVar41 = iVar13 - uVar14;
                if (((int)(uVar41 | uVar14) < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (uVar41 != 0) {
                  TArray<FNiagaraEventHandlingInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                            (this_05,uVar14,uVar41);
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x78,8,&this_05->AllocatorInstance,*piVar22,
                             &(pFVar37->EventHandlingInfo).ArrayMax);
                }
              }
            }
            uVar41 = 0;
            if (0 < (int)uVar14) {
              lVar45 = 0;
              lVar44 = 0;
              local_1a0 = 0;
              do {
                uVar36 = 0;
                if ((int)uVar41 < (pFVar19->EventHandlerScriptProps).ArrayNum) {
                  uVar36 = ~uVar41 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar46 = (pFVar19->EventHandlerScriptProps).AllocatorInstance.Data;
                pFVar37 = (local_130->EventInstanceData).Ptr;
                uVar36 = 0;
                if ((int)uVar41 < (pFVar37->EventHandlingInfo).ArrayNum) {
                  uVar36 = ~uVar41 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar40 = (ForElementType<int> *)
                          ((pFVar37->EventHandlingInfo).AllocatorInstance.Data + local_1a0);
                pFVar46 = pFVar46 + lVar44 + 0x34;
                uVar38 = *(undefined8 *)(pFVar46 + 8);
                *(undefined8 *)(pFVar40[1].InlineData + 0x18) = *(undefined8 *)pFVar46;
                *(undefined8 *)(pFVar40[1].InlineData + 0x20) = uVar38;
                if (((*(int *)(pFVar40[1].InlineData + 0x24) == 0 &&
                     *(int *)(pFVar40[1].InlineData + 0x20) == 0) &&
                    *(int *)(pFVar40[1].InlineData + 0x1c) == 0) &&
                    ((FGuid *)(pFVar40[1].InlineData + 0x18))->A == 0) {
                  FVar32 = local_130->CachedIDName;
                  uVar36 = local_198;
                }
                else {
                  uVar36 = local_198 | 1;
                  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_118.Data.ArrayNum = 0;
                  local_118.Data.ArrayMax = 0;
                  local_198 = uVar36;
                  FGuid::AppendString((FGuid *)(pFVar40[1].InlineData + 0x18),&local_118,Digits);
                  FVar34.Data = (FScriptContainerElement *)L"";
                  if (local_118.Data.ArrayNum != 0) {
                    FVar34.Data = local_118.Data.AllocatorInstance.Data;
                  }
                  pFVar16 = ::FName::FName(local_b8,(wchar_t *)FVar34.Data);
                  FVar32 = *pFVar16;
                }
                *(FName *)(pFVar40[1].InlineData + 0x28) = FVar32;
                if (((uVar36 & 1) != 0) &&
                   (local_198 = uVar36 & 0xfffffffe,
                   local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_118.Data.AllocatorInstance.Data);
                }
                iVar13 = *(int *)(pFVar40[1].InlineData + 4);
                pFVar40[1].InlineData[0] = '\0';
                pFVar40[1].InlineData[1] = '\0';
                pFVar40[1].InlineData[2] = '\0';
                pFVar40[1].InlineData[3] = '\0';
                if (iVar13 < 0) {
                  UE::Core::Private::
                  ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (4,4,0,pFVar40,0,(int *)(pFVar40[1].InlineData + 4));
                }
                pFVar40[1].InlineData[8] = '\0';
                pFVar40[1].InlineData[9] = '\0';
                pFVar40[1].InlineData[10] = '\0';
                pFVar40[1].InlineData[0xb] = '\0';
                lVar23 = *(longlong *)(pFVar40[1].InlineData + 0x10);
                if (lVar23 != 0) {
                  pFVar40[1].InlineData[0x10] = '\0';
                  pFVar40[1].InlineData[0x11] = '\0';
                  pFVar40[1].InlineData[0x12] = '\0';
                  pFVar40[1].InlineData[0x13] = '\0';
                  pFVar40[1].InlineData[0x14] = '\0';
                  pFVar40[1].InlineData[0x15] = '\0';
                  pFVar40[1].InlineData[0x16] = '\0';
                  pFVar40[1].InlineData[0x17] = '\0';
                  if ((*(int *)(lVar23 + 8) < 1) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsBeingRead()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                          ,0x2c,L""), bVar12)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  LOCK();
                  *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + -1;
                  UNLOCK();
                }
                local_1a0 = local_1a0 + 0x78;
                uVar41 = uVar41 + 1;
                lVar45 = lVar45 + 1;
                lVar44 = lVar44 + 0x58;
                FVar32 = local_190;
                pFVar19 = local_170;
                this = local_130;
              } while (lVar45 < (int)uVar14);
            }
          }
          FNiagaraParameterStore::UnbindAll((FNiagaraParameterStore *)&this->_padding_);
          bVar12 = FVersionedNiagaraEmitterData::BuildParameterStoreRendererBindings
                             (pFVar19,(FNiagaraParameterStore *)&this->_padding_);
          if (bVar12) {
            if ((FNiagaraSystemInstance *)this->_padding_ != (FNiagaraSystemInstance *)0x0) {
              FNiagaraSystemInstance::BindToParameterStore
                        ((FNiagaraSystemInstance *)this->_padding_,
                         (FNiagaraParameterStore *)&this->_padding_);
            }
            if ((this->_padding_ != 0) && (pFVar19->SimTarget == GPUComputeSim)) {
              FNiagaraParameterStore::Bind
                        ((FNiagaraParameterStore *)(this->_padding_ + 0x80),
                         (FNiagaraParameterStore *)&this->_padding_,
                         (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
            }
          }
          if (local_40 != (TObjectPtr<UNiagaraScript>_u_0)0x0) {
            FMemory::Free((void *)local_40);
          }
          uVar14 = pFVar19->MaxInstanceCount;
          this->MaxInstanceCount = uVar14;
          *(uint *)(this->_padding_ + 0xb0) = uVar14;
          *(uint *)(this->_padding_ + 0xb4) = pFVar19->MaxAllocationCount;
        }
        goto LAB_1492abd9f;
      }
    }
  }
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 4;
LAB_1492abd9f:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return;
}

// InitDITickLists @ 1492abf80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstanceImpl::InitDITickLists(FNiagaraEmitterInstanceImpl *this)

{
  FScriptContainerElement *pFVar1;
  FEventInstanceData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  
  if (*(int *)((longlong)&this->_padding_ + 4) == 4) {
    FNDIStageTickHandler::Empty((FNDIStageTickHandler *)&(this->SpawnExecContext)._padding_);
    FNDIStageTickHandler::Empty((FNDIStageTickHandler *)&(this->UpdateExecContext)._padding_);
    pFVar2 = (this->EventInstanceData).Ptr;
    iVar5 = 0;
    if (pFVar2 == (FEventInstanceData *)0x0) {
      pFVar6 = (FScriptContainerElement *)0x0;
    }
    else {
      pFVar6 = (pFVar2->EventExecContexts).AllocatorInstance.Data;
      iVar5 = (pFVar2->EventExecContexts).ArrayNum;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pFVar6 != pFVar6 + (longlong)iVar5 * 0x2b0) {
      pFVar7 = pFVar6 + 0x284;
      do {
        *(undefined4 *)(pFVar7 + -4) = 0;
        if (*(int *)pFVar7 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)(pFVar7 + -0xc),0,(int *)pFVar7);
        }
        *(undefined4 *)(pFVar7 + 0xc) = 0;
        if (*(int *)(pFVar7 + 0x10) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)(pFVar7 + 4),0,(int *)(pFVar7 + 0x10));
        }
        pFVar1 = pFVar7 + 0x2c;
        pFVar7 = pFVar7 + 0x2b0;
      } while (pFVar1 != pFVar6 + (longlong)iVar5 * 0x2b0);
      return;
    }
  }
  else {
    (**(code **)((this->SpawnExecContext)._padding_ + 0x10))
              (&this->SpawnExecContext,this->_padding_);
    (**(code **)((this->UpdateExecContext)._padding_ + 0x10))
              (&this->UpdateExecContext,this->_padding_);
    pFVar2 = (this->EventInstanceData).Ptr;
    if (pFVar2 == (FEventInstanceData *)0x0) {
      pFVar6 = (FScriptContainerElement *)0x0;
      iVar5 = 0;
    }
    else {
      pFVar6 = (pFVar2->EventExecContexts).AllocatorInstance.Data;
      iVar5 = (pFVar2->EventExecContexts).ArrayNum;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar7 = pFVar6 + (longlong)iVar5 * 0x2b0;
    for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 0x2b0) {
      (**(code **)(*(longlong *)pFVar6 + 0x10))(pFVar6,this->_padding_);
    }
  }
  return;
}

// InternalCalculateDynamicBounds @ 1492ac610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
FNiagaraEmitterInstanceImpl::InternalCalculateDynamicBounds
          (FNiagaraEmitterInstanceImpl *this,TBox<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FVersionedNiagaraEmitterData *pFVar5;
  TBox<double> *pTVar6;
  double *pdVar7;
  ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_> FVar8;
  ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_> FVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar13;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar19;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_178 [32];
  int local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  double local_118;
  undefined1 local_110 [56];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar5 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_);
  if (((param_1 == 0) || (pFVar5 == (FVersionedNiagaraEmitterData *)0x0)) || (this->_padding_ == 0))
  {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    FVar9 = (pFVar5->BoundsCalculators).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)0x0) {
      FVar9 = (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)&pFVar5->BoundsCalculators;
    }
    iVar1 = (pFVar5->BoundsCalculators).ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TBox<double> *)(*pcVar3)();
        return pTVar6;
      }
    }
    else if (iVar1 == 0) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
      __return_storage_ptr__->IsValid = '\0';
      __return_storage_ptr__->Pad[0] = '\0';
      __return_storage_ptr__->Pad[1] = '\0';
      __return_storage_ptr__->Pad[2] = '\0';
      __return_storage_ptr__->Pad[3] = '\0';
      __return_storage_ptr__->Pad[4] = '\0';
      __return_storage_ptr__->Pad[5] = '\0';
      __return_storage_ptr__->Pad[6] = '\0';
      return __return_storage_ptr__;
    }
    lVar2 = this->_padding_;
    FVar8 = (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)
            ((longlong)iVar1 * 0x10 + (longlong)FVar9);
    local_118 = (double)((ulonglong)local_118 & 0xffffffffffffff00);
    local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_144 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_13c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_138._0_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    local_138._4_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar22 = (undefined4)local_138;
    uVar23 = local_138._4_4_;
    uVar11 = (undefined4)local_138;
    uVar15 = local_138._4_4_;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    if (FVar9 != FVar8) {
      uStack_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_12c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_124 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar24 = (undefined4)local_138;
      uVar25 = local_138._4_4_;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar32 = (undefined4)local_138;
      uVar33 = local_138._4_4_;
      uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      do {
        if ((*(longlong *)FVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TBox<double> *)(*pcVar3)();
          return pTVar6;
        }
        local_158 = param_1;
        pdVar7 = (double *)
                 (**(code **)(**(longlong **)FVar9 + 0x10))
                           (*(longlong **)FVar9,local_110,lVar2 + 0x70,this->_padding_);
        if (local_118._0_1_ == '\0') {
          if (*(char *)(pdVar7 + 6) != '\0') {
            uVar10 = *(undefined4 *)pdVar7;
            uVar14 = *(undefined4 *)((longlong)pdVar7 + 4);
            uVar17 = *(undefined4 *)(pdVar7 + 1);
            uVar20 = *(undefined4 *)((longlong)pdVar7 + 0xc);
            uVar11 = *(undefined4 *)(pdVar7 + 2);
            uVar15 = *(undefined4 *)((longlong)pdVar7 + 0x14);
            uVar18 = *(undefined4 *)(pdVar7 + 3);
            uVar21 = *(undefined4 *)((longlong)pdVar7 + 0x1c);
            uVar12 = *(undefined4 *)(pdVar7 + 4);
            uVar16 = *(undefined4 *)((longlong)pdVar7 + 0x24);
            uVar22 = *(undefined4 *)(pdVar7 + 5);
            uVar23 = *(undefined4 *)((longlong)pdVar7 + 0x2c);
            local_118 = pdVar7[6];
            goto LAB_1492ac94a;
          }
        }
        else if (*(char *)(pdVar7 + 6) != '\0') {
          dVar13 = *pdVar7;
          dVar19 = pdVar7[1];
          if ((double)CONCAT44(uVar35,uVar34) <= dVar13) {
            dVar13 = (double)CONCAT44(uVar35,uVar34);
          }
          if ((double)CONCAT44(uVar29,uVar28) <= dVar19) {
            dVar19 = (double)CONCAT44(uVar29,uVar28);
          }
          uVar10 = SUB84(dVar13,0);
          uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
          dVar13 = pdVar7[2];
          uVar17 = SUB84(dVar19,0);
          uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
          if ((double)CONCAT44(uVar33,uVar32) <= dVar13) {
            dVar13 = (double)CONCAT44(uVar33,uVar32);
          }
          dVar19 = pdVar7[3];
          if (dVar19 <= (double)CONCAT44(uVar27,uVar26)) {
            dVar19 = (double)CONCAT44(uVar27,uVar26);
          }
          uVar11 = SUB84(dVar13,0);
          uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
          dVar13 = pdVar7[4];
          if (dVar13 <= (double)CONCAT44(uVar31,uVar30)) {
            dVar13 = (double)CONCAT44(uVar31,uVar30);
          }
          uVar18 = SUB84(dVar19,0);
          uVar21 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar19 = pdVar7[5];
          if (dVar19 <= (double)CONCAT44(uVar25,uVar24)) {
            dVar19 = (double)CONCAT44(uVar25,uVar24);
          }
          uVar12 = SUB84(dVar13,0);
          uVar16 = (undefined4)((ulonglong)dVar13 >> 0x20);
          uVar22 = SUB84(dVar19,0);
          uVar23 = (undefined4)((ulonglong)dVar19 >> 0x20);
LAB_1492ac94a:
          uStack_120 = (double)CONCAT44(uVar23,uVar22);
          local_138 = (double)CONCAT44(uVar15,uVar11);
          uVar24 = uVar22;
          uVar25 = uVar23;
          uVar26 = uVar18;
          uVar27 = uVar21;
          uVar28 = uVar17;
          uVar29 = uVar20;
          uVar30 = uVar12;
          uVar31 = uVar16;
          uVar32 = uVar11;
          uVar33 = uVar15;
          uVar34 = uVar10;
          uVar35 = uVar14;
          local_148 = uVar10;
          uStack_144 = uVar14;
          uStack_140 = uVar17;
          uStack_13c = uVar20;
          uStack_130 = uVar18;
          uStack_12c = uVar21;
          uStack_128 = uVar12;
          uStack_124 = uVar16;
        }
        FVar9 = (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)((longlong)FVar9 + 0x10);
      } while (FVar9 != FVar8);
    }
    *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar10;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar14;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar17;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar20;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = uVar11;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x14) = uVar15;
    *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar18;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar21;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar12;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar16;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = uVar22;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x14) = uVar23;
    *(double *)&__return_storage_ptr__->IsValid = local_118;
  }
  return __return_storage_ptr__;
}

// IsAllowedToExecute @ 1492ad420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall FNiagaraEmitterInstanceImpl::IsAllowedToExecute(FNiagaraEmitterInstanceImpl *this)

{
  FVersionedNiagaraEmitterData *pFVar1;
  FNiagaraEmitterHandle *pFVar2;
  
  pFVar1 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_);
  pFVar2 = FNiagaraEmitterInstance::GetEmitterHandle((FNiagaraEmitterInstance *)this);
  if (((pFVar2->bIsEnabled != false) && (pFVar1 != (FVersionedNiagaraEmitterData *)0x0)) &&
     (pFVar1->bIsAllowedToExecute != 0)) {
    return true;
  }
  return false;
}

// IsParticleComponentActive @ 1492ad690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNiagaraEmitterInstanceImpl::IsParticleComponentActive
          (FNiagaraEmitterInstanceImpl *this,FObjectKey param_1,int param_2)

{
  int iVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  uint uVar6;
  FObjectKey local_res10 [3];
  
  uVar6 = param_1.ObjectSerialNumber;
  uVar3 = param_1.ObjectIndex - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar3) - uVar6 ^ uVar3 << 8;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xd;
  uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 << 0x10;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 5;
  uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar6 >> 3;
  uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 << 10;
  local_res10[0] = param_1;
  pTVar2 = TMapBase<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
           ::FindOrAddImpl<FObjectKey_const_&>
                     ((TMapBase<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                       *)&this->ParticlesWithComponents,(uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xf,
                      local_res10);
  if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
    FVar4 = (pTVar2->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&pTVar2->Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(pTVar2->HashSize - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&pTVar2->Elements + (longlong)iVar1 * 0xc) == param_2)
        goto LAB_1492ad78c;
        iVar1 = *(int *)(*(longlong *)&pTVar2->Elements + 4 + (longlong)iVar1 * 0xc);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_1492ad78c:
  return iVar1 != -1;
}

// IsReadyToRun @ 1492ad820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNiagaraEmitterInstanceImpl::IsReadyToRun(FNiagaraEmitterInstanceImpl *this)

{
  bool bVar1;
  FVersionedNiagaraEmitterData *this_00;
  
  if (*(int *)((longlong)&this->_padding_ + 4) != 4) {
    this_00 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_)
    ;
    bVar1 = FVersionedNiagaraEmitterData::IsReadyToRun(this_00);
    return bVar1;
  }
  return true;
}

// OnPooledReuse @ 1492ae980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstanceImpl::OnPooledReuse(FNiagaraEmitterInstanceImpl *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  this->bResetPending = 1;
  this->bAllowSpawning_CNC = 1;
  this->bAllowSpawning_GT = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar2;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  return;
}

// PostTick @ 1492afe00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstanceImpl::PostTick(FNiagaraEmitterInstanceImpl *this)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  FEventInstanceData *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterPostTick> FVar17;
  FVersionedNiagaraEmitterData *pFVar18;
  FNiagaraDataBuffer *pFVar19;
  longlong lVar20;
  TBox<double> *pTVar21;
  TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
  *pTVar22;
  FName FVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined8 uVar26;
  undefined1 auStackY_2a8 [32];
  undefined1 local_248 [4];
  FColor_u_0 local_244;
  FName local_240;
  FName local_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  FName local_228;
  FName local_218;
  FName local_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  FName local_1f8 [2];
  FName local_1e8;
  undefined8 uStack_1e0;
  FName local_1d8;
  undefined8 uStack_1d0;
  TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
  local_1c8;
  TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
  local_178;
  TVector<double>_u_0 local_128;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8;
  undefined7 uStack_f7;
  TMatrix<double> local_e8;
  TBox<double> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FVar17 = StatPtr_STAT_NiagaraEmitterPostTick;
  local_218 = (FName)this;
  if (StatPtr_STAT_NiagaraEmitterPostTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterPostTick>)0x0) {
    pFVar16 = ::FName::FName(local_1f8,"STAT_NiagaraEmitterPostTick");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterPostTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEmitterPostTick,*pFVar16,
                        L"Emitter Post Tick [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar17;
  bVar8 = false;
  bVar10 = false;
  local_228.ComparisonIndex.Value = 0;
  local_228.Number = 0;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_1492aff67:
    bVar9 = false;
    FVar23 = local_228;
  }
  else {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_244.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_244._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_240.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_240.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_240,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                   ,0x397);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1492aff67;
    local_238 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar9 = true;
  }
  if (((this->EmitterCompiledData).Object == (FNiagaraEmitterCompiledData *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  TArray<FNiagaraSpawnInfo,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SpawnInfos,(((this->EmitterCompiledData).Object)->SpawnAttributes).ArrayNum,
             Default);
  pFVar4 = (this->EventInstanceData).Ptr;
  if (pFVar4 != (FEventInstanceData *)0x0) {
    iVar3 = (pFVar4->EventHandlingInfo).ArrayNum;
    pFVar24 = (pFVar4->EventHandlingInfo).AllocatorInstance.Data;
    pFVar25 = pFVar24 + (longlong)iVar3 * 0x78;
    while( true ) {
      if ((pFVar4->EventHandlingInfo).ArrayNum != iVar3) {
        local_248[0] = 0;
        `TCheckedPointerIterator<FNiagaraEventHandlingInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_248);
      }
      this = (FNiagaraEmitterInstanceImpl *)local_218;
      if (pFVar24 == pFVar25) break;
      lVar5 = *(longlong *)(pFVar24 + 0x58);
      if (lVar5 != 0) {
        *(undefined8 *)(pFVar24 + 0x58) = 0;
        if ((*(int *)(lVar5 + 8) < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsBeingRead()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                ,0x2c,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
        UNLOCK();
      }
      pFVar24 = pFVar24 + 0x78;
    }
  }
  *(undefined1 *)((longlong)this + 0xd8) = 0;
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)this + 0xf8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)this + 0x100) = uVar26;
  *(double *)((longlong)this + 0x108) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)this + 0x110) = 0;
  *(undefined8 *)((longlong)this + 0xe0) = *(undefined8 *)((longlong)this + 0xf8);
  *(undefined8 *)((longlong)this + 0xe8) = *(undefined8 *)((longlong)this + 0x100);
  *(undefined8 *)((longlong)this + 0xf0) = *(undefined8 *)((longlong)this + 0x108);
  pFVar18 = FVersionedNiagaraEmitter::GetEmitterData
                      ((FVersionedNiagaraEmitter *)((longlong)this + 0x28));
  if (pFVar18 == (FVersionedNiagaraEmitterData *)0x0) {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<8942207478905439145>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                        ,0x3a9,"EmitterData");
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    goto LAB_1492b03be;
  }
  AcquireSRWLockShared((PSRWLOCK)((longlong)this + 0x150));
  uVar14 = _UNK_151d21688;
  uVar13 = ___xmm_4059000000000000c059000000000000;
  uVar12 = _UNK_1518ecdd8;
  uVar11 = _UNK_1512468d8;
  uVar26 = ___xmm_40590000000000004059000000000000;
  if (*(char *)((longlong)this + 0x188) == '\0') {
    if (*(char *)((longlong)this + 0x148) != '\0') {
      *(undefined8 *)((longlong)this + 0xe0) = *(undefined8 *)((longlong)this + 0x118);
      *(undefined8 *)((longlong)this + 0xe8) = *(undefined8 *)((longlong)this + 0x120);
      *(undefined8 *)((longlong)this + 0xf0) = *(undefined8 *)((longlong)this + 0x128);
      *(undefined8 *)((longlong)this + 0xf8) = *(undefined8 *)((longlong)this + 0x130);
      uVar26 = *(undefined8 *)((longlong)this + 0x148);
      *(undefined8 *)((longlong)this + 0x100) = *(undefined8 *)((longlong)this + 0x138);
      *(undefined8 *)((longlong)this + 0x108) = *(undefined8 *)((longlong)this + 0x140);
      goto LAB_1492b033e;
    }
    if (pFVar18->CalculateBoundsMode == Fixed) {
      dVar7 = (pFVar18->FixedBounds).Min.field0_0x0._s_0.Y;
      *(double *)((longlong)this + 0xe0) = (pFVar18->FixedBounds).Min.field0_0x0._s_0.X;
      *(double *)((longlong)this + 0xe8) = dVar7;
      dVar7 = (pFVar18->FixedBounds).Max.field0_0x0._s_0.X;
      *(double *)((longlong)this + 0xf0) = (pFVar18->FixedBounds).Min.field0_0x0._s_0.Z;
      *(double *)((longlong)this + 0xf8) = dVar7;
      dVar7 = (pFVar18->FixedBounds).Max.field0_0x0._s_0.Z;
      *(double *)((longlong)this + 0x100) = (pFVar18->FixedBounds).Max.field0_0x0._s_0.Y;
      *(double *)((longlong)this + 0x108) = dVar7;
      uVar26._0_1_ = (pFVar18->FixedBounds).IsValid;
      uVar26._1_1_ = (pFVar18->FixedBounds).Pad[0];
      uVar26._2_1_ = (pFVar18->FixedBounds).Pad[1];
      uVar26._3_1_ = (pFVar18->FixedBounds).Pad[2];
      uVar26._4_1_ = (pFVar18->FixedBounds).Pad[3];
      uVar26._5_1_ = (pFVar18->FixedBounds).Pad[4];
      uVar26._6_1_ = (pFVar18->FixedBounds).Pad[5];
      uVar26._7_1_ = (pFVar18->FixedBounds).Pad[6];
      goto LAB_1492b033e;
    }
    if (pFVar18->CalculateBoundsMode == Dynamic) {
      if (pFVar18->SimTarget == GPUComputeSim) {
        *(undefined8 *)((longlong)this + 0xe0) = ___xmm_c059000000000000c059000000000000;
        *(undefined8 *)((longlong)this + 0xe8) = uVar12;
        local_f8 = '\x01';
        *(undefined8 *)((longlong)this + 0xf0) = uVar13;
        *(undefined8 *)((longlong)this + 0xf8) = uVar14;
        *(undefined8 *)((longlong)this + 0x100) = uVar26;
        *(undefined8 *)((longlong)this + 0x108) = uVar11;
        *(ulonglong *)((longlong)this + 0x110) = CONCAT71(uStack_f7,1);
      }
      else {
        pFVar19 = FNiagaraDataSet::GetCurrentDataChecked
                            (*(FNiagaraDataSet **)((longlong)this + 0x10));
        InternalCalculateDynamicBounds(this,(TBox<double> *)&local_128._s_0,pFVar19->NumInstances);
        if (local_f8 != '\0') {
          *(undefined1 *)((longlong)this + 0xd8) = 1;
          if (pFVar18->bLocalSpace == false) {
            lVar5 = *(longlong *)((longlong)this + 8);
            lVar20 = (ulonglong)(*(byte *)(lVar5 + 0x840) & 1) * 0x200;
            pfVar1 = (float *)(lVar20 + 0x420 + lVar5);
            local_e8.M[0][0] = (double)*pfVar1;
            local_e8.M[0][1] = (double)pfVar1[1];
            pfVar2 = (float *)(lVar20 + 0x430 + lVar5);
            local_e8.M[0][2] = (double)pfVar1[2];
            local_e8.M[0][3] = (double)pfVar1[3];
            local_e8.M[1][0] = (double)*pfVar2;
            local_e8.M[1][1] = (double)pfVar2[1];
            local_e8.M[1][2] = (double)pfVar2[2];
            local_e8.M[1][3] = (double)pfVar2[3];
            pfVar1 = (float *)(lVar20 + 0x440 + lVar5);
            local_e8.M[2][0] = (double)*pfVar1;
            local_e8.M[2][1] = (double)pfVar1[1];
            local_e8.M[2][2] = (double)pfVar1[2];
            local_e8.M[2][3] = (double)pfVar1[3];
            pfVar1 = (float *)(lVar20 + 0x450 + lVar5);
            local_e8.M[3][0] = (double)*pfVar1;
            local_e8.M[3][1] = (double)pfVar1[1];
            local_e8.M[3][2] = (double)pfVar1[2];
            local_e8.M[3][3] = (double)pfVar1[3];
            pTVar21 = UE::Math::TBox<double>::TransformBy
                                ((TBox<double> *)&local_128._s_0,&local_68,&local_e8);
            dVar7 = (pTVar21->Min).field0_0x0._s_0.Y;
            *(double *)((longlong)this + 0xe0) = (pTVar21->Min).field0_0x0._s_0.X;
            *(double *)((longlong)this + 0xe8) = dVar7;
            dVar7 = (pTVar21->Max).field0_0x0._s_0.X;
            *(double *)((longlong)this + 0xf0) = (pTVar21->Min).field0_0x0._s_0.Z;
            *(double *)((longlong)this + 0xf8) = dVar7;
            dVar7 = (pTVar21->Max).field0_0x0._s_0.Z;
            *(double *)((longlong)this + 0x100) = (pTVar21->Max).field0_0x0._s_0.Y;
            *(double *)((longlong)this + 0x108) = dVar7;
            uVar26._0_1_ = pTVar21->IsValid;
            uVar26._1_1_ = pTVar21->Pad[0];
            uVar26._2_1_ = pTVar21->Pad[1];
            uVar26._3_1_ = pTVar21->Pad[2];
            uVar26._4_1_ = pTVar21->Pad[3];
            uVar26._5_1_ = pTVar21->Pad[4];
            uVar26._6_1_ = pTVar21->Pad[5];
            uVar26._7_1_ = pTVar21->Pad[6];
          }
          else {
            *(double *)((longlong)this + 0xe0) = local_128._s_0.X;
            *(double *)((longlong)this + 0xe8) = local_128._s_0.Y;
            *(double *)((longlong)this + 0xf0) = local_128._s_0.Z;
            *(undefined8 *)((longlong)this + 0xf8) = uStack_110;
            uVar26 = CONCAT71(uStack_f7,local_f8);
            *(undefined8 *)((longlong)this + 0x100) = local_108;
            *(undefined8 *)((longlong)this + 0x108) = uStack_100;
          }
          goto LAB_1492b033e;
        }
      }
    }
  }
  else {
    *(undefined8 *)((longlong)this + 0xe0) = *(undefined8 *)((longlong)this + 0x158);
    *(undefined8 *)((longlong)this + 0xe8) = *(undefined8 *)((longlong)this + 0x160);
    *(undefined8 *)((longlong)this + 0xf0) = *(undefined8 *)((longlong)this + 0x168);
    *(undefined8 *)((longlong)this + 0xf8) = *(undefined8 *)((longlong)this + 0x170);
    uVar26 = *(undefined8 *)((longlong)this + 0x188);
    *(undefined8 *)((longlong)this + 0x100) = *(undefined8 *)((longlong)this + 0x178);
    *(undefined8 *)((longlong)this + 0x108) = *(undefined8 *)((longlong)this + 0x180);
LAB_1492b033e:
    *(undefined8 *)((longlong)this + 0x110) = uVar26;
  }
  pTVar22 = FNiagaraScriptExecutionContextBase::ReportStats
                      ((FNiagaraScriptExecutionContextBase *)((longlong)this + 0x1a0),&local_1c8);
  uStack_230 = 3;
  uStack_1e0._1_7_ = uStack_22f;
  uStack_1e0._0_1_ = 3;
  local_238 = (FName)this;
  local_1e8 = (FName)this;
  FNiagaraStatDatabase::AddStatCapture
            (&pFVar18->StatDatabase,(TTuple<unsigned___int64,ENiagaraScriptUsage> *)&local_1e8,
             pTVar22);
  pTVar22 = FNiagaraScriptExecutionContextBase::ReportStats
                      ((FNiagaraScriptExecutionContextBase *)((longlong)this + 0x450),&local_178);
  uStack_200 = 5;
  uStack_1d0._1_7_ = uStack_1ff;
  uStack_1d0._0_1_ = 5;
  local_208 = (FName)this;
  local_1d8 = (FName)this;
  FNiagaraStatDatabase::AddStatCapture
            (&pFVar18->StatDatabase,(TTuple<unsigned___int64,ENiagaraScriptUsage> *)&local_1d8,
             pTVar22);
  ReleaseSRWLockShared((PSRWLOCK)((longlong)this + 0x150));
LAB_1492b03be:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// PreTick @ 1492b0450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstanceImpl::PreTick(FNiagaraEmitterInstanceImpl *this)

{
  UNiagaraEmitter *this_00;
  TAtomic<FMinimalName> TVar1;
  FEventInstanceData *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FNiagaraDataSet *pFVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  bool bVar12;
  uint uVar13;
  FVersionedNiagaraEmitterData *pFVar14;
  FNiagaraTypeDefinition *pFVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FNiagaraScriptExecutionContextBase *this_01;
  FScriptContainerElement *pFVar20;
  UObject *pUVar21;
  uint uVar22;
  FNiagaraScriptExecutionContextBase *pFVar23;
  TStatIdData *pTVar24;
  FName FVar25;
  FNiagaraDataSet *pFVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [4];
  FColor_u_0 local_84;
  FName local_80;
  FName local_78;
  FNiagaraDataSet *local_70;
  FName local_68;
  undefined8 local_58;
  FNiagaraTypeDefinitionHandle local_50 [4];
  
  iVar17 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar17 == 3) {
    return;
  }
  if (iVar17 == 4) {
    return;
  }
  pFVar14 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_);
  this_00 = (UNiagaraEmitter *)this->_padding_;
  if (this_00 == (UNiagaraEmitter *)0x0) {
    pTVar24 = &TStatId::TStatId_NAME_None;
  }
  else {
    TVar1 = ((this_00->StatID_GT).StatIdPtr)->Name;
    if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
      UNiagaraEmitter::GenerateStatID(this_00);
    }
    pTVar24 = (this_00->StatID_GT_CNC).StatIdPtr;
  }
  FVar25 = *(FName *)&pTVar24->Name;
  iVar17 = 0;
  bVar7 = false;
  bVar6 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar12 = false;
  bVar9 = false;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(pTVar24->StatDescriptionAnsi).Ptr);
      bVar7 = false;
      bVar6 = true;
      bVar12 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_80.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(pTVar24->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                   ,0x431);
        bVar7 = true;
        bVar6 = true;
        bVar12 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar9 = true;
      goto LAB_1492b05b6;
    }
  }
  bVar7 = bVar12;
  bVar6 = bVar9;
  bVar9 = false;
  local_78 = local_68;
  FVar25 = local_68;
LAB_1492b05b6:
  local_70 = (FNiagaraDataSet *)this->_padding_;
  bVar10 = (**(code **)((this->SpawnExecContext)._padding_ + 0x18))
                     (&this->SpawnExecContext,this->_padding_,pFVar14->SimTarget);
  bVar11 = (**(code **)((this->UpdateExecContext)._padding_ + 0x18))
                     (&this->UpdateExecContext,this->_padding_,pFVar14->SimTarget);
  bVar10 = bVar11 & bVar10 & 1;
  if ((pFVar14->SimTarget == GPUComputeSim) &&
     ((FNiagaraComputeExecutionContext *)this->_padding_ != (FNiagaraComputeExecutionContext *)0x0))
  {
    bVar12 = FNiagaraComputeExecutionContext::Tick
                       ((FNiagaraComputeExecutionContext *)this->_padding_,
                        (FNiagaraSystemInstance *)this->_padding_);
    bVar10 = bVar10 & bVar12;
  }
  pFVar2 = (this->EventInstanceData).Ptr;
  if (pFVar2 == (FEventInstanceData *)0x0) {
    pFVar19 = (FScriptContainerElement *)0x0;
  }
  else {
    iVar17 = (pFVar2->EventExecContexts).ArrayNum;
    pFVar19 = (pFVar2->EventExecContexts).AllocatorInstance.Data;
    if ((iVar17 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar20 = pFVar19 + (longlong)iVar17 * 0x2b0;
  for (; pFVar19 != pFVar20; pFVar19 = pFVar19 + 0x2b0) {
    bVar11 = (**(code **)(*(longlong *)pFVar19 + 0x18))(pFVar19,this->_padding_,pFVar14->SimTarget);
    bVar10 = bVar10 & bVar11;
  }
  if (bVar10 == 0) {
    ResetSimulation(this,true);
    if (*(int *)((longlong)&this->_padding_ + 4) != 4) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 4;
    }
  }
  else {
    if (this->TickCount == 0) {
      FNiagaraScriptExecutionContextBase::PostTick
                ((FNiagaraScriptExecutionContextBase *)&this->SpawnExecContext);
      FNiagaraScriptExecutionContextBase::PostTick
                ((FNiagaraScriptExecutionContextBase *)&this->UpdateExecContext);
      if ((pFVar14->SimTarget == GPUComputeSim) &&
         ((FNiagaraComputeExecutionContext *)this->_padding_ !=
          (FNiagaraComputeExecutionContext *)0x0)) {
        FNiagaraComputeExecutionContext::PostTick
                  ((FNiagaraComputeExecutionContext *)this->_padding_);
      }
      pFVar2 = (this->EventInstanceData).Ptr;
      if (pFVar2 == (FEventInstanceData *)0x0) {
        this_01 = (FNiagaraScriptExecutionContextBase *)0x0;
        iVar17 = 0;
      }
      else {
        iVar17 = (pFVar2->EventExecContexts).ArrayNum;
        this_01 = (FNiagaraScriptExecutionContextBase *)
                  (pFVar2->EventExecContexts).AllocatorInstance.Data;
        if ((iVar17 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar23 = (FNiagaraScriptExecutionContextBase *)((longlong)iVar17 * 0x2b0 + (longlong)this_01)
      ;
      for (; this_01 != pFVar23;
          this_01 = (FNiagaraScriptExecutionContextBase *)&this_01[1].VectorVMState) {
        FNiagaraScriptExecutionContextBase::PostTick(this_01);
      }
    }
    if (ZPULL(*(undefined4 *)&this->field_0x86c,0,1) != 0) {
      pFVar2 = (this->EventInstanceData).Ptr;
      *(uint *)&this->field_0x86c = *(undefined4 *)&this->field_0x86c & 0xfffffffe;
      if (pFVar2 != (FEventInstanceData *)0x0) {
        pFVar20 = (pFVar2->SpawnScriptEventDataSets).AllocatorInstance.Data;
        iVar17 = (pFVar2->SpawnScriptEventDataSets).ArrayNum;
        pFVar19 = pFVar20 + (longlong)iVar17 * 8;
        while( true ) {
          if ((pFVar2->SpawnScriptEventDataSets).ArrayNum != iVar17) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (pFVar20 == pFVar19) break;
          FNiagaraDataSet::ResetBuffers(*(FNiagaraDataSet **)pFVar20);
          pFVar20 = pFVar20 + 8;
        }
        pFVar2 = (this->EventInstanceData).Ptr;
        pFVar20 = (pFVar2->UpdateScriptEventDataSets).AllocatorInstance.Data;
        iVar17 = (pFVar2->UpdateScriptEventDataSets).ArrayNum;
        pFVar19 = pFVar20 + (longlong)iVar17 * 8;
        while( true ) {
          if ((pFVar2->UpdateScriptEventDataSets).ArrayNum != iVar17) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar20 == pFVar19) break;
          FNiagaraDataSet::ResetBuffers(*(FNiagaraDataSet **)pFVar20);
          pFVar20 = pFVar20 + 8;
        }
      }
      if (this->_padding_ == 0) {
        FNiagaraDataSet::ResetBuffers(local_70);
      }
      else {
        *(undefined1 *)(this->_padding_ + 0x1fd) = 1;
        lVar3 = this->_padding_;
        *(undefined8 *)(lVar3 + 0x150) = 0;
        *(undefined8 *)(lVar3 + 0x158) = 0;
        *(undefined8 *)(lVar3 + 0x17c) = 0;
        *(undefined8 *)(lVar3 + 0x184) = 0;
        *(undefined8 *)(lVar3 + 0x160) = 0;
        *(undefined8 *)(lVar3 + 0x18c) = 0;
        *(undefined8 *)(lVar3 + 0x194) = 0;
        *(undefined8 *)(lVar3 + 0x19c) = 0;
        *(undefined8 *)(lVar3 + 0x1a4) = 0;
        *(undefined8 *)(lVar3 + 0x168) = 0;
        *(undefined8 *)(lVar3 + 0x1ac) = 0;
        *(undefined8 *)(lVar3 + 0x1b4) = 0;
        *(undefined8 *)(lVar3 + 0x1bc) = 0;
        *(undefined8 *)(lVar3 + 0x1c4) = 0;
        *(undefined8 *)(lVar3 + 0x170) = 0;
        *(undefined8 *)(lVar3 + 0x1cc) = 0;
        *(undefined8 *)(lVar3 + 0x1d4) = 0;
        *(undefined8 *)(lVar3 + 0x1dc) = 0;
        *(undefined8 *)(lVar3 + 0x1e4) = 0;
        *(undefined4 *)(lVar3 + 0x178) = 0;
        *(undefined8 *)(lVar3 + 0x1ec) = 0;
        *(undefined8 *)(lVar3 + 500) = 0;
      }
    }
    uVar18 = *(uint *)&this->field_0x86c;
    *(uint *)&this->field_0x86c = (uVar18 * 2 ^ uVar18) & 4 ^ uVar18;
    if ((this->_padding_ != 0) && (((uint)this->_padding_ >> 2 & 1) != 0)) {
      plVar4 = *(longlong **)(this->_padding_ + 0x58);
      if (plVar4 != (longlong *)0x0) {
        pFVar14 = FVersionedNiagaraEmitter::GetEmitterData
                            ((FVersionedNiagaraEmitter *)&this->_padding_);
        iVar17 = (pFVar14->RendererBindingsExternalObjects).ArrayNum;
        pFVar26 = (FNiagaraDataSet *)
                  (pFVar14->RendererBindingsExternalObjects).AllocatorInstance.Data;
        local_70 = (FNiagaraDataSet *)(&pFVar26->NumSpawnedIDs + (longlong)iVar17 * 5);
        while( true ) {
          pFVar8 = local_70;
          if ((pFVar14->RendererBindingsExternalObjects).ArrayNum != iVar17) {
            local_88[0] = 0;
            `TCheckedPointerIterator<FNiagaraExternalUObjectInfo,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_88);
          }
          FVar25 = local_78;
          if (pFVar26 == pFVar8) break;
          pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                              ((FNiagaraTypeDefinitionHandle *)&pFVar26->CompiledData);
          local_58 = *(undefined8 *)((longlong)&(pFVar26->CompiledData).StructPtr + 4);
          local_50[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_50,pFVar15)
          ;
          puVar16 = (uint *)(**(code **)(*plVar4 + 0x58))(plVar4,&local_58,0);
          if (puVar16 == (uint *)0x0) {
            uVar18 = 0xffffffff;
          }
          else {
            uVar18 = *puVar16;
          }
          puVar16 = (uint *)(**(code **)(this->_padding_ + 0x58))(&this->_padding_,pFVar26);
          if (puVar16 == (uint *)0x0) {
            uVar22 = 0xffffffff;
          }
          else {
            uVar22 = *puVar16;
          }
          if ((uVar18 != 0xffffffff) && (uVar22 != 0xffffffff)) {
            if (((int)uVar18 < 0) || ((int)plVar4[9] <= (int)uVar18)) {
              pUVar21 = (UObject *)0x0;
            }
            else {
              uVar13 = 0;
              if ((int)uVar18 < (int)plVar4[9]) {
                uVar13 = ~uVar18 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pUVar21 = *(UObject **)(plVar4[8] + (longlong)(int)uVar18 * 8);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar21 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar21);
              }
            }
            uVar18 = 0;
            if ((int)uVar22 < (int)this->_padding_) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = this->_padding_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar21);
            }
            *(UObject **)(lVar3 + (longlong)(int)uVar22 * 8) = pUVar21;
            *(uint *)&this->_padding_ = (uint)this->_padding_ | 4;
          }
          pFVar26 = (FNiagaraDataSet *)
                    ((longlong)&(pFVar26->FreeIDsTable).AllocatorInstance.Data + 4);
        }
      }
      FNiagaraParameterStore::Tick((FNiagaraParameterStore *)&this->_padding_);
    }
    iVar17 = this->TickCount + 1;
    this->TickCount = iVar17;
    *(int *)(this->_padding_ + 0x28) = iVar17;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// RequiresPersistentIDs @ 1492b4450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
FNiagaraEmitterInstanceImpl::RequiresPersistentIDs(FNiagaraEmitterInstanceImpl *this)

{
  longlong *plVar1;
  FNiagaraEmitterHandle *pFVar2;
  FVersionedNiagaraEmitterData *pFVar3;
  longlong *plVar4;
  
  pFVar2 = FNiagaraEmitterInstance::GetEmitterHandle((FNiagaraEmitterInstance *)this);
  if (pFVar2->EmitterMode == Standard) {
    pFVar3 = FVersionedNiagaraEmitter::GetEmitterData(&pFVar2->VersionedInstance);
  }
  else {
    pFVar3 = (FVersionedNiagaraEmitterData *)0x0;
  }
  if (pFVar3->bRequiresPersistentIDs == 0) {
    plVar1 = *(longlong **)(this->_padding_ + 8);
    plVar4 = (longlong *)*plVar1;
    plVar1 = (longlong *)((longlong)plVar4 + (longlong)(int)plVar1[1] * 0xc);
    while( true ) {
      if (plVar4 == plVar1) {
        return false;
      }
      if ((*plVar4 == INiagaraModule::Particles_ID._padding_) &&
         ((int)plVar4[1] == (int)INiagaraModule::Particles_ID._padding_)) break;
      plVar4 = (longlong *)((longlong)plVar4 + 0xc);
    }
  }
  return true;
}

// ResetSimulation @ 1492b4930

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstanceImpl::ResetSimulation(FNiagaraEmitterInstanceImpl *this,bool param_1)

{
  undefined1 *puVar1;
  TMap<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FNiagaraEmitterHandle *pFVar6;
  FString *pFVar7;
  FVersionedNiagaraEmitterData *pFVar8;
  FName local_res8;
  FName local_res18;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this->EmitterAge = 0.0;
  this->TickCount = 0;
  iVar5 = rand();
  *(undefined1 *)&this->_padding_ = 0;
  this_00 = &this->ParticlesWithComponents;
  this->InstanceSeed = iVar5;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar3;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  bVar4 = 1 < *(int *)&(this->ParticlesWithComponents).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ParticlesWithComponents).field_0x8);
  puVar1 = &(this->ParticlesWithComponents).field_0xc;
  *(undefined4 *)&(this->ParticlesWithComponents).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ParticlesWithComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParticlesWithComponents).field_0x34 = 0;
  iVar5 = *(int *)&(this->ParticlesWithComponents).field_0x2c;
  *(undefined4 *)&(this->ParticlesWithComponents).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->ParticlesWithComponents).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ParticlesWithComponents).field_0x10,0
              );
  }
  if (bVar4) {
    *(undefined4 *)&(this->ParticlesWithComponents).field_0x48 = 1;
    TSet<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if ((100 < this->MinOverallocation) && (GbNiagaraShowAllocationWarnings != 0)) {
    local_res8 = *(FName *)(*(longlong *)(this->_padding_ + 0x50) + 0x18);
    ::FName::ToString(&local_res8,&local_38);
    pFVar6 = FNiagaraEmitterInstance::GetEmitterHandle((FNiagaraEmitterInstance *)this);
    local_res18 = pFVar6->Name;
    pFVar7 = ::FName::ToString(&local_res18,&local_28);
    ::FString::FString(&local_48,"::");
    ::FString::ConcatFF(&local_58,&local_38,&local_48);
    ::FString::ConcatFF(&local_68,&local_58,pFVar7);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)((longlong)&this->_padding_ + 4) != 4) {
    pFVar8 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_);
    if ((pFVar8 == (FVersionedNiagaraEmitterData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EmitterData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                           ,0x1ef,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = *(int *)((longlong)&this->_padding_ + 4);
    this->RandomSeed = *(int *)(this->_padding_ + 0x100) + pFVar8->RandomSeed;
    if (iVar5 != 4) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    }
    if (param_1) {
      this->bResetPending = 1;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    }
  }
  return;
}

// SetEmitterEnable @ 1492b54a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstanceImpl::SetEmitterEnable(FNiagaraEmitterInstanceImpl *this,bool param_1)

{
  this->bAllowSpawning_GT = 0;
  *(uint *)&this->field_0x86c = *(uint *)&this->field_0x86c | (uint)param_1 * 2;
  return;
}

// SetExecutionState @ 1492b5560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstanceImpl::SetExecutionState
          (FNiagaraEmitterInstanceImpl *this,ENiagaraExecutionState param_1)

{
  bool bVar1;
  ENiagaraExecutionState local_res10 [6];
  ENiagaraExecutionState *local_18;
  FNiagaraEmitterInstanceImpl *local_10;
  
  if (Disabled < param_1) {
    local_18 = local_res10;
    local_res10[0] = param_1;
    local_10 = this;
    bVar1 = `FNiagaraEmitterInstanceImpl::SetExecutionState'::__l3::<lambda_1>::operator()
                      (&local_18);
    param_1 = local_res10[0];
    if (!bVar1) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
      return;
    }
  }
  if (*(int *)((longlong)&this->_padding_ + 4) != 4) {
    *(ENiagaraExecutionState *)((longlong)&this->_padding_ + 4) = param_1;
  }
  return;
}

// SetParticleComponentActive @ 1492b5c80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstanceImpl::SetParticleComponentActive
          (FNiagaraEmitterInstanceImpl *this,FObjectKey param_1,int param_2)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_res8 [2];
  FObjectKey local_res10;
  int local_res18 [4];
  
  uVar3 = param_1.ObjectSerialNumber;
  uVar1 = param_1.ObjectIndex - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar1) - uVar3 ^ uVar1 << 8;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xd;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 5;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 << 10;
  local_res10 = param_1;
  local_res18[0] = param_2;
  this_00 = TMapBase<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
            ::FindOrAddImpl<FObjectKey_const_&>
                      ((TMapBase<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                        *)&this->ParticlesWithComponents,(uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xf,
                       &local_res10);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (this_00,local_res8,(bool *)local_res18);
  return;
}

// ShouldTick @ 1492b62e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNiagaraEmitterInstanceImpl::ShouldTick(FNiagaraEmitterInstanceImpl *this)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)((longlong)&this->_padding_ + 4) != 0) {
    lVar1 = this->_padding_;
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(this->_padding_ + 0x78);
      if (lVar1 == 0) {
        return false;
      }
      iVar2 = *(int *)(lVar1 + 0x124);
    }
    else if (*(uint *)(lVar1 + 0x204) < *(uint *)(lVar1 + 0x200)) {
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    }
    else {
      iVar2 = *(int *)(lVar1 + 0x234);
    }
    if (iVar2 < 1) {
      return false;
    }
  }
  return true;
}

// Tick @ 1492b7e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstanceImpl::Tick(FNiagaraEmitterInstanceImpl *this,float param_1)

{
  UNiagaraEmitter *this_00;
  TAtomic<FMinimalName> TVar1;
  FNiagaraDataSet *this_01;
  FNiagaraGpuComputeDispatchInterface *pFVar2;
  code *pcVar3;
  FEventInstanceData *pFVar4;
  float *pfVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  FName FVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  TStatId TVar19;
  FVersionedNiagaraEmitterData *pFVar20;
  FNiagaraDataBuffer *pFVar21;
  FNiagaraDataSet *pFVar22;
  FNiagaraEmitterHandle *pFVar23;
  FString *pFVar24;
  FNiagaraEmitterParameters *pFVar25;
  FNiagaraScriptDebuggerInfo *pFVar26;
  FNiagaraEmitterCompiledData *this_02;
  FNiagaraDataSetCompiledData *pFVar27;
  FRenderCommandList *pFVar28;
  FCommandList *pFVar29;
  FRenderCommandTag *pFVar30;
  UObject *pUVar31;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> *pTVar32;
  FName *pFVar33;
  FThreadSafeStaticStat<FStat_STAT_NiagaraEventHandle> FVar34;
  FThreadSafeStaticStat<FStat_STAT_NiagaraNumParticles> FVar35;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  code **ppcVar36;
  uint *puVar37;
  undefined ***pppuVar38;
  FScriptContainerElement *pFVar39;
  TStatIdData *pTVar40;
  TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar41;
  longlong lVar42;
  FNiagaraScriptExecutionContext *this_05;
  ForElementType<int> *pFVar43;
  FEventInstanceData *pFVar44;
  FNiagaraScriptExecutionContextBase *this_06;
  ForElementType<int> *pFVar45;
  FScriptContainerElement *pFVar46;
  int iVar47;
  FNameEntryId FVar48;
  uint *puVar49;
  FName FVar50;
  ulonglong uVar51;
  FNiagaraScriptExecutionContextBase *pFVar52;
  undefined4 *puVar53;
  ulonglong uVar54;
  uint uVar55;
  int iVar56;
  FNiagaraEventScriptProperties *pFVar57;
  ulonglong uVar58;
  undefined4 *puVar59;
  uchar auVar60 [8];
  uint uVar61;
  uint uVar62;
  ulonglong uVar63;
  longlong lVar64;
  undefined1 auStackY_998 [32];
  longlong local_930;
  undefined4 *local_928;
  longlong local_920;
  longlong local_918;
  longlong local_910;
  undefined1 local_908;
  undefined1 local_907;
  undefined1 local_906;
  undefined1 local_905;
  undefined1 local_904;
  undefined1 local_903;
  undefined1 local_902;
  undefined1 local_901;
  float local_900 [2];
  undefined8 local_8f8;
  undefined8 local_8f0;
  FName local_8e8;
  longlong local_8e0;
  uint local_8d8;
  uint uStack_8d4;
  FVersionedNiagaraEmitterData *local_8d0;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> local_8c8;
  longlong local_8b8;
  undefined1 local_8b0;
  undefined1 local_8af [7];
  FName local_8a8;
  FName local_8a0;
  FCycleCounter local_898;
  FCycleCounter local_888;
  FCycleCounter local_878;
  FCycleCounter local_868;
  FCycleCounter local_858;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> local_848;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> local_838;
  FColor_u_0 local_828;
  FColor_u_0 local_824;
  FName local_820;
  byte local_818;
  FScriptContainerElement *local_810;
  FColor_u_0 local_808 [2];
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> local_800;
  FName local_7f0;
  FName local_7e8;
  FName local_7e0;
  FName local_7d8;
  FName local_7d0;
  FName local_7c8;
  FName local_7c0;
  FName local_7b8;
  FName local_7b0;
  FName local_7a8;
  FName local_798;
  FName local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FGuid local_748;
  FGuid local_738;
  FString local_728;
  FGuid local_718;
  FString local_708;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  char *pcStack_6f0;
  char *local_6e8;
  FName local_6d8;
  FName local_6d0;
  FName local_6c8;
  FName local_6c0;
  FName local_6b8;
  FString local_6b0;
  FStatMessage local_6a0;
  FSourceLocation local_688;
  FSourceLocation local_668;
  FSourceLocation local_648;
  FSourceLocation local_628;
  FString local_608;
  TArrayView<FNiagaraScriptExecutionContext,int> local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FNiagaraDataSet *local_548;
  FNiagaraEmitterInstanceImpl *local_540;
  float *local_538;
  FScriptExecutionConstantBufferTable *local_530;
  longlong *local_528;
  FName local_510;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> local_4a8;
  FGuid local_498;
  FGuid local_488;
  FString local_478;
  FString local_468 [2];
  FName local_448;
  FName local_440 [3];
  source_location local_428 [2];
  code *local_3f8 [2];
  undefined **local_3e8;
  longlong lStack_3e0;
  int local_3d8;
  undefined4 uStack_3d4;
  undefined ***local_3d0;
  code *local_3c8 [2];
  code *local_3b8 [3];
  code **local_3a0;
  undefined1 local_398 [16];
  undefined **local_388;
  longlong lStack_380;
  undefined8 local_378;
  undefined ***local_370;
  byte local_368;
  code *local_358 [5];
  code **local_330;
  uchar local_328;
  FScriptExecutionConstantBufferTable local_318;
  FScriptExecutionConstantBufferTable local_268;
  FScriptExecutionConstantBufferTable local_1b8;
  FScriptExecutionConstantBufferTable local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_998;
  local_900[0] = param_1;
  TVar19 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraTick,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_NiagaraTick,1> *)
                      &StatPtr_STAT_NiagaraTick);
  uVar54 = 0;
  local_688.Impl._Line = 0x4ba;
  local_688.Impl._Column = 2;
  local_688.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
  ;
  local_858.StatId.ComparisonIndex.Value = 0;
  local_858.StatId.Number = 0;
  local_858.EmittedEvent = 0;
  local_688.Impl._Function = "void __cdecl FNiagaraEmitterInstanceImpl::Tick(float)";
  FCycleCounter::Start
            (&local_858,*(TStatIdData **)&(TVar19.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_688);
  TVar19 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraTick,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_NiagaraTick,1> *)
                      &StatPtr_STAT_NiagaraTick);
  FVar50 = (FName)&this->_padding_;
  local_8a8 = FVar50;
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_820,(UObjectBaseUtility *)this->_padding_,
             *(TStatIdData **)&(TVar19.StatIdPtr)->Name);
  this_00 = *(UNiagaraEmitter **)FVar50;
  if (this_00 == (UNiagaraEmitter *)0x0) {
    pTVar40 = &TStatId::TStatId_NAME_None;
  }
  else {
    TVar1 = ((this_00->StatID_GT).StatIdPtr)->Name;
    if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
      UNiagaraEmitter::GenerateStatID(this_00);
    }
    pTVar40 = (this_00->StatID_GT_CNC).StatIdPtr;
  }
  local_6f8 = 0x4c1;
  uStack_6f4 = 0x26;
  pcStack_6f0 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
  ;
  local_428[0]._Line = 0x4c1;
  local_428[0]._Column = 0x26;
  local_6e8 = "void __cdecl FNiagaraEmitterInstanceImpl::Tick(float)";
  local_428[0]._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
  ;
  local_428[0]._Function = "void __cdecl FNiagaraEmitterInstanceImpl::Tick(float)";
  local_868.StatId.ComparisonIndex.Value = 0;
  local_868.StatId.Number = 0;
  local_868.EmittedEvent = 0;
  FCycleCounter::Start(&local_868,(TStatId)pTVar40,None,false,(FSourceLocation *)local_428);
  iVar18 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar18 == 4) goto LAB_1492bba01;
  if (iVar18 == 3) {
    if ((FNiagaraComputeExecutionContext *)this->_padding_ != (FNiagaraComputeExecutionContext *)0x0
       ) {
      FNiagaraComputeExecutionContext::Reset
                ((FNiagaraComputeExecutionContext *)this->_padding_,
                 (this->ComputeDispatchInterfacePtr).Object);
    }
    FNiagaraDataSet::ResetBuffers((FNiagaraDataSet *)this->_padding_);
    pFVar44 = (this->EventInstanceData).Ptr;
    if (pFVar44 != (FEventInstanceData *)0x0) {
      pFVar39 = (pFVar44->UpdateScriptEventDataSets).AllocatorInstance.Data;
      iVar18 = (pFVar44->UpdateScriptEventDataSets).ArrayNum;
      pFVar46 = pFVar39 + (longlong)iVar18 * 8;
      while( true ) {
        if ((pFVar44->UpdateScriptEventDataSets).ArrayNum != iVar18) {
          `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_8af);
        }
        if (pFVar39 == pFVar46) break;
        FNiagaraDataSet::ResetBuffers(*(FNiagaraDataSet **)pFVar39);
        pFVar39 = pFVar39 + 8;
      }
      pFVar44 = (this->EventInstanceData).Ptr;
      pFVar39 = (pFVar44->SpawnScriptEventDataSets).AllocatorInstance.Data;
      iVar18 = (pFVar44->SpawnScriptEventDataSets).ArrayNum;
      pFVar46 = pFVar39 + (longlong)iVar18 * 8;
      while( true ) {
        if ((pFVar44->SpawnScriptEventDataSets).ArrayNum != iVar18) {
          `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_8b0);
        }
        if (pFVar39 == pFVar46) break;
        FNiagaraDataSet::ResetBuffers(*(FNiagaraDataSet **)pFVar39);
        pFVar39 = pFVar39 + 8;
      }
    }
    goto LAB_1492bba01;
  }
  if (GbTriggerCrash != 0) {
    GbTriggerCrash = 0;
    NiagaraTestCrash();
  }
  iVar18 = *(int *)((longlong)&this->_padding_ + 4);
  this_01 = (FNiagaraDataSet *)this->_padding_;
  this->EmitterAge = local_900[0] + this->EmitterAge;
  if (iVar18 == 2) {
    if ((FNiagaraComputeExecutionContext *)this->_padding_ != (FNiagaraComputeExecutionContext *)0x0
       ) {
      FNiagaraComputeExecutionContext::Reset
                ((FNiagaraComputeExecutionContext *)this->_padding_,
                 (this->ComputeDispatchInterfacePtr).Object);
    }
    FNiagaraDataSet::ResetBuffers(this_01);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
    goto LAB_1492bba01;
  }
  pFVar20 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)FVar50);
  local_8d0 = pFVar20;
  if (((pFVar20->SimTarget == CPUSim) &&
      (pFVar21 = FNiagaraDataSet::GetCurrentDataChecked(this_01), pFVar21->NumInstances == 0)) &&
     (*(int *)((longlong)&this->_padding_ + 4) != 0)) {
    FNiagaraDataSet::ResetBuffers(this_01);
    goto LAB_1492bba01;
  }
  local_8b8 = *(longlong *)(this->_padding_ + 0x50);
  if (((GbDumpParticleData != 0) || ((*(byte *)(local_8b8 + 0x6c) & 2) != 0)) &&
     (4 < (byte)LogNiagara._0_1_)) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)FVar50,&local_508,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)FVar50,&local_4f8,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar44 = (this->EventInstanceData).Ptr;
  if (pFVar44 != (FEventInstanceData *)0x0) {
    local_8e8 = (FName)(longlong)(pFVar20->EventHandlerScriptProps).ArrayNum;
    pFVar44->EventSpawnTotal = 0;
    uVar51 = uVar54;
    uVar58 = uVar54;
    uVar63 = uVar54;
    if (0 < (longlong)local_8e8) {
      do {
        uVar61 = (uint)uVar54;
        uVar16 = 0;
        if ((int)uVar61 < (pFVar20->EventHandlerScriptProps).ArrayNum) {
          uVar16 = ~uVar61 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar44 = (this->EventInstanceData).Ptr;
        pFVar57 = (FNiagaraEventScriptProperties *)
                  ((pFVar20->EventHandlerScriptProps).AllocatorInstance.Data + uVar51);
        uVar16 = 0;
        if ((int)uVar61 < (pFVar44->EventHandlingInfo).ArrayNum) {
          uVar16 = ~uVar61 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar41 = (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                  ((pFVar44->EventHandlingInfo).AllocatorInstance.Data + uVar63);
        pTVar41[1].AllocatorInstance.InlineData[0] = '\0';
        pTVar41[1].AllocatorInstance.InlineData[1] = '\0';
        pTVar41[1].AllocatorInstance.InlineData[2] = '\0';
        pTVar41[1].AllocatorInstance.InlineData[3] = '\0';
        pTVar41->ArrayNum = 0;
        if (pTVar41->ArrayMax < 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,0,(ForElementType<int> *)pTVar41,0,&pTVar41->ArrayMax);
        }
        if ((this->bAllowSpawning_CNC != 0) &&
           (pFVar22 = FNiagaraSystemInstance::GetEventDataSet
                                ((FNiagaraSystemInstance *)this->_padding_,
                                 *(FName *)(pTVar41[1].AllocatorInstance.InlineData + 0x20),
                                 pFVar57->SourceEventName), pFVar22 != (FNiagaraDataSet *)0x0)) {
          pFVar21 = FNiagaraDataSet::GetCurrentDataChecked(pFVar22);
          TRefCountPtr<FNiagaraDataBuffer>::operator=
                    ((TRefCountPtr<FNiagaraDataBuffer> *)
                     (pTVar41[1].AllocatorInstance.InlineData + 8),pFVar21);
          uVar16 = CalculateEventSpawnCount(this,pFVar57,pTVar41,pFVar22);
          *(uint *)pTVar41[1].AllocatorInstance.InlineData =
               *(int *)pTVar41[1].AllocatorInstance.InlineData + uVar16;
          piVar6 = &((this->EventInstanceData).Ptr)->EventSpawnTotal;
          *piVar6 = *piVar6 + uVar16;
        }
        uVar54 = (ulonglong)(uVar61 + 1);
        uVar58 = uVar58 + 1;
        uVar51 = uVar51 + 0x58;
        pFVar20 = local_8d0;
        FVar50 = local_8a8;
        uVar63 = uVar63 + 0x78;
      } while ((longlong)uVar58 < (longlong)local_8e8);
    }
  }
  uVar16 = 0;
  local_8f8 = (FNiagaraDataBuffer *)((ulonglong)local_8f8._4_4_ << 0x20);
  uVar61 = uVar16;
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->bAllowSpawning_CNC != 0)) {
    pFVar46 = (this->SpawnInfos).AllocatorInstance.Data;
    iVar18 = (this->SpawnInfos).ArrayNum;
    pFVar39 = pFVar46 + (longlong)iVar18 * 0x10;
    uVar61 = 0;
    while( true ) {
      if ((this->SpawnInfos).ArrayNum != iVar18) {
        local_908 = 0;
        `TCheckedPointerIterator<FNiagaraSpawnInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_908);
      }
      if (pFVar46 == pFVar39) break;
      if (0 < *(int *)pFVar46) {
        uVar61 = uVar61 + *(int *)pFVar46;
      }
      pFVar46 = pFVar46 + 0x10;
    }
    local_8f8 = (FNiagaraDataBuffer *)CONCAT44(local_8f8._4_4_,uVar61);
  }
  pFVar44 = (this->EventInstanceData).Ptr;
  uVar55 = uVar16;
  if (pFVar44 != (FEventInstanceData *)0x0) {
    uVar55 = pFVar44->EventSpawnTotal;
  }
  lVar64 = this->_padding_;
  if (lVar64 == 0) {
    lVar64 = *(longlong *)(this->_padding_ + 0x78);
    if (lVar64 != 0) {
      uVar16 = *(uint *)(lVar64 + 0x124);
    }
  }
  else if (*(uint *)(lVar64 + 0x204) < *(uint *)(lVar64 + 0x200)) {
    uVar16 = *(uint *)((longlong)&this->_padding_ + 4);
  }
  else {
    uVar16 = *(uint *)(lVar64 + 0x234);
  }
  uVar17 = FVersionedNiagaraEmitterData::GetMaxParticleCountEstimate(local_8d0);
  fVar11 = __real_40a00000;
  uVar61 = uVar16 + uVar55 + uVar61;
  uVar62 = uVar61;
  if ((int)uVar61 < (int)uVar17) {
    uVar62 = uVar17;
  }
  if (this->MaxInstanceCount < uVar62) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)FVar50,&local_4e8,(UObject *)0x0,None);
    ::FString::PrintfImpl
              (&local_588,L"%s has exceeded the maximum particle count (%u), requested (%d)");
    UEngine::AddOnScreenDebugMessage
              (GEngine,(ulong64)this,fVar11,FColor::Yellow,&local_588,true,
               &UE::Math::TVector2<double>::UnitVector);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
    if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar20 = local_8d0;
  uVar17 = this->MaxInstanceCount;
  if (uVar62 < this->MaxInstanceCount) {
    uVar17 = uVar62;
  }
  if (this->MaxAllocationCount < (int)uVar17) {
    this->ReallocationCount = this->ReallocationCount + 1;
    this->MaxAllocationCount = uVar17;
    iVar18 = FVersionedNiagaraEmitterData::AddRuntimeAllocation(local_8d0,(ulong64)this,uVar17);
    if (((GbNiagaraShowAllocationWarnings != 0) && (4 < iVar18)) && (this->ReallocationCount == 3))
    {
      local_6d8 = *(FName *)(local_8b8 + 0x18);
      ::FName::ToString(&local_6d8,&local_608);
      pFVar23 = FNiagaraEmitterInstance::GetEmitterHandle((FNiagaraEmitterInstance *)this);
      local_6d0 = pFVar23->Name;
      pFVar24 = ::FName::ToString(&local_6d0,&local_4d8);
      ::FString::FString(&local_568,"::");
      ::FString::ConcatFF(&local_578,&local_608,&local_568);
      ::FString::ConcatFF(&local_6b0,&local_578,pFVar24);
      if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_578.Data.AllocatorInstance.Data);
      }
      if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Data.AllocatorInstance.Data);
      }
      if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
      }
      if (2 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
      }
      if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_608.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar18 = uVar17 - uVar61;
  if ((-1 < iVar18) && ((this->MinOverallocation < 0 || (iVar18 < this->MinOverallocation)))) {
    this->MinOverallocation = iVar18;
  }
  TVar19 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraConstants,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_NiagaraConstants,1> *)
                      &StatPtr_STAT_NiagaraConstants);
  local_668.Impl._Line = 0x549;
  local_668.Impl._Column = 3;
  local_668.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
  ;
  local_898.StatId.ComparisonIndex.Value = 0;
  local_898.StatId.Number = 0;
  local_668.Impl._Function = "void __cdecl FNiagaraEmitterInstanceImpl::Tick(float)";
  local_898.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_898,*(TStatIdData **)&(TVar19.StatIdPtr)->Name,Verbose|CycleStat|ClearEveryFrame
             ,false,&local_668);
  pFVar25 = FNiagaraSystemInstance::EditEmitterParameters
                      ((FNiagaraSystemInstance *)this->_padding_,(int)this->_padding_);
  pFVar25->EmitterTotalSpawnedParticles = *(int *)((longlong)&this->_padding_ + 4);
  pFVar25->EmitterAge = this->EmitterAge;
  pFVar25->EmitterRandomSeed = this->RandomSeed;
  pFVar25->EmitterInstanceSeed = this->InstanceSeed;
  if ((local_898.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_898.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_898.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_898.StatId,CycleScopeEnd);
  }
  local_898.EmittedEvent = '\0';
  if (pFVar20->SimTarget == GPUComputeSim) {
    if (this->_padding_ != 0) {
      if ((*(FNiagaraShaderScript **)(this->_padding_ + 0x68) !=
           (((pFVar20->GPUComputeScript).field0_0x0.DebugPtr)->ScriptResource).Object) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUExecContext->GPUScript_RT == EmitterData->GetGPUComputeScript()->GetRenderThreadScript()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                              ,0x556,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(FNiagaraShaderScript **)(this->_padding_ + 0x68) =
           (((pFVar20->GPUComputeScript).field0_0x0.DebugPtr)->ScriptResource).Object;
      bVar14 = FNiagaraSystemInstance::ShouldCaptureThisFrame
                         ((FNiagaraSystemInstance *)this->_padding_);
      if (bVar14) {
        local_718.A = 0;
        local_718.B = 0;
        local_718.C = 0;
        local_718.D = 0;
        FNiagaraSystemInstance::GetActiveCaptureWrite
                  ((FNiagaraSystemInstance *)this->_padding_,&local_800,&this->CachedIDName,
                   ParticleGPUComputeScript,&local_718);
        if ((local_800.Object != (FNiagaraScriptDebuggerInfo *)0x0) &&
           ((this->ComputeDispatchInterfacePtr).Object != (FNiagaraGpuComputeDispatchInterface *)0x0
           )) {
          lVar64 = this->_padding_;
          pFVar26 = TSharedPtr<FNiagaraScriptDebuggerInfo,1>::operator->(&local_800);
          FNiagaraParameterStore::operator=
                    (&pFVar26->Parameters,(FNiagaraParameterStore *)(lVar64 + 0x80));
          pFVar26 = TSharedPtr<FNiagaraScriptDebuggerInfo,1>::operator->(&local_800);
          this_02 = TSharedPtr<FNiagaraEmitterCompiledData_const_,1>::operator->
                              (&this->EmitterCompiledData);
          pFVar27 = FNiagaraEmitterCompiledData::GetGPUCaptureDataSetCompiledData(this_02);
          FNiagaraDataSet::Init(&pFVar26->Frame,pFVar27,0);
          FVar13.ReferenceController = local_800.SharedReferenceCount.ReferenceController;
          pcVar7 = (code *)this->_padding_;
          pFVar2 = (this->ComputeDispatchInterfacePtr).Object;
          pcVar3 = *(code **)(this->_padding_ + 0x120);
          if (local_800.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_800.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_800.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_3c8[0] = (code *)0x0;
          local_3a0 = FMemory::Malloc(0x30,8);
          local_3a0[1] = (code *)pFVar2;
          local_3a0[2] = pcVar3;
          *local_3a0 = (code *)&UE::Core::Private::Function::
                                TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'[::D]::<lambda_1>,1,1>
                                ::_vftable_;
          local_3a0[3] = (code *)local_800.Object;
          local_3a0[4] = (code *)FVar13.ReferenceController;
          local_3a0[5] = pcVar7;
          if (local_3a0 != (code **)&DAT_fffffffffffffff8) {
            local_3c8[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`FNiagaraEmitterInstanceImpl::Tick'[::D]::<lambda_1>,void,FRHICommandListImmediate_&>
                           ::Call;
          }
          pFVar28 = FRenderCommandList::GetInstanceTLS();
          if (pFVar28 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_FNiagaraEmitterInstanceImpl::Tick_[::D]::TSTR_NiagaraReadbackGpuSim1383>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_3c8);
          }
          else {
            pFVar29 = FRenderCommandList::GetRenderThread(pFVar28);
            local_358[0] = local_3c8[0];
            local_330 = local_3a0;
            local_3a0 = (code **)0x0;
            local_358[2] = local_3b8[0];
            local_358[3] = local_3b8[1];
            local_358[4] = local_3b8[2];
            local_3c8[0] = (code *)0x0;
            local_328 = '\x02';
            pFVar30 = (FRenderCommandTag *)
                      TRenderCommandTag<`FNiagaraEmitterInstanceImpl::Tick'[::D]::TSTR_NiagaraReadbackGpuSim1383>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (pFVar29,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_358,pFVar30);
            TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
            ::
            ~TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_358);
          }
          if (local_3c8[0] != (code *)0x0) {
            ppcVar36 = local_3c8 + 2;
            if (local_3a0 != (code **)0x0) {
              ppcVar36 = local_3a0;
            }
            (**(code **)(*ppcVar36 + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_800.SharedReferenceCount.ReferenceController);
      }
      uVar61 = 0;
      lVar64 = this->_padding_;
      puVar49 = (uint *)(lVar64 + 0x150);
      *puVar49 = uVar55;
      *(uint *)(lVar64 + 0x158) = uVar17;
      *(undefined4 *)(lVar64 + 0x154) = 0;
      uVar16 = 0;
      if (((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->bAllowSpawning_CNC != 0)) &&
         (uVar16 = uVar61, 0 < (this->SpawnInfos).ArrayNum)) {
        puVar53 = (undefined4 *)(lVar64 + 0x15c);
        lVar42 = 0;
        puVar59 = (undefined4 *)(lVar64 + 0x180);
        local_928 = puVar53;
        uVar55 = uVar61;
        do {
          uVar62 = 0;
          if ((int)uVar61 < (this->SpawnInfos).ArrayNum) {
            uVar62 = ~uVar61 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             puVar53 = local_928, bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar46 = (this->SpawnInfos).AllocatorInstance.Data;
          if (0 < *(int *)(pFVar46 + lVar42)) {
            if (7 < uVar16) {
              ::FString::PrintfImpl
                        (&local_778,
                         L"%s Exceeded Gpu spawn info count, see NIAGARA_MAX_GPU_SPAWN_INFOS for more information!"
                        );
              if (2 < (byte)LogNiagara._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              }
              UEngine::AddOnScreenDebugMessage
                        (GEngine,(ulong64)this,fVar11,FColor::Yellow,&local_778,true,
                         &UE::Math::TVector2<double>::UnitVector);
              if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_778.Data.AllocatorInstance.Data);
              }
              goto LAB_1492b8d45;
            }
            uVar55 = uVar55 + *(int *)(pFVar46 + lVar42);
            iVar18 = local_8d0->MaxGPUParticlesSpawnPerFrame;
            if (local_8d0->MaxGPUParticlesSpawnPerFrame < 1) {
              iVar18 = GMaxNiagaraGPUParticlesSpawnPerFrame;
            }
            if (iVar18 < (int)uVar55) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this->_padding_,&local_4c8,(UObject *)0x0,None);
              ::FString::PrintfImpl
                        (&local_708,
                         L"%s has attempted to execeed max GPU per frame spawn! | Max: %d | Requested: %d | SpawnInfoEntry: %d"
                        );
              if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
              }
              if (2 < (byte)LogNiagara._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              }
              UEngine::AddOnScreenDebugMessage
                        (GEngine,(ulong64)this,fVar11,FColor::Yellow,&local_708,true,
                         &UE::Math::TVector2<double>::UnitVector);
              if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_708.Data.AllocatorInstance.Data);
              }
              goto LAB_1492b8b63;
            }
            uVar16 = uVar16 + 1;
            puVar59[-1] = *(undefined4 *)(pFVar46 + lVar42 + 8);
            *puVar59 = *(undefined4 *)(pFVar46 + lVar42 + 4);
            puVar59[1] = *(undefined4 *)(pFVar46 + lVar42 + 0xc);
            puVar59[2] = *(undefined4 *)(lVar64 + 0x154);
            *(int *)(lVar64 + 0x154) = *(int *)(lVar64 + 0x154) + *(int *)(pFVar46 + lVar42);
            *puVar53 = *(undefined4 *)(lVar64 + 0x154);
            puVar53 = puVar53 + 1;
            puVar59 = puVar59 + 4;
            local_928 = puVar53;
          }
          uVar61 = uVar61 + 1;
          piVar6 = (int *)((longlong)&this->_padding_ + 4);
          *piVar6 = *piVar6 + *(int *)(pFVar46 + lVar42);
          lVar42 = lVar42 + 0x10;
        } while ((int)uVar61 < (this->SpawnInfos).ArrayNum);
        if (uVar16 < 8) goto LAB_1492b8b63;
      }
      else {
LAB_1492b8b63:
        uVar54 = (ulonglong)(8 - uVar16);
        puVar37 = puVar49 + ((longlong)(int)uVar16 + 3) * 4;
        puVar49 = puVar49 + (longlong)(int)uVar16 + 3;
        do {
          puVar37[-1] = 0;
          puVar37[0] = 0;
          puVar37[1] = 0;
          puVar37[2] = *(uint *)(lVar64 + 0x154);
          *puVar49 = 0x7fffffff;
          uVar54 = uVar54 - 1;
          puVar37 = puVar37 + 4;
          puVar49 = puVar49 + 1;
        } while (uVar54 != 0);
      }
LAB_1492b8d45:
      if ((GbDumpParticleData != 0) || ((*(byte *)(local_8b8 + 0x6c) & 2) != 0)) {
        if (4 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        FNiagaraParameterStore::DumpParameters
                  ((FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_,true);
        if (4 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        FNiagaraParameterStore::DumpParameters
                  ((FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_,true);
        if (4 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        FNiagaraParameterStore::DumpParameters
                  ((FNiagaraParameterStore *)(this->_padding_ + 0x80),false);
      }
      iVar18 = FNiagaraComputeExecutionContext::GetConstantBufferSize
                         ((FNiagaraComputeExecutionContext *)this->_padding_);
      if (*(int *)(this->_padding_ + 0x70) != iVar18) {
        *(int *)(this->_padding_ + 0x70) = iVar18;
        local_3e8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'::`245'::<lambda_2>,1,0>
                     ::_vftable_;
        lStack_3e0 = this->_padding_;
        uStack_3d4 = pcStack_6f0._4_4_;
        local_3d0 = (undefined ***)0x0;
        local_3f8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FNiagaraEmitterInstanceImpl::Tick'::__l245::<lambda_2>,void,FRHICommandListImmediate_&>
                       ::Call;
        local_3d8 = iVar18;
        pFVar28 = FRenderCommandList::GetInstanceTLS();
        if (pFVar28 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FNiagaraEmitterInstanceImpl::Tick_::__l245::TSTR_UpdateConstantBuffer1483>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_3f8);
        }
        else {
          pFVar29 = FRenderCommandList::GetRenderThread(pFVar28);
          local_378._4_4_ = uStack_3d4;
          local_378._0_4_ = local_3d8;
          local_398._0_8_ = local_3f8[0];
          local_370 = local_3d0;
          local_388 = local_3e8;
          lStack_380 = lStack_3e0;
          local_3f8[0] = (code *)0x0;
          local_368 = 2;
          pFVar30 = (FRenderCommandTag *)
                    TRenderCommandTag<`FNiagaraEmitterInstanceImpl::Tick'::__l245::TSTR_UpdateConstantBuffer1483>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (pFVar29,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_398,pFVar30);
          uVar54 = (ulonglong)local_368;
          if ((2 < uVar54) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar54] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_398._0_8_ != (code *)0x0) {
              pppuVar38 = (undefined ***)(local_398 + 0x10);
              if (local_370 != (undefined ***)0x0) {
                pppuVar38 = local_370;
              }
              (*(code *)(*pppuVar38)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar54])(local_398);
          }
        }
        if (local_3f8[0] != (code *)0x0) {
          pppuVar38 = &local_3e8;
          if (local_3d0 != (undefined ***)0x0) {
            pppuVar38 = local_3d0;
          }
          (*(code *)(*pppuVar38)[2])();
        }
      }
      PostTick(this);
      FNiagaraScriptExecutionContextBase::PostTick
                ((FNiagaraScriptExecutionContextBase *)&this->SpawnExecContext);
      FNiagaraScriptExecutionContextBase::PostTick
                ((FNiagaraScriptExecutionContextBase *)&this->UpdateExecContext);
      GetEventExecutionContexts(this,&local_5f8);
      for (this_05 = local_5f8.DataPtr; this_05 != local_5f8.DataPtr + local_5f8.ArrayNum;
          this_05 = this_05 + 1) {
        FNiagaraScriptExecutionContextBase::PostTick((FNiagaraScriptExecutionContextBase *)this_05);
      }
      goto LAB_1492bba01;
    }
  }
  else if ((pFVar20->SimTarget == CPUSim) && (GMaxNiagaraCPUParticlesPerEmitter < (int)uVar17)) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)FVar50,&local_4b8,(UObject *)0x0,None);
    ::FString::PrintfImpl
              (&local_768,
               L"%s has attempted to exceed the max CPU particle count! | Max: %d | Requested: %u");
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    UEngine::AddOnScreenDebugMessage
              (GEngine,(ulong64)this,fVar11,FColor::Yellow,&local_768,true,
               &UE::Math::TVector2<double>::UnitVector);
    FVersionedNiagaraEmitterData::ClearRuntimeAllocationEstimate(pFVar20,0xffffffffffffffff);
    pFVar44 = (this->EventInstanceData).Ptr;
    local_8f8 = (FNiagaraDataBuffer *)((ulonglong)local_8f8 & 0xffffffff00000000);
    if (pFVar44 != (FEventInstanceData *)0x0) {
      pFVar44->EventSpawnTotal = 0;
      pFVar44 = (this->EventInstanceData).Ptr;
      uVar55 = 0;
      iVar18 = (pFVar44->EventHandlingInfo).ArrayNum;
      pFVar43 = (ForElementType<int> *)(pFVar44->EventHandlingInfo).AllocatorInstance.Data;
      pFVar45 = (ForElementType<int> *)((longlong)pFVar43 + (longlong)iVar18 * 0x78);
      while( true ) {
        if ((pFVar44->EventHandlingInfo).ArrayNum != iVar18) {
          local_907 = 0;
          `TCheckedPointerIterator<FNiagaraEventHandlingInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_907);
        }
        if (pFVar43 == pFVar45) break;
        pFVar43[1].InlineData[0] = '\0';
        pFVar43[1].InlineData[1] = '\0';
        pFVar43[1].InlineData[2] = '\0';
        pFVar43[1].InlineData[3] = '\0';
        if (*(int *)(pFVar43[1].InlineData + 4) != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,0,pFVar43,0,(int *)(pFVar43[1].InlineData + 4));
        }
        pFVar43[1].InlineData[8] = '\0';
        pFVar43[1].InlineData[9] = '\0';
        pFVar43[1].InlineData[10] = '\0';
        pFVar43[1].InlineData[0xb] = '\0';
        pFVar43 = (ForElementType<int> *)(pFVar43[1].InlineData + 0x30);
      }
    }
    uVar17 = uVar16;
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
  }
  uVar61 = 0;
  FNiagaraDataSet::BeginSimulate(this_01,true);
  FNiagaraDataSet::Allocate(this_01,uVar17,false);
  pFVar44 = (this->EventInstanceData).Ptr;
  if (pFVar44 != (FEventInstanceData *)0x0) {
    local_8d8 = (pFVar44->SpawnScriptEventDataSets).ArrayNum;
    uVar54 = (ulonglong)(int)local_8d8;
    pFVar46 = (pFVar44->SpawnScriptEventDataSets).AllocatorInstance.Data;
    lVar64 = 0;
    local_8e8 = (FName)(pFVar46 + uVar54 * 8);
    while( true ) {
      FVar50 = local_8e8;
      if ((pFVar44->SpawnScriptEventDataSets).ArrayNum != (int)uVar54) {
        local_906 = 0;
        `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_906);
      }
      if ((FName)pFVar46 == FVar50) break;
      iVar18 = uVar55 + (int)local_8f8;
      pFVar22 = *(FNiagaraDataSet **)pFVar46;
      pFVar4 = (this->EventInstanceData).Ptr;
      uVar62 = 0;
      if ((int)uVar61 < (pFVar4->SpawnEventGeneratorIsSharedByIndex).ArrayNum) {
        uVar62 = ~uVar61 >> 0x1f;
      }
      if ((uVar62 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pFVar4->SpawnEventGeneratorIsSharedByIndex).AllocatorInstance.Data[lVar64] !=
          (FScriptContainerElement)0x0) {
        iVar18 = iVar18 + uVar16;
      }
      FNiagaraDataSet::BeginSimulate(pFVar22,true);
      FNiagaraDataSet::Allocate(pFVar22,iVar18,false);
      uVar54 = (ulonglong)local_8d8;
      uVar61 = uVar61 + 1;
      lVar64 = lVar64 + 1;
      pFVar46 = pFVar46 + 8;
    }
    uVar61 = 0;
    lVar64 = 0;
    pFVar44 = (this->EventInstanceData).Ptr;
    FVar50 = (FName)(pFVar44->UpdateScriptEventDataSets).AllocatorInstance.Data;
    iVar18 = (pFVar44->UpdateScriptEventDataSets).ArrayNum;
    local_8e8 = (FName)((longlong)FVar50 + (longlong)iVar18 * 8);
    while( true ) {
      FVar12 = local_8e8;
      if ((pFVar44->UpdateScriptEventDataSets).ArrayNum != iVar18) {
        local_905 = 0;
        `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_905);
      }
      if (FVar50 == FVar12) break;
      pFVar4 = (this->EventInstanceData).Ptr;
      pFVar22 = *(FNiagaraDataSet **)FVar50;
      uVar62 = 0;
      if ((int)uVar61 < (pFVar4->UpdateEventGeneratorIsSharedByIndex).ArrayNum) {
        uVar62 = ~uVar61 >> 0x1f;
      }
      if ((uVar62 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pFVar4->UpdateEventGeneratorIsSharedByIndex).AllocatorInstance.Data[lVar64] ==
          (FScriptContainerElement)0x0) {
        FNiagaraDataSet::BeginSimulate(pFVar22,true);
        FNiagaraDataSet::Allocate(pFVar22,uVar16,false);
      }
      uVar61 = uVar61 + 1;
      lVar64 = lVar64 + 1;
      FVar50 = (FName)((longlong)FVar50 + 8);
    }
  }
  if (0 < (int)uVar16) {
    pFVar21 = FNiagaraDataSet::GetDestinationDataChecked(this_01);
    FNiagaraDataBuffer::SetNumInstances(pFVar21,uVar16);
    TVar19 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraSimulate,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_NiagaraSimulate,1> *)
                        &StatPtr_STAT_NiagaraSimulate);
    local_648.Impl._Line = 0x625;
    local_648.Impl._Column = 3;
    local_648.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
    ;
    local_888.StatId.ComparisonIndex.Value = 0;
    local_888.StatId.Number = 0;
    local_648.Impl._Function = "void __cdecl FNiagaraEmitterInstanceImpl::Tick(float)";
    local_888.EmittedEvent = 0;
    FCycleCounter::Start
              (&local_888,*(TStatIdData **)&(TVar19.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_648);
    puVar49 = (uint *)(this->UpdateExecCountBinding).ValuePtr;
    if (puVar49 != (uint *)0x0) {
      *puVar49 = uVar16;
    }
    FNiagaraScriptExecutionContextBase::BindData
              ((FNiagaraScriptExecutionContextBase *)&this->UpdateExecContext,0,this_01,0,true);
    pFVar44 = (this->EventInstanceData).Ptr;
    if (pFVar44 != (FEventInstanceData *)0x0) {
      FVar50 = (FName)(pFVar44->UpdateScriptEventDataSets).AllocatorInstance.Data;
      iVar18 = (pFVar44->UpdateScriptEventDataSets).ArrayNum;
      local_8e8 = (FName)((longlong)FVar50 + (longlong)iVar18 * 8);
      iVar47 = 1;
      while( true ) {
        FVar12 = local_8e8;
        if ((pFVar44->UpdateScriptEventDataSets).ArrayNum != iVar18) {
          local_904 = 0;
          `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_904);
        }
        if (FVar50 == FVar12) break;
        pFVar22 = *(FNiagaraDataSet **)FVar50;
        if ((pFVar22 == (FNiagaraDataSet *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("EventDataSet",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                                ,0x62f,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((pFVar22->DestinationData == (FNiagaraDataBuffer *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("DestinationData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                ,0x15e,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar21 = pFVar22->DestinationData;
        if ((pFVar21->NumInstancesAllocated < uVar16) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InNumInstances <= NumInstancesAllocated",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                ,0x9c,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar21->NumInstances = uVar16;
        FNiagaraScriptExecutionContextBase::BindData
                  ((FNiagaraScriptExecutionContextBase *)&this->UpdateExecContext,iVar47,pFVar22,0,
                   true);
        FVar50 = (FName)((longlong)FVar50 + 8);
        iVar47 = iVar47 + 1;
      }
    }
    uVar54 = 0;
    local_318.Buffers.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char_const_*>)0x0;
    local_318.Buffers.ArrayNum = 0;
    local_318.Buffers.ArrayMax = 0xc;
    local_318.BufferSizes.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_318.BufferSizes.ArrayNum = 0;
    local_318.BufferSizes.ArrayMax = 0xc;
    BuildConstantBufferTable(this,&this->UpdateExecContext,&local_318);
    (**(code **)((this->UpdateExecContext)._padding_ + 0x20))
              (&this->UpdateExecContext,this->_padding_,local_900[0]);
    pFVar21 = FNiagaraDataSet::GetDestinationDataChecked(this_01);
    if ((0 < (int)(pFVar21->NumInstances - uVar16)) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8942207478905439803>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                            ,0x63b,"DeltaParticles <= 0"), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((GbDumpParticleData != 0) || ((*(byte *)(local_8b8 + 0x6c) & 2) != 0)) {
      pFVar21 = FNiagaraDataSet::GetDestinationDataChecked(this_01);
      local_7c8.ComparisonIndex.Value = 0;
      local_7c8.Number = 0;
      ::FString::PrintfImpl(&local_5d8,L"=== Updated %d Particles (%d Died) ===");
      FNiagaraDataBuffer::Dump(pFVar21,0,uVar16,&local_5d8,&local_7c8);
      if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
      }
      pFVar44 = (this->EventInstanceData).Ptr;
      if ((pFVar44 != (FEventInstanceData *)0x0) &&
         (uVar51 = uVar54, 0 < (pFVar44->UpdateScriptEventDataSets).ArrayNum)) {
        do {
          uVar62 = (uint)uVar51;
          uVar61 = 0;
          if ((int)uVar62 < (pFVar44->UpdateScriptEventDataSets).ArrayNum) {
            uVar61 = ~uVar62 >> 0x1f;
          }
          if ((uVar61 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar64 = *(longlong *)
                    ((pFVar44->UpdateScriptEventDataSets).AllocatorInstance.Data + uVar54);
          if (lVar64 != 0) {
            if ((*(longlong *)(lVar64 + 0x80) == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DestinationData",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                    ,0x15e,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(int *)(*(longlong *)(lVar64 + 0x80) + 0x124) != 0) {
              if ((*(longlong *)(lVar64 + 0x80) == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("DestinationData",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                      ,0x15e,L""), bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar21 = *(FNiagaraDataBuffer **)(lVar64 + 0x80);
              local_7e8.ComparisonIndex.Value = 0;
              local_7e8.Number = 0;
              ::FString::PrintfImpl(&local_5c8,L"Update Script Event %d");
              FNiagaraDataBuffer::Dump(pFVar21,0,-1,&local_5c8,&local_7e8);
              if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
              }
            }
          }
          pFVar44 = (this->EventInstanceData).Ptr;
          uVar54 = uVar54 + 8;
          uVar51 = (ulonglong)(uVar62 + 1);
        } while ((int)(uVar62 + 1) < (pFVar44->UpdateScriptEventDataSets).ArrayNum);
      }
      FNiagaraParameterStore::Dump((FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_);
    }
    if (local_318.BufferSizes.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_318.BufferSizes.AllocatorInstance.SecondaryData);
    }
    if (local_318.Buffers.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_char_const_*>)0x0) {
      FMemory::Free((void *)local_318.Buffers.AllocatorInstance.SecondaryData);
    }
    if ((local_888.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_888.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_888.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_888.StatId,CycleScopeEnd);
    }
    local_888.EmittedEvent = '\0';
  }
  iVar47 = 0;
  iVar18 = 0;
  if (this_01->DestinationData == (FNiagaraDataBuffer *)0x0) {
    if ((1 < (byte)LogNiagara._0_1_) &&
       (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
       1 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    if (this->_padding_ != 0) {
      pUVar31 = FWeakObjectPtr::Get((FWeakObjectPtr *)(this->_padding_ + 0x60));
      lVar64 = *(longlong *)(this->_padding_ + 0x50);
      if (1 < (byte)LogNiagara._0_1_) {
        if (lVar64 == 0) {
          ::FString::FString(&local_728,L"None");
        }
        else {
          local_6c8 = *(FName *)(lVar64 + 0x18);
          ::FName::ToString(&local_6c8,&local_728);
        }
        if (pUVar31 == (UObject *)0x0) {
          ::FString::FString(&local_758,L"None");
        }
        else {
          local_6c0.ComparisonIndex.Value = *(uint *)&pUVar31->field_0x18;
          local_6c0.Number = *(uint *)&pUVar31->field_0x1c;
          ::FName::ToString(&local_6c0,&local_758);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_758.Data.AllocatorInstance.Data);
        }
        if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_728.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  pFVar21 = FNiagaraDataSet::GetDestinationDataChecked(this_01);
  local_8e0 = CONCAT44(local_8e0._4_4_,pFVar21->NumInstances);
  pFVar21 = FNiagaraDataSet::GetDestinationDataChecked(this_01);
  iVar56 = uVar17 - uVar16;
  local_8f0 = (ulonglong)local_8f0._4_4_ << 0x20;
  local_8d8 = pFVar21->NumInstances;
  this_01->NumSpawnedIDs = 0;
  if ((int)local_8f8 + uVar55 != 0) {
    TVar19 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraSpawn,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_NiagaraSpawn,1> *)
                        &StatPtr_STAT_NiagaraSpawn);
    local_628.Impl._Line = 0x66d;
    local_628.Impl._Column = 3;
    local_628.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
    ;
    local_628.Impl._Function = "void __cdecl FNiagaraEmitterInstanceImpl::Tick(float)";
    local_878.StatId.ComparisonIndex.Value = 0;
    local_878.StatId.Number = 0;
    local_878.EmittedEvent = 0;
    FCycleCounter::Start
              (&local_878,*(TStatIdData **)&(TVar19.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_628);
    local_268.Buffers.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char_const_*>)0x0;
    local_268.Buffers.ArrayNum = 0;
    local_268.Buffers.ArrayMax = 0xc;
    local_268.BufferSizes.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_268.BufferSizes.ArrayNum = 0;
    local_268.BufferSizes.ArrayMax = 0xc;
    BuildConstantBufferTable(this,&this->SpawnExecContext,&local_268);
    pFVar46 = (this->SpawnInfos).AllocatorInstance.Data;
    local_538 = local_900;
    local_530 = &local_268;
    iVar18 = (this->SpawnInfos).ArrayNum;
    local_528 = &local_8b8;
    pFVar39 = pFVar46 + (longlong)iVar18 * 0x10;
    local_548 = this_01;
    local_540 = this;
    while( true ) {
      if ((this->SpawnInfos).ArrayNum != iVar18) {
        local_903 = 0;
        `TCheckedPointerIterator<FNiagaraSpawnInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_903);
      }
      if (pFVar46 == pFVar39) break;
      iVar8 = iVar56;
      if (*(int *)pFVar46 < iVar56) {
        iVar8 = *(int *)pFVar46;
      }
      if (0 < iVar8) {
        pfVar5 = (this->SpawnIntervalBinding).ValuePtr;
        if (pfVar5 != (float *)0x0) {
          *pfVar5 = *(float *)(pFVar46 + 8);
        }
        pfVar5 = (this->InterpSpawnStartBinding).ValuePtr;
        if (pfVar5 != (float *)0x0) {
          *pfVar5 = *(float *)(pFVar46 + 4);
        }
        piVar6 = (this->SpawnGroupBinding).ValuePtr;
        if (piVar6 != (int *)0x0) {
          *piVar6 = *(int *)(pFVar46 + 0xc);
        }
        `FNiagaraEmitterInstanceImpl::Tick'::__l385::<lambda_3>::operator()
                  (&local_548,iVar8,L"Regular Spawn");
      }
      iVar56 = iVar56 - iVar8;
      pFVar46 = pFVar46 + 0x10;
    }
    pFVar21 = FNiagaraDataSet::GetDestinationDataChecked(this_01);
    fVar11 = __real_3f000000;
    local_8e0 = CONCAT44(local_8e0._4_4_,pFVar21->NumInstances);
    iVar18 = iVar47;
    if (((this->EventInstanceData).Ptr != (FEventInstanceData *)0x0) &&
       (uVar61 = 0, 0 < (local_8d0->EventHandlerScriptProps).ArrayNum)) {
      local_910 = 0;
      do {
        pFVar44 = (this->EventInstanceData).Ptr;
        uVar55 = 0;
        if ((int)uVar61 < (pFVar44->EventHandlingInfo).ArrayNum) {
          uVar55 = ~uVar61 >> 0x1f;
        }
        if ((uVar55 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar55 = 0;
        pFVar46 = (pFVar44->EventHandlingInfo).AllocatorInstance.Data + local_910;
        iVar47 = *(int *)(pFVar46 + 0x48);
        if (0 < iVar47) {
          lVar64 = 0;
          do {
            uVar62 = 0;
            if ((int)uVar55 < iVar47) {
              uVar62 = ~uVar55 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar39 = pFVar46;
            if (*(FScriptContainerElement **)(pFVar46 + 0x40) != (FScriptContainerElement *)0x0) {
              pFVar39 = *(FScriptContainerElement **)(pFVar46 + 0x40);
            }
            iVar47 = iVar56;
            if (*(int *)(pFVar39 + lVar64) < iVar56) {
              iVar47 = *(int *)(pFVar39 + lVar64);
            }
            if (iVar47 < 1) {
              uVar62 = 0;
              if ((int)uVar55 < *(int *)(pFVar46 + 0x48)) {
                uVar62 = ~uVar55 >> 0x1f;
              }
              if ((uVar62 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar39 = pFVar46;
              if (*(FScriptContainerElement **)(pFVar46 + 0x40) != (FScriptContainerElement *)0x0) {
                pFVar39 = *(FScriptContainerElement **)(pFVar46 + 0x40);
              }
              *(undefined4 *)(pFVar39 + lVar64) = 0;
            }
            else {
              if ((this_01->DestinationData == (FNiagaraDataBuffer *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("DestinationData",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                      ,0x15e,L""), bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar62 = this_01->DestinationData->NumInstances;
              pfVar5 = (this->SpawnIntervalBinding).ValuePtr;
              if (pfVar5 != (float *)0x0) {
                *pfVar5 = 0.0;
              }
              pfVar5 = (this->InterpSpawnStartBinding).ValuePtr;
              if (pfVar5 != (float *)0x0) {
                *pfVar5 = local_900[0] * fVar11;
              }
              piVar6 = (this->SpawnGroupBinding).ValuePtr;
              if (piVar6 != (int *)0x0) {
                *piVar6 = 0;
              }
              `FNiagaraEmitterInstanceImpl::Tick'::__l385::<lambda_3>::operator()
                        (&local_548,iVar47,L"Event Spawn");
              if ((this_01->DestinationData == (FNiagaraDataBuffer *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("DestinationData",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                      ,0x15e,L""), bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar47 = this_01->DestinationData->NumInstances - uVar62;
              iVar18 = (int)local_8f0 + iVar47;
              local_8f0 = CONCAT44(local_8f0._4_4_,iVar18);
              uVar62 = 0;
              if ((int)uVar55 < *(int *)(pFVar46 + 0x48)) {
                uVar62 = ~uVar55 >> 0x1f;
              }
              if ((uVar62 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar39 = pFVar46;
              if (*(FScriptContainerElement **)(pFVar46 + 0x40) != (FScriptContainerElement *)0x0) {
                pFVar39 = *(FScriptContainerElement **)(pFVar46 + 0x40);
              }
              iVar56 = iVar56 - iVar47;
              *(int *)(pFVar39 + lVar64) = iVar47;
            }
            iVar47 = *(int *)(pFVar46 + 0x48);
            uVar55 = uVar55 + 1;
            lVar64 = lVar64 + 4;
          } while ((int)uVar55 < iVar47);
        }
        uVar61 = uVar61 + 1;
        local_910 = local_910 + 0x78;
      } while ((int)uVar61 < (local_8d0->EventHandlerScriptProps).ArrayNum);
    }
    if (local_268.BufferSizes.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_268.BufferSizes.AllocatorInstance.SecondaryData);
    }
    if (local_268.Buffers.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_char_const_*>)0x0) {
      FMemory::Free((void *)local_268.Buffers.AllocatorInstance.SecondaryData);
    }
    if ((local_878.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_878.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_878.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_878.StatId,CycleScopeEnd);
    }
    local_878.EmittedEvent = '\0';
  }
  uVar61 = local_8d8;
  pFVar21 = FNiagaraDataSet::GetDestinationDataChecked(this_01);
  uVar55 = pFVar21->NumInstances - uVar61;
  pFVar21 = FNiagaraDataSet::GetDestinationDataChecked(this_01);
  pFVar21->NumSpawnedInstances = uVar55;
  pFVar21 = FNiagaraDataSet::GetDestinationDataChecked(this_01);
  pFVar21->IDAcquireTag = this_01->IDAcquireTag;
  FNiagaraDataSet::EndSimulate(this_01,true);
  pFVar44 = (this->EventInstanceData).Ptr;
  if (pFVar44 != (FEventInstanceData *)0x0) {
    pFVar39 = (pFVar44->SpawnScriptEventDataSets).AllocatorInstance.Data;
    iVar47 = (pFVar44->SpawnScriptEventDataSets).ArrayNum;
    pFVar46 = pFVar39 + (longlong)iVar47 * 8;
    while( true ) {
      if ((pFVar44->SpawnScriptEventDataSets).ArrayNum != iVar47) {
        local_902 = 0;
        `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_902);
      }
      if (pFVar39 == pFVar46) break;
      pFVar22 = *(FNiagaraDataSet **)pFVar39;
      if ((pFVar22 != (FNiagaraDataSet *)0x0) &&
         (pFVar22->DestinationData != (FNiagaraDataBuffer *)0x0)) {
        FNiagaraDataSet::EndSimulate(pFVar22,true);
      }
      pFVar39 = pFVar39 + 8;
    }
    pFVar44 = (this->EventInstanceData).Ptr;
    pFVar39 = (pFVar44->UpdateScriptEventDataSets).AllocatorInstance.Data;
    iVar47 = (pFVar44->UpdateScriptEventDataSets).ArrayNum;
    pFVar46 = pFVar39 + (longlong)iVar47 * 8;
    while( true ) {
      if ((pFVar44->UpdateScriptEventDataSets).ArrayNum != iVar47) {
        local_901 = 0;
        `TCheckedPointerIterator<FNiagaraDataSet_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_901);
      }
      uVar61 = local_8d8;
      if (pFVar39 == pFVar46) break;
      pFVar22 = *(FNiagaraDataSet **)pFVar39;
      if ((pFVar22 != (FNiagaraDataSet *)0x0) &&
         (pFVar22->DestinationData != (FNiagaraDataBuffer *)0x0)) {
        FNiagaraDataSet::EndSimulate(pFVar22,true);
      }
      pFVar39 = pFVar39 + 8;
    }
  }
  bVar14 = FNiagaraSystemInstance::ShouldCaptureThisFrame((FNiagaraSystemInstance *)this->_padding_)
  ;
  if (bVar14) {
    local_748.A = 0;
    local_748.B = 0;
    local_748.C = 0;
    local_748.D = 0;
    FNiagaraSystemInstance::GetActiveCaptureWrite
              ((FNiagaraSystemInstance *)this->_padding_,&local_8c8,&this->CachedIDName,
               ParticleUpdateScript,&local_748);
    if (local_8c8.Object != (FNiagaraScriptDebuggerInfo *)0x0) {
      if ((local_8c8.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FNiagaraDataSet::CopyTo(this_01,&(local_8c8.Object)->Frame,0,uVar16,true);
      if ((local_8c8.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FNiagaraParameterStore::operator=
                (&(local_8c8.Object)->Parameters,
                 (FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_);
      if ((local_8c8.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      (local_8c8.Object)->bWritten = (TAtomic<bool>)0x1;
      UNLOCK();
    }
    local_738.A = 0;
    local_738.B = 0;
    local_738.C = 0;
    local_738.D = 0;
    pTVar32 = FNiagaraSystemInstance::GetActiveCaptureWrite
                        ((FNiagaraSystemInstance *)this->_padding_,&local_4a8,&this->CachedIDName,
                         ParticleSpawnScript,&local_738);
    if (&local_8c8 != pTVar32) {
      local_8c8.Object = pTVar32->Object;
      pTVar32->Object = (FNiagaraScriptDebuggerInfo *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_8c8.SharedReferenceCount,&pTVar32->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a8.SharedReferenceCount.ReferenceController);
    if (local_8c8.Object != (FNiagaraScriptDebuggerInfo *)0x0) {
      if ((local_8c8.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FNiagaraDataSet::CopyTo(this_01,&(local_8c8.Object)->Frame,uVar61,uVar55,true);
      if ((local_8c8.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FNiagaraParameterStore::operator=
                (&(local_8c8.Object)->Parameters,
                 (FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_);
      if ((local_8c8.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      (local_8c8.Object)->bWritten = (TAtomic<bool>)0x1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8c8.SharedReferenceCount.ReferenceController);
  }
  if ((this->EventInstanceData).Ptr != (FEventInstanceData *)0x0) {
    if (iVar18 != 0) {
      TVar19 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraEvent_CopyBuffer,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_NiagaraEvent_CopyBuffer,1> *)
                          &StatPtr_STAT_NiagaraEvent_CopyBuffer);
      bVar14 = false;
      bVar10 = false;
      local_788.ComparisonIndex.Value = 0;
      local_788.Number = 0;
      TVar1 = (TVar19.StatIdPtr)->Name;
      FVar50 = *(FName *)TVar1;
      FVar48 = FVar50.ComparisonIndex.Value;
      uVar16 = FVar50.Number;
      if ((FVar48.Value == 0) && (uVar16 == 0)) {
LAB_1492ba2ac:
        bVar9 = false;
        FVar50 = local_788;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_808[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_808[0]._s_0,(char *)*(FName *)((longlong)TVar1 + 0x10));
          bVar14 = false;
          bVar10 = true;
          if (-1 < CpuChannel->Enabled) {
            local_7e0.ComparisonIndex.Value = FVar48.Value;
            local_7e0.Number = uVar16;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_7e0,(wchar_t *)*(FName *)((longlong)TVar1 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                       ,0x716);
            bVar14 = true;
            bVar10 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1492ba2ac;
        local_8d8 = FVar48.Value;
        uStack_8d4 = uVar16;
        FThreadStats::AddMessage(FVar50,CycleScopeStart);
        bVar9 = true;
      }
      if ((GbDumpParticleData != 0) || ((*(byte *)(local_8b8 + 0x6c) & 2) != 0)) {
        local_7c0.ComparisonIndex.Value = 0;
        local_7c0.Number = 0;
        ::FString::FString(&local_5b8,L"Existing Data - Pre Event Alloc");
        FNiagaraDataSet::Dump(this_01,0,-1,&local_5b8,&local_7c0);
        if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
        }
      }
      pFVar21 = FNiagaraDataSet::BeginSimulate(this_01,true);
      if ((this_01->CurrentData == (FNiagaraDataBuffer *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x158,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FNiagaraDataSet::Allocate(this_01,this_01->CurrentData->NumInstances,true);
      uVar16 = (uint)local_8e0;
      if ((pFVar21->NumInstancesAllocated < (uint)local_8e0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InNumInstances <= NumInstancesAllocated",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x9c,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar21->NumInstances = uVar16;
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar9) {
        FThreadStats::AddMessage(FVar50,CycleScopeEnd);
      }
    }
    uVar16 = 0;
    if (0 < (local_8d0->EventHandlerScriptProps).ArrayNum) {
      local_8f0 = 0;
      local_918 = 0;
      local_8f8 = (FNiagaraDataBuffer *)0x0;
      local_910 = 0;
      do {
        pFVar44 = (this->EventInstanceData).Ptr;
        uVar61 = 0;
        if ((int)uVar16 < (pFVar44->EventHandlingInfo).ArrayNum) {
          uVar61 = ~uVar16 >> 0x1f;
        }
        if ((uVar61 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (this->EventInstanceData).Ptr;
        pFVar46 = (pFVar44->EventHandlingInfo).AllocatorInstance.Data + local_918;
        local_1b8.Buffers.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_char_const_*>)0x0;
        local_1b8.Buffers.ArrayNum = 0;
        local_1b8.BufferSizes.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_1b8.BufferSizes.ArrayNum = 0;
        local_1b8.Buffers.ArrayMax = 0xc;
        local_1b8.BufferSizes.ArrayMax = 0xc;
        uVar61 = 0;
        if ((int)uVar16 < (pFVar4->EventExecContexts).ArrayNum) {
          uVar61 = ~uVar16 >> 0x1f;
        }
        local_810 = pFVar46;
        if ((uVar61 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        BuildConstantBufferTable
                  (this,(FNiagaraScriptExecutionContext *)
                        ((pFVar4->EventExecContexts).AllocatorInstance.Data + local_910),&local_1b8)
        ;
        if ((*(longlong *)(pFVar46 + 0x58) != 0) && (0 < *(int *)(pFVar46 + 0x48))) {
          FVar34 = StatPtr_STAT_NiagaraEventHandle;
          if (StatPtr_STAT_NiagaraEventHandle ==
              (FThreadSafeStaticStat<FStat_STAT_NiagaraEventHandle>)0x0) {
            pFVar33 = ::FName::FName(local_440,"STAT_NiagaraEventHandle");
            FVar34 = (FThreadSafeStaticStat<FStat_STAT_NiagaraEventHandle>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEventHandle,
                                *pFVar33,L"Emitter Event Handling [CNC]","STATGROUP_Niagara",
                                "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
                                MCR_Invalid);
          }
          FVar50 = *(FName *)FVar34;
          bVar14 = false;
          bVar9 = false;
          local_798.ComparisonIndex.Value = 0;
          local_798.Number = 0;
          bVar10 = false;
          bVar15 = false;
          if ((FVar50.ComparisonIndex.Value.Value == 0) && (FVar50.Number == 0)) {
LAB_1492ba64a:
            bVar9 = bVar15;
            bVar14 = bVar10;
            bVar10 = false;
            local_8e8 = local_798;
            FVar50 = local_798;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_828.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_828._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
              bVar14 = false;
              bVar9 = true;
              bVar10 = false;
              bVar15 = true;
              if (-1 < CpuChannel->Enabled) {
                local_7b8.ComparisonIndex.Value = FVar50.ComparisonIndex.Value.Value;
                local_7b8.Number = FVar50.Number;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_7b8,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                           ,0x731);
                bVar14 = true;
                bVar9 = true;
                bVar10 = true;
                bVar15 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_1492ba64a;
            local_8e8 = FVar50;
            local_798 = FVar50;
            FThreadStats::AddMessage(FVar50,CycleScopeStart);
            bVar10 = true;
          }
          iVar18 = *(int *)(pFVar46 + 0x48);
          if (0 < iVar18) {
            uVar55 = ~uVar16 >> 0x1f;
            uVar61 = 0;
            local_8a8.ComparisonIndex.Value = 0;
            local_8a8.Number = 0;
            do {
              FVar50 = local_8a8;
              uVar62 = 0;
              if ((int)uVar61 < iVar18) {
                uVar62 = ~uVar61 >> 0x1f;
              }
              if ((uVar62 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar39 = pFVar46;
              if (*(FScriptContainerElement **)(pFVar46 + 0x40) != (FScriptContainerElement *)0x0) {
                pFVar39 = *(FScriptContainerElement **)(pFVar46 + 0x40);
              }
              iVar18 = *(int *)(pFVar39 + (longlong)FVar50);
              if (0 < iVar18) {
                pFVar44 = (this->EventInstanceData).Ptr;
                uVar62 = 0;
                if ((int)uVar16 < (pFVar44->EventExecCountBindings).ArrayNum) {
                  uVar62 = uVar55;
                }
                if ((uVar62 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                piVar6 = *(int **)((pFVar44->EventExecCountBindings).AllocatorInstance.Data +
                                  (longlong)local_8f8);
                if (piVar6 != (int *)0x0) {
                  *piVar6 = iVar18;
                }
                pFVar44 = (this->EventInstanceData).Ptr;
                uVar62 = 0;
                if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                  uVar62 = uVar55;
                }
                if ((uVar62 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FNiagaraScriptExecutionContextBase::BindData
                          ((FNiagaraScriptExecutionContextBase *)
                           ((pFVar44->EventExecContexts).AllocatorInstance.Data +
                           (longlong)(int)uVar16 * 0x2b0),0,this_01,(uint)local_8e0,true);
                pFVar44 = (this->EventInstanceData).Ptr;
                uVar62 = 0;
                if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                  uVar62 = uVar55;
                }
                if ((uVar62 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar46 = (pFVar44->EventExecContexts).AllocatorInstance.Data;
                pFVar44 = (this->EventInstanceData).Ptr;
                uVar62 = 0;
                if ((int)uVar16 < (pFVar44->EventHandlingInfo).ArrayNum) {
                  uVar62 = uVar55;
                }
                if ((uVar62 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FNiagaraScriptExecutionContextBase::BindData
                          ((FNiagaraScriptExecutionContextBase *)
                           (pFVar46 + (longlong)(int)uVar16 * 0x2b0),1,
                           *(FNiagaraDataBuffer **)
                            ((pFVar44->EventHandlingInfo).AllocatorInstance.Data + local_918 + 0x58)
                           ,uVar61,false);
                pFVar44 = (this->EventInstanceData).Ptr;
                uVar62 = 0;
                if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                  uVar62 = uVar55;
                }
                if ((uVar62 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar46 = (pFVar44->EventExecContexts).AllocatorInstance.Data + local_910;
                (**(code **)(*(longlong *)pFVar46 + 0x20))(pFVar46,this->_padding_,local_900[0]);
                uVar62 = this_01->DestinationData->NumInstances;
                iVar18 = uVar62 - (uint)local_8e0;
                if ((GbDumpParticleData != 0) ||
                   (iVar47 = (uint)local_8e0, (*(byte *)(local_8b8 + 0x6c) & 2) != 0)) {
                  pFVar44 = (this->EventInstanceData).Ptr;
                  uVar17 = 0;
                  if ((int)uVar16 < (pFVar44->EventHandlingInfo).ArrayNum) {
                    uVar17 = uVar55;
                  }
                  if ((uVar17 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pFVar21 = *(FNiagaraDataBuffer **)
                             ((pFVar44->EventHandlingInfo).AllocatorInstance.Data + local_918 + 0x58
                             );
                  local_7b0.ComparisonIndex.Value = 0;
                  local_7b0.Number = 0;
                  ::FString::PrintfImpl(&local_5a8,L"=== Event Data %d [%d] ===");
                  FNiagaraDataBuffer::Dump(pFVar21,uVar61,1,&local_5a8,&local_7b0);
                  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
                  }
                  if ((this_01->DestinationData == (FNiagaraDataBuffer *)0x0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("DestinationData",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                          ,0x15e,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pFVar21 = this_01->DestinationData;
                  local_7f0.ComparisonIndex.Value = 0;
                  local_7f0.Number = 0;
                  ::FString::PrintfImpl(&local_558,L"=== Event %d %d Particles (%d Alive) ===");
                  iVar47 = (uint)local_8e0;
                  FNiagaraDataBuffer::Dump(pFVar21,(uint)local_8e0,iVar18,&local_558,&local_7f0);
                  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_558.Data.AllocatorInstance.Data);
                  }
                  pFVar44 = (this->EventInstanceData).Ptr;
                  uVar17 = 0;
                  if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                    uVar17 = uVar55;
                  }
                  if ((uVar17 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  FNiagaraParameterStore::Dump
                            ((FNiagaraParameterStore *)
                             ((pFVar44->EventExecContexts).AllocatorInstance.Data +
                             (longlong)(int)uVar16 * 0x2b0 + 0x38));
                }
                bVar15 = FNiagaraSystemInstance::ShouldCaptureThisFrame
                                   ((FNiagaraSystemInstance *)this->_padding_);
                if (bVar15) {
                  pFVar44 = (this->EventInstanceData).Ptr;
                  uVar17 = 0;
                  if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                    uVar17 = uVar55;
                  }
                  if ((uVar17 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar64 = *(longlong *)
                            ((pFVar44->EventExecContexts).AllocatorInstance.Data + local_910 + 8);
                  local_498._0_8_ = *(undefined8 *)(lVar64 + 0x34);
                  local_498._8_8_ = *(undefined8 *)(lVar64 + 0x3c);
                  FNiagaraSystemInstance::GetActiveCaptureWrite
                            ((FNiagaraSystemInstance *)this->_padding_,&local_838,
                             &this->CachedIDName,ParticleEventScript,&local_498);
                  if (local_838.Object != (FNiagaraScriptDebuggerInfo *)0x0) {
                    if ((local_838.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FNiagaraDataSet::CopyTo(this_01,&(local_838.Object)->Frame,iVar47,iVar18,true);
                    pFVar44 = (this->EventInstanceData).Ptr;
                    uVar17 = 0;
                    if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                      uVar17 = uVar55;
                    }
                    if ((uVar17 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pFVar46 = (pFVar44->EventExecContexts).AllocatorInstance.Data;
                    if ((local_838.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FNiagaraParameterStore::operator=
                              (&(local_838.Object)->Parameters,
                               (FNiagaraParameterStore *)
                               (pFVar46 + (longlong)(int)uVar16 * 0x2b0 + 0x38));
                    if ((local_838.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    LOCK();
                    (local_838.Object)->bWritten = (TAtomic<bool>)0x1;
                    UNLOCK();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_838.SharedReferenceCount.ReferenceController)
                  ;
                }
                local_8e0 = CONCAT44(local_8e0._4_4_,uVar62);
                pFVar46 = local_810;
                FVar50 = local_8a8;
              }
              iVar18 = *(int *)(pFVar46 + 0x48);
              local_8a8 = (FName)((longlong)FVar50 + 4);
              uVar61 = uVar61 + 1;
              FVar50 = local_8e8;
            } while ((int)uVar61 < iVar18);
          }
          if (bVar9) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar14) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar10) {
            FThreadStats::AddMessage(FVar50,CycleScopeEnd);
          }
        }
        if (local_1b8.BufferSizes.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_1b8.BufferSizes.AllocatorInstance.SecondaryData);
        }
        if (local_1b8.Buffers.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_char_const_*>)0x0) {
          FMemory::Free((void *)local_1b8.Buffers.AllocatorInstance.SecondaryData);
        }
        local_918 = local_918 + 0x78;
        local_8f0 = local_8f0 + 1;
        local_8f8 = (FNiagaraDataBuffer *)((longlong)local_8f8 + 0x38);
        local_910 = local_910 + 0x2b0;
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (local_8d0->EventHandlerScriptProps).ArrayNum);
    }
    pFVar20 = local_8d0;
    if (this_01->DestinationData != (FNiagaraDataBuffer *)0x0) {
      FNiagaraDataSet::EndSimulate(this_01,true);
    }
    uVar16 = 0;
    if (0 < (pFVar20->EventHandlerScriptProps).ArrayNum) {
      local_8f0 = 0;
      local_920 = 0;
      local_930 = 0;
      local_8e0 = 0;
      local_910 = 0;
      do {
        uVar55 = ~uVar16 >> 0x1f;
        uVar61 = 0;
        if ((int)uVar16 < (pFVar20->EventHandlerScriptProps).ArrayNum) {
          uVar61 = uVar55;
        }
        if ((uVar61 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar46 = (pFVar20->EventHandlerScriptProps).AllocatorInstance.Data;
        pFVar44 = (this->EventInstanceData).Ptr;
        uVar61 = 0;
        if ((int)uVar16 < (pFVar44->EventHandlingInfo).ArrayNum) {
          uVar61 = uVar55;
        }
        if ((uVar61 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (this->EventInstanceData).Ptr;
        pFVar21 = *(FNiagaraDataBuffer **)
                   ((pFVar44->EventHandlingInfo).AllocatorInstance.Data + local_920 + 0x58);
        local_108.Buffers.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_char_const_*>)0x0;
        local_108.Buffers.ArrayNum = 0;
        local_108.BufferSizes.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_108.BufferSizes.ArrayNum = 0;
        local_108.Buffers.ArrayMax = 0xc;
        local_108.BufferSizes.ArrayMax = 0xc;
        uVar61 = 0;
        if ((int)uVar16 < (pFVar4->EventExecContexts).ArrayNum) {
          uVar61 = uVar55;
        }
        local_8f8 = pFVar21;
        if ((uVar61 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        BuildConstantBufferTable
                  (this,(FNiagaraScriptExecutionContext *)
                        ((pFVar4->EventExecContexts).AllocatorInstance.Data +
                        (longlong)(int)uVar16 * 0x2b0),&local_108);
        if (((*(longlong *)(pFVar46 + local_910) != 0) &&
            (pFVar46[local_910 + 0x28] == (FScriptContainerElement)0x0)) &&
           (pFVar21 != (FNiagaraDataBuffer *)0x0)) {
          if ((this_01->CurrentData == (FNiagaraDataBuffer *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentData",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                  ,0x158,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar61 = this_01->CurrentData->NumInstances;
          local_8d8 = uVar61;
          if (pFVar21->NumInstances != 0) {
            FVar34 = StatPtr_STAT_NiagaraEventHandle;
            if (StatPtr_STAT_NiagaraEventHandle ==
                (FThreadSafeStaticStat<FStat_STAT_NiagaraEventHandle>)0x0) {
              pFVar33 = ::FName::FName(&local_448,"STAT_NiagaraEventHandle");
              FVar34 = (FThreadSafeStaticStat<FStat_STAT_NiagaraEventHandle>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEventHandle,
                                  *pFVar33,L"Emitter Event Handling [CNC]","STATGROUP_Niagara",
                                  "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
                                  MCR_Invalid);
            }
            FVar50 = *(FName *)FVar34;
            bVar14 = false;
            bVar9 = false;
            local_7a8.ComparisonIndex.Value = 0;
            local_7a8.Number = 0;
            bVar10 = false;
            bVar15 = false;
            if ((FVar50.ComparisonIndex.Value.Value == 0) && (FVar50.Number == 0)) {
LAB_1492bb0b8:
              bVar9 = bVar15;
              bVar14 = bVar10;
              bVar10 = false;
              local_8a8 = local_7a8;
              FVar50 = local_7a8;
            }
            else {
              if (GCycleStatsShouldEmitNamedEvents != 0) {
                local_824.Bits = 0;
                FGenericPlatformMisc::BeginNamedEvent
                          ((FColor *)&local_824._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
                bVar14 = false;
                bVar9 = true;
                bVar10 = false;
                bVar15 = true;
                if (-1 < CpuChannel->Enabled) {
                  local_7d8.ComparisonIndex.Value = FVar50.ComparisonIndex.Value.Value;
                  local_7d8.Number = FVar50.Number;
                  FCpuProfilerTrace::OutputBeginDynamicEventWithId
                            (&local_7d8,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                             ,0x773);
                  bVar14 = true;
                  bVar9 = true;
                  bVar10 = true;
                  bVar15 = true;
                }
              }
              if (FThreadStats::bPrimaryEnable == false) goto LAB_1492bb0b8;
              local_8e8 = FVar50;
              local_8a8 = FVar50;
              local_7a8 = FVar50;
              FThreadStats::AddMessage(FVar50,CycleScopeStart);
              bVar10 = true;
            }
            uVar55 = 0;
            if (pFVar21->NumInstances != 0) {
              uVar62 = ~uVar16 >> 0x1f;
              lVar64 = (longlong)(int)uVar16 * 0x2b0;
              do {
                FNiagaraDataSet::BeginSimulate(this_01,true);
                FNiagaraDataSet::Allocate(this_01,uVar61,false);
                if ((this_01->CurrentData == (FNiagaraDataBuffer *)0x0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CurrentData",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                        ,0x158,L""), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar44 = (this->EventInstanceData).Ptr;
                uVar61 = this_01->CurrentData->NumInstances;
                uVar17 = 0;
                if ((int)uVar16 < (pFVar44->EventExecCountBindings).ArrayNum) {
                  uVar17 = uVar62;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                puVar49 = *(uint **)((pFVar44->EventExecCountBindings).AllocatorInstance.Data +
                                    local_8e0);
                if (puVar49 != (uint *)0x0) {
                  *puVar49 = uVar61;
                }
                pFVar44 = (this->EventInstanceData).Ptr;
                uVar17 = 0;
                if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                  uVar17 = uVar62;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FNiagaraScriptExecutionContextBase::BindData
                          ((FNiagaraScriptExecutionContextBase *)
                           ((pFVar44->EventExecContexts).AllocatorInstance.Data + lVar64),0,this_01,
                           0,true);
                pFVar44 = (this->EventInstanceData).Ptr;
                uVar17 = 0;
                if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                  uVar17 = uVar62;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FNiagaraScriptExecutionContextBase::BindData
                          ((FNiagaraScriptExecutionContextBase *)
                           ((pFVar44->EventExecContexts).AllocatorInstance.Data + lVar64),1,
                           local_8f8,uVar55,false);
                pFVar44 = (this->EventInstanceData).Ptr;
                uVar17 = 0;
                if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                  uVar17 = uVar62;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar46 = (pFVar44->EventExecContexts).AllocatorInstance.Data + local_930;
                (**(code **)(*(longlong *)pFVar46 + 0x20))(pFVar46,this->_padding_,local_900[0]);
                FNiagaraDataSet::EndSimulate(this_01,true);
                if ((GbDumpParticleData != 0) || ((*(byte *)(local_8b8 + 0x6c) & 2) != 0)) {
                  local_7d0.ComparisonIndex.Value = 0;
                  local_7d0.Number = 0;
                  ::FString::PrintfImpl(&local_598,L"=== Event Data %d [%d] ===");
                  FNiagaraDataBuffer::Dump(local_8f8,uVar55,1,&local_598,&local_7d0);
                  if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_598.Data.AllocatorInstance.Data);
                  }
                  if ((this_01->CurrentData == (FNiagaraDataBuffer *)0x0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("CurrentData",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                          ,0x158,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pFVar21 = this_01->CurrentData;
                  local_8a0.ComparisonIndex.Value = 0;
                  local_8a0.Number = 0;
                  ::FString::PrintfImpl(&local_5e8,L"=== Event %d %d Particles ===");
                  FNiagaraDataBuffer::Dump(pFVar21,0,uVar61,&local_5e8,&local_8a0);
                  if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
                  }
                  pFVar44 = (this->EventInstanceData).Ptr;
                  uVar17 = 0;
                  if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                    uVar17 = uVar62;
                  }
                  if ((uVar17 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  FNiagaraParameterStore::Dump
                            ((FNiagaraParameterStore *)
                             ((pFVar44->EventExecContexts).AllocatorInstance.Data + lVar64 + 0x38));
                }
                bVar15 = FNiagaraSystemInstance::ShouldCaptureThisFrame
                                   ((FNiagaraSystemInstance *)this->_padding_);
                if (bVar15) {
                  pFVar44 = (this->EventInstanceData).Ptr;
                  uVar17 = 0;
                  if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                    uVar17 = uVar62;
                  }
                  if ((uVar17 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar42 = *(longlong *)
                            ((pFVar44->EventExecContexts).AllocatorInstance.Data + local_930 + 8);
                  local_488._0_8_ = *(undefined8 *)(lVar42 + 0x34);
                  local_488._8_8_ = *(undefined8 *)(lVar42 + 0x3c);
                  FNiagaraSystemInstance::GetActiveCaptureWrite
                            ((FNiagaraSystemInstance *)this->_padding_,&local_848,
                             &this->CachedIDName,ParticleEventScript,&local_488);
                  if (local_848.Object != (FNiagaraScriptDebuggerInfo *)0x0) {
                    if ((local_848.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FNiagaraDataSet::CopyTo(this_01,&(local_848.Object)->Frame,0,uVar61,true);
                    pFVar44 = (this->EventInstanceData).Ptr;
                    uVar61 = 0;
                    if ((int)uVar16 < (pFVar44->EventExecContexts).ArrayNum) {
                      uVar61 = uVar62;
                    }
                    if ((uVar61 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pFVar46 = (pFVar44->EventExecContexts).AllocatorInstance.Data;
                    if ((local_848.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FNiagaraParameterStore::operator=
                              (&(local_848.Object)->Parameters,
                               (FNiagaraParameterStore *)(pFVar46 + lVar64 + 0x38));
                    if ((local_848.Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    LOCK();
                    (local_848.Object)->bWritten = (TAtomic<bool>)0x1;
                    UNLOCK();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_848.SharedReferenceCount.ReferenceController)
                  ;
                }
                if ((this_01->CurrentData == (FNiagaraDataBuffer *)0x0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CurrentData",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                        ,0x158,L""), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar61 = local_8d8;
                if ((local_8d8 != this_01->CurrentData->NumInstances) &&
                   (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<8942207478905440152>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                                        ,0x798,
                                        "NumParticles == Data.GetCurrentDataChecked().GetNumInstances()"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar55 = uVar55 + 1;
                FVar50 = local_8a8;
              } while (uVar55 < local_8f8->NumInstances);
            }
            if (bVar9) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar14) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (bVar10) {
              FThreadStats::AddMessage(FVar50,CycleScopeEnd);
            }
          }
        }
        if (local_108.BufferSizes.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_108.BufferSizes.AllocatorInstance.SecondaryData);
        }
        if (local_108.Buffers.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_char_const_*>)0x0) {
          FMemory::Free((void *)local_108.Buffers.AllocatorInstance.SecondaryData);
        }
        local_910 = local_910 + 0x58;
        local_8f0 = local_8f0 + 1;
        local_8e0 = local_8e0 + 0x38;
        local_920 = local_920 + 0x78;
        local_930 = local_930 + 0x2b0;
        uVar16 = uVar16 + 1;
        pFVar20 = local_8d0;
      } while ((int)uVar16 < (local_8d0->EventHandlerScriptProps).ArrayNum);
    }
  }
  PostTick(this);
  FNiagaraScriptExecutionContextBase::PostTick
            ((FNiagaraScriptExecutionContextBase *)&this->SpawnExecContext);
  FNiagaraScriptExecutionContextBase::PostTick
            ((FNiagaraScriptExecutionContextBase *)&this->UpdateExecContext);
  pFVar44 = (this->EventInstanceData).Ptr;
  if (pFVar44 == (FEventInstanceData *)0x0) {
    this_06 = (FNiagaraScriptExecutionContextBase *)0x0;
    iVar18 = 0;
  }
  else {
    iVar18 = (pFVar44->EventExecContexts).ArrayNum;
    this_06 = (FNiagaraScriptExecutionContextBase *)
              (pFVar44->EventExecContexts).AllocatorInstance.Data;
    if ((iVar18 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar52 = (FNiagaraScriptExecutionContextBase *)((longlong)iVar18 * 0x2b0 + (longlong)this_06);
  for (; this_06 != pFVar52;
      this_06 = (FNiagaraScriptExecutionContextBase *)&this_06[1].VectorVMState) {
    FNiagaraScriptExecutionContextBase::PostTick(this_06);
  }
  if (((GbDumpParticleData != 0) || ((*(byte *)(local_8b8 + 0x6c) & 2) != 0)) &&
     (4 < (byte)LogNiagara._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->_padding_,&local_478,(UObject *)0x0)
    ;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)this->_padding_,local_468,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_468[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468[0].Data.AllocatorInstance.Data);
      }
    }
  }
  if ((this_01->CurrentData == (FNiagaraDataBuffer *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x158,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  auVar60[4] = '\0';
  auVar60[5] = '\0';
  auVar60[6] = '\0';
  auVar60[7] = '\0';
  auVar60._0_4_ = this_01->CurrentData->NumInstances;
  if ((auVar60 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar35 = StatPtr_STAT_NiagaraNumParticles;
    if (StatPtr_STAT_NiagaraNumParticles ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraNumParticles>)0x0) {
      pFVar33 = ::FName::FName(&local_510,"STAT_NiagaraNumParticles");
      FVar35 = (FThreadSafeStaticStat<FStat_STAT_NiagaraNumParticles>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumParticles,*pFVar33,
                          L"# CPU Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
                          true,ST_int64,false,false,MCR_Invalid);
    }
    FVar50 = *(FName *)FVar35;
    local_8a0 = FVar50;
    if (((FVar50 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_03 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_03 == (FThreadStats *)0x0) {
        this_04 = FThreadStatsPool::Get();
        this_03 = FThreadStatsPool::GetFromPool(this_04);
      }
      local_6a0.NameAndInfo.Number = FVar50.Number & 0xffffafff | 0xa000;
      local_6b8 = FVar50;
      local_6a0.StatData.Pad = auVar60;
      local_6a0.NameAndInfo.Index.Value = FVar50.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_03,&local_6a0);
      FStatsTrace::Add(&local_6b8,(long64)auVar60);
      if (this_03->ScopeCount == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
LAB_1492bba01:
  if ((local_868.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_868.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_868.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_868.StatId,CycleScopeEnd);
  }
  local_868.EmittedEvent = '\0';
  if ((local_818 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_818 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_818 & 4) != 0) {
    FThreadStats::AddMessage(local_820,CycleScopeEnd);
  }
  local_818 = 0;
  if ((local_858.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_858.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_858.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_858.StatId,CycleScopeEnd);
  }
  return;
}

// UnbindParameters @ 1492be210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstanceImpl::UnbindParameters(FNiagaraEmitterInstanceImpl *this,bool param_1)

{
  FEventInstanceData *pFVar1;
  code *pcVar2;
  FNiagaraParameterStore *pFVar3;
  bool bVar4;
  TArray<TObjectPtr<UNiagaraParameterCollection>,TSizedDefaultAllocator<32>_> *pTVar5;
  UNiagaraParameterCollectionInstance *pUVar6;
  FVersionedNiagaraEmitterData *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FNiagaraParameterStore *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  
  if ((param_1) && (*(int *)((longlong)&this->_padding_ + 4) != 4)) {
    pTVar5 = UNiagaraScript::GetCachedParameterCollectionReferences
                       ((UNiagaraScript *)(this->SpawnExecContext)._padding_);
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    iVar8 = pTVar5->ArrayNum;
    pFVar9 = pFVar11 + (longlong)iVar8 * 8;
    while( true ) {
      if (pTVar5->ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar9) break;
      pUVar6 = FNiagaraSystemInstance::GetParameterCollectionInstance
                         ((FNiagaraSystemInstance *)this->_padding_,
                          *(UNiagaraParameterCollection **)pFVar11);
      if (pUVar6 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Unbind
                  (&pUVar6->ParameterStorage,
                   (FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_);
      }
      pFVar11 = pFVar11 + 8;
    }
    pTVar5 = UNiagaraScript::GetCachedParameterCollectionReferences
                       ((UNiagaraScript *)(this->UpdateExecContext)._padding_);
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    iVar8 = pTVar5->ArrayNum;
    pFVar9 = pFVar11 + (longlong)iVar8 * 8;
    while( true ) {
      if (pTVar5->ArrayNum != iVar8) {
        local_res18 = (FScriptContainerElement *)((ulonglong)local_res18 & 0xffffffffffffff00);
        `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res18);
      }
      if (pFVar11 == pFVar9) break;
      pUVar6 = FNiagaraSystemInstance::GetParameterCollectionInstance
                         ((FNiagaraSystemInstance *)this->_padding_,
                          *(UNiagaraParameterCollection **)pFVar11);
      if (pUVar6 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Unbind
                  (&pUVar6->ParameterStorage,
                   (FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_);
      }
      pFVar11 = pFVar11 + 8;
    }
    pFVar1 = (this->EventInstanceData).Ptr;
    if (pFVar1 == (FEventInstanceData *)0x0) {
      pFVar9 = (FScriptContainerElement *)0x0;
      iVar8 = 0;
    }
    else {
      iVar8 = (pFVar1->EventExecContexts).ArrayNum;
      pFVar9 = (pFVar1->EventExecContexts).AllocatorInstance.Data;
      if ((iVar8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res18 = pFVar9 + (longlong)iVar8 * 0x2b0;
    if (pFVar9 != local_res18) {
      pFVar10 = (FNiagaraParameterStore *)(pFVar9 + 0x38);
      do {
        pTVar5 = UNiagaraScript::GetCachedParameterCollectionReferences
                           (*(UNiagaraScript **)&pFVar10[-1].OriginalPositionData.ArrayNum);
        pFVar11 = (pTVar5->AllocatorInstance).Data;
        iVar8 = pTVar5->ArrayNum;
        pFVar9 = pFVar11 + (longlong)iVar8 * 8;
        while( true ) {
          if (pTVar5->ArrayNum != iVar8) {
            `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar11 == pFVar9) break;
          pUVar6 = FNiagaraSystemInstance::GetParameterCollectionInstance
                             ((FNiagaraSystemInstance *)this->_padding_,
                              *(UNiagaraParameterCollection **)pFVar11);
          if (pUVar6 != (UNiagaraParameterCollectionInstance *)0x0) {
            FNiagaraParameterStore::Unbind(&pUVar6->ParameterStorage,pFVar10);
          }
          pFVar11 = pFVar11 + 8;
        }
        pFVar3 = pFVar10 + 4;
        pFVar10 = (FNiagaraParameterStore *)&pFVar10[5].Owner;
      } while ((FScriptContainerElement *)&(pFVar3->OriginalPositionData).ArrayNum != local_res18);
    }
    FNiagaraSystemInstance::UnbindFromParameterStore
              ((FNiagaraSystemInstance *)this->_padding_,(FNiagaraParameterStore *)&this->_padding_)
    ;
    pFVar7 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_);
    FNiagaraParameterStore::Unbind
              (&pFVar7->RendererBindings,(FNiagaraParameterStore *)&this->_padding_);
    return;
  }
  FNiagaraParameterStore::UnbindFromSourceStores
            ((FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_);
  FNiagaraParameterStore::UnbindFromSourceStores
            ((FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_);
  if (this->_padding_ != 0) {
    FNiagaraParameterStore::UnbindFromSourceStores
              ((FNiagaraParameterStore *)(this->_padding_ + 0x80));
  }
  pFVar1 = (this->EventInstanceData).Ptr;
  if (pFVar1 == (FEventInstanceData *)0x0) {
    pFVar9 = (FScriptContainerElement *)0x0;
    iVar8 = 0;
  }
  else {
    iVar8 = (pFVar1->EventExecContexts).ArrayNum;
    pFVar9 = (pFVar1->EventExecContexts).AllocatorInstance.Data;
    if ((iVar8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar11 = pFVar9 + (longlong)iVar8 * 0x2b0;
  for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 0x2b0) {
    FNiagaraParameterStore::UnbindFromSourceStores((FNiagaraParameterStore *)(pFVar9 + 0x38));
  }
  return;
}

// WaitForDebugInfo @ 1492c0bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNiagaraEmitterInstanceImpl::WaitForDebugInfo(FNiagaraEmitterInstanceImpl *this)

{
  longlong lVar1;
  FNiagaraGpuComputeDispatchInterface *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FVersionedNiagaraEmitterData *pFVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraGpuComputeDispatchInterface *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraGpuComputeDispatchInterface *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lVar1 = this->_padding_;
  pFVar6 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)&this->_padding_);
  if ((pFVar6->SimTarget == GPUComputeSim) && (lVar1 != 0)) {
    pFVar2 = (this->ComputeDispatchInterfacePtr).Object;
    if (pFVar2 == (FNiagaraGpuComputeDispatchInterface *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    else {
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_60 = (undefined ***)0x0;
      pFStack_70 = pFVar2;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FNiagaraEmitterInstanceImpl::WaitForDebugInfo_::__l8::TSTR_CaptureCommand1183>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
        pFVar7 = (FRenderCommandTag *)
                 TRenderCommandTag<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::TSTR_CaptureCommand1183>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar7);
        uVar9 = (ulonglong)local_28;
        if ((2 < uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar8 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar8 = local_30;
            }
            (*(code *)(*pppuVar8)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar8 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar8 = local_60;
        }
        (*(code *)(*pppuVar8)[2])();
        FlushRenderingCommands();
        return true;
      }
    }
    FlushRenderingCommands();
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// operator() @ 15053f9a0

bool __thiscall
`FNiagaraEmitterInstanceImpl::SetExecutionState'::__l3::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  UObjectBaseUtility *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  UObject *this_00;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8942207478905440290>);
  if (bVar7) {
    lVar1 = *(longlong *)(*(longlong *)((longlong)this + 8) + 8);
    if (((lVar1 == 0) ||
        (this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar1 + 0x60)), this_00 == (UObject *)0x0)
        ) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
    }
    lVar1 = *(longlong *)(*(longlong *)((longlong)this + 8) + 8);
    if (((lVar1 == 0) ||
        (pUVar2 = *(UObjectBaseUtility **)(lVar1 + 0x50), pUVar2 == (UObjectBaseUtility *)0x0)) ||
       (*(longlong *)&pUVar2->field_0x10 == 0)) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(pUVar2,&local_38,(UObject *)0x0,None);
    }
    pUVar2 = *(UObjectBaseUtility **)(*(longlong *)((longlong)this + 8) + 0x28);
    if ((pUVar2 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(pUVar2,&local_48,(UObject *)0x0,None);
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8942207478905440290>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_15053fb15;
    }
  }
  bVar7 = false;
LAB_15053fb15:
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  return false;
}

