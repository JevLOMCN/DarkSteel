// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 24

// StaticClass @ 1491ee5e0

UClass * __cdecl UNiagaraDataInterfaceVolumeCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVolumeCache",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVolumeCache,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVolumeCache>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVolumeCache>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.InnerSingleton;
}

// UNiagaraDataInterfaceVolumeCache @ 1492145c0

UNiagaraDataInterfaceVolumeCache * __thiscall
UNiagaraDataInterfaceVolumeCache::UNiagaraDataInterfaceVolumeCache
          (UNiagaraDataInterfaceVolumeCache *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeCache__6B_;
  (this->VolumeCache).field0_0x0.DebugPtr = (UVolumeCache *)0x0;
  *(undefined8 *)&this->SystemInstancesToProxyData_GT = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x8 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x20 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x28 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x34 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x40 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  return this;
}

// UNiagaraDataInterfaceVolumeCache @ 149214620

UNiagaraDataInterfaceVolumeCache * __thiscall
UNiagaraDataInterfaceVolumeCache::UNiagaraDataInterfaceVolumeCache
          (UNiagaraDataInterfaceVolumeCache *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar2 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeCache__6B_;
  (this->VolumeCache).field0_0x0.DebugPtr = (UVolumeCache *)0x0;
  *(undefined8 *)&this->SystemInstancesToProxyData_GT = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x8 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x20 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x28 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x34 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x40 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &___7FNiagaraDataInterfaceVolumeCacheProxy__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceVolumeCache @ 149216470

void __thiscall
UNiagaraDataInterfaceVolumeCache::~UNiagaraDataInterfaceVolumeCache
          (UNiagaraDataInterfaceVolumeCache *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeCache__6B_;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_GT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVolumeCacheInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVolumeCacheInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVolumeCacheInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_GT);
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 149219f00

void __thiscall
`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulonglong *local_res18;
  
  lVar7 = *(longlong *)this;
  uVar1 = *(ulonglong *)((longlong)this + 0x18);
  if (*(int *)(lVar7 + 0x18) != *(int *)(lVar7 + 0x44)) {
    lVar8 = *(longlong *)(lVar7 + 0x50);
    if (*(longlong *)(lVar7 + 0x50) == 0) {
      lVar8 = lVar7 + 0x48;
    }
    iVar6 = *(int *)(lVar8 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)(lVar7 + 0x58) - 1)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(lVar7 + 0x10) + (longlong)iVar6 * 0x50) == uVar1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!TheProxy->InstanceData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVolumeCache.cpp"
                             ,0x8e,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)(lVar7 + 0x10) + 0x48 + (longlong)iVar6 * 0x50);
      } while (iVar6 != -1);
    }
  }
  lVar7 = *(longlong *)this;
  local_res18 = (ulonglong *)((longlong)this + 0x18);
  TSet<TTuple<unsigned___int64,FVolumeCacheInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FVolumeCacheInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar7 + 0x10),&local_res8,(bool *)&local_res18);
  uVar2 = *(undefined8 *)((longlong)this + 8);
  lVar8 = *(longlong *)((longlong)this + 0x10);
  lVar7 = (longlong)(int)local_res8.Key * 0x50 + *(longlong *)(lVar7 + 0x10);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar7 + 0x40);
  *(undefined8 *)(lVar7 + 0x38) = uVar2;
  *(longlong *)(lVar7 + 0x40) = lVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// BuildShaderParameters @ 149220bb0

void __thiscall
UNiagaraDataInterfaceVolumeCache::BuildShaderParameters
          (UNiagaraDataInterfaceVolumeCache *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceVolumeCache::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x20;
  return;
}

// CanExecuteOnTarget @ 149221bc0

bool __thiscall
UNiagaraDataInterfaceVolumeCache::CanExecuteOnTarget
          (UNiagaraDataInterfaceVolumeCache *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 1492238c0

bool __thiscall
UNiagaraDataInterfaceVolumeCache::CopyToInternal
          (UNiagaraDataInterfaceVolumeCache *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UVolumeCache *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->VolumeCache).field0_0x0.DebugPtr, pUVar2 != (UVolumeCache *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<UVolumeCache>_u_0 *)(param_1 + 1) = (this->VolumeCache).field0_0x0;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceVolumeCache>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceVolumeCache>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 14922bd20

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
UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData
          (UNiagaraDataInterfaceVolumeCache *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  ulong64 local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98[0] = param_2->ID;
  if (*(int *)&(this->SystemInstancesToProxyData_GT).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData_GT).field_0x34) {
    TSet<TTuple<unsigned___int64,FVolumeCacheInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_GameThread_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FVolumeCacheInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_GameThread_*,0>,FDefaultSetAllocator>
                *)&this->SystemInstancesToProxyData_GT,
               (int)(local_98[0] >> 0x20) * 0x17 + (int)local_98[0],local_98);
  }
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
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData_::__l2::TSTR_RemoveInstance160>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    lStack_40 = lStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::TSTR_RemoveInstance160>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
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
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Equals @ 14922e090

bool __thiscall
UNiagaraDataInterfaceVolumeCache::Equals
          (UNiagaraDataInterfaceVolumeCache *this,UNiagaraDataInterface *param_1)

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
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return (this->VolumeCache).field0_0x0.DebugPtr == (UVolumeCache *)param_1[1]._padding_;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceVolumeCache_const_>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfaceVolumeCache_const_>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// GetAssetPath @ 149233d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UNiagaraDataInterfaceVolumeCache::GetAssetPath
          (UNiagaraDataInterfaceVolumeCache *this,FString *__return_storage_ptr__,FString *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 auStack_158 [32];
  initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> local_138;
  FString local_128;
  FString local_118;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_108;
  FString *local_f8;
  FStringFormatArg *local_f0;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_e8;
  FStringFormatArg local_d8;
  FStringFormatArg local_b8;
  FString local_98;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  pwVar7 = L"";
  if (pUVar5 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NiagaraSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVolumeCache.cpp"
                       ,0x177,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar6 = FPaths::ProjectSavedDir();
  pFVar6 = ::FString::FString(&local_98,pFVar6);
  FStringFormatArg::FStringFormatArg(&local_b8,pFVar6);
  ::FString::FString(&local_118,L"SavedDir");
  local_108.Key = &local_118;
  local_108.Value = &local_b8;
  ::FString::PrintfImpl((FString *)&local_e8,L"%03d");
  FStringFormatArg::FStringFormatArg(&local_d8,(FString *)&local_e8);
  ::FString::FString(&local_128,L"FrameIndex");
  local_f8 = &local_128;
  local_f0 = &local_d8;
  local_138._First = &local_108;
  local_138._Last = &local_e8;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
            ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_88,&local_138);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl
            (__return_storage_ptr__,pwVar7,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_88);
  ::FString::ReplaceInline(__return_storage_ptr__,L"//",L"/",IgnoreCase);
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetNumCells @ 1492364b0

void __thiscall
UNiagaraDataInterfaceVolumeCache::GetNumCells
          (UNiagaraDataInterfaceVolumeCache *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FVolumeCacheInstanceData_GameThread>::
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread>(&local_18,param_1);
  iVar9 = 0;
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar7 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar8 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  fVar1 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.X;
  fVar2 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Y;
  fVar3 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar5 = pfVar5 + iVar8;
    pfVar4 = pfVar4 + iVar7;
    do {
      iVar9 = iVar9 + 1;
      *pfVar4 = fVar1;
      *pfVar5 = fVar2;
      *pfVar6 = fVar3;
      pfVar6 = pfVar6 + local_20[0];
      pfVar5 = pfVar5 + local_30[0];
      pfVar4 = pfVar4 + local_40[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// GetPrivateStaticClass @ 149237540

UClass * __cdecl UNiagaraDataInterfaceVolumeCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVolumeCache",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVolumeCache,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVolumeCache>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVolumeCache>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.InnerSingleton;
}

// GetVMExternalFunction @ 14923b800

void __thiscall
UNiagaraDataInterfaceVolumeCache::GetVMExternalFunction
          (UNiagaraDataInterfaceVolumeCache *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this_00;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  FDelegateAllocation local_f8;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (param_1->Name == SetFrameName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVolumeCache.cpp"
                           ,0x18a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_110;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVolumeCache_SetFrameBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_d0);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_118);
  }
  if (param_1->Name == ReadFileName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVolumeCache.cpp"
                           ,399,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_100 = (undefined1  [8])0x0;
    local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVolumeCache_ReadFileBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_b8);
    if ((local_f8.DelegateSize != 0) &&
       (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f8,0,0,0x10);
      local_f8.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f8.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_100;
  }
  else {
    if (param_1->Name != GetNumCellsName) {
      return;
    }
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVolumeCache.cpp"
                           ,0x194,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_e8 = (undefined1  [8])0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_e0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVolumeCache_GetNumCellsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_a0);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_e8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// HasPreSimulateTick @ 14923c5d0

bool __thiscall
UNiagaraDataInterfaceVolumeCache::HasPreSimulateTick(UNiagaraDataInterfaceVolumeCache *this)

{
  return true;
}

// InitPerInstanceData @ 14923fae0

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
UNiagaraDataInterfaceVolumeCache::InitPerInstanceData
          (UNiagaraDataInterfaceVolumeCache *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  int iVar1;
  UVolumeCache *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FVolumeCacheData *pFVar4;
  code *pcVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  code **ppcVar10;
  ulonglong uVar11;
  undefined1 auStack_f8 [32];
  void *local_d8;
  TPairInitializer<unsigned___int64_&&,FVolumeCacheInstanceData_GameThread_*_&> local_d0;
  FVolumeCacheInstanceData_GameThread ***local_c0;
  void **local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVolumeCache.cpp"
                       ,0x80,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  *(int *)((longlong)param_1 + 0x10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_d0.Value = (FVolumeCacheInstanceData_GameThread **)param_2->ID;
  local_c0 = &local_d0.Value;
  local_b8 = &local_d8;
  local_d8 = param_1;
  TSet<TTuple<unsigned___int64,FVolumeCacheInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&&,FVolumeCacheInstanceData_GameThread_*_&>_>
            ((TSet<TTuple<unsigned___int64,FVolumeCacheInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_GameThread_*,0>,FDefaultSetAllocator>
              *)&this->SystemInstancesToProxyData_GT,&local_d0,(bool *)&local_c0);
  pUVar2 = (this->VolumeCache).field0_0x0.DebugPtr;
  if (pUVar2 != (UVolumeCache *)0x0) {
    iVar1 = (pUVar2->Resolution).field0_0x0._s_0.Z;
    *(undefined8 *)((longlong)local_d8 + 8) = *(undefined8 *)&(pUVar2->Resolution).field0_0x0;
    *(int *)((longlong)local_d8 + 0x10) = iVar1;
    pcVar6 = (code *)this->_padding_;
    if (pcVar6 == (code *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pUVar2 = (this->VolumeCache).field0_0x0.DebugPtr;
    pTVar3 = (pUVar2->CachedVolumeFiles).SharedReferenceCount.ReferenceController;
    pFVar4 = (pUVar2->CachedVolumeFiles).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pcVar5 = (code *)param_2->ID;
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x28,8);
    local_80[1] = pcVar6;
    local_80[2] = (code *)pFVar4;
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::`12'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[3] = (code *)pTVar3;
    local_80[4] = pcVar5;
    if (local_80 != (code **)&DAT_fffffffffffffff8) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVolumeCache::InitPerInstanceData_::__l12::TSTR_FUpdateData139>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78[0] = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_68[0] = local_98[0];
      local_68[1] = local_98[1];
      local_68[2] = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::TSTR_FUpdateData139>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar9);
      uVar11 = (ulonglong)local_48;
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_78[0] != (code *)0x0) {
          ppcVar10 = local_78 + 2;
          if (local_50 != (code **)0x0) {
            ppcVar10 = local_50;
          }
          (**(code **)(*ppcVar10 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])();
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar10 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar10 = local_80;
      }
      (**(code **)(*ppcVar10 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return true;
}

// PerInstanceDataSize @ 149244790

int __thiscall
UNiagaraDataInterfaceVolumeCache::PerInstanceDataSize(UNiagaraDataInterfaceVolumeCache *this)

{
  return 0x18;
}

// PerInstanceTick @ 149246520

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
UNiagaraDataInterfaceVolumeCache::PerInstanceTick
          (UNiagaraDataInterfaceVolumeCache *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  return false;
}

// PostInitProperties @ 149246e60

void __thiscall
UNiagaraDataInterfaceVolumeCache::PostInitProperties(UNiagaraDataInterfaceVolumeCache *this)

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

// ProvidePerInstanceDataForRenderThread @ 1492476d0

void __thiscall
UNiagaraDataInterfaceVolumeCache::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceVolumeCache *this,void *param_1,void *param_2,ulong64 *param_3)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  return;
}

