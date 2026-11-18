// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraDataChannelLayoutInfo @ 1490b1130

FNiagaraDataChannelLayoutInfo * __thiscall
FNiagaraDataChannelLayoutInfo::FNiagaraDataChannelLayoutInfo
          (FNiagaraDataChannelLayoutInfo *this,UNiagaraDataChannel *param_1)

{
  FNiagaraDataSetCompiledData *this_00;
  FNiagaraDataSetCompiledData *this_01;
  FScriptContainerElement *pFVar1;
  FNiagaraDataChannelVariable *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNiagaraDataChannelLayoutInfo *pFVar7;
  FNiagaraTypeDefinition *pFVar8;
  UClass *pUVar9;
  UScriptStruct *pUVar10;
  FScriptContainerElement *pFVar11;
  FNiagaraTypeDefinitionHandle local_res10 [2];
  TObjectPtr<UObject>_u_0 local_res18;
  TObjectPtr<UObject>_u_0 *local_res20;
  undefined4 uStack_8c;
  undefined8 local_88;
  FNiagaraTypeDefinitionHandle local_80 [2];
  TArrayView<FNiagaraDataChannelVariable_const_,int> local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  undefined4 local_54;
  
  this_00 = &this->CompiledData;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(this_00);
  this_01 = &this->CompiledDataGPU;
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(this_01);
  *(undefined8 *)&(this->GameDataLayout).VariableIndices = 0;
  *(undefined8 *)&(this->GameDataLayout).VariableIndices.field_0x8 = 0;
  *(undefined8 *)&(this->GameDataLayout).VariableIndices.field_0x20 = 0;
  *(undefined4 *)&(this->GameDataLayout).VariableIndices.field_0x28 = 0;
  *(undefined4 *)&(this->GameDataLayout).VariableIndices.field_0x2c = 0x80;
  *(undefined4 *)&(this->GameDataLayout).VariableIndices.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GameDataLayout).VariableIndices.field_0x34 = 0;
  *(undefined8 *)&(this->GameDataLayout).VariableIndices.field_0x40 = 0;
  *(undefined4 *)&(this->GameDataLayout).VariableIndices.field_0x48 = 0;
  (this->GameDataLayout).LwcConverters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameDataLayout).LwcConverters.ArrayNum = 0;
  (this->GameDataLayout).LwcConverters.ArrayMax = 0;
  this->bKeepPreviousFrameData = false;
  if ((param_1 == (UNiagaraDataChannel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataChannel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelLayoutInfo.cpp"
                         ,0x1f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FNiagaraDataChannelLayoutInfo *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = (FNiagaraDataChannelVariable *)(param_1->ChannelVariables).AllocatorInstance.Data;
  iVar6 = (param_1->ChannelVariables).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FNiagaraDataChannelLayoutInfo *)(*pcVar4)();
    return pFVar7;
  }
  local_78._12_4_ = uStack_8c;
  local_78.ArrayNum = iVar6;
  local_78.DataPtr = pFVar2;
  FNiagaraDataChannelGameDataLayout::Init(&this->GameDataLayout,&local_78);
  this->bKeepPreviousFrameData = param_1->bKeepPreviousFrameData;
  (this->CompiledData).SimTarget = CPUSim;
  (this->CompiledDataGPU).SimTarget = GPUComputeSim;
  iVar6 = (param_1->ChannelVariables).ArrayNum;
  pFVar11 = (param_1->ChannelVariables).AllocatorInstance.Data;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FNiagaraDataChannelLayoutInfo *)(*pcVar4)();
    return pFVar7;
  }
  pFVar1 = pFVar11 + (longlong)iVar6 * 0xc;
  do {
    if (pFVar11 == pFVar1) {
      FNiagaraDataSetCompiledData::BuildLayout(this_00);
      FNiagaraDataSetCompiledData::BuildLayout(this_01);
      return this;
    }
    local_88 = *(undefined8 *)pFVar11;
    local_80[0].RegisteredTypeIndex = *(int *)(pFVar11 + 8);
    pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(local_80);
    if (pFVar8->UnderlyingType != 3) {
      pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(local_80);
      pUVar10 = FNiagaraTypeDefinition::IntStruct;
      if (pFVar8->UnderlyingType != 3) {
        if ((pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
          pUVar9 = Z_Construct_UClass_UStruct_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)pFVar8,pUVar9);
          if (bVar5) {
            pUVar10 = (UScriptStruct *)(pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr;
            goto LAB_1490b12f0;
          }
        }
        pUVar10 = (UScriptStruct *)0x0;
      }
LAB_1490b12f0:
      if (pUVar10 == (UScriptStruct *)0x0) {
LAB_1490b1318:
        pUVar10 = (UScriptStruct *)0x0;
      }
      else {
        pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar6 = (int)pUVar9->_padding_;
        if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar9->_padding_)) goto LAB_1490b1318;
      }
      local_res18.DebugPtr =
           (UObject *)FNiagaraTypeHelper::FindNiagaraFriendlyTopLevelStruct(pUVar10,Simulation);
      local_68.DebugPtr = local_res18.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UScriptStruct *)local_res18.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable(local_res18.DebugPtr);
      }
      local_5e = 0;
      local_60 = 2;
      local_5c = 0xffffffffffffffff;
      local_54 = 0xffffffff;
      bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                        ((UScriptStruct *)local_res18.DebugPtr,UserFacing);
      if (!bVar5) {
        local_res20 = &local_res18;
        `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res20)
        ;
      }
      FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_68.ObjectPtr);
      local_res10[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (local_res10,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
      local_80[0].RegisteredTypeIndex = local_res10[0].RegisteredTypeIndex;
    }
    pFVar3 = (this_00->Variables).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar3 + (longlong)(this->CompiledData).Variables.ArrayMax * 0xc)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FNiagaraDataChannelLayoutInfo *)(*pcVar4)();
      return pFVar7;
    }
    iVar6 = (this->CompiledData).Variables.ArrayNum;
    if (iVar6 == (this->CompiledData).Variables.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)this_00,&(this->CompiledData).Variables.ArrayMax
                        );
    }
    (this->CompiledData).Variables.ArrayNum = iVar6 + 1;
    pFVar3 = (this_00->Variables).AllocatorInstance.Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = local_88;
    *(int *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = local_80[0].RegisteredTypeIndex;
    pFVar3 = (this_01->Variables).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar3 + (longlong)(this->CompiledDataGPU).Variables.ArrayMax * 0xc)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FNiagaraDataChannelLayoutInfo *)(*pcVar4)();
      return pFVar7;
    }
    iVar6 = (this->CompiledDataGPU).Variables.ArrayNum;
    if (iVar6 == (this->CompiledDataGPU).Variables.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)this_01,
                         &(this->CompiledDataGPU).Variables.ArrayMax);
    }
    pFVar11 = pFVar11 + 0xc;
    (this->CompiledDataGPU).Variables.ArrayNum = iVar6 + 1;
    pFVar3 = (this_01->Variables).AllocatorInstance.Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = local_88;
    *(int *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = local_80[0].RegisteredTypeIndex;
  } while( true );
}

// ~FNiagaraDataChannelLayoutInfo @ 1490b7cd0

void __thiscall
FNiagaraDataChannelLayoutInfo::~FNiagaraDataChannelLayoutInfo(FNiagaraDataChannelLayoutInfo *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  FNiagaraDataSetCompiledData::Empty(&this->CompiledData);
  FNiagaraDataSetCompiledData::Empty(&this->CompiledDataGPU);
  DestructItems<FNiagaraLwcStructConverter,int>
            ((FNiagaraLwcStructConverter *)
             (this->GameDataLayout).LwcConverters.AllocatorInstance.Data,
             (this->GameDataLayout).LwcConverters.ArrayNum);
  pFVar3 = (this->GameDataLayout).LwcConverters.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->GameDataLayout).VariableIndices.field_0x48 = 0;
  pvVar4 = *(void **)&(this->GameDataLayout).VariableIndices.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GameDataLayout);
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)
             (this->CompiledDataGPU).VariableLayouts.AllocatorInstance.Data,
             (this->CompiledDataGPU).VariableLayouts.ArrayNum);
  pFVar3 = (this->CompiledDataGPU).VariableLayouts.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CompiledDataGPU).Variables.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)
             (this->CompiledData).VariableLayouts.AllocatorInstance.Data,
             (this->CompiledData).VariableLayouts.ArrayNum);
  pFVar3 = (this->CompiledData).VariableLayouts.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CompiledData).Variables.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

