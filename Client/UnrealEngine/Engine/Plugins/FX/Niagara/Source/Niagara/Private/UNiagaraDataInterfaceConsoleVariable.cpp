// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 20

// StaticClass @ 148e3fed0

UClass * __cdecl UNiagaraDataInterfaceConsoleVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceConsoleVariable",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceConsoleVariable,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceConsoleVariable>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceConsoleVariable>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.InnerSingleton;
}

// UNiagaraDataInterfaceConsoleVariable @ 148e54fe0

UNiagaraDataInterfaceConsoleVariable * __thiscall
UNiagaraDataInterfaceConsoleVariable::UNiagaraDataInterfaceConsoleVariable
          (UNiagaraDataInterfaceConsoleVariable *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceConsoleVariable__6B_;
  return this;
}

// UNiagaraDataInterfaceConsoleVariable @ 148e55010

UNiagaraDataInterfaceConsoleVariable * __thiscall
UNiagaraDataInterfaceConsoleVariable::UNiagaraDataInterfaceConsoleVariable
          (UNiagaraDataInterfaceConsoleVariable *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceConsoleVariable__6B_;
  puVar1 = ::operator_new(0x60);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[1] = 0;
    *puVar1 = &___7FNDIProxy_NDIConsoleVariableLocal__6B_;
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
  puVar1 = *(undefined8 **)&this->field_0x28;
  if ((puVar1 != puVar2) &&
     (*(undefined8 **)&this->field_0x28 = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceConsoleVariable @ 148e568e0

void __thiscall
UNiagaraDataInterfaceConsoleVariable::~UNiagaraDataInterfaceConsoleVariable
          (UNiagaraDataInterfaceConsoleVariable *this)

{
  *(undefined ***)this = &___7UNiagaraDataInterfaceConsoleVariable__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148e57e60

void __thiscall
`UNiagaraDataInterfaceConsoleVariable::GetVMExternalFunction'::__l5::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_50 [2];
  float *local_48;
  int local_40 [2];
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> local_38;
  
  cVar2 = *(char *)((longlong)this + 4);
  uVar3 = *(uint *)this;
  VectorVM::FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar13 = 0;
  local_50[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar5 = local_50[0];
  local_40[0] = 0;
  iVar11 = local_50[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar6 = local_40[0];
  iVar12 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  uVar8 = 0;
  if ((int)uVar3 < ((local_38.Ptr)->ConsoleVariableData).ArrayNum) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_48 = pfVar10 + iVar12;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar1 = *(float *)(((local_38.Ptr)->ConsoleVariableData).AllocatorInstance.Data +
                    (longlong)(int)uVar3 * 4);
  if (0 < param_1->NumInstances) {
    pfVar10 = pfVar10 + iVar12;
    pfVar9 = pfVar9 + iVar11;
    do {
      iVar13 = iVar13 + 1;
      *pfVar9 = (float)-(uint)(cVar2 != '\0');
      *pfVar10 = fVar1;
      pfVar10 = pfVar10 + iVar6;
      pfVar9 = pfVar9 + iVar5;
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// operator() @ 148e58fa0

void __thiscall
`UNiagaraDataInterfaceConsoleVariable::GetVMExternalFunction'::__l12::<lambda_2>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_50 [2];
  float *local_48;
  int local_40 [2];
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> local_38;
  
  cVar1 = *(char *)((longlong)this + 4);
  uVar2 = *(uint *)this;
  VectorVM::FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar13 = 0;
  local_50[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar5 = local_50[0];
  local_40[0] = 0;
  iVar11 = local_50[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar6 = local_40[0];
  iVar12 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  uVar8 = 0;
  if ((int)uVar2 < ((local_38.Ptr)->ConsoleVariableData).ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_48 = pfVar10 + iVar12;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar3 = *(float *)(((local_38.Ptr)->ConsoleVariableData).AllocatorInstance.Data +
                    (longlong)(int)uVar2 * 4);
  if (0 < param_1->NumInstances) {
    pfVar10 = pfVar10 + iVar12;
    pfVar9 = pfVar9 + iVar11;
    do {
      iVar13 = iVar13 + 1;
      *pfVar9 = (float)-(uint)(cVar1 != '\0');
      *pfVar10 = fVar3;
      pfVar10 = pfVar10 + iVar6;
      pfVar9 = pfVar9 + iVar5;
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// operator() @ 148e59100

void __thiscall
`UNiagaraDataInterfaceConsoleVariable::GetVMExternalFunction'::__l19::<lambda_3>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  char cVar1;
  FScriptContainerElement FVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_50 [2];
  float *local_48;
  int local_40 [2];
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> local_38;
  
  cVar1 = *(char *)((longlong)this + 4);
  uVar3 = *(uint *)this;
  VectorVM::FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar13 = 0;
  local_50[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar5 = local_50[0];
  local_40[0] = 0;
  iVar11 = local_50[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar6 = local_40[0];
  iVar12 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  uVar8 = 0;
  if ((int)uVar3 < ((local_38.Ptr)->ConsoleVariableData).ArrayNum) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_48 = pfVar10 + iVar12;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar2 = ((local_38.Ptr)->ConsoleVariableData).AllocatorInstance.Data[(longlong)(int)uVar3 * 4];
  if (0 < param_1->NumInstances) {
    pfVar10 = pfVar10 + iVar12;
    pfVar9 = pfVar9 + iVar11;
    do {
      iVar13 = iVar13 + 1;
      *pfVar9 = (float)-(uint)(cVar1 != '\0');
      *pfVar10 = (float)-(uint)(FVar2 != (FScriptContainerElement)0x0);
      pfVar10 = pfVar10 + iVar6;
      pfVar9 = pfVar9 + iVar5;
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// BuildShaderParameters @ 148e5c400

void __thiscall
UNiagaraDataInterfaceConsoleVariable::BuildShaderParameters
          (UNiagaraDataInterfaceConsoleVariable *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceConsoleVariable::FShaderParameters>::
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

// CanExecuteOnTarget @ 148e5cfb0

bool __thiscall
UNiagaraDataInterfaceConsoleVariable::CanExecuteOnTarget
          (UNiagaraDataInterfaceConsoleVariable *this,ENiagaraSimTarget param_1)

{
  return true;
}

// DestroyPerInstanceData @ 148e63040

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
UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData
          (UNiagaraDataInterfaceConsoleVariable *this,void *param_1,FNiagaraSystemInstance *param_2)

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
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  if ((*(uint *)&this->field_0x30 >> 2 & 1) != 0) {
    lVar1 = *(longlong *)&this->field_0x28;
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
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_2->ID;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    lStack_70 = lVar1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData_::__l5::TSTR_NDIConsoleVariable_InitRT219>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::TSTR_NDIConsoleVariable_InitRT219>
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
  }
  return;
}

// GetPrivateStaticClass @ 148e6e360

UClass * __cdecl UNiagaraDataInterfaceConsoleVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceConsoleVariable",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceConsoleVariable,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceConsoleVariable>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceConsoleVariable>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.InnerSingleton;
}

// GetVMExternalFunction @ 148e704c0

void __thiscall
UNiagaraDataInterfaceConsoleVariable::GetVMExternalFunction
          (UNiagaraDataInterfaceConsoleVariable *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  IConsoleManager *pIVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FMRSWRecursiveAccessDetector *this_00;
  wchar_t *pwVar13;
  undefined1 uVar14;
  undefined4 uStackX_14;
  undefined4 uStackX_1c;
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  undefined1 local_130 [8];
  FDelegateAllocation local_128;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  int local_100;
  undefined4 uStack_fc;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  FString local_50;
  
  pwVar13 = L"";
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = IConsoleManager::Singleton;
  pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0xc0);
  if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = ::FName::ToString((FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8),
                             &local_50);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  plVar10 = (longlong *)(*pcVar3)(pIVar4,pwVar13);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  FVar1 = param_1->Name;
  if (FVar1 == NDIConsoleVariableLocal::GetConsoleVariableFloat) {
    if ((plVar10 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar10 + 0x50))(plVar10), cVar6 == '\0')) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,1,(ForAnyElementType *)((longlong)param_2 + 0x30),
                       (int *)((longlong)param_2 + 0x38),(int *)((longlong)param_2 + 0x3c));
    *(undefined4 *)(*(longlong *)((longlong)param_2 + 0x30) + (longlong)iVar7 * 4) = 0;
    if (cVar6 != '\0') {
      iVar8 = *(int *)((longlong)param_2 + 8);
      if (iVar8 == *(int *)((longlong)param_2 + 0xc)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,param_2,(int *)((longlong)param_2 + 0xc));
      }
      *(int *)((longlong)param_2 + 8) = iVar8 + 1;
      lVar2 = *(longlong *)param_2;
      *(longlong **)(lVar2 + (longlong)iVar8 * 0x10) = plVar10;
      *(int *)(lVar2 + 8 + (longlong)iVar8 * 0x10) = iVar7;
    }
    uStackX_14 = CONCAT31(uStackX_14._1_3_,cVar6);
    local_148 = (undefined1  [8])0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_b0);
    local_98 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceConsoleVariable::GetVMExternalFunction'::`5'::<lambda_1>_>
                  ::_vftable_;
      puVar11[3] = CONCAT44(uStackX_14,iVar7);
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_f8);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_148;
  }
  else if (FVar1 == NDIConsoleVariableLocal::GetConsoleVariableInt) {
    if ((plVar10 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar10 + 0x48))(plVar10), cVar6 == '\0')) {
      uVar14 = 0;
      iVar7 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed
                        ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                         ((longlong)param_2 + 0x30),1);
    }
    else {
      uVar14 = 1;
      iVar7 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed
                        ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                         ((longlong)param_2 + 0x30),1);
      iVar8 = *(int *)((longlong)param_2 + 0x18);
      if (iVar8 == *(int *)((longlong)param_2 + 0x1c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)((longlong)param_2 + 0x10),
                           (int *)((longlong)param_2 + 0x1c));
      }
      *(int *)((longlong)param_2 + 0x18) = iVar8 + 1;
      lVar2 = *(longlong *)((longlong)param_2 + 0x10);
      *(longlong **)(lVar2 + (longlong)iVar8 * 0x10) = plVar10;
      *(int *)(lVar2 + 8 + (longlong)iVar8 * 0x10) = iVar7;
    }
    uStackX_1c = CONCAT31(uStackX_1c._1_3_,uVar14);
    local_130 = (undefined1  [8])0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_90);
    local_78 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceConsoleVariable::GetVMExternalFunction'::`12'::<lambda_2>_>
                  ::_vftable_;
      puVar11[3] = CONCAT44(uStackX_1c,iVar7);
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_e0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_130;
  }
  else {
    if (FVar1 != NDIConsoleVariableLocal::GetConsoleVariableBool) {
      return;
    }
    if ((plVar10 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar10 + 0x40))(plVar10), cVar6 == '\0')) {
      uVar14 = 0;
      iVar7 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed
                        ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                         ((longlong)param_2 + 0x30),1);
    }
    else {
      uVar14 = 1;
      iVar7 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed
                        ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                         ((longlong)param_2 + 0x30),1);
      iVar8 = *(int *)((longlong)param_2 + 0x28);
      if (iVar8 == *(int *)((longlong)param_2 + 0x2c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)((longlong)param_2 + 0x20),
                           (int *)((longlong)param_2 + 0x2c));
      }
      *(int *)((longlong)param_2 + 0x28) = iVar8 + 1;
      lVar2 = *(longlong *)((longlong)param_2 + 0x20);
      *(longlong **)(lVar2 + (longlong)iVar8 * 0x10) = plVar10;
      *(int *)(lVar2 + 8 + (longlong)iVar8 * 0x10) = iVar7;
    }
    uStack_fc = CONCAT31(uStack_fc._1_3_,uVar14);
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    local_100 = iVar7;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_70);
    local_58 = &local_110;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceConsoleVariable::GetVMExternalFunction'::`19'::<lambda_3>_>
                  ::_vftable_;
      puVar11[3] = CONCAT44(uStack_fc,local_100);
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_c8);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_118;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// HasPreSimulateTick @ 148e729c0

