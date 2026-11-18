// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// Execute @ 1493a0c20

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
FNiagaraSystemScriptExecutionContext::Execute
          (FNiagaraSystemScriptExecutionContext *this,FNiagaraSystemInstance *param_1,float param_2,
          uint param_3,FScriptExecutionConstantBufferTable *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FNiagaraSystemInstance *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FNDIStageTickHandler *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((param_1 != (FNiagaraSystemInstance *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentSystemInstance == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                         ,0x266,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (((this->_padding_ & 0x400000000) != 0) &&
     (pTVar3 = this->SystemInstances,
     pTVar3 != (TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *)0x0)) {
    pFVar9 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar1) break;
      pFVar4 = *(FNiagaraSystemInstance **)pFVar9;
      pFVar8 = FNiagaraSystemInstance::GetSystemDIStageTickHandler
                         (pFVar4,*(ENiagaraScriptUsage *)(this->_padding_ + 0x30));
      if (pFVar8 != (FNDIStageTickHandler *)0x0) {
        FNDIStageTickHandler::PreStageTick(pFVar8,pFVar4,param_2);
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  bVar6 = FNiagaraScriptExecutionContextBase::Execute
                    ((FNiagaraScriptExecutionContextBase *)this,param_1,param_2,param_3,param_4);
  if (((this->_padding_ & 0x800000000) != 0) &&
     (pTVar3 = this->SystemInstances,
     pTVar3 != (TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *)0x0)) {
    pFVar9 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar9 == pFVar1) break;
      pFVar4 = *(FNiagaraSystemInstance **)pFVar9;
      pFVar8 = FNiagaraSystemInstance::GetSystemDIStageTickHandler
                         (pFVar4,*(ENiagaraScriptUsage *)(this->_padding_ + 0x30));
      if (pFVar8 != (FNDIStageTickHandler *)0x0) {
        FNDIStageTickHandler::PostStageTick(pFVar8,pFVar4,param_2);
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  return bVar6;
}

// GeneratePerInstanceDIFunctionTable @ 1493a2890

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
FNiagaraSystemScriptExecutionContext::GeneratePerInstanceDIFunctionTable
          (FNiagaraSystemScriptExecutionContext *this,FNiagaraSystemInstance *param_1,
          TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  FNiagaraParameterStore *pFVar1;
  FNiagaraScriptResolvedDataInterfaceInfo *this_00;
  FWeakObjectPtr *pFVar2;
  longlong lVar3;
  longlong lVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  UObject *pUVar14;
  UObject *pUVar15;
  uint uVar16;
  FWeakObjectPtr *pFVar17;
  atomic<unsigned___int64> aVar18;
  longlong lVar19;
  FScriptContainerElement *this_01;
  uint uVar20;
  FNiagaraScriptDataInterfaceCompileInfo *this_02;
  longlong lVar21;
  uint local_res20;
  longlong local_90;
  FReadAccessScope local_88;
  FName local_70;
  FNiagaraTypeDefinitionHandle local_68 [2];
  void *local_60;
  undefined8 local_58;
  
  UNiagaraScript::GetExecutionReadyParameterStore((UNiagaraScript *)this->_padding_,CPUSim);
  lVar3 = this->_padding_;
  local_res20 = 0;
  if (*(int *)(lVar3 + 0x238) < 1) {
    return true;
  }
  local_90 = 0;
LAB_1493a28f0:
  uVar20 = 0;
  if ((int)local_res20 < *(int *)(lVar3 + 0x238)) {
    uVar20 = ~local_res20 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar20 = 0;
  lVar19 = 0;
  lVar12 = local_90 * 0x58 + *(longlong *)(lVar3 + 0x230);
  if (0 < *(int *)(lVar3 + 0x228)) {
    lVar21 = 0;
    do {
      uVar16 = ~uVar20 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar20 < *(int *)(lVar3 + 0x228)) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      this_02 = (FNiagaraScriptDataInterfaceCompileInfo *)(*(longlong *)(lVar3 + 0x220) + lVar21);
      iVar11 = *(int *)(this->_padding_ + 800);
      lVar4 = *(longlong *)(this->_padding_ + 0x318);
      if ((iVar11 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar10 = 0;
      if ((int)uVar20 < iVar11) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      this_00 = (FNiagaraScriptResolvedDataInterfaceInfo *)(lVar21 + lVar4);
      uVar10 = 0;
      if ((int)uVar20 < (int)this->_padding_) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pUVar5 = *(UObject **)(this->_padding_ + lVar19 * 8);
      if ((this_02->Name == *(FName *)(lVar12 + 8)) &&
         ((bVar7 = FNiagaraScriptDataInterfaceCompileInfo::NeedsPerInstanceBinding(this_02), bVar7
          || (bVar7 = FNiagaraScriptResolvedDataInterfaceInfo::NeedsPerInstanceBinding(this_00),
             bVar7)))) {
        iVar11 = param_2->ArrayNum;
        if (iVar11 == param_2->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar11 + 1;
        this_01 = (param_2->AllocatorInstance).Data + (longlong)iVar11 * 0x20;
        DefaultConstructItems<FNiagaraPerInstanceDIFuncInfo,int>(this_01,1);
        pFVar1 = &param_1->InstanceParameters;
        pcVar6 = *(code **)(pFVar1->_padding_ + 0x58);
        local_70 = this_02->Name;
        local_68[0].RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register(local_68,&this_02->Type);
        local_60 = (void *)0x0;
        local_58 = 0;
        piVar13 = (int *)(*pcVar6)(pFVar1,&local_70,0);
        if (local_60 != (void *)0x0) {
          FMemory::Free(local_60);
        }
        if (piVar13 != (int *)0x0) {
          iVar11 = *piVar13;
          if ((iVar11 < 0) || ((param_1->InstanceParameters).DataInterfaces.ArrayNum <= iVar11))
          goto LAB_1493a2dd7;
          if ((iVar11 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pUVar15 = *(UObject **)
                     ((param_1->InstanceParameters).DataInterfaces.AllocatorInstance.Data +
                     (longlong)iVar11 * 8);
          if (pUVar15 == (UObject *)0x0) goto LAB_1493a2dd7;
          pFVar17 = (FWeakObjectPtr *)
                    (param_1->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
          pFVar2 = (FWeakObjectPtr *)
                   ((longlong)pFVar17 +
                   (longlong)(param_1->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc);
          if (pFVar17 != pFVar2) goto LAB_1493a2c06;
          goto LAB_1493a2d3a;
        }
        piVar13 = (int *)(**(code **)(pFVar1->_padding_ + 0x58))
                                   (pFVar1,&this_00->ResolvedVariable,0);
        if (piVar13 == (int *)0x0) {
          pFVar17 = (FWeakObjectPtr *)
                    (param_1->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
          pFVar2 = (FWeakObjectPtr *)
                   ((longlong)pFVar17 +
                   (longlong)(param_1->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc);
          goto joined_r0x0001493a2d5a;
        }
        iVar11 = *piVar13;
        if ((iVar11 < 0) || ((param_1->InstanceParameters).DataInterfaces.ArrayNum <= iVar11))
        goto LAB_1493a2dd7;
        if ((iVar11 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pUVar15 = *(UObject **)
                   ((param_1->InstanceParameters).DataInterfaces.AllocatorInstance.Data +
                   (longlong)iVar11 * 8);
        if (pUVar15 == (UObject *)0x0) goto LAB_1493a2dd7;
        pFVar17 = (FWeakObjectPtr *)
                  (param_1->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
        pFVar2 = (FWeakObjectPtr *)
                 ((longlong)pFVar17 +
                 (longlong)(param_1->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc);
        goto joined_r0x0001493a2d1d;
      }
      uVar20 = uVar20 + 1;
      lVar19 = lVar19 + 1;
      lVar21 = lVar21 + 0x50;
    } while ((int)uVar20 < *(int *)(lVar3 + 0x228));
  }
  goto LAB_1493a2e23;
  while (pFVar17 = (FWeakObjectPtr *)&pFVar17[1].ObjectSerialNumber, pFVar17 != pFVar2) {
LAB_1493a2c06:
    pUVar14 = FWeakObjectPtr::Get(pFVar17);
    if (pUVar14 == pUVar15) goto LAB_1493a2c23;
  }
  aVar18 = (atomic<unsigned___int64>)0x0;
  goto LAB_1493a2d81;
joined_r0x0001493a2d5a:
  if (pFVar17 == pFVar2) goto LAB_1493a2d7a;
  pUVar15 = FWeakObjectPtr::Get(pFVar17);
  if (pUVar15 == pUVar5) {
    if (pFVar17 != (FWeakObjectPtr *)0x0) {
      uVar20 = pFVar17[1].ObjectIndex;
      uVar10 = 0;
      if ((int)uVar20 < (param_1->DataInterfaceInstanceData).ArrayNum) {
        uVar10 = ~uVar20 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      aVar18 = (atomic<unsigned___int64>)
               ((longlong)(int)uVar20 +
               (longlong)(param_1->DataInterfaceInstanceData).AllocatorInstance.Data);
      goto LAB_1493a2d7c;
    }
    goto LAB_1493a2d7a;
  }
  pFVar17 = (FWeakObjectPtr *)&pFVar17[1].ObjectSerialNumber;
  goto joined_r0x0001493a2d5a;
LAB_1493a2d7a:
  aVar18 = (atomic<unsigned___int64>)0x0;
LAB_1493a2d7c:
  pUVar15 = pUVar5;
  if (pUVar5 == (UObject *)0x0) goto LAB_1493a2dd7;
  goto LAB_1493a2d81;
joined_r0x0001493a2d1d:
  if (pFVar17 == pFVar2) goto LAB_1493a2d3a;
  pUVar14 = FWeakObjectPtr::Get(pFVar17);
  if (pUVar14 == pUVar15) goto LAB_1493a2c23;
  pFVar17 = (FWeakObjectPtr *)&pFVar17[1].ObjectSerialNumber;
  goto joined_r0x0001493a2d1d;
LAB_1493a2c23:
  if (pFVar17 == (FWeakObjectPtr *)0x0) {
LAB_1493a2d3a:
    aVar18 = (atomic<unsigned___int64>)0x0;
  }
  else {
    uVar20 = pFVar17[1].ObjectIndex;
    uVar10 = 0;
    if ((int)uVar20 < (param_1->DataInterfaceInstanceData).ArrayNum) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    aVar18 = (atomic<unsigned___int64>)
             ((longlong)(int)uVar20 +
             (longlong)(param_1->DataInterfaceInstanceData).AllocatorInstance.Data);
  }
LAB_1493a2d81:
  iVar11 = (**(code **)(*(longlong *)pUVar5 + 0x328))(pUVar5);
  if (((iVar11 != 0) && (aVar18 == (atomic<unsigned___int64>)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalInterface->PerInstanceDataSize() == 0 || InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                         ,0x2b3,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  (**(code **)(*(longlong *)pUVar15 + 0x330))(pUVar15,lVar12,aVar18,this_01);
  ((FMRSWRecursiveAccessDetector *)&this_01[0x18].field_0x0)->State = aVar18;
LAB_1493a2dd7:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_88);
  if (((*(int *)&((FMRSWRecursiveAccessDetector *)&this_01[0x10].field_0x0)->State == 0) ||
      (aVar18 = ((FMRSWRecursiveAccessDetector *)&this_01[8].field_0x0)->State,
      aVar18 == (atomic<unsigned___int64>)0x0)) ||
     (cVar9 = (**(code **)(*(longlong *)aVar18 + 0x38))(), cVar9 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
LAB_1493a2e23:
  local_res20 = local_res20 + 1;
  local_90 = local_90 + 1;
  if (*(int *)(lVar3 + 0x238) <= (int)local_res20) {
    return true;
  }
  goto LAB_1493a28f0;
}

// Init @ 1493a8880

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
FNiagaraSystemScriptExecutionContext::Init
          (FNiagaraSystemScriptExecutionContext *this,FNiagaraSystemInstance *param_1,
          UNiagaraScript *param_2,ENiagaraSimTarget param_3)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 != (FNiagaraSystemInstance *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentSystemInstance == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                       ,0x1e7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffd;
  bVar3 = FNiagaraScriptExecutionContextBase::Init
                    ((FNiagaraScriptExecutionContextBase *)this,param_1,param_2,param_3);
  return bVar3;
}

// Tick @ 1493b8e00

/* WARNING: Type propagation algorithm not settling */
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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FNiagaraSystemScriptExecutionContext::Tick
          (FNiagaraSystemScriptExecutionContext *this,FNiagaraSystemInstance *param_1,
          ENiagaraSimTarget param_2)

{
  uint *puVar1;
  int *piVar2;
  TArray<FNiagaraSystemScriptExecutionContext::FExternalFuncInfo,TSizedDefaultAllocator<32>_>
  *pTVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  FNiagaraScriptDataInterfaceCompileInfo *pFVar11;
  FNiagaraScriptExecutionParameterStore *pFVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_NiagaraScriptExecContextTick> FVar20;
  undefined8 *puVar21;
  ulong64 uVar22;
  FNiagaraLWCConverter *pFVar23;
  longlong lVar24;
  FName FVar25;
  uint uVar26;
  ulonglong uVar27;
  FVMExternalFunctionBindingInfo *pFVar28;
  uint uVar29;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar30;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *this_00;
  longlong lVar31;
  uint local_1e8;
  int local_1d8;
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  undefined8 local_1b0;
  longlong local_1a8;
  FColor_u_0 local_1a0;
  uint local_19c;
  longlong local_198;
  FName local_190;
  FNiagaraScriptDataInterfaceCompileInfo *local_188;
  FNiagaraScriptExecutionParameterStore *local_180;
  FVMExternalFunctionBindingInfo *local_178;
  longlong local_170;
  uint *local_168;
  FName local_160;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> local_158;
  FName local_140;
  longlong local_130;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> **local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FName local_d8;
  FString local_d0;
  FReadAccessScope local_c0;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  TVector<double>_u_0 local_78;
  FNiagaraLWCConverter local_58;
  
  if (((uint)this->_padding_ >> 1 & 1) == 0) goto LAB_1493b9b6f;
  FVar20 = StatPtr_STAT_NiagaraScriptExecContextTick;
  if (StatPtr_STAT_NiagaraScriptExecContextTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraScriptExecContextTick>)0x0) {
    pFVar19 = ::FName::FName(&local_d8,"STAT_NiagaraScriptExecContextTick");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_NiagaraScriptExecContextTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraScriptExecContextTick,
                        *pFVar19,L"Context Ticking","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar20;
  bVar10 = false;
  bVar9 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_1493b8f7f:
    bVar10 = bVar14;
    bVar9 = bVar13;
    bVar13 = false;
    local_160 = local_140;
    FVar25 = local_140;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a0._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_190.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                   ,500);
        bVar10 = true;
        bVar9 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493b8f7f;
    local_160 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar13 = true;
  }
  lVar4 = this->_padding_;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x2d8) != '\0')) {
    uVar29 = *(uint *)(lVar4 + 0x238);
    local_1b0 = 0;
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
    }
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    local_168 = puVar1;
    if (*puVar1 != uVar29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar29,(ForAnyElementType *)&this->_padding_,0,(int *)puVar1);
    }
    if (0 < (int)uVar29) {
      uVar27 = (ulonglong)uVar29;
      do {
        if ((((undefined8 *)this->_padding_ <= &local_1b0) &&
            (&local_1b0 < (undefined8 *)this->_padding_ + (int)*puVar1)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        uVar17 = (uint)this->_padding_;
        if (uVar17 == *puVar1) {
          uVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&this->_padding_,(int *)puVar1);
        }
        *(uint *)&this->_padding_ = uVar17 + 1;
        *(undefined8 *)(this->_padding_ + (longlong)(int)uVar17 * 8) = local_1b0;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    pTVar3 = &this->ExtFunctionInfo;
    local_158._16_8_ = 0;
    local_158._0_8_ = 0;
    local_158._8_8_ = 0;
    DestructItems<FNiagaraSystemScriptExecutionContext::FExternalFuncInfo,int>
              ((FExternalFuncInfo *)(pTVar3->AllocatorInstance).Data,
               (this->ExtFunctionInfo).ArrayNum);
    piVar2 = &(this->ExtFunctionInfo).ArrayMax;
    (this->ExtFunctionInfo).ArrayNum = 0;
    if (*piVar2 != uVar29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar29,&pTVar3->AllocatorInstance,0,piVar2);
    }
    if (0 < (int)uVar29) {
      uVar27 = (ulonglong)uVar29;
      do {
        pTVar30 = (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                   *)(pTVar3->AllocatorInstance).Data;
        if (((pTVar30 <= &local_158) && (&local_158 < pTVar30 + *piVar2)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        iVar18 = (this->ExtFunctionInfo).ArrayNum;
        if (iVar18 == *piVar2) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar3->AllocatorInstance,piVar2);
        }
        (this->ExtFunctionInfo).ArrayNum = iVar18 + 1;
        pTVar30 = (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                   *)((pTVar3->AllocatorInstance).Data + (longlong)iVar18 * 0x18);
        *(undefined8 *)pTVar30 = 0;
        *(undefined8 *)&pTVar30->field_0x8 = 0;
        *(undefined4 *)&pTVar30->field_0x10 = 0;
        TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(pTVar30,&local_158);
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_158);
    local_180 = UNiagaraScript::GetExecutionReadyParameterStore
                          ((UNiagaraScript *)this->_padding_,CPUSim);
    if ((local_180 == (FNiagaraScriptExecutionParameterStore *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptParameterStore != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                            ,0x200,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
    local_1d8 = 0;
    local_1e8 = 0;
    local_130 = (longlong)(int)uVar29;
    if (0 < (int)uVar29) {
      local_1a8 = 0;
      local_170 = 0;
      local_198 = 0;
      do {
        lVar24 = local_170;
        lVar31 = local_198;
        uVar17 = ~local_1e8 >> 0x1f;
        uVar29 = 0;
        if ((int)local_1e8 < *(int *)(lVar4 + 0x238)) {
          uVar29 = uVar17;
        }
        local_19c = uVar17;
        if ((uVar29 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        pFVar28 = (FVMExternalFunctionBindingInfo *)(lVar24 + *(longlong *)(lVar4 + 0x230));
        uVar29 = 0;
        if ((int)local_1e8 < (this->ExtFunctionInfo).ArrayNum) {
          uVar29 = uVar17;
        }
        local_178 = pFVar28;
        if ((uVar29 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        pTVar30 = (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                   *)((this->ExtFunctionInfo).AllocatorInstance.Data + lVar31);
        bVar14 = UNiagaraFunctionLibrary::GetVectorVMFastPathExternalFunction(pFVar28,pTVar30);
        if (bVar14) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar30,&local_c0);
          if (((*(int *)&pTVar30->field_0x10 == 0) ||
              (*(longlong **)&pTVar30->field_0x8 == (longlong *)0x0)) ||
             (cVar16 = (**(code **)(**(longlong **)&pTVar30->field_0x8 + 0x38))(), cVar16 == '\0'))
          {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_c0);
            goto LAB_1493b9342;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_c0);
          local_198 = lVar31;
        }
        else {
LAB_1493b9342:
          TArray<void_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
                    ((TArray<void_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                     *(int *)(lVar4 + 0x1d4),No);
          uVar29 = 0;
          lVar31 = 0;
          if (0 < *(int *)(lVar4 + 0x228)) {
            lVar24 = 0;
            do {
              uVar26 = ~uVar29 >> 0x1f;
              uVar17 = 0;
              if ((int)uVar29 < *(int *)(lVar4 + 0x228)) {
                uVar17 = uVar26;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                uVar15 = (*pcVar8)();
                return (bool)uVar15;
              }
              pFVar12 = local_180;
              local_188 = (FNiagaraScriptDataInterfaceCompileInfo *)
                          (*(longlong *)(lVar4 + 0x220) + lVar24);
              uVar17 = 0;
              if ((int)uVar29 < (int)local_180->_padding_) {
                uVar17 = uVar26;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                uVar15 = (*pcVar8)();
                return (bool)uVar15;
              }
              lVar5 = *(longlong *)(pFVar12->_padding_ + lVar31 * 8);
              uVar17 = 0;
              if ((int)uVar29 < (int)this->_padding_) {
                uVar17 = uVar26;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                uVar15 = (*pcVar8)();
                return (bool)uVar15;
              }
              pFVar11 = local_188;
              plVar6 = *(longlong **)(this->_padding_ + lVar31 * 8);
              if (local_188->Name == local_178->OwnerName) {
                bVar14 = FNiagaraScriptDataInterfaceCompileInfo::NeedsPerInstanceBinding(local_188);
                pFVar12 = local_180;
                if (bVar14) {
                  iStack_11c = local_1d8;
                  local_1c8 = (undefined1  [8])0x0;
                  local_128 = &this->SystemInstances;
                  local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                  uStack_120 = CONCAT31(uStack_120._1_3_,(char)this->_padding_);
                  local_118 = pFVar11->UserPtrIdx;
                  local_1c0.DelegateSize = 0;
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                             (FWriteAccessScope *)&local_f8);
                  local_e0 = &local_1c0;
                  puVar21 = UE::Core::Private::DelegateAllocate(0x30,&local_1c0);
                  if (puVar21 != (undefined8 *)0x0) {
                    *puVar21 = &
                               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                    ;
                    uVar22 = FDelegateHandle::GenerateNewID();
                    puVar21[2] = uVar22;
                    puVar21[3] = local_128;
                    puVar21[4] = CONCAT44(iStack_11c,uStack_120);
                    *puVar21 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`FNiagaraSystemScriptExecutionContext::Tick'::`28'::<lambda_1>_>
                                ::_vftable_;
                    puVar21[5] = CONCAT44(uStack_114,local_118);
                  }
                  if (local_f8.bDestroyed == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
                  }
                  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar30,
                             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c8);
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                             (FWriteAccessScope *)&local_110);
                  if ((local_1c0.DelegateSize != 0) &&
                     (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                    (*(code *)**(undefined8 **)local_1c0.DelegateAllocator)();
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              ((ForAnyElementType *)&local_1c0,0,0,0x10);
                    local_1c0.DelegateSize = 0;
                  }
                  if (local_110.bDestroyed == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
                  }
                  if (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                    FMemory::Free((void *)local_1c0.DelegateAllocator);
                  }
                  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                            ((FMRSWRecursiveAccessDetector *)local_1c8);
                  local_1d8 = local_1d8 + 1;
                  break;
                }
                if (((-1 < (int)local_1e8) && ((int)local_1e8 < *(int *)(lVar4 + 0x248))) &&
                   (lVar5 != 0)) {
                  uVar17 = 0;
                  if ((int)uVar29 < (int)local_180->_padding_) {
                    uVar17 = uVar26;
                  }
                  if ((uVar17 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    uVar15 = (*pcVar8)();
                    return (bool)uVar15;
                  }
                  if (plVar6 == *(longlong **)(pFVar12->_padding_ + lVar31 * 8)) {
                    uVar29 = 0;
                    if ((int)local_1e8 < *(int *)(lVar4 + 0x248)) {
                      uVar29 = local_19c;
                    }
                    if ((uVar29 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      uVar15 = (*pcVar8)();
                      return (bool)uVar15;
                    }
                    this_00 = (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                               *)(local_198 + *(longlong *)(lVar4 + 0x240));
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                               &local_a8);
                    if (((*(int *)&this_00->field_0x10 != 0) &&
                        (*(longlong **)&this_00->field_0x8 != (longlong *)0x0)) &&
                       (cVar16 = (**(code **)(**(longlong **)&this_00->field_0x8 + 0x38))(),
                       cVar16 != '\0')) {
                      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                      ~FReadAccessScope(&local_a8);
                      TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                      ::CopyFrom<FDefaultDelegateUserPolicy>(pTVar30,this_00);
                      if ((pFVar11->UserPtrIdx != -1) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("ScriptDIInfo.UserPtrIdx == INDEX_NONE",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                                              ,0x231,L""), bVar14)) {
                        pcVar8 = (code *)swi(3);
                        uVar15 = (*pcVar8)();
                        return (bool)uVar15;
                      }
                      break;
                    }
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                    ~FReadAccessScope(&local_a8);
                  }
                }
                if ((plVar6 == (longlong *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ExternalInterface",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                                        ,0x237,L""), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  uVar15 = (*pcVar8)();
                  return (bool)uVar15;
                }
                (**(code **)(*plVar6 + 0x330))(plVar6,local_178,0,pTVar30);
                break;
              }
              uVar29 = uVar29 + 1;
              lVar31 = lVar31 + 1;
              lVar24 = lVar24 + 0x50;
            } while ((int)uVar29 < *(int *)(lVar4 + 0x228));
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar30,&local_90);
          if (((*(int *)&pTVar30->field_0x10 == 0) ||
              (*(longlong **)&pTVar30->field_0x8 == (longlong *)0x0)) ||
             (cVar16 = (**(code **)(**(longlong **)&pTVar30->field_0x8 + 0x38))(), cVar16 == '\0'))
          {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_90);
            if (2 < (byte)LogNiagara._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            }
            iVar18 = *(int *)((longlong)&this->_padding_ + 4);
            *(undefined4 *)&this->_padding_ = 0;
            goto joined_r0x0001493b9885;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_90);
        }
        local_1e8 = local_1e8 + 1;
        local_1a8 = local_1a8 + 1;
        local_170 = local_170 + 0x58;
        local_198 = local_198 + 0x18;
      } while (local_1a8 < local_130);
    }
    iVar18 = (int)this->_padding_;
    if (iVar18 != (this->ExtFunctionInfo).ArrayNum) {
      if (2 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      *(undefined4 *)&this->_padding_ = 0;
      iVar18 = *(int *)((longlong)&this->_padding_ + 4);
joined_r0x0001493b9885:
      if (iVar18 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&this->_padding_,0,(int *)local_168);
      }
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar13) {
        FThreadStats::AddMessage(FVar25,CycleScopeEnd);
      }
      return false;
    }
    uVar29 = 0;
    if (0 < iVar18) {
      lVar31 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar29 < (this->ExtFunctionInfo).ArrayNum) {
          uVar17 = ~uVar29 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        pFVar7 = (this->ExtFunctionInfo).AllocatorInstance.Data;
        lVar24 = (longlong)(int)uVar29;
        uVar17 = 0;
        if ((int)uVar29 < (int)this->_padding_) {
          uVar17 = ~uVar29 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        uVar29 = uVar29 + 1;
        *(FScriptContainerElement **)(lVar31 + this->_padding_) = pFVar7 + lVar24 * 0x18;
        lVar31 = lVar31 + 8;
        iVar18 = (int)this->_padding_;
      } while ((int)uVar29 < iVar18);
    }
    uVar29 = 0;
    if (0 < iVar18) {
      lVar31 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar29 < (int)this->_padding_) {
          uVar17 = ~uVar29 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        if ((*(longlong *)(lVar31 + this->_padding_) == 0) && (2 < (byte)LogNiagara._0_1_)) {
          uVar17 = 0;
          if ((int)uVar29 < *(int *)(lVar4 + 0x238)) {
            uVar17 = ~uVar29 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            uVar15 = (*pcVar8)();
            return (bool)uVar15;
          }
          ::FName::ToString((FName *)((longlong)(int)uVar29 * 0x58 + *(longlong *)(lVar4 + 0x230)),
                            &local_d0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
        uVar29 = uVar29 + 1;
        lVar31 = lVar31 + 8;
        FVar25 = local_160;
      } while ((int)uVar29 < (int)this->_padding_);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
LAB_1493b9b6f:
  if ((param_1 != (FNiagaraSystemInstance *)0x0) && (((uint)this->_padding_ >> 3 & 1) != 0)) {
    pFVar23 = FNiagaraSystemInstance::GetLWCConverter(param_1,&local_58,false);
    local_78._s_0.X = (pFVar23->SystemWorldPos).field0_0x0._s_0.X;
    local_78._s_0.Y = (pFVar23->SystemWorldPos).field0_0x0._s_0.Y;
    local_78._s_0.Z = (pFVar23->SystemWorldPos).field0_0x0._s_0.Z;
    FNiagaraParameterStore::ResolvePositions
              ((FNiagaraParameterStore *)&this->_padding_,(FNiagaraLWCConverter *)&local_78._s_0);
  }
  FNiagaraParameterStore::Tick((FNiagaraParameterStore *)&this->_padding_);
  return true;
}

// BindSystemInstances @ 1493d7820

void __thiscall
FNiagaraSystemScriptExecutionContext::BindSystemInstances
          (FNiagaraSystemScriptExecutionContext *this,
          TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *param_1)

{
  this->SystemInstances = param_1;
  return;
}

