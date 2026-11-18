// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 26

// StaticClass @ 14915be20

UClass * __cdecl UNiagaraDataInterfaceExport::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceExport",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceExport,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceExport>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceExport>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.InnerSingleton;
}

// UNiagaraDataInterfaceExport @ 149169890

UNiagaraDataInterfaceExport * __thiscall
UNiagaraDataInterfaceExport::UNiagaraDataInterfaceExport
          (UNiagaraDataInterfaceExport *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceExport__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->CallbackHandlerParameter);
  this->GPUAllocationMode = FixedSize;
  this->GPUAllocationFixedSize = 0x40;
  this->GPUAllocationPerParticleSize = 1.0;
  return this;
}

// UNiagaraDataInterfaceExport @ 1491698e0

UNiagaraDataInterfaceExport * __thiscall
UNiagaraDataInterfaceExport::UNiagaraDataInterfaceExport
          (UNiagaraDataInterfaceExport *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceExport__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->CallbackHandlerParameter);
  this->GPUAllocationMode = FixedSize;
  this->GPUAllocationFixedSize = 0x40;
  this->GPUAllocationPerParticleSize = 1.0;
  puVar2 = ::operator_new(0x60);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FNDIExportProxy__6B_;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_20 = 1;
  local_1e = 0;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->CallbackHandlerParameter).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceExport @ 14916b310

void __thiscall
UNiagaraDataInterfaceExport::~UNiagaraDataInterfaceExport(UNiagaraDataInterfaceExport *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceExport__6B_;
  pFVar1 = (this->CallbackHandlerParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 14916c980

void __thiscall
`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulonglong *local_res18;
  
  lVar2 = *(longlong *)this;
  uVar3 = *(ulonglong *)((longlong)this + 8);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar7 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar7 = lVar2 + 0x48;
    }
    iVar6 = *(int *)(lVar7 + ((uVar3 >> 0x20) * 0x17 + uVar3 &
                             (ulonglong)(*(int *)(lVar2 + 0x58) - 1)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar6 * 0x48) == uVar3) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(RT_InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceExport.cpp"
                             ,0xbf,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x40 + (longlong)iVar6 * 0x48);
      } while (iVar6 != -1);
    }
  }
  lVar2 = *(longlong *)this;
  local_res18 = (ulonglong *)((longlong)this + 8);
  TSet<TTuple<unsigned___int64,FNDIExportInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIExportInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x10),&local_res8,(bool *)&local_res18);
  puVar1 = (undefined1 *)(*(longlong *)(lVar2 + 0x10) + ((longlong)(int)local_res8.Key * 9 + 1) * 8)
  ;
  if ((puVar1 == (undefined1 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceExport.cpp"
                         ,0xc1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *puVar1 = *(undefined1 *)((longlong)this + 0x10);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)this + 0x14);
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)((longlong)this + 0x18);
  return;
}

// operator() @ 14916dad0

void __thiscall
`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  UObject *local_res8 [4];
  
  lVar5 = *(longlong *)this;
  uVar1 = *(ulonglong *)((longlong)this + 8);
  if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
    lVar6 = *(longlong *)(lVar5 + 0x50);
    if (*(longlong *)(lVar5 + 0x50) == 0) {
      lVar6 = lVar5 + 0x48;
    }
    iVar4 = *(int *)(lVar6 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)(lVar5 + 0x58) - 1)) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *(longlong *)(lVar5 + 0x10) + (longlong)iVar4 * 0x48;
        if (*(ulonglong *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar4 * 0x48) == uVar1) {
          lVar5 = lVar6 + 8;
          if (lVar6 == 0) {
            lVar5 = 0;
          }
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0xc) = *(undefined8 *)((longlong)this + 0x10);
            local_res8[0] = *(UObject **)((longlong)this + 0x18);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res8[0] != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_res8[0]);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar5 + 0x14),(FObjectPtr)local_res8);
            return;
          }
          break;
        }
        iVar4 = *(int *)(lVar6 + 0x40);
      } while (iVar4 != -1);
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1172611288254119684>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceExport.cpp"
                     ,0xfc,"InstanceData != nullptr");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// BuildShaderParameters @ 149170bb0

