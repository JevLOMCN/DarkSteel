// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 25

// StaticClass @ 148e89f90

UClass * __cdecl UNiagaraDataInterfaceMemoryBuffer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMemoryBuffer.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMemoryBuffer",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMemoryBuffer.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceMemoryBuffer,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceMemoryBuffer>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMemoryBuffer>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMemoryBuffer.InnerSingleton;
}

// UNiagaraDataInterfaceMemoryBuffer @ 148ea4f10

UNiagaraDataInterfaceMemoryBuffer * __thiscall
UNiagaraDataInterfaceMemoryBuffer::UNiagaraDataInterfaceMemoryBuffer
          (UNiagaraDataInterfaceMemoryBuffer *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->DefaultNumElements = 0;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  this->GpuSyncMode = SyncCpuToGpu;
  return this;
}

// UNiagaraDataInterfaceMemoryBuffer @ 148ea4f50

UNiagaraDataInterfaceMemoryBuffer * __thiscall
UNiagaraDataInterfaceMemoryBuffer::UNiagaraDataInterfaceMemoryBuffer
          (UNiagaraDataInterfaceMemoryBuffer *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  UNiagaraDataInterfaceMemoryBuffer *local_res8;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->GpuSyncMode = SyncCpuToGpu;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  puVar2 = (undefined8 *)0x0;
  this->DefaultNumElements = 0;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  puVar1 = ::operator_new(0xb8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &___7FNDIProxy_NDIMemoryBufferLocal__6B_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[2] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 2),(FObjectPtr)&local_res8);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x80;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x94) = 0x80;
    *(undefined4 *)(puVar1 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceMemoryBuffer @ 148ea6d00

void __thiscall
UNiagaraDataInterfaceMemoryBuffer::~UNiagaraDataInterfaceMemoryBuffer
          (UNiagaraDataInterfaceMemoryBuffer *this)

{
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148ea7da0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
`UNiagaraDataInterfaceMemoryBuffer::InitPerInstanceData'::__l5::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1,FVMExternalFunctionBindingInfo *param_2)

{
  FName *pFVar1;
  FLoadStoreTypes *pFVar2;
  TArrayView<NDIMemoryBufferLocal::FLoadStoreTypes_const_,int> local_18;
  
  NDIMemoryBufferLocal::GetLoadStoreTypes(&local_18);
  if (local_18.DataPtr != local_18.DataPtr + local_18.ArrayNum) {
    pFVar2 = local_18.DataPtr;
    do {
      if ((param_2->Name == pFVar2->LoadFunctionName) ||
         (param_2->Name == pFVar2->StoreFunctionName)) goto LAB_148ea7e2b;
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != local_18.DataPtr + local_18.ArrayNum);
  }
  NDIMemoryBufferLocal::GetAtomicOps
            ((TArrayView<TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>_const_,int>
              *)&local_18);
  pFVar1 = &(local_18.DataPtr)->LoadFunctionName;
  if (local_18.DataPtr != (FLoadStoreTypes *)(pFVar1 + (longlong)local_18.ArrayNum * 4)) {
    do {
      if ((local_18.DataPtr)->LoadFunctionName == param_2->Name) {
LAB_148ea7e2b:
        *(undefined1 *)(*(longlong *)this + 1) = 1;
        return false;
      }
      local_18.DataPtr = (FLoadStoreTypes *)&((local_18.DataPtr)->TypeDef).RegisteredTypeDefIndex;
    } while (local_18.DataPtr != (FLoadStoreTypes *)(pFVar1 + (longlong)local_18.ArrayNum * 4));
  }
  return true;
}

// operator() @ 148ea8a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  FNiagaraGpuReadbackManager *this_00;
  FNDIInstanceData_RenderThread *pFVar2;
  FRDGBuffer *pFVar3;
  undefined1 auStackY_868 [32];
  undefined1 local_838 [16];
  undefined **local_828;
  undefined8 local_820;
  undefined4 local_818;
  undefined4 local_814;
  undefined8 local_810;
  FRDGBuilder local_808;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_868;
  pFVar2 = TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x18),*(ulong64 *)((longlong)this + 8));
  if ((pFVar2 != (FNDIInstanceData_RenderThread *)0x0) && (iVar1 = pFVar2->NumElements, iVar1 != 0))
  {
    local_838._0_8_ = L"";
    this_00 = *(FNiagaraGpuReadbackManager **)(*(longlong *)((longlong)this + 0x20) + 0x38);
    local_838._8_8_ = (FScriptContainerElement *)0x0;
    local_828 = (undefined **)0x0;
    FRDGBuilder::FRDGBuilder
              (&local_808,param_1,(FRDGEventName *)local_838,None,GMaxRHIShaderPlatform);
    local_810 = 0;
    local_828 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::`18'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
    local_820 = *(undefined8 *)((longlong)this + 0x10);
    local_818 = *(undefined4 *)((longlong)this + 0x18);
    local_814 = local_838._12_4_;
    local_838._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
         ::Call;
    pFVar3 = FRDGBuilder::RegisterExternalBuffer(&local_808,&pFVar2->PooledBuffer,None);
    FNiagaraGpuReadbackManager::EnqueueReadback
              (this_00,&local_808,pFVar3,0,iVar1 * 4,
               (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
               local_838);
    FRDGBuilder::Execute(&local_808);
    FNiagaraGpuReadbackManager::WaitCompletion(this_00,param_1);
    FRDGBuilder::~FRDGBuilder(&local_808);
  }
  return;
}

// BuildShaderParameters @ 148eaccf0

void __thiscall
UNiagaraDataInterfaceMemoryBuffer::BuildShaderParameters
          (UNiagaraDataInterfaceMemoryBuffer *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIMemoryBufferLocal::FShaderParameters>::
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

// CanExecuteOnTarget @ 148eadd20

bool __thiscall
UNiagaraDataInterfaceMemoryBuffer::CanExecuteOnTarget
          (UNiagaraDataInterfaceMemoryBuffer *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148eaf580

bool __thiscall
UNiagaraDataInterfaceMemoryBuffer::CopyToInternal
          (UNiagaraDataInterfaceMemoryBuffer *this,UNiagaraDataInterface *param_1)

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
      *(int *)&param_1[1]._padding_ = this->DefaultNumElements;
      *(ENiagaraGpuSyncMode *)((longlong)&param_1[1]._padding_ + 4) = this->GpuSyncMode;
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceMemoryBuffer>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfaceMemoryBuffer>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// DestroyPerInstanceData @ 148eb4810

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
UNiagaraDataInterfaceMemoryBuffer::DestroyPerInstanceData
          (UNiagaraDataInterfaceMemoryBuffer *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  BOOLEAN BVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  ulong64 local_a8 [2];
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_1 + 2) != '\0') {
    lVar1 = this->_padding_;
    if (lVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_a8[0] = param_2->ID;
    if (*(int *)(lVar1 + 0x70) != *(int *)(lVar1 + 0x9c)) {
      TSet<TTuple<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_GameThread_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_GameThread_*,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x68),(int)(local_a8[0] >> 0x20) * 0x17 + (int)local_a8[0],local_a8);
    }
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_78 = param_2->ID;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceMemoryBuffer::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    lStack_80 = lVar1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceMemoryBuffer::DestroyPerInstanceData_::__l5::TSTR_FNDIMemoryBuffer_RemoveProxy816>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      lStack_50 = lStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceMemoryBuffer::DestroyPerInstanceData'::__l5::TSTR_FNDIMemoryBuffer_RemoveProxy816>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar5);
      uVar7 = (ulonglong)local_38;
      if (2 < uVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar6 = local_40;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar6 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar6 = local_70;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)((longlong)param_1 + 8));
  if (BVar4 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)((longlong)param_1 + 8));
  }
  return;
}