bool __thiscall
UNiagaraDataInterfaceConsoleVariable::HasPreSimulateTick(UNiagaraDataInterfaceConsoleVariable *this)

{
  return true;
}

// InitPerInstanceData @ 148e74810

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
UNiagaraDataInterfaceConsoleVariable::InitPerInstanceData
          (UNiagaraDataInterfaceConsoleVariable *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FString *pFVar9;
  longlong *plVar10;
  IConsoleManager *pIVar11;
  wchar_t *pwVar12;
  ForAnyElementType *pFVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  uint local_res10;
  longlong local_res20;
  FName local_b8;
  undefined4 local_b0;
  int iStack_ac;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  FScriptContainerElement *local_88;
  longlong *local_80;
  FScriptContainerElement *local_78;
  TReferenceControllerBase<1> *local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  if ((*(uint *)&this->field_0x30 >> 2 & 1) == 0) {
    return true;
  }
  iVar6 = (param_2->Emitters).ArrayNum;
  pFVar21 = (param_2->Emitters).AllocatorInstance.Data;
  local_88 = pFVar21;
  if ((iVar6 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar19 = pFVar21 + (longlong)iVar6 * 0x10;
  local_78 = pFVar19;
  if (pFVar21 != pFVar19) {
    do {
      lVar16 = *(longlong *)pFVar21;
      if (((*(int *)(lVar16 + 0xd4) != 4) && (*(longlong *)(lVar16 + 0x28) != 0)) &&
         (*(char *)(lVar16 + 0xd1) == '\x01')) {
        lVar16 = *(longlong *)(lVar16 + 0x18);
        lVar20 = *(longlong *)(lVar16 + 0x68);
        local_a8 = lVar16;
        if (*(longlong *)(lVar20 + 0x20) == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptParametersMetadata.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraShared.h"
                             ,0x378,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if ((*(longlong *)(lVar20 + 0x20) == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        local_70 = *(TReferenceControllerBase<1> **)(lVar20 + 0x28);
        plVar10 = *(longlong **)(lVar20 + 0x20);
        if (local_70 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a0 = plVar10;
        if ((plVar10 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = *(int *)(lVar16 + 0xb8);
        local_res10 = 0;
        if (0 < iVar6) {
          local_90 = 0;
          local_98 = 0;
          do {
            lVar18 = local_90;
            lVar20 = local_98;
            uVar14 = 0;
            if ((int)local_res10 < iVar6) {
              uVar14 = ~local_res10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            if (((*(UNiagaraDataInterfaceConsoleVariable **)(lVar20 + *(longlong *)(lVar16 + 0xb0))
                  == this) && (-1 < (int)local_res10)) && ((int)local_res10 < (int)plVar10[1])) {
              if (((int)local_res10 < 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              plVar15 = (longlong *)(*plVar10 + 0x28 + lVar18);
              lVar16 = plVar15[1];
              local_80 = plVar15;
              iVar6 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,4,(int)lVar16,(ForAnyElementType *)((longlong)param_1 + 0x40),
                                 (int *)((longlong)param_1 + 0x48),(int *)((longlong)param_1 + 0x4c)
                                );
              memset(((ForAnyElementType *)((longlong)param_1 + 0x40))->Data + (longlong)iVar6 * 8,0
                     ,(longlong)(int)lVar16 << 3);
              iVar6 = (int)plVar15[1];
              uVar14 = 0;
              plVar10 = local_a0;
              lVar16 = local_a8;
              if (0 < iVar6) {
                local_res20 = 0;
                lVar17 = 0;
                do {
                  uVar8 = 0;
                  if ((int)uVar14 < iVar6) {
                    uVar8 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    uVar4 = (*pcVar2)();
                    return (bool)uVar4;
                  }
                  lVar16 = *plVar15;
                  if (*(int *)(lVar16 + 0x20 + lVar17) < 1) {
                    local_b8.ComparisonIndex.Value = 0;
                    local_b8.Number = 0;
                  }
                  else {
                    local_b8 = *(FName *)(*(longlong *)(lVar16 + 0x18 + lVar17) + 8);
                  }
                  cVar5 = '\0';
                  FVar1 = *(FName *)(lVar16 + lVar17);
                  iVar6 = -1;
                  if (FVar1 == NDIConsoleVariableLocal::GetConsoleVariableFloat) {
                    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                        (IConsoleManager::SetupSingleton(),
                        IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Singleton != nullptr",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                           ,0x4fb,L""), bVar3)) {
                      pcVar2 = (code *)swi(3);
                      uVar4 = (*pcVar2)();
                      return (bool)uVar4;
                    }
                    pIVar11 = IConsoleManager::Singleton;
                    pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xc0);
                    pFVar9 = ::FName::ToString(&local_b8,&local_68);
                    if ((pFVar9->Data).ArrayNum == 0) {
                      pwVar12 = L"";
                    }
                    else {
                      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                    }
                    plVar10 = (longlong *)(*pcVar2)(pIVar11,pwVar12,1);
                    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_68.Data.AllocatorInstance.Data);
                    }
                    if ((plVar10 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar10 + 0x50))(plVar10), cVar5 == '\0')) {
                      cVar5 = '\0';
                    }
                    else {
                      cVar5 = '\x01';
                    }
                    iVar6 = UE::Core::Private::
                            ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (4,4,1,(ForAnyElementType *)((longlong)param_1 + 0x30),
                                       (int *)((longlong)param_1 + 0x38),
                                       (int *)((longlong)param_1 + 0x3c));
                    *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x30) + (longlong)iVar6 * 4) =
                         0;
                    if (cVar5 != '\0') {
                      iVar7 = *(int *)((longlong)param_1 + 8);
                      if (iVar7 == *(int *)((longlong)param_1 + 0xc)) {
                        iVar7 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x810,param_1,(int *)((longlong)param_1 + 0xc));
                      }
                      *(int *)((longlong)param_1 + 8) = iVar7 + 1;
                      lVar16 = *(longlong *)param_1;
                      *(longlong **)(lVar16 + (longlong)iVar7 * 0x10) = plVar10;
                      *(int *)(lVar16 + 8 + (longlong)iVar7 * 0x10) = iVar6;
                    }
                  }
                  else if (FVar1 == NDIConsoleVariableLocal::GetConsoleVariableInt) {
                    pIVar11 = IConsoleManager::Get();
                    pcVar2 = *(code **)((longlong)*pIVar11 + 0xc0);
                    pFVar9 = ::FName::ToString(&local_b8,&local_58);
                    if ((pFVar9->Data).ArrayNum == 0) {
                      pwVar12 = L"";
                    }
                    else {
                      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                    }
                    plVar10 = (longlong *)(*pcVar2)(pIVar11,pwVar12,1);
                    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_58.Data.AllocatorInstance.Data);
                    }
                    if ((plVar10 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar10 + 0x48))(plVar10), cVar5 == '\0'))
                    goto LAB_148e74e1f;
                    iVar6 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed
                                      ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                                       ((longlong)param_1 + 0x30),1);
                    pFVar13 = (ForAnyElementType *)((longlong)param_1 + 0x10);
                    iVar7 = *(int *)((longlong)param_1 + 0x18);
                    if (iVar7 == *(int *)((longlong)param_1 + 0x1c)) {
                      iVar7 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x810,pFVar13,(int *)((longlong)param_1 + 0x1c));
                      pFVar13 = (ForAnyElementType *)((longlong)param_1 + 0x10);
                    }
LAB_148e74d54:
                    cVar5 = '\x01';
                    *(int *)&pFVar13[1].Data = iVar7 + 1;
                    pFVar21 = pFVar13->Data;
                    *(longlong **)(pFVar21 + (longlong)iVar7 * 0x10) = plVar10;
                    *(int *)(pFVar21 + (longlong)iVar7 * 0x10 + 8) = iVar6;
                  }
                  else if (FVar1 == NDIConsoleVariableLocal::GetConsoleVariableBool) {
                    pIVar11 = IConsoleManager::Get();
                    pcVar2 = *(code **)((longlong)*pIVar11 + 0xc0);
                    pFVar9 = ::FName::ToString(&local_b8,&local_48);
                    if ((pFVar9->Data).ArrayNum == 0) {
                      pwVar12 = L"";
                    }
                    else {
                      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                    }
                    plVar10 = (longlong *)(*pcVar2)(pIVar11,pwVar12,1);
                    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_48.Data.AllocatorInstance.Data);
                    }
                    if ((plVar10 != (longlong *)0x0) &&
                       (cVar5 = (**(code **)(*plVar10 + 0x40))(plVar10), cVar5 != '\0')) {
                      iVar6 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed
                                        ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                                         ((longlong)param_1 + 0x30),1);
                      pFVar13 = (ForAnyElementType *)((longlong)param_1 + 0x20);
                      iVar7 = *(int *)((longlong)param_1 + 0x28);
                      if (iVar7 == *(int *)((longlong)param_1 + 0x2c)) {
                        iVar7 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x810,pFVar13,(int *)((longlong)param_1 + 0x2c));
                        pFVar13 = (ForAnyElementType *)((longlong)param_1 + 0x20);
                      }
                      goto LAB_148e74d54;
                    }
LAB_148e74e1f:
                    cVar5 = '\0';
                    iVar6 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed
                                      ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                                       ((longlong)param_1 + 0x30),1);
                  }
                  local_b0 = CONCAT31(local_b0._1_3_,cVar5);
                  uVar8 = 0;
                  if ((int)uVar14 < *(int *)((longlong)param_1 + 0x48)) {
                    uVar8 = ~uVar14 >> 0x1f;
                  }
                  iStack_ac = iVar6;
                  if ((uVar8 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    uVar4 = (*pcVar2)();
                    return (bool)uVar4;
                  }
                  uVar14 = uVar14 + 1;
                  lVar17 = lVar17 + 0x50;
                  *(ulonglong *)(local_res20 + *(longlong *)((longlong)param_1 + 0x40)) =
                       CONCAT44(iStack_ac,local_b0);
                  local_res20 = local_res20 + 8;
                  iVar6 = (int)local_80[1];
                  plVar10 = local_a0;
                  plVar15 = local_80;
                  lVar16 = local_a8;
                  lVar18 = local_90;
                  lVar20 = local_98;
                } while ((int)uVar14 < iVar6);
              }
            }
            iVar6 = *(int *)(lVar16 + 0xb8);
            local_res10 = local_res10 + 1;
            local_98 = lVar20 + 8;
            local_90 = lVar18 + 0x38;
            pFVar19 = local_78;
            pFVar21 = local_88;
          } while ((int)local_res10 < iVar6);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70);
      }
      pFVar21 = pFVar21 + 0x10;
      local_88 = pFVar21;
    } while (pFVar21 != pFVar19);
  }
  return true;
}