void __thiscall
UNiagaraDataInterfaceExport::BuildShaderParameters
          (UNiagaraDataInterfaceExport *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIExportLocal::FShaderParameters>::GetStructMetadata();
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

// CanExecuteOnTarget @ 149171870

bool __thiscall
UNiagaraDataInterfaceExport::CanExecuteOnTarget
          (UNiagaraDataInterfaceExport *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 149173870

bool __thiscall
UNiagaraDataInterfaceExport::CopyToInternal
          (UNiagaraDataInterfaceExport *this,UNiagaraDataInterface *param_1)

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
      FNiagaraVariable::operator=
                ((FNiagaraVariable *)(param_1 + 1),&(this->CallbackHandlerParameter).Parameter);
      *(ENDIExport_GPUAllocationMode *)&param_1[1]._padding_ = this->GPUAllocationMode;
      *(int *)((longlong)&param_1[1]._padding_ + 4) = this->GPUAllocationFixedSize;
      *(float *)&param_1[1].Proxy.Ptr = this->GPUAllocationPerParticleSize;
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceExport>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfaceExport>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// DestroyPerInstanceData @ 149176f50

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
UNiagaraDataInterfaceExport::DestroyPerInstanceData
          (UNiagaraDataInterfaceExport *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
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
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  puVar1 = *(undefined8 **)((longlong)param_1 + 0x18);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x18) = *puVar1;
    ::operator_delete(puVar1,0x40);
    puVar1 = *(undefined8 **)((longlong)param_1 + 0x18);
  }
  lVar2 = this->_padding_;
  if ((lVar2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  lStack_70 = lVar2;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceExport::DestroyPerInstanceData_::__l2::TSTR_FNDIExport_RemoveProxy209>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::TSTR_FNDIExport_RemoveProxy209>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar5);
    uVar7 = (ulonglong)local_28;
    if ((2 < uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar6 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar6 = local_30;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar6 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar6 = local_60;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// Equals @ 149178a80

bool __thiscall
UNiagaraDataInterfaceExport::Equals
          (UNiagaraDataInterfaceExport *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceExport_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceExport_const_>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
    if (((((this->CallbackHandlerParameter).Parameter._padding_ == param_1[1]._padding_) &&
         ((int)(this->CallbackHandlerParameter).Parameter._padding_ == (int)param_1[1]._padding_))
        && ((ENDIExport_GPUAllocationMode)param_1[1]._padding_ == this->GPUAllocationMode)) &&
       ((*(int *)((longlong)&param_1[1]._padding_ + 4) == this->GPUAllocationFixedSize &&
        (this->GPUAllocationPerParticleSize == *(float *)&param_1[1].Proxy.Ptr)))) {
      return true;
    }
  }
  return false;
}

// ExportData @ 149179940

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceExport::ExportData
          (UNiagaraDataInterfaceExport *this,FVectorVMExternalFunctionContext *param_1)

{
  TQueue<FBasicParticleData,0> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TNode *pTVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  FNDIExportInstanceData_GameThread *this_00;
  bool bVar11;
  float *pfVar12;
  float *pfVar13;
  FNiagaraTypeDefinition *pFVar14;
  float *pfVar15;
  float *pfVar16;
  TNode *pTVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  float *local_res18;
  float *local_res20;
  int local_1b0 [2];
  int local_1a8 [2];
  float *local_1a0;
  float *local_198;
  float *local_190;
  float *local_188;
  float *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  FUserPtrHandler<FNDIExportInstanceData_GameThread> local_130;
  undefined1 local_118 [24];
  float fStack_100;
  undefined4 uStack_fc;
  int local_f0;
  float *local_e8;
  int local_d8;
  FNDIInputParam<UE::Math::TVector<float>_> local_c8 [2];
  
  VectorVM::FUserPtrHandler<FNDIExportInstanceData_GameThread>::
  FUserPtrHandler<FNDIExportInstanceData_GameThread>(&local_130,param_1);
  iVar26 = 0;
  local_1a8[0] = 0;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1a8);
  lVar22 = (longlong)local_1a8[0];
  iVar18 = local_1a8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            ((FNDIInputParam<UE::Math::TVector<float>_> *)local_118,param_1);
  local_1a8[0] = 0;
  local_198 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1a8);
  lVar24 = (longlong)local_1a8[0];
  local_198 = local_198 + local_1a8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (local_c8,param_1);
  local_1b0[0] = 0;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1b0);
  this_00 = local_130.Ptr;
  lVar23 = (longlong)local_1b0[0];
  iVar19 = local_1b0[0] * param_1->PerInstanceFnInstanceIdx;
  if (((((local_130.Ptr)->UserParamBinding).BoundVariable._padding_ == 0) ||
      (pFVar14 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)
                            &((local_130.Ptr)->UserParamBinding).BoundVariable._padding_),
      (pFVar14->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) ||
     (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar11)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (0 < param_1->NumInstances) {
    local_170 = (longlong)local_c8[0].Z.AdvanceOffset << 2;
    local_168 = (longlong)local_c8[0].Y.AdvanceOffset << 2;
    local_1a0 = (float *)local_118._0_8_;
    lVar20 = (longlong)local_c8[0].X.AdvanceOffset << 2;
    local_190 = local_c8[0].Z.InputPtr;
    local_140 = lVar22 << 2;
    local_138 = (longlong)local_d8 << 2;
    lVar22 = (longlong)local_f0 << 2;
    lVar25 = (longlong)(int)local_118._16_4_ << 2;
    lVar24 = lVar24 << 2;
    local_188 = local_c8[0].Y.InputPtr;
    lVar23 = lVar23 << 2;
    local_180 = local_c8[0].X.InputPtr;
    pfVar21 = local_e8;
    pfVar13 = pfVar13 + iVar19;
    local_res18 = pfVar12 + iVar18;
    local_res20 = (float *)CONCAT44(uStack_fc,fStack_100);
    local_178 = lVar20;
    local_160 = lVar23;
    local_158 = lVar22;
    local_150 = lVar25;
    local_148 = lVar24;
    do {
      fVar4 = *pfVar21;
      pfVar15 = (float *)(local_140 + (longlong)local_res18);
      pfVar21 = (float *)(local_138 + (longlong)pfVar21);
      local_118._16_8_ = (undefined8)fVar4;
      pfVar12 = (float *)(lVar22 + (longlong)local_res20);
      fVar4 = *local_res20;
      fVar5 = *local_1a0;
      local_1a0 = (float *)((longlong)local_1a0 + lVar25);
      pfVar2 = (float *)(lVar24 + (longlong)local_198);
      fStack_100 = *local_198;
      fVar6 = *local_188;
      pfVar16 = (float *)(local_170 + (longlong)local_190);
      local_188 = (float *)(local_168 + (longlong)local_188);
      local_e8 = (float *)(double)*local_190;
      pfVar3 = (float *)((longlong)local_180 + lVar20);
      fVar7 = *local_180;
      iVar18 = 1;
      local_198 = pfVar2;
      local_190 = pfVar16;
      local_180 = pfVar3;
      if ((bVar11) && (*local_res18 != 0.0)) {
        pTVar1 = &(local_130.Ptr)->GatheredData;
        pTVar17 = ::operator_new(0x40);
        if (pTVar17 == (TNode *)0x0) {
          iVar18 = 1;
          lVar24 = local_148;
          lVar20 = local_178;
          lVar22 = local_158;
          lVar25 = local_150;
        }
        else {
          pTVar17->NextNode = (TNode *)0x0;
          auVar9._8_4_ = SUB84((double)fVar4,0);
          auVar9._0_8_ = (double)fVar5;
          auVar9._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
          *(undefined1 (*) [16])&(pTVar17->Item).Position.field0_0x0 = auVar9;
          (pTVar17->Item).Position.field0_0x0._s_0.Z = (double)local_118._16_8_;
          *(ulonglong *)&(pTVar17->Item).Size = CONCAT44(uStack_fc,fStack_100);
          auVar10._8_4_ = SUB84((double)fVar6,0);
          auVar10._0_8_ = (double)fVar7;
          auVar10._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
          *(undefined1 (*) [16])&(pTVar17->Item).Velocity.field0_0x0 = auVar10;
          (pTVar17->Item).Velocity.field0_0x0._s_0.Z = (double)local_e8;
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar8 = pTVar1->Head;
          pTVar1->Head = pTVar17;
          UNLOCK();
          if (((ulonglong)pTVar8 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar8->NextNode = pTVar17;
          UNLOCK();
          iVar18 = 0;
          lVar24 = local_148;
          lVar20 = local_178;
          lVar23 = local_160;
          lVar22 = local_158;
          lVar25 = local_150;
        }
      }
      iVar26 = iVar26 + 1;
      *pfVar13 = (float)(iVar18 + -1);
      pfVar13 = (float *)((longlong)pfVar13 + lVar23);
      local_res18 = pfVar15;
      local_res20 = pfVar12;
    } while (iVar26 < param_1->NumInstances);
  }
  return;
}

// GetPrivateStaticClass @ 14917f890

UClass * __cdecl UNiagaraDataInterfaceExport::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceExport",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceExport,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceExport>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceExport>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceExport.InnerSingleton;
}

// GetVMExternalFunction @ 149180b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceExport::GetVMExternalFunction
          (UNiagaraDataInterfaceExport *this,FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FString local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  undefined1 local_28 [8];
  FDelegateAllocation local_20;
  
  if (param_1->Name == NDIExportLocal::StoreDataName_DEPRECATED) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceExport_StoreDataBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar1[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (param_1->Name == NDIExportLocal::ExportDataName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceExport_ExportDataBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar1[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (3 < (byte)LogNiagara._0_1_) {
    ::FName::ToString(&param_1->Name,(FString *)local_28);
    ::FName::ToString(&NDIExportLocal::ExportDataName,(FString *)&local_48);
    if (this == (UNiagaraDataInterfaceExport *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((void *)local_48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    if ((atomic<unsigned___int64>)local_28 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_28);
    }
  }
  return;
}

// HasInternalAttributeReads @ 1491824e0

bool __thiscall
UNiagaraDataInterfaceExport::HasInternalAttributeReads
          (UNiagaraDataInterfaceExport *this,UNiagaraEmitter *param_1,UNiagaraEmitter *param_2)

{
  return param_1 == param_2;
}

// HasPostSimulateTick @ 1491824f0

bool __thiscall UNiagaraDataInterfaceExport::HasPostSimulateTick(UNiagaraDataInterfaceExport *this)

{
  return true;
}

// HasPreSimulateTick @ 149182530

bool __thiscall UNiagaraDataInterfaceExport::HasPreSimulateTick(UNiagaraDataInterfaceExport *this)

{
  return true;
}

// InitPerInstanceData @ 149182670

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
UNiagaraDataInterfaceExport::InitPerInstanceData
          (UNiagaraDataInterfaceExport *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  code *local_c8;
  code *pcStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  puVar7 = (undefined8 *)0x0;
  *(undefined8 *)param_1 = 0;
  puVar6 = ::operator_new(0x40);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar7 = puVar6;
  }
  *(undefined8 **)((longlong)param_1 + 0x18) = puVar7;
  *(undefined8 **)((longlong)param_1 + 0x10) = puVar7;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  iVar5 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x38),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x38) = iVar5;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  local_c8 = (code *)this->_padding_;
  if ((local_c8 == (code *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pcStack_c0 = (code *)param_2->ID;
  fVar1 = this->GPUAllocationPerParticleSize;
  local_b8 = CONCAT31(local_b8._1_3_,this->GPUAllocationMode);
  iStack_b4 = this->GPUAllocationFixedSize;
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x28,8);
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceExport::InitPerInstanceData'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_80[1] = local_c8;
  local_80[2] = pcStack_c0;
  *(undefined4 *)(local_80 + 3) = local_b8;
  *(int *)((longlong)local_80 + 0x1c) = iStack_b4;
  *(float *)(local_80 + 4) = fVar1;
  *(undefined4 *)((longlong)local_80 + 0x24) = uStack_ac;
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  fStack_b0 = fVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceExport::InitPerInstanceData_::__l2::TSTR_FNDIExport_AddProxy187>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::TSTR_FNDIExport_AddProxy187>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar8);
    uVar10 = (ulonglong)local_48;
    if ((2 < uVar10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10] ==
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
                  ::__l2::Destructors)[uVar10])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar9 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar9 = local_80;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  return true;
}

// PerInstanceDataSize @ 149186720

int __thiscall UNiagaraDataInterfaceExport::PerInstanceDataSize(UNiagaraDataInterfaceExport *this)

{
  return 0x60;
}

// PerInstanceTick @ 149186770

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
UNiagaraDataInterfaceExport::PerInstanceTick
          (UNiagaraDataInterfaceExport *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  FWeakObjectPtr FVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  FNiagaraTypeDefinition *pFVar9;
  TObjectPtr<UObject> TVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  FWeakObjectPtr local_c8;
  UObject *local_c0;
  FWeakObjectPtr local_b8;
  undefined1 local_b0 [24];
  FWeakObjectPtr local_98;
  ForAnyElementType FStack_90;
  int local_88;
  int iStack_84;
  ForAnyElementType local_80;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_68;
  ForAnyElementType FStack_60;
  int local_58;
  int iStack_54;
  ForAnyElementType local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_2 == (FNiagaraSystemInstance *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceExport.cpp"
                         ,0xe2,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if (param_1 == (void *)0x0) {
    return true;
  }
  local_b8 = *(FWeakObjectPtr *)param_1;
  if ((((this->CallbackHandlerParameter).Parameter._padding_ == 0) ||
      (pFVar9 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)
                           &(this->CallbackHandlerParameter).Parameter._padding_),
      (pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) ||
     (param_2 == (FNiagaraSystemInstance *)0x0)) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    TVar10 = FNiagaraParameterDirectBinding<UObject_*>::Init
                       ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0x20),
                        (FNiagaraParameterStore *)local_b0,
                        (FNiagaraVariable *)&param_2->InstanceParameters);
    local_c0 = *(UObject **)TVar10.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_c0);
    }
    local_c8.ObjectIndex = 0;
    local_c8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_c0);
    }
    FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_c0);
    *(FWeakObjectPtr *)param_1 = local_c8;
  }
  bVar7 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_b8,param_1);
  if (!bVar7) {
    FVar1 = (FWeakObjectPtr)this->_padding_;
    if ((FVar1 == (FWeakObjectPtr)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    uVar5 = *(undefined4 *)&param_2->ID;
    uVar6 = *(undefined4 *)((longlong)&param_2->ID + 4);
    FVar2 = (FWeakObjectPtr)param_2->System;
    FVar3 = *(FWeakObjectPtr *)param_1;
    local_b0._8_4_ = 0;
    local_b0._12_4_ = 0;
    local_80.Data = FMemory::Malloc(0x28,8);
    *(undefined ***)local_80.Data =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`UNiagaraDataInterfaceExport::PerInstanceTick'::`20'::<lambda_1>,1,1>
          ::_vftable_;
    *(FWeakObjectPtr *)((longlong)local_80.Data + 8) = FVar1;
    ((FWeakObjectPtr *)((longlong)local_80.Data + 0x10))->ObjectIndex = uVar5;
    ((FWeakObjectPtr *)((longlong)local_80.Data + 0x10))->ObjectSerialNumber = uVar6;
    *(FWeakObjectPtr *)((longlong)local_80.Data + 0x18) = FVar3;
    *(FWeakObjectPtr *)((longlong)local_80.Data + 0x20) = FVar2;
    if ((FWeakObjectPtr *)((longlong)local_80.Data + 8) != (FWeakObjectPtr *)0x0) {
      local_b0._8_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::<lambda_1>,void,FRHICommandListImmediate_&>
           ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceExport::PerInstanceTick_::__l20::TSTR_FNDIExport_UpdateHandler247>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)(local_b0 + 8));
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78.ObjectIndex = local_b0._8_4_;
      local_78.ObjectSerialNumber = local_b0._12_4_;
      local_50.Data = local_80.Data;
      local_80.Data = (FScriptContainerElement *)0x0;
      local_68 = local_98;
      FStack_60.Data = FStack_90.Data;
      local_58 = local_88;
      iStack_54 = iStack_84;
      local_b0._8_4_ = 0;
      local_b0._12_4_ = 0;
      local_48 = 2;
      pFVar11 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::TSTR_FNDIExport_UpdateHandler247>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)&local_78,pFVar11);
      uVar13 = (ulonglong)local_48;
      if ((2 < uVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_78 != (FWeakObjectPtr)0x0) {
          FVar12.Data = (FScriptContainerElement *)&local_68;
          if ((FWeakObjectPtr *)local_50.Data != (FWeakObjectPtr *)0x0) {
            FVar12.Data = local_50.Data;
          }
          (**(code **)((longlong)*(FWeakObjectPtr *)FVar12.Data + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(&local_78);
      }
    }
    if ((FWeakObjectPtr)local_b0._8_8_ != (FWeakObjectPtr)0x0) {
      FVar12.Data = (FScriptContainerElement *)&local_98;
      if ((FWeakObjectPtr *)local_80.Data != (FWeakObjectPtr *)0x0) {
        FVar12.Data = local_80.Data;
      }
      (**(code **)((longlong)*(FWeakObjectPtr *)FVar12.Data + 0x10))();
    }
  }
  return false;
}