// ReadFile @ 149248800

void __thiscall
UNiagaraDataInterfaceVolumeCache::ReadFile
          (UNiagaraDataInterfaceVolumeCache *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int local_30 [2];
  int local_28 [2];
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread> local_20;
  
  VectorVM::FUserPtrHandler<FVolumeCacheInstanceData_GameThread>::
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread>(&local_20,param_1);
  local_28[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  iVar4 = local_28[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (local_20.Ptr)->ReadFile = *(bool *)((longlong)iVar4 + (longlong)pfVar2);
  pfVar3[local_30[0] * iVar1] = -NAN;
  return;
}

// SetFrame @ 14924d290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceVolumeCache::SetFrame
          (UNiagaraDataInterfaceVolumeCache *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  UVolumeCache *this_00;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  FName local_res8;
  FString local_38;
  int local_28 [2];
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread> local_20;
  
  VectorVM::FUserPtrHandler<FVolumeCacheInstanceData_GameThread>::
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread>(&local_20,param_1);
  local_28[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  iVar6 = local_28[0] * param_1->PerInstanceFnInstanceIdx;
  local_38.Data.ArrayNum = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_38.Data.ArrayNum);
  iVar5 = local_38.Data.ArrayNum * param_1->PerInstanceFnInstanceIdx;
  fVar1 = pfVar3[iVar6];
  (local_20.Ptr)->CurrFrame = (int)fVar1;
  this_00 = (this->VolumeCache).field0_0x0.DebugPtr;
  if (((this_00 == (UVolumeCache *)0x0) ||
      (bVar2 = UVolumeCache::LoadFile(this_00,(int)fVar1), !bVar2)) && (2 < (byte)LogNiagara._0_1_))
  {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pfVar4[iVar5] = -NAN;
  return;
}

// SetShaderParameters @ 14924efc0

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
UNiagaraDataInterfaceVolumeCache::SetShaderParameters
          (UNiagaraDataInterfaceVolumeCache *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FVolumeCacheInstanceData_RenderThread *pFVar5;
  FShaderParametersMetadata *pFVar6;
  FRHISamplerState *pFVar7;
  uchar *puVar8;
  uint uVar9;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar4 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar5 = TMapBase<unsigned___int64,FVolumeCacheInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FVolumeCacheInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>_>
                   *)(pFVar1 + 1),uVar4);
  uVar9 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar6 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceVolumeCache::FShaderParameters>::
           GetStructMetadata();
  param_1->ParametersOffset = pFVar6->Size + uVar9;
  puVar8 = param_1->BaseParameters + uVar9;
  if ((pFVar5 != (FVolumeCacheInstanceData_RenderThread *)0x0) &&
     ((pFVar5->ResolvedTextureRHI).Reference != (FRHITexture *)0x0)) {
    *(undefined8 *)puVar8 = *(undefined8 *)&(pFVar5->TextureSize).field0_0x0;
    *(float *)(puVar8 + 8) = (pFVar5->TextureSize).field0_0x0._s_0.Z;
    *(FRHITexture **)(puVar8 + 0x10) = (pFVar5->ResolvedTextureRHI).Reference;
    pFVar7 = (pFVar5->SamplerStateRHI).Reference;
    if (pFVar7 == (FRHISamplerState *)0x0) {
      pFVar7 = (GBlackVolumeTexture->SamplerStateRHI).Reference;
    }
    *(FRHISamplerState **)(puVar8 + 0x18) = pFVar7;
    return;
  }
  *(undefined8 *)puVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(puVar8 + 8) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(FRHITexture **)(puVar8 + 0x10) = (GBlackVolumeTexture->TextureRHI).Reference;
  *(FRHISamplerState **)(puVar8 + 0x18) = (GBlackVolumeTexture->SamplerStateRHI).Reference;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceVolumeCache @ 14924f590

void __cdecl
UNiagaraDataInterfaceVolumeCache::StaticRegisterNativesUNiagaraDataInterfaceVolumeCache(void)

{
  return;
}

