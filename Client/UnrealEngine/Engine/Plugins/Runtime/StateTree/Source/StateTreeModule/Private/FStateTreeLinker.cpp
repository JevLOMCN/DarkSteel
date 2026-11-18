// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// FStateTreeLinker @ 14d52c600

FStateTreeLinker * __thiscall
FStateTreeLinker::FStateTreeLinker(FStateTreeLinker *this,TNotNull<UStateTree_const_*> param_1)

{
  UObjectBase *this_00;
  
  (this->StateTree).Object = (UObject *)0x0;
  if (param_1.Val != (UStateTree *)0x0) {
    UObjectBase::AddRef((UObjectBase *)param_1.Val);
    (this->StateTree).Object = (UObject *)param_1.Val;
  }
  this_00 = (UObjectBase *)((param_1.Val)->Schema).field0_0x0.DebugPtr;
  (this->Schema).Object = (UObject *)0x0;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    (this->Schema).Object = (UObject *)this_00;
  }
  this->Status = Succeeded;
  (this->ExternalDataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalDataDescs).ArrayNum = 0;
  (this->ExternalDataDescs).ArrayMax = 0;
  return this;
}

// LinkExternalData @ 14d532230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStateTreeLinker::LinkExternalData
          (FStateTreeLinker *this,FStateTreeExternalDataHandle *param_1,UStruct *param_2,
          EStateTreeExternalDataRequirement param_3)

{
  TArray<FStateTreeExternalDataDesc,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  UObject *pUVar4;
  code *pcVar5;
  undefined1 uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  UStateTreeSchema *pUVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined4 local_res8;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  UStruct *local_48;
  undefined8 local_40;
  FStateTreeDataHandle local_38;
  FScriptContainerElement local_32;
  
  pUVar4 = (this->Schema).Object;
  if ((pUVar4 == (UObject *)0x0) ||
     (cVar8 = (**(code **)(*(longlong *)pUVar4 + 0x2c0))(pUVar4,param_2), cVar8 != '\0')) {
    local_48 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    pTVar1 = &this->ExternalDataDescs;
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    local_38.Source = FStateTreeDataHandle::Invalid.Source;
    local_38._1_1_ = FStateTreeDataHandle::Invalid._1_1_;
    local_38.Index = FStateTreeDataHandle::Invalid.Index;
    local_38.StateHandle = (FStateTreeStateHandle)FStateTreeDataHandle::Invalid.StateHandle.Index;
    local_40 = 0;
    for (pFVar13 = pFVar15; local_32 = (FScriptContainerElement)param_3,
        pFVar13 != pFVar15 + (longlong)(this->ExternalDataDescs).ArrayNum * 0x18;
        pFVar13 = pFVar13 + 0x18) {
      if ((*(UStruct **)pFVar13 == local_48) && (pFVar13[0x16] == (FScriptContainerElement)param_3))
      {
        lVar14 = ((longlong)pFVar13 - (longlong)pFVar15) / 6 +
                 ((longlong)pFVar13 - (longlong)pFVar15 >> 0x3f);
        uVar10 = (int)(lVar14 >> 2) - (int)(lVar14 >> 0x3f);
        if (uVar10 != 0xffffffff) goto LAB_14d53255c;
        break;
      }
    }
    if (((pFVar15 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar15 + (longlong)(this->ExternalDataDescs).ArrayMax * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = (this->ExternalDataDescs).ArrayNum;
    piVar2 = &(this->ExternalDataDescs).ArrayMax;
    if (uVar10 == *piVar2) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    (this->ExternalDataDescs).ArrayNum = uVar10 + 1;
    lVar14 = (longlong)(int)uVar10 * 0x18;
    pFVar15 = pFVar15 + lVar14;
    *(UStruct **)pFVar15 = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    *(undefined8 *)(pFVar15 + 8) = local_40;
    *(undefined4 *)(pFVar15 + 0x10) = local_38._0_4_;
    *(ushort *)(pFVar15 + 0x14) = local_38.StateHandle.Index;
    pFVar15[0x16] = local_32;
    local_res8 = CONCAT31(local_res8._1_3_,0xc);
    if ((0xfffe < uVar10) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Source == EStateTreeDataSourceType::GlobalParameterData || Source == EStateTreeDataSourceType::ExternalGlobalParameterData || IsValidIndex(InIndex)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeTypes.h"
                           ,0x19b,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res8 = CONCAT22((short)uVar10,(undefined2)local_res8);
    uVar11 = 0;
    if ((int)uVar10 < (this->ExternalDataDescs).ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    *(undefined4 *)(pFVar15 + lVar14 + 0x10) = local_res8;
    *(undefined2 *)(pFVar15 + lVar14 + 0x14) = 0xffff;
LAB_14d53255c:
    uVar11 = 0;
    if ((int)uVar10 < (this->ExternalDataDescs).ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    uVar3 = *(undefined4 *)(pFVar15 + (longlong)(int)uVar10 * 0x18 + 0x10);
    (param_1->DataHandle).Source = (char)uVar3;
    (param_1->DataHandle).field_0x1 = (char)((uint)uVar3 >> 8);
    (param_1->DataHandle).Index = (short)((uint)uVar3 >> 0x10);
    (param_1->DataHandle).StateHandle.Index =
         *(ushort *)(pFVar15 + (longlong)(int)uVar10 * 0x18 + 0x14);
  }
  else {
    if (1 < (byte)LogStateTree._0_1_) {
      pUVar12 = TStrongObjectPtr<UStateTreeSchema_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                ::operator->(&this->Schema);
      local_78 = *(FName *)(*(longlong *)&pUVar12->field_0x10 + 0x18);
      ::FName::ToString(&local_78,&local_58);
      local_70 = (FName)param_2->_padding_;
      ::FName::ToString(&local_70,&local_68);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    uVar6 = FStateTreeDataHandle::Invalid._1_1_;
    uVar7 = FStateTreeDataHandle::Invalid.Index;
    (param_1->DataHandle).Source = FStateTreeDataHandle::Invalid.Source;
    (param_1->DataHandle).field_0x1 = uVar6;
    (param_1->DataHandle).Index = uVar7;
    (param_1->DataHandle).StateHandle.Index = FStateTreeDataHandle::Invalid.StateHandle.Index;
    this->Status = Failed;
  }
  return;
}

