// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// operator() @ 148f83b50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FNiagaraDataInterfaceUtilities::ForEachGpuFunctionImpl'::__l2::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FNiagaraTypeDefinition *pFVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  int local_res20;
  longlong local_60;
  UNiagaraScript *local_58;
  longlong local_50;
  
  if (**(char **)this != '\0') {
    pFVar15 = (param_1->ResolvedDataInterfaces).AllocatorInstance.Data;
    iVar1 = (param_1->ResolvedDataInterfaces).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar12 = (param_1->CachedScriptVM).ShaderScriptParametersMetadata.DataInterfaceParamInfo.
             ArrayNum;
    pFVar16 = (param_1->CachedScriptVM).ShaderScriptParametersMetadata.DataInterfaceParamInfo.
              AllocatorInstance.Data;
    local_res20 = iVar12;
    if ((iVar12 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = iVar12;
    if (iVar1 < iVar12) {
      iVar2 = iVar1;
    }
    uVar14 = 0;
    if (0 < iVar2) {
      pFVar15 = pFVar15 + 0x20;
      local_50 = (longlong)iVar2;
      local_60 = 0;
      pFVar16 = pFVar16 + 0x30;
      do {
        uVar7 = 0;
        if ((int)uVar14 < iVar1) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(longlong *)(pFVar15 + 0x20) != 0) &&
           ((*(longlong *)(pFVar15 + 0x20) == **(longlong **)((longlong)this + 8) ||
            ((((**(longlong **)((longlong)this + 0x10) != 0 &&
               (pFVar8 = FNiagaraTypeDefinitionHandle::Resolve
                                   ((FNiagaraTypeDefinitionHandle *)
                                    (*(longlong **)((longlong)this + 0x10) + 1)),
               (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) &&
              (*(longlong *)pFVar15 == **(longlong **)((longlong)this + 0x10))) &&
             (*(int *)(pFVar15 + 8) == (int)(*(longlong **)((longlong)this + 0x10))[1])))))) {
          uVar7 = 0;
          if ((int)uVar14 < iVar12) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = *(int *)pFVar16;
          lVar11 = *(longlong *)(pFVar16 + -8);
          lVar13 = (longlong)iVar2 * 0x50 + lVar11;
          while( true ) {
            if (*(int *)pFVar16 != iVar2) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FNiagaraDataInterfaceGeneratedFunction_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            iVar12 = local_res20;
            if (lVar11 == lVar13) break;
            puVar3 = *(undefined8 **)((longlong)this + 0x18);
            local_58 = param_1;
            UE::Core::Private::Function::CheckCallable((void *)*puVar3);
            pcVar4 = (code *)*puVar3;
            plVar10 = (longlong *)puVar3[5];
            if ((longlong *)puVar3[5] == (longlong *)0x0) {
              plVar10 = puVar3 + 2;
            }
            uVar9 = (**(code **)(*plVar10 + 8))();
            cVar6 = (*pcVar4)(uVar9,&local_58,lVar11);
            if (cVar6 == '\0') {
              **(undefined1 **)this = 0;
              return;
            }
            lVar11 = lVar11 + 0x50;
          }
        }
        local_60 = local_60 + 1;
        uVar14 = uVar14 + 1;
        pFVar15 = pFVar15 + 0x50;
        pFVar16 = pFVar16 + 0x38;
      } while (local_60 < local_50);
    }
  }
  return;
}

// operator() @ 148f83e10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FNiagaraDataInterfaceUtilities::ForEachVMFunctionImpl'::__l2::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  FNiagaraTypeDefinition *pFVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  UNiagaraScript *local_48;
  FScriptContainerElement *local_40;
  
  if ((**(char **)this != '\0') &&
     (bVar7 = FNiagaraVMExecutableData::IsValid(&param_1->CachedScriptVM), bVar7)) {
    iVar2 = (param_1->ResolvedDataInterfaces).ArrayNum;
    pFVar4 = (param_1->ResolvedDataInterfaces).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar3 = (param_1->CachedScriptVM).CalledVMExternalFunctions.ArrayNum;
    uVar11 = (ulonglong)(int)uVar3;
    pFVar15 = (param_1->CachedScriptVM).CalledVMExternalFunctions.AllocatorInstance.Data;
    pFVar14 = pFVar15 + uVar11 * 0x58;
    local_40 = pFVar14;
    while( true ) {
      if ((param_1->CachedScriptVM).CalledVMExternalFunctions.ArrayNum != (int)uVar11) {
        `TCheckedPointerIterator<FVMExternalFunctionBindingInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar14) break;
      if (pFVar4 != pFVar4 + (longlong)iVar2 * 0x50) {
        pFVar13 = pFVar4 + 0x40;
        do {
          if (*(longlong *)(pFVar13 + -0x38) == *(longlong *)(pFVar15 + 8)) {
            if (*(longlong *)pFVar13 == 0) {
              bVar7 = **(longlong **)((longlong)this + 8) == 0;
            }
            else {
              bVar7 = *(longlong *)pFVar13 == **(longlong **)((longlong)this + 8);
            }
            if ((bVar7) ||
               ((((**(longlong **)((longlong)this + 0x10) != 0 &&
                  (pFVar9 = FNiagaraTypeDefinitionHandle::Resolve
                                      ((FNiagaraTypeDefinitionHandle *)
                                       (*(longlong **)((longlong)this + 0x10) + 1)),
                  (pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) &&
                 (*(longlong *)(pFVar13 + -0x20) == **(longlong **)((longlong)this + 0x10))) &&
                (*(int *)(pFVar13 + -0x18) == (int)(*(longlong **)((longlong)this + 0x10))[1])))) {
              puVar5 = *(undefined8 **)((longlong)this + 0x18);
              local_48 = param_1;
              UE::Core::Private::Function::CheckCallable((void *)*puVar5);
              pcVar6 = (code *)*puVar5;
              plVar12 = (longlong *)puVar5[5];
              if ((longlong *)puVar5[5] == (longlong *)0x0) {
                plVar12 = puVar5 + 2;
              }
              uVar10 = (**(code **)(*plVar12 + 8))();
              cVar8 = (*pcVar6)(uVar10,&local_48,pFVar15);
              if (cVar8 == '\0') {
                **(undefined1 **)this = 0;
                return;
              }
            }
          }
          pFVar1 = pFVar13 + 0x10;
          pFVar13 = pFVar13 + 0x50;
          pFVar14 = local_40;
        } while (pFVar1 != pFVar4 + (longlong)iVar2 * 0x50);
      }
      uVar11 = (ulonglong)uVar3;
      pFVar15 = pFVar15 + 0x58;
    }
  }
  return;
}

// ForEachDataInterface @ 148faea50

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachDataInterface
          (FDataInterfaceUsageContext *param_1,FNiagaraParameterStore *param_2,
          TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
          *param_3)

{
  uint uVar1;
  UNiagaraDataInterface *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNiagaraTypeDefinition *this;
  undefined8 uVar6;
  longlong *plVar7;
  FName *pFVar8;
  FName *local_38;
  int local_30;
  
  (**(code **)param_2->_padding_)(param_2,&local_38);
  pFVar8 = local_38;
  do {
    if (pFVar8 == local_38 + (longlong)local_30 * 5) {
      if (*(longlong *)param_3 != 0) {
        plVar7 = (longlong *)&param_3->field_0x10;
        if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
          plVar7 = *(longlong **)&param_3->field_0x28;
        }
                    /* WARNING: Could not recover jumptable at 0x000148faeb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))();
        return;
      }
      return;
    }
    this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar8 + 1));
    bVar4 = FNiagaraTypeDefinition::IsDataInterface(this);
    if (bVar4) {
      uVar1 = pFVar8[1].Number;
      uVar5 = 0;
      if ((int)uVar1 < (param_2->DataInterfaces).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = *(UNiagaraDataInterface **)
                ((param_2->DataInterfaces).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
      if (pUVar2 != (UNiagaraDataInterface *)0x0) {
        (param_1->Variable).Name = *pFVar8;
        (param_1->Variable).TypeDefHandle.RegisteredTypeIndex = pFVar8[1].ComparisonIndex.Value;
        param_1->DataInterface = pUVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar3 = *(code **)param_3;
        plVar7 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar7 = (longlong *)&param_3->field_0x10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar3)(uVar6,param_1);
      }
    }
    pFVar8 = pFVar8 + 5;
  } while( true );
}

// ForEachDataInterface @ 148faebb0

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachDataInterface
          (FNiagaraParameterStore *param_1,
          TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNiagaraTypeDefinition *this;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong local_48 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 *local_28;
  int local_20;
  
  (**(code **)param_1->_padding_)(param_1,&local_28);
  puVar8 = local_28;
  do {
    if (puVar8 == local_28 + (longlong)local_20 * 5) {
      if (*(longlong *)param_2 != 0) {
        plVar7 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar7 = *(longlong **)&param_2->field_0x28;
        }
                    /* WARNING: Could not recover jumptable at 0x000148faecee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))();
        return;
      }
      return;
    }
    this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(puVar8 + 1));
    bVar4 = FNiagaraTypeDefinition::IsDataInterface(this);
    if (bVar4) {
      uVar1 = *(uint *)((longlong)puVar8 + 0xc);
      uVar5 = 0;
      if ((int)uVar1 < (param_1->DataInterfaces).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)
               ((param_1->DataInterfaces).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
      if (lVar2 != 0) {
        local_38 = *puVar8;
        local_30 = *(undefined4 *)(puVar8 + 1);
        local_48[0] = lVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar3 = *(code **)param_2;
        plVar7 = *(longlong **)&param_2->field_0x28;
        if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
          plVar7 = (longlong *)&param_2->field_0x10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar3)(uVar6,&local_38,local_48);
      }
    }
    puVar8 = puVar8 + 5;
  } while( true );
}

// ForEachDataInterface @ 148faed00

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

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachDataInterface
          (FNiagaraSystemInstance *param_1,
          TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
          *param_2)

{
  int iVar1;
  FNiagaraSystemSimulation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FNiagaraEmitterInstanceImpl *this;
  undefined8 *puVar7;
  longlong *plVar8;
  FNiagaraScriptExecutionContext *pFVar9;
  FScriptContainerElement *pFVar10;
  FNiagaraScriptExecutionContext *pFVar11;
  FScriptContainerElement *pFVar12;
  FDataInterfaceUsageContext local_1b8;
  TArrayView<FNiagaraScriptExecutionContext,int> local_198;
  TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
  local_188;
  TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
  local_158;
  TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
  local_128;
  TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
  local_f8;
  TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
  local_c8;
  TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
  local_98;
  TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
  local_68;
  
  if (param_1 == (FNiagaraSystemInstance *)0x0) {
    if (*(longlong *)param_2 != 0) {
      plVar8 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar8 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar8 + 0x10))();
      return;
    }
  }
  else {
    pFVar2 = (param_1->SystemSimulation).Object;
    pTVar3 = (param_1->SystemSimulation).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((((pFVar2 == (FNiagaraSystemSimulation *)0x0) || (pFVar2->bCanExecute == 0)) ||
        (pFVar2->World == (UWorld *)0x0)) ||
       ((pFVar2->System == (UNiagaraSystem *)0x0 ||
        (((uint)pFVar2->System->_padding_ >> 0x1e & 1) != 0)))) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    else {
      local_1b8.OwnerObject = (UObject *)0x0;
      local_1b8.Variable.Name.ComparisonIndex.Value = 0;
      local_1b8.Variable.Name.Number = 0;
      local_1b8.Variable.TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&local_1b8.Variable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
      local_1b8.DataInterface = (UNiagaraDataInterface *)0x0;
      local_1b8.OwnerObject = (UObject *)pFVar2->System;
      local_188._0_8_ = *(undefined8 *)param_2;
      local_188._40_8_ = 0;
      if (local_188._0_8_ != 0) {
        puVar7 = (undefined8 *)&param_2->field_0x10;
        if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)&param_2->field_0x28;
        }
        (**(code **)*puVar7)(puVar7,&local_188.field_0x10);
      }
      ForEachDataInterface
                (&local_1b8,(FNiagaraParameterStore *)param_1->OverrideParameters,&local_188);
      local_158._0_8_ = *(undefined8 *)param_2;
      local_158._40_8_ = 0;
      if (local_158._0_8_ != 0) {
        puVar7 = (undefined8 *)&param_2->field_0x10;
        if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)&param_2->field_0x28;
        }
        (**(code **)*puVar7)(puVar7,&local_158.field_0x10);
      }
      ForEachDataInterface
                (&local_1b8,(FNiagaraParameterStore *)&((pFVar2->SpawnExecContext).Ptr)->Parameters,
                 &local_158);
      local_128._0_8_ = *(undefined8 *)param_2;
      local_128._40_8_ = 0;
      if (local_128._0_8_ != 0) {
        puVar7 = (undefined8 *)&param_2->field_0x10;
        if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)&param_2->field_0x28;
        }
        (**(code **)*puVar7)(puVar7,&local_128.field_0x10);
      }
      ForEachDataInterface
                (&local_1b8,(FNiagaraParameterStore *)&((pFVar2->UpdateExecContext).Ptr)->Parameters
                 ,&local_128);
      iVar1 = (param_1->Emitters).ArrayNum;
      pFVar10 = (param_1->Emitters).AllocatorInstance.Data;
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = pFVar10 + (longlong)iVar1 * 0x10;
      for (; pFVar10 != pFVar12; pFVar10 = pFVar10 + 0x10) {
        this = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar10 + 0x68))();
        if ((this != (FNiagaraEmitterInstanceImpl *)0x0) &&
           (*(int *)(*(longlong *)pFVar10 + 0xd4) != 4)) {
          local_1b8.OwnerObject = *(UObject **)(*(longlong *)pFVar10 + 0x28);
          local_f8._0_8_ = *(undefined8 *)param_2;
          local_f8._40_8_ = 0;
          if (local_f8._0_8_ != 0) {
            puVar7 = *(undefined8 **)&param_2->field_0x28;
            if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)&param_2->field_0x10;
            }
            (**(code **)*puVar7)(puVar7,&local_f8.field_0x10);
          }
          ForEachDataInterface
                    (&local_1b8,(FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_,
                     &local_f8);
          local_c8._0_8_ = *(undefined8 *)param_2;
          local_c8._40_8_ = 0;
          if (local_c8._0_8_ != 0) {
            puVar7 = *(undefined8 **)&param_2->field_0x28;
            if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)&param_2->field_0x10;
            }
            (**(code **)*puVar7)(puVar7,&local_c8.field_0x10);
          }
          ForEachDataInterface
                    (&local_1b8,(FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_,
                     &local_c8);
          FNiagaraEmitterInstanceImpl::GetEventExecutionContexts(this,&local_198);
          pFVar11 = local_198.DataPtr + local_198.ArrayNum;
          for (pFVar9 = local_198.DataPtr; pFVar9 != pFVar11; pFVar9 = pFVar9 + 1) {
            local_98._0_8_ = *(undefined8 *)param_2;
            local_98._40_8_ = 0;
            if (local_98._0_8_ != 0) {
              puVar7 = *(undefined8 **)&param_2->field_0x28;
              if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)&param_2->field_0x10;
              }
              (**(code **)*puVar7)(puVar7,&local_98.field_0x10);
            }
            ForEachDataInterface(&local_1b8,(FNiagaraParameterStore *)&pFVar9->_padding_,&local_98);
          }
          lVar4 = *(longlong *)pFVar10;
          if (((*(longlong *)(lVar4 + 0x28) != 0) && (*(char *)(lVar4 + 0xd1) == '\x01')) &&
             (*(longlong *)(lVar4 + 0x18) != 0)) {
            local_68._0_8_ = *(undefined8 *)param_2;
            local_68._40_8_ = 0;
            if (local_68._0_8_ != 0) {
              puVar7 = *(undefined8 **)&param_2->field_0x28;
              if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)&param_2->field_0x10;
              }
              (**(code **)*puVar7)(puVar7,&local_68.field_0x10);
            }
            ForEachDataInterface
                      (&local_1b8,
                       (FNiagaraParameterStore *)(*(longlong *)(*(longlong *)pFVar10 + 0x18) + 0x80)
                       ,&local_68);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    if (*(longlong *)param_2 != 0) {
      plVar8 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar8 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}

// ForEachDataInterface @ 148faf0f0

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

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachDataInterface
          (FNiagaraSystemInstance *param_1,
          TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> *param_2)

{
  int iVar1;
  FNiagaraSystemSimulation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FNiagaraEmitterInstanceImpl *this;
  undefined8 *puVar7;
  longlong *plVar8;
  FNiagaraScriptExecutionContext *pFVar9;
  FScriptContainerElement *pFVar10;
  FNiagaraScriptExecutionContext *pFVar11;
  FScriptContainerElement *pFVar12;
  TArrayView<FNiagaraScriptExecutionContext,int> local_198;
  TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> local_188;
  TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> local_158;
  TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> local_128;
  TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> local_f8;
  TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> local_c8;
  TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> local_98;
  TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> local_68;
  
  if (param_1 == (FNiagaraSystemInstance *)0x0) {
    if (*(longlong *)param_2 != 0) {
      plVar8 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar8 = *(longlong **)&param_2->field_0x28;
      }
                    /* WARNING: Could not recover jumptable at 0x000148faf135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x10))();
      return;
    }
  }
  else {
    pFVar2 = (param_1->SystemSimulation).Object;
    pTVar3 = (param_1->SystemSimulation).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((((pFVar2 == (FNiagaraSystemSimulation *)0x0) || (pFVar2->bCanExecute == 0)) ||
        (pFVar2->World == (UWorld *)0x0)) ||
       ((pFVar2->System == (UNiagaraSystem *)0x0 ||
        (((uint)pFVar2->System->_padding_ >> 0x1e & 1) != 0)))) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    else {
      local_188._0_8_ = *(undefined8 *)param_2;
      local_188._40_8_ = 0;
      if (local_188._0_8_ != 0) {
        puVar7 = (undefined8 *)&param_2->field_0x10;
        if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)&param_2->field_0x28;
        }
        (**(code **)*puVar7)(puVar7,&local_188.field_0x10);
      }
      ForEachDataInterface((FNiagaraParameterStore *)param_1->OverrideParameters,&local_188);
      local_158._0_8_ = *(undefined8 *)param_2;
      local_158._40_8_ = 0;
      if (local_158._0_8_ != 0) {
        puVar7 = (undefined8 *)&param_2->field_0x10;
        if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)&param_2->field_0x28;
        }
        (**(code **)*puVar7)(puVar7,&local_158.field_0x10);
      }
      ForEachDataInterface
                ((FNiagaraParameterStore *)&((pFVar2->SpawnExecContext).Ptr)->Parameters,&local_158)
      ;
      local_128._0_8_ = *(undefined8 *)param_2;
      local_128._40_8_ = 0;
      if (local_128._0_8_ != 0) {
        puVar7 = (undefined8 *)&param_2->field_0x10;
        if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)&param_2->field_0x28;
        }
        (**(code **)*puVar7)(puVar7,&local_128.field_0x10);
      }
      ForEachDataInterface
                ((FNiagaraParameterStore *)&((pFVar2->UpdateExecContext).Ptr)->Parameters,&local_128
                );
      iVar1 = (param_1->Emitters).ArrayNum;
      pFVar10 = (param_1->Emitters).AllocatorInstance.Data;
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = pFVar10 + (longlong)iVar1 * 0x10;
      for (; pFVar10 != pFVar12; pFVar10 = pFVar10 + 0x10) {
        this = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar10 + 0x68))();
        if ((this != (FNiagaraEmitterInstanceImpl *)0x0) &&
           (*(int *)(*(longlong *)pFVar10 + 0xd4) != 4)) {
          local_f8._0_8_ = *(undefined8 *)param_2;
          local_f8._40_8_ = 0;
          if (local_f8._0_8_ != 0) {
            puVar7 = *(undefined8 **)&param_2->field_0x28;
            if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)&param_2->field_0x10;
            }
            (**(code **)*puVar7)(puVar7,&local_f8.field_0x10);
          }
          ForEachDataInterface
                    ((FNiagaraParameterStore *)&(this->SpawnExecContext)._padding_,&local_f8);
          local_c8._0_8_ = *(undefined8 *)param_2;
          local_c8._40_8_ = 0;
          if (local_c8._0_8_ != 0) {
            puVar7 = *(undefined8 **)&param_2->field_0x28;
            if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)&param_2->field_0x10;
            }
            (**(code **)*puVar7)(puVar7,&local_c8.field_0x10);
          }
          ForEachDataInterface
                    ((FNiagaraParameterStore *)&(this->UpdateExecContext)._padding_,&local_c8);
          FNiagaraEmitterInstanceImpl::GetEventExecutionContexts(this,&local_198);
          pFVar11 = local_198.DataPtr + local_198.ArrayNum;
          for (pFVar9 = local_198.DataPtr; pFVar9 != pFVar11; pFVar9 = pFVar9 + 1) {
            local_98._0_8_ = *(undefined8 *)param_2;
            local_98._40_8_ = 0;
            if (local_98._0_8_ != 0) {
              puVar7 = *(undefined8 **)&param_2->field_0x28;
              if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)&param_2->field_0x10;
              }
              (**(code **)*puVar7)(puVar7,&local_98.field_0x10);
            }
            ForEachDataInterface((FNiagaraParameterStore *)&pFVar9->_padding_,&local_98);
          }
          lVar4 = *(longlong *)pFVar10;
          if (((*(longlong *)(lVar4 + 0x28) != 0) && (*(char *)(lVar4 + 0xd1) == '\x01')) &&
             (*(longlong *)(lVar4 + 0x18) != 0)) {
            local_68._0_8_ = *(undefined8 *)param_2;
            local_68._40_8_ = 0;
            if (local_68._0_8_ != 0) {
              puVar7 = *(undefined8 **)&param_2->field_0x28;
              if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)&param_2->field_0x10;
              }
              (**(code **)*puVar7)(puVar7,&local_68.field_0x10);
            }
            ForEachDataInterface
                      ((FNiagaraParameterStore *)(*(longlong *)(*(longlong *)pFVar10 + 0x18) + 0x80)
                       ,&local_68);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    if (*(longlong *)param_2 != 0) {
      plVar8 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar8 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}

// ForEachDataInterface @ 148faf480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachDataInterface
          (UNiagaraSystem *param_1,
          TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
          *param_2)

{
  ENiagaraSimTarget EVar1;
  int iVar2;
  UNiagaraScript *this;
  bool bVar3;
  FNiagaraScriptExecutionParameterStore *pFVar4;
  FVersionedNiagaraEmitterData *pFVar5;
  FVersionedNiagaraEmitter *pFVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  UNiagaraScript **ppUVar10;
  FScriptContainerElement *pFVar11;
  FNiagaraEmitterHandle *pFVar12;
  FNiagaraEmitterHandle *this_00;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_c8 [4];
  uint local_c4;
  TObjectPtr<UNiagaraEmitter>_u_0 local_b8 [2];
  undefined1 local_a8 [24];
  undefined8 local_90;
  TObjectPtr<UNiagaraEmitter>_u_0 local_88;
  undefined8 local_80;
  TObjectPtr<UNiagaraEmitter>_u_0 local_78;
  undefined8 local_70;
  FNiagaraEmitterHandle *local_68;
  FNiagaraEmitterHandle *local_60;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *local_58;
  UNiagaraScript *local_50;
  UNiagaraScript *local_48;
  UNiagaraScript *local_40;
  
  if (param_1 == (UNiagaraSystem *)0x0) {
    if (*(longlong *)param_2 == 0) {
      return;
    }
    plVar7 = *(longlong **)&param_2->field_0x28;
  }
  else {
    local_88.DebugPtr = (UNiagaraEmitter *)0x0;
    local_80 = 0;
    local_78._0_4_ =
         FNiagaraTypeDefinitionHandle::Register
                   ((FNiagaraTypeDefinitionHandle *)&local_78.ObjectPtr,
                    &FNiagaraTypeDefinition::Vec4Def);
    local_70 = 0;
    local_88 = (TObjectPtr<UNiagaraEmitter>_u_0)param_1;
    local_50 = UNiagaraSystem::GetSystemSpawnScript(param_1);
    local_48 = UNiagaraSystem::GetSystemUpdateScript(param_1);
    ppUVar10 = &local_50;
    do {
      if ((*ppUVar10 != (UNiagaraScript *)0x0) &&
         (pFVar4 = UNiagaraScript::GetExecutionReadyParameterStore(*ppUVar10,CPUSim),
         pFVar4 != (FNiagaraScriptExecutionParameterStore *)0x0)) {
        local_b8[0].ObjectPtr.field0_0x0 = *(FObjectPtr *)param_2;
        local_90 = 0;
        if (local_b8[0].DebugPtr != (UNiagaraEmitter *)0x0) {
          puVar8 = *(undefined8 **)&param_2->field_0x28;
          if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)&param_2->field_0x10;
          }
          (**(code **)*puVar8)(puVar8,local_a8);
        }
        ForEachDataInterface
                  ((FDataInterfaceUsageContext *)&local_88.ObjectPtr,
                   (FNiagaraParameterStore *)pFVar4,
                   (TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
                    *)&local_b8[0].ObjectPtr);
      }
      ppUVar10 = ppUVar10 + 1;
    } while (ppUVar10 != &local_40);
    local_58 = UNiagaraSystem::GetEmitterHandles(param_1);
    local_c4 = local_58->ArrayNum;
    uVar13 = (ulonglong)(int)local_c4;
    this_00 = (FNiagaraEmitterHandle *)(local_58->AllocatorInstance).Data;
    pFVar12 = this_00 + uVar13;
    local_60 = pFVar12;
    while( true ) {
      local_68 = this_00;
      if (local_58->ArrayNum != (int)uVar13) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_c8);
      }
      if (this_00 == pFVar12) break;
      pFVar5 = FNiagaraEmitterHandle::GetEmitterData(this_00);
      bVar3 = FNiagaraEmitterHandle::GetIsEnabled(this_00);
      if ((bVar3) && (pFVar5 != (FVersionedNiagaraEmitterData *)0x0)) {
        EVar1 = pFVar5->SimTarget;
        pFVar6 = FNiagaraEmitterHandle::GetInstance
                           (this_00,(FVersionedNiagaraEmitter *)&local_b8[0].ObjectPtr);
        local_88 = (pFVar6->Emitter).field0_0x0;
        pFVar4 = UNiagaraScript::GetExecutionReadyParameterStore
                           ((pFVar5->SpawnScriptProps).Script.field0_0x0.DebugPtr,EVar1);
        if (pFVar4 != (FNiagaraScriptExecutionParameterStore *)0x0) {
          local_b8[0].ObjectPtr.field0_0x0 = *(FObjectPtr *)param_2;
          local_90 = 0;
          if (local_b8[0].DebugPtr != (UNiagaraEmitter *)0x0) {
            puVar8 = *(undefined8 **)&param_2->field_0x28;
            if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
              puVar8 = (undefined8 *)&param_2->field_0x10;
            }
            (**(code **)*puVar8)(puVar8,local_a8);
          }
          ForEachDataInterface
                    ((FDataInterfaceUsageContext *)&local_88.ObjectPtr,
                     (FNiagaraParameterStore *)pFVar4,
                     (TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
                      *)&local_b8[0].ObjectPtr);
        }
        pFVar4 = UNiagaraScript::GetExecutionReadyParameterStore
                           ((pFVar5->UpdateScriptProps).Script.field0_0x0.DebugPtr,EVar1);
        if (pFVar4 != (FNiagaraScriptExecutionParameterStore *)0x0) {
          local_b8[0].ObjectPtr.field0_0x0 = *(FObjectPtr *)param_2;
          local_90 = 0;
          if (local_b8[0].DebugPtr != (UNiagaraEmitter *)0x0) {
            puVar8 = *(undefined8 **)&param_2->field_0x28;
            if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
              puVar8 = (undefined8 *)&param_2->field_0x10;
            }
            (**(code **)*puVar8)(puVar8,local_a8);
          }
          ForEachDataInterface
                    ((FDataInterfaceUsageContext *)&local_88.ObjectPtr,
                     (FNiagaraParameterStore *)pFVar4,
                     (TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
                      *)&local_b8[0].ObjectPtr);
        }
        this = (pFVar5->GPUComputeScript).field0_0x0.DebugPtr;
        if ((this != (UNiagaraScript *)0x0) &&
           (pFVar4 = UNiagaraScript::GetExecutionReadyParameterStore(this,EVar1),
           pFVar4 != (FNiagaraScriptExecutionParameterStore *)0x0)) {
          local_b8[0].ObjectPtr.field0_0x0 = *(FObjectPtr *)param_2;
          local_90 = 0;
          if (local_b8[0].DebugPtr != (UNiagaraEmitter *)0x0) {
            puVar8 = *(undefined8 **)&param_2->field_0x28;
            if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
              puVar8 = (undefined8 *)&param_2->field_0x10;
            }
            (**(code **)*puVar8)(puVar8,local_a8);
          }
          ForEachDataInterface
                    ((FDataInterfaceUsageContext *)&local_88.ObjectPtr,
                     (FNiagaraParameterStore *)pFVar4,
                     (TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
                      *)&local_b8[0].ObjectPtr);
        }
        iVar2 = (pFVar5->EventHandlerScriptProps).ArrayNum;
        pFVar11 = (pFVar5->EventHandlerScriptProps).AllocatorInstance.Data;
        pFVar14 = pFVar11 + (longlong)iVar2 * 0x58;
        while( true ) {
          if ((pFVar5->EventHandlerScriptProps).ArrayNum != iVar2) {
            `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_c8);
          }
          pFVar12 = local_60;
          this_00 = local_68;
          if (pFVar11 == pFVar14) break;
          pFVar4 = UNiagaraScript::GetExecutionReadyParameterStore
                             (*(UNiagaraScript **)pFVar11,EVar1);
          if (pFVar4 != (FNiagaraScriptExecutionParameterStore *)0x0) {
            local_b8[0].ObjectPtr.field0_0x0 = *(FObjectPtr *)param_2;
            local_90 = 0;
            if (local_b8[0].DebugPtr != (UNiagaraEmitter *)0x0) {
              puVar8 = *(undefined8 **)&param_2->field_0x28;
              if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
                puVar8 = (undefined8 *)&param_2->field_0x10;
              }
              (**(code **)*puVar8)(puVar8,local_a8);
            }
            ForEachDataInterface
                      ((FDataInterfaceUsageContext *)&local_88.ObjectPtr,
                       (FNiagaraParameterStore *)pFVar4,
                       (TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
                        *)&local_b8[0].ObjectPtr);
          }
          pFVar11 = pFVar11 + 0x58;
        }
      }
      this_00 = this_00 + 1;
      uVar13 = (ulonglong)local_c4;
    }
    if (*(longlong *)param_2 == 0) {
      return;
    }
    plVar7 = *(longlong **)&param_2->field_0x28;
  }
  plVar9 = (longlong *)&param_2->field_0x10;
  if (plVar7 != (longlong *)0x0) {
    plVar9 = plVar7;
  }
  (**(code **)(*plVar9 + 0x10))();
  return;
}