// PerInstanceDataSize @ 148e75a80

int __thiscall
UNiagaraDataInterfaceConsoleVariable::PerInstanceDataSize
          (UNiagaraDataInterfaceConsoleVariable *this)

{
  return 0x50;
}

// PerInstanceTick @ 148e75e00

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
UNiagaraDataInterfaceConsoleVariable::PerInstanceTick
          (UNiagaraDataInterfaceConsoleVariable *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined1 local_res10 [8];
  undefined1 local_38;
  undefined1 local_37 [31];
  
  if ((param_1 == (void *)0x0) || (param_2 == (FNiagaraSystemInstance *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PerInstanceData && SystemInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceConsoleVariable.cpp"
                       ,0xf6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = *(int *)((longlong)param_1 + 8);
  puVar8 = *(undefined8 **)param_1;
  puVar7 = puVar8 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TTuple<IConsoleVariable_*,int>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (puVar8 == puVar7) break;
    uVar9 = (**(code **)(*(longlong *)*puVar8 + 0xd0))();
    uVar2 = *(uint *)(puVar8 + 1);
    uVar6 = 0;
    if ((int)uVar2 < *(int *)((longlong)param_1 + 0x38)) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    puVar8 = puVar8 + 2;
    *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x30) + (longlong)(int)uVar2 * 4) = uVar9;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x18);
  puVar8 = *(undefined8 **)((longlong)param_1 + 0x10);
  puVar7 = puVar8 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x18) != iVar1) {
      local_38 = 0;
      `TCheckedPointerIterator<TTuple<IConsoleVariable_*,int>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_38);
    }
    if (puVar8 == puVar7) break;
    uVar9 = (**(code **)(*(longlong *)*puVar8 + 200))();
    uVar2 = *(uint *)(puVar8 + 1);
    uVar6 = 0;
    if ((int)uVar2 < *(int *)((longlong)param_1 + 0x38)) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    puVar8 = puVar8 + 2;
    *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x30) + (longlong)(int)uVar2 * 4) = uVar9;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x28);
  puVar8 = *(undefined8 **)((longlong)param_1 + 0x20);
  puVar7 = puVar8 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x28) != iVar1) {
      local_37[0] = 0;
      `TCheckedPointerIterator<TTuple<IConsoleVariable_*,int>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_37);
    }
    if (puVar8 == puVar7) break;
    uVar5 = (**(code **)(*(longlong *)*puVar8 + 0xc0))();
    uVar2 = *(uint *)(puVar8 + 1);
    uVar6 = 0;
    if ((int)uVar2 < *(int *)((longlong)param_1 + 0x38)) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    puVar8 = puVar8 + 2;
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x30) + (longlong)(int)uVar2 * 4) = uVar5;
  }
  return false;
}

