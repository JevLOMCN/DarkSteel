// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 149262940

UScriptStruct * __cdecl FNiagaraEmitterScriptProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScriptProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraEmitterScriptProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties,(UObject *)pUVar1
                         ,L"NiagaraEmitterScriptProperties");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraEmitterScriptProperties.OuterSingleton;
}

// operator= @ 14927baf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraEmitterScriptProperties * __thiscall
FNiagaraEmitterScriptProperties::operator=
          (FNiagaraEmitterScriptProperties *this,FNiagaraEmitterScriptProperties *param_1)

{
  TArray<FNiagaraEventReceiverProperties,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FNiagaraEventGeneratorProperties,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UNiagaraScript *pUVar5;
  FScriptContainerElement *_Src;
  FNiagaraEventGeneratorProperties *pFVar6;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar5 = (param_1->Script).field0_0x0.DebugPtr, pUVar5 != (UNiagaraScript *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar1 = &this->EventReceivers;
  (this->Script).field0_0x0 = (param_1->Script).field0_0x0;
  if (pTVar1 != &param_1->EventReceivers) {
    iVar4 = (param_1->EventReceivers).ArrayNum;
    piVar2 = &(this->EventReceivers).ArrayMax;
    _Src = (param_1->EventReceivers).AllocatorInstance.Data;
    (this->EventReceivers).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x18);
      }
    }
  }
  pTVar3 = &this->EventGenerators;
  if (pTVar3 != &param_1->EventGenerators) {
    DestructItems<FNiagaraEventGeneratorProperties,int>
              ((FNiagaraEventGeneratorProperties *)(pTVar3->AllocatorInstance).Data,
               (this->EventGenerators).ArrayNum);
    iVar4 = (param_1->EventGenerators).ArrayNum;
    piVar2 = &(this->EventGenerators).ArrayMax;
    pFVar6 = (FNiagaraEventGeneratorProperties *)(param_1->EventGenerators).AllocatorInstance.Data;
    (this->EventGenerators).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FNiagaraEventGeneratorProperties,FNiagaraEventGeneratorProperties,int>
                ((pTVar3->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  return this;
}

// InitDataSetAccess @ 1492ac140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraEmitterScriptProperties::InitDataSetAccess(FNiagaraEmitterScriptProperties *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TArray<FNiagaraEventGeneratorProperties,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  UNiagaraScript *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  TObjectPtr<UNiagaraScript>_u_0 TVar9;
  FNiagaraEventGeneratorProperties *pFVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FName *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TArray<FNiagaraEventGeneratorProperties,TSizedDefaultAllocator<32>_> *local_b0;
  FNiagaraEventGeneratorProperties local_a8;
  
  piVar1 = &(this->EventReceivers).ArrayMax;
  (this->EventReceivers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&(this->EventReceivers).AllocatorInstance,0,piVar1);
  }
  pTVar4 = &this->EventGenerators;
  local_b0 = pTVar4;
  DestructItems<FNiagaraEventGeneratorProperties,int>
            ((FNiagaraEventGeneratorProperties *)(pTVar4->AllocatorInstance).Data,
             (this->EventGenerators).ArrayNum);
  piVar2 = &(this->EventGenerators).ArrayMax;
  (this->EventGenerators).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,&pTVar4->AllocatorInstance,0,piVar2);
  }
  pUVar6 = (this->Script).field0_0x0.DebugPtr;
  if (pUVar6 != (UNiagaraScript *)0x0) {
    bVar12 = UNiagaraScript::IsReadyToRun(pUVar6,CPUSim);
    if (bVar12) {
      pUVar6 = (this->Script).field0_0x0.DebugPtr;
      iVar5 = (pUVar6->CachedScriptVM).ReadDataSets.ArrayNum;
      pFVar16 = (pUVar6->CachedScriptVM).ReadDataSets.AllocatorInstance.Data;
      pFVar3 = pFVar16 + (longlong)iVar5 * 0xc;
      while( true ) {
        if ((pUVar6->CachedScriptVM).ReadDataSets.ArrayNum != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FNiagaraDataSetID,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        pTVar4 = local_b0;
        if (pFVar16 == pFVar3) break;
        pFVar7 = (this->EventReceivers).AllocatorInstance.Data;
        local_res20 = 0;
        local_res18 = 0;
        local_c8 = *(undefined8 *)pFVar16;
        uStack_c0 = 0;
        local_b8 = 0;
        if ((pFVar7 <= (FScriptContainerElement *)&local_c8) &&
           ((FScriptContainerElement *)&local_c8 < pFVar7 + (longlong)*piVar1 * 0x18)) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar13 = (this->EventReceivers).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&(this->EventReceivers).AllocatorInstance,piVar1);
        }
        pFVar16 = pFVar16 + 0xc;
        (this->EventReceivers).ArrayNum = iVar13 + 1;
        pFVar8 = (this->EventReceivers).AllocatorInstance.Data;
        pFVar7 = pFVar8 + (longlong)iVar13 * 0x18;
        *(undefined8 *)pFVar7 = local_c8;
        *(undefined8 *)(pFVar7 + 8) = uStack_c0;
        *(undefined8 *)(pFVar8 + (longlong)iVar13 * 0x18 + 0x10) = local_b8;
      }
      TVar9 = (this->Script).field0_0x0;
      iVar5 = ((TVar9.DebugPtr)->CachedScriptVM).WriteDataSets.ArrayNum;
      pFVar14 = *(FName **)((longlong)TVar9 + 0x260);
      pFVar15 = pFVar14 + (longlong)iVar5 * 4;
      while( true ) {
        if (((TVar9.DebugPtr)->CachedScriptVM).WriteDataSets.ArrayNum != iVar5) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FNiagaraDataSetProperties,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar14 == pFVar15) break;
        local_a8.ID = *pFVar14;
        local_a8.MaxEventsPerFrame = 0x40;
        FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(&local_a8.DataSetCompiledData);
        TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
                  (&local_a8.DataSetCompiledData.Variables,
                   (TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *)(pFVar14 + 2));
        local_a8.DataSetCompiledData.ID.Name = *pFVar14;
        local_a8.DataSetCompiledData.ID._8_4_ = pFVar14[1].ComparisonIndex.Value;
        local_a8.DataSetCompiledData.SimTarget = CPUSim;
        FNiagaraDataSetCompiledData::BuildLayout(&local_a8.DataSetCompiledData);
        pFVar10 = (FNiagaraEventGeneratorProperties *)(pTVar4->AllocatorInstance).Data;
        if ((pFVar10 <= &local_a8) && (&local_a8 < pFVar10 + pTVar4->ArrayMax)) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar13 = pTVar4->ArrayNum;
        if (iVar13 == pTVar4->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
        }
        pTVar4->ArrayNum = iVar13 + 1;
        FNiagaraEventGeneratorProperties::FNiagaraEventGeneratorProperties
                  ((FNiagaraEventGeneratorProperties *)
                   ((pTVar4->AllocatorInstance).Data + (longlong)iVar13 * 0x58),&local_a8);
        DestructItems<FNiagaraVariableLayoutInfo,int>
                  ((FNiagaraVariableLayoutInfo *)
                   local_a8.DataSetCompiledData.VariableLayouts.AllocatorInstance.Data,
                   local_a8.DataSetCompiledData.VariableLayouts.ArrayNum);
        if ((FNiagaraVariableLayoutInfo *)
            local_a8.DataSetCompiledData.VariableLayouts.AllocatorInstance.Data !=
            (FNiagaraVariableLayoutInfo *)0x0) {
          FMemory::Free(local_a8.DataSetCompiledData.VariableLayouts.AllocatorInstance.Data);
        }
        if (local_a8.DataSetCompiledData.Variables.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.DataSetCompiledData.Variables.AllocatorInstance.Data);
        }
        pFVar14 = pFVar14 + 4;
      }
    }
  }
  return;
}

