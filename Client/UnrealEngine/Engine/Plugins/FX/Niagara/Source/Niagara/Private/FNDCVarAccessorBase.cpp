// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNDCVarAccessorBase @ 1490b0d70

FNDCVarAccessorBase * __thiscall
FNDCVarAccessorBase::FNDCVarAccessorBase
          (FNDCVarAccessorBase *this,FNDCAccessorBase *param_1,FNiagaraVariableBase *param_2,
          bool param_3)

{
  TArray<FNDCVarAccessorBase_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNDCVarAccessorBase *pFVar7;
  FNDCVarAccessorBase *local_18 [2];
  
  iVar6 = (param_2->TypeDefHandle).RegisteredTypeIndex;
  pTVar1 = &param_1->VariableAccessors;
  (this->Variable).Name = param_2->Name;
  (this->Variable).TypeDefHandle.RegisteredTypeIndex = iVar6;
  this->VarOffset = -1;
  this->bIsRequired = (uint)param_3;
  (this->DebugCachedLayout).Object = (FNiagaraDataChannelLayoutInfo *)0x0;
  (this->DebugCachedLayout).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakNDC).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = this;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(param_1->VariableAccessors).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FNDCVarAccessorBase *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (param_1->VariableAccessors).ArrayNum;
  piVar2 = &(param_1->VariableAccessors).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_1->VariableAccessors).ArrayNum = iVar6 + 1;
  *(FNDCVarAccessorBase **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return this;
}

// Init @ 149112e80

void __thiscall FNDCVarAccessorBase::Init(FNDCVarAccessorBase *this,UNiagaraDataChannel *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  FNiagaraTypeDefinition *pFVar7;
  undefined1 *puVar8;
  int iVar9;
  UNiagaraDataChannel *local_res8;
  FNiagaraVariableBase local_38;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_28;
  FNiagaraDataChannelLayoutInfo *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  this->VarOffset = -1;
  UNiagaraDataChannel::GetLayoutInfo(param_1,&local_28);
  if (local_28.Object != (FNiagaraDataChannelLayoutInfo *)0x0) {
    if ((local_28.Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = (this->DebugCachedLayout).Object;
    pTStack_10 = (this->DebugCachedLayout).SharedReferenceCount.ReferenceController;
    (this->DebugCachedLayout).Object = local_28.Object;
    (this->DebugCachedLayout).SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UNiagaraDataChannel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->WeakNDC).WeakPtr,(FObjectPtr)&local_res8);
    puVar6 = (uint *)TMapBase<FNiagaraVariableBase,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,int,0>_>
                     ::Find((TMapBase<FNiagaraVariableBase,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,int,0>_>
                             *)&(local_28.Object)->GameDataLayout,&this->Variable);
    if (puVar6 == (uint *)0x0) {
      pFVar7 = FNiagaraTypeDefinitionHandle::Resolve(&(this->Variable).TypeDefHandle);
      if (pFVar7->UnderlyingType == 3) {
        local_38.Name = (this->Variable).Name;
        local_38.TypeDefHandle.RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register
                       (&local_38.TypeDefHandle,&FNiagaraTypeDefinition::IntDef);
        uVar5 = ::GetTypeHash(&local_38);
        if (*(int *)&((local_28.Object)->GameDataLayout).VariableIndices.field_0x8 !=
            *(int *)&((local_28.Object)->GameDataLayout).VariableIndices.field_0x34) {
          puVar8 = *(undefined1 **)&((local_28.Object)->GameDataLayout).VariableIndices.field_0x40;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &((local_28.Object)->GameDataLayout).VariableIndices.field_0x38;
          }
          iVar9 = *(int *)(puVar8 + (ulonglong)
                                    (*(int *)&((local_28.Object)->GameDataLayout).VariableIndices.
                                              field_0x48 - 1U & uVar5) * 4);
          if (iVar9 != -1) {
            lVar2 = *(longlong *)&((local_28.Object)->GameDataLayout).VariableIndices;
            do {
              lVar1 = lVar2 + (longlong)iVar9 * 0x18;
              if ((*(FName *)(lVar2 + (longlong)iVar9 * 0x18) == local_38.Name) &&
                 (*(int *)(lVar1 + 8) == local_38.TypeDefHandle.RegisteredTypeIndex)) {
                if (iVar9 != -1) {
                  puVar6 = (uint *)(lVar1 + 0xc);
                  if (lVar1 == 0) {
                    puVar6 = (uint *)0x0;
                  }
                  if (puVar6 != (uint *)0x0) goto LAB_14911301b;
                }
                break;
              }
              iVar9 = *(int *)(lVar1 + 0x10);
            } while (iVar9 != -1);
          }
        }
      }
    }
    else {
LAB_14911301b:
      *(uint *)&this->field_0xc = (*puVar6 ^ *(uint *)&this->field_0xc) & 0x80000000 ^ *puVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