// PerInstanceTickPostSimulate @ 149187460

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
UNiagaraDataInterfaceExport::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceExport *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  undefined8 uVar1;
  float fVar2;
  UClass *this_00;
  void *pvVar3;
  UNiagaraSystem *pUVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  undefined1 uVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  FWeakObjectPtr local_res10;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FWeakObjectPtr local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  UNiagaraSystem *local_98;
  UObject *local_90;
  TVector<float>_u_0 local_88;
  TArray<FBasicParticleData,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (**(longlong **)((longlong)param_1 + 0x18) == 0) {
    return false;
  }
  pUVar9 = FWeakObjectPtr::Get(param_1);
  if (pUVar9 != (UObject *)0x0) {
    this_00 = *(UClass **)&pUVar9->field_0x10;
    pUVar10 = UNiagaraParticleCallbackHandler::StaticClass();
    bVar7 = UClass::ImplementsInterface(this_00,pUVar10);
    if (bVar7) {
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      local_a0 = 0;
      local_e0._0_4_ = 0;
      local_e0._4_4_ = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      uStack_b8 = (ulonglong)uStack_b8._4_4_ << 0x20;
      local_b0 = 0;
      uStack_a8 = 0;
      while (lVar11 = **(longlong **)((longlong)param_1 + 0x18), lVar11 != 0) {
        local_d0 = *(undefined8 *)(lVar11 + 8);
        uStack_c8 = *(undefined8 *)(lVar11 + 0x10);
        pvVar3 = *(void **)((longlong)param_1 + 0x18);
        local_c0 = *(undefined8 *)(lVar11 + 0x18);
        uStack_b8 = *(longlong *)(lVar11 + 0x20);
        local_38 = 0;
        local_b0 = *(undefined8 *)(lVar11 + 0x28);
        uStack_a8 = *(undefined8 *)(lVar11 + 0x30);
        local_a0 = *(undefined8 *)(lVar11 + 0x38);
        *(longlong *)((longlong)param_1 + 0x18) = lVar11;
        *(undefined8 *)(lVar11 + 8) = 0;
        *(undefined8 *)(lVar11 + 0x10) = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        uStack_40 = 0;
        *(undefined8 *)(lVar11 + 0x18) = 0;
        *(undefined8 *)(lVar11 + 0x20) = 0;
        *(undefined8 *)(lVar11 + 0x28) = 0;
        *(undefined8 *)(lVar11 + 0x30) = 0;
        *(undefined8 *)(lVar11 + 0x38) = 0;
        local_58 = 0;
        uStack_50 = 0;
        ::operator_delete(pvVar3,0x40);
        if (((local_e8.Data <= (FScriptContainerElement *)&local_d0) &&
            ((FScriptContainerElement *)&local_d0 < local_e8.Data + (longlong)local_e0._4_4_ * 0x38)
            ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if ((int)local_e0 == local_e0._4_4_) {
          local_e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&local_e8,(int *)((longlong)&local_e0 + 4));
        }
        lVar11 = (longlong)(int)local_e0 * 0x38;
        *(undefined8 *)(local_e8.Data + lVar11) = local_d0;
        *(undefined8 *)(local_e8.Data + lVar11 + 8) = uStack_c8;
        *(undefined8 *)(local_e8.Data + lVar11 + 0x10) = local_c0;
        *(longlong *)(local_e8.Data + lVar11 + 0x10 + 8) = uStack_b8;
        *(undefined8 *)(local_e8.Data + lVar11 + 0x20) = local_b0;
        *(undefined8 *)(local_e8.Data + lVar11 + 0x20 + 8) = uStack_a8;
        *(undefined8 *)(local_e8.Data + lVar11 + 0x30) = local_a0;
        local_e0._0_4_ = (int)local_e0 + 1;
      }
      uVar1 = *(undefined8 *)&(param_2->LWCTile).field0_0x0;
      fVar2 = (param_2->LWCTile).field0_0x0._s_0.Z;
      pUVar4 = param_2->System;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UNiagaraSystem *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_98 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UNiagaraSystem *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_98);
      FVar6 = local_res10;
      local_78.AllocatorInstance.Data = local_e8.Data;
      local_78.ArrayNum = (int)local_e0;
      local_78.ArrayMax = local_e0._4_4_;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_90 = pUVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_90);
      local_88._0_8_ = uVar1;
      local_88._s_0.Z = fVar2;
      NDIExportLocal::EnqueueGameThreadCallback
                ((TWeakObjectPtr<UObject,FWeakObjectPtr>)local_d8,&local_78,
                 (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>)FVar6,
                 (TVector<float> *)&local_88._s_0);
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
    }
  }
  return false;
}