// ForEachGpuFunction @ 148faf7e0

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachGpuFunction
          (UNiagaraDataInterface *param_1,UNiagaraComponent *param_2,
          TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
          *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
  local_48;
  
  if ((param_2 != (UNiagaraComponent *)0x0) &&
     ((param_2->Asset).field0_0x0.DebugPtr != (UNiagaraSystem *)0x0)) {
    local_48._0_8_ = *(undefined8 *)param_3;
    local_48._40_8_ = 0;
    if (local_48._0_8_ != 0) {
      puVar1 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar1)(puVar1,&local_48.field_0x10);
    }
    ForEachGpuFunctionImpl
              (param_1,(param_2->Asset).field0_0x0.DebugPtr,
               (FNiagaraParameterStore *)&param_2->OverrideParameters,&local_48);
  }
  if (*(longlong *)param_3 != 0) {
    plVar2 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// ForEachGpuFunction @ 148faf880

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

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachGpuFunction
          (UNiagaraDataInterface *param_1,FNiagaraSystemInstance *param_2,
          TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
          *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
  local_48;
  
  if (((param_2 != (FNiagaraSystemInstance *)0x0) &&
      (param_2->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0)) &&
     (param_2->System != (UNiagaraSystem *)0x0)) {
    local_48._0_8_ = *(undefined8 *)param_3;
    local_48._40_8_ = 0;
    if (local_48._0_8_ != 0) {
      puVar1 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar1)(puVar1,&local_48.field_0x10);
    }
    ForEachGpuFunctionImpl
              (param_1,param_2->System,(FNiagaraParameterStore *)param_2->OverrideParameters,
               &local_48);
  }
  if (*(longlong *)param_3 != 0) {
    plVar2 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// ForEachGpuFunction @ 148faf920

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachGpuFunction
          (UNiagaraDataInterface *param_1,UNiagaraSystem *param_2,
          TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
          *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
  local_58;
  
  local_58._0_8_ = *(undefined8 *)param_3;
  local_58._40_8_ = 0;
  if (local_58._0_8_ != 0) {
    puVar1 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,&local_58.field_0x10);
  }
  ForEachGpuFunctionImpl
            (param_1,param_2,(FNiagaraParameterStore *)&param_2->ExposedParameters,&local_58);
  if (*(longlong *)param_3 != 0) {
    plVar2 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return;
}

// ForEachGpuFunctionImpl @ 148faf9b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachGpuFunctionImpl
          (UNiagaraDataInterface *param_1,UNiagaraSystem *param_2,FNiagaraParameterStore *param_3,
          TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
          *param_4)

{
  int iVar1;
  int iVar2;
  UNiagaraDataInterface *pUVar3;
  UNiagaraScript *pUVar4;
  bool bVar5;
  FNiagaraVariableBase *pFVar6;
  FVersionedNiagaraEmitterData *pFVar7;
  longlong *plVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  UNiagaraSystem *pUVar12;
  FNiagaraEmitterHandle *pFVar13;
  FNiagaraEmitterHandle *this;
  UNiagaraDataInterface *local_res8 [4];
  undefined1 local_b8;
  undefined1 local_b7 [7];
  FName local_b0;
  FNiagaraTypeDefinitionHandle local_a8 [2];
  UNiagaraSystem *local_a0;
  FNiagaraEmitterHandle *local_98;
  undefined1 *local_88;
  UNiagaraDataInterface **ppUStack_80;
  FName *local_78;
  TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
  *pTStack_70;
  undefined1 *local_68;
  UNiagaraDataInterface **ppUStack_60;
  FName *local_58;
  TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
  *pTStack_50;
  
  local_res8[0] = param_1;
  local_a0 = param_2;
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_2 == (UNiagaraSystem *)0x0)) {
    if (*(longlong *)param_4 == 0) {
      return;
    }
    plVar8 = *(longlong **)&param_4->field_0x28;
  }
  else {
    local_b0.ComparisonIndex.Value = 0;
    local_b0.Number = 0;
    local_a8[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_a8,&FNiagaraTypeDefinition::Vec4Def);
    pFVar10 = (param_3->DataInterfaces).AllocatorInstance.Data;
    iVar1 = (param_3->DataInterfaces).ArrayNum;
    pFVar11 = pFVar10 + (longlong)iVar1 * 8;
    while( true ) {
      if ((param_3->DataInterfaces).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_b8);
      }
      if (pFVar10 == pFVar11) goto LAB_148fafa63;
      pUVar3 = *(UNiagaraDataInterface **)pFVar10;
      if (((pUVar3 != (UNiagaraDataInterface *)0x0) && (pUVar3 == local_res8[0])) &&
         (pFVar6 = FNiagaraParameterStore::FindVariableFromDataInterface(param_3,pUVar3),
         pFVar6 != (FNiagaraVariableBase *)0x0)) break;
      pFVar10 = pFVar10 + 8;
    }
    local_b0 = pFVar6->Name;
    local_a8[0].RegisteredTypeIndex = (pFVar6->TypeDefHandle).RegisteredTypeIndex;
LAB_148fafa63:
    pUVar12 = local_a0;
    local_88 = local_b7;
    ppUStack_80 = local_res8;
    local_b7[0] = 1;
    local_78 = &local_b0;
    pTStack_70 = param_4;
    `FNiagaraDataInterfaceUtilities::ForEachGpuFunctionImpl'::__l2::<lambda_1>::operator()
              (&local_88,(local_a0->SystemSpawnScript).field0_0x0.DebugPtr);
    `FNiagaraDataInterfaceUtilities::ForEachGpuFunctionImpl'::__l2::<lambda_1>::operator()
              (&local_88,(pUVar12->SystemUpdateScript).field0_0x0.DebugPtr);
    iVar1 = (pUVar12->EmitterHandles).ArrayNum;
    this = (FNiagaraEmitterHandle *)(pUVar12->EmitterHandles).AllocatorInstance.Data;
    pFVar13 = this + iVar1;
    local_98 = pFVar13;
    while( true ) {
      if ((pUVar12->EmitterHandles).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_b8);
      }
      if (this == pFVar13) break;
      bVar5 = FNiagaraEmitterHandle::GetIsEnabled(this);
      if ((bVar5) &&
         (pFVar7 = FNiagaraEmitterHandle::GetEmitterData(this), pFVar13 = local_98,
         pFVar7 != (FVersionedNiagaraEmitterData *)0x0)) {
        local_68 = local_88;
        ppUStack_60 = ppUStack_80;
        local_58 = local_78;
        pTStack_50 = pTStack_70;
        `FNiagaraDataInterfaceUtilities::ForEachGpuFunctionImpl'::__l2::<lambda_1>::operator()
                  (&local_68,(pFVar7->SpawnScriptProps).Script.field0_0x0.DebugPtr);
        `FNiagaraDataInterfaceUtilities::ForEachGpuFunctionImpl'::__l2::<lambda_1>::operator()
                  (&local_68,(pFVar7->UpdateScriptProps).Script.field0_0x0.DebugPtr);
        pUVar4 = (pFVar7->GPUComputeScript).field0_0x0.DebugPtr;
        if (pUVar4 != (UNiagaraScript *)0x0) {
          `FNiagaraDataInterfaceUtilities::ForEachGpuFunctionImpl'::__l2::<lambda_1>::operator()
                    (&local_68,pUVar4);
        }
        iVar2 = (pFVar7->EventHandlerScriptProps).ArrayNum;
        pFVar11 = (pFVar7->EventHandlerScriptProps).AllocatorInstance.Data;
        pFVar10 = pFVar11 + (longlong)iVar2 * 0x58;
        while( true ) {
          if ((pFVar7->EventHandlerScriptProps).ArrayNum != iVar2) {
            `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_b8);
          }
          pUVar12 = local_a0;
          pFVar13 = local_98;
          if (pFVar11 == pFVar10) break;
          `FNiagaraDataInterfaceUtilities::ForEachGpuFunctionImpl'::__l2::<lambda_1>::operator()
                    (&local_68,*(UNiagaraScript **)pFVar11);
          pFVar11 = pFVar11 + 0x58;
        }
      }
      this = this + 1;
    }
    if (*(longlong *)param_4 == 0) {
      return;
    }
    plVar8 = *(longlong **)&param_4->field_0x28;
  }
  plVar9 = (longlong *)&param_4->field_0x10;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = plVar8;
  }
  (**(code **)(*plVar9 + 0x10))();
  return;
}

// ForEachVMFunction @ 148fafc00

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachVMFunction
          (UNiagaraDataInterface *param_1,UNiagaraComponent *param_2,
          TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)>
          *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)> local_48;
  
  if ((param_2 != (UNiagaraComponent *)0x0) &&
     ((param_2->Asset).field0_0x0.DebugPtr != (UNiagaraSystem *)0x0)) {
    local_48._0_8_ = *(undefined8 *)param_3;
    local_48._40_8_ = 0;
    if (local_48._0_8_ != 0) {
      puVar1 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar1)(puVar1,&local_48.field_0x10);
    }
    ForEachVMFunctionImpl
              (param_1,(param_2->Asset).field0_0x0.DebugPtr,
               (FNiagaraParameterStore *)&param_2->OverrideParameters,&local_48);
  }
  if (*(longlong *)param_3 != 0) {
    plVar2 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// ForEachVMFunction @ 148fafca0

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

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachVMFunction
          (UNiagaraDataInterface *param_1,FNiagaraSystemInstance *param_2,
          TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)>
          *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)> local_48;
  
  if (((param_2 != (FNiagaraSystemInstance *)0x0) &&
      (param_2->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0)) &&
     (param_2->System != (UNiagaraSystem *)0x0)) {
    local_48._0_8_ = *(undefined8 *)param_3;
    local_48._40_8_ = 0;
    if (local_48._0_8_ != 0) {
      puVar1 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar1)(puVar1,&local_48.field_0x10);
    }
    ForEachVMFunctionImpl
              (param_1,param_2->System,(FNiagaraParameterStore *)param_2->OverrideParameters,
               &local_48);
  }
  if (*(longlong *)param_3 != 0) {
    plVar2 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// ForEachVMFunction @ 148fafd40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachVMFunction
          (UNiagaraDataInterface *param_1,UNiagaraSystem *param_2,
          TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)>
          *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)> local_58;
  
  local_58._0_8_ = *(undefined8 *)param_3;
  local_58._40_8_ = 0;
  if (local_58._0_8_ != 0) {
    puVar1 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,&local_58.field_0x10);
  }
  ForEachVMFunctionImpl
            (param_1,param_2,(FNiagaraParameterStore *)&param_2->ExposedParameters,&local_58);
  if (*(longlong *)param_3 != 0) {
    plVar2 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return;
}

// ForEachVMFunctionImpl @ 148fafdd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FNiagaraDataInterfaceUtilities::ForEachVMFunctionImpl
          (UNiagaraDataInterface *param_1,UNiagaraSystem *param_2,FNiagaraParameterStore *param_3,
          TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UNiagaraDataInterface *pUVar3;
  FNiagaraVariableBase *pFVar4;
  longlong *plVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  UNiagaraDataInterface *local_res8 [4];
  bool local_78;
  undefined1 local_77 [7];
  FNiagaraVariableBase local_70 [2];
  <lambda_1> local_58;
  
  local_res8[0] = param_1;
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_2 == (UNiagaraSystem *)0x0)) {
    if (*(longlong *)param_4 == 0) {
      return;
    }
    plVar5 = *(longlong **)&param_4->field_0x28;
  }
  else {
    local_70[0].Name.ComparisonIndex.Value = 0;
    local_70[0].Name.Number = 0;
    local_70[0].TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_70[0].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
    pFVar7 = (param_3->DataInterfaces).AllocatorInstance.Data;
    iVar2 = (param_3->DataInterfaces).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_3->DataInterfaces).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_77);
      }
      if (pFVar7 == pFVar1) goto LAB_148fafe7c;
      pUVar3 = *(UNiagaraDataInterface **)pFVar7;
      if (((pUVar3 != (UNiagaraDataInterface *)0x0) && (pUVar3 == local_res8[0])) &&
         (pFVar4 = FNiagaraParameterStore::FindVariableFromDataInterface(param_3,pUVar3),
         pFVar4 != (FNiagaraVariableBase *)0x0)) break;
      pFVar7 = pFVar7 + 8;
    }
    local_70[0].Name = pFVar4->Name;
    local_70[0].TypeDefHandle.RegisteredTypeIndex = (pFVar4->TypeDefHandle).RegisteredTypeIndex;
LAB_148fafe7c:
    local_58.bContinueSearching = &local_78;
    local_78 = true;
    local_58.RuntimeResolvedDataInterface = local_res8;
    local_58.DataInterfaceUserVariable = local_70;
    local_58.Action = param_4;
    UNiagaraSystem::
    ForEachScript<_FNiagaraDataInterfaceUtilities::ForEachVMFunctionImpl_::__l2::<lambda_1>_>
              (param_2,&local_58);
    if (*(longlong *)param_4 == 0) {
      return;
    }
    plVar5 = *(longlong **)&param_4->field_0x28;
  }
  plVar6 = (longlong *)&param_4->field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar6 = plVar5;
  }
  (**(code **)(*plVar6 + 0x10))();
  return;
}

