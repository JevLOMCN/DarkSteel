// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 35

// StaticClass @ 148e89aa0

UClass * __cdecl UNiagaraDataInterfaceSimpleCounter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSimpleCounter",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSimpleCounter,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSimpleCounter>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSimpleCounter>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.InnerSingleton;
}

// UNiagaraDataInterfaceSimpleCounter @ 148ea56d0

UNiagaraDataInterfaceSimpleCounter * __thiscall
UNiagaraDataInterfaceSimpleCounter::UNiagaraDataInterfaceSimpleCounter
          (UNiagaraDataInterfaceSimpleCounter *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->GpuSyncMode = None;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  this->InitialValue = 0;
  return this;
}

// UNiagaraDataInterfaceSimpleCounter @ 148ea5710

UNiagaraDataInterfaceSimpleCounter * __thiscall
UNiagaraDataInterfaceSimpleCounter::UNiagaraDataInterfaceSimpleCounter
          (UNiagaraDataInterfaceSimpleCounter *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  UNiagaraDataInterfaceSimpleCounter *local_res8;
  
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  puVar2 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->InitialValue = 0;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  this->GpuSyncMode = None;
  puVar1 = ::operator_new(0xc0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &___7FNDISimpleCounterProxy__6B_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[2] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 2),(FObjectPtr)&local_res8);
    *(ENiagaraGpuSyncMode *)(puVar1 + 3) = this->GpuSyncMode;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
    *(undefined4 *)(puVar1 + 10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0x80;
    *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceSimpleCounter @ 148ea6e60

void __thiscall
UNiagaraDataInterfaceSimpleCounter::~UNiagaraDataInterfaceSimpleCounter
          (UNiagaraDataInterfaceSimpleCounter *this)

{
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  return;
}

// operator() @ 148ea7cd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceSimpleCounter::DestroyPerInstanceData'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FNDISimpleCounterInstanceData_RenderThread *pFVar4;
  
  pFVar4 = TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x20),*(ulong64 *)((longlong)this + 8));
  if (pFVar4 != (FNDISimpleCounterInstanceData_RenderThread *)0x0) {
    if (pFVar4->CountOffset == 0xffffffff) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1715637597058892037>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceSimpleCounter.cpp"
                         ,0x105,"InstanceData->CountOffset != INDEX_NONE");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      lVar1 = *(longlong *)((longlong)this + 0x10);
      bVar3 = IsInParallelRenderingThread();
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                           ,0x6a,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FNiagaraGPUInstanceCountManager::FreeEntry
                ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),&pFVar4->CountOffset);
      pFVar4->CountOffset = 0xffffffff;
    }
    TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x20),*(ulong64 *)((longlong)this + 8));
  }
  return;
}

// operator() @ 148ea7e50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceSimpleCounter::InitPerInstanceData'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  longlong local_res18;
  
  lVar1 = *(longlong *)this;
  local_res18 = (longlong)this + 8;
  TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x20),&local_res8,(bool *)&local_res18);
  puVar5 = (undefined4 *)(*(longlong *)(lVar1 + 0x20) + (longlong)(int)local_res8.Key * 0x20 + 8);
  if ((undefined4 *)((longlong)this + 0x18) != puVar5) {
    *puVar5 = *(undefined4 *)((longlong)this + 0x18);
    *(undefined1 *)(puVar5 + 1) = 1;
  }
  lVar1 = *(longlong *)((longlong)this + 0x10);
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = FNiagaraGPUInstanceCountManager::AcquireOrAllocateEntry
                    ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),param_1);
  puVar5[2] = uVar4;
  return;
}

// operator() @ 148ea8390

void __thiscall
`UNiagaraDataInterfaceSimpleCounter::PushToRenderThreadImpl'::__l10::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)((longlong)this + 0x50);
  puVar7 = *(ulonglong **)((longlong)this + 0x48);
  if (*(ulonglong **)((longlong)this + 0x48) == (ulonglong *)0x0) {
    puVar7 = (ulonglong *)((longlong)this + 8);
  }
  puVar8 = puVar7 + (longlong)iVar1 * 2;
LAB_148ea83d0:
  do {
    if (*(int *)((longlong)this + 0x50) != iVar1) {
      `TCheckedPointerIterator<TTuple<unsigned___int64,int>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar7 == puVar8) {
      return;
    }
    lVar2 = *(longlong *)this;
    uVar3 = *puVar7;
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar9 = lVar2 + 0x58;
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        lVar9 = *(longlong *)(lVar2 + 0x60);
      }
      iVar4 = *(int *)(lVar9 + ((uVar3 >> 0x20) * 0x17 + uVar3 &
                               (ulonglong)(*(int *)(lVar2 + 0x68) - 1)) * 4);
      if (iVar4 != -1) {
        do {
          puVar5 = (ulonglong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar2 + 0x20));
          if (*puVar5 == uVar3) {
            puVar6 = puVar5 + 1;
            if (puVar5 == (ulonglong *)0x0) {
              puVar6 = (ulonglong *)0x0;
            }
            if ((puVar6 != (ulonglong *)0x0) && (puVar7 + 1 != puVar6)) {
              *(int *)puVar6 = (int)puVar7[1];
              *(undefined1 *)((longlong)puVar6 + 4) = 1;
            }
            goto LAB_148ea846d;
          }
          iVar4 = (int)puVar5[3];
        } while (iVar4 != -1);
        puVar7 = puVar7 + 2;
        goto LAB_148ea83d0;
      }
    }
LAB_148ea846d:
    puVar7 = puVar7 + 2;
  } while( true );
}