// PostInitProperties @ 1491886e0

void __thiscall UNiagaraDataInterfaceExport::PostInitProperties(UNiagaraDataInterfaceExport *this)

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

// PostSimulateCanOverlapFrames @ 1491890e0

bool __thiscall
UNiagaraDataInterfaceExport::PostSimulateCanOverlapFrames(UNiagaraDataInterfaceExport *this)

{
  return false;
}

// SetShaderParameters @ 14918c6c0

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
UNiagaraDataInterfaceExport::SetShaderParameters
          (UNiagaraDataInterfaceExport *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  int *piVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  uchar *puVar3;
  FRDGBuilder *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  FNDIExportInstanceData_RenderThread *pFVar11;
  FShaderParametersMetadata *pFVar12;
  FRDGBufferUAV *pFVar13;
  FRDGBuffer *pFVar14;
  uint uVar15;
  uchar *puVar16;
  uint uVar17;
  FRDGBufferUAVDesc local_68;
  FRDGBufferDesc local_58;
  undefined4 local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar10 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar11 = TMapBase<unsigned___int64,FNDIExportInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>_>
            ::FindChecked((TMapBase<unsigned___int64,FNDIExportInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>_>
                           *)(pFVar2 + 1),uVar10);
  uVar17 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar12 = TShaderParameterStructTypeInfo<NDIExportLocal::FShaderParameters>::GetStructMetadata();
  puVar3 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar12->Size + uVar17;
  puVar16 = puVar3 + (ulonglong)uVar17 + 8;
  bVar7 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,puVar16);
  if (bVar7) {
    if (((pFVar11->WeakCallbackHandler).WeakPtr.ObjectIndex == 0) &&
       ((pFVar11->WeakCallbackHandler).WeakPtr.ObjectSerialNumber == 0)) {
      puVar3 = puVar3 + uVar17;
      puVar3[0] = '\0';
      puVar3[1] = '\0';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
      pFVar13 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferUAV
                          (param_1->ComputeDispatchInterface,param_1->GraphBuilder,PF_R32_UINT);
      *(FRDGBufferUAV **)puVar16 = pFVar13;
    }
    else {
      pFVar4 = param_1->GraphBuilder;
      if (pFVar11->RDGWriteBuffer == (FRDGBuffer *)0x0) {
        if (pFVar11->AllocationMode == PerParticle) {
          uVar8 = (uint)((float)(int)param_1->ComputeInstanceData->Context->CurrentMaxInstances_RT *
                        pFVar11->AllocationPerParticleSize);
          uVar15 = 0;
          if (0 < (int)uVar8) {
            uVar15 = uVar8;
          }
          uVar8 = uVar15;
          if ((0 < NDIExportLocal::GGPUMaxReadbackCount) &&
             (uVar8 = NDIExportLocal::GGPUMaxReadbackCount,
             (int)uVar15 < NDIExportLocal::GGPUMaxReadbackCount)) {
            uVar8 = uVar15;
          }
        }
        else {
          uVar8 = pFVar11->AllocationFixedSize;
        }
        pFVar11->WriteBufferInstanceCount = uVar8;
        local_40 = 4;
        uStack_38 = 0x4129;
        local_30 = 0;
        local_58.Metadata = (FShaderParametersMetadata *)0x0;
        uStack_3c = ((int)(uVar8 + 0x3f + ((int)(uVar8 + 0x3f) >> 0x1f & 0x3fU)) >> 6) * 0x1c0 + 1;
        local_58.BytesPerElement = 4;
        local_58._12_4_ = uStack_34;
        local_58.Usage = VertexBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
        local_58.NumElements = uStack_3c;
        FRDGUserValidation::ValidateCreateBuffer
                  (&pFVar4->UserValidation,&local_58,L"FNDIExportProxy_WriteBuffer",None);
        if (local_58.BytesPerElement == 0) {
          local_58.BytesPerElement = 1;
        }
        if (local_58.NumElements == 0) {
          local_58.NumElements = 1;
        }
        pFVar14 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x130,8);
        pFVar14 = FRDGBuffer::FRDGBuffer(pFVar14,L"FNDIExportProxy_WriteBuffer",&local_58,None);
        piVar1 = &(pFVar4->Buffers).Array.ArrayMax;
        iVar9 = (pFVar4->Buffers).Array.ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                            (0x808,(ForElementType<FRDGBuffer_*> *)&pFVar4->Buffers,piVar1);
        }
        (pFVar4->Buffers).Array.ArrayNum = iVar9 + 1;
        (pFVar4->Buffers).Array.AllocatorInstance.Data[iVar9] = pFVar14;
        (pFVar14->Handle).Index = (pFVar4->Buffers).Array.ArrayNum - 1;
        FRDGUserValidation::ValidateCreateBuffer(&pFVar4->UserValidation,pFVar14);
        FRDGTrace::AddResource(&pFVar4->Trace,(FRDGViewableResource *)pFVar14);
        pFVar11->RDGWriteBuffer = pFVar14;
        local_68._padding_._0_2_ = 0x1c;
        local_68._padding_._2_1_ = 0;
        local_68.Buffer = pFVar14;
        FRDGUserValidation::ValidateCreateUAV(&pFVar4->UserValidation,&local_68);
        pFVar14 = local_68.Buffer;
        pFVar13 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x48,8);
        lVar5 = pFVar14->_padding_;
        piVar1 = &(pFVar4->Views).Array.ArrayMax;
        *(byte *)&pFVar13->_padding_ = (byte)pFVar13->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&pFVar13->_padding_ + 4) = 0xffffffffffffffff;
        pFVar13->_padding_ = lVar5;
        pFVar13->_padding_ = 0;
        *(undefined1 *)&pFVar13->_padding_ = 2;
        *(undefined1 *)&pFVar13->_padding_ = 0;
        pFVar13->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
        (pFVar13->Desc)._padding_ =
             CONCAT53(local_68._padding_._3_5_,
                      CONCAT12(local_68._padding_._2_1_,(undefined2)local_68._padding_));
        (pFVar13->Desc).Buffer = local_68.Buffer;
        iVar9 = (pFVar4->Views).Array.ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                            (0x808,(ForElementType<FRDGView_*> *)&pFVar4->Views,piVar1);
        }
        (pFVar4->Views).Array.ArrayNum = iVar9 + 1;
        (pFVar4->Views).Array.AllocatorInstance.Data[iVar9] = (FRDGView *)pFVar13;
        *(int *)((longlong)&pFVar13->_padding_ + 4) = (pFVar4->Views).Array.ArrayNum + -1;
        FRDGUserValidation::ValidateCreateUAV(&pFVar4->UserValidation,pFVar13);
        pFVar11->RDGWriteBufferUAV = pFVar13;
      }
      AddClearUAVPass(pFVar4,pFVar11->RDGWriteBufferUAV,0,Compute);
      pFVar11->bWriteBufferUsed = true;
      *(uint *)(puVar3 + uVar17) = pFVar11->WriteBufferInstanceCount;
      *(FRDGBufferUAV **)(puVar3 + (ulonglong)uVar17 + 8) = pFVar11->RDGWriteBufferUAV;
    }
  }
  else {
    puVar3 = puVar3 + uVar17;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar16[0] = '\0';
    puVar16[1] = '\0';
    puVar16[2] = '\0';
    puVar16[3] = '\0';
    puVar16[4] = '\0';
    puVar16[5] = '\0';
    puVar16[6] = '\0';
    puVar16[7] = '\0';
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceExport @ 14918ee70

void __cdecl UNiagaraDataInterfaceExport::StaticRegisterNativesUNiagaraDataInterfaceExport(void)

{
  return;
}

// StoreData @ 14918ef80

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceExport::StoreData
          (UNiagaraDataInterfaceExport *this,FVectorVMExternalFunctionContext *param_1)

{
  TQueue<FBasicParticleData,0> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TNode *pTVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  FNDIExportInstanceData_GameThread *this_00;
  bool bVar11;
  float *pfVar12;
  float *pfVar13;
  FNiagaraTypeDefinition *pFVar14;
  float *pfVar15;
  float *pfVar16;
  TNode *pTVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  float *local_res18;
  float *local_res20;
  int local_1b0 [2];
  int local_1a8 [2];
  float *local_1a0;
  float *local_198;
  float *local_190;
  float *local_188;
  float *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  FUserPtrHandler<FNDIExportInstanceData_GameThread> local_130;
  undefined1 local_118 [24];
  float fStack_100;
  undefined4 uStack_fc;
  int local_f0;
  float *local_e8;
  int local_d8;
  FNDIInputParam<UE::Math::TVector<float>_> local_c8 [2];
  
  VectorVM::FUserPtrHandler<FNDIExportInstanceData_GameThread>::
  FUserPtrHandler<FNDIExportInstanceData_GameThread>(&local_130,param_1);
  iVar26 = 0;
  local_1a8[0] = 0;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1a8);
  lVar22 = (longlong)local_1a8[0];
  iVar18 = local_1a8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            ((FNDIInputParam<UE::Math::TVector<float>_> *)local_118,param_1);
  local_1a8[0] = 0;
  local_198 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1a8);
  lVar24 = (longlong)local_1a8[0];
  local_198 = local_198 + local_1a8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (local_c8,param_1);
  local_1b0[0] = 0;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1b0);
  this_00 = local_130.Ptr;
  lVar23 = (longlong)local_1b0[0];
  iVar19 = local_1b0[0] * param_1->PerInstanceFnInstanceIdx;
  if (((((local_130.Ptr)->UserParamBinding).BoundVariable._padding_ == 0) ||
      (pFVar14 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)
                            &((local_130.Ptr)->UserParamBinding).BoundVariable._padding_),
      (pFVar14->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) ||
     (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar11)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (0 < param_1->NumInstances) {
    local_170 = (longlong)local_c8[0].Z.AdvanceOffset << 2;
    local_168 = (longlong)local_c8[0].Y.AdvanceOffset << 2;
    local_1a0 = (float *)local_118._0_8_;
    lVar20 = (longlong)local_c8[0].X.AdvanceOffset << 2;
    local_190 = local_c8[0].Z.InputPtr;
    local_140 = lVar22 << 2;
    local_138 = (longlong)local_d8 << 2;
    lVar22 = (longlong)local_f0 << 2;
    lVar25 = (longlong)(int)local_118._16_4_ << 2;
    lVar24 = lVar24 << 2;
    local_188 = local_c8[0].Y.InputPtr;
    lVar23 = lVar23 << 2;
    local_180 = local_c8[0].X.InputPtr;
    pfVar21 = local_e8;
    pfVar13 = pfVar13 + iVar19;
    local_res18 = pfVar12 + iVar18;
    local_res20 = (float *)CONCAT44(uStack_fc,fStack_100);
    local_178 = lVar20;
    local_160 = lVar23;
    local_158 = lVar22;
    local_150 = lVar25;
    local_148 = lVar24;
    do {
      fVar4 = *pfVar21;
      pfVar15 = (float *)(local_140 + (longlong)local_res18);
      pfVar21 = (float *)(local_138 + (longlong)pfVar21);
      local_118._16_8_ = (undefined8)fVar4;
      pfVar12 = (float *)(lVar22 + (longlong)local_res20);
      fVar4 = *local_res20;
      fVar5 = *local_1a0;
      local_1a0 = (float *)((longlong)local_1a0 + lVar25);
      pfVar2 = (float *)(lVar24 + (longlong)local_198);
      fStack_100 = *local_198;
      fVar6 = *local_188;
      pfVar16 = (float *)(local_170 + (longlong)local_190);
      local_188 = (float *)(local_168 + (longlong)local_188);
      local_e8 = (float *)(double)*local_190;
      pfVar3 = (float *)((longlong)local_180 + lVar20);
      fVar7 = *local_180;
      iVar18 = 1;
      local_198 = pfVar2;
      local_190 = pfVar16;
      local_180 = pfVar3;
      if ((bVar11) && (*local_res18 != 0.0)) {
        pTVar1 = &(local_130.Ptr)->GatheredData;
        pTVar17 = ::operator_new(0x40);
        if (pTVar17 == (TNode *)0x0) {
          iVar18 = 1;
          lVar24 = local_148;
          lVar20 = local_178;
          lVar22 = local_158;
          lVar25 = local_150;
        }
        else {
          pTVar17->NextNode = (TNode *)0x0;
          auVar9._8_4_ = SUB84((double)fVar4,0);
          auVar9._0_8_ = (double)fVar5;
          auVar9._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
          *(undefined1 (*) [16])&(pTVar17->Item).Position.field0_0x0 = auVar9;
          (pTVar17->Item).Position.field0_0x0._s_0.Z = (double)local_118._16_8_;
          *(ulonglong *)&(pTVar17->Item).Size = CONCAT44(uStack_fc,fStack_100);
          auVar10._8_4_ = SUB84((double)fVar6,0);
          auVar10._0_8_ = (double)fVar7;
          auVar10._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
          *(undefined1 (*) [16])&(pTVar17->Item).Velocity.field0_0x0 = auVar10;
          (pTVar17->Item).Velocity.field0_0x0._s_0.Z = (double)local_e8;
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar8 = pTVar1->Head;
          pTVar1->Head = pTVar17;
          UNLOCK();
          if (((ulonglong)pTVar8 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar8->NextNode = pTVar17;
          UNLOCK();
          iVar18 = 0;
          lVar24 = local_148;
          lVar20 = local_178;
          lVar23 = local_160;
          lVar22 = local_158;
          lVar25 = local_150;
        }
      }
      iVar26 = iVar26 + 1;
      *pfVar13 = (float)(iVar18 + -1);
      pfVar13 = (float *)((longlong)pfVar13 + lVar23);
      local_res18 = pfVar15;
      local_res20 = pfVar12;
    } while (iVar26 < param_1->NumInstances);
  }
  return;
}