// PostInitProperties @ 148e76b60

void __thiscall
UNiagaraDataInterfaceConsoleVariable::PostInitProperties(UNiagaraDataInterfaceConsoleVariable *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)*(TObjectPtr<UObject>_u_0 *)&this->field_0x10;
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

// ProvidePerInstanceDataForRenderThread @ 148e78ed0

void __thiscall
UNiagaraDataInterfaceConsoleVariable::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceConsoleVariable *this,void *param_1,void *param_2,ulong64 *param_3)

{
  FNDIProxy *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = *(FNDIProxy **)&this->field_0x28;
  if (this_00 == (FNDIProxy *)0x0) {
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
  NDIConsoleVariableLocal::FNDIProxy::ProvidePerInstanceDataForRenderThread
            (this_00,param_1,param_2,param_3);
  return;
}

// SetShaderParameters @ 148e7da70

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
UNiagaraDataInterfaceConsoleVariable::SetShaderParameters
          (UNiagaraDataInterfaceConsoleVariable *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FShaderParametersMetadata *pFVar5;
  uint uVar6;
  longlong lVar7;
  FName *pFVar8;
  
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
  uVar4 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  if (pFVar1[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar1[4]._padding_ + 4))
  {
    pFVar8 = (FName *)pFVar1[5]._padding_;
    if ((FName *)pFVar1[5]._padding_ == (FName *)0x0) {
      pFVar8 = &pFVar1[4].SourceDIName;
    }
    uVar6 = (&pFVar8->ComparisonIndex)
            [(uVar4 >> 0x20) * 0x17 + uVar4 &
             (ulonglong)(pFVar1[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar6 != 0xffffffff) {
      do {
        lVar7 = pFVar1[1]._padding_ + (longlong)(int)uVar6 * 0x28;
        if (*(ulong64 *)(pFVar1[1]._padding_ + (longlong)(int)uVar6 * 0x28) == uVar4) {
          if (lVar7 == 0) goto LAB_148e7db1a;
          goto LAB_148e7db40;
        }
        uVar6 = *(uint *)(lVar7 + 0x20);
      } while (uVar6 != 0xffffffff);
    }
  }
  lVar7 = 0;
LAB_148e7db1a:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_148e7db40:
  uVar6 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceConsoleVariable::FShaderParameters>::
           GetStructMetadata();
  param_1->ParametersOffset = pFVar5->Size + uVar6;
  *(undefined8 *)(param_1->BaseParameters + uVar6) = *(undefined8 *)(lVar7 + 0x10);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceConsoleVariable @ 148e81640

void __cdecl
UNiagaraDataInterfaceConsoleVariable::StaticRegisterNativesUNiagaraDataInterfaceConsoleVariable
          (void)

{
  return;
}

