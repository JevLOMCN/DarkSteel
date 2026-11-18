// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 21

// StaticClass @ 148e42a00

UClass * __cdecl UNiagaraDataInterfaceAsyncGpuTrace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAsyncGpuTrace",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAsyncGpuTrace,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAsyncGpuTrace>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAsyncGpuTrace>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.InnerSingleton;
}

// UNiagaraDataInterfaceAsyncGpuTrace @ 148e54ee0

UNiagaraDataInterfaceAsyncGpuTrace * __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::UNiagaraDataInterfaceAsyncGpuTrace
          (UNiagaraDataInterfaceAsyncGpuTrace *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->MaxTracesPerParticle = 1;
  this->MaxRetraces = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAsyncGpuTrace__6B_;
  (this->TraceProvider).Value = '\0';
  return this;
}

// UNiagaraDataInterfaceAsyncGpuTrace @ 148e54f20

UNiagaraDataInterfaceAsyncGpuTrace * __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::UNiagaraDataInterfaceAsyncGpuTrace
          (UNiagaraDataInterfaceAsyncGpuTrace *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->MaxTracesPerParticle = 1;
  this->MaxRetraces = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAsyncGpuTrace__6B_;
  puVar2 = (undefined8 *)0x0;
  (this->TraceProvider).Value = '\0';
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &___7FNiagaraDataIntefaceProxyAsyncGpuTrace__6B_;
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

// ~UNiagaraDataInterfaceAsyncGpuTrace @ 148e568c0

void __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::~UNiagaraDataInterfaceAsyncGpuTrace
          (UNiagaraDataInterfaceAsyncGpuTrace *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAsyncGpuTrace__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148e57c50

void __thiscall
`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  lVar1 = *(longlong *)this;
  TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10));
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  uVar5 = local_78._28_4_;
  local_18 = (TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10);
  if ((int)uVar5 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      if (*(int *)((longlong)this + 8) == 0) {
        TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar5);
        local_10 = '\x01';
      }
      else {
        lVar4 = (longlong)(int)uVar3 * 0x20;
        lVar1 = *local_48;
        *(int *)(lVar4 + 8 + lVar1) = *(int *)((longlong)this + 8);
        *(undefined4 *)(lVar4 + 0xc + lVar1) = *(undefined4 *)((longlong)this + 0xc);
        *(undefined1 *)(lVar4 + 0x10 + lVar1) = *(undefined1 *)((longlong)this + 0x10);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
      uVar5 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// operator() @ 148e58ea0

void __thiscall
`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulonglong *local_res18;
  
  lVar5 = *(longlong *)this;
  uVar1 = *(ulonglong *)((longlong)this + 0x18);
  if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
    lVar6 = *(longlong *)(lVar5 + 0x50);
    if (*(longlong *)(lVar5 + 0x50) == 0) {
      lVar6 = lVar5 + 0x48;
    }
    iVar4 = *(int *)(lVar6 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)(lVar5 + 0x58) - 1)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x10)) == uVar1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(RT_InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceAsyncGpuTrace.cpp"
                             ,0xb7,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(lVar5 + 0x10));
      } while (iVar4 != -1);
    }
  }
  lVar5 = *(longlong *)this;
  local_res18 = (ulonglong *)((longlong)this + 0x18);
  TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
              *)(lVar5 + 0x10),&local_res8,(bool *)&local_res18);
  lVar5 = (longlong)(int)local_res8.Key * 0x20 + *(longlong *)(lVar5 + 0x10);
  *(undefined4 *)(lVar5 + 8) = *(undefined4 *)((longlong)this + 8);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)((longlong)this + 0xc);
  *(undefined1 *)(lVar5 + 0x10) = *(undefined1 *)((longlong)this + 0x10);
  return;
}

// BuildShaderParameters @ 148e5c340

void __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::BuildShaderParameters
          (UNiagaraDataInterfaceAsyncGpuTrace *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIAsyncGpuTraceLocal::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x40;
  return;
}

// CanExecuteOnTarget @ 148e5cfa0