// operator() @ 148ea8be0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  longlong lVar2;
  FNiagaraGpuReadbackManager *this_00;
  code *pcVar3;
  bool bVar4;
  FNDISimpleCounterInstanceData_RenderThread *pFVar5;
  FRWBuffer *pFVar6;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  pFVar5 = TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x20),*(ulong64 *)((longlong)this + 8));
  if ((pFVar5 != (FNDISimpleCounterInstanceData_RenderThread *)0x0) &&
     (pFVar5->CountOffset != 0xffffffff)) {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    bVar4 = IsInParallelRenderingThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_10 = 0;
    this_00 = *(FNiagaraGpuReadbackManager **)(*(longlong *)((longlong)this + 0x10) + 0x38);
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::`15'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_20 = *(undefined8 *)((longlong)this + 0x18);
    local_18 = *(undefined4 *)((longlong)this + 0x20);
    uVar1 = pFVar5->CountOffset;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
    pFVar6 = FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer
                       ((FNiagaraGPUInstanceCountManager *)(lVar2 + 0x48));
    FNiagaraGpuReadbackManager::EnqueueReadback
              (this_00,(FRHICommandList *)param_1,(pFVar6->Buffer).Reference,uVar1 << 2,4,
               (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
               local_38);
    FNiagaraGpuReadbackManager::WaitCompletion(this_00,param_1);
  }
  return;
}

// BuildShaderParameters @ 148ead050

void __thiscall
UNiagaraDataInterfaceSimpleCounter::BuildShaderParameters
          (UNiagaraDataInterfaceSimpleCounter *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceSimpleCounter::FShaderParameters>::
           GetStructMetadata();
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x10;
  return;
}

// CanExecuteOnTarget @ 148eadd60

bool __thiscall
UNiagaraDataInterfaceSimpleCounter::CanExecuteOnTarget
          (UNiagaraDataInterfaceSimpleCounter *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148eafba0

bool __thiscall
UNiagaraDataInterfaceSimpleCounter::CopyToInternal
          (UNiagaraDataInterfaceSimpleCounter *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *(ENiagaraGpuSyncMode *)&param_1[1]._padding_ = this->GpuSyncMode;
      *(int *)((longlong)&param_1[1]._padding_ + 4) = this->InitialValue;
      UpdateDIProxy((UNiagaraDataInterfaceSimpleCounter *)param_1);
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceSimpleCounter>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceSimpleCounter>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// DestroyPerInstanceData @ 148eb51a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UNiagaraDataInterfaceSimpleCounter::DestroyPerInstanceData
          (UNiagaraDataInterfaceSimpleCounter *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  code *pcVar2;
  FNiagaraGpuComputeDispatchInterface *pFVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  ulong64 local_a8 [2];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
    pcVar1 = (code *)this->_padding_;
    if (pcVar1 == (code *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_a8[0] = param_2->ID;
    if (*(int *)(pcVar1 + 0x78) != *(int *)(pcVar1 + 0xa4)) {
      TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
                  *)(pcVar1 + 0x70),(int)(local_a8[0] >> 0x20) * 0x17 + (int)local_a8[0],local_a8);
    }
    pcVar2 = (code *)param_2->ID;
    pFVar3 = (param_2->ComputeDispatchInterfacePtr).Object;
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x20,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::DestroyPerInstanceData'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_70[1] = pcVar1;
    local_70[2] = pcVar2;
    local_70[3] = (code *)pFVar3;
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceSimpleCounter::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSimpleCounter::DestroyPerInstanceData_::__l5::TSTR_FNDISimpleCounter_RemoveProxy255>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceSimpleCounter::DestroyPerInstanceData'::__l5::TSTR_FNDISimpleCounter_RemoveProxy255>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar5);
      uVar7 = (ulonglong)local_38;
      if (2 < uVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar6 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar6 = local_40;
          }
          (**(code **)(*ppcVar6 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar6 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar6 = local_70;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
  }
  return;
}

// Equals @ 148eb69b0

bool __thiscall
UNiagaraDataInterfaceSimpleCounter::Equals
          (UNiagaraDataInterfaceSimpleCounter *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSimpleCounter_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSimpleCounter_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    if (((ENiagaraGpuSyncMode)param_1[1]._padding_ == this->GpuSyncMode) &&
       (*(int *)((longlong)&param_1[1]._padding_ + 4) == this->InitialValue)) {
      return true;
    }
  }
  return false;
}

// GetNextValue_Deprecated @ 148ebeb50

void __thiscall
UNiagaraDataInterfaceSimpleCounter::GetNextValue_Deprecated
          (UNiagaraDataInterfaceSimpleCounter *this,FVectorVMExternalFunctionContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  float *pfVar3;
  int iVar4;
  int local_20 [2];
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>::
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      LOCK();
      paVar1 = &(local_18.Ptr)->Counter;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      iVar4 = iVar4 + 1;
      *pfVar3 = (float)((int)aVar2 + 1);
      pfVar3 = pfVar3 + local_20[0];
    } while (iVar4 < param_1->NumInstances);
  }
  if ((this->GpuSyncMode == SyncBoth) || (this->GpuSyncMode == SyncCpuToGpu)) {
    (local_18.Ptr)->bModified = true;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
    if ((this->_padding_ & 4) != 0) {
      (**(code **)(this->_padding_ + 0x448))(this);
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
    }
  }
  return;
}

// GetPrivateStaticClass @ 148ebff20

UClass * __cdecl UNiagaraDataInterfaceSimpleCounter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSimpleCounter",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSimpleCounter,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSimpleCounter>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSimpleCounter>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.InnerSingleton;
}

// GetVMExternalFunction @ 148ec6210

void __thiscall
UNiagaraDataInterfaceSimpleCounter::GetVMExternalFunction
          (UNiagaraDataInterfaceSimpleCounter *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UNiagaraDataInterfaceSimpleCounter *local_res10;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDISimpleCounterLocal::NAME_GetNextValue_Deprecated) {
    local_78 = GetNextValue_Deprecated;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimpleCounter____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  else if (FVar1 == NDISimpleCounterLocal::NAME_Get) {
    local_78 = VMGet;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimpleCounter____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  else if (FVar1 == NDISimpleCounterLocal::NAME_Set) {
    local_78 = VMSet;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimpleCounter____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  else if (FVar1 == NDISimpleCounterLocal::NAME_Exchange) {
    local_78 = VMExchange;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimpleCounter____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  else if (FVar1 == NDISimpleCounterLocal::NAME_Add) {
    local_78 = VMAdd;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimpleCounter____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  else if (FVar1 == NDISimpleCounterLocal::NAME_Increment) {
    local_78 = VMIncrement;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimpleCounter____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  else {
    if (FVar1 != NDISimpleCounterLocal::NAME_Decrement) {
      return;
    }
    local_78 = VMDecrement;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimpleCounter____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimpleCounter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
               (FDestructionSentinel *)&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// InitPerInstanceData @ 148ec82e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UNiagaraDataInterfaceSimpleCounter::InitPerInstanceData
          (UNiagaraDataInterfaceSimpleCounter *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStack_108 [32];
  TPairInitializer<unsigned___int64_&&,FNDISimpleCounterInstanceData_GameThread_*_const_&> local_e8;
  void *local_d8;
  FNDISimpleCounterInstanceData_GameThread ***local_d0;
  void **local_c8;
  code *local_c0;
  code *pcStack_b8;
  FNiagaraGpuComputeDispatchInterface *local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)param_1 = 1;
  LOCK();
  *(int *)((longlong)param_1 + 4) = this->InitialValue;
  UNLOCK();
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
    pcVar1 = (code *)this->_padding_;
    local_d8 = param_1;
    if (pcVar1 == (code *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_e8.Value = (FNDISimpleCounterInstanceData_GameThread **)param_2->ID;
    local_d0 = &local_e8.Value;
    local_c8 = &local_d8;
    TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_&&,FNDISimpleCounterInstanceData_GameThread_*_const_&>_>
              ((TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
                *)(pcVar1 + 0x70),&local_e8,(bool *)&local_d0);
    pcStack_b8 = (code *)param_2->ID;
    local_b0 = (param_2->ComputeDispatchInterfacePtr).Object;
    iStack_a8 = this->InitialValue;
    local_98[0] = (code *)0x0;
    local_c0 = pcVar1;
    local_70 = FMemory::Malloc(0x28,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::InitPerInstanceData'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_70[1] = local_c0;
    local_70[2] = pcStack_b8;
    local_70[3] = (code *)local_b0;
    local_70[4] = (code *)CONCAT44(uStack_a4,iStack_a8);
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceSimpleCounter::InitPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSimpleCounter::InitPerInstanceData_::__l5::TSTR_FNDISimpleCounter_RemoveProxy232>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceSimpleCounter::InitPerInstanceData'::__l5::TSTR_FNDISimpleCounter_RemoveProxy232>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar4);
      uVar6 = (ulonglong)local_38;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar5 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar5 = local_40;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar5 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar5 = local_70;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
  }
  return true;
}

// PerInstanceDataSize @ 148ec8fd0

int __thiscall
UNiagaraDataInterfaceSimpleCounter::PerInstanceDataSize(UNiagaraDataInterfaceSimpleCounter *this)

{
  return 8;
}

// PostInitProperties @ 148ecb5a0

void __thiscall
UNiagaraDataInterfaceSimpleCounter::PostInitProperties(UNiagaraDataInterfaceSimpleCounter *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// PostLoad @ 148ecb630

void __thiscall
UNiagaraDataInterfaceSimpleCounter::PostLoad(UNiagaraDataInterfaceSimpleCounter *this)

{
  UNiagaraDataInterface::PostLoad((UNiagaraDataInterface *)this);
  UpdateDIProxy(this);
  return;
}

// PushToRenderThreadImpl @ 148ecc530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceSimpleCounter::PushToRenderThreadImpl(UNiagaraDataInterfaceSimpleCounter *this)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  ulonglong uVar8;
  code **ppcVar9;
  ForElementType<TTuple<unsigned___int64,int>_> FVar10;
  code *pcVar11;
  TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  *pTVar12;
  uint uVar13;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined1 auStack_200 [16];
  uint uStack_1f0;
  uint uStack_1ec;
  longlong local_1e8;
  TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  *pTStack_1e0;
  TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  *local_1d8;
  undefined2 local_1d0;
  undefined4 local_1c8;
  code *local_1c0;
  code *pcStack_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  code *pcStack_198;
  code *local_190;
  code *pcStack_188;
  code *local_178;
  code *pcStack_170;
  code *local_168;
  code *pcStack_160;
  code *local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  undefined1 local_128 [32];
  longlong local_108;
  TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  *pTStack_100;
  code *local_f8 [2];
  code *local_e8 [3];
  code **local_d0;
  undefined1 local_c8 [16];
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  code *pcStack_90;
  ForElementType<TTuple<unsigned___int64,int>_> local_88;
  int local_80;
  int local_7c;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  lVar1 = this->_padding_;
  local_88 = (ForElementType<TTuple<unsigned___int64,int>_>)0x0;
  local_80 = 0;
  local_7c = 4;
  if ((lVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar5)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar12 = (TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
             *)(lVar1 + 0x70);
  TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_128,pTVar12);
  local_1d0 = 0;
  stack0xfffffffffffffe08 = local_128._16_16_;
  local_208 = (longlong *)local_128._0_8_;
  auStack_200._0_8_ = local_128._8_8_;
  local_1e8 = local_108;
  pTStack_1e0 = pTStack_100;
  uVar8 = local_128._24_8_ >> 0x20;
  uVar13 = local_128._28_4_;
  local_1d8 = pTVar12;
  if ((int)uVar13 < *(int *)(local_128._16_8_ + 0x18)) {
    do {
      pcVar2 = *(char **)(*local_208 + 8 + (longlong)(int)uVar8 * 0x18);
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        lVar1 = *local_208;
        lVar3 = *(longlong *)(lVar1 + 8 + (longlong)(int)uVar13 * 0x18);
        if (local_80 == local_7c) {
          local_80 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<unsigned___int64,int>_>_>
                               (0x810,(ForElementType<TTuple<unsigned___int64,int>_> *)local_c8,
                                &local_7c);
        }
        FVar10 = (ForElementType<TTuple<unsigned___int64,int>_>)local_c8;
        if (local_88 != (ForElementType<TTuple<unsigned___int64,int>_>)0x0) {
          FVar10 = local_88;
        }
        pcVar11 = (code *)((longlong)FVar10 + (longlong)local_80 * 0x10);
        local_80 = local_80 + 1;
        *(undefined8 *)pcVar11 = *(undefined8 *)(lVar1 + (longlong)(int)uVar13 * 0x18);
        *(undefined4 *)(pcVar11 + 8) = *(undefined4 *)(lVar3 + 4);
      }
      uStack_1f0 = uStack_1f0 & ~auStack_200._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_200);
      uVar8 = (ulonglong)uStack_1ec;
      uVar13 = uStack_1ec;
    } while ((int)uStack_1ec < *(int *)(auStack_200._8_8_ + 0x18));
    if (((char)local_1d0 != '\0') && (local_1d0._1_1_ != '\0')) {
      uVar13 = *(int *)&(local_1d8->Elements).field_0x8 - *(int *)&(local_1d8->Elements).field_0x34;
      if (uVar13 < 4) {
        iVar6 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        local_1c8 = (undefined4)lVar1;
        iVar6 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_1d8->HashSize < iVar6)) || (iVar6 < local_1d8->HashSize)) {
        local_1d8->HashSize = iVar6;
        TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
        ::Rehash(local_1d8);
      }
    }
  }
  if (0 < local_80) {
    pcVar11 = (code *)this->_padding_;
    if ((pcVar11 == (code *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar5)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar4 = local_7c;
    iVar6 = local_80;
    FVar10 = local_88;
    if (local_88 == (ForElementType<TTuple<unsigned___int64,int>_>)0x0) {
      local_178 = (code *)local_c8._0_8_;
      pcStack_170 = (code *)local_c8._8_8_;
      local_168 = local_b8;
      pcStack_160 = pcStack_b0;
      local_158 = local_a8;
      pcStack_150 = pcStack_a0;
      local_148 = local_98;
      pcStack_140 = pcStack_90;
    }
    local_80 = 0;
    local_7c = 4;
    local_88 = (ForElementType<TTuple<unsigned___int64,int>_>)0x0;
    local_f8[0] = (code *)0x0;
    local_1c0 = local_178;
    pcStack_1b8 = pcStack_170;
    local_1b0 = local_168;
    pcStack_1a8 = pcStack_160;
    local_1a0 = local_158;
    pcStack_198 = pcStack_150;
    local_190 = local_148;
    pcStack_188 = pcStack_140;
    local_d0 = FMemory::Malloc(0x60,8);
    local_d0[1] = pcVar11;
    local_d0[10] = (code *)0x0;
    *local_d0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::PushToRenderThreadImpl'::`10'::<lambda_1>,1,1>
                         ::_vftable_;
    if (FVar10 == (ForElementType<TTuple<unsigned___int64,int>_>)0x0) {
      local_d0[2] = local_1c0;
      local_d0[3] = pcStack_1b8;
      local_d0[4] = local_1b0;
      local_d0[5] = pcStack_1a8;
      local_d0[6] = local_1a0;
      local_d0[7] = pcStack_198;
      local_d0[8] = local_190;
      local_d0[9] = pcStack_188;
    }
    *(ForElementType<TTuple<unsigned___int64,int>_> *)(local_d0 + 10) = FVar10;
    *(int *)(local_d0 + 0xb) = iVar6;
    *(int *)((longlong)local_d0 + 0x5c) = iVar4;
    if (local_d0 != (code **)&DAT_fffffffffffffff8) {
      local_f8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceSimpleCounter::PushToRenderThreadImpl'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSimpleCounter::PushToRenderThreadImpl_::__l10::TSTR_FNDISimpleCounter_PushToRender469>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_f8[0];
      local_50 = local_d0;
      local_d0 = (code **)0x0;
      local_78._16_8_ = local_e8[0];
      local_78._24_8_ = local_e8[1];
      local_78._32_8_ = local_e8[2];
      local_f8[0] = (code *)0x0;
      local_48 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceSimpleCounter::PushToRenderThreadImpl'::__l10::TSTR_FNDISimpleCounter_PushToRender469>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar7);
      uVar8 = (ulonglong)local_48;
      if ((2 < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar9 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar9 = local_50;
          }
          (**(code **)(*ppcVar9 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_78);
      }
    }
    if (local_f8[0] != (code *)0x0) {
      ppcVar9 = local_f8 + 2;
      if (local_d0 != (code **)0x0) {
        ppcVar9 = local_d0;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
  }
  if (local_88 != (ForElementType<TTuple<unsigned___int64,int>_>)0x0) {
    FMemory::Free((void *)local_88);
  }
  return;
}

// SetShaderParameters @ 148ed16a0

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
UNiagaraDataInterfaceSimpleCounter::SetShaderParameters
          (UNiagaraDataInterfaceSimpleCounter *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FShaderParametersMetadata *pFVar5;
  FName *pFVar6;
  ulong64 *puVar7;
  uint uVar8;
  int local_res10 [2];
  ulong64 local_res18;
  ulong64 *local_res20;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = param_1->DataInterfaceProxy;
  local_res18 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  uVar8 = (int)(local_res18 >> 0x20) * 0x17 + (int)local_res18;
  if (pFVar1[2].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar1[5]._padding_ + 4))
  {
    pFVar6 = (FName *)pFVar1[6]._padding_;
    if ((FName *)pFVar1[6]._padding_ == (FName *)0x0) {
      pFVar6 = &pFVar1[5].SourceDIName;
    }
    uVar4 = (&pFVar6->ComparisonIndex)[pFVar1[6].SourceDIName.ComparisonIndex.Value - 1 & uVar8].
            Value;
    if (uVar4 != 0xffffffff) {
      do {
        puVar7 = (ulong64 *)((longlong)(int)uVar4 * 0x20 + pFVar1[2]._padding_);
        if (*puVar7 == local_res18) {
          if (puVar7 != (ulong64 *)0x0) goto LAB_148ed1784;
          break;
        }
        uVar4 = (uint)puVar7[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_res20 = &local_res18;
  TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_&&>_>
            ((TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(pFVar1 + 2),(uint)local_res10,
             (TKeyInitializer<unsigned___int64_&&> *)(ulonglong)uVar8,(bool *)&local_res20);
  puVar7 = (ulong64 *)((longlong)local_res10[0] * 0x20 + pFVar1[2]._padding_);
LAB_148ed1784:
  uVar8 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceSimpleCounter::FShaderParameters>::
           GetStructMetadata();
  param_1->ParametersOffset = pFVar5->Size + uVar8;
  *(int *)(param_1->BaseParameters + uVar8) = (int)puVar7[2];
  return;
}

// SimCacheBeginWrite @ 148ed1f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UNiagaraDataInterfaceSimpleCounter::SimCacheBeginWrite
          (UNiagaraDataInterfaceSimpleCounter *this,UObject *param_1,FNiagaraSystemInstance *param_2
          ,void *param_3,FNiagaraSimCacheFeedbackContext *param_4)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_3 == (void *)0x0) {
    pUVar2 = (UObject *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = UNDISimpleCounterSimCacheData::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = param_1;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return pUVar2;
}

// SimCacheCompareFrame @ 148ed2690

bool __thiscall
UNiagaraDataInterfaceSimpleCounter::SimCacheCompareFrame
          (UNiagaraDataInterfaceSimpleCounter *this,UObject *param_1,UObject *param_2,int param_3,
          TOptional<float> param_4,FString *param_5)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  UNDISimpleCounterSimCacheData *pUVar11;
  UNDISimpleCounterSimCacheData *pUVar12;
  ForAnyElementType FVar13;
  FString local_48;
  FString local_38;
  
  pUVar11 = CastChecked<UNDISimpleCounterSimCacheData_const_,UObject_const_>(param_1);
  pUVar12 = CastChecked<UNDISimpleCounterSimCacheData_const_,UObject_const_>(param_2);
  uVar5 = param_3 * 2;
  iVar2 = (pUVar12->Values).ArrayNum;
  if ((pUVar11->Values).ArrayNum == iVar2) {
    uVar8 = 0;
    if ((int)uVar5 < iVar2) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar3 = (pUVar12->Values).AllocatorInstance.Data;
    uVar8 = 0;
    if ((int)uVar5 < (pUVar11->Values).ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    uVar8 = 0;
    uVar10 = 0;
    if (*(int *)((pUVar11->Values).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) ==
        *(int *)(pFVar3 + (longlong)(int)uVar5 * 4)) {
      uVar1 = uVar5 + 1;
      uVar9 = uVar8;
      if ((int)uVar1 < (pUVar12->Values).ArrayNum) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar3 = (pUVar12->Values).AllocatorInstance.Data;
      uVar9 = uVar10;
      if ((int)uVar1 < (pUVar11->Values).ArrayNum) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (*(int *)((pUVar11->Values).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) ==
          *(int *)(pFVar3 + (longlong)(int)uVar1 * 4)) {
        return true;
      }
    }
    uVar1 = uVar5 + 1;
    uVar9 = uVar10;
    if ((int)uVar1 < (pUVar12->Values).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    uVar9 = uVar8;
    if ((int)uVar5 < (pUVar12->Values).ArrayNum) {
      uVar9 = ~uVar5 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if ((int)uVar1 < (pUVar11->Values).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if ((int)uVar5 < (pUVar11->Values).ArrayNum) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    ::FString::PrintfImpl
              (&local_38,L"Cpu|Gpu values to do not match LhsValues(%d|%d) != RhsValues(%d|%d)");
    FVar13.Data = local_38.Data.AllocatorInstance.Data;
    if (param_5 != &local_38) {
      pFVar3 = (param_5->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_5->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (param_5->Data).ArrayNum = local_38.Data.ArrayNum;
      (param_5->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar13.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    ::FString::PrintfImpl(&local_48,L"Number of LhsValues(%d) != RhsValues(%d)");
    FVar13.Data = local_48.Data.AllocatorInstance.Data;
    if (param_5 != &local_48) {
      pFVar3 = (param_5->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (param_5->Data).ArrayNum = local_48.Data.ArrayNum;
      (param_5->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar13.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return false;
}

// SimCacheReadFrame @ 148ed3620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UNiagaraDataInterfaceSimpleCounter::SimCacheReadFrame
          (UNiagaraDataInterfaceSimpleCounter *this,
          FNiagaraSimCacheDataInterfaceReadContext *param_1)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UNDISimpleCounterSimCacheData *pUVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  uint uVar9;
  code **ppcVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  code *local_b8;
  code *pcStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar12 = param_1->FrameIndexA * 2;
  pUVar7 = CastChecked<UNDISimpleCounterSimCacheData,UObject>(param_1->StorageObject);
  if ((pUVar7->Values).ArrayNum < (int)(uVar12 + 2)) {
    bVar5 = false;
  }
  else {
    if (param_1->OptionalPerInstanceData == (void *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OptionalPerInstanceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraSimCacheCustomStorageInterface.h"
                         ,0x1d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar1 = (pUVar7->Values).ArrayNum;
    pvVar2 = param_1->OptionalPerInstanceData;
    uVar9 = 0;
    if ((int)uVar12 < iVar1) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_c8 = (longlong)(int)uVar12;
      local_c0 = (longlong)iVar1;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    LOCK();
    *(undefined4 *)((longlong)pvVar2 + 4) =
         *(undefined4 *)((pUVar7->Values).AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
    UNLOCK();
    if ((*(uint *)&this[-1].GpuSyncMode >> 2 & 1) != 0) {
      pcVar4 = (code *)this[-1]._padding_;
      if (pcVar4 == (code *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      uVar12 = uVar12 + 1;
      iVar1 = (pUVar7->Values).ArrayNum;
      pcVar3 = (code *)param_1->SystemInstance->ID;
      uVar9 = 0;
      if ((int)uVar12 < iVar1) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_c8 = (longlong)(int)uVar12;
        local_c0 = (longlong)iVar1;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      local_a8 = *(undefined4 *)
                  ((pUVar7->Values).AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
      local_98[0] = (code *)0x0;
      local_b8 = pcVar4;
      pcStack_b0 = pcVar3;
      local_70 = FMemory::Malloc(0x20,8);
      *local_70 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::SimCacheReadFrame'::`8'::<lambda_1>,1,1>
                           ::_vftable_;
      local_70[1] = local_b8;
      local_70[2] = pcStack_b0;
      local_70[3] = (code *)CONCAT44(uStack_a4,local_a8);
      if (local_70 + 1 != (code **)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceSimpleCounter::SimCacheReadFrame'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSimpleCounter::SimCacheReadFrame_::__l8::TSTR_FNDISimpleCounter_PushToRender557>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_68._0_8_ = local_98[0];
        local_40 = local_70;
        local_70 = (code **)0x0;
        local_68._16_8_ = local_88[0];
        local_68._24_8_ = local_88[1];
        local_68._32_8_ = local_88[2];
        local_98[0] = (code *)0x0;
        local_38 = 2;
        pFVar8 = (FRenderCommandTag *)
                 TRenderCommandTag<`UNiagaraDataInterfaceSimpleCounter::SimCacheReadFrame'::__l8::TSTR_FNDISimpleCounter_PushToRender557>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_68,pFVar8);
        uVar11 = (ulonglong)local_38;
        if (2 < uVar11) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            ppcVar10 = (code **)(local_68 + 0x10);
            if (local_40 != (code **)0x0) {
              ppcVar10 = local_40;
            }
            (**(code **)(*ppcVar10 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11])(local_68);
        }
      }
      if (local_98[0] != (code *)0x0) {
        ppcVar10 = local_98 + 2;
        if (local_70 != (code **)0x0) {
          ppcVar10 = local_70;
        }
        (**(code **)(*ppcVar10 + 0x10))();
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

// SimCacheWriteFrame @ 148ed44e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame
          (UNiagaraDataInterfaceSimpleCounter *this,UObject *param_1,int param_2,
          FNiagaraSystemInstance *param_3,void *param_4,FNiagaraSimCacheFeedbackContext *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  FNiagaraGpuComputeDispatchInterface *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  UNDISimpleCounterSimCacheData *pUVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  uint uVar12;
  code **ppcVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStackY_118 [32];
  undefined4 uStack_c4;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((param_4 == (void *)0x0) || (param_1 == (UObject *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OptionalPerInstanceData && StorageObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceSimpleCounter.cpp"
                       ,0x1ec,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  pUVar10 = CastChecked<UNDISimpleCounterSimCacheData,UObject>(param_1);
  iVar15 = (pUVar10->Values).ArrayNum;
  uVar5 = param_2 * 2;
  if (iVar15 < (int)(uVar5 + 2)) {
    iVar15 = (uVar5 + 2) - iVar15;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar15,&(pUVar10->Values).AllocatorInstance,&(pUVar10->Values).ArrayNum,
                       &(pUVar10->Values).ArrayMax);
    memset((pUVar10->Values).AllocatorInstance.Data + (longlong)iVar8 * 4,0,(longlong)iVar15 << 2);
  }
  uVar1 = *(undefined4 *)((longlong)param_4 + 4);
  uVar12 = 0;
  if ((int)uVar5 < (pUVar10->Values).ArrayNum) {
    uVar12 = ~uVar5 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  *(undefined4 *)((pUVar10->Values).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = uVar1;
  uVar1 = *(undefined4 *)((longlong)param_4 + 4);
  uVar12 = uVar5 + 1;
  uVar9 = 0;
  if ((int)uVar12 < (pUVar10->Values).ArrayNum) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  *(undefined4 *)((pUVar10->Values).AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = uVar1;
  if ((*(uint *)&this[-1].GpuSyncMode >> 2 & 1) != 0) {
    pcVar4 = (code *)this[-1]._padding_;
    if (pcVar4 == (code *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a8,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    pcVar2 = (code *)param_3->ID;
    pFVar3 = (param_3->ComputeDispatchInterfacePtr).Object;
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x30,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::`15'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[1] = pcVar4;
    local_90[2] = pcVar2;
    local_90[3] = (code *)pFVar3;
    local_90[4] = (code *)pUVar10;
    local_90[5] = (code *)CONCAT44(uStack_c4,uVar5);
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame_::__l15::TSTR_FNDISimpleCounter_CacheWriteFrame509>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar11 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::TSTR_FNDISimpleCounter_CacheWriteFrame509>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar11);
      uVar14 = (ulonglong)local_58;
      if (2 < uVar14) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar13 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar13 = local_60;
          }
          (**(code **)(*ppcVar13 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar13 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar13 = local_90;
      }
      (**(code **)(*ppcVar13 + 0x10))();
    }
    FlushRenderingCommands();
  }
  return true;
}

// StaticRegisterNativesUNiagaraDataInterfaceSimpleCounter @ 148ed4ca0

void __cdecl
UNiagaraDataInterfaceSimpleCounter::StaticRegisterNativesUNiagaraDataInterfaceSimpleCounter(void)

{
  return;
}

// UpdateDIProxy @ 148ed5660

void __thiscall
UNiagaraDataInterfaceSimpleCounter::UpdateDIProxy(UNiagaraDataInterfaceSimpleCounter *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ != 0) {
    *(ENiagaraGpuSyncMode *)(this->_padding_ + 0x18) = this->GpuSyncMode;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("TypedProxy != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                     ,0x3a0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DAT_00000018 = this->GpuSyncMode;
  return;
}

// VMAdd @ 148ed7740

void __thiscall
UNiagaraDataInterfaceSimpleCounter::VMAdd
          (UNiagaraDataInterfaceSimpleCounter *this,FVectorVMExternalFunctionContext *param_1)

{
  atomic<int> *paVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  atomic<int> aVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  atomic<int> aVar12;
  int iVar13;
  atomic<int> *paVar14;
  int iVar15;
  atomic<int> *paVar16;
  longlong lVar17;
  int local_60 [2];
  int local_58 [2];
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> local_50;
  
  VectorVM::FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>::
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>(&local_50,param_1);
  iVar13 = 0;
  local_58[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar5 = local_58[0];
  iVar15 = local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_58[0] = 0;
  pfVar8 = pfVar8 + iVar15;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar6 = local_58[0];
  local_60[0] = 0;
  pfVar9 = pfVar9 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar4 = local_60[0];
  lVar17 = (longlong)local_60[0];
  local_60[0] = 0;
  iVar15 = param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  if (0 < param_1->NumInstances) {
    paVar14 = (atomic<int> *)(pfVar10 + iVar4 * iVar15);
    paVar16 = (atomic<int> *)(pfVar11 + local_60[0] * param_1->PerInstanceFnInstanceIdx);
    do {
      fVar2 = *pfVar8;
      fVar3 = *pfVar9;
      pfVar8 = pfVar8 + iVar5;
      pfVar9 = pfVar9 + iVar6;
      if (fVar2 == 0.0) {
        aVar7 = (local_50.Ptr)->Counter;
        aVar12 = aVar7;
      }
      else {
        LOCK();
        paVar1 = &(local_50.Ptr)->Counter;
        aVar7 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + (int)fVar3);
        UNLOCK();
        aVar12 = (atomic<int>)((int)aVar7 + (int)fVar3);
      }
      *paVar14 = aVar7;
      iVar13 = iVar13 + 1;
      *paVar16 = aVar12;
      paVar14 = paVar14 + lVar17;
      paVar16 = paVar16 + local_60[0];
    } while (iVar13 < param_1->NumInstances);
  }
  if ((this->GpuSyncMode == SyncBoth) || (this->GpuSyncMode == SyncCpuToGpu)) {
    (local_50.Ptr)->bModified = true;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
    if ((this->_padding_ & 4) != 0) {
      (**(code **)(this->_padding_ + 0x448))(this);
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
    }
  }
  return;
}

// VMDecrement @ 148ed8c90

void __thiscall
UNiagaraDataInterfaceSimpleCounter::VMDecrement
          (UNiagaraDataInterfaceSimpleCounter *this,FVectorVMExternalFunctionContext *param_1)

{
  atomic<int> *paVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  int iVar9;
  longlong lVar10;
  atomic<int> *paVar11;
  atomic<int> *paVar12;
  longlong lVar13;
  int local_50 [2];
  int local_48 [2];
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> local_40;
  
  VectorVM::FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>::
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>(&local_40,param_1);
  iVar9 = 0;
  local_48[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar4 = local_48[0];
  lVar13 = (longlong)local_48[0];
  local_50[0] = 0;
  pfVar5 = pfVar5 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar3 = local_50[0];
  lVar10 = (longlong)local_50[0];
  local_50[0] = 0;
  paVar11 = (atomic<int> *)(pfVar6 + iVar3 * param_1->PerInstanceFnInstanceIdx);
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  paVar12 = (atomic<int> *)(pfVar6 + local_50[0] * param_1->PerInstanceFnInstanceIdx);
  if (iVar4 < 1) {
    fVar2 = *pfVar5;
    if (fVar2 == 0.0) {
      aVar8 = (local_40.Ptr)->Counter;
    }
    else {
      LOCK();
      paVar1 = &(local_40.Ptr)->Counter;
      aVar8 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 - param_1->NumInstances);
      UNLOCK();
    }
    if (0 < param_1->NumInstances) {
      do {
        aVar7 = (atomic<int>)((int)aVar8 - (uint)(fVar2 != 0.0));
        iVar9 = iVar9 + 1;
        *paVar11 = aVar8;
        *paVar12 = aVar7;
        paVar11 = paVar11 + lVar10;
        paVar12 = paVar12 + local_50[0];
        aVar8 = aVar7;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + lVar13;
      if (fVar2 == 0.0) {
        aVar8 = (local_40.Ptr)->Counter;
        aVar7 = aVar8;
      }
      else {
        LOCK();
        paVar1 = &(local_40.Ptr)->Counter;
        aVar8 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        aVar7 = (atomic<int>)((int)aVar8 + -1);
      }
      *paVar11 = aVar8;
      iVar9 = iVar9 + 1;
      *paVar12 = aVar7;
      paVar11 = paVar11 + lVar10;
      paVar12 = paVar12 + local_50[0];
    } while (iVar9 < param_1->NumInstances);
  }
  if ((this->GpuSyncMode == SyncBoth) || (this->GpuSyncMode == SyncCpuToGpu)) {
    (local_40.Ptr)->bModified = true;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
    if ((this->_padding_ & 4) != 0) {
      (**(code **)(this->_padding_ + 0x448))(this);
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
    }
  }
  return;
}

// VMExchange @ 148ed90a0

void __thiscall
UNiagaraDataInterfaceSimpleCounter::VMExchange
          (UNiagaraDataInterfaceSimpleCounter *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  atomic<int> aVar5;
  int iVar6;
  atomic<int> *paVar7;
  atomic<int> *paVar8;
  longlong lVar9;
  longlong lVar10;
  int local_40 [2];
  int local_38 [2];
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> local_30;
  
  VectorVM::FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>::
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>(&local_30,param_1);
  iVar6 = 0;
  local_38[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  iVar2 = local_38[0];
  lVar10 = (longlong)local_38[0];
  local_38[0] = 0;
  pfVar3 = pfVar3 + iVar2 * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  lVar9 = (longlong)local_38[0];
  local_40[0] = 0;
  paVar7 = (atomic<int> *)(pfVar4 + local_38[0] * param_1->PerInstanceFnInstanceIdx);
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  paVar8 = (atomic<int> *)(pfVar4 + local_40[0] * param_1->PerInstanceFnInstanceIdx);
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + lVar10;
      if (fVar1 == 0.0) {
        aVar5 = (local_30.Ptr)->Counter;
      }
      else {
        LOCK();
        aVar5 = (local_30.Ptr)->Counter;
        (local_30.Ptr)->Counter = *paVar7;
        UNLOCK();
      }
      iVar6 = iVar6 + 1;
      *paVar8 = aVar5;
      paVar7 = paVar7 + lVar9;
      paVar8 = paVar8 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  if ((this->GpuSyncMode == SyncBoth) || (this->GpuSyncMode == SyncCpuToGpu)) {
    (local_30.Ptr)->bModified = true;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
    if ((this->_padding_ & 4) != 0) {
      (**(code **)(this->_padding_ + 0x448))(this);
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
    }
  }
  return;
}

// VMGet @ 148ed91d0

void __thiscall
UNiagaraDataInterfaceSimpleCounter::VMGet
          (UNiagaraDataInterfaceSimpleCounter *this,FVectorVMExternalFunctionContext *param_1)

{
  atomic<int> aVar1;
  float *pfVar2;
  atomic<int> *paVar3;
  int iVar4;
  int local_20 [2];
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>::
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  paVar3 = (atomic<int> *)(pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx);
  aVar1 = (local_18.Ptr)->Counter;
  if (0 < param_1->NumInstances) {
    do {
      iVar4 = iVar4 + 1;
      *paVar3 = aVar1;
      paVar3 = paVar3 + local_20[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// VMIncrement @ 148edbe70

void __thiscall
UNiagaraDataInterfaceSimpleCounter::VMIncrement
          (UNiagaraDataInterfaceSimpleCounter *this,FVectorVMExternalFunctionContext *param_1)

{
  atomic<int> *paVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  atomic<int> aVar7;
  atomic<int> *paVar8;
  int iVar9;
  longlong lVar10;
  atomic<int> *paVar11;
  atomic<int> aVar12;
  longlong lVar13;
  int local_50 [2];
  int local_48 [2];
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> local_40;
  
  VectorVM::FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>::
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>(&local_40,param_1);
  iVar9 = 0;
  local_48[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar4 = local_48[0];
  lVar13 = (longlong)local_48[0];
  local_50[0] = 0;
  pfVar5 = pfVar5 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar3 = local_50[0];
  lVar10 = (longlong)local_50[0];
  local_50[0] = 0;
  paVar11 = (atomic<int> *)(pfVar6 + iVar3 * param_1->PerInstanceFnInstanceIdx);
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  paVar8 = (atomic<int> *)(pfVar6 + local_50[0] * param_1->PerInstanceFnInstanceIdx);
  if (iVar4 < 1) {
    fVar2 = *pfVar5;
    if (fVar2 == 0.0) {
      aVar12 = (local_40.Ptr)->Counter;
    }
    else {
      LOCK();
      paVar1 = &(local_40.Ptr)->Counter;
      aVar12 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + param_1->NumInstances);
      UNLOCK();
    }
    if (0 < param_1->NumInstances) {
      do {
        aVar7 = (atomic<int>)((uint)(fVar2 != 0.0) + (int)aVar12);
        iVar9 = iVar9 + 1;
        *paVar11 = aVar12;
        *paVar8 = aVar7;
        paVar8 = paVar8 + local_50[0];
        paVar11 = paVar11 + lVar10;
        aVar12 = aVar7;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + lVar13;
      if (fVar2 == 0.0) {
        aVar12 = (local_40.Ptr)->Counter;
        aVar7 = aVar12;
      }
      else {
        LOCK();
        paVar1 = &(local_40.Ptr)->Counter;
        aVar12 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        aVar7 = (atomic<int>)((int)aVar12 + 1);
      }
      *paVar11 = aVar12;
      iVar9 = iVar9 + 1;
      *paVar8 = aVar7;
      paVar8 = paVar8 + local_50[0];
      paVar11 = paVar11 + lVar10;
    } while (iVar9 < param_1->NumInstances);
  }
  if ((this->GpuSyncMode == SyncBoth) || (this->GpuSyncMode == SyncCpuToGpu)) {
    (local_40.Ptr)->bModified = true;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
    if ((this->_padding_ & 4) != 0) {
      (**(code **)(this->_padding_ + 0x448))(this);
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
    }
  }
  return;
}

// VMSet @ 148edc360

void __thiscall
UNiagaraDataInterfaceSimpleCounter::VMSet
          (UNiagaraDataInterfaceSimpleCounter *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  atomic<int> *paVar5;
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> local_48 [2];
  int local_28 [6];
  int local_10 [2];
  
  VectorVM::FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>::
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>(local_48,param_1);
  iVar3 = 0;
  local_28[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  iVar4 = local_28[0] * param_1->PerInstanceFnInstanceIdx;
  local_10[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar4;
    paVar5 = (atomic<int> *)(pfVar2 + local_10[0] * param_1->PerInstanceFnInstanceIdx);
    do {
      if (*pfVar1 != 0.0) {
        LOCK();
        (local_48[0].Ptr)->Counter = *paVar5;
        UNLOCK();
      }
      iVar3 = iVar3 + 1;
      pfVar1 = pfVar1 + local_28[0];
      paVar5 = paVar5 + local_10[0];
    } while (iVar3 < param_1->NumInstances);
  }
  if ((this->GpuSyncMode == SyncBoth) || (this->GpuSyncMode == SyncCpuToGpu)) {
    (local_48[0].Ptr)->bModified = true;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
    if ((this->_padding_ & 4) != 0) {
      (**(code **)(this->_padding_ + 0x448))(this);
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
    }
  }
  return;
}

// _getUObject @ 148edf1e0

UObject * __thiscall
UNiagaraDataInterfaceSimpleCounter::_getUObject(UNiagaraDataInterfaceSimpleCounter *this)

{
  return (UObject *)&this[-1]._padding_;
}