// Equals @ 148eb6380

bool __thiscall
UNiagaraDataInterfaceMemoryBuffer::Equals
          (UNiagaraDataInterfaceMemoryBuffer *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar4 = GetTypeName<UNiagaraDataInterfaceMemoryBuffer_const_>(&local_28);
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
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
    if (((bVar2) && ((int)param_1[1]._padding_ == this->DefaultNumElements)) &&
       (*(ENiagaraGpuSyncMode *)((longlong)&param_1[1]._padding_ + 4) == this->GpuSyncMode)) {
      return true;
    }
    return false;
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceMemoryBuffer_const_>(&local_28);
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

// GetPrivateStaticClass @ 148ebfc20

UClass * __cdecl UNiagaraDataInterfaceMemoryBuffer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMemoryBuffer.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMemoryBuffer",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMemoryBuffer.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceMemoryBuffer,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceMemoryBuffer>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMemoryBuffer>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMemoryBuffer.InnerSingleton;
}

// GetVMExternalFunction @ 148ec3be0

void __thiscall
UNiagaraDataInterfaceMemoryBuffer::GetVMExternalFunction
          (UNiagaraDataInterfaceMemoryBuffer *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FMRSWRecursiveAccessDetector FVar3;
  TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>
  *pTVar4;
  FMRSWRecursiveAccessDetector FVar5;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar1[2] = uVar2;
        puVar1[3] = NDIMemoryBufferLocal::VMSetNumElements;
        *puVar1 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      StaticBindings[0]._0_4_ = NDIMemoryBufferLocal::NAME_SetNumElements.ComparisonIndex.Value;
      StaticBindings[0]._4_4_ = NDIMemoryBufferLocal::NAME_SetNumElements.Number;
      StaticBindings[0]._24_4_ = 0;
      StaticBindings[0]._8_8_ = 0;
      StaticBindings[0]._16_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if (StaticBindings[0]._16_8_ != 0) {
        FMemory::Free((void *)StaticBindings[0]._16_8_);
      }
      StaticBindings[0]._16_8_ = local_50.DelegateAllocator;
      StaticBindings[0]._24_4_ = local_50.DelegateSize;
      local_50.DelegateSize = 0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar1[2] = uVar2;
        puVar1[3] = NDIMemoryBufferLocal::VMGetNumElements;
        *puVar1 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      StaticBindings[1]._0_4_ = NDIMemoryBufferLocal::NAME_GetNumElements.ComparisonIndex.Value;
      StaticBindings[1]._4_4_ = NDIMemoryBufferLocal::NAME_GetNumElements.Number;
      StaticBindings[1]._24_4_ = 0;
      StaticBindings[1]._8_8_ = 0;
      StaticBindings[1]._16_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if (StaticBindings[1]._16_8_ != 0) {
        FMemory::Free((void *)StaticBindings[1]._16_8_);
      }
      StaticBindings[1]._16_8_ = local_50.DelegateAllocator;
      StaticBindings[1]._24_4_ = local_50.DelegateSize;
      local_50.DelegateSize = 0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      atexit(`UNiagaraDataInterfaceMemoryBuffer::GetVMExternalFunction'::__l2::
             _dynamic_atexit_destructor_for__StaticBindings__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar4 = StaticBindings;
  do {
    if (*(FName *)pTVar4 == param_1->Name) goto LAB_148ec3cdc;
    pTVar4 = (TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>
              *)((longlong)pTVar4 + 0x20);
  } while (pTVar4 != (TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>
                      *)&::_TSS0);
  NDIMemoryBufferLocal::GetLoadStoreTypes
            ((TArrayView<NDIMemoryBufferLocal::FLoadStoreTypes_const_,int> *)local_58);
  FVar3.State = (atomic<unsigned___int64>)
                ((longlong)(int)local_50.DelegateAllocator._0_4_ * 0x60 + (longlong)local_58);
  if ((atomic<unsigned___int64>)local_58 != FVar3.State) {
    FVar5.State = (atomic<unsigned___int64>)local_58;
    do {
      if (param_1->Name == *(FName *)FVar5.State) {
        TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  (param_3,(TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                            *)((longlong)FVar5.State + 0x30));
        return;
      }
      if (param_1->Name == *(FName *)((longlong)FVar5.State + 8)) {
        TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  (param_3,(TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                            *)((longlong)FVar5.State + 0x48));
        return;
      }
      FVar5.State = FVar5.State + 0x60;
    } while (FVar5.State != FVar3.State);
  }
  NDIMemoryBufferLocal::GetAtomicOps
            ((TArrayView<TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>_const_,int>
              *)local_58);
  FVar3.State = (atomic<unsigned___int64>)
                ((longlong)(int)local_50.DelegateAllocator._0_4_ * 0x20 + (longlong)local_58);
  if ((atomic<unsigned___int64>)local_58 != FVar3.State) {
    pTVar4 = (TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>
              *)local_58;
    while (param_1->Name != *(FName *)pTVar4) {
      pTVar4 = (TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>
                *)((longlong)pTVar4 + 0x20);
      if ((atomic<unsigned___int64>)pTVar4 == FVar3.State) {
        return;
      }
    }
LAB_148ec3cdc:
    TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (param_3,(TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                        *)((longlong)pTVar4 + 8));
  }
  return;
}

// HasPostSimulateTick @ 148ec69b0

bool __thiscall
UNiagaraDataInterfaceMemoryBuffer::HasPostSimulateTick(UNiagaraDataInterfaceMemoryBuffer *this)

{
  return true;
}

// HasPreSimulateTick @ 148ec6a00

bool __thiscall
UNiagaraDataInterfaceMemoryBuffer::HasPreSimulateTick(UNiagaraDataInterfaceMemoryBuffer *this)

{
  return true;
}

// InitPerInstanceData @ 148ec7d20

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
UNiagaraDataInterfaceMemoryBuffer::InitPerInstanceData
          (UNiagaraDataInterfaceMemoryBuffer *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FNDIInstanceData_GameThread **ppFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  TPairInitializer<unsigned___int64_&&,NDIMemoryBufferLocal::FNDIInstanceData_GameThread_*_const_&>
  local_res8;
  ulong64 local_res20;
  ulong64 *local_68;
  FNDIInstanceData_GameThread ***local_60;
  code *local_58 [2];
  undefined **local_48;
  void *local_40;
  undefined8 local_30;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)param_1 = 1;
  *(int *)((longlong)param_1 + 0x20) = this->DefaultNumElements;
  *(ENiagaraGpuSyncMode *)((longlong)param_1 + 0x24) = this->GpuSyncMode;
  local_res8.Value = param_1;
  if (((uint)this->_padding_ >> 1 & 1) != 0) {
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::InitPerInstanceData'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_30 = 0;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceMemoryBuffer::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&>
                  ::Call;
    local_40 = param_1;
    FNiagaraDataInterfaceUtilities::ForEachVMFunction
              ((UNiagaraDataInterface *)this,param_2,
               (TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)>
                *)local_58);
  }
  ppFVar4 = local_res8.Value;
  if (*(char *)((longlong)local_res8.Value + 1) != '\0') {
    uVar9 = *(uint *)(local_res8.Value + 3);
    uVar8 = *(int *)(local_res8.Value + 4) + 4;
    if (uVar8 != uVar9) {
      pFVar1 = (ForAnyElementType *)(local_res8.Value + 2);
      if ((int)uVar9 < (int)uVar8) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar8 - uVar9,pFVar1,(int *)(local_res8.Value + 3),
                           (int *)((longlong)local_res8.Value + 0x1c));
        memset(pFVar1->Data + (longlong)iVar7 * 4,0,(longlong)(int)(uVar8 - uVar9) << 2);
      }
      else {
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        if ((int)uVar8 < (int)uVar9) {
          uVar9 = uVar9 - uVar8;
          if (((int)(uVar9 | uVar8) < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (uVar9 != 0) {
            iVar7 = (*(int *)(ppFVar4 + 3) - uVar9) - uVar8;
            if (iVar7 != 0) {
              memmove(pFVar1->Data + (longlong)(int)uVar8 * 4,
                      pFVar1->Data + (longlong)(int)uVar8 * 4 + (longlong)(int)uVar9 * 4,
                      (longlong)iVar7 << 2);
            }
            *(uint *)(ppFVar4 + 3) = *(int *)(ppFVar4 + 3) - uVar9;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,pFVar1,*(int *)(ppFVar4 + 3),(int *)((longlong)ppFVar4 + 0x1c));
          }
        }
      }
    }
  }
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
    *(undefined1 *)((longlong)local_res8.Value + 2) = 1;
    lVar2 = this->_padding_;
    if ((lVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_res20 = param_2->ID;
    local_68 = &local_res20;
    local_60 = &local_res8.Value;
    TSet<TTuple<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_GameThread_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_&&,NDIMemoryBufferLocal::FNDIInstanceData_GameThread_*_const_&>_>
              ((TSet<TTuple<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_GameThread_*,0>,FDefaultSetAllocator>
                *)(lVar2 + 0x68),&local_res8,(bool *)&local_68);
  }
  return true;
}

// PerInstanceDataSize @ 148ec8f90

int __thiscall
UNiagaraDataInterfaceMemoryBuffer::PerInstanceDataSize(UNiagaraDataInterfaceMemoryBuffer *this)

{
  return 0x30;
}

// PerInstanceTickPostSimulate @ 148eca8b0

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
UNiagaraDataInterfaceMemoryBuffer::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceMemoryBuffer *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  char cVar1;
  undefined4 uVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  int iVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStackY_158 [32];
  undefined4 local_110;
  char local_10c;
  ForAnyElementType local_108;
  undefined8 local_100;
  undefined4 local_f8;
  code *local_f0;
  code *local_e8;
  undefined4 local_c8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((*(char *)((longlong)param_1 + 2) != '\0') && (*(char *)param_1 != '\0')) {
    local_f0 = (code *)this->_padding_;
    if ((local_f0 == (code *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    local_e8 = (code *)param_2->ID;
    FVar11.Data = (FScriptContainerElement *)0x0;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x20);
    iVar10 = 0;
    cVar1 = *(char *)((longlong)param_1 + 0x24);
    local_10c = '\0';
    local_108.Data = (FScriptContainerElement *)0x0;
    iVar14 = iVar10;
    if (*(char *)param_1 != '\0') {
      iVar10 = 0;
      iVar14 = 0;
      if (((cVar1 - 1U & 0xfd) == 0) &&
         (FVar11.Data = (FScriptContainerElement *)0x0, iVar10 = 0, iVar14 = 0,
         &local_108 != (ForAnyElementType *)((longlong)param_1 + 0x10))) {
        local_100._0_4_ = *(int *)((longlong)param_1 + 0x18);
        lVar13 = (longlong)(int)local_100;
        _Src = ((ForAnyElementType *)((longlong)param_1 + 0x10))->Data;
        local_100._4_4_ = 0;
        iVar10 = (int)local_100;
        if ((int)local_100 != 0) {
          local_f8 = uVar2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_100,0,&local_108,(int)local_100,
                     (int *)((longlong)&local_100 + 4));
          memcpy(local_108.Data,_Src,lVar13 << 2);
          FVar11.Data = local_108.Data;
          iVar10 = (int)local_100;
          iVar14 = local_100._4_4_;
        }
      }
      if ((undefined4 *)((longlong)param_1 + 0x28) != &local_110) {
        if (*(char *)((longlong)param_1 + 0x2c) == '\0') {
          if (local_10c != '\0') {
            local_10c = '\0';
          }
        }
        else {
          local_110 = *(undefined4 *)((longlong)param_1 + 0x28);
          local_10c = '\x01';
        }
      }
      if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
      }
    }
    cVar5 = local_10c;
    local_108.Data = (FScriptContainerElement *)0x0;
    uVar4 = local_c8;
    if (local_10c != '\0') {
      uVar4 = local_110;
    }
    local_a8[0] = (code *)0x0;
    local_100 = 0;
    local_f8 = uVar2;
    local_80 = FMemory::Malloc(0x38,8);
    *(char *)((longlong)local_80 + 0x1c) = cVar1;
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[1] = local_f0;
    local_80[2] = local_e8;
    *(undefined4 *)(local_80 + 3) = local_f8;
    *(char *)((longlong)local_80 + 0x24) = cVar5;
    if (cVar5 != '\0') {
      *(undefined4 *)(local_80 + 4) = uVar4;
    }
    local_80[5] = (code *)FVar11.Data;
    *(int *)(local_80 + 6) = iVar10;
    *(int *)((longlong)local_80 + 0x34) = iVar14;
    if (local_80 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceMemoryBuffer::PerInstanceTickPostSimulate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceMemoryBuffer::PerInstanceTickPostSimulate_::__l5::TSTR_FNDIMemoryBuffer_UpdateData836>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`UNiagaraDataInterfaceMemoryBuffer::PerInstanceTickPostSimulate'::__l5::TSTR_FNDIMemoryBuffer_UpdateData836>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar8);
      uVar12 = (ulonglong)local_48;
      if ((2 < uVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12] ==
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
                    ::__l2::Destructors)[uVar12])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar9 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar9 = local_80;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
    if (local_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data);
    }
    *(undefined1 *)param_1 = 0;
  }
  return false;
}

