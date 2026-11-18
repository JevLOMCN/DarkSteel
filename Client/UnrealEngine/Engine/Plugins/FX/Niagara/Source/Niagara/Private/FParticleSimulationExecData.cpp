// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FParticleSimulationExecData @ 149476500

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FParticleSimulationExecData * __thiscall
NiagaraStateless::FParticleSimulationExecData::FParticleSimulationExecData
          (FParticleSimulationExecData *this,FNiagaraDataSetCompiledData *param_1)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FParticleSimulationExecData *pFVar9;
  FNiagaraTypeDefinition *pFVar10;
  FNiagaraStatelessGlobals *pFVar11;
  FName *pFVar12;
  short sVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  FNiagaraVariableBase *pFVar18;
  uint uVar19;
  int *piVar20;
  longlong lVar21;
  TArray<NiagaraStateless::FParticleSimulationExecData::FRequiredComponentOffset,TSizedDefaultAllocator<32>_>
  *pTVar22;
  FScriptContainerElement *pFVar23;
  longlong local_res8;
  
  uVar15 = 0;
  (this->VariableComponentOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar20 = &(this->VariableComponentOffsets).ArrayMax;
  *piVar20 = 0;
  piVar1 = &(this->VariableComponentOffsets).ArrayNum;
  (this->RequiredComponentOffsets).ArrayMax = 0;
  *piVar1 = 0;
  (this->RequiredComponentOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredComponentOffsets).ArrayNum = 0;
  this->RequiredComponentByteSize = 0;
  (this->SimulateFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulateFunctions).ArrayNum = 0;
  (this->SimulateFunctions).ArrayMax = 0;
  iVar14 = (param_1->VariableLayouts).ArrayNum;
  if ((param_1->Variables).ArrayNum < iVar14) {
    iVar14 = (param_1->Variables).ArrayNum;
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,iVar14,(ForAnyElementType *)this,piVar1,piVar20);
  DefaultConstructItems<NiagaraStateless::FParticleSimulationExecData::FVariableOffset,int>
            ((this->VariableComponentOffsets).AllocatorInstance.Data + (longlong)iVar7 * 4,iVar14);
  if (0 < iVar14) {
    lVar21 = 0;
    local_res8 = 0;
    uVar17 = uVar15;
    do {
      uVar16 = (uint)uVar17;
      uVar19 = ~uVar16 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar16 < (param_1->VariableLayouts).ArrayNum) {
        uVar8 = uVar19;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FParticleSimulationExecData *)(*pcVar5)();
        return pFVar9;
      }
      pFVar23 = (param_1->VariableLayouts).AllocatorInstance.Data + lVar21;
      uVar8 = 0;
      if ((int)uVar16 < (param_1->Variables).ArrayNum) {
        uVar8 = uVar19;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FParticleSimulationExecData *)(*pcVar5)();
        return pFVar9;
      }
      if (*(short *)(pFVar23 + 8) == 0) {
        if (*(short *)(pFVar23 + 10) != 0) {
          if ((*(short *)(pFVar23 + 0xc) != 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("VariableLayout.GetNumFloatComponents() == 0 && VariableLayout.GetNumHalfComponents() == 0"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessParticleSimExecData.cpp"
                                 ,0x1c,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FParticleSimulationExecData *)(*pcVar5)();
            return pFVar9;
          }
          uVar8 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar8 = uVar19;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FParticleSimulationExecData *)(*pcVar5)();
            return pFVar9;
          }
          pFVar3 = (this->VariableComponentOffsets).AllocatorInstance.Data + uVar15 * 4;
          *(ushort *)pFVar3 = *(ushort *)pFVar3 | 1;
          sVar13 = *(short *)(pFVar23 + 2);
          uVar8 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar8 = uVar19;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FParticleSimulationExecData *)(*pcVar5)();
            return pFVar9;
          }
          pFVar3 = (this->VariableComponentOffsets).AllocatorInstance.Data;
          *(ushort *)(pFVar3 + uVar15 * 4) = sVar13 * 2 | *(ushort *)(pFVar3 + uVar15 * 4) & 1;
          sVar13 = *(short *)(pFVar23 + 10);
          goto LAB_14947682b;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessParticleSimExecData.cpp"
                           ,0x24,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FParticleSimulationExecData *)(*pcVar5)();
          return pFVar9;
        }
      }
      else {
        if (((*(short *)(pFVar23 + 10) != 0) || (*(short *)(pFVar23 + 0xc) != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("VariableLayout.GetNumInt32Components() == 0 && VariableLayout.GetNumHalfComponents() == 0"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessParticleSimExecData.cpp"
                               ,0x15,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FParticleSimulationExecData *)(*pcVar5)();
          return pFVar9;
        }
        uVar8 = 0;
        if ((int)uVar16 < *piVar1) {
          uVar8 = uVar19;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FParticleSimulationExecData *)(*pcVar5)();
          return pFVar9;
        }
        pFVar3 = (this->VariableComponentOffsets).AllocatorInstance.Data;
        *(ushort *)(pFVar3 + local_res8) = *(ushort *)(pFVar3 + uVar15 * 4) & 0xfffe;
        sVar13 = *(short *)pFVar23;
        uVar8 = 0;
        if ((int)uVar16 < *piVar1) {
          uVar8 = uVar19;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FParticleSimulationExecData *)(*pcVar5)();
          return pFVar9;
        }
        pFVar3 = (this->VariableComponentOffsets).AllocatorInstance.Data;
        *(ushort *)(pFVar3 + uVar15 * 4) = sVar13 * 2 | *(ushort *)(pFVar3 + uVar15 * 4) & 1;
        sVar13 = *(short *)(pFVar23 + 8);
LAB_14947682b:
        uVar8 = 0;
        if ((int)uVar16 < *piVar1) {
          uVar8 = uVar19;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FParticleSimulationExecData *)(*pcVar5)();
          return pFVar9;
        }
        *(short *)((this->VariableComponentOffsets).AllocatorInstance.Data + uVar15 * 4 + 2) =
             sVar13;
      }
      local_res8 = local_res8 + 4;
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar15 = uVar15 + 1;
      lVar21 = lVar21 + 0x20;
    } while ((longlong)uVar15 < (longlong)iVar14);
  }
  piVar20 = &(this->RequiredComponentOffsets).ArrayMax;
  pTVar22 = &this->RequiredComponentOffsets;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    RequireComponents[0].Name.ComparisonIndex.Value = 0;
    RequireComponents[0].Name.Number = 0;
    RequireComponents[0].TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&RequireComponents[0].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
    RequireComponents[1].Name.ComparisonIndex.Value = 0;
    RequireComponents[1].Name.Number = 0;
    RequireComponents[1].TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&RequireComponents[1].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
    RequireComponents[2].Name.ComparisonIndex.Value = 0;
    RequireComponents[2].Name.Number = 0;
    RequireComponents[2].TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&RequireComponents[2].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
    RequireComponents[3].Name.ComparisonIndex.Value = 0;
    RequireComponents[3].Name.Number = 0;
    RequireComponents[3].TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&RequireComponents[3].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
    RequireComponents[4].Name.ComparisonIndex.Value = 0;
    RequireComponents[4].Name.Number = 0;
    RequireComponents[4].TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&RequireComponents[4].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
    RequireComponents[5].Name.ComparisonIndex.Value = 0;
    RequireComponents[5].Name.Number = 0;
    RequireComponents[5].TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&RequireComponents[5].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
    pFVar11 = FNiagaraStatelessGlobals::Get();
    RequireComponents[6].Name = (pFVar11->UniqueIDVariable).Name;
    RequireComponents[6].TypeDefHandle.RegisteredTypeIndex =
         (pFVar11->UniqueIDVariable).TypeDefHandle.RegisteredTypeIndex;
    pFVar11 = FNiagaraStatelessGlobals::Get();
    RequireComponents[7].Name = (pFVar11->MaterialRandomVariable).Name;
    RequireComponents[7].TypeDefHandle.RegisteredTypeIndex =
         (pFVar11->MaterialRandomVariable).TypeDefHandle.RegisteredTypeIndex;
    _Init_thread_footer(&::_TSS0);
  }
  if (*piVar20 < 8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,8,&pTVar22->AllocatorInstance,(this->RequiredComponentOffsets).ArrayNum,piVar20);
  }
  pFVar18 = RequireComponents;
  do {
    piVar20 = &(this->RequiredComponentOffsets).ArrayMax;
    if ((pFVar18->Name != (FName)0x0) &&
       (pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar18->TypeDefHandle),
       (pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
      pFVar4 = (FName *)(param_1->Variables).AllocatorInstance.Data;
      pFVar2 = (FName *)((longlong)pFVar4 + (longlong)(param_1->Variables).ArrayNum * 0xc);
      if (pFVar4 != pFVar2) {
        pFVar12 = pFVar4;
        do {
          if ((*pFVar12 == pFVar18->Name) &&
             (pFVar12[1].ComparisonIndex.Value == (pFVar18->TypeDefHandle).RegisteredTypeIndex)) {
            lVar21 = ((longlong)pFVar12 - (longlong)pFVar4) / 6 +
                     ((longlong)pFVar12 - (longlong)pFVar4 >> 0x3f);
            iVar14 = (int)(lVar21 >> 1) - (int)(lVar21 >> 0x3f);
            goto LAB_14947698b;
          }
          pFVar12 = (FName *)&pFVar12[1].Number;
        } while (pFVar12 != pFVar2);
      }
    }
    iVar14 = -1;
LAB_14947698b:
    iVar7 = (this->RequiredComponentOffsets).ArrayNum;
    if (iVar7 == *piVar20) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&pTVar22->AllocatorInstance,piVar20);
    }
    (this->RequiredComponentOffsets).ArrayNum = iVar7 + 1;
    pFVar23 = (pTVar22->AllocatorInstance).Data + (longlong)iVar7 * 2;
    DefaultConstructItems<NiagaraStateless::FParticleSimulationExecData::FRequiredComponentOffset,int>
              (pFVar23,1);
    if (iVar14 == -1) {
      *(ushort *)pFVar23 = *(ushort *)pFVar23 | 1;
      *(ushort *)pFVar23 = (short)this->RequiredComponentByteSize * 2 | 1;
      this->RequiredComponentByteSize = this->RequiredComponentByteSize + 4;
    }
    else {
      *(short *)pFVar23 = (short)iVar14 * 2;
    }
    pFVar18 = pFVar18 + 1;
    if (pFVar18 == (FNiagaraVariableBase *)&::_TSS0) {
      return this;
    }
  } while( true );
}