bool __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::CanExecuteOnTarget
          (UNiagaraDataInterfaceAsyncGpuTrace *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 148e5f070

bool __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::CopyToInternal
          (UNiagaraDataInterfaceAsyncGpuTrace *this,UNiagaraDataInterface *param_1)

{
  uchar uVar1;
  int iVar2;
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
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) {
      *(int *)&param_1[1]._padding_ = this->MaxTracesPerParticle;
      *(int *)((longlong)&param_1[1]._padding_ + 4) = this->MaxRetraces;
      uVar1 = (this->TraceProvider).Value;
      param_1->bRenderDataDirty = 1;
      *(uchar *)&param_1[1]._padding_ = uVar1;
      if (param_1->bRenderDataDirty == 1 && param_1->bUsedWithGPUScript == 1) {
        (**(code **)(param_1->_padding_ + 0x448))(param_1);
        param_1->bRenderDataDirty = 0;
      }
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace>(&local_28);
    pwVar7 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar6);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// DestroyPerInstanceData @ 148e62ea0

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
UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData
          (UNiagaraDataInterfaceAsyncGpuTrace *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
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
              TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData201>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData201>
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

// Equals @ 148e64100

bool __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::Equals
          (UNiagaraDataInterfaceAsyncGpuTrace *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace_const_>(&local_28);
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
    if ((((int)param_1[1]._padding_ == this->MaxTracesPerParticle) &&
        (*(int *)((longlong)&param_1[1]._padding_ + 4) == this->MaxRetraces)) &&
       ((uchar)param_1[1]._padding_ == (this->TraceProvider).Value)) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 148e6e2a0

UClass * __cdecl UNiagaraDataInterfaceAsyncGpuTrace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAsyncGpuTrace",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAsyncGpuTrace,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAsyncGpuTrace>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAsyncGpuTrace>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.InnerSingleton;
}

// InitPerInstanceData @ 148e74480

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
UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData
          (UNiagaraDataInterfaceAsyncGpuTrace *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  Type TVar5;
  UClass *this_00;
  UEnum *this_01;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  undefined1 auStack_168 [32];
  FScriptContainerElement *local_148;
  void *local_138;
  FString local_130;
  FString local_120;
  FNiagaraDataIntefaceProxyAsyncGpuTrace *local_110;
  int iStack_108;
  int iStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  code *pcStack_f8;
  FText local_f0;
  code *local_d8 [2];
  undefined **local_c8;
  void **local_c0;
  undefined8 local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  *(ulong64 *)param_1 = param_2->ID;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  if ((this->TraceProvider).Value != '\x03') {
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_c0 = &local_138;
    local_b0 = 0;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l2::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
                  ::Call;
    local_138 = param_1;
    FNiagaraDataInterfaceUtilities::ForEachGpuFunction
              ((UNiagaraDataInterface *)this,param_2,
               (TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
                *)local_d8);
    this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    TVar5 = FNiagaraAsyncGpuTraceProvider::ResolveSupportedType
                      ((uint)(this->TraceProvider).Value,
                       (TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
                        *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x8);
    *(Type *)((longlong)local_138 + 8) = TVar5;
    if (TVar5 == None) {
      if (2 < (byte)LogNiagara._0_1_) {
        if (param_2->System == (UNiagaraSystem *)0x0) {
          ::FString::FString(&local_130,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)param_2->System,&local_130,(UObject *)0x0);
        }
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar8.Data = local_130.Data.AllocatorInstance.Data;
        }
        StaticEnum<enum_ENDICollisionQuery_AsyncGpuTraceProvider::Type>();
        bVar1 = (this->TraceProvider).Value;
        this_01 = StaticEnum<enum_ENDICollisionQuery_AsyncGpuTraceProvider::Type>();
        if ((this_01 == (UEnum *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd13,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        UEnum::GetDisplayNameTextByValue(this_01,&local_f0,(ulonglong)bVar1);
        FText::ToString(&local_f0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_120,(UObject *)0x0);
        local_148 = FVar8.Data;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_f0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
        }
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      return false;
    }
    if ((*(char *)((longlong)local_138 + 0xc) != '\0') && (this->MaxTracesPerParticle != 0)) {
      local_110 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataIntefaceProxyAsyncGpuTrace>
                            ((UNiagaraDataInterface *)this);
      iStack_108 = this->MaxTracesPerParticle;
      iStack_104 = this->MaxRetraces;
      local_100 = *(undefined4 *)((longlong)local_138 + 8);
      pcStack_f8 = (code *)param_2->ID;
      local_a8[0] = (code *)0x0;
      local_80 = FMemory::Malloc(0x28,8);
      *local_80 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::`29'::<lambda_2>,1,1>
                           ::_vftable_;
      local_80[1] = (code *)local_110;
      local_80[2] = (code *)CONCAT44(iStack_104,iStack_108);
      local_80[3] = (code *)CONCAT44(uStack_fc,local_100);
      local_80[4] = pcStack_f8;
      if (local_80 + 1 != (code **)0x0) {
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::<lambda_2>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_02 = FRenderCommandList::GetInstanceTLS();
      if (this_02 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData_::__l29::TSTR_FUpdateData176>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
      }
      else {
        this_03 = FRenderCommandList::GetRenderThread(this_02);
        local_78._0_8_ = local_a8[0];
        local_50 = local_80;
        local_80 = (code **)0x0;
        local_78._16_8_ = local_98[0];
        local_78._24_8_ = local_98[1];
        local_78._32_8_ = local_98[2];
        local_a8[0] = (code *)0x0;
        local_48 = 2;
        pFVar6 = (FRenderCommandTag *)
                 TRenderCommandTag<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::TSTR_FUpdateData176>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar6);
        uVar9 = (ulonglong)local_48;
        if ((2 < uVar9) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            ppcVar7 = (code **)(local_78 + 0x10);
            if (local_50 != (code **)0x0) {
              ppcVar7 = local_50;
            }
            (**(code **)(*ppcVar7 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])(local_78);
        }
      }
      if (local_a8[0] != (code *)0x0) {
        ppcVar7 = local_a8 + 2;
        if (local_80 != (code **)0x0) {
          ppcVar7 = local_80;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
    }
  }
  return true;
}

// PerInstanceDataSize @ 148e75a70

int __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::PerInstanceDataSize(UNiagaraDataInterfaceAsyncGpuTrace *this)

{
  return 0x10;
}

// PostInitProperties @ 148e76ae0

void __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::PostInitProperties(UNiagaraDataInterfaceAsyncGpuTrace *this)

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

// PostLoad @ 148e76cf0

void __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::PostLoad(UNiagaraDataInterfaceAsyncGpuTrace *this)

{
  UNiagaraDataInterface::PostLoad((UNiagaraDataInterface *)this);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  if ((this->_padding_ & 4) != 0) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// PushToRenderThreadImpl @ 148e799f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl(UNiagaraDataInterfaceAsyncGpuTrace *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  code *local_a8;
  int iStack_a0;
  int iStack_9c;
  Type local_98;
  undefined4 uStack_94;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pcVar1 = (code *)this->_padding_;
  if (pcVar1 == (code *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_98 = FNiagaraAsyncGpuTraceHelper::ResolveSupportedType((uint)(this->TraceProvider).Value);
  iStack_a0 = this->MaxTracesPerParticle;
  iStack_9c = this->MaxRetraces;
  local_88[0] = (code *)0x0;
  local_a8 = pcVar1;
  local_60 = FMemory::Malloc(0x20,8);
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_60[1] = local_a8;
  local_60[2] = (code *)CONCAT44(iStack_9c,iStack_a0);
  local_60[3] = (code *)CONCAT44(uStack_94,local_98);
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl_::__l2::TSTR_FUpdateData501>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::TSTR_FUpdateData501>
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
        ppcVar4 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar4 = local_30;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar4 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar4 = local_60;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// RequiresGlobalDistanceField @ 148e7bc50

bool __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::RequiresGlobalDistanceField
          (UNiagaraDataInterfaceAsyncGpuTrace *this)

{
  bool bVar1;
  
  bVar1 = FNiagaraAsyncGpuTraceHelper::RequiresGlobalDistanceField
                    ((uint)(this->TraceProvider).Value);
  return bVar1;
}

// RequiresRayTracingScene @ 148e7bca0

bool __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::RequiresRayTracingScene
          (UNiagaraDataInterfaceAsyncGpuTrace *this)

{
  bool bVar1;
  
  bVar1 = FNiagaraAsyncGpuTraceHelper::RequiresRayTracingScene((uint)(this->TraceProvider).Value);
  return bVar1;
}

// SetShaderParameters @ 148e7d880

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
UNiagaraDataInterfaceAsyncGpuTrace::SetShaderParameters
          (UNiagaraDataInterfaceAsyncGpuTrace *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  ulong64 uVar8;
  FInstanceData *pFVar9;
  FNiagaraAsyncGpuTraceHelper *this_00;
  FNiagaraAsyncGpuTraceDispatchInfo *pFVar10;
  uint uVar11;
  uint *puVar12;
  
  uVar11 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar7 = TShaderParameterStructTypeInfo<NDIAsyncGpuTraceLocal::FShaderParameters>::
           GetStructMetadata();
  puVar12 = (uint *)(param_1->BaseParameters + uVar11);
  param_1->ParametersOffset = pFVar7->Size + uVar11;
  bVar3 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,puVar12 + 2);
  bVar4 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,puVar12 + 6);
  bVar5 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,puVar12 + 10);
  if (((bVar3) || (bVar4)) || (bVar5)) {
    if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = param_1->DataInterfaceProxy;
    uVar8 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
    pFVar9 = TMapBase<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>_>
             ::Find((TMapBase<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>_>
                     *)(pFVar1 + 1),uVar8);
    this_00 = (FNiagaraAsyncGpuTraceHelper *)
              (**(code **)(param_1->ComputeDispatchInterface->_padding_ + 0x118))();
    if ((pFVar9 == (FInstanceData *)0x0) || (pFVar9->MaxTracesPerParticle < 1)) {
      pFVar10 = FNiagaraAsyncGpuTraceHelper::GetDummyDispatch(this_00);
    }
    else {
      pFVar10 = FNiagaraAsyncGpuTraceHelper::GetDispatch(this_00,pFVar1);
    }
    *puVar12 = pFVar10->MaxTraces;
    if (bVar3) {
      if ((pFVar10->TraceRequests).Buffer == (FRWBufferStructured *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DispatchInfo->TraceRequests.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceAsyncGpuTrace.cpp"
                           ,0x1b7,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(FRHIUnorderedAccessView **)(puVar12 + 2) =
           (((pFVar10->TraceRequests).Buffer)->UAV).Reference;
      puVar12[4] = (pFVar10->TraceRequests).Offset;
    }
    if (bVar4) {
      if ((pFVar10->LastFrameTraceResults).Buffer == (FRWBufferStructured *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DispatchInfo->LastFrameTraceResults.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceAsyncGpuTrace.cpp"
                           ,0x1bf,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(FRHIShaderResourceView **)(puVar12 + 6) =
           (((pFVar10->LastFrameTraceResults).Buffer)->SRV).Reference;
      puVar12[8] = (pFVar10->LastFrameTraceResults).Offset;
    }
    if (bVar5) {
      if ((pFVar10->TraceCounts).Buffer == (FRWBuffer *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DispatchInfo->TraceCounts.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceAsyncGpuTrace.cpp"
                           ,0x1c7,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(FRHIUnorderedAccessView **)(puVar12 + 10) = (((pFVar10->TraceCounts).Buffer)->UAV).Reference
      ;
      puVar12[0xc] = (pFVar10->TraceCounts).Offset;
    }
  }
  else {
    *puVar12 = 0;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceAsyncGpuTrace @ 148e81630

void __cdecl
UNiagaraDataInterfaceAsyncGpuTrace::StaticRegisterNativesUNiagaraDataInterfaceAsyncGpuTrace(void)

{
  return;
}