// PostInitProperties @ 148ecb310

void __thiscall
UNiagaraDataInterfaceMemoryBuffer::PostInitProperties(UNiagaraDataInterfaceMemoryBuffer *this)

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

// SetShaderParameters @ 148ed0aa0

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
UNiagaraDataInterfaceMemoryBuffer::SetShaderParameters
          (UNiagaraDataInterfaceMemoryBuffer *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FRDGBuilder *this_00;
  FNiagaraDataInterfaceProxy *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  ulong64 uVar6;
  FNDIInstanceData_RenderThread *pFVar7;
  FRDGBufferUAV *pFVar8;
  FShaderParametersMetadata *pFVar9;
  uint uVar10;
  FRDGBufferUAVDesc local_18;
  
  this_00 = param_1->GraphBuilder;
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
  uVar6 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar7 = TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
           ::FindChecked((TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
                          *)&pFVar1[1].SourceDIName,uVar6);
  if (pFVar7->RDGTransientBuffer == (FRDGBuffer *)0x0) {
    local_18.Buffer = FRDGBuilder::RegisterExternalBuffer(this_00,&pFVar7->PooledBuffer,None);
    pFVar7->RDGTransientBuffer = local_18.Buffer;
    local_18._padding_._2_1_ = 0;
    bVar5 = 0;
    if ((((local_18.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar5 = 0x1c;
    }
    local_18._padding_._0_2_ = (ushort)bVar5;
    pFVar8 = FRDGBuilder::CreateUAV(this_00,&local_18,None);
    pFVar7->RDGTransientBufferUAV = pFVar8;
  }
  uVar10 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar9 = TShaderParameterStructTypeInfo<NDIMemoryBufferLocal::FShaderParameters>::
           GetStructMetadata();
  puVar2 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar9->Size + uVar10;
  *(int *)(puVar2 + uVar10) = pFVar7->NumElements;
  *(FRDGBufferUAV **)(puVar2 + (ulonglong)uVar10 + 8) = pFVar7->RDGTransientBufferUAV;
  return;
}

// SimCacheBeginWrite @ 148ed1ef0

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
UNiagaraDataInterfaceMemoryBuffer::SimCacheBeginWrite
          (UNiagaraDataInterfaceMemoryBuffer *this,UObject *param_1,FNiagaraSystemInstance *param_2,
          void *param_3,FNiagaraSimCacheFeedbackContext *param_4)

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
    pUVar1 = UNDIMemoryBufferSimCacheData::StaticClass();
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

// SimCacheReadFrame @ 148ed31f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148ed344c) */
/* WARNING: Removing unreachable block (ram,0x000148ed34ab) */
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
UNiagaraDataInterfaceMemoryBuffer::SimCacheReadFrame
          (UNiagaraDataInterfaceMemoryBuffer *this,FNiagaraSimCacheDataInterfaceReadContext *param_1
          )

{
  uint uVar1;
  int iVar2;
  FNDIInstanceData_GameThread *this_00;
  FNiagaraSystemInstance *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  UNDIMemoryBufferSimCacheData *pUVar8;
  FNDIProxy *pFVar9;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar10;
  uint uVar11;
  code **ppcVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined4 local_e4;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pUVar8 = CastChecked<UNDIMemoryBufferSimCacheData,UObject>(param_1->StorageObject);
  uVar1 = param_1->FrameIndexA;
  if (((int)uVar1 < 0) || ((pUVar8->FrameData).ArrayNum <= (int)uVar1)) {
    bVar6 = false;
  }
  else {
    uVar11 = 0;
    if ((int)uVar1 < (pUVar8->FrameData).ArrayNum) {
      uVar11 = ~uVar1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar13 = (pUVar8->FrameData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    if ((param_1->OptionalPerInstanceData == (void *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OptionalPerInstanceData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraSimCacheCustomStorageInterface.h"
                           ,0x1d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    this_00 = param_1->OptionalPerInstanceData;
    if ((0 < *(int *)pFVar13) && (this_00->bUsedWithCpu != false)) {
      this_00->NumElements = *(int *)pFVar13;
      NDIMemoryBufferLocal::FNDIInstanceData_GameThread::UpdateCpuBuffer(this_00);
      uVar1 = *(uint *)(pFVar13 + 4);
      iVar2 = *(int *)pFVar13;
      uVar11 = 0;
      if ((int)uVar1 < (pUVar8->BufferData).ArrayNum) {
        uVar11 = ~uVar1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      memcpy((this_00->CpuBuffer).AllocatorInstance.Data,
             (pUVar8->BufferData).AllocatorInstance.Data + (longlong)(int)uVar1 * 4,
             (longlong)iVar2 << 2);
    }
    iVar2 = *(int *)(pFVar13 + 8);
    if ((0 < iVar2) && (this_00->bUsedWithGpu != false)) {
      uVar1 = *(uint *)(pFVar13 + 0xc);
      pFVar3 = param_1->SystemInstance;
      uVar11 = 0;
      if ((int)uVar1 < (pUVar8->BufferData).ArrayNum) {
        uVar11 = ~uVar1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar13 = (pUVar8->BufferData).AllocatorInstance.Data;
      pFVar9 = UNiagaraDataInterface::GetProxyAs<NDIMemoryBufferLocal::FNDIProxy>
                         ((UNiagaraDataInterface *)&this[-1]._padding_);
      pcVar4 = (code *)pFVar3->ID;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0._4_4_ = 0;
      local_f0._0_4_ = iVar2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,0,&local_f8,iVar2,(int *)((longlong)&local_f0 + 4));
      memcpy(local_f8.Data,pFVar13 + (longlong)(int)uVar1 * 4,(longlong)iVar2 << 2);
      local_e4 = local_f0._4_4_;
      FVar5.Data = local_f8.Data;
      local_e8 = (int)local_f0;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = 0;
      local_a8[0] = (code *)0x0;
      local_80 = FMemory::Malloc(0x38,8);
      local_80[1] = (code *)pFVar9;
      local_80[2] = pcVar4;
      *local_80 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::SimCacheReadFrame'::`11'::<lambda_1>,1,1>
                           ::_vftable_;
      *(int *)(local_80 + 3) = iVar2;
      *(undefined1 *)((longlong)local_80 + 0x1c) = 0;
      *(undefined1 *)((longlong)local_80 + 0x24) = 0;
      local_80[5] = (code *)FVar5.Data;
      *(int *)(local_80 + 6) = local_e8;
      *(undefined4 *)((longlong)local_80 + 0x34) = local_e4;
      if (local_80 != (code **)&DAT_fffffffffffffff8) {
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceMemoryBuffer::SimCacheReadFrame'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceMemoryBuffer::SimCacheReadFrame_::__l11::TSTR_FNDIMemoryBuffer_UpdateData1038>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_78._0_8_ = local_a8[0];
        local_50 = local_80;
        local_80 = (code **)0x0;
        local_78._16_8_ = local_98[0];
        local_78._24_8_ = local_98[1];
        local_78._32_8_ = local_98[2];
        local_a8[0] = (code *)0x0;
        local_48 = 2;
        pFVar10 = (FRenderCommandTag *)
                  TRenderCommandTag<`UNiagaraDataInterfaceMemoryBuffer::SimCacheReadFrame'::__l11::TSTR_FNDIMemoryBuffer_UpdateData1038>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar10);
        uVar14 = (ulonglong)local_48;
        if ((2 < uVar14) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            ppcVar12 = (code **)(local_78 + 0x10);
            if (local_50 != (code **)0x0) {
              ppcVar12 = local_50;
            }
            (**(code **)(*ppcVar12 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14])(local_78);
        }
      }
      if (local_a8[0] != (code *)0x0) {
        ppcVar12 = local_a8 + 2;
        if (local_80 != (code **)0x0) {
          ppcVar12 = local_80;
        }
        (**(code **)(*ppcVar12 + 0x10))();
      }
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
    }
    bVar6 = true;
  }
  return bVar6;
}

// SimCacheWriteFrame @ 148ed4160

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
UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame
          (UNiagaraDataInterfaceMemoryBuffer *this,UObject *param_1,int param_2,
          FNiagaraSystemInstance *param_3,void *param_4,FNiagaraSimCacheFeedbackContext *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UNDIMemoryBufferSimCacheData *pUVar7;
  TArrayView<unsigned_int_const_,int> *pTVar8;
  FNiagaraGpuComputeDispatchInterface *pFVar9;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar10;
  uint uVar11;
  code **ppcVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStackY_148 [32];
  undefined4 uStack_ec;
  TArrayView<unsigned_int_const_,int> local_d8;
  TArrayView<unsigned_int_const_,int> local_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((param_4 == (void *)0x0) || (param_1 == (UObject *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OptionalPerInstanceData && StorageObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceMemoryBuffer.cpp"
                       ,0x3bf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pUVar7 = CastChecked<UNDIMemoryBufferSimCacheData,UObject>(param_1);
  iVar13 = (pUVar7->FrameData).ArrayNum;
  if (iVar13 <= param_2) {
    iVar13 = param_2 - iVar13;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,iVar13 + 1,&(pUVar7->FrameData).AllocatorInstance,
                       &(pUVar7->FrameData).ArrayNum,&(pUVar7->FrameData).ArrayMax);
    DefaultConstructItems<FNDIMemoryBufferSimCacheDataFrame,int>
              ((pUVar7->FrameData).AllocatorInstance.Data + (longlong)iVar6 * 0x10,iVar13 + 1);
  }
  if (0 < *(int *)((longlong)param_4 + 0x18)) {
    pTVar8 = TArrayView<unsigned_int_const_,int>::
             TArrayView<unsigned_int_const_,int><TArray<unsigned_int,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                       (&local_c8,
                        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                        ((longlong)param_4 + 0x10));
    local_d8.DataPtr = pTVar8->DataPtr;
    local_d8.ArrayNum = pTVar8->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    iVar13 = NDIMemoryBufferLocal::FindOrAddCacheData(pUVar7,&local_d8);
    uVar11 = 0;
    if (param_2 < (pUVar7->FrameData).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    *(int *)((pUVar7->FrameData).AllocatorInstance.Data + (longlong)param_2 * 0x10 + 4) = iVar13;
    uVar1 = *(undefined4 *)((longlong)param_4 + 0x18);
    uVar11 = 0;
    if (param_2 < (pUVar7->FrameData).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    *(undefined4 *)((pUVar7->FrameData).AllocatorInstance.Data + (longlong)param_2 * 0x10) = uVar1;
  }
  if (*(char *)((longlong)param_4 + 2) != '\0') {
    pFVar9 = FNiagaraGpuComputeDispatchInterface::Get(param_3->World);
    pcVar3 = (code *)this[-1]._padding_;
    if (pcVar3 == (code *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pcVar2 = (code *)param_3->ID;
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x30,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::`18'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[1] = pcVar3;
    local_90[2] = pcVar2;
    local_90[3] = (code *)pUVar7;
    local_90[4] = (code *)CONCAT44(uStack_ec,param_2);
    local_90[5] = (code *)pFVar9;
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame_::__l18::TSTR_NDIRenderTargetVolumeUpdate977>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
      pFVar10 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::TSTR_NDIRenderTargetVolumeUpdate977>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar10);
      uVar14 = (ulonglong)local_58;
      if (2 < uVar14) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar12 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar12 = local_60;
          }
          (**(code **)(*ppcVar12 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar12 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar12 = local_90;
      }
      (**(code **)(*ppcVar12 + 0x10))();
    }
    FlushRenderingCommands();
  }
  return true;
}

// StaticRegisterNativesUNiagaraDataInterfaceMemoryBuffer @ 148ed4c30

void __cdecl
UNiagaraDataInterfaceMemoryBuffer::StaticRegisterNativesUNiagaraDataInterfaceMemoryBuffer(void)

{
  return;
}

// _getUObject @ 148edf1d0

UObject * __thiscall
UNiagaraDataInterfaceMemoryBuffer::_getUObject(UNiagaraDataInterfaceMemoryBuffer *this)

{
  return (UObject *)&this[-1]._padding_;
}

