// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 214

// StaticStruct @ 14add5760

UScriptStruct * __cdecl FMetaSoundFrontendDocumentBuilder::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendDocumentBuilder.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundFrontendDocumentBuilder.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder,
                         (UObject *)pUVar1,L"MetaSoundFrontendDocumentBuilder");
  }
  return Z_Registration_Info_UScriptStruct_FMetaSoundFrontendDocumentBuilder.OuterSingleton;
}

// FMetaSoundFrontendDocumentBuilder @ 14addc8a0

FMetaSoundFrontendDocumentBuilder * __thiscall
FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
          (FMetaSoundFrontendDocumentBuilder *this,
          TScriptInterface<IMetaSoundDocumentInterface> *param_1,
          TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *param_2,bool param_3)

{
  UObject *pUVar1;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_18;
  
  this->_padding_ = (longlong)&___7FMetaSoundFrontendDocumentBuilder__6B_;
  pUVar1 = *(UObject **)param_1;
  *(UObject **)&this->DocumentInterface = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(undefined8 *)&(this->DocumentInterface).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  this->BuildPageID = Metasound::Frontend::DefaultPageID;
  (this->DocumentCache).Object = (IDocumentCache *)0x0;
  (this->DocumentCache).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DocumentDelegates).Object = (FDocumentModifyDelegates *)0x0;
  (this->DocumentDelegates).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HintPath).PackageName.ComparisonIndex = 0;
  (this->HintPath).PackageName.Number = 0;
  (this->HintPath).AssetName.ComparisonIndex = 0;
  (this->HintPath).AssetName.Number = 0;
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  BeginBuilding(this,&local_18,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FMetaSoundFrontendDocumentBuilder @ 14addf2b0

void __thiscall
FMetaSoundFrontendDocumentBuilder::~FMetaSoundFrontendDocumentBuilder
          (FMetaSoundFrontendDocumentBuilder *this)

{
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7FMetaSoundFrontendDocumentBuilder__6B_;
  if ((*(longlong *)&this->DocumentInterface != 0) &&
     (*(longlong *)&(this->DocumentInterface).field_0x8 != 0)) {
    (**(code **)(**(longlong **)&(this->DocumentInterface).field_0x8 + 0x58))();
    *(undefined8 *)&this->DocumentInterface = 0;
    *(undefined8 *)&(this->DocumentInterface).field_0x8 = 0;
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->DocumentDelegates !=
      (TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *)&local_28) {
    (this->DocumentDelegates).Object = (FDocumentModifyDelegates *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DocumentDelegates).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->DocumentCache != (TSharedPtr<Metasound::Frontend::IDocumentCache,1> *)&local_18) {
    (this->DocumentCache).Object = (IDocumentCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DocumentCache).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DocumentDelegates).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DocumentCache).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14ade0570

void __thiscall
`FMetaSoundFrontendDocumentBuilder::ClearDocument'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  int *piVar1;
  
  DestructItems<FMetasoundFrontendNode,int>
            ((FMetasoundFrontendNode *)(param_1->Nodes).AllocatorInstance.Data,
             (param_1->Nodes).ArrayNum);
  piVar1 = &(param_1->Nodes).ArrayMax;
  (param_1->Nodes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,(ForAnyElementType *)param_1,0,piVar1);
  }
  piVar1 = &(param_1->Edges).ArrayMax;
  (param_1->Edges).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,4,0,&(param_1->Edges).AllocatorInstance,0,piVar1);
  }
  DestructItems<FMetasoundFrontendVariable,int>
            ((FMetasoundFrontendVariable *)(param_1->Variables).AllocatorInstance.Data,
             (param_1->Variables).ArrayNum);
  piVar1 = &(param_1->Variables).ArrayMax;
  (param_1->Variables).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,0,&(param_1->Variables).AllocatorInstance,0,piVar1);
  }
  return;
}

// operator() @ 14ade0630

/* WARNING: Enum "Type": Some values do not have unique names */

IInterfaceRegistryEntry * __thiscall
`FMetaSoundFrontendDocumentBuilder::FindDeclaredInterfaces'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendVersion *param_1)

{
  IInterfaceRegistry *pIVar1;
  IInterfaceRegistryEntry *pIVar2;
  FString local_28;
  FString local_18;
  
  Metasound::Frontend::GetInterfaceRegistryKey(&local_28,param_1);
  pIVar1 = Metasound::Frontend::IInterfaceRegistry::Get();
  pIVar2 = (IInterfaceRegistryEntry *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,&local_28);
  if ((pIVar2 == (IInterfaceRegistryEntry *)0x0) &&
     (**(undefined1 **)this = 0, 2 < (byte)LogMetaSound._0_1_)) {
    FMetasoundFrontendVersion::ToString(param_1,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pIVar2;
}

// operator() @ 14ade06f0

bool __thiscall
`FMetaSoundFrontendDocumentBuilder::FindGraphVariableByNodeID'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendVariable *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  
  puVar5 = *(uint **)this;
  uVar1 = puVar5[3];
  uVar2 = *puVar5;
  uVar3 = puVar5[1];
  uVar4 = puVar5[2];
  if ((((uVar1 != (param_1->VariableNodeID).D || uVar4 != (param_1->VariableNodeID).C) ||
       uVar3 != (param_1->VariableNodeID).B) || uVar2 != (param_1->VariableNodeID).A) &&
     (((uVar1 != (param_1->MutatorNodeID).D || uVar4 != (param_1->MutatorNodeID).C) ||
      uVar3 != (param_1->MutatorNodeID).B) || uVar2 != (param_1->MutatorNodeID).A)) {
    pFVar6 = (param_1->DeferredAccessorNodeIDs).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)(param_1->DeferredAccessorNodeIDs).ArrayNum * 0x10;
    for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 0x10) {
      if (((uVar1 == *(uint *)(pFVar6 + 0xc) && uVar4 == *(uint *)(pFVar6 + 8)) &&
          uVar3 == *(uint *)(pFVar6 + 4)) && uVar2 == *(uint *)pFVar6) {
        return true;
      }
    }
    pFVar6 = (param_1->AccessorNodeIDs).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)(param_1->AccessorNodeIDs).ArrayNum * 0x10;
    while( true ) {
      if (pFVar6 == pFVar7) {
        return false;
      }
      if (((uVar1 == *(uint *)(pFVar6 + 0xc) && uVar4 == *(uint *)(pFVar6 + 8)) &&
          uVar3 == *(uint *)(pFVar6 + 4)) && uVar2 == *(uint *)pFVar6) break;
      pFVar6 = pFVar6 + 0x10;
    }
  }
  return true;
}

// operator() @ 14ade0810

FMetasoundFrontendVertex * __thiscall
`FMetaSoundFrontendDocumentBuilder::FindNodeInputsConnectedToNodeOutput'::__l2::<lambda_1>::
operator()(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMetasoundFrontendVertex *pFVar8;
  longlong lVar9;
  undefined8 local_18 [2];
  
  uVar2 = *param_1;
  lVar9 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar9 + 0x18)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMetasoundFrontendVertex *)(*pcVar4)();
      return pFVar8;
    }
  }
  lVar9 = *(longlong *)(lVar9 + 0x10) + (longlong)(int)uVar2 * 0x40;
  pFVar3 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 0x18);
  if (pFVar3 != (ForAnyElementType *)0x0) {
    local_18[0] = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x28))
                            (*(longlong **)((longlong)this + 0x10),lVar9 + 0x20);
    if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMetasoundFrontendVertex *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar3->Data + (longlong)iVar7 * 8) = local_18[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00014ade0963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar8 = (FMetasoundFrontendVertex *)
           (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x48))
                     (*(longlong **)((longlong)this + 0x10),lVar9 + 0x20,lVar9 + 0x30);
  return pFVar8;
}

// operator() @ 14ade0970

void __thiscall
`FMetaSoundFrontendDocumentBuilder::IsDependencyReferenced'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  longlong *plVar6;
  
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar6 = *(longlong **)(lVar2 + 0x28);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6,&param_1->PageID);
  bVar1 = **(byte **)((longlong)this + 0x10);
  bVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)((longlong)this + 8));
  **(byte **)((longlong)this + 0x10) = bVar5 | bVar1;
  return;
}

// operator() @ 14ade0a00

void __thiscall
`FMetaSoundFrontendDocumentBuilder::RemoveGraphOutput'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  FGuid *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  FGuid *pFVar10;
  
  lVar2 = *(longlong *)this;
  pFVar1 = &param_1->PageID;
  uVar3 = **(undefined8 **)((longlong)this + 8);
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 0x28) + 0x60))();
  lVar8 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar3);
  if (lVar8 != 0) {
    pFVar10 = pFVar1;
    if (pFVar1 == (FGuid *)0x0) {
      pFVar10 = (FGuid *)(lVar2 + 0x18);
    }
    if (*(longlong *)(lVar2 + 0x28) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar7 = (longlong *)
             (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x40))
                       (*(longlong **)(lVar2 + 0x28),pFVar10);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x28))(plVar7,lVar8 + 0x20);
    if (puVar9 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x18);
      uVar3 = puVar9[3];
      *puVar4 = puVar9[2];
      puVar4[1] = uVar3;
      puVar4 = *(undefined8 **)((longlong)this + 0x20);
      uVar3 = puVar9[1];
      *puVar4 = *puVar9;
      puVar4[1] = uVar3;
      bVar6 = FMetaSoundFrontendDocumentBuilder::RemoveNode
                        (*(FMetaSoundFrontendDocumentBuilder **)this,
                         *(FGuid **)((longlong)this + 0x20),pFVar1);
      if (!bVar6) {
        **(undefined1 **)((longlong)this + 0x28) = 0;
      }
    }
  }
  return;
}

// operator() @ 14ade0b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMetaSoundFrontendDocumentBuilder::ReplaceDependency'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendClass *param_1,FMetasoundFrontendNode *param_2,
          FGuid *param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_f8 [96];
  void *local_98;
  undefined4 local_90;
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  FMetaSoundFrontendDocumentBuilder::CaptureNodeInstanceReplacementData
            (*(FMetaSoundFrontendDocumentBuilder **)this,(FNodeInstanceReplacementData *)local_f8,
             param_2,param_3);
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  pFVar3 = pFVar2->Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_f8) &&
     (lVar7 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4),
     (FScriptContainerElement *)local_f8 < pFVar3 + lVar7 * 0xe0)) {
    local_110 = (longlong)*(int *)&pFVar2[1].Data;
    local_108 = 0xe0;
    local_128 = local_f8;
    local_120 = pFVar3;
    local_118 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8e0,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  FMetaSoundFrontendDocumentBuilder::FNodeInstanceReplacementData::FNodeInstanceReplacementData
            ((FNodeInstanceReplacementData *)(pFVar2->Data + (longlong)iVar6 * 0xe0),
             (FNodeInstanceReplacementData *)local_f8);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_f8 + 0x20));
  FInstancedStruct::Reset((FInstancedStruct *)(local_f8 + 0x10));
  FInstancedStruct::Reset((FInstancedStruct *)local_f8);
  return;
}

// operator() @ 14ade0c90

void __thiscall
`FMetaSoundFrontendDocumentBuilder::SetGraphInputName'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lVar3 = *(longlong *)this;
  if ((*(longlong *)(lVar3 + 0x28) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar8 = *(longlong **)(lVar3 + 0x28);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8,&param_1->PageID);
  puVar9 = (uint *)(**(code **)(*plVar8 + 0x18))(plVar8,*(longlong *)((longlong)this + 8) + 0x20);
  if (puVar9 != (uint *)0x0) {
    uVar1 = *puVar9;
    uVar7 = 0;
    if ((int)uVar1 < (param_1->Nodes).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (param_1->Nodes).AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x20) =
         **(undefined8 **)((longlong)this + 0x10);
    iVar2 = *(int *)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x30);
    puVar10 = *(undefined8 **)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x28);
    puVar11 = puVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if (*(int *)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x30) != iVar2) {
        `TCheckedPointerIterator<FMetasoundFrontendVertex,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar10 == puVar11) break;
      *puVar10 = **(undefined8 **)((longlong)this + 0x10);
      puVar10 = puVar10 + 4;
    }
    iVar2 = *(int *)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x40);
    puVar10 = *(undefined8 **)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x38);
    puVar11 = puVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if (*(int *)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x40) != iVar2) {
        `TCheckedPointerIterator<FMetasoundFrontendVertex,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar10 == puVar11) break;
      *puVar10 = **(undefined8 **)((longlong)this + 0x10);
      puVar10 = puVar10 + 4;
    }
  }
  return;
}

// operator() @ 14ade0df0

void __thiscall
`FMetaSoundFrontendDocumentBuilder::SetGraphOutputName'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lVar3 = *(longlong *)this;
  if ((*(longlong *)(lVar3 + 0x28) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar8 = *(longlong **)(lVar3 + 0x28);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8,&param_1->PageID);
  puVar9 = (uint *)(**(code **)(*plVar8 + 0x18))(plVar8,*(longlong *)((longlong)this + 8) + 0x20);
  if (puVar9 != (uint *)0x0) {
    uVar1 = *puVar9;
    uVar7 = 0;
    if ((int)uVar1 < (param_1->Nodes).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (param_1->Nodes).AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x20) =
         **(undefined8 **)((longlong)this + 0x10);
    iVar2 = *(int *)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x30);
    puVar10 = *(undefined8 **)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x28);
    puVar11 = puVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if (*(int *)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x30) != iVar2) {
        `TCheckedPointerIterator<FMetasoundFrontendVertex,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar10 == puVar11) break;
      *puVar10 = **(undefined8 **)((longlong)this + 0x10);
      puVar10 = puVar10 + 4;
    }
    iVar2 = *(int *)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x40);
    puVar10 = *(undefined8 **)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x38);
    puVar11 = puVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if (*(int *)(pFVar4 + (longlong)(int)uVar1 * 0x88 + 0x40) != iVar2) {
        `TCheckedPointerIterator<FMetasoundFrontendVertex,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar10 == puVar11) break;
      *puVar10 = **(undefined8 **)((longlong)this + 0x10);
      puVar10 = puVar10 + 4;
    }
  }
  return;
}

// operator() @ 14ade0f50

void __thiscall
`FMetaSoundFrontendDocumentBuilder::SwapGraphInput'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
  *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 local_res8 [16];
  longlong *local_a8 [2];
  uint *local_98;
  undefined8 *local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar7 = *(longlong *)this;
  if (*(longlong *)(lVar7 + 0x28) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar6 = *(longlong **)(lVar7 + 0x28);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6,&param_1->PageID);
  lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,*(undefined8 *)((longlong)this + 8));
  if (lVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExistingInputNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x1b55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar9 = *(int *)(lVar7 + 0x40) - 1;
  uVar5 = 0;
  if ((int)uVar9 < *(int *)(lVar7 + 0x40)) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)this;
  puVar1 = (undefined8 *)
           ((longlong)*(int *)(lVar7 + 0x40) * 0x20 + -0x10 + *(longlong *)(lVar7 + 0x38));
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar6 = *(longlong **)(lVar2 + 0x28);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))(plVar6,&param_1->PageID);
  (**(code **)(*plVar6 + 0x20))(plVar6,local_a8,*(undefined8 *)((longlong)this + 8),&local_78);
  local_88 = (param_1->PageID).A;
  uStack_84 = (param_1->PageID).B;
  uStack_80 = (param_1->PageID).C;
  uStack_7c = (param_1->PageID).D;
  this_00 = *(TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
              **)((longlong)this + 0x10);
  iVar8 = (int)local_a8[1];
  plVar6 = local_a8[0] + iVar8;
  plVar10 = local_a8[0];
  while( true ) {
    if ((int)local_a8[1] != iVar8) {
      `TCheckedPointerIterator<FMetasoundFrontendEdge_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar10 == plVar6) break;
    puVar1 = (undefined8 *)*plVar10;
    local_58 = *puVar1;
    uStack_50 = puVar1[1];
    local_48 = puVar1[2];
    uStack_40 = puVar1[3];
    local_38 = puVar1[4];
    uStack_30 = puVar1[5];
    local_28 = puVar1[6];
    uStack_20 = puVar1[7];
    local_98 = &local_68;
    local_90 = &local_58;
    local_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_&&,FMetasoundFrontendEdge_&&>_>
              (this_00,(TPairInitializer<FGuid_&&,FMetasoundFrontendEdge_&&> *)(local_res8 + 8),
               (bool *)&local_98);
    plVar10 = plVar10 + 1;
  }
  if (local_a8[0] != (longlong *)0x0) {
    FMemory::Free(local_a8[0]);
  }
  return;
}

// operator() @ 14ade1180

void __thiscall
`FMetaSoundFrontendDocumentBuilder::SwapGraphOutput'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
  *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 local_res8 [16];
  longlong *local_a8 [2];
  uint *local_98;
  undefined8 *local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar7 = *(longlong *)this;
  if (*(longlong *)(lVar7 + 0x28) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar6 = *(longlong **)(lVar7 + 0x28);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6,&param_1->PageID);
  lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,*(undefined8 *)((longlong)this + 8));
  if (lVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExistingOutputNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x1bbb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar9 = *(int *)(lVar7 + 0x30) - 1;
  uVar5 = 0;
  if ((int)uVar9 < *(int *)(lVar7 + 0x30)) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)this;
  puVar1 = (undefined8 *)
           ((longlong)*(int *)(lVar7 + 0x30) * 0x20 + -0x10 + *(longlong *)(lVar7 + 0x28));
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar6 = *(longlong **)(lVar2 + 0x28);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))(plVar6,&param_1->PageID);
  (**(code **)(*plVar6 + 0x20))(plVar6,local_a8,*(undefined8 *)((longlong)this + 8),&local_78);
  local_88 = (param_1->PageID).A;
  uStack_84 = (param_1->PageID).B;
  uStack_80 = (param_1->PageID).C;
  uStack_7c = (param_1->PageID).D;
  this_00 = *(TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
              **)((longlong)this + 0x10);
  iVar8 = (int)local_a8[1];
  plVar6 = local_a8[0] + iVar8;
  plVar10 = local_a8[0];
  while( true ) {
    if ((int)local_a8[1] != iVar8) {
      `TCheckedPointerIterator<FMetasoundFrontendEdge_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar10 == plVar6) break;
    puVar1 = (undefined8 *)*plVar10;
    local_58 = *puVar1;
    uStack_50 = puVar1[1];
    local_48 = puVar1[2];
    uStack_40 = puVar1[3];
    local_38 = puVar1[4];
    uStack_30 = puVar1[5];
    local_28 = puVar1[6];
    uStack_20 = puVar1[7];
    local_98 = &local_68;
    local_90 = &local_58;
    local_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_&&,FMetasoundFrontendEdge_&&>_>
              (this_00,(TPairInitializer<FGuid_&&,FMetasoundFrontendEdge_&&> *)(local_res8 + 8),
               (bool *)&local_98);
    plVar10 = plVar10 + 1;
  }
  if (local_a8[0] != (longlong *)0x0) {
    FMemory::Free(local_a8[0]);
  }
  return;
}

// operator() @ 14ade1910

void __thiscall
`FMetaSoundFrontendDocumentBuilder::IterateNodesByPredicate'::__l5::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  iVar1 = (param_1->Nodes).ArrayNum;
  pFVar7 = (param_1->Nodes).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((param_1->Nodes).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendNode,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    cVar4 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],pFVar7);
    if (cVar4 != '\0') {
      lVar6 = *(longlong *)((longlong)this + 8);
      if (*(longlong *)(lVar6 + 0x28) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)(lVar6 + 0x28);
      lVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,pFVar7 + 0x10);
      if (lVar6 != 0) {
        (*(code *)**(undefined8 **)((longlong)this + 0x10))
                  ((*(undefined8 **)((longlong)this + 0x10))[1],lVar6,pFVar7,&param_1->PageID);
      }
    }
    pFVar7 = pFVar7 + 0x88;
  }
  return;
}

// operator() @ 14ade1a00

void __thiscall
`FMetaSoundFrontendDocumentBuilder::RemoveDependency'::__l5::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined8 *local_28 [2];
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar6 = *(longlong **)(lVar3 + 0x28);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6,&param_1->PageID);
  (**(code **)(*plVar6 + 0x20))(plVar6,local_28,*(undefined8 *)((longlong)this + 0x10));
  iVar7 = (int)local_28[1];
  puVar1 = local_28[0] + iVar7;
  puVar8 = local_28[0];
  while( true ) {
    if ((int)local_28[1] != iVar7) {
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar8 == puVar1) break;
    bVar2 = **(byte **)((longlong)this + 8);
    bVar5 = FMetaSoundFrontendDocumentBuilder::RemoveNode
                      (*(FMetaSoundFrontendDocumentBuilder **)this,(FGuid *)*puVar8,&param_1->PageID
                      );
    puVar8 = puVar8 + 1;
    **(byte **)((longlong)this + 8) = bVar5 & bVar2;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return;
}

// operator() @ 14ade1b10

void __thiscall
`FMetaSoundFrontendDocumentBuilder::RemoveDependency'::__l5::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined8 *local_28 [2];
  
  lVar4 = *(longlong *)this;
  if (*(longlong *)(lVar4 + 0x28) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  plVar5 = *(longlong **)(lVar4 + 0x28);
  plVar9 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,&param_1->PageID);
  plVar5 = *(longlong **)((longlong)this + 0x10);
  pcVar6 = *(code **)(*plVar9 + 0x20);
  uVar3 = **(uint **)((longlong)this + 0x18);
  uVar8 = 0;
  if ((int)uVar3 < (int)plVar5[1]) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (*pcVar6)(plVar9,local_28,*plVar5 + 8 + (longlong)(int)uVar3 * 0x90);
  iVar10 = (int)local_28[1];
  puVar1 = local_28[0] + iVar10;
  puVar11 = local_28[0];
  while( true ) {
    if ((int)local_28[1] != iVar10) {
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar11 == puVar1) break;
    bVar2 = **(byte **)((longlong)this + 8);
    bVar7 = FMetaSoundFrontendDocumentBuilder::RemoveNode
                      (*(FMetaSoundFrontendDocumentBuilder **)this,(FGuid *)*puVar11,
                       &param_1->PageID);
    puVar11 = puVar11 + 1;
    **(byte **)((longlong)this + 8) = bVar7 & bVar2;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return;
}

// operator() @ 14ade1c60

void __thiscall
`FMetaSoundFrontendDocumentBuilder::RemoveGraphInput'::__l5::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ForAnyElementType FVar11;
  FGuid *pFVar12;
  FGuid *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_68;
  uint local_60;
  uint local_5c;
  FGuid local_58;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  int iStack_2c;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)**(undefined8 **)this;
  local_48._8_8_ = (*(undefined8 **)this)[1];
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_68,1,(int *)&local_5c);
  pFVar13 = &param_1->PageID;
  local_38 = local_48.AllocatorInstance.Data;
  iStack_30 = local_48.ArrayNum;
  iStack_2c = local_48.ArrayMax;
  *(FScriptContainerElement **)local_68.Data = local_48.AllocatorInstance.Data;
  *(undefined8 *)(local_68.Data + 8) = local_48._8_8_;
  lVar8 = *(longlong *)((longlong)this + 8);
  uVar2 = *(undefined8 *)this;
  pFVar12 = pFVar13;
  if (pFVar13 == (FGuid *)0x0) {
    pFVar12 = (FGuid *)(lVar8 + 0x18);
  }
  if ((*(longlong *)(lVar8 + 0x28) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar7 = (longlong *)
           (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x40))(*(longlong **)(lVar8 + 0x28),pFVar12)
  ;
  lVar8 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar2);
  if (lVar8 == 0) {
    **(undefined1 **)((longlong)this + 0x18) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar8 + 0x18);
    puVar3 = *(undefined8 **)((longlong)this + 0x10);
    *puVar3 = *(undefined8 *)(lVar8 + 0x10);
    puVar3[1] = uVar2;
    if (**(char **)((longlong)this + 0x20) != '\0') {
      FMetaSoundFrontendDocumentBuilder::GetGraphInputTemplateNodes
                (*(FMetaSoundFrontendDocumentBuilder **)((longlong)this + 8),&local_48,
                 **(FName **)((longlong)this + 0x28),pFVar13);
      iVar10 = local_48.ArrayNum;
      pFVar1 = local_48.AllocatorInstance.Data + (longlong)iVar10 * 8;
      FVar11.Data = local_48.AllocatorInstance.Data;
      while( true ) {
        if (local_48.ArrayNum != iVar10) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FMetasoundFrontendNode_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar11.Data == pFVar1) break;
        local_58._0_8_ = **(undefined8 **)FVar11.Data;
        local_58._8_8_ = (*(undefined8 **)FVar11.Data)[1];
        if (((local_68.Data <= &local_58) &&
            (&local_58 < (FGuid *)(local_68.Data + (longlong)(int)local_5c * 0x10))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_60 == local_5c) {
          local_60 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&local_68,(int *)&local_5c);
        }
        FVar11.Data = FVar11.Data + 8;
        *(undefined8 *)(local_68.Data + (longlong)(int)local_60 * 0x10) = local_58._0_8_;
        *(undefined8 *)(local_68.Data + (longlong)(int)local_60 * 0x10 + 8) = local_58._8_8_;
        local_60 = local_60 + 1;
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
    uVar5 = local_60;
    uVar9 = (ulonglong)(int)local_60;
    pFVar12 = (FGuid *)(local_68.Data + uVar9 * 0x10);
    FVar11.Data = local_68.Data;
    while( true ) {
      if ((uint)uVar9 != uVar5) {
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if ((FGuid *)FVar11.Data == pFVar12) break;
      bVar6 = FMetaSoundFrontendDocumentBuilder::RemoveNode
                        (*(FMetaSoundFrontendDocumentBuilder **)((longlong)this + 8),
                         (FGuid *)FVar11.Data,pFVar13);
      if (!bVar6) {
        **(undefined1 **)((longlong)this + 0x18) = 0;
      }
      uVar9 = (ulonglong)local_60;
      FVar11.Data = FVar11.Data + 0x10;
    }
  }
  if ((FGuid *)local_68.Data != (FGuid *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// operator() @ 14ade1ee0

void __thiscall
`FMetaSoundFrontendDocumentBuilder::ConformGraphInputNodeToClass'::__l11::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FMetasoundFrontendVertexLiteral *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  uint *puVar12;
  FGraphModifyDelegates *pFVar13;
  FMetasoundFrontendNode *pFVar14;
  FMetasoundFrontendNode local_a8;
  
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar2 + 0x28) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar11 = *(longlong **)(lVar2 + 0x28);
  plVar11 = (longlong *)(**(code **)(*plVar11 + 0x40))(plVar11,&param_1->PageID);
  puVar12 = (uint *)(**(code **)(*plVar11 + 0x18))
                              (plVar11,*(longlong *)((longlong)this + 0x18) + 0x20);
  if (puVar12 != (uint *)0x0) {
    uVar9 = *puVar12;
    uVar8 = 0;
    if ((int)uVar9 < (param_1->Nodes).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar2 = *(longlong *)this;
    pFVar3 = (param_1->Nodes).AllocatorInstance.Data;
    if ((*(longlong *)(lVar2 + 0x38) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar13 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                        (*(FDocumentModifyDelegates **)(lVar2 + 0x38),&param_1->PageID);
    uVar8 = *puVar12;
    TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy>::Broadcast
              (&(pFVar13->NodeDelegates).OnRemoveSwappingNode,uVar8,(param_1->Nodes).ArrayNum + -1);
    FMetasoundFrontendNode::FMetasoundFrontendNode
              (&local_a8,(FMetasoundFrontendNode *)(pFVar3 + (longlong)(int)uVar9 * 0x88));
    uVar9 = 0;
    if ((int)uVar8 < (param_1->Nodes).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TArray<FMetasoundFrontendNode,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&param_1->Nodes,uVar8);
    local_a8.ClassID._0_8_ = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + 8);
    local_a8.ClassID._8_8_ = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + 0x10);
    uVar4 = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 8);
    uVar9 = 0;
    if ((int)(local_a8.Interface.Inputs.ArrayNum - 1U) < local_a8.Interface.Inputs.ArrayNum) {
      uVar9 = ~(local_a8.Interface.Inputs.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined8 *)
     (local_a8.Interface.Inputs.AllocatorInstance.Data +
     (longlong)(local_a8.Interface.Inputs.ArrayNum + -1) * 0x20 + 8) = uVar4;
    uVar4 = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 8);
    uVar9 = 0;
    if ((int)(local_a8.Interface.Outputs.ArrayNum - 1U) < local_a8.Interface.Outputs.ArrayNum) {
      uVar9 = ~(local_a8.Interface.Outputs.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined8 *)
     (local_a8.Interface.Outputs.AllocatorInstance.Data +
     (longlong)(local_a8.Interface.Outputs.ArrayNum + -1) * 0x20 + 8) = uVar4;
    Metasound::Frontend::DocumentBuilderPrivate::SetDefaultLiteralOnInputNode
              (&local_a8,*(FMetasoundFrontendClassInput **)((longlong)this + 0x18),&param_1->PageID)
    ;
    pFVar14 = (FMetasoundFrontendNode *)(param_1->Nodes).AllocatorInstance.Data;
    if (((pFVar14 <= &local_a8) && (&local_a8 < pFVar14 + (param_1->Nodes).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (param_1->Nodes).ArrayNum;
    piVar1 = &(param_1->Nodes).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x888,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Nodes).ArrayNum = iVar10 + 1;
    pFVar14 = FMetasoundFrontendNode::FMetasoundFrontendNode
                        ((FMetasoundFrontendNode *)
                         ((param_1->Nodes).AllocatorInstance.Data + (longlong)iVar10 * 0x88),
                         &local_a8);
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&(pFVar13->NodeDelegates).OnNodeAdded,(param_1->Nodes).ArrayNum + -1);
    piVar1 = &(pFVar14->InputLiterals).ArrayMax;
    pFVar5 = (FMetasoundFrontendVertexLiteral *)(pFVar14->InputLiterals).AllocatorInstance.Data;
    iVar10 = (pFVar14->InputLiterals).ArrayNum;
    if ((pFVar14->InputLiterals).ArrayMax < 0) {
      DestructItems<FMetasoundFrontendVertexLiteral,int>(pFVar5,iVar10);
      (pFVar14->InputLiterals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,&(pFVar14->InputLiterals).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FMetasoundFrontendVertexLiteral,int>(pFVar5,iVar10);
      (pFVar14->InputLiterals).ArrayNum = 0;
    }
    FInstancedStruct::Reset(&local_a8.ClassInterfaceOverride.InstancedStruct);
    FInstancedStruct::Reset(&local_a8.Configuration.InstancedStruct);
    DestructItems<FMetasoundFrontendVertexLiteral,int>
              ((FMetasoundFrontendVertexLiteral *)local_a8.InputLiterals.AllocatorInstance.Data,
               local_a8.InputLiterals.ArrayNum);
    if ((FMetasoundFrontendVertexLiteral *)local_a8.InputLiterals.AllocatorInstance.Data !=
        (FMetasoundFrontendVertexLiteral *)0x0) {
      FMemory::Free(local_a8.InputLiterals.AllocatorInstance.Data);
    }
    if (local_a8.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Interface.Environment.AllocatorInstance.Data);
    }
    if (local_a8.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Interface.Outputs.AllocatorInstance.Data);
    }
    if (local_a8.Interface.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Interface.Inputs.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14ade2330

void __thiscall
`FMetaSoundFrontendDocumentBuilder::ConformGraphOutputNodeToClass'::__l11::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FMetasoundFrontendNode *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  uint *puVar12;
  FGraphModifyDelegates *pFVar13;
  FMetasoundFrontendNode local_b8;
  
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar2 + 0x28) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar11 = *(longlong **)(lVar2 + 0x28);
  plVar11 = (longlong *)(**(code **)(*plVar11 + 0x40))(plVar11,&param_1->PageID);
  puVar12 = (uint *)(**(code **)(*plVar11 + 0x18))
                              (plVar11,*(longlong *)((longlong)this + 0x18) + 0x20);
  if (puVar12 != (uint *)0x0) {
    uVar9 = *puVar12;
    uVar8 = 0;
    if ((int)uVar9 < (param_1->Nodes).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar2 = *(longlong *)this;
    pFVar3 = (param_1->Nodes).AllocatorInstance.Data;
    if ((*(longlong *)(lVar2 + 0x38) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar13 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                        (*(FDocumentModifyDelegates **)(lVar2 + 0x38),&param_1->PageID);
    uVar8 = *puVar12;
    TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy>::Broadcast
              (&(pFVar13->NodeDelegates).OnRemoveSwappingNode,uVar8,(param_1->Nodes).ArrayNum + -1);
    FMetasoundFrontendNode::FMetasoundFrontendNode
              (&local_b8,(FMetasoundFrontendNode *)(pFVar3 + (longlong)(int)uVar9 * 0x88));
    uVar9 = 0;
    if ((int)uVar8 < (param_1->Nodes).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TArray<FMetasoundFrontendNode,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&param_1->Nodes,uVar8);
    local_b8.ClassID._0_8_ = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + 8);
    local_b8.ClassID._8_8_ = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + 0x10);
    uVar4 = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 8);
    uVar9 = 0;
    if ((int)(local_b8.Interface.Inputs.ArrayNum - 1U) < local_b8.Interface.Inputs.ArrayNum) {
      uVar9 = ~(local_b8.Interface.Inputs.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined8 *)
     (local_b8.Interface.Inputs.AllocatorInstance.Data +
     (longlong)(local_b8.Interface.Inputs.ArrayNum + -1) * 0x20 + 8) = uVar4;
    uVar4 = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 8);
    uVar9 = 0;
    if ((int)(local_b8.Interface.Outputs.ArrayNum - 1U) < local_b8.Interface.Outputs.ArrayNum) {
      uVar9 = ~(local_b8.Interface.Outputs.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined8 *)
     (local_b8.Interface.Outputs.AllocatorInstance.Data +
     (longlong)(local_b8.Interface.Outputs.ArrayNum + -1) * 0x20 + 8) = uVar4;
    pFVar5 = (FMetasoundFrontendNode *)(param_1->Nodes).AllocatorInstance.Data;
    if (((pFVar5 <= &local_b8) && (&local_b8 < pFVar5 + (param_1->Nodes).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (param_1->Nodes).ArrayNum;
    piVar1 = &(param_1->Nodes).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x888,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Nodes).ArrayNum = iVar10 + 1;
    FMetasoundFrontendNode::FMetasoundFrontendNode
              ((FMetasoundFrontendNode *)
               ((param_1->Nodes).AllocatorInstance.Data + (longlong)iVar10 * 0x88),&local_b8);
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&(pFVar13->NodeDelegates).OnNodeAdded,(param_1->Nodes).ArrayNum + -1);
    FInstancedStruct::Reset(&local_b8.ClassInterfaceOverride.InstancedStruct);
    FInstancedStruct::Reset(&local_b8.Configuration.InstancedStruct);
    DestructItems<FMetasoundFrontendVertexLiteral,int>
              ((FMetasoundFrontendVertexLiteral *)local_b8.InputLiterals.AllocatorInstance.Data,
               local_b8.InputLiterals.ArrayNum);
    if ((FMetasoundFrontendVertexLiteral *)local_b8.InputLiterals.AllocatorInstance.Data !=
        (FMetasoundFrontendVertexLiteral *)0x0) {
      FMemory::Free(local_b8.InputLiterals.AllocatorInstance.Data);
    }
    if (local_b8.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Interface.Environment.AllocatorInstance.Data);
    }
    if (local_b8.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Interface.Outputs.AllocatorInstance.Data);
    }
    if (local_b8.Interface.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Interface.Inputs.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14ade2720

void __thiscall
`FMetaSoundFrontendDocumentBuilder::SetGraphInputDataType'::__l11::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  code *local_58;
  FMetaSoundFrontendDocumentBuilder **local_50;
  FMetaSoundFrontendDocumentBuilder *local_48;
  FMetasoundFrontendGraph *local_40;
  undefined8 local_38;
  FMetasoundFrontendVertexHandle local_30;
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar7 = *(longlong **)(lVar3 + 0x28);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,&param_1->PageID);
  puVar8 = (uint *)(**(code **)(*plVar7 + 0x18))(plVar7,*(longlong *)((longlong)this + 0x10) + 0x20)
  ;
  if (puVar8 != (uint *)0x0) {
    uVar2 = *puVar8;
    uVar9 = 0;
    if ((int)uVar2 < (param_1->Nodes).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (param_1->Nodes).AllocatorInstance.Data;
    uVar10 = *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x40) - 1;
    uVar9 = 0;
    if ((int)uVar10 < *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x40)) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_38 = *(undefined8 *)((longlong)this + 8);
    local_48 = *(FMetaSoundFrontendDocumentBuilder **)this;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<``FMetaSoundFrontendDocumentBuilder::SetGraphInputDataType'::__l11::<lambda_1>::operator()'::__l5::<lambda_1>,void,FMetasoundFrontendEdge_const_&,FMetasoundFrontendNode_&>
               ::Call;
    local_30.NodeID._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x20);
    local_30.NodeID._8_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x28);
    puVar1 = (undefined8 *)
             ((longlong)*(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x40) * 0x20 + -0x10 +
             *(longlong *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x38));
    local_30.VertexID._0_8_ = *puVar1;
    local_30.VertexID._8_8_ = puVar1[1];
    local_40 = param_1;
    FMetaSoundFrontendDocumentBuilder::IterateNodesConnectedWithVertex
              (local_48,&local_30,
               (TFunctionRef<void___cdecl(FMetasoundFrontendEdge_const_&,FMetasoundFrontendNode_&)>
                *)&local_58,&param_1->PageID);
  }
  return;
}

// operator() @ 14ade28d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMetaSoundFrontendDocumentBuilder::SetGraphOutputDataType'::__l11::<lambda_1>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  uint *puVar7;
  IDataTypeRegistry *pIVar8;
  FLiteral *pFVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  FMetasoundFrontendLiteral local_118;
  FMetasoundFrontendVertexLiteral local_b8;
  undefined1 local_48 [16];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar10 = *(longlong *)this;
  if (*(longlong *)(lVar10 + 0x28) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar6 = *(longlong **)(lVar10 + 0x28);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6,&param_1->PageID);
  puVar7 = (uint *)(**(code **)(*plVar6 + 0x18))(plVar6,*(longlong *)((longlong)this + 8) + 0x20);
  if (puVar7 != (uint *)0x0) {
    uVar5 = *puVar7;
    lVar10 = (longlong)(int)uVar5;
    iVar1 = (param_1->Nodes).ArrayNum;
    uVar12 = 0;
    if ((int)uVar5 < iVar1) {
      uVar12 = ~uVar5 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_128 = lVar10;
      local_120 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_118.Type = None;
    pFVar2 = (param_1->Nodes).AllocatorInstance.Data;
    local_118.AsNumDefault = 0;
    local_118.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AsBoolean.ArrayNum = 0;
    local_118.AsBoolean.ArrayMax = 0;
    local_118.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AsInteger.ArrayNum = 0;
    local_118.AsInteger.ArrayMax = 0;
    local_118.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AsFloat.ArrayNum = 0;
    local_118.AsFloat.ArrayMax = 0;
    local_118.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AsString.ArrayNum = 0;
    local_118.AsString.ArrayMax = 0;
    local_118.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AsUObject.ArrayNum = 0;
    local_118.AsUObject.ArrayMax = 0;
    pIVar8 = Metasound::Frontend::IDataTypeRegistry::Get();
    pFVar9 = (FLiteral *)
             (**(code **)((longlong)*pIVar8 + 0x80))
                       (pIVar8,local_48,*(undefined8 *)((longlong)this + 0x10));
    FMetasoundFrontendLiteral::SetFromLiteral(&local_118,pFVar9);
    if (0xc < local_38) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38])(local_48);
    iVar1 = *(int *)(pFVar2 + lVar10 * 0x88 + 0x30);
    uVar12 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar12 < iVar1) {
      uVar5 = ~uVar12 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_128 = (longlong)(int)uVar12;
      local_120 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_b8.Value.Type = local_118.Type;
    local_b8.Value.AsNumDefault = local_118.AsNumDefault;
    local_b8.Value.AsBoolean.AllocatorInstance.Data = local_118.AsBoolean.AllocatorInstance.Data;
    local_b8.Value.AsBoolean.ArrayNum = local_118.AsBoolean.ArrayNum;
    local_b8.Value.AsBoolean.ArrayMax = local_118.AsBoolean.ArrayMax;
    local_b8.Value.AsInteger.AllocatorInstance.Data = local_118.AsInteger.AllocatorInstance.Data;
    local_b8.Value.AsInteger.ArrayNum = local_118.AsInteger.ArrayNum;
    local_b8.Value.AsInteger.ArrayMax = local_118.AsInteger.ArrayMax;
    local_b8.Value.AsFloat.AllocatorInstance.Data = local_118.AsFloat.AllocatorInstance.Data;
    local_b8.Value.AsFloat.ArrayNum = local_118.AsFloat.ArrayNum;
    local_b8.Value.AsFloat.ArrayMax = local_118.AsFloat.ArrayMax;
    local_b8.Value.AsString.AllocatorInstance.Data = local_118.AsString.AllocatorInstance.Data;
    local_b8.Value.AsString.ArrayNum = local_118.AsString.ArrayNum;
    local_b8.Value.AsString.ArrayMax = local_118.AsString.ArrayMax;
    local_b8.Value.AsUObject.AllocatorInstance.Data = local_118.AsUObject.AllocatorInstance.Data;
    local_b8.Value.AsUObject.ArrayNum = local_118.AsUObject.ArrayNum;
    lVar11 = (longlong)*(int *)(pFVar2 + lVar10 * 0x88 + 0x30) * 0x20 +
             *(longlong *)(pFVar2 + lVar10 * 0x88 + 0x28);
    local_b8.Value.AsUObject.ArrayMax = local_118.AsUObject.ArrayMax;
    local_b8.VertexID._0_8_ = *(undefined8 *)(lVar11 + -0x10);
    local_b8.VertexID._8_8_ = *(undefined8 *)(lVar11 + -8);
    local_118.AsUObject.ArrayNum = 0;
    local_118.AsUObject.ArrayMax = 0;
    local_118.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AsBoolean.ArrayNum = 0;
    local_118.AsBoolean.ArrayMax = 0;
    local_118.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AsInteger.ArrayNum = 0;
    local_118.AsInteger.ArrayMax = 0;
    local_118.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AsFloat.ArrayNum = 0;
    local_118.AsFloat.ArrayMax = 0;
    local_118.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AsString.ArrayNum = 0;
    local_118.AsString.ArrayMax = 0;
    local_118.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DestructItems<FMetasoundFrontendVertexLiteral,int>
              (*(FMetasoundFrontendVertexLiteral **)(pFVar2 + lVar10 * 0x88 + 0x58),
               *(int *)(pFVar2 + lVar10 * 0x88 + 0x60));
    TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<FMetasoundFrontendVertexLiteral,int>
              ((TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_> *)
               (pFVar2 + lVar10 * 0x88 + 0x58),&local_b8,1,*(int *)(pFVar2 + lVar10 * 0x88 + 100));
    FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&local_b8.Value);
    FMetaSoundFrontendDocumentBuilder::RemoveEdgeToNodeInput
              (*(FMetaSoundFrontendDocumentBuilder **)this,
               (FGuid *)(*(longlong *)((longlong)this + 8) + 0x20),(FGuid *)(lVar11 + -0x10),
               &param_1->PageID);
    if (local_118.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AsUObject.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_118.AsString.AllocatorInstance.Data,local_118.AsString.ArrayNum);
    if (local_118.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AsString.AllocatorInstance.Data);
    }
    if (local_118.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AsFloat.AllocatorInstance.Data);
    }
    if (local_118.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AsInteger.AllocatorInstance.Data);
    }
    if (local_118.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AsBoolean.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14ade2c40

FNamedEdge * __thiscall
`FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeInputsToGraphInputs'::__l12::
<lambda_1>::operator()
          (void *this,FNamedEdge *__return_storage_ptr__,FMetasoundFrontendClassInput *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FNamedEdge *pFVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  pFVar8 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x40))
                              (*(longlong **)((longlong)this + 0x10),
                               (undefined8 *)((longlong)this + 0x20),param_1->_padding_);
  if (pFVar8 == (FName *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeVertex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x471,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FNamedEdge *)(*pcVar3)();
      return pFVar9;
    }
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                     (*(longlong **)((longlong)this + 0x18),param_1->_padding_);
  if (lVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x473,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FNamedEdge *)(*pcVar3)();
      return pFVar9;
    }
  }
  puVar11 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x28))
                      (*(longlong **)((longlong)this + 0x10),lVar10 + 0x20);
  if (puVar11 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x475,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FNamedEdge *)(*pcVar3)();
      return pFVar9;
    }
  }
  if (*(int *)(puVar11 + 8) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Outputs.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x477,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FNamedEdge *)(*pcVar3)();
      return pFVar9;
    }
  }
  iVar1 = *(int *)(puVar11 + 8);
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar12 = iVar1 - 1;
  (__return_storage_ptr__->OutputNodeID).A = (int)uVar4;
  (__return_storage_ptr__->OutputNodeID).B = (int)((ulonglong)uVar4 >> 0x20);
  (__return_storage_ptr__->OutputNodeID).C = (int)uVar5;
  (__return_storage_ptr__->OutputNodeID).D = (int)((ulonglong)uVar5 >> 0x20);
  uVar7 = 0;
  if ((int)uVar12 < iVar1) {
    uVar7 = ~uVar12 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FNamedEdge *)(*pcVar3)();
      return pFVar9;
    }
  }
  lVar10 = puVar11[7];
  iVar1 = *(int *)(puVar11 + 8);
  uVar4 = *(undefined8 *)((longlong)this + 0x20);
  uVar5 = *(undefined8 *)((longlong)this + 0x28);
  (__return_storage_ptr__->InputNodeID).A = (int)uVar4;
  (__return_storage_ptr__->InputNodeID).B = (int)((ulonglong)uVar4 >> 0x20);
  (__return_storage_ptr__->InputNodeID).C = (int)uVar5;
  (__return_storage_ptr__->InputNodeID).D = (int)((ulonglong)uVar5 >> 0x20);
  FVar2 = *(FName *)((longlong)iVar1 * 0x20 + -0x20 + lVar10);
  __return_storage_ptr__->InputName = *pFVar8;
  __return_storage_ptr__->OutputName = FVar2;
  return __return_storage_ptr__;
}

// operator() @ 14ade2df0

FNamedEdge * __thiscall
`FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeOutputsToGraphOutputs'::__l12::
<lambda_1>::operator()
          (void *this,FNamedEdge *__return_storage_ptr__,FMetasoundFrontendClassOutput *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FMetasoundFrontendDocument *pFVar7;
  FName *pFVar8;
  FNamedEdge *pFVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  pFVar7 = FMetaSoundFrontendDocumentBuilder::GetDocumentChecked
                     (*(FMetaSoundFrontendDocumentBuilder **)this);
  FMetasoundFrontendGraphClass::FindConstGraphChecked
            (&pFVar7->RootGraph,*(FGuid **)((longlong)this + 0x18));
  pFVar8 = (FName *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x50))
                              (*(longlong **)((longlong)this + 8),
                               (undefined8 *)((longlong)this + 0x20),*(undefined8 *)param_1);
  if (pFVar8 == (FName *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeVertex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x443,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FNamedEdge *)(*pcVar2)();
      return pFVar9;
    }
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                     (*(longlong **)((longlong)this + 0x10),*(undefined8 *)param_1);
  if (lVar10 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x445,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FNamedEdge *)(*pcVar2)();
      return pFVar9;
    }
  }
  puVar11 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)this + 8) + 0x28))
                      (*(longlong **)((longlong)this + 8),lVar10 + 0x20);
  if (puVar11 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x447,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FNamedEdge *)(*pcVar2)();
      return pFVar9;
    }
  }
  if (*(int *)(puVar11 + 6) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Inputs.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x449,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FNamedEdge *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar1 = *(int *)(puVar11 + 6);
  uVar3 = *(undefined8 *)((longlong)this + 0x20);
  uVar4 = *(undefined8 *)((longlong)this + 0x28);
  __return_storage_ptr__->OutputName = *pFVar8;
  uVar12 = iVar1 - 1;
  (__return_storage_ptr__->OutputNodeID).A = (int)uVar3;
  (__return_storage_ptr__->OutputNodeID).B = (int)((ulonglong)uVar3 >> 0x20);
  (__return_storage_ptr__->OutputNodeID).C = (int)uVar4;
  (__return_storage_ptr__->OutputNodeID).D = (int)((ulonglong)uVar4 >> 0x20);
  uVar6 = 0;
  if ((int)uVar12 < iVar1) {
    uVar6 = ~uVar12 >> 0x1f;
  }
  uVar3 = *puVar11;
  uVar4 = puVar11[1];
  (__return_storage_ptr__->InputNodeID).A = (int)uVar3;
  (__return_storage_ptr__->InputNodeID).B = (int)((ulonglong)uVar3 >> 0x20);
  (__return_storage_ptr__->InputNodeID).C = (int)uVar4;
  (__return_storage_ptr__->InputNodeID).D = (int)((ulonglong)uVar4 >> 0x20);
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FNamedEdge *)(*pcVar2)();
      return pFVar9;
    }
  }
  __return_storage_ptr__->InputName =
       *(FName *)((longlong)*(int *)(puVar11 + 6) * 0x20 + -0x20 + puVar11[5]);
  return __return_storage_ptr__;
}

// operator() @ 14ade30e0

void __thiscall
`FMetaSoundFrontendDocumentBuilder::AddGraphInput'::__l2::<lambda_2>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  FMetasoundFrontendVertexLiteral *pFVar4;
  FMetasoundFrontendNode *pFVar5;
  code *local_28 [2];
  FGuid local_18;
  
  local_28[1] = *(code **)((longlong)this + 0x10);
  local_28[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddGraphInput'::__l2::<lambda_1>,void,FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&>
                ::Call;
  local_18._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x20);
  local_18._8_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x28);
  pFVar5 = FMetaSoundFrontendDocumentBuilder::AddNodeInternal
                     (*(FMetaSoundFrontendDocumentBuilder **)this,
                      *(FNodeClassRegistryKey **)((longlong)this + 8),
                      (TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
                       *)local_28,&param_1->PageID,&local_18,(int *)0x0);
  puVar3 = *(uint **)((longlong)this + 0x20);
  if (((puVar3[3] == (param_1->PageID).D && puVar3[2] == (param_1->PageID).C) &&
      puVar3[1] == (param_1->PageID).B) && (param_1->PageID).A == *puVar3) {
    **(undefined8 **)((longlong)this + 0x28) = pFVar5;
  }
  pFVar4 = (FMetasoundFrontendVertexLiteral *)(pFVar5->InputLiterals).AllocatorInstance.Data;
  piVar1 = &(pFVar5->InputLiterals).ArrayMax;
  iVar2 = (pFVar5->InputLiterals).ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<FMetasoundFrontendVertexLiteral,int>(pFVar4,iVar2);
    (pFVar5->InputLiterals).ArrayNum = 0;
    return;
  }
  DestructItems<FMetasoundFrontendVertexLiteral,int>(pFVar4,iVar2);
  (pFVar5->InputLiterals).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(pFVar5->InputLiterals).AllocatorInstance,0,piVar1);
  }
  return;
}

// operator() @ 14ade31e0

void __thiscall
`FMetaSoundFrontendDocumentBuilder::AddGraphOutput'::__l2::<lambda_2>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  uint *puVar1;
  FMetasoundFrontendNode *pFVar2;
  code *local_28 [2];
  FGuid local_18;
  
  local_28[1] = *(code **)((longlong)this + 0x10);
  local_28[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddGraphOutput'::__l2::<lambda_1>,void,FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&>
                ::Call;
  local_18._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x20);
  local_18._8_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x28);
  pFVar2 = FMetaSoundFrontendDocumentBuilder::AddNodeInternal
                     (*(FMetaSoundFrontendDocumentBuilder **)this,
                      *(FNodeClassRegistryKey **)((longlong)this + 8),
                      (TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
                       *)local_28,&param_1->PageID,&local_18,(int *)0x0);
  puVar1 = *(uint **)((longlong)this + 0x20);
  if (((puVar1[3] == (param_1->PageID).D && puVar1[2] == (param_1->PageID).C) &&
      puVar1[1] == (param_1->PageID).B) && (param_1->PageID).A == *puVar1) {
    **(undefined8 **)((longlong)this + 0x28) = pFVar2;
  }
  **(byte **)((longlong)this + 0x30) =
       **(byte **)((longlong)this + 0x30) & pFVar2 != (FMetasoundFrontendNode *)0x0;
  return;
}

// operator() @ 14ade3290

bool __thiscall
`FMetaSoundFrontendDocumentBuilder::ReplaceDependency'::__l2::<lambda_2>::operator()
          (void *this,FMetasoundFrontendNode *param_1)

{
  longlong *plVar1;
  EMetasoundFrontendClassType *pEVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FNodeClassRegistryKey local_38;
  
  lVar6 = *(longlong *)this;
  if (*(longlong *)(lVar6 + 0x28) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  plVar1 = *(longlong **)(lVar6 + 0x28);
  lVar6 = (**(code **)(*plVar1 + 0x18))(plVar1,&param_1->ClassID);
  if (lVar6 != 0) {
    Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
              (&local_38,(FMetasoundFrontendClassMetadata *)(lVar6 + 0x18));
    pEVar2 = *(EMetasoundFrontendClassType **)((longlong)this + 8);
    if ((((local_38.Type == *pEVar2) && (local_38.ClassName.Namespace == *(FName *)(pEVar2 + 4))) &&
        (local_38.ClassName.Name == *(FName *)(pEVar2 + 0xc))) &&
       (((local_38.ClassName.Variant == *(FName *)(pEVar2 + 0x14) &&
         (local_38.Version.Major == *(undefined4 *)(pEVar2 + 0x1c))) &&
        (local_38.Version.Minor == *(undefined4 *)(pEVar2 + 0x20))))) {
      return true;
    }
  }
  return false;
}

// operator() @ 14ade3360

void __thiscall
`FMetaSoundFrontendDocumentBuilder::SwapGraphInput'::__l2::<lambda_2>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> local_68;
  FMetasoundFrontendEdge local_58;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TMultiMap<FGuid,FMetasoundFrontendEdge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>
            (*(TMultiMap<FGuid,FMetasoundFrontendEdge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>_>
               **)this,&param_1->PageID,&local_68,false);
  iVar1 = local_68.ArrayNum;
  uVar2 = (ulonglong)local_68.ArrayNum;
  pFVar4 = local_68.AllocatorInstance.Data + uVar2 * 0x40;
  FVar3.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar2 != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendEdge,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar3.Data == pFVar4) break;
    local_58.ToNodeID._0_8_ = *(undefined8 *)(FVar3.Data + 0x20);
    local_58.ToNodeID._8_8_ = *(undefined8 *)(FVar3.Data + 0x28);
    local_58.ToVertexID._0_8_ = *(undefined8 *)(FVar3.Data + 0x30);
    local_58.ToVertexID._8_8_ = *(undefined8 *)(FVar3.Data + 0x38);
    local_58.FromNodeID._0_8_ = **(undefined8 **)((longlong)this + 8);
    local_58.FromNodeID._8_8_ = (*(undefined8 **)((longlong)this + 8))[1];
    local_58.FromVertexID._0_8_ = **(undefined8 **)((longlong)this + 0x10);
    local_58.FromVertexID._8_8_ = (*(undefined8 **)((longlong)this + 0x10))[1];
    FMetaSoundFrontendDocumentBuilder::AddEdge
              (*(FMetaSoundFrontendDocumentBuilder **)((longlong)this + 0x18),&local_58,
               &param_1->PageID);
    uVar2 = local_68._8_8_ & 0xffffffff;
    FVar3.Data = FVar3.Data + 0x40;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ade3450

void __thiscall
`FMetaSoundFrontendDocumentBuilder::SwapGraphOutput'::__l2::<lambda_2>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> local_68;
  FMetasoundFrontendEdge local_58;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TMultiMap<FGuid,FMetasoundFrontendEdge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>
            (*(TMultiMap<FGuid,FMetasoundFrontendEdge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>_>
               **)this,&param_1->PageID,&local_68,false);
  iVar1 = local_68.ArrayNum;
  uVar2 = (ulonglong)local_68.ArrayNum;
  pFVar4 = local_68.AllocatorInstance.Data + uVar2 * 0x40;
  FVar3.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar2 != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendEdge,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar3.Data == pFVar4) break;
    local_58.FromNodeID._0_8_ = *(undefined8 *)FVar3.Data;
    local_58.FromNodeID._8_8_ = *(undefined8 *)(FVar3.Data + 8);
    local_58.FromVertexID._0_8_ = *(undefined8 *)(FVar3.Data + 0x10);
    local_58.FromVertexID._8_8_ = *(undefined8 *)(FVar3.Data + 0x18);
    local_58.ToNodeID._0_8_ = **(undefined8 **)((longlong)this + 8);
    local_58.ToNodeID._8_8_ = (*(undefined8 **)((longlong)this + 8))[1];
    local_58.ToVertexID._0_8_ = **(undefined8 **)((longlong)this + 0x10);
    local_58.ToVertexID._8_8_ = (*(undefined8 **)((longlong)this + 0x10))[1];
    FMetaSoundFrontendDocumentBuilder::AddEdge
              (*(FMetaSoundFrontendDocumentBuilder **)((longlong)this + 0x18),&local_58,
               &param_1->PageID);
    uVar2 = local_68._8_8_ & 0xffffffff;
    FVar3.Data = FVar3.Data + 0x40;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ade3540

void __thiscall
`FMetaSoundFrontendDocumentBuilder::SetGraphInputAccessType'::__l11::<lambda_2>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  code *local_58;
  FMetaSoundFrontendDocumentBuilder **local_50;
  FMetaSoundFrontendDocumentBuilder *local_48;
  undefined8 local_40;
  FMetasoundFrontendGraph *local_38;
  undefined8 local_30;
  FMetasoundFrontendVertexHandle local_28;
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar7 = *(longlong **)(lVar3 + 0x28);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,&param_1->PageID);
  puVar8 = (uint *)(**(code **)(*plVar7 + 0x18))(plVar7,*(longlong *)((longlong)this + 0x10) + 0x20)
  ;
  if (puVar8 != (uint *)0x0) {
    uVar2 = *puVar8;
    uVar9 = 0;
    if ((int)uVar2 < (param_1->Nodes).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (param_1->Nodes).AllocatorInstance.Data;
    uVar10 = *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x40) - 1;
    uVar9 = 0;
    if ((int)uVar10 < *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x40)) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_40 = *(undefined8 *)((longlong)this + 8);
    local_48 = *(FMetaSoundFrontendDocumentBuilder **)this;
    local_30 = *(undefined8 *)((longlong)this + 0x18);
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<``FMetaSoundFrontendDocumentBuilder::SetGraphInputAccessType'::__l11::<lambda_2>::operator()'::__l5::<lambda_1>,void,FMetasoundFrontendEdge_const_&,FMetasoundFrontendNode_&>
               ::Call;
    local_28.NodeID._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x20);
    local_28.NodeID._8_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x28);
    puVar1 = (undefined8 *)
             ((longlong)*(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x40) * 0x20 + -0x10 +
             *(longlong *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x38));
    local_28.VertexID._0_8_ = *puVar1;
    local_28.VertexID._8_8_ = puVar1[1];
    local_38 = param_1;
    FMetaSoundFrontendDocumentBuilder::IterateNodesConnectedWithVertex
              (local_48,&local_28,
               (TFunctionRef<void___cdecl(FMetasoundFrontendEdge_const_&,FMetasoundFrontendNode_&)>
                *)&local_58,&param_1->PageID);
  }
  return;
}

// operator() @ 14ade3890

void __thiscall
`FMetaSoundFrontendDocumentBuilder::SetGraphOutputAccessType'::__l14::<lambda_2>::operator()
          (void *this,FMetasoundFrontendGraph *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  code *local_58;
  FMetaSoundFrontendDocumentBuilder **local_50;
  FMetaSoundFrontendDocumentBuilder *local_48;
  FMetasoundFrontendGraph *local_40;
  undefined8 local_38;
  FMetasoundFrontendVertexHandle local_30;
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar7 = *(longlong **)(lVar3 + 0x28);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,&param_1->PageID);
  puVar8 = (uint *)(**(code **)(*plVar7 + 0x18))(plVar7,*(longlong *)((longlong)this + 8) + 0x20);
  if (puVar8 != (uint *)0x0) {
    uVar2 = *puVar8;
    uVar9 = 0;
    if ((int)uVar2 < (param_1->Nodes).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (param_1->Nodes).AllocatorInstance.Data;
    uVar10 = *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x30) - 1;
    uVar9 = 0;
    if ((int)uVar10 < *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x30)) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_38 = *(undefined8 *)((longlong)this + 0x10);
    local_48 = *(FMetaSoundFrontendDocumentBuilder **)this;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<``FMetaSoundFrontendDocumentBuilder::SetGraphOutputAccessType'::__l14::<lambda_2>::operator()'::__l5::<lambda_1>,void,FMetasoundFrontendEdge_const_&,FMetasoundFrontendNode_&>
               ::Call;
    local_30.NodeID._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x20);
    local_30.NodeID._8_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x28);
    puVar1 = (undefined8 *)
             ((longlong)*(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x30) * 0x20 + -0x10 +
             *(longlong *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x28));
    local_30.VertexID._0_8_ = *puVar1;
    local_30.VertexID._8_8_ = puVar1[1];
    local_40 = param_1;
    FMetaSoundFrontendDocumentBuilder::IterateNodesConnectedWithVertex
              (local_48,&local_30,
               (TFunctionRef<void___cdecl(FMetasoundFrontendEdge_const_&,FMetasoundFrontendNode_&)>
                *)&local_58,&param_1->PageID);
  }
  return;
}

// AddAccessFlags @ 14ade8520

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
FMetaSoundFrontendDocumentBuilder::AddAccessFlags
          (FMetaSoundFrontendDocumentBuilder *this,EMetasoundFrontendClassAccessFlags param_1)

{
  FMetasoundFrontendDocument *pFVar1;
  
  pFVar1 = GetDocumentChecked(this);
  FMetasoundFrontendClassMetadata::AddAccessFlags
            ((FMetasoundFrontendClassMetadata *)&(pFVar1->RootGraph)._padding_,param_1);
  return;
}

// AddDependency @ 14ade8550

FMetasoundFrontendClass * __thiscall
FMetaSoundFrontendDocumentBuilder::AddDependency
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClass *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  FMetasoundFrontendVersionNumber FVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  ushort uVar10;
  EMetasoundFrontendClassType EVar11;
  bool bVar12;
  int iVar13;
  FMetasoundFrontendDocument *pFVar14;
  FDocumentIDGenerator *this_00;
  FGuid *pFVar15;
  FMetasoundFrontendClass *pFVar16;
  FGuid local_18;
  
  pFVar14 = GetDocumentChecked(this);
  EVar11 = FMetasoundFrontendClassMetadata::GetType(&param_1->Metadata);
  if (EVar11 == Graph) {
    (param_1->Metadata).Type = External;
  }
  this_00 = Metasound::Frontend::FDocumentIDGenerator::Get();
  pFVar15 = Metasound::Frontend::FDocumentIDGenerator::CreateClassID(this_00,&local_18,pFVar14);
  piVar1 = &(pFVar14->Dependencies).ArrayMax;
  uVar6 = pFVar15->B;
  uVar7 = pFVar15->C;
  uVar8 = pFVar15->D;
  (param_1->ID).A = pFVar15->A;
  (param_1->ID).B = uVar6;
  (param_1->ID).C = uVar7;
  (param_1->ID).D = uVar8;
  iVar13 = (pFVar14->Dependencies).ArrayNum;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x890,&(pFVar14->Dependencies).AllocatorInstance,piVar1);
  }
  pFVar2 = (pFVar14->Dependencies).AllocatorInstance.Data;
  (pFVar14->Dependencies).ArrayNum = iVar13 + 1;
  pFVar16 = (FMetasoundFrontendClass *)(pFVar2 + (longlong)iVar13 * 0x90);
  pFVar16->_padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  uVar6 = (param_1->ID).B;
  uVar7 = (param_1->ID).C;
  uVar8 = (param_1->ID).D;
  (pFVar16->ID).A = (param_1->ID).A;
  (pFVar16->ID).B = uVar6;
  (pFVar16->ID).C = uVar7;
  (pFVar16->ID).D = uVar8;
  FVar4 = (param_1->Metadata).ClassName.Name;
  (pFVar16->Metadata).ClassName.Namespace = (param_1->Metadata).ClassName.Namespace;
  (pFVar16->Metadata).ClassName.Name = FVar4;
  FVar5 = (param_1->Metadata).Version;
  (pFVar16->Metadata).ClassName.Variant = (param_1->Metadata).ClassName.Variant;
  (pFVar16->Metadata).Version = FVar5;
  uVar9 = (param_1->Metadata).field_0x21;
  uVar10 = (param_1->Metadata).AccessFlags;
  uVar6 = (param_1->Metadata).ChangeID.A;
  uVar7 = (param_1->Metadata).ChangeID.B;
  uVar8 = (param_1->Metadata).ChangeID.C;
  (pFVar16->Metadata).Type = (param_1->Metadata).Type;
  (pFVar16->Metadata).field_0x21 = uVar9;
  (pFVar16->Metadata).AccessFlags = uVar10;
  (pFVar16->Metadata).ChangeID.A = uVar6;
  (pFVar16->Metadata).ChangeID.B = uVar7;
  (pFVar16->Metadata).ChangeID.C = uVar8;
  (pFVar16->Metadata).ChangeID.D = (param_1->Metadata).ChangeID.D;
  (pFVar16->Interface).Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar16->Interface).Inputs.AllocatorInstance.Data =
       (param_1->Interface).Inputs.AllocatorInstance.Data;
  (param_1->Interface).Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar16->Interface).Inputs.ArrayNum = (param_1->Interface).Inputs.ArrayNum;
  (pFVar16->Interface).Inputs.ArrayMax = (param_1->Interface).Inputs.ArrayMax;
  (param_1->Interface).Inputs.ArrayNum = 0;
  (param_1->Interface).Inputs.ArrayMax = 0;
  (pFVar16->Interface).Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar16->Interface).Outputs.AllocatorInstance.Data =
       (param_1->Interface).Outputs.AllocatorInstance.Data;
  (param_1->Interface).Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar16->Interface).Outputs.ArrayNum = (param_1->Interface).Outputs.ArrayNum;
  (pFVar16->Interface).Outputs.ArrayMax = (param_1->Interface).Outputs.ArrayMax;
  (param_1->Interface).Outputs.ArrayNum = 0;
  (param_1->Interface).Outputs.ArrayMax = 0;
  (pFVar16->Interface).Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar16->Interface).Environment.AllocatorInstance.Data =
       (param_1->Interface).Environment.AllocatorInstance.Data;
  (param_1->Interface).Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar16->Interface).Environment.ArrayNum = (param_1->Interface).Environment.ArrayNum;
  (pFVar16->Interface).Environment.ArrayMax = (param_1->Interface).Environment.ArrayMax;
  (param_1->Interface).Environment.ArrayNum = 0;
  (param_1->Interface).Environment.ArrayMax = 0;
  uVar6 = (param_1->Interface).ChangeID.B;
  uVar7 = (param_1->Interface).ChangeID.C;
  uVar8 = (param_1->Interface).ChangeID.D;
  (pFVar16->Interface).ChangeID.A = (param_1->Interface).ChangeID.A;
  (pFVar16->Interface).ChangeID.B = uVar6;
  (pFVar16->Interface).ChangeID.C = uVar7;
  (pFVar16->Interface).ChangeID.D = uVar8;
  iVar13 = (pFVar14->Dependencies).ArrayNum;
  if ((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      pFVar16 = (FMetasoundFrontendClass *)(*pcVar3)();
      return pFVar16;
    }
  }
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&((this->DocumentDelegates).Object)->OnDependencyAdded,iVar13 + -1);
  pFVar2 = (param_1->Interface).Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->Interface).Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)(param_1->Interface).Inputs.AllocatorInstance.Data,
             (param_1->Interface).Inputs.ArrayNum);
  pFVar2 = (param_1->Interface).Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pFVar16;
}

// AddEdge @ 14ade8730

void __thiscall
FMetaSoundFrontendDocumentBuilder::AddEdge
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendEdge *param_1,FGuid *param_2)

{
  int *piVar1;
  IDocumentCache *pIVar2;
  FMetasoundFrontendEdge *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  EInvalidEdgeReason EVar9;
  int iVar10;
  longlong *plVar11;
  FMetasoundFrontendDocument *pFVar12;
  FMetasoundFrontendGraph *pFVar13;
  FGraphModifyDelegates *this_00;
  longlong lVar14;
  wchar_t *pwVar15;
  FString local_18;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar11 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x50))(pIVar2,param_2);
  cVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,&param_1->ToNodeID,&param_1->ToVertexID);
  if ((cVar8 != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EdgeCache.IsNodeInputConnected(InNewEdge.ToNodeID, InNewEdge.ToVertexID)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x388,
                         L"Failed to add edge in MetaSound Builder: Destination input already connected"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar9 = IsValidEdge(this,param_1,param_2);
  if (EVar9 != None) {
    if (EVar9 == MismatchedAccessType) {
      pwVar15 = L"Mismatched Access Type";
    }
    else if (EVar9 == MismatchedDataType) {
      pwVar15 = L"Mismatched DataType";
    }
    else if (EVar9 == MissingInput) {
      pwVar15 = L"Missing Input";
    }
    else if (EVar9 == MissingOutput) {
      pwVar15 = L"Missing Output";
    }
    else {
      pwVar15 = L"COUNT";
    }
    ::FString::FString(&local_18,pwVar15);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Reason == Metasound::Frontend::EInvalidEdgeReason::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x38b,
                       L"Attempted call to AddEdge in MetaSound Builder where edge is invalid: %s.")
    ;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar12 = GetDocumentChecked(this);
  pFVar13 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar12->RootGraph,param_2);
  pFVar3 = (FMetasoundFrontendEdge *)(pFVar13->Edges).AllocatorInstance.Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (pFVar13->Edges).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = (pFVar13->Edges).ArrayNum;
  piVar1 = &(pFVar13->Edges).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x440,&(pFVar13->Edges).AllocatorInstance,piVar1);
  }
  (pFVar13->Edges).ArrayNum = iVar10 + 1;
  uVar6 = *(undefined8 *)&(param_1->FromNodeID).C;
  pFVar4 = (pFVar13->Edges).AllocatorInstance.Data;
  lVar14 = (longlong)iVar10 * 0x40;
  *(undefined8 *)(pFVar4 + lVar14) = *(undefined8 *)&param_1->FromNodeID;
  *(undefined8 *)(pFVar4 + lVar14 + 8) = uVar6;
  uVar6 = *(undefined8 *)&(param_1->FromVertexID).C;
  *(undefined8 *)(pFVar4 + lVar14 + 0x10) = *(undefined8 *)&param_1->FromVertexID;
  *(undefined8 *)(pFVar4 + lVar14 + 0x10 + 8) = uVar6;
  uVar6 = *(undefined8 *)&(param_1->ToNodeID).C;
  *(undefined8 *)(pFVar4 + lVar14 + 0x20) = *(undefined8 *)&param_1->ToNodeID;
  *(undefined8 *)(pFVar4 + lVar14 + 0x20 + 8) = uVar6;
  uVar6 = *(undefined8 *)&(param_1->ToVertexID).C;
  *(undefined8 *)(pFVar4 + lVar14 + 0x30) = *(undefined8 *)&param_1->ToVertexID;
  *(undefined8 *)(pFVar4 + lVar14 + 0x30 + 8) = uVar6;
  iVar10 = (pFVar13->Edges).ArrayNum;
  if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                      ((this->DocumentDelegates).Object,param_2);
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)this_00,iVar10 + -1
            );
  return;
}

// AddEdgesByNodeClassInterfaceBindings @ 14ade89c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::AddEdgesByNodeClassInterfaceBindings
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,bool param_3,
          FGuid *param_4)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_4 == (FGuid *)0x0) {
    param_4 = &this->BuildPageID;
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_68 = 0xffffffff;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  bVar2 = FindNodeClassInterfaces
                    (this,param_1,
                     (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                      *)local_98,param_4);
  if (bVar2) {
    bVar2 = FindNodeClassInterfaces
                      (this,param_2,
                       (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                        *)local_e8,param_4);
    if (bVar2) {
      local_138._0_8_ = (FScriptContainerElement *)0x0;
      local_138._8_8_ = 0;
      local_118 = (void *)0x0;
      local_110 = 0;
      local_10c = 0x80;
      local_108 = 0xffffffff;
      local_104 = 0;
      local_f8 = (ForElementType<FSetElementId>)0x0;
      local_f0 = 0;
      bVar2 = Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges
                        (param_1,(TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                                  *)local_98,param_2,
                         (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                          *)local_e8,
                         (TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
                          *)local_138);
      if (bVar2) {
        bVar2 = AddNamedEdges(this,(TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
                                    *)local_138,
                              (TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *)
                              0x0,param_3,param_4);
        local_f0 = 0;
        if (local_f8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_f8);
        }
        iVar1 = SUB84(local_138._8_8_,4);
        local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
        if (iVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,4,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
        }
        local_108 = 0xffffffff;
        local_104 = 0;
        local_110 = 0;
        if (0x80 < local_10c) {
          local_10c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
        }
        if (local_118 != (void *)0x0) {
          FMemory::Free(local_118);
        }
        if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_138._0_8_);
        }
        goto LAB_14ade8c2e;
      }
      local_f0 = 0;
      if (local_f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8);
      }
      iVar1 = SUB84(local_138._8_8_,4);
      local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
      if (iVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,4,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
      }
      local_108 = 0xffffffff;
      local_104 = 0;
      local_110 = 0;
      if (0x80 < local_10c) {
        local_10c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free(local_118);
      }
      if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_138._0_8_);
      }
    }
  }
  bVar2 = false;
LAB_14ade8c2e:
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  iVar1 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return bVar2;
}

// AddEdgesFromMatchingInterfaceNodeInputsToGraphInputs @ 14ade8d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeInputsToGraphInputs
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,
          TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          FGuid *param_4)

{
  FMetasoundFrontendClassInput *pFVar1;
  ulonglong uVar2;
  IDocumentCache *pIVar3;
  code *pcVar4;
  int iVar5;
  FMetaSoundFrontendDocumentBuilder *this_00;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  FMetasoundFrontendDocument *pFVar9;
  IInterfaceRegistry *pIVar10;
  longlong *plVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  FMetasoundFrontendClassInput *pFVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStackY_2d8 [32];
  undefined1 local_2a5;
  undefined1 local_2a4 [4];
  FGuid *local_2a0;
  FMetaSoundFrontendDocumentBuilder *local_298;
  int local_290;
  undefined1 local_28c [12];
  uint uStack_280;
  FNameEntryId FStack_27c;
  FMetasoundFrontendGraph *local_278;
  uint local_270;
  uint uStack_26c;
  uint local_268;
  FNameEntryId FStack_264;
  TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *local_260;
  longlong *local_258;
  uint uStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  uint local_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  FString local_1f8;
  FMetaSoundFrontendDocumentBuilder *local_1e8;
  FMetasoundFrontendGraph *pFStack_1e0;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  FNameEntryId FStack_1cc;
  FMetaSoundFrontendDocumentBuilder *local_1b8;
  FMetasoundFrontendGraph *pFStack_1b0;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  FNameEntryId FStack_19c;
  FGuid *local_198;
  undefined8 uStack_190;
  FNamedEdge local_188;
  undefined4 local_13c;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
  local_e8;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  iVar5 = GCycleStatsShouldEmitNamedEvents;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_2a0 = param_4;
  local_298 = this;
  local_28c._4_8_ = param_1;
  local_260 = param_2;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,
               "FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeInputsToGraphInputs"
              );
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1108,
               "FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeInputsToGraphInputs"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
               ,0x454);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1108);
  }
  if (param_4 == (FGuid *)0x0) {
    param_4 = &this->BuildPageID;
    local_2a0 = param_4;
  }
  uVar16 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  bVar7 = FindNodeClassInterfaces(this,param_1,&local_98,param_4);
  if (bVar7) {
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pIVar3 = (this->DocumentCache).Object;
    _local_270 = (**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,param_4);
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    _local_268 = (**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
    pFVar9 = GetDocumentChecked(this);
    TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
    ::Intersect(&local_98,
                (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                 *)local_138,&pFVar9->Interfaces);
    local_e8.Elements._0_8_ = 0;
    local_e8.Elements._8_8_ = 0;
    local_e8.Elements._32_8_ = 0;
    local_e8.Elements._40_4_ = 0;
    local_e8.Elements._44_4_ = 0x80;
    local_e8.Elements._48_4_ = 0xffffffff;
    local_e8.Elements._52_4_ = 0;
    local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_e8.HashSize = 0;
    pFVar9 = GetDocumentChecked(this);
    local_278 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar9->RootGraph,param_4);
    uVar18 = local_110;
    uStack_24c = 1;
    local_238 = 0;
    uStack_23c = local_238;
    if (local_110 != 0) {
      puVar17 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar17 = local_118;
      }
      uVar19 = *puVar17;
      local_238 = 0;
      uVar16 = 0;
      while (uVar19 == 0) {
        lVar13 = (longlong)(int)uVar16;
        local_238 = local_238 + 0x20;
        uVar16 = uVar16 + 1;
        uStack_23c = local_110;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_14ade9060;
        uVar19 = puVar17[lVar13 + 1];
      }
      uStack_24c = -uVar19 & uVar19;
      uVar2 = (ulonglong)uStack_24c * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_290 = (int)lVar13;
      uStack_23c = local_290 + -1 + local_238;
      if ((int)local_110 < (int)uStack_23c) {
        uStack_23c = local_110;
      }
    }
LAB_14ade9060:
    local_258 = (longlong *)local_138;
    local_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    uStack_234 = local_13c;
    uVar19 = local_110 & 0xffffffe0;
    iStack_230 = local_138._8_4_ - local_104;
    uStack_240 = 0xffffffff;
    TStack_220.CurrentBitIndex = uStack_23c;
    TStack_220.UnvisitedBitMask = 0xffffffff;
    TStack_220._padding_ = CONCAT44(uStack_24c,uVar16);
    iVar14 = (int)local_110 >> 5;
    TStack_220._28_4_ = local_13c;
    TStack_220.BaseBitIndex = local_238;
    uStack_200 = CONCAT44(uStack_22c,iStack_230);
    bVar12 = (byte)local_110;
    uStack_250 = uVar16;
    local_228 = local_258;
    TStack_220.Array = local_248;
    if (((int)local_110 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    uVar6 = local_28c._4_8_;
    this_00 = local_298;
    if (uVar18 != local_110) {
      puVar17 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar17 = local_118;
      }
      uVar16 = -1 << (bVar12 & 0x1f) & puVar17[iVar14];
      while (uVar16 == 0) {
        lVar13 = (longlong)iVar14;
        uVar19 = uVar19 + 0x20;
        iVar14 = iVar14 + 1;
        uVar18 = local_110;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14ade9190;
        uVar16 = puVar17[lVar13 + 1];
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar18 = (int)lVar13 + -1 + uVar19;
      if ((int)local_110 < (int)uVar18) {
        uVar18 = local_110;
      }
    }
LAB_14ade9190:
    while( true ) {
      plVar11 = local_228;
      if ((int)local_228[1] - *(int *)((longlong)local_228 + 0x34) != (int)uStack_200) {
        `TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a5);
      }
      if (((TStack_220.CurrentBitIndex == uVar18) &&
          (TStack_220.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
         (plVar11 == (longlong *)local_138)) break;
      Metasound::Frontend::GetInterfaceRegistryKey
                (&local_1f8,
                 (FMetasoundFrontendVersion *)
                 (*plVar11 + (longlong)TStack_220.CurrentBitIndex * 0x18));
      pIVar10 = Metasound::Frontend::IInterfaceRegistry::Get();
      plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10,&local_1f8);
      if (plVar11 != (longlong *)0x0) {
        local_28c._4_8_ = *(undefined8 *)uVar6;
        uStack_280 = *(uint *)(uVar6 + 8);
        FStack_27c.Value = *(uint *)(uVar6 + 0xc);
        pFStack_1e0 = local_278;
        local_1d8 = local_270;
        uStack_1d4 = uStack_26c;
        uStack_1d0 = local_268;
        FStack_1cc.Value = FStack_264.Value;
        local_1e8 = this_00;
        plVar11 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11);
        local_1b8 = local_1e8;
        pFStack_1b0 = pFStack_1e0;
        uStack_190 = CONCAT44(FStack_27c.Value,uStack_280);
        local_1a8 = local_1d8;
        uStack_1a4 = uStack_1d4;
        uStack_1a0 = uStack_1d0;
        FStack_19c.Value = FStack_1cc.Value;
        local_198 = (FGuid *)local_28c._4_8_;
        lVar13 = plVar11[1];
        pFVar15 = (FMetasoundFrontendClassInput *)*plVar11;
        pFVar1 = pFVar15 + (int)lVar13;
        while( true ) {
          if ((int)plVar11[1] != (int)lVar13) {
            `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_2a4);
          }
          if (pFVar15 == pFVar1) break;
          `FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeInputsToGraphInputs'
          ::__l12::<lambda_1>::operator()(&local_1b8,&local_188,pFVar15);
          TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
          ::Emplace<Metasound::Frontend::FNamedEdge>
                    (&local_e8,(FNamedEdge *)local_28c,(bool *)&local_188);
          pFVar15 = pFVar15 + 1;
        }
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
    }
    bVar7 = AddNamedEdges(this_00,&local_e8,local_260,param_3,local_2a0);
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<Metasound::Frontend::FNamedEdge>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<Metasound::Frontend::FNamedEdge>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_138);
  }
  else {
    bVar7 = false;
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar7;
}

// AddEdgesFromMatchingInterfaceNodeOutputsToGraphOutputs @ 14ade93d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeOutputsToGraphOutputs
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,
          TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          FGuid *param_4)

{
  ulonglong uVar1;
  IDocumentCache *pIVar2;
  code *pcVar3;
  int iVar4;
  FGuid *pFVar5;
  FMetaSoundFrontendDocumentBuilder *this_00;
  bool bVar6;
  undefined1 uVar7;
  FMetasoundFrontendDocument *pFVar8;
  IInterfaceRegistry *pIVar9;
  longlong *plVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  FMetasoundFrontendClassOutput *pFVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  FMetasoundFrontendClassOutput *pFVar19;
  bool bVar20;
  undefined1 auStackY_2c8 [32];
  undefined1 local_295;
  undefined1 local_294 [4];
  FGuid *local_290;
  FMetaSoundFrontendDocumentBuilder *local_288;
  int local_280;
  undefined1 local_27c [36];
  longlong *local_258;
  uint uStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  uint local_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  FString local_1f8;
  FMetaSoundFrontendDocumentBuilder *local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  uint local_1d8;
  FNameEntryId FStack_1d4;
  FGuid *pFStack_1d0;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined4 local_19c;
  FMetaSoundFrontendDocumentBuilder *local_198 [3];
  FGuid *pFStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  FNamedEdge local_168;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
  local_e8;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  iVar4 = GCycleStatsShouldEmitNamedEvents;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_290 = param_4;
  local_288 = this;
  local_27c._20_8_ = param_1;
  local_27c._28_8_ = param_2;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,
               "FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeOutputsToGraphOutputs"
              );
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1062,
               "FMetaSoundFrontendDocumentBuilder::AddEdgesFromMatchingInterfaceNodeOutputsToGraphOutputs"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
               ,0x426);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1062);
  }
  if (param_4 == (FGuid *)0x0) {
    param_4 = &this->BuildPageID;
    local_290 = param_4;
  }
  uVar15 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  bVar6 = FindNodeClassInterfaces(this,param_1,&local_98,param_4);
  if (bVar6) {
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pIVar2 = (this->DocumentCache).Object;
    local_27c._4_8_ = (**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_4);
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    local_27c._12_8_ = (**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
    pFVar8 = GetDocumentChecked(this);
    TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
    ::Intersect(&local_98,
                (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                 *)local_138,&pFVar8->Interfaces);
    uVar17 = local_110;
    uStack_24c = 1;
    local_e8.Elements._0_8_ = 0;
    local_238 = 0;
    local_e8.Elements._8_8_ = 0;
    local_e8.Elements._32_8_ = 0;
    local_e8.Elements._40_4_ = 0;
    local_e8.Elements._44_4_ = 0x80;
    local_e8.Elements._48_4_ = 0xffffffff;
    local_e8.Elements._52_4_ = 0;
    local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_e8.HashSize = 0;
    uStack_23c = local_238;
    if (local_110 != 0) {
      puVar16 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar16 = local_118;
      }
      uVar18 = *puVar16;
      local_238 = 0;
      uVar15 = 0;
      while (uVar18 == 0) {
        lVar12 = (longlong)(int)uVar15;
        local_238 = local_238 + 0x20;
        uVar15 = uVar15 + 1;
        uStack_23c = local_110;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
        goto LAB_14ade96b1;
        uVar18 = puVar16[lVar12 + 1];
      }
      uStack_24c = -uVar18 & uVar18;
      uVar1 = (ulonglong)uStack_24c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_280 = (int)lVar12;
      uStack_23c = (local_238 - 1) + local_280;
      if ((int)local_110 < (int)uStack_23c) {
        uStack_23c = local_110;
      }
    }
LAB_14ade96b1:
    local_258 = (longlong *)local_138;
    uStack_234 = local_19c;
    local_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    uVar18 = local_110 & 0xffffffe0;
    iStack_230 = local_138._8_4_ - local_104;
    uStack_240 = 0xffffffff;
    TStack_220.CurrentBitIndex = uStack_23c;
    TStack_220.UnvisitedBitMask = 0xffffffff;
    TStack_220._padding_ = CONCAT44(uStack_24c,uVar15);
    iVar13 = (int)local_110 >> 5;
    TStack_220._28_4_ = local_19c;
    TStack_220.BaseBitIndex = local_238;
    uStack_200 = CONCAT44(uStack_22c,iStack_230);
    bVar11 = (byte)local_110;
    uStack_250 = uVar15;
    local_228 = local_258;
    TStack_220.Array = local_248;
    if (((int)local_110 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    this_00 = local_288;
    pFVar5 = local_290;
    if (uVar17 != local_110) {
      puVar16 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar16 = local_118;
      }
      uVar15 = -1 << (bVar11 & 0x1f) & puVar16[iVar13];
      while (uVar15 == 0) {
        lVar12 = (longlong)iVar13;
        uVar18 = uVar18 + 0x20;
        iVar13 = iVar13 + 1;
        uVar17 = local_110;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14ade97e0;
        uVar15 = puVar16[lVar12 + 1];
      }
      uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar17 = (int)lVar12 + -1 + uVar18;
      if ((int)local_110 < (int)uVar17) {
        uVar17 = local_110;
      }
    }
LAB_14ade97e0:
    while( true ) {
      plVar10 = local_228;
      if ((int)local_228[1] - *(int *)((longlong)local_228 + 0x34) != (int)uStack_200) {
        `TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_295);
      }
      if (((TStack_220.CurrentBitIndex == uVar17) &&
          (TStack_220.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
         (plVar10 == (longlong *)local_138)) break;
      Metasound::Frontend::GetInterfaceRegistryKey
                (&local_1f8,
                 (FMetasoundFrontendVersion *)
                 (*plVar10 + (longlong)TStack_220.CurrentBitIndex * 0x18));
      pIVar9 = Metasound::Frontend::IInterfaceRegistry::Get();
      plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x10))(pIVar9,&local_1f8);
      if (plVar10 != (longlong *)0x0) {
        uStack_1e0 = local_27c._4_4_;
        uStack_1dc = local_27c._8_4_;
        local_1d8 = local_27c._12_4_;
        FStack_1d4.Value = local_27c._16_4_;
        local_1e8 = this_00;
        pFStack_1d0 = pFVar5;
        local_1b8 = *(uint *)local_27c._20_8_;
        uStack_1b4 = *(uint *)(local_27c._20_8_ + 4);
        uStack_1b0 = *(uint *)(local_27c._20_8_ + 8);
        uStack_1ac = *(uint *)(local_27c._20_8_ + 0xc);
        lVar12 = (**(code **)(*plVar10 + 8))(plVar10);
        local_198[0] = local_1e8;
        local_198[1] = (FMetaSoundFrontendDocumentBuilder *)_uStack_1e0;
        local_178 = CONCAT44(uStack_1b4,local_1b8);
        uStack_170 = CONCAT44(uStack_1ac,uStack_1b0);
        local_198[2] = (FMetaSoundFrontendDocumentBuilder *)_local_1d8;
        pFStack_180 = pFStack_1d0;
        iVar13 = *(int *)(lVar12 + 0x18);
        pFVar14 = *(FMetasoundFrontendClassOutput **)(lVar12 + 0x10);
        pFVar19 = pFVar14 + iVar13;
        while( true ) {
          if (*(int *)(lVar12 + 0x18) != iVar13) {
            `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_294);
          }
          if (pFVar14 == pFVar19) break;
          `FMetaSoundFrontendDocumentBuilder::
          AddEdgesFromMatchingInterfaceNodeOutputsToGraphOutputs'::__l12::<lambda_1>::operator()
                    (local_198,&local_168,pFVar14);
          TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
          ::Emplace<Metasound::Frontend::FNamedEdge>
                    (&local_e8,(FNamedEdge *)local_27c,(bool *)&local_168);
          pFVar14 = pFVar14 + 1;
        }
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
    }
    bVar6 = AddNamedEdges(this_00,&local_e8,
                          (TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *)
                          local_27c._28_8_,param_3,pFVar5);
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<Metasound::Frontend::FNamedEdge>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<Metasound::Frontend::FNamedEdge>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_138);
  }
  else {
    bVar6 = false;
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar6;
}

// AddGraphInput @ 14ade9a10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddGraphInput
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassInput *param_1,
          FGuid *param_2)

{
  FMetasoundFrontendGraphClass *this_00;
  int *piVar1;
  uint uVar2;
  IDocumentCache *pIVar3;
  FMetasoundFrontendClassInput *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  FGuid FVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  FMetasoundFrontendNode *pFVar16;
  longlong *plVar17;
  longlong lVar18;
  IDataTypeRegistry *pIVar19;
  FNodeClassRegistryKey *pFVar20;
  FMetasoundFrontendClass *pFVar21;
  FMetasoundFrontendClassInterface *pFVar22;
  FDocumentIDGenerator *this_01;
  FGuid *pFVar23;
  FDocumentModifyDelegates *pFVar24;
  uint uVar25;
  FMetasoundFrontendNode *local_res10;
  FMetasoundFrontendDocument *local_res18;
  FMetasoundFrontendClass local_258;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  code *local_1a0;
  FMetaSoundFrontendDocumentBuilder **local_198;
  FMetaSoundFrontendDocumentBuilder *local_190;
  FScriptContainerElement *local_188;
  FGuid *local_180;
  FMetaSoundFrontendDocumentBuilder *local_178;
  undefined4 *local_170;
  FMetaSoundFrontendDocumentBuilder **local_168;
  FMetasoundFrontendClassInput *local_160;
  FGuid *local_158;
  FMetasoundFrontendNode **local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FMetasoundFrontendClass local_108;
  FGuid local_78;
  FNodeClassRegistryKey local_68;
  
  if ((((*(int *)((longlong)&param_1->_padding_ + 4) == 0 && (int)param_1->_padding_ == 0) &&
       *(int *)((longlong)&param_1->_padding_ + 4) == 0) && (int)param_1->_padding_ == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClassInput.NodeID.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                          ,0x484,L"Unassigned NodeID when adding graph input"), bVar13)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FMetasoundFrontendNode *)(*pcVar7)();
    return pFVar16;
  }
  if ((((*(int *)((longlong)&param_1->_padding_ + 4) == 0 && (int)param_1->_padding_ == 0) &&
       *(int *)((longlong)&param_1->_padding_ + 4) == 0) && (int)param_1->_padding_ == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClassInput.VertexID.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                          ,0x485,L"Unassigned VertexID when adding graph input"), bVar13)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FMetasoundFrontendNode *)(*pcVar7)();
    return pFVar16;
  }
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if (param_1->_padding_ == 0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)param_1,&local_148);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FMetasoundFrontendNode *)(*pcVar7)();
      return pFVar16;
    }
    plVar17 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
    lVar18 = (**(code **)(*plVar17 + 8))(plVar17,param_1->_padding_);
    if (lVar18 != 0) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)param_1,&local_138);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FMetasoundFrontendNode *)(*pcVar7)();
        return pFVar16;
      }
      pIVar3 = (this->DocumentCache).Object;
      plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,param_2);
      pFVar16 = (FMetasoundFrontendNode *)(**(code **)(*plVar17 + 0x28))(plVar17,lVar18 + 0x20);
      if ((pFVar16 == (FMetasoundFrontendNode *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutputNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                              ,0x491,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FMetasoundFrontendNode *)(*pcVar7)();
        return pFVar16;
      }
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                ((FMetasoundFrontendClassInputDefault *)(param_1->Defaults).AllocatorInstance.Data,
                 (param_1->Defaults).ArrayNum);
      pFVar6 = (param_1->Defaults).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
        return pFVar16;
      }
      return pFVar16;
    }
    pIVar19 = Metasound::Frontend::IDataTypeRegistry::Get();
    cVar14 = (**(code **)((longlong)*pIVar19 + 0x38))(pIVar19,&param_1->_padding_);
    if (cVar14 == '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)&param_1->_padding_,&local_118);
        ::FName::ToString((FName *)param_1,&local_128);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_1c8 = CONCAT31(local_1c8._1_3_,10);
      uStack_1c4 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      local_258.ID = Metasound::FrontendInvalidID;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 1;
      iStack_1a8 = 0;
      local_258._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_258.Metadata);
      local_258.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_258.Interface.Inputs.ArrayNum = 0;
      local_258.Interface.Inputs.ArrayMax = 0;
      local_258.Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_258.Interface.Outputs.ArrayNum = 0;
      local_258.Interface.Outputs.ArrayMax = 0;
      local_258.Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_258.Interface.Environment.ArrayNum = 0;
      local_258.Interface.Environment.ArrayMax = 0;
      local_258.Interface.ChangeID.A = 0;
      local_258.Interface.ChangeID.B = 0;
      local_258.Interface.ChangeID.C = 0;
      local_258.Interface.ChangeID.D = 0;
      bVar13 = Metasound::Frontend::DocumentBuilderPrivate::FindInputRegistryClass
                         ((FName)param_1->_padding_,
                          (EMetasoundFrontendVertexAccessType)param_1->_padding_,&local_258);
      if (!bVar13) {
        if (local_258.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_258.Interface.Environment.AllocatorInstance.Data);
        }
        if (local_258.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Interface.Outputs.AllocatorInstance.Data);
        }
        DestructItems<FMetasoundFrontendClassInput,int>
                  ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data
                   ,local_258.Interface.Inputs.ArrayNum);
        if ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data !=
            (FMetasoundFrontendClassInput *)0x0) {
          FMemory::Free(local_258.Interface.Inputs.AllocatorInstance.Data);
        }
        FMetasoundFrontendClassInput::~FMetasoundFrontendClassInput(param_1);
        return (FMetasoundFrontendNode *)0x0;
      }
      pFVar20 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                          (&local_68,&local_258.Metadata);
      uVar11._0_1_ = pFVar20->Type;
      uVar11._1_3_ = *(undefined3 *)&pFVar20->field_0x1;
      uVar11._4_4_ = (pFVar20->ClassName).Namespace.ComparisonIndex;
      uVar8 = *(undefined8 *)&(pFVar20->ClassName).Namespace.Number;
      local_1c8 = (undefined4)uVar11;
      uStack_1c0 = (undefined4)uVar8;
      uStack_1bc = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar8 = *(undefined8 *)&(pFVar20->ClassName).Name.Number;
      uVar9 = *(undefined8 *)&(pFVar20->ClassName).Variant.Number;
      uStack_1b8 = (undefined4)uVar8;
      uStack_1b4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_1b0 = (undefined4)uVar9;
      uStack_1ac = (undefined4)((ulonglong)uVar9 >> 0x20);
      iStack_1a8 = (pFVar20->Version).Minor;
      uStack_1c4 = uVar11._4_4_;
      pFVar21 = FindDependency(this,&local_258.Metadata);
      FVar12 = local_258.ID;
      if (pFVar21 == (FMetasoundFrontendClass *)0x0) {
        local_108.Metadata.ChangeID.D = local_258.Metadata.ChangeID.D;
        local_108.Interface.Inputs.AllocatorInstance.Data =
             local_258.Interface.Inputs.AllocatorInstance.Data;
        local_108.Interface.Inputs.ArrayNum = local_258.Interface.Inputs.ArrayNum;
        local_108.Interface.Inputs.ArrayMax = local_258.Interface.Inputs.ArrayMax;
        local_108.Interface.Outputs.AllocatorInstance.Data =
             local_258.Interface.Outputs.AllocatorInstance.Data;
        local_108.Interface.Outputs.ArrayNum = local_258.Interface.Outputs.ArrayNum;
        local_108.Interface.Outputs.ArrayMax = local_258.Interface.Outputs.ArrayMax;
        local_108.ID.A = local_258.ID.A;
        local_108.ID.B = local_258.ID.B;
        local_108.ID.C = local_258.ID.C;
        local_108.ID.D = local_258.ID.D;
        local_108.Interface.Environment.AllocatorInstance.Data =
             local_258.Interface.Environment.AllocatorInstance.Data;
        local_108.Interface.Environment.ArrayNum = local_258.Interface.Environment.ArrayNum;
        local_108.Metadata.ClassName.Namespace = local_258.Metadata.ClassName.Namespace;
        local_108.Metadata.ClassName.Name = local_258.Metadata.ClassName.Name;
        local_108.Interface.Environment.ArrayMax = local_258.Interface.Environment.ArrayMax;
        local_258.Interface.Environment.ArrayNum = 0;
        local_258.Interface.Environment.ArrayMax = 0;
        local_108.Metadata.ClassName.Variant = local_258.Metadata.ClassName.Variant;
        local_108.Metadata.Version = local_258.Metadata.Version;
        local_108._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
        local_108.Metadata.Type = local_258.Metadata.Type;
        local_108.Metadata._33_1_ = local_258.Metadata._33_1_;
        local_108.Metadata.AccessFlags = local_258.Metadata.AccessFlags;
        local_108.Metadata.ChangeID.A = local_258.Metadata.ChangeID.A;
        local_108.Metadata.ChangeID.B = local_258.Metadata.ChangeID.B;
        local_108.Metadata.ChangeID.C = local_258.Metadata.ChangeID.C;
        local_258.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_258.Interface.Inputs.ArrayNum = 0;
        local_258.Interface.Inputs.ArrayMax = 0;
        local_258.Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_258.Interface.Outputs.ArrayNum = 0;
        local_258.Interface.Outputs.ArrayMax = 0;
        local_258.Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Interface.ChangeID.A = local_258.Interface.ChangeID.A;
        local_108.Interface.ChangeID.B = local_258.Interface.ChangeID.B;
        local_108.Interface.ChangeID.C = local_258.Interface.ChangeID.C;
        local_108.Interface.ChangeID.D = local_258.Interface.ChangeID.D;
        local_258.ID = FVar12;
        AddDependency(this,&local_108);
      }
      if (local_258.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_258.Interface.Environment.AllocatorInstance.Data);
      }
      if (local_258.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Interface.Outputs.AllocatorInstance.Data);
      }
      DestructItems<FMetasoundFrontendClassInput,int>
                ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data,
                 local_258.Interface.Inputs.ArrayNum);
      if ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data !=
          (FMetasoundFrontendClassInput *)0x0) {
        FMemory::Free(local_258.Interface.Inputs.AllocatorInstance.Data);
      }
      local_res18 = GetDocumentChecked(this);
      this_00 = &local_res18->RootGraph;
      pFVar22 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)this_00);
      uVar2 = (pFVar22->Inputs).ArrayNum;
      lVar18 = (longlong)(int)uVar2;
      pFVar22 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)this_00);
      pFVar4 = (FMetasoundFrontendClassInput *)(pFVar22->Inputs).AllocatorInstance.Data;
      if (((pFVar4 <= param_1) && (param_1 < pFVar4 + (pFVar22->Inputs).ArrayMax)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FMetasoundFrontendNode *)(*pcVar7)();
        return pFVar16;
      }
      iVar15 = (pFVar22->Inputs).ArrayNum;
      piVar1 = &(pFVar22->Inputs).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,(ForAnyElementType *)pFVar22,piVar1);
      }
      (pFVar22->Inputs).ArrayNum = iVar15 + 1;
      lVar10 = param_1->_padding_;
      pFVar5 = (pFVar22->Inputs).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)iVar15 * 0x48;
      *(longlong *)pFVar6 = param_1->_padding_;
      *(longlong *)(pFVar6 + 8) = lVar10;
      lVar10 = param_1->_padding_;
      pFVar5 = pFVar5 + (longlong)iVar15 * 0x48;
      *(longlong *)(pFVar5 + 0x10) = param_1->_padding_;
      *(longlong *)(pFVar5 + 0x18) = lVar10;
      lVar10 = param_1->_padding_;
      *(longlong *)(pFVar5 + 0x20) = param_1->_padding_;
      *(longlong *)(pFVar5 + 0x28) = lVar10;
      *(int *)(pFVar5 + 0x30) = (int)param_1->_padding_;
      *(undefined8 *)(pFVar5 + 0x38) = 0;
      *(FScriptContainerElement **)(pFVar5 + 0x38) = (param_1->Defaults).AllocatorInstance.Data;
      (param_1->Defaults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar5 + 0x40) = (param_1->Defaults).ArrayNum;
      *(int *)(pFVar5 + 0x44) = (param_1->Defaults).ArrayMax;
      local_170 = &local_1c8;
      local_168 = &local_190;
      local_150 = &local_res10;
      local_198 = &local_178;
      local_1a0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddGraphInput'::__l2::<lambda_2>,void,FMetasoundFrontendGraph_&>
                  ::Call;
      (param_1->Defaults).ArrayNum = 0;
      (param_1->Defaults).ArrayMax = 0;
      local_res10 = (FMetasoundFrontendNode *)0x0;
      local_190 = this;
      local_188 = pFVar5;
      local_180 = param_2;
      local_178 = this;
      local_160 = param_1;
      local_158 = param_2;
      FMetasoundFrontendGraphClass::IterateGraphPages
                (this_00,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_1a0);
      if (local_res10 != (FMetasoundFrontendNode *)0x0) {
        if (((*(int *)(pFVar5 + 0x1c) == 0 && *(int *)(pFVar5 + 0x18) == 0) &&
            *(int *)(pFVar5 + 0x14) == 0) && *(int *)(pFVar5 + 0x10) == 0) {
          this_01 = Metasound::Frontend::FDocumentIDGenerator::Get();
          pFVar23 = Metasound::Frontend::FDocumentIDGenerator::CreateVertexID
                              (this_01,&local_78,local_res18);
          uVar11 = *(undefined8 *)&pFVar23->C;
          *(undefined8 *)(pFVar5 + 0x10) = *(undefined8 *)pFVar23;
          *(undefined8 *)(pFVar5 + 0x18) = uVar11;
        }
        pFVar24 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                            (&this->DocumentDelegates);
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pFVar24->InterfaceDelegates).OnInputAdded,uVar2);
        pFVar16 = local_res10;
        DestructItems<FMetasoundFrontendClassInputDefault,int>
                  ((FMetasoundFrontendClassInputDefault *)(param_1->Defaults).AllocatorInstance.Data
                   ,(param_1->Defaults).ArrayNum);
        pFVar6 = (param_1->Defaults).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
          return pFVar16;
        }
        return pFVar16;
      }
      pFVar22 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)this_00);
      uVar25 = 0;
      if ((int)uVar2 < (pFVar22->Inputs).ArrayNum) {
        uVar25 = ~uVar2 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FMetasoundFrontendNode *)(*pcVar7)();
        return pFVar16;
      }
      pFVar5 = (pFVar22->Inputs).AllocatorInstance.Data;
      pFVar6 = pFVar5 + lVar18 * 0x48;
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                (*(FMetasoundFrontendClassInputDefault **)(pFVar5 + lVar18 * 0x48 + 0x38),
                 *(int *)(pFVar5 + lVar18 * 0x48 + 0x40));
      if (*(void **)(pFVar6 + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar6 + 0x38));
      }
      iVar15 = (pFVar22->Inputs).ArrayNum + ~uVar2;
      if (iVar15 != 0) {
        memmove(pFVar6,pFVar6 + 0x48,(longlong)iVar15 * 0x48);
      }
      piVar1 = &(pFVar22->Inputs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,(ForAnyElementType *)pFVar22,(pFVar22->Inputs).ArrayNum,
                 &(pFVar22->Inputs).ArrayMax);
    }
  }
  DestructItems<FMetasoundFrontendClassInputDefault,int>
            ((FMetasoundFrontendClassInputDefault *)(param_1->Defaults).AllocatorInstance.Data,
             (param_1->Defaults).ArrayNum);
  pFVar6 = (param_1->Defaults).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return (FMetasoundFrontendNode *)0x0;
}

// AddGraphNode @ 14adea1b0

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddGraphNode
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendGraphClass *param_1,
          FGuid *param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EMetasoundFrontendClassType EVar6;
  bool bVar7;
  FNodeClassRegistryKey *pFVar8;
  FMetasoundFrontendNode *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  FNodeClassRegistryKey local_1d8;
  undefined **local_1a8;
  longlong local_1a0;
  longlong lStack_198;
  FMetasoundFrontendClassMetadata local_190;
  FMetasoundFrontendClassInterface local_158;
  code *local_118;
  undefined1 *local_110;
  FGuid local_108;
  FMetasoundFrontendClass local_f8;
  FNodeClassRegistryKey local_68;
  FNodeClassRegistryKey local_40;
  
  local_1a0 = param_1->_padding_;
  lStack_198 = param_1->_padding_;
  local_190.ChangeID.D = (uint)param_1->_padding_;
  local_190.ClassName.Namespace = (FName)param_1->_padding_;
  local_190.ClassName.Name = (FName)param_1->_padding_;
  local_190.ClassName.Variant = (FName)param_1->_padding_;
  local_190.Version = (FMetasoundFrontendVersionNumber)param_1->_padding_;
  local_1d8.Type = Invalid;
  local_1d8.ClassName.Namespace.ComparisonIndex.Value = 0;
  local_1d8.ClassName.Namespace.Number = 0;
  local_190._32_8_ = param_1->_padding_;
  local_190.ChangeID._4_8_ = param_1->_padding_;
  local_1d8.ClassName.Name.ComparisonIndex.Value = 0;
  local_1d8.ClassName.Name.Number = 0;
  local_1d8.ClassName.Variant.ComparisonIndex.Value = 0;
  local_1d8.ClassName.Variant.Number = 0;
  local_1d8.Version.Major = 1;
  local_1d8.Version.Minor = 0;
  local_1a8 = &___7FMetasoundFrontendClass__6B_;
  FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
            (&local_158,(FMetasoundFrontendClassInterface *)&param_1->_padding_);
  local_190._32_8_ = local_190._32_8_ & 0xffffffffffffff00;
  pFVar8 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_40,&local_190);
  uVar3._0_1_ = pFVar8->Type;
  uVar3._1_3_ = *(undefined3 *)&pFVar8->field_0x1;
  uVar3._4_4_ = (pFVar8->ClassName).Namespace.ComparisonIndex;
  uVar4 = *(undefined8 *)&(pFVar8->ClassName).Namespace.Number;
  local_1d8._0_4_ = SUB84(uVar3,0);
  local_1d8.ClassName.Namespace.Number = (uint)uVar4;
  local_1d8.ClassName.Name.ComparisonIndex.Value = (uint)((ulonglong)uVar4 >> 0x20);
  uVar4 = *(undefined8 *)&(pFVar8->ClassName).Name.Number;
  uVar5 = *(undefined8 *)&(pFVar8->ClassName).Variant.Number;
  local_1d8.ClassName.Name.Number = (uint)uVar4;
  local_1d8.ClassName.Variant.ComparisonIndex.Value = (uint)((ulonglong)uVar4 >> 0x20);
  local_1d8.ClassName.Variant.Number = (uint)uVar5;
  local_1d8.Version.Major = (int)((ulonglong)uVar5 >> 0x20);
  local_1d8.Version.Minor = (pFVar8->Version).Minor;
  local_1d8.ClassName.Namespace.ComparisonIndex.Value = uVar3._4_4_;
  EVar6 = FMetasoundFrontendClassMetadata::GetType(&local_190);
  if (EVar6 == Graph) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0xb49,
                       L"Dependencies are never listed as \'Graph\' types. Graphs are considered \'External\' from the perspective of the parent document to allow for nativization."
                      );
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FMetasoundFrontendNode *)(*pcVar2)();
      return pFVar9;
    }
  }
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_68,&local_190);
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FMetasoundFrontendNode *)(*pcVar2)();
      return pFVar9;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  lVar10 = (**(code **)(*(longlong *)pIVar1 + 0x20))(pIVar1,&local_68);
  if (lVar10 == 0) {
    local_f8.Metadata.ChangeID.D = local_190.ChangeID.D;
    local_f8.Interface.Inputs.AllocatorInstance.Data = local_158.Inputs.AllocatorInstance.Data;
    local_f8.Interface.Inputs.ArrayNum = local_158.Inputs.ArrayNum;
    local_f8.Interface.Inputs.ArrayMax = local_158.Inputs.ArrayMax;
    local_f8.Interface.Outputs.AllocatorInstance.Data = local_158.Outputs.AllocatorInstance.Data;
    local_f8.Interface.Outputs.ArrayNum = local_158.Outputs.ArrayNum;
    local_f8.Interface.Outputs.ArrayMax = local_158.Outputs.ArrayMax;
    local_f8.ID.A = (undefined4)local_1a0;
    local_f8.ID.B = local_1a0._4_4_;
    local_f8.ID.C = (undefined4)lStack_198;
    local_f8.ID.D = lStack_198._4_4_;
    local_f8.Interface.Environment.AllocatorInstance.Data =
         local_158.Environment.AllocatorInstance.Data;
    local_f8.Interface.Environment.ArrayNum = local_158.Environment.ArrayNum;
    local_f8.Metadata.ClassName.Namespace = local_190.ClassName.Namespace;
    local_f8.Metadata.ClassName.Name = local_190.ClassName.Name;
    local_f8.Interface.Environment.ArrayMax = local_158.Environment.ArrayMax;
    local_158.Environment.ArrayNum = 0;
    local_158.Environment.ArrayMax = 0;
    local_f8.Metadata.ClassName.Variant = local_190.ClassName.Variant;
    local_f8.Metadata.Version = local_190.Version;
    local_f8._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
    local_f8.Metadata.Type = local_190.Type;
    local_f8.Metadata._33_1_ = local_190._33_1_;
    local_f8.Metadata.AccessFlags = local_190.AccessFlags;
    local_f8.Metadata.ChangeID.A = local_190.ChangeID.A;
    local_f8.Metadata.ChangeID.B = local_190.ChangeID.B;
    local_f8.Metadata.ChangeID.C = local_190.ChangeID.C;
    local_158.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Inputs.ArrayNum = 0;
    local_158.Inputs.ArrayMax = 0;
    local_158.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Outputs.ArrayNum = 0;
    local_158.Outputs.ArrayMax = 0;
    local_158.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Interface.ChangeID.A = local_158.ChangeID.A;
    local_f8.Interface.ChangeID.B = local_158.ChangeID.B;
    local_f8.Interface.ChangeID.C = local_158.ChangeID.C;
    local_f8.Interface.ChangeID.D = local_158.ChangeID.D;
    AddDependency(this,&local_f8);
  }
  if (local_158.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Environment.AllocatorInstance.Data);
  }
  if (local_158.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_158.Inputs.AllocatorInstance.Data,
             local_158.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_158.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_158.Inputs.AllocatorInstance.Data);
  }
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  local_108.A = param_2->A;
  local_108.B = param_2->B;
  local_108.C = param_2->C;
  local_108.D = param_2->D;
  local_110 = local_res8;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddGraphNode'::__l2::<lambda_1>,void,FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&>
              ::Call;
  pFVar9 = AddNodeInternal(this,&local_1d8,
                           (TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
                            *)&local_118,param_3,&local_108,(int *)0x0);
  return pFVar9;
}

// AddGraphOutput @ 14adea440

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddGraphOutput
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassOutput *param_1,
          FGuid *param_2)

{
  FMetasoundFrontendGraphClass *this_00;
  int *piVar1;
  uint uVar2;
  IDocumentCache *pIVar3;
  FName FVar4;
  FMetasoundFrontendClassOutput *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FGuid FVar10;
  FMetasoundFrontendDocument *pFVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  FMetasoundFrontendNode *pFVar15;
  longlong *plVar16;
  longlong lVar17;
  IDataTypeRegistry *pIVar18;
  FNodeClassRegistryKey *pFVar19;
  FMetasoundFrontendClass *pFVar20;
  FMetasoundFrontendClassInterface *pFVar21;
  FDocumentIDGenerator *this_01;
  FGuid *pFVar22;
  FDocumentModifyDelegates *pFVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  char local_res10 [8];
  FMetasoundFrontendNode *local_res18;
  FScriptContainerElement *local_res20;
  FMetasoundFrontendClass local_248;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  FMetasoundFrontendDocument *local_190;
  code *local_188;
  FMetaSoundFrontendDocumentBuilder **local_180;
  FMetaSoundFrontendDocumentBuilder *local_178;
  undefined4 *local_170;
  FScriptContainerElement **local_168;
  FScriptContainerElement *local_160;
  FGuid *local_158;
  FMetasoundFrontendNode **local_150;
  char *local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FMetasoundFrontendClass local_100;
  FGuid local_70;
  FNodeClassRegistryKey local_60;
  
  if ((((*(int *)&param_1->field_0x2c == 0 && *(int *)&param_1->field_0x28 == 0) &&
       *(int *)&param_1->field_0x24 == 0) && *(int *)&param_1->field_0x20 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClassOutput.NodeID.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                          ,0x4fd,L"Unassigned NodeID when adding graph output"), bVar12)) {
    pcVar6 = (code *)swi(3);
    pFVar15 = (FMetasoundFrontendNode *)(*pcVar6)();
    return pFVar15;
  }
  if ((((*(int *)&param_1->field_0x1c == 0 && *(int *)&param_1->field_0x18 == 0) &&
       *(int *)&param_1->field_0x14 == 0) && *(int *)&param_1->field_0x10 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClassOutput.VertexID.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                          ,0x4fe,L"Unassigned VertexID when adding graph output"), bVar12)) {
    pcVar6 = (code *)swi(3);
    pFVar15 = (FMetasoundFrontendNode *)(*pcVar6)();
    return pFVar15;
  }
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if (*(longlong *)&param_1->field_0x8 == 0) {
    if ((byte)LogMetaSound._0_1_ < 2) {
      return (FMetasoundFrontendNode *)0x0;
    }
    ::FName::ToString((FName *)param_1,&local_140);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  else {
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FMetasoundFrontendNode *)(*pcVar6)();
      return pFVar15;
    }
    plVar16 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
    lVar17 = (**(code **)(*plVar16 + 0x18))(plVar16,*(undefined8 *)param_1);
    if (lVar17 != 0) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)param_1,&local_130);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FMetasoundFrontendNode *)(*pcVar6)();
        return pFVar15;
      }
      pIVar3 = (this->DocumentCache).Object;
      plVar16 = (longlong *)(**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,param_2);
      pFVar15 = (FMetasoundFrontendNode *)(**(code **)(*plVar16 + 0x28))(plVar16,lVar17 + 0x20);
      return pFVar15;
    }
    pIVar18 = Metasound::Frontend::IDataTypeRegistry::Get();
    cVar13 = (**(code **)((longlong)*pIVar18 + 0x38))(pIVar18,&param_1->field_0x8);
    if (cVar13 == '\0') {
      if ((byte)LogMetaSound._0_1_ < 2) {
        return (FMetasoundFrontendNode *)0x0;
      }
      ::FName::ToString((FName *)&param_1->field_0x8,&local_110);
      ::FName::ToString((FName *)param_1,&local_120);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      local_140.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
        local_140.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
      }
    }
    else {
      local_1b8 = CONCAT31(local_1b8._1_3_,10);
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      uStack_1a8 = 0;
      local_248.ID = Metasound::FrontendInvalidID;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      uStack_19c = 1;
      iStack_198 = 0;
      local_248._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_248.Metadata);
      FVar4.ComparisonIndex.Value = *(uint *)&param_1->field_0x8;
      FVar4.Number = *(uint *)&param_1->field_0xc;
      local_248.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.Interface.Inputs.ArrayNum = 0;
      local_248.Interface.Inputs.ArrayMax = 0;
      local_248.Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.Interface.Outputs.ArrayNum = 0;
      local_248.Interface.Outputs.ArrayMax = 0;
      local_248.Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.Interface.Environment.ArrayNum = 0;
      local_248.Interface.Environment.ArrayMax = 0;
      local_248.Interface.ChangeID.A = 0;
      local_248.Interface.ChangeID.B = 0;
      local_248.Interface.ChangeID.C = 0;
      local_248.Interface.ChangeID.D = 0;
      bVar12 = Metasound::Frontend::DocumentBuilderPrivate::FindOutputRegistryClass
                         (FVar4,*(EMetasoundFrontendVertexAccessType *)&param_1->field_0x30,
                          &local_248);
      if (bVar12) {
        pFVar19 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                            (&local_60,&local_248.Metadata);
        uVar9._0_1_ = pFVar19->Type;
        uVar9._1_3_ = *(undefined3 *)&pFVar19->field_0x1;
        uVar9._4_4_ = (pFVar19->ClassName).Namespace.ComparisonIndex;
        uVar7 = *(undefined8 *)&(pFVar19->ClassName).Namespace.Number;
        local_1b8 = (undefined4)uVar9;
        uStack_1b0 = (undefined4)uVar7;
        uStack_1ac = (undefined4)((ulonglong)uVar7 >> 0x20);
        uVar7 = *(undefined8 *)&(pFVar19->ClassName).Name.Number;
        uVar8 = *(undefined8 *)&(pFVar19->ClassName).Variant.Number;
        uStack_1a8 = (undefined4)uVar7;
        uStack_1a4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_1a0 = (undefined4)uVar8;
        uStack_19c = (undefined4)((ulonglong)uVar8 >> 0x20);
        iStack_198 = (pFVar19->Version).Minor;
        uStack_1b4 = uVar9._4_4_;
        pFVar20 = FindDependency(this,&local_248.Metadata);
        FVar10 = local_248.ID;
        if (pFVar20 == (FMetasoundFrontendClass *)0x0) {
          local_100.Metadata.ChangeID.D = local_248.Metadata.ChangeID.D;
          local_100.Interface.Inputs.AllocatorInstance.Data =
               local_248.Interface.Inputs.AllocatorInstance.Data;
          local_100.Interface.Inputs.ArrayNum = local_248.Interface.Inputs.ArrayNum;
          local_100.Interface.Inputs.ArrayMax = local_248.Interface.Inputs.ArrayMax;
          local_100.Interface.Outputs.AllocatorInstance.Data =
               local_248.Interface.Outputs.AllocatorInstance.Data;
          local_100.Interface.Outputs.ArrayNum = local_248.Interface.Outputs.ArrayNum;
          local_100.Interface.Outputs.ArrayMax = local_248.Interface.Outputs.ArrayMax;
          local_100.ID.A = local_248.ID.A;
          local_100.ID.B = local_248.ID.B;
          local_100.ID.C = local_248.ID.C;
          local_100.ID.D = local_248.ID.D;
          local_100.Interface.Environment.AllocatorInstance.Data =
               local_248.Interface.Environment.AllocatorInstance.Data;
          local_100.Interface.Environment.ArrayNum = local_248.Interface.Environment.ArrayNum;
          local_100.Metadata.ClassName.Namespace = local_248.Metadata.ClassName.Namespace;
          local_100.Metadata.ClassName.Name = local_248.Metadata.ClassName.Name;
          local_100.Interface.Environment.ArrayMax = local_248.Interface.Environment.ArrayMax;
          local_248.Interface.Environment.ArrayNum = 0;
          local_248.Interface.Environment.ArrayMax = 0;
          local_100.Metadata.ClassName.Variant = local_248.Metadata.ClassName.Variant;
          local_100.Metadata.Version = local_248.Metadata.Version;
          local_100._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
          local_100.Metadata.Type = local_248.Metadata.Type;
          local_100.Metadata._33_1_ = local_248.Metadata._33_1_;
          local_100.Metadata.AccessFlags = local_248.Metadata.AccessFlags;
          local_100.Metadata.ChangeID.A = local_248.Metadata.ChangeID.A;
          local_100.Metadata.ChangeID.B = local_248.Metadata.ChangeID.B;
          local_100.Metadata.ChangeID.C = local_248.Metadata.ChangeID.C;
          local_248.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.Interface.Inputs.ArrayNum = 0;
          local_248.Interface.Inputs.ArrayMax = 0;
          local_248.Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.Interface.Outputs.ArrayNum = 0;
          local_248.Interface.Outputs.ArrayMax = 0;
          local_248.Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_100.Interface.ChangeID.A = local_248.Interface.ChangeID.A;
          local_100.Interface.ChangeID.B = local_248.Interface.ChangeID.B;
          local_100.Interface.ChangeID.C = local_248.Interface.ChangeID.C;
          local_100.Interface.ChangeID.D = local_248.Interface.ChangeID.D;
          local_248.ID = FVar10;
          AddDependency(this,&local_100);
        }
        if (local_248.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_248.Interface.Environment.AllocatorInstance.Data);
        }
        if (local_248.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Interface.Outputs.AllocatorInstance.Data);
        }
        DestructItems<FMetasoundFrontendClassInput,int>
                  ((FMetasoundFrontendClassInput *)local_248.Interface.Inputs.AllocatorInstance.Data
                   ,local_248.Interface.Inputs.ArrayNum);
        if ((FMetasoundFrontendClassInput *)local_248.Interface.Inputs.AllocatorInstance.Data !=
            (FMetasoundFrontendClassInput *)0x0) {
          FMemory::Free(local_248.Interface.Inputs.AllocatorInstance.Data);
        }
        local_190 = GetDocumentChecked(this);
        this_00 = &local_190->RootGraph;
        pFVar21 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)this_00);
        uVar2 = (pFVar21->Outputs).ArrayNum;
        pFVar21 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)this_00);
        pFVar5 = (FMetasoundFrontendClassOutput *)(pFVar21->Outputs).AllocatorInstance.Data;
        if (((pFVar5 <= param_1) && (param_1 < pFVar5 + (pFVar21->Outputs).ArrayMax)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          pFVar15 = (FMetasoundFrontendNode *)(*pcVar6)();
          return pFVar15;
        }
        iVar14 = (pFVar21->Outputs).ArrayNum;
        piVar1 = &(pFVar21->Outputs).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x434,&(pFVar21->Outputs).AllocatorInstance,piVar1);
        }
        pFVar11 = local_190;
        (pFVar21->Outputs).ArrayNum = iVar14 + 1;
        uVar9 = *(undefined8 *)&param_1->field_0x8;
        pFVar25 = (pFVar21->Outputs).AllocatorInstance.Data + (longlong)iVar14 * 0x34;
        *(undefined8 *)pFVar25 = *(undefined8 *)param_1;
        *(undefined8 *)(pFVar25 + 8) = uVar9;
        uVar9 = *(undefined8 *)&param_1->field_0x18;
        *(undefined8 *)(pFVar25 + 0x10) = *(undefined8 *)&param_1->field_0x10;
        *(undefined8 *)(pFVar25 + 0x18) = uVar9;
        uVar9 = *(undefined8 *)&param_1->field_0x28;
        *(undefined8 *)(pFVar25 + 0x20) = *(undefined8 *)&param_1->field_0x20;
        *(undefined8 *)(pFVar25 + 0x28) = uVar9;
        *(undefined4 *)(pFVar25 + 0x30) = *(undefined4 *)&param_1->field_0x30;
        local_170 = &local_1b8;
        local_168 = &local_res20;
        local_150 = &local_res18;
        local_148 = local_res10;
        local_180 = &local_178;
        local_188 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddGraphOutput'::__l2::<lambda_2>,void,FMetasoundFrontendGraph_&>
                    ::Call;
        local_res10[0] = '\x01';
        local_res18 = (FMetasoundFrontendNode *)0x0;
        local_res20 = pFVar25;
        local_178 = this;
        local_160 = pFVar25;
        local_158 = param_2;
        FMetasoundFrontendGraphClass::IterateGraphPages
                  (&local_190->RootGraph,
                   (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_188);
        if (local_res10[0] == '\0') {
          pFVar21 = FMetasoundFrontendClass::GetDefaultInterface
                              ((FMetasoundFrontendClass *)&pFVar11->RootGraph);
          uVar24 = 0;
          if ((int)uVar2 < (pFVar21->Outputs).ArrayNum) {
            uVar24 = ~uVar2 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            pFVar15 = (FMetasoundFrontendNode *)(*pcVar6)();
            return pFVar15;
          }
          pFVar25 = (pFVar21->Outputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x34;
          iVar14 = (pFVar21->Outputs).ArrayNum + ~uVar2;
          if (iVar14 != 0) {
            memmove(pFVar25,pFVar25 + 0x34,(longlong)iVar14 * 0x34);
          }
          piVar1 = &(pFVar21->Outputs).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x34,4,&(pFVar21->Outputs).AllocatorInstance,(pFVar21->Outputs).ArrayNum,
                     &(pFVar21->Outputs).ArrayMax);
        }
        else {
          if (((*(int *)(pFVar25 + 0x1c) == 0 && *(int *)(pFVar25 + 0x18) == 0) &&
              *(int *)(pFVar25 + 0x14) == 0) && *(int *)(pFVar25 + 0x10) == 0) {
            this_01 = Metasound::Frontend::FDocumentIDGenerator::Get();
            pFVar22 = Metasound::Frontend::FDocumentIDGenerator::CreateVertexID
                                (this_01,&local_70,pFVar11);
            uVar9 = *(undefined8 *)&pFVar22->C;
            *(undefined8 *)(pFVar25 + 0x10) = *(undefined8 *)pFVar22;
            *(undefined8 *)(pFVar25 + 0x18) = uVar9;
          }
          pFVar23 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                              (&this->DocumentDelegates);
          TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pFVar23->InterfaceDelegates).OnOutputAdded,uVar2);
        }
        if (local_res18 != (FMetasoundFrontendNode *)0x0) {
          return local_res18;
        }
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewNodeToReturn",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                            ,0x562,L"");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          pFVar15 = (FMetasoundFrontendNode *)(*pcVar6)();
          return pFVar15;
        }
        return local_res18;
      }
      if (local_248.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_248.Interface.Environment.AllocatorInstance.Data);
      }
      if (local_248.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Interface.Outputs.AllocatorInstance.Data);
      }
      DestructItems<FMetasoundFrontendClassInput,int>
                ((FMetasoundFrontendClassInput *)local_248.Interface.Inputs.AllocatorInstance.Data,
                 local_248.Interface.Inputs.ArrayNum);
      local_140.Data.AllocatorInstance.Data = local_248.Interface.Inputs.AllocatorInstance.Data;
    }
  }
  if ((FMetasoundFrontendClassInput *)local_140.Data.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  return (FMetasoundFrontendNode *)0x0;
}

// AddGraphVariable @ 14adeab30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendVariable * __thiscall
FMetaSoundFrontendDocumentBuilder::AddGraphVariable
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FName param_2,
          FMetasoundFrontendLiteral *param_3,FText *param_4,FText *param_5,FGuid *param_6)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FGuid FVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendGraph *pFVar11;
  IDataTypeRegistry *pIVar12;
  FLiteral *pFVar13;
  FNodeClassRegistryKey *pFVar14;
  FMetasoundFrontendClass *pFVar15;
  FMetasoundFrontendVariable *pFVar16;
  FGuid *pFVar17;
  FMetasoundFrontendNode *pFVar18;
  FName *pFVar19;
  FName *pFVar20;
  FGuid *pFVar21;
  FName local_res10;
  FName local_res18 [2];
  undefined1 auStackY_3d8 [32];
  undefined1 local_388 [16];
  FName local_378;
  FText local_370;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined2 local_34c;
  undefined1 local_34a;
  undefined8 local_348;
  undefined2 local_340;
  undefined8 local_33c;
  undefined **local_328;
  FGuid local_320;
  FMetasoundFrontendClassMetadata local_310;
  FMetasoundFrontendClassInput *local_2d8;
  undefined8 local_2d0;
  FScriptContainerElement *local_2c8;
  undefined8 local_2c0;
  FScriptContainerElement *local_2b8;
  undefined8 local_2b0;
  FGuid local_2a8;
  FNodeClassRegistryKey local_298;
  FMetasoundFrontendVariable local_268;
  code *local_1a8;
  undefined1 *local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FGuid local_148;
  FMetasoundFrontendClass local_138;
  FGuid local_a8;
  FNodeClassRegistryKey local_98;
  undefined1 local_70 [16];
  byte local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar10 = GetDocumentChecked(this);
  pFVar11 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                      (&pFVar10->RootGraph,&this->BuildPageID);
  pFVar20 = (FName *)(pFVar11->Variables).AllocatorInstance.Data;
  pFVar19 = pFVar20 + (longlong)(pFVar11->Variables).ArrayNum * 0x17;
  for (; pFVar20 != pFVar19; pFVar20 = pFVar20 + 0x17) {
    if (*pFVar20 == param_1) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(local_res18,&local_178);
        ::FName::ToString(pFVar20 + 1,&local_188);
        ::FName::ToString(&local_res10,&local_198);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
      }
      return (FMetasoundFrontendVariable *)0x0;
    }
  }
  pIVar12 = Metasound::Frontend::IDataTypeRegistry::Get();
  pFVar16 = (FMetasoundFrontendVariable *)0x0;
  local_378.ComparisonIndex.Value = 0;
  local_378.Number = 0;
  FText::FText(&local_370);
  local_360 = 0xc;
  local_358 = 0;
  local_350 = 0;
  local_34c = 0;
  local_34a = 0;
  local_348 = 0;
  local_340 = 0;
  local_33c = 0;
  cVar7 = (**(code **)((longlong)*pIVar12 + 0x20))(pIVar12,local_res18,&local_378);
  if (cVar7 == '\0') {
    if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14adeb286;
    ::FName::ToString(local_res18,&local_158);
    ::FName::ToString(&local_res10,&local_168);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_268.Name = local_res10;
    local_268.TypeName.ComparisonIndex.Value = 0;
    local_268.TypeName.Number = 0;
    local_268.Literal.Type = None;
    local_268.Literal._1_3_ = 0;
    local_268.Literal.AsNumDefault = 0;
    local_268.Literal.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Literal.AsBoolean.ArrayNum = 0;
    local_268.Literal.AsBoolean.ArrayMax = 0;
    local_268.Literal.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Literal.AsInteger.ArrayNum = 0;
    local_268.Literal.AsInteger.ArrayMax = 0;
    local_268.Literal.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Literal.AsFloat.ArrayNum = 0;
    local_268.Literal.AsFloat.ArrayMax = 0;
    local_268.Literal.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Literal.AsString.ArrayNum = 0;
    local_268.Literal.AsString.ArrayMax = 0;
    local_268.Literal.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Literal.AsUObject.ArrayNum = 0;
    local_268.Literal.AsUObject.ArrayMax = 0;
    FGuid::NewGuid(&local_268.ID);
    local_268.AccessorNodeIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.AccessorNodeIDs.ArrayNum = 0;
    local_268.AccessorNodeIDs.ArrayMax = 0;
    local_268.DeferredAccessorNodeIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.DeferredAccessorNodeIDs.ArrayNum = 0;
    local_268.DeferredAccessorNodeIDs.ArrayMax = 0;
    local_268.TypeName = local_378;
    local_268.VariableNodeID = Metasound::FrontendInvalidID;
    local_268.MutatorNodeID = Metasound::FrontendInvalidID;
    if (param_3 == (FMetasoundFrontendLiteral *)0x0) {
      pFVar13 = (FLiteral *)(**(code **)((longlong)*pIVar12 + 0x80))(pIVar12,local_70,local_res18);
      FMetasoundFrontendLiteral::SetFromLiteral(&local_268.Literal,pFVar13);
      if ((0xc < local_60) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        pFVar16 = (FMetasoundFrontendVariable *)(*pcVar2)();
        return pFVar16;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60])(local_70);
    }
    else {
      FMetasoundFrontendLiteral::operator=(&local_268.Literal,param_3);
    }
    local_298.Type = Invalid;
    local_298.ClassName.Namespace.ComparisonIndex.Value = 0;
    local_298.ClassName.Namespace.Number = 0;
    local_320 = Metasound::FrontendInvalidID;
    local_298.ClassName.Name.ComparisonIndex.Value = 0;
    local_298.ClassName.Name.Number = 0;
    local_298.ClassName.Variant.ComparisonIndex.Value = 0;
    local_298.ClassName.Variant.Number = 0;
    local_298.Version.Major = 1;
    local_298.Version.Minor = 0;
    local_328 = &___7FMetasoundFrontendClass__6B_;
    FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_310);
    local_2d8 = (FMetasoundFrontendClassInput *)0x0;
    local_2d0 = 0;
    local_2c8 = (FScriptContainerElement *)0x0;
    local_2c0 = 0;
    local_2b8 = (FScriptContainerElement *)0x0;
    local_2b0 = 0;
    local_2a8.A = 0;
    local_2a8.B = 0;
    local_2a8.C = 0;
    local_2a8.D = 0;
    pIVar12 = Metasound::Frontend::IDataTypeRegistry::Get();
    cVar7 = (**(code **)((longlong)*pIVar12 + 0xe0))(pIVar12,&local_268.TypeName,&local_328);
    if (cVar7 == '\0') {
      if (local_2b8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8);
      }
      if (local_2c8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8);
      }
      DestructItems<FMetasoundFrontendClassInput,int>(local_2d8,(int)local_2d0);
      if (local_2d8 != (FMetasoundFrontendClassInput *)0x0) {
        FMemory::Free(local_2d8);
      }
    }
    else {
      pFVar14 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                          (&local_98,&local_310);
      uVar3._0_1_ = pFVar14->Type;
      uVar3._1_3_ = *(undefined3 *)&pFVar14->field_0x1;
      uVar3._4_4_ = (pFVar14->ClassName).Namespace.ComparisonIndex;
      uVar4 = *(undefined8 *)&(pFVar14->ClassName).Namespace.Number;
      local_298._0_4_ = SUB84(uVar3,0);
      local_298.ClassName.Namespace.Number = (uint)uVar4;
      local_298.ClassName.Name.ComparisonIndex.Value = (uint)((ulonglong)uVar4 >> 0x20);
      uVar4 = *(undefined8 *)&(pFVar14->ClassName).Name.Number;
      uVar5 = *(undefined8 *)&(pFVar14->ClassName).Variant.Number;
      local_298.ClassName.Name.Number = (uint)uVar4;
      local_298.ClassName.Variant.ComparisonIndex.Value = (uint)((ulonglong)uVar4 >> 0x20);
      local_298.ClassName.Variant.Number = (uint)uVar5;
      local_298.Version.Major = (int)((ulonglong)uVar5 >> 0x20);
      local_298.Version.Minor = (pFVar14->Version).Minor;
      local_298.ClassName.Namespace.ComparisonIndex.Value = uVar3._4_4_;
      pFVar15 = FindDependency(this,&local_310);
      FVar6 = local_320;
      if (pFVar15 == (FMetasoundFrontendClass *)0x0) {
        local_138.Metadata.ChangeID.D = local_310.ChangeID.D;
        local_138.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)local_2d8;
        local_138.Interface.Inputs.ArrayNum = (int)local_2d0;
        local_138.Interface.Inputs.ArrayMax = local_2d0._4_4_;
        local_138.Interface.Outputs.AllocatorInstance.Data = local_2c8;
        local_138.Interface.Outputs.ArrayNum = (int)local_2c0;
        local_138.Interface.Outputs.ArrayMax = local_2c0._4_4_;
        local_138.ID.A = local_320.A;
        local_138.ID.B = local_320.B;
        local_138.ID.C = local_320.C;
        local_138.ID.D = local_320.D;
        local_138.Interface.Environment.AllocatorInstance.Data = local_2b8;
        local_138.Interface.Environment.ArrayNum = (int)local_2b0;
        local_138.Metadata.ClassName.Namespace = local_310.ClassName.Namespace;
        local_138.Metadata.ClassName.Name = local_310.ClassName.Name;
        local_138.Interface.Environment.ArrayMax = local_2b0._4_4_;
        local_2b0 = 0;
        local_138.Metadata.ClassName.Variant = local_310.ClassName.Variant;
        local_138.Metadata.Version = local_310.Version;
        local_138._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
        local_138.Metadata.Type = local_310.Type;
        local_138.Metadata._33_1_ = local_310._33_1_;
        local_138.Metadata.AccessFlags = local_310.AccessFlags;
        local_138.Metadata.ChangeID.A = local_310.ChangeID.A;
        local_138.Metadata.ChangeID.B = local_310.ChangeID.B;
        local_138.Metadata.ChangeID.C = local_310.ChangeID.C;
        local_2d8 = (FMetasoundFrontendClassInput *)0x0;
        local_2d0 = 0;
        local_2c8 = (FScriptContainerElement *)0x0;
        local_2c0 = 0;
        local_2b8 = (FScriptContainerElement *)0x0;
        local_138.Interface.ChangeID.A = local_2a8.A;
        local_138.Interface.ChangeID.B = local_2a8.B;
        local_138.Interface.ChangeID.C = local_2a8.C;
        local_138.Interface.ChangeID.D = local_2a8.D;
        local_320 = FVar6;
        pFVar15 = AddDependency(this,&local_138);
        if ((pFVar15 == (FMetasoundFrontendClass *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Dependency",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                               ,0x5a7,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar16 = (FMetasoundFrontendVariable *)(*pcVar2)();
          return pFVar16;
        }
      }
      if (local_2b8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8);
      }
      if (local_2c8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8);
      }
      DestructItems<FMetasoundFrontendClassInput,int>(local_2d8,(int)local_2d0);
      if (local_2d8 != (FMetasoundFrontendClassInput *)0x0) {
        FMemory::Free(local_2d8);
      }
      pFVar21 = &this->BuildPageID;
      if (param_6 != (FGuid *)0x0) {
        pFVar21 = param_6;
      }
      pFVar17 = FGuid::NewGuid(&local_a8);
      local_1a0 = local_388;
      local_148.A = pFVar17->A;
      local_148.B = pFVar17->B;
      local_148.C = pFVar17->C;
      local_148.D = pFVar17->D;
      local_1a8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddGraphVariable'::__l2::<lambda_1>,void,FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&>
                  ::Call;
      pFVar18 = AddNodeInternal(this,&local_298,
                                (TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
                                 *)&local_1a8,pFVar21,&local_148,(int *)0x0);
      if (pFVar18 != (FMetasoundFrontendNode *)0x0) {
        local_268.VariableNodeID = pFVar18->ID;
        pFVar10 = GetDocumentChecked(this);
        pFVar11 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar10->RootGraph,pFVar21);
        pFVar16 = (FMetasoundFrontendVariable *)(pFVar11->Variables).AllocatorInstance.Data;
        if (((pFVar16 <= &local_268) && (&local_268 < pFVar16 + (pFVar11->Variables).ArrayMax)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar16 = (FMetasoundFrontendVariable *)(*pcVar2)();
          return pFVar16;
        }
        iVar9 = (pFVar11->Variables).ArrayNum;
        piVar1 = &(pFVar11->Variables).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8b8,&(pFVar11->Variables).AllocatorInstance,piVar1);
        }
        (pFVar11->Variables).ArrayNum = iVar9 + 1;
        pFVar16 = FMetasoundFrontendVariable::FMetasoundFrontendVariable
                            ((FMetasoundFrontendVariable *)
                             ((pFVar11->Variables).AllocatorInstance.Data + (longlong)iVar9 * 0xb8),
                             &local_268);
      }
    }
    if (local_268.DeferredAccessorNodeIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_268.DeferredAccessorNodeIDs.AllocatorInstance.Data);
    }
    if (local_268.AccessorNodeIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.AccessorNodeIDs.AllocatorInstance.Data);
    }
    if (local_268.Literal.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Literal.AsUObject.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_268.Literal.AsString.AllocatorInstance.Data,
               local_268.Literal.AsString.ArrayNum);
    if (local_268.Literal.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Literal.AsString.AllocatorInstance.Data);
    }
    if (local_268.Literal.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Literal.AsFloat.AllocatorInstance.Data);
    }
    local_158.Data.AllocatorInstance.Data = local_268.Literal.AsBoolean.AllocatorInstance.Data;
    if (local_268.Literal.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Literal.AsInteger.AllocatorInstance.Data);
      local_158.Data.AllocatorInstance.Data = local_268.Literal.AsBoolean.AllocatorInstance.Data;
    }
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
LAB_14adeb286:
  if (local_370.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_370.TextData.Reference + 0x10))();
  }
  return pFVar16;
}

// AddGraphVariableAccessorNode @ 14adeb2d0

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddGraphVariableAccessorNode
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2,FGuid *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FGuid FVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendGraph *pFVar11;
  IDataTypeRegistry *pIVar12;
  FNodeClassRegistryKey *pFVar13;
  FMetasoundFrontendClass *pFVar14;
  FMetasoundFrontendNode *pFVar15;
  FName FVar16;
  FMetasoundFrontendVertex *pFVar17;
  FGuid *pFVar18;
  FName *pFVar19;
  FName *pFVar20;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  undefined **local_248;
  FGuid local_240;
  FMetasoundFrontendClassMetadata local_230;
  FMetasoundFrontendClassInput *local_1f8;
  undefined8 local_1f0;
  FScriptContainerElement *local_1e8;
  undefined8 local_1e0;
  FScriptContainerElement *local_1d8;
  undefined8 local_1d0;
  FGuid local_1c8;
  FNodeClassRegistryKey local_1b8;
  FName local_190;
  FName local_188;
  FMetasoundFrontendVertex *local_180;
  code *local_178;
  undefined1 *local_170;
  FString local_168;
  FGuid local_158;
  FString local_148;
  FMetasoundFrontendEdge local_138;
  FMetasoundFrontendClass local_f8;
  FNodeClassRegistryKey local_68;
  
  pFVar18 = param_3;
  if (param_3 == (FGuid *)0x0) {
    pFVar18 = &this->BuildPageID;
  }
  local_res10[0] = param_1;
  pFVar10 = GetDocumentChecked(this);
  pFVar11 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar10->RootGraph,pFVar18);
  pFVar19 = (FName *)(pFVar11->Variables).AllocatorInstance.Data;
  pFVar20 = pFVar19 + (longlong)(pFVar11->Variables).ArrayNum * 0x17;
  do {
    if (pFVar19 == pFVar20) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(local_res10,&local_148);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
LAB_14adeb84b:
        if ((FMetasoundFrontendClassInput *)local_148.Data.AllocatorInstance.Data !=
            (FMetasoundFrontendClassInput *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      return (FMetasoundFrontendNode *)0x0;
    }
    if (*pFVar19 == param_1) {
      local_1b8.Type = Invalid;
      local_1b8.ClassName.Namespace.ComparisonIndex.Value = 0;
      local_1b8.ClassName.Namespace.Number = 0;
      local_1b8.ClassName.Name.ComparisonIndex.Value = 0;
      local_1b8.ClassName.Name.Number = 0;
      local_240 = Metasound::FrontendInvalidID;
      local_1b8.ClassName.Variant.ComparisonIndex.Value = 0;
      local_1b8.ClassName.Variant.Number = 0;
      local_1b8.Version.Major = 1;
      local_1b8.Version.Minor = 0;
      local_248 = &___7FMetasoundFrontendClass__6B_;
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_230);
      local_1f8 = (FMetasoundFrontendClassInput *)0x0;
      local_1f0 = 0;
      local_1e8 = (FScriptContainerElement *)0x0;
      local_1e0 = 0;
      local_1d8 = (FScriptContainerElement *)0x0;
      local_1d0 = 0;
      local_1c8.A = 0;
      local_1c8.B = 0;
      local_1c8.C = 0;
      local_1c8.D = 0;
      pIVar12 = Metasound::Frontend::IDataTypeRegistry::Get();
      cVar7 = (**(code **)((longlong)*pIVar12 + 0xf0))(pIVar12,pFVar19 + 1,&local_248);
      if (cVar7 != '\0') {
        pFVar13 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                            (&local_68,&local_230);
        uVar5._0_1_ = pFVar13->Type;
        uVar5._1_3_ = *(undefined3 *)&pFVar13->field_0x1;
        uVar5._4_4_ = (pFVar13->ClassName).Namespace.ComparisonIndex;
        uVar3 = *(undefined8 *)&(pFVar13->ClassName).Namespace.Number;
        local_1b8._0_4_ = SUB84(uVar5,0);
        local_1b8.ClassName.Namespace.Number = (uint)uVar3;
        local_1b8.ClassName.Name.ComparisonIndex.Value = (uint)((ulonglong)uVar3 >> 0x20);
        uVar3 = *(undefined8 *)&(pFVar13->ClassName).Name.Number;
        uVar4 = *(undefined8 *)&(pFVar13->ClassName).Variant.Number;
        local_1b8.ClassName.Name.Number = (uint)uVar3;
        local_1b8.ClassName.Variant.ComparisonIndex.Value = (uint)((ulonglong)uVar3 >> 0x20);
        local_1b8.ClassName.Variant.Number = (uint)uVar4;
        local_1b8.Version.Major = (int)((ulonglong)uVar4 >> 0x20);
        local_1b8.Version.Minor = (pFVar13->Version).Minor;
        local_1b8.ClassName.Namespace.ComparisonIndex.Value = uVar5._4_4_;
        pFVar14 = FindDependency(this,&local_230);
        FVar6 = local_240;
        if (pFVar14 == (FMetasoundFrontendClass *)0x0) {
          local_f8.Metadata.ChangeID.D = local_230.ChangeID.D;
          local_f8.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)local_1f8;
          local_f8.Interface.Inputs.ArrayNum = (int)local_1f0;
          local_f8.Interface.Inputs.ArrayMax = local_1f0._4_4_;
          local_f8.Interface.Outputs.AllocatorInstance.Data = local_1e8;
          local_f8.Interface.Outputs.ArrayNum = (int)local_1e0;
          local_f8.Interface.Outputs.ArrayMax = local_1e0._4_4_;
          local_f8.ID.A = local_240.A;
          local_f8.ID.B = local_240.B;
          local_f8.ID.C = local_240.C;
          local_f8.ID.D = local_240.D;
          local_f8.Interface.Environment.AllocatorInstance.Data = local_1d8;
          local_f8.Interface.Environment.ArrayNum = (int)local_1d0;
          local_f8.Metadata.ClassName.Namespace = local_230.ClassName.Namespace;
          local_f8.Metadata.ClassName.Name = local_230.ClassName.Name;
          local_f8.Interface.Environment.ArrayMax = local_1d0._4_4_;
          local_1d0 = 0;
          local_f8.Metadata.ClassName.Variant = local_230.ClassName.Variant;
          local_f8.Metadata.Version = local_230.Version;
          local_f8._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
          local_f8.Metadata.Type = local_230.Type;
          local_f8.Metadata._33_1_ = local_230._33_1_;
          local_f8.Metadata.AccessFlags = local_230.AccessFlags;
          local_f8.Metadata.ChangeID.A = local_230.ChangeID.A;
          local_f8.Metadata.ChangeID.B = local_230.ChangeID.B;
          local_f8.Metadata.ChangeID.C = local_230.ChangeID.C;
          local_1f8 = (FMetasoundFrontendClassInput *)0x0;
          local_1f0 = 0;
          local_1e8 = (FScriptContainerElement *)0x0;
          local_1e0 = 0;
          local_1d8 = (FScriptContainerElement *)0x0;
          local_f8.Interface.ChangeID.A = local_1c8.A;
          local_f8.Interface.ChangeID.B = local_1c8.B;
          local_f8.Interface.ChangeID.C = local_1c8.C;
          local_f8.Interface.ChangeID.D = local_1c8.D;
          local_240 = FVar6;
          pFVar14 = AddDependency(this,&local_f8);
          if ((pFVar14 == (FMetasoundFrontendClass *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Dependency",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                 ,0x5f9,L""), bVar8)) {
            pcVar2 = (code *)swi(3);
            pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
            return pFVar15;
          }
        }
        if (local_1d8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8);
        }
        if (local_1e8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8);
        }
        DestructItems<FMetasoundFrontendClassInput,int>(local_1f8,(int)local_1f0);
        if (local_1f8 != (FMetasoundFrontendClassInput *)0x0) {
          FMemory::Free(local_1f8);
        }
        pFVar18 = param_3;
        if (param_3 == (FGuid *)0x0) {
          pFVar18 = &this->BuildPageID;
        }
        local_158.A = param_2->A;
        local_158.B = param_2->B;
        local_158.C = param_2->C;
        local_158.D = param_2->D;
        local_170 = local_res20;
        local_178 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddGraphVariableAccessorNode'::__l2::<lambda_1>,void,FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&>
                    ::Call;
        FVar16 = (FName)AddNodeInternal(this,&local_1b8,
                                        (TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
                                         *)&local_178,pFVar18,&local_158,(int *)0x0);
        if (FVar16 == (FName)0x0) {
          return (FMetasoundFrontendNode *)0x0;
        }
        FLazyName::Resolve(&Metasound::VariableNames::InputVariableName);
        local_180 = FindNodeInput(this,(FGuid *)FVar16,local_190,param_3);
        if ((local_180 == (FMetasoundFrontendVertex *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewInput",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                               ,0x602,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
          return pFVar15;
        }
        pFVar15 = FindTailNodeInVariableStack(this,local_res10[0],param_3);
        if ((pFVar15 == (FMetasoundFrontendNode *)0x0) &&
           (pFVar15 = FindNode(this,(FGuid *)(pFVar19 + 0xf),param_3),
           pFVar15 == (FMetasoundFrontendNode *)0x0)) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3428680960856553973>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                             ,0x60b,"TailNode");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
            return pFVar15;
          }
        }
        else {
          FLazyName::Resolve(&Metasound::VariableNames::OutputVariableName);
          pFVar17 = FindNodeOutput(this,&pFVar15->ID,local_188,param_3);
          if ((pFVar17 == (FMetasoundFrontendVertex *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("TailNodeOutput",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                 ,0x60f,L""), bVar8)) {
            pcVar2 = (code *)swi(3);
            pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
            return pFVar15;
          }
          local_138.FromNodeID.A = (pFVar15->ID).A;
          local_138.FromNodeID.B = (pFVar15->ID).B;
          local_138.FromNodeID.C = (pFVar15->ID).C;
          local_138.FromNodeID.D = (pFVar15->ID).D;
          local_138.FromVertexID = pFVar17->VertexID;
          local_138.ToNodeID = *(FGuid *)FVar16;
          local_138.ToVertexID = local_180->VertexID;
          AddEdge(this,&local_138,param_3);
        }
        pFVar20 = pFVar19 + 0x13;
        if ((((ulonglong)*pFVar20 <= (ulonglong)FVar16) &&
            ((ulonglong)FVar16 <
             (ulonglong)((longlong)(int)pFVar19[0x14].Number * 0x10 + (longlong)*pFVar20))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
          return pFVar15;
        }
        uVar9 = pFVar19[0x14].ComparisonIndex.Value;
        if (uVar9 == pFVar19[0x14].Number) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,(ForAnyElementType *)pFVar20,(int *)&pFVar19[0x14].Number);
        }
        pFVar19[0x14].ComparisonIndex.Value = uVar9 + 1;
        uVar5 = *(undefined8 *)((longlong)FVar16 + 8);
        puVar1 = (undefined8 *)((longlong)*pFVar20 + (longlong)(int)uVar9 * 0x10);
        *puVar1 = *(undefined8 *)FVar16;
        puVar1[1] = uVar5;
        return (FMetasoundFrontendNode *)FVar16;
      }
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(pFVar19 + 1,&local_168);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      if (local_1d8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8);
      }
      if (local_1e8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8);
      }
      DestructItems<FMetasoundFrontendClassInput,int>(local_1f8,(int)local_1f0);
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1f8;
      goto LAB_14adeb84b;
    }
    pFVar19 = pFVar19 + 0x17;
  } while( true );
}

// AddGraphVariableDeferredAccessorNode @ 14adeb880

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddGraphVariableDeferredAccessorNode
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2,FGuid *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FGuid FVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendGraph *pFVar11;
  IDataTypeRegistry *pIVar12;
  FNodeClassRegistryKey *pFVar13;
  FMetasoundFrontendClass *pFVar14;
  FMetasoundFrontendNode *pFVar15;
  FName FVar16;
  FMetasoundFrontendVertex *pFVar17;
  FMetasoundFrontendVertex *pFVar18;
  FGuid *pFVar19;
  FName *pFVar20;
  FName *pFVar21;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  undefined **local_298;
  FGuid local_290;
  FMetasoundFrontendClassMetadata local_280;
  FMetasoundFrontendClassInput *local_248;
  undefined8 local_240;
  FScriptContainerElement *local_238;
  undefined8 local_230;
  FScriptContainerElement *local_228;
  undefined8 local_220;
  FGuid local_218;
  FNodeClassRegistryKey local_208;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  FMetasoundFrontendEdge local_1a8;
  FString local_168;
  FGuid local_158;
  FString local_148;
  FMetasoundFrontendClass local_138;
  FMetasoundFrontendEdge local_a8;
  FNodeClassRegistryKey local_68;
  
  pFVar19 = param_3;
  if (param_3 == (FGuid *)0x0) {
    pFVar19 = &this->BuildPageID;
  }
  local_res10[0] = param_1;
  pFVar10 = GetDocumentChecked(this);
  pFVar11 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar10->RootGraph,pFVar19);
  pFVar20 = (FName *)(pFVar11->Variables).AllocatorInstance.Data;
  pFVar21 = pFVar20 + (longlong)(pFVar11->Variables).ArrayNum * 0x17;
  do {
    if (pFVar20 == pFVar21) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(local_res10,&local_148);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
LAB_14adebee0:
        if ((FMetasoundFrontendClassInput *)local_148.Data.AllocatorInstance.Data !=
            (FMetasoundFrontendClassInput *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      return (FMetasoundFrontendNode *)0x0;
    }
    if (*pFVar20 == param_1) {
      local_208.Type = Invalid;
      local_208.ClassName.Namespace.ComparisonIndex.Value = 0;
      local_208.ClassName.Namespace.Number = 0;
      local_208.ClassName.Name.ComparisonIndex.Value = 0;
      local_208.ClassName.Name.Number = 0;
      local_290 = Metasound::FrontendInvalidID;
      local_208.ClassName.Variant.ComparisonIndex.Value = 0;
      local_208.ClassName.Variant.Number = 0;
      local_208.Version.Major = 1;
      local_208.Version.Minor = 0;
      local_298 = &___7FMetasoundFrontendClass__6B_;
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_280);
      local_248 = (FMetasoundFrontendClassInput *)0x0;
      local_240 = 0;
      local_238 = (FScriptContainerElement *)0x0;
      local_230 = 0;
      local_228 = (FScriptContainerElement *)0x0;
      local_220 = 0;
      local_218.A = 0;
      local_218.B = 0;
      local_218.C = 0;
      local_218.D = 0;
      pIVar12 = Metasound::Frontend::IDataTypeRegistry::Get();
      cVar7 = (**(code **)((longlong)*pIVar12 + 0xf8))(pIVar12,pFVar20 + 1,&local_298);
      if (cVar7 != '\0') {
        pFVar13 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                            (&local_68,&local_280);
        uVar5._0_1_ = pFVar13->Type;
        uVar5._1_3_ = *(undefined3 *)&pFVar13->field_0x1;
        uVar5._4_4_ = (pFVar13->ClassName).Namespace.ComparisonIndex;
        uVar3 = *(undefined8 *)&(pFVar13->ClassName).Namespace.Number;
        local_208._0_4_ = SUB84(uVar5,0);
        local_208.ClassName.Namespace.Number = (uint)uVar3;
        local_208.ClassName.Name.ComparisonIndex.Value = (uint)((ulonglong)uVar3 >> 0x20);
        uVar3 = *(undefined8 *)&(pFVar13->ClassName).Name.Number;
        uVar4 = *(undefined8 *)&(pFVar13->ClassName).Variant.Number;
        local_208.ClassName.Name.Number = (uint)uVar3;
        local_208.ClassName.Variant.ComparisonIndex.Value = (uint)((ulonglong)uVar3 >> 0x20);
        local_208.ClassName.Variant.Number = (uint)uVar4;
        local_208.Version.Major = (int)((ulonglong)uVar4 >> 0x20);
        local_208.Version.Minor = (pFVar13->Version).Minor;
        local_208.ClassName.Namespace.ComparisonIndex.Value = uVar5._4_4_;
        pFVar14 = FindDependency(this,&local_280);
        FVar6 = local_290;
        if (pFVar14 == (FMetasoundFrontendClass *)0x0) {
          local_138._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
          local_138.Metadata.ChangeID.D = local_280.ChangeID.D;
          local_138.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)local_248;
          local_138.Interface.Inputs.ArrayNum = (int)local_240;
          local_138.Interface.Inputs.ArrayMax = local_240._4_4_;
          local_138.Interface.Outputs.AllocatorInstance.Data = local_238;
          local_138.Interface.Outputs.ArrayNum = (int)local_230;
          local_138.Interface.Outputs.ArrayMax = local_230._4_4_;
          local_138.ID.A = local_290.A;
          local_138.ID.B = local_290.B;
          local_138.ID.C = local_290.C;
          local_138.ID.D = local_290.D;
          local_138.Interface.Environment.AllocatorInstance.Data = local_228;
          local_138.Interface.Environment.ArrayNum = (int)local_220;
          local_138.Metadata.ClassName.Namespace = local_280.ClassName.Namespace;
          local_138.Metadata.ClassName.Name = local_280.ClassName.Name;
          local_138.Interface.Environment.ArrayMax = local_220._4_4_;
          local_220 = 0;
          local_138.Metadata.ClassName.Variant = local_280.ClassName.Variant;
          local_138.Metadata.Version = local_280.Version;
          local_248 = (FMetasoundFrontendClassInput *)0x0;
          local_138.Metadata.Type = local_280.Type;
          local_138.Metadata._33_1_ = local_280._33_1_;
          local_138.Metadata.AccessFlags = local_280.AccessFlags;
          local_138.Metadata.ChangeID.A = local_280.ChangeID.A;
          local_138.Metadata.ChangeID.B = local_280.ChangeID.B;
          local_138.Metadata.ChangeID.C = local_280.ChangeID.C;
          local_240 = 0;
          local_238 = (FScriptContainerElement *)0x0;
          local_230 = 0;
          local_228 = (FScriptContainerElement *)0x0;
          local_138.Interface.ChangeID.A = local_218.A;
          local_138.Interface.ChangeID.B = local_218.B;
          local_138.Interface.ChangeID.C = local_218.C;
          local_138.Interface.ChangeID.D = local_218.D;
          local_290 = FVar6;
          pFVar14 = AddDependency(this,&local_138);
          if ((pFVar14 == (FMetasoundFrontendClass *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Dependency",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                 ,0x63e,L""), bVar8)) {
            pcVar2 = (code *)swi(3);
            pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
            return pFVar15;
          }
        }
        if (local_228 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228);
        }
        if (local_238 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238);
        }
        DestructItems<FMetasoundFrontendClassInput,int>(local_248,(int)local_240);
        if (local_248 != (FMetasoundFrontendClassInput *)0x0) {
          FMemory::Free(local_248);
        }
        pFVar19 = param_3;
        if (param_3 == (FGuid *)0x0) {
          pFVar19 = &this->BuildPageID;
        }
        local_158.A = param_2->A;
        local_158.B = param_2->B;
        local_158.C = param_2->C;
        local_158.D = param_2->D;
        local_1b8 = local_res20;
        local_1c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddGraphVariableDeferredAccessorNode'::__l2::<lambda_1>,void,FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&>
                    ::Call;
        FVar16 = (FName)AddNodeInternal(this,&local_208,
                                        (TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
                                         *)&local_1c0,pFVar19,&local_158,(int *)0x0);
        if (FVar16 == (FName)0x0) {
          return (FMetasoundFrontendNode *)0x0;
        }
        FLazyName::Resolve(&Metasound::VariableNames::OutputVariableName);
        pFVar17 = FindNodeOutput(this,(FGuid *)FVar16,local_1e0,param_3);
        pFVar15 = FindHeadNodeInVariableStack(this,local_res10[0],param_3);
        if (pFVar15 != (FMetasoundFrontendNode *)0x0) {
          FLazyName::Resolve(&Metasound::VariableNames::InputVariableName);
          pFVar18 = FindNodeInput(this,&pFVar15->ID,local_1d8,param_3);
          if ((pFVar18 == (FMetasoundFrontendVertex *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("HeadNodeInput",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                 ,0x64b,L""), bVar8)) {
            pcVar2 = (code *)swi(3);
            pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
            return pFVar15;
          }
          RemoveEdgeToNodeInput(this,&pFVar15->ID,&pFVar18->VertexID,param_3);
          local_a8.FromNodeID._0_8_ = *(undefined8 *)FVar16;
          local_a8.FromNodeID._8_8_ = *(undefined8 *)((longlong)FVar16 + 8);
          local_a8.FromVertexID.A = (pFVar17->VertexID).A;
          local_a8.FromVertexID.B = (pFVar17->VertexID).B;
          local_a8.FromVertexID.C = (pFVar17->VertexID).C;
          local_a8.FromVertexID.D = (pFVar17->VertexID).D;
          local_a8.ToNodeID.A = (pFVar15->ID).A;
          local_a8.ToNodeID.B = (pFVar15->ID).B;
          local_a8.ToNodeID.C = (pFVar15->ID).C;
          local_a8.ToNodeID.D = (pFVar15->ID).D;
          local_a8.ToVertexID = pFVar18->VertexID;
          AddEdge(this,&local_a8,param_3);
        }
        FLazyName::Resolve(&Metasound::VariableNames::InputVariableName);
        pFVar17 = FindNodeInput(this,(FGuid *)FVar16,local_1d0,param_3);
        if ((pFVar17 == (FMetasoundFrontendVertex *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewNodeInput",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                               ,0x658,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
          return pFVar15;
        }
        pFVar15 = FindNode(this,(FGuid *)(pFVar20 + 0xf),param_3);
        if ((pFVar15 == (FMetasoundFrontendNode *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("VariableNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                               ,0x65b,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
          return pFVar15;
        }
        FLazyName::Resolve(&Metasound::VariableNames::OutputVariableName);
        pFVar18 = FindNodeOutput(this,&pFVar15->ID,local_1c8,param_3);
        if ((pFVar18 == (FMetasoundFrontendVertex *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("VariableNodeOutput",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                               ,0x65e,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
          return pFVar15;
        }
        local_1a8.FromNodeID = pFVar15->ID;
        local_1a8.FromVertexID = pFVar18->VertexID;
        local_1a8.ToNodeID = *(FGuid *)FVar16;
        local_1a8.ToVertexID = pFVar17->VertexID;
        AddEdge(this,&local_1a8,param_3);
        pFVar21 = pFVar20 + 0x15;
        if ((((ulonglong)*pFVar21 <= (ulonglong)FVar16) &&
            ((ulonglong)FVar16 <
             (ulonglong)((longlong)(int)pFVar20[0x16].Number * 0x10 + (longlong)*pFVar21))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar15 = (FMetasoundFrontendNode *)(*pcVar2)();
          return pFVar15;
        }
        uVar9 = pFVar20[0x16].ComparisonIndex.Value;
        if (uVar9 == pFVar20[0x16].Number) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,(ForAnyElementType *)pFVar21,(int *)&pFVar20[0x16].Number);
        }
        pFVar20[0x16].ComparisonIndex.Value = uVar9 + 1;
        uVar5 = *(undefined8 *)((longlong)FVar16 + 8);
        puVar1 = (undefined8 *)((longlong)*pFVar21 + (longlong)(int)uVar9 * 0x10);
        *puVar1 = *(undefined8 *)FVar16;
        puVar1[1] = uVar5;
        return (FMetasoundFrontendNode *)FVar16;
      }
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(pFVar20 + 1,&local_168);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      if (local_228 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228);
      }
      if (local_238 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238);
      }
      DestructItems<FMetasoundFrontendClassInput,int>(local_248,(int)local_240);
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_248;
      goto LAB_14adebee0;
    }
    pFVar20 = pFVar20 + 0x17;
  } while( true );
}

// AddGraphVariableMutatorNode @ 14adebf20

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddGraphVariableMutatorNode
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2,FGuid *param_3)

{
  uint uVar1;
  IDocumentCache *pIVar2;
  FName FVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  FGuid FVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  FMetasoundFrontendDocument *pFVar14;
  FMetasoundFrontendGraph *pFVar15;
  FMetasoundFrontendNode *pFVar16;
  longlong *plVar17;
  longlong lVar18;
  IDataTypeRegistry *pIVar19;
  FNodeClassRegistryKey *pFVar20;
  FMetasoundFrontendClass *pFVar21;
  FMetasoundFrontendVertex *pFVar22;
  FGuid *pFVar23;
  FMetasoundFrontendVertex *pFVar24;
  FName *pFVar25;
  FGuid *pFVar26;
  FName *pFVar27;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  undefined **local_2b8;
  FGuid local_2b0;
  FMetasoundFrontendClassMetadata local_2a0;
  FMetasoundFrontendClassInput *local_268;
  undefined8 local_260;
  FScriptContainerElement *local_258;
  undefined8 local_250;
  FScriptContainerElement *local_248;
  undefined8 local_240;
  FGuid local_238;
  FNodeClassRegistryKey local_228;
  FName local_200;
  FName FStack_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  FString local_1b8;
  FString local_1a8;
  FGuid local_198;
  FString local_188;
  FName local_178;
  FName FStack_170;
  FGuid local_168;
  FGuid local_158;
  FGuid local_148;
  FMetasoundFrontendEdge local_138;
  FMetasoundFrontendClass local_f8;
  FNodeClassRegistryKey local_68;
  
  pFVar23 = &this->BuildPageID;
  pFVar26 = pFVar23;
  if (param_3 != (FGuid *)0x0) {
    pFVar26 = param_3;
  }
  local_res10[0] = param_1;
  pFVar14 = GetDocumentChecked(this);
  pFVar15 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar14->RootGraph,pFVar26);
  pFVar27 = (FName *)(pFVar15->Variables).AllocatorInstance.Data;
  pFVar25 = pFVar27 + (longlong)(pFVar15->Variables).ArrayNum * 0x17;
  do {
    if (pFVar27 == pFVar25) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(local_res10,&local_188);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
LAB_14adec76e:
        if ((FMetasoundFrontendClassInput *)local_188.Data.AllocatorInstance.Data !=
            (FMetasoundFrontendClassInput *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      return (FMetasoundFrontendNode *)0x0;
    }
    if (*pFVar27 == param_1) {
      pFVar26 = pFVar23;
      if (param_3 != (FGuid *)0x0) {
        pFVar26 = param_3;
      }
      if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
        return pFVar16;
      }
      pIVar2 = (this->DocumentCache).Object;
      plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,pFVar26);
      lVar18 = (**(code **)(*plVar17 + 0x28))(plVar17,pFVar27 + 0x11);
      if (lVar18 == 0) {
        local_228.Type = Invalid;
        local_228.ClassName.Namespace.ComparisonIndex.Value = 0;
        local_228.ClassName.Namespace.Number = 0;
        local_228.ClassName.Name.ComparisonIndex.Value = 0;
        local_228.ClassName.Name.Number = 0;
        local_2b0 = Metasound::FrontendInvalidID;
        local_228.ClassName.Variant.ComparisonIndex.Value = 0;
        local_228.ClassName.Variant.Number = 0;
        local_228.Version.Major = 1;
        local_228.Version.Minor = 0;
        local_2b8 = &___7FMetasoundFrontendClass__6B_;
        FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_2a0);
        local_268 = (FMetasoundFrontendClassInput *)0x0;
        local_260 = 0;
        local_258 = (FScriptContainerElement *)0x0;
        local_250 = 0;
        local_248 = (FScriptContainerElement *)0x0;
        local_240 = 0;
        local_238.A = 0;
        local_238.B = 0;
        local_238.C = 0;
        local_238.D = 0;
        pIVar19 = Metasound::Frontend::IDataTypeRegistry::Get();
        cVar12 = (**(code **)((longlong)*pIVar19 + 0xe8))(pIVar19,pFVar27 + 1,&local_2b8);
        if (cVar12 != '\0') {
          pFVar20 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                              (&local_68,&local_2a0);
          uVar5._0_1_ = pFVar20->Type;
          uVar5._1_3_ = *(undefined3 *)&pFVar20->field_0x1;
          uVar5._4_4_ = (pFVar20->ClassName).Namespace.ComparisonIndex;
          uVar6 = *(undefined8 *)&(pFVar20->ClassName).Namespace.Number;
          local_228._0_4_ = SUB84(uVar5,0);
          local_228.ClassName.Namespace.Number = (uint)uVar6;
          local_228.ClassName.Name.ComparisonIndex.Value = (uint)((ulonglong)uVar6 >> 0x20);
          uVar6 = *(undefined8 *)&(pFVar20->ClassName).Name.Number;
          uVar7 = *(undefined8 *)&(pFVar20->ClassName).Variant.Number;
          local_228.ClassName.Name.Number = (uint)uVar6;
          local_228.ClassName.Variant.ComparisonIndex.Value = (uint)((ulonglong)uVar6 >> 0x20);
          local_228.ClassName.Variant.Number = (uint)uVar7;
          local_228.Version.Major = (int)((ulonglong)uVar7 >> 0x20);
          local_228.Version.Minor = (pFVar20->Version).Minor;
          local_228.ClassName.Namespace.ComparisonIndex.Value = uVar5._4_4_;
          pFVar21 = FindDependency(this,&local_2a0);
          FVar10 = local_2b0;
          if (pFVar21 == (FMetasoundFrontendClass *)0x0) {
            local_f8._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
            local_f8.Metadata.ChangeID.D = local_2a0.ChangeID.D;
            local_f8.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)local_268;
            local_f8.Interface.Inputs.ArrayNum = (int)local_260;
            local_f8.Interface.Inputs.ArrayMax = local_260._4_4_;
            local_f8.Interface.Outputs.AllocatorInstance.Data = local_258;
            local_f8.Interface.Outputs.ArrayNum = (int)local_250;
            local_f8.Interface.Outputs.ArrayMax = local_250._4_4_;
            local_f8.ID.A = local_2b0.A;
            local_f8.ID.B = local_2b0.B;
            local_f8.ID.C = local_2b0.C;
            local_f8.ID.D = local_2b0.D;
            local_f8.Interface.Environment.AllocatorInstance.Data = local_248;
            local_f8.Interface.Environment.ArrayNum = (int)local_240;
            local_f8.Metadata.ClassName.Namespace = local_2a0.ClassName.Namespace;
            local_f8.Metadata.ClassName.Name = local_2a0.ClassName.Name;
            local_f8.Interface.Environment.ArrayMax = local_240._4_4_;
            local_240 = 0;
            local_f8.Metadata.ClassName.Variant = local_2a0.ClassName.Variant;
            local_f8.Metadata.Version = local_2a0.Version;
            local_268 = (FMetasoundFrontendClassInput *)0x0;
            local_f8.Metadata.Type = local_2a0.Type;
            local_f8.Metadata._33_1_ = local_2a0._33_1_;
            local_f8.Metadata.AccessFlags = local_2a0.AccessFlags;
            local_f8.Metadata.ChangeID.A = local_2a0.ChangeID.A;
            local_f8.Metadata.ChangeID.B = local_2a0.ChangeID.B;
            local_f8.Metadata.ChangeID.C = local_2a0.ChangeID.C;
            local_260 = 0;
            local_258 = (FScriptContainerElement *)0x0;
            local_250 = 0;
            local_248 = (FScriptContainerElement *)0x0;
            local_f8.Interface.ChangeID.A = local_238.A;
            local_f8.Interface.ChangeID.B = local_238.B;
            local_f8.Interface.ChangeID.C = local_238.C;
            local_f8.Interface.ChangeID.D = local_238.D;
            local_2b0 = FVar10;
            pFVar21 = AddDependency(this,&local_f8);
            if ((pFVar21 == (FMetasoundFrontendClass *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Dependency",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                    ,0x692,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
              return pFVar16;
            }
          }
          if (local_248 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248);
          }
          if (local_258 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258);
          }
          DestructItems<FMetasoundFrontendClassInput,int>(local_268,(int)local_260);
          if (local_268 != (FMetasoundFrontendClassInput *)0x0) {
            FMemory::Free(local_268);
          }
          local_198.A = param_2->A;
          local_198.B = param_2->B;
          local_198.C = param_2->C;
          local_198.D = param_2->D;
          local_1c0 = local_res20;
          local_1c8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddGraphVariableMutatorNode'::__l2::<lambda_1>,void,FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&>
                      ::Call;
          pFVar26 = pFVar23;
          if (param_3 != (FGuid *)0x0) {
            pFVar26 = param_3;
          }
          pFVar16 = AddNodeInternal(this,&local_228,
                                    (TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
                                     *)&local_1c8,pFVar26,&local_198,(int *)0x0);
          if (pFVar16 == (FMetasoundFrontendNode *)0x0) {
            return (FMetasoundFrontendNode *)0x0;
          }
          FLazyName::Resolve(&Metasound::VariableNames::InputDataName);
          pFVar22 = FindNodeInput(this,&pFVar16->ID,local_1f0,param_3);
          if ((pFVar22 == (FMetasoundFrontendVertex *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("MutatorDataInput",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                  ,0x69c,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
            return pFVar16;
          }
          SetNodeInputDefault(this,&pFVar16->ID,&pFVar22->VertexID,
                              (FMetasoundFrontendLiteral *)(pFVar27 + 2),param_3);
          uVar13 = (pFVar16->ID).B;
          uVar8 = (pFVar16->ID).C;
          uVar9 = (pFVar16->ID).D;
          uVar1 = pFVar27[0x16].ComparisonIndex.Value;
          local_200 = pFVar27[0xf];
          FStack_1f8 = pFVar27[0x10];
          pFVar27[0x11].ComparisonIndex = (FNameEntryId)(pFVar16->ID).A;
          pFVar27[0x11].Number = uVar13;
          pFVar27[0x12].ComparisonIndex = (FNameEntryId)uVar8;
          pFVar27[0x12].Number = uVar9;
          if (uVar1 != 0) {
            uVar13 = 0;
            if ((int)(uVar1 - 1) < (int)uVar1) {
              uVar13 = ~(uVar1 - 1) >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar4 = (code *)swi(3);
              pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
              return pFVar16;
            }
            pFVar25 = (FName *)((longlong)pFVar27[0x15] + -0x10 +
                               (longlong)(int)pFVar27[0x16].ComparisonIndex.Value * 0x10);
            local_200 = *pFVar25;
            FStack_1f8 = pFVar25[1];
          }
          if (param_3 != (FGuid *)0x0) {
            pFVar23 = param_3;
          }
          if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
            return pFVar16;
          }
          pIVar2 = (this->DocumentCache).Object;
          plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,pFVar23);
          lVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
          if (lVar18 == 0) {
            bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3428680960856553815>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                ,0x6a9,"SourceVariableNode");
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
              return pFVar16;
            }
          }
          else {
            FLazyName::Resolve(&Metasound::VariableNames::InputVariableName);
            pFVar22 = FindNodeInput(this,&pFVar16->ID,local_1e8,param_3);
            if ((pFVar22 == (FMetasoundFrontendVertex *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("MutatorNodeInput",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                    ,0x6ac,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
              return pFVar16;
            }
            pFVar23 = &this->BuildPageID;
            if (param_3 != (FGuid *)0x0) {
              pFVar23 = param_3;
            }
            if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
              return pFVar16;
            }
            pIVar2 = (this->DocumentCache).Object;
            plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,pFVar23);
            pFVar23 = (FGuid *)(**(code **)(*plVar17 + 0x28))(plVar17,&local_200);
            if ((pFVar23 == (FGuid *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("VariableSourceNode",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                    ,0x6af,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
              return pFVar16;
            }
            FLazyName::Resolve(&Metasound::VariableNames::OutputVariableName);
            pFVar24 = FindNodeOutput(this,pFVar23,local_1e0,param_3);
            if ((pFVar24 == (FMetasoundFrontendVertex *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SourceVariableNodeOutput",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                    ,0x6b2,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
              return pFVar16;
            }
            local_178 = local_200;
            FStack_170 = FStack_1f8;
            local_168 = pFVar24->VertexID;
            local_158 = pFVar16->ID;
            local_148 = pFVar22->VertexID;
            AddEdge(this,(FMetasoundFrontendEdge *)&local_178,param_3);
          }
          uVar1 = pFVar27[0x14].ComparisonIndex.Value;
          if (uVar1 == 0) {
            return pFVar16;
          }
          if (((int)uVar1 < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
            return pFVar16;
          }
          FVar3 = pFVar27[0x13];
          FLazyName::Resolve(&Metasound::VariableNames::OutputVariableName);
          pFVar22 = FindNodeOutput(this,&pFVar16->ID,local_1d8,param_3);
          if ((pFVar22 == (FMetasoundFrontendVertex *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("MutatorNodeOutput",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                  ,0x6c1,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
            return pFVar16;
          }
          FLazyName::Resolve(&Metasound::VariableNames::InputVariableName);
          pFVar24 = FindNodeInput(this,(FGuid *)FVar3,local_1d0,param_3);
          if ((pFVar24 == (FMetasoundFrontendVertex *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AccessorNodeInput",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                  ,0x6c4,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            pFVar16 = (FMetasoundFrontendNode *)(*pcVar4)();
            return pFVar16;
          }
          RemoveEdgeToNodeInput(this,(FGuid *)FVar3,&pFVar24->VertexID,param_3);
          local_138.FromNodeID.A = (pFVar16->ID).A;
          local_138.FromNodeID.B = (pFVar16->ID).B;
          local_138.FromNodeID.C = (pFVar16->ID).C;
          local_138.FromNodeID.D = (pFVar16->ID).D;
          local_138.FromVertexID = pFVar22->VertexID;
          local_138.ToNodeID = *(FGuid *)FVar3;
          local_138.ToVertexID = pFVar24->VertexID;
          AddEdge(this,&local_138,param_3);
          return pFVar16;
        }
        if (1 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString(pFVar27 + 1,&local_1a8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
        }
        if (local_248 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248);
        }
        if (local_258 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258);
        }
        DestructItems<FMetasoundFrontendClassInput,int>(local_268,(int)local_260);
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_268;
      }
      else {
        if ((byte)LogMetaSound._0_1_ < 2) {
          return (FMetasoundFrontendNode *)0x0;
        }
        ::FName::ToString(local_res10,&local_1b8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        local_188.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      goto LAB_14adec76e;
    }
    pFVar27 = pFVar27 + 0x17;
  } while( true );
}

// AddGraphVariableNode @ 14adec7a0

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddGraphVariableNode
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,EMetasoundFrontendClassType param_2
          ,FGuid *param_3,FGuid *param_4)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendNode *pFVar3;
  FGuid local_38;
  FGuid local_28;
  FGuid local_18;
  
  if (param_2 == VariableDeferredAccessor) {
    local_18.A = param_3->A;
    local_18.B = param_3->B;
    local_18.C = param_3->C;
    local_18.D = param_3->D;
    pFVar3 = AddGraphVariableDeferredAccessorNode(this,param_1,&local_18,param_4);
    return pFVar3;
  }
  if (param_2 == VariableAccessor) {
    local_28.A = param_3->A;
    local_28.B = param_3->B;
    local_28.C = param_3->C;
    local_28.D = param_3->D;
    pFVar3 = AddGraphVariableAccessorNode(this,param_1,&local_28,param_4);
    return pFVar3;
  }
  if (param_2 == VariableMutator) {
    local_38.A = param_3->A;
    local_38.B = param_3->B;
    local_38.C = param_3->C;
    local_38.D = param_3->D;
    pFVar3 = AddGraphVariableMutatorNode(this,param_1,&local_38,param_4);
    return pFVar3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0x5d7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMetasoundFrontendNode *)(*pcVar1)();
    return pFVar3;
  }
  return (FMetasoundFrontendNode *)0x0;
}

// AddInterface @ 14adec850

bool __thiscall
FMetaSoundFrontendDocumentBuilder::AddInterface
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = AddInterfaceInternal(this,param_1,true,(FMetaSoundFrontendDocumentBuilder *)0x0);
  return bVar1;
}

// AddInterface @ 14adec870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::AddInterface
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,bool param_2,
          FMetaSoundFrontendDocumentBuilder *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  FName FVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ISearchEngine *pIVar10;
  FMetasoundFrontendDocument *pFVar11;
  IInterfaceRegistry *pIVar12;
  FString *pFVar13;
  longlong *plVar14;
  UStruct *this_00;
  FMetasoundFrontendInterface *pFVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  ForElementType<FSetElementId> FVar19;
  FName *pFVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  FMetasoundFrontendVersion *pFVar23;
  FName FStackX_10;
  undefined1 auStack_268 [32];
  FMetasoundFrontendInterface *pFStack_248;
  FMetasoundFrontendInterface *pFStack_240;
  longlong lStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [8];
  ForAnyElementType FStack_210;
  undefined8 uStack_208;
  ForAnyElementType FStack_200;
  undefined8 uStack_1f8;
  FMetasoundFrontendInterface FStack_1e8;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> TStack_188;
  FMetasoundFrontendClassInput *pFStack_178;
  undefined8 uStack_170;
  void *pvStack_168;
  undefined8 uStack_160;
  void *pvStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  FMetasoundFrontendVersion FStack_138;
  void *pvStack_128;
  undefined8 uStack_120;
  FMetaSoundFrontendDocumentBuilder *pFStack_118;
  FTopLevelAssetPath FStack_110;
  FString FStack_100;
  FString FStack_f0;
  FString FStack_e0;
  FString FStack_d0;
  FString FStack_c0;
  undefined1 auStack_a8 [72];
  longlong *plStack_60;
  FMetaSoundFrontendDocumentBuilder *pFStack_58;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_268;
  pFStack_178 = (FMetasoundFrontendClassInput *)0x0;
  uStack_170 = 0;
  pvStack_168 = (void *)0x0;
  uStack_160 = 0;
  pvStack_158 = (void *)0x0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  FStack_138.Name.ComparisonIndex.Value = 0;
  FStack_138.Name.Number = 0;
  FStack_138.Number.Major = 1;
  FStack_138.Number.Minor = 0;
  pvStack_128 = (void *)0x0;
  uStack_120 = 0;
  FStackX_10 = param_1;
  pFStack_118 = param_3;
  pIVar10 = Metasound::Frontend::ISearchEngine::Get();
  cVar4 = (**(code **)((longlong)*pIVar10 + 0x20))(pIVar10,FStackX_10,&pFStack_178);
  if (cVar4 != '\0') {
    pFVar11 = GetDocumentChecked(this);
    FVar3 = FStack_138.Name;
    uVar22 = FStack_138.Number.Major * 0x40 + FStack_138.Number.Minor +
             ((uint)FStack_138.Number.Major >> 2) + 0x9e3779b9 ^ FStack_138.Number.Major;
    uVar7 = ::GetTypeHash(FStack_138.Name.ComparisonIndex);
    uVar7 = uVar7 + FVar3.Number;
    if (*(int *)&(pFVar11->Interfaces).Elements.field_0x8 !=
        *(int *)&(pFVar11->Interfaces).Elements.field_0x34) {
      FVar19 = (pFVar11->Interfaces).Hash.SecondaryData;
      if (FVar19 == (ForElementType<FSetElementId>)0x0) {
        FVar19 = (ForElementType<FSetElementId>)&(pFVar11->Interfaces).Hash;
      }
      iVar9 = *(int *)((longlong)FVar19 +
                      (ulonglong)
                      ((pFVar11->Interfaces).HashSize - 1U &
                      (uVar7 * 0x40 + uVar22 + 0x9e3779b9 + (uVar7 >> 2) ^ uVar7)) * 4);
      if (iVar9 != -1) {
        lVar17 = *(longlong *)&(pFVar11->Interfaces).Elements;
        do {
          lVar16 = (longlong)iVar9;
          if (((*(FName *)(lVar17 + lVar16 * 0x18) == FStack_138.Name) &&
              (*(int *)(lVar17 + 8 + lVar16 * 0x18) == FStack_138.Number.Major)) &&
             (*(int *)(lVar17 + 0xc + lVar16 * 0x18) == FStack_138.Number.Minor)) {
            if (iVar9 != -1) {
              if (6 < (byte)LogMetaSound._0_1_) {
                ::FName::ToString(&FStackX_10,&FStack_f0);
                UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
                if (FStack_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_f0.Data.AllocatorInstance.Data);
                }
              }
              bVar5 = true;
              goto LAB_14aded0a5;
            }
            break;
          }
          iVar9 = *(int *)(lVar17 + 0x10 + lVar16 * 0x18);
        } while (iVar9 != -1);
      }
    }
    pIVar10 = Metasound::Frontend::ISearchEngine::Get();
    (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,&TStack_188,FStack_138.Name);
    TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>::Remove(&TStack_188,&FStack_138);
    iVar9 = TStack_188.ArrayNum;
    FStack_210.Data = (FScriptContainerElement *)0x0;
    pFVar23 = (FMetasoundFrontendVersion *)
              (TStack_188.AllocatorInstance.Data + (longlong)iVar9 * 0x10);
    uStack_208 = 0;
    FVar21.Data = TStack_188.AllocatorInstance.Data;
    while( true ) {
      plVar18 = (longlong *)0x0;
      if (TStack_188.ArrayNum != iVar9) {
        auStack_218[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVersion,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStack_218);
      }
      if ((FMetasoundFrontendVersion *)FVar21.Data == pFVar23) break;
      FStack_1e8._padding_ = 0;
      FStack_1e8._padding_ = 0;
      FStack_1e8._padding_ = 0;
      FStack_1e8._padding_ = 0;
      FStack_1e8._padding_ = 0;
      FStack_1e8._padding_ = 0;
      FStack_1e8._padding_ = 0;
      FStack_1e8._padding_ = 0;
      FStack_1e8.Metadata.Version.Name.ComparisonIndex.Value = 0;
      FStack_1e8.Metadata.Version.Name.Number = 0;
      FStack_1e8.Metadata.Version.Number.Major = 1;
      FStack_1e8.Metadata.Version.Number.Minor = 0;
      FStack_1e8.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1e8.Metadata.UClassOptions.ArrayNum = 0;
      FStack_1e8.Metadata.UClassOptions.ArrayMax = 0;
      pIVar12 = Metasound::Frontend::IInterfaceRegistry::Get();
      pcVar2 = *(code **)((longlong)*pIVar12 + 0x18);
      pFVar13 = Metasound::Frontend::GetInterfaceRegistryKey
                          (&FStack_e0,(FMetasoundFrontendVersion *)FVar21.Data);
      cVar4 = (*pcVar2)(pIVar12,pFVar13,&FStack_1e8);
      if (FStack_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_e0.Data.AllocatorInstance.Data);
      }
      if (cVar4 != '\0') {
        if (FStack_210.Data <= &FStack_1e8) {
          if (&FStack_1e8 <
              (FMetasoundFrontendInterface *)(FStack_210.Data + (longlong)uStack_208._4_4_ * 0x60))
          {
            lStack_230 = (longlong)(int)uStack_208;
            uStack_228 = 0x60;
            pFStack_248 = &FStack_1e8;
            pFStack_240 = (FMetasoundFrontendInterface *)FStack_210.Data;
            lStack_238 = (longlong)uStack_208._4_4_;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
          }
        }
        iVar8 = (int)uStack_208;
        if ((int)uStack_208 == uStack_208._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x860,&FStack_210,(int *)((longlong)&uStack_208 + 4));
        }
        uStack_208 = CONCAT44(uStack_208._4_4_,iVar8 + 1);
        lVar17 = (longlong)iVar8 * 0x60;
        *(undefined8 *)&FStack_210.Data[lVar17].field_0x0 = 0;
        *(longlong *)&FStack_210.Data[lVar17].field_0x0 = FStack_1e8._padding_;
        FStack_1e8._padding_ = 0;
        *(int *)(FStack_210.Data + lVar17 + 8) = (int)FStack_1e8._padding_;
        *(undefined4 *)(FStack_210.Data + lVar17 + 0xc) = FStack_1e8._padding_._4_4_;
        FStack_1e8._padding_ = 0;
        *(undefined8 *)(FStack_210.Data + lVar17 + 0x10) = 0;
        *(longlong *)(FStack_210.Data + lVar17 + 0x10) = FStack_1e8._padding_;
        FStack_1e8._padding_ = 0;
        *(undefined4 *)(FStack_210.Data + lVar17 + 0x18) = (undefined4)FStack_1e8._padding_;
        *(undefined4 *)(FStack_210.Data + lVar17 + 0x1c) = FStack_1e8._padding_._4_4_;
        FStack_1e8._padding_ = 0;
        *(undefined8 *)(FStack_210.Data + lVar17 + 0x20) = 0;
        *(longlong *)(FStack_210.Data + lVar17 + 0x20) = FStack_1e8._padding_;
        FStack_1e8._padding_ = 0;
        *(undefined4 *)(FStack_210.Data + lVar17 + 0x28) = (undefined4)FStack_1e8._padding_;
        *(undefined4 *)(FStack_210.Data + lVar17 + 0x2c) = FStack_1e8._padding_._4_4_;
        FStack_1e8._padding_ = 0;
        *(longlong *)(FStack_210.Data + lVar17 + 0x30) = FStack_1e8._padding_;
        *(longlong *)(FStack_210.Data + lVar17 + 0x30 + 8) = FStack_1e8._padding_;
        pFVar1 = (FName *)(FStack_210.Data + lVar17 + 0x40);
        *pFVar1 = FStack_1e8.Metadata.Version.Name;
        pFVar1[1].ComparisonIndex = (FNameEntryId)FStack_1e8.Metadata.Version.Number.Major;
        pFVar1[1].Number = FStack_1e8.Metadata.Version.Number.Minor;
        *(undefined8 *)(FStack_210.Data + lVar17 + 0x50) = 0;
        *(FScriptContainerElement **)(FStack_210.Data + lVar17 + 0x50) =
             FStack_1e8.Metadata.UClassOptions.AllocatorInstance.Data;
        FStack_1e8.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(FStack_210.Data + lVar17 + 0x58) = FStack_1e8.Metadata.UClassOptions.ArrayNum;
        *(int *)(FStack_210.Data + lVar17 + 0x5c) = FStack_1e8.Metadata.UClassOptions.ArrayMax;
        FStack_1e8.Metadata.UClassOptions.ArrayNum = 0;
        FStack_1e8.Metadata.UClassOptions.ArrayMax = 0;
      }
      if (FStack_1e8.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(FStack_1e8.Metadata.UClassOptions.AllocatorInstance.Data);
      }
      if ((void *)FStack_1e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)FStack_1e8._padding_);
      }
      if ((void *)FStack_1e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)FStack_1e8._padding_);
      }
      DestructItems<FMetasoundFrontendClassInput,int>
                ((FMetasoundFrontendClassInput *)FStack_1e8._padding_,(int)FStack_1e8._padding_);
      if ((FMetasoundFrontendClassInput *)FStack_1e8._padding_ !=
          (FMetasoundFrontendClassInput *)0x0) {
        FMemory::Free((void *)FStack_1e8._padding_);
      }
      FVar21.Data = FVar21.Data + 0x10;
    }
    Metasound::Frontend::GetInterfaceRegistryKey(&FStack_100,&FStack_138);
    pIVar12 = Metasound::Frontend::IInterfaceRegistry::Get();
    plVar14 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x10))(pIVar12,&FStack_100);
    if (plVar14 != (longlong *)0x0) {
      if (((*(longlong *)&this->DocumentInterface == 0) ||
          (plVar18 = *(longlong **)&(this->DocumentInterface).field_0x8, plVar18 == (longlong *)0x0)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Interface",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                   ,0xe0a,
                                   L"Failed to return class path; interface must always be valid while builder is operating on MetaSound UObject!"
                                  ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      this_00 = (UStruct *)(**(code **)(*plVar18 + 0x20))(plVar18);
      UStruct::GetStructPathName(this_00,&FStack_110);
      lVar17 = (**(code **)(*plVar14 + 8))(plVar14);
      pFVar20 = *(FName **)(lVar17 + 0x50);
      pFVar1 = (FName *)((longlong)pFVar20 + (longlong)*(int *)(lVar17 + 0x58) * 0x14);
      for (; pFVar20 != pFVar1; pFVar20 = (FName *)&pFVar20[2].Number) {
        if ((*pFVar20 == FStack_110.PackageName) && (pFVar20[1] == FStack_110.AssetName)) {
          if ((param_2) && ((char)pFVar20[2].ComparisonIndex.Value == '\0')) {
            if (1 < (byte)LogMetaSound._0_1_) {
              FTopLevelAssetPath::ToString(&FStack_110,&FStack_c0);
              ::FName::ToString(&FStackX_10,&FStack_d0);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              if (FStack_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_d0.Data.AllocatorInstance.Data);
              }
              if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
              }
            }
            bVar5 = false;
            goto LAB_14adecf89;
          }
          break;
        }
      }
      FStack_200.Data = (FScriptContainerElement *)0x0;
      uStack_1f8 = 0;
      pFVar15 = (FMetasoundFrontendInterface *)(**(code **)(*plVar14 + 8))(plVar14);
      if (FStack_200.Data <= pFVar15) {
        if (pFVar15 < (FMetasoundFrontendInterface *)
                      (FStack_200.Data + (longlong)uStack_1f8._4_4_ * 0x60)) {
          lStack_230 = (longlong)(int)uStack_1f8;
          uStack_228 = 0x60;
          pFStack_240 = (FMetasoundFrontendInterface *)FStack_200.Data;
          pFStack_248 = pFVar15;
          lStack_238 = (longlong)uStack_1f8._4_4_;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
        }
      }
      iVar9 = (int)uStack_1f8;
      if ((int)uStack_1f8 == uStack_1f8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x860,&FStack_200,(int *)((longlong)&uStack_1f8 + 4));
      }
      uStack_1f8._0_4_ = iVar9 + 1;
      FMetasoundFrontendInterface::FMetasoundFrontendInterface
                ((FMetasoundFrontendInterface *)(FStack_200.Data + (longlong)iVar9 * 0x60),pFVar15);
      auStack_a8._0_8_ = FStack_210.Data;
      auStack_a8._8_4_ = (int)uStack_208;
      auStack_a8._12_4_ = uStack_208._4_4_;
      auStack_a8._16_8_ = FStack_200.Data;
      auStack_a8._24_4_ = (int)uStack_1f8;
      auStack_a8._28_4_ = uStack_1f8._4_4_;
      pFStack_58 = pFStack_118;
      FStack_210.Data = (FScriptContainerElement *)0x0;
      uStack_208 = 0;
      FStack_200.Data = (FScriptContainerElement *)0x0;
      uStack_1f8 = 0;
      auStack_a8._32_8_ = 0;
      plStack_60 = (longlong *)0x0;
      bVar5 = ModifyInterfaces(this,(FModifyInterfaceOptions *)auStack_a8);
      if (auStack_a8._32_8_ != 0) {
        plVar18 = (longlong *)(auStack_a8 + 0x30);
        if (plStack_60 != (longlong *)0x0) {
          plVar18 = plStack_60;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      DestructItems<FMetasoundFrontendInterface,int>
                ((FMetasoundFrontendInterface *)auStack_a8._16_8_,auStack_a8._24_4_);
      if ((FMetasoundFrontendInterface *)auStack_a8._16_8_ != (FMetasoundFrontendInterface *)0x0) {
        FMemory::Free((void *)auStack_a8._16_8_);
      }
      DestructItems<FMetasoundFrontendInterface,int>
                ((FMetasoundFrontendInterface *)auStack_a8._0_8_,auStack_a8._8_4_);
      if ((FMetasoundFrontendInterface *)auStack_a8._0_8_ != (FMetasoundFrontendInterface *)0x0) {
        FMemory::Free((void *)auStack_a8._0_8_);
      }
      DestructItems<FMetasoundFrontendInterface,int>
                ((FMetasoundFrontendInterface *)FStack_200.Data,(int)uStack_1f8);
      if ((FMetasoundFrontendInterface *)FStack_200.Data != (FMetasoundFrontendInterface *)0x0) {
        FMemory::Free(FStack_200.Data);
      }
LAB_14adecf89:
      if (FStack_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_100.Data.AllocatorInstance.Data);
      }
      DestructItems<FMetasoundFrontendInterface,int>
                ((FMetasoundFrontendInterface *)FStack_210.Data,(int)uStack_208);
      if ((FMetasoundFrontendInterface *)FStack_210.Data != (FMetasoundFrontendInterface *)0x0) {
        FMemory::Free(FStack_210.Data);
      }
      if ((FMetasoundFrontendVersion *)TStack_188.AllocatorInstance.Data !=
          (FMetasoundFrontendVersion *)0x0) {
        FMemory::Free(TStack_188.AllocatorInstance.Data);
      }
      goto LAB_14aded0a5;
    }
    if (FStack_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_100.Data.AllocatorInstance.Data);
    }
    DestructItems<FMetasoundFrontendInterface,int>
              ((FMetasoundFrontendInterface *)FStack_210.Data,(int)uStack_208);
    if ((FMetasoundFrontendInterface *)FStack_210.Data != (FMetasoundFrontendInterface *)0x0) {
      FMemory::Free(FStack_210.Data);
    }
    if ((FMetasoundFrontendVersion *)TStack_188.AllocatorInstance.Data !=
        (FMetasoundFrontendVersion *)0x0) {
      FMemory::Free(TStack_188.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14aded0a5:
  if (pvStack_128 != (void *)0x0) {
    FMemory::Free(pvStack_128);
  }
  if (pvStack_158 != (void *)0x0) {
    FMemory::Free(pvStack_158);
  }
  if (pvStack_168 != (void *)0x0) {
    FMemory::Free(pvStack_168);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(pFStack_178,(int)uStack_170);
  if (pFStack_178 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(pFStack_178);
  }
  return bVar5;
}

// AddInterfaceInternal @ 14adec880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::AddInterfaceInternal
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,bool param_2,
          FMetaSoundFrontendDocumentBuilder *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  FName FVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ISearchEngine *pIVar10;
  FMetasoundFrontendDocument *pFVar11;
  IInterfaceRegistry *pIVar12;
  FString *pFVar13;
  longlong *plVar14;
  UStruct *this_00;
  FMetasoundFrontendInterface *pFVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  ForElementType<FSetElementId> FVar19;
  FName *pFVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  FMetasoundFrontendVersion *pFVar23;
  FName local_res10;
  undefined1 auStack_268 [32];
  FMetasoundFrontendInterface *local_248;
  FMetasoundFrontendInterface *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined1 local_218 [8];
  ForAnyElementType local_210;
  undefined8 local_208;
  ForAnyElementType local_200;
  undefined8 local_1f8;
  FMetasoundFrontendInterface local_1e8;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_188;
  FMetasoundFrontendClassInput *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  FMetasoundFrontendVersion local_138;
  void *local_128;
  undefined8 local_120;
  FMetaSoundFrontendDocumentBuilder *local_118;
  FTopLevelAssetPath local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [72];
  longlong *local_60;
  FMetaSoundFrontendDocumentBuilder *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_178 = (FMetasoundFrontendClassInput *)0x0;
  local_170 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138.Name.ComparisonIndex.Value = 0;
  local_138.Name.Number = 0;
  local_138.Number.Major = 1;
  local_138.Number.Minor = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_res10 = param_1;
  local_118 = param_3;
  pIVar10 = Metasound::Frontend::ISearchEngine::Get();
  cVar4 = (**(code **)((longlong)*pIVar10 + 0x20))(pIVar10,local_res10,&local_178);
  if (cVar4 != '\0') {
    pFVar11 = GetDocumentChecked(this);
    FVar3 = local_138.Name;
    uVar22 = local_138.Number.Major * 0x40 + local_138.Number.Minor +
             ((uint)local_138.Number.Major >> 2) + 0x9e3779b9 ^ local_138.Number.Major;
    uVar7 = ::GetTypeHash(local_138.Name.ComparisonIndex);
    uVar7 = uVar7 + FVar3.Number;
    if (*(int *)&(pFVar11->Interfaces).Elements.field_0x8 !=
        *(int *)&(pFVar11->Interfaces).Elements.field_0x34) {
      FVar19 = (pFVar11->Interfaces).Hash.SecondaryData;
      if (FVar19 == (ForElementType<FSetElementId>)0x0) {
        FVar19 = (ForElementType<FSetElementId>)&(pFVar11->Interfaces).Hash;
      }
      iVar9 = *(int *)((longlong)FVar19 +
                      (ulonglong)
                      ((pFVar11->Interfaces).HashSize - 1U &
                      (uVar7 * 0x40 + uVar22 + 0x9e3779b9 + (uVar7 >> 2) ^ uVar7)) * 4);
      if (iVar9 != -1) {
        lVar17 = *(longlong *)&(pFVar11->Interfaces).Elements;
        do {
          lVar16 = (longlong)iVar9;
          if (((*(FName *)(lVar17 + lVar16 * 0x18) == local_138.Name) &&
              (*(int *)(lVar17 + 8 + lVar16 * 0x18) == local_138.Number.Major)) &&
             (*(int *)(lVar17 + 0xc + lVar16 * 0x18) == local_138.Number.Minor)) {
            if (iVar9 != -1) {
              if (6 < (byte)LogMetaSound._0_1_) {
                ::FName::ToString(&local_res10,&local_f0);
                UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
                if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                }
              }
              bVar5 = true;
              goto LAB_14aded0a5;
            }
            break;
          }
          iVar9 = *(int *)(lVar17 + 0x10 + lVar16 * 0x18);
        } while (iVar9 != -1);
      }
    }
    pIVar10 = Metasound::Frontend::ISearchEngine::Get();
    (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,&local_188,local_138.Name);
    TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>::Remove(&local_188,&local_138);
    iVar9 = local_188.ArrayNum;
    local_210.Data = (FScriptContainerElement *)0x0;
    pFVar23 = (FMetasoundFrontendVersion *)
              (local_188.AllocatorInstance.Data + (longlong)iVar9 * 0x10);
    local_208 = 0;
    FVar21.Data = local_188.AllocatorInstance.Data;
    while( true ) {
      plVar18 = (longlong *)0x0;
      if (local_188.ArrayNum != iVar9) {
        local_218[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVersion,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_218);
      }
      if ((FMetasoundFrontendVersion *)FVar21.Data == pFVar23) break;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8.Metadata.Version.Name.ComparisonIndex.Value = 0;
      local_1e8.Metadata.Version.Name.Number = 0;
      local_1e8.Metadata.Version.Number.Major = 1;
      local_1e8.Metadata.Version.Number.Minor = 0;
      local_1e8.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Metadata.UClassOptions.ArrayNum = 0;
      local_1e8.Metadata.UClassOptions.ArrayMax = 0;
      pIVar12 = Metasound::Frontend::IInterfaceRegistry::Get();
      pcVar2 = *(code **)((longlong)*pIVar12 + 0x18);
      pFVar13 = Metasound::Frontend::GetInterfaceRegistryKey
                          (&local_e0,(FMetasoundFrontendVersion *)FVar21.Data);
      cVar4 = (*pcVar2)(pIVar12,pFVar13,&local_1e8);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (cVar4 != '\0') {
        if (local_210.Data <= &local_1e8) {
          if (&local_1e8 <
              (FMetasoundFrontendInterface *)(local_210.Data + (longlong)local_208._4_4_ * 0x60)) {
            local_230 = (longlong)(int)local_208;
            local_228 = 0x60;
            local_248 = &local_1e8;
            local_240 = (FMetasoundFrontendInterface *)local_210.Data;
            local_238 = (longlong)local_208._4_4_;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
          }
        }
        iVar8 = (int)local_208;
        if ((int)local_208 == local_208._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x860,&local_210,(int *)((longlong)&local_208 + 4));
        }
        local_208 = CONCAT44(local_208._4_4_,iVar8 + 1);
        lVar17 = (longlong)iVar8 * 0x60;
        *(undefined8 *)&local_210.Data[lVar17].field_0x0 = 0;
        *(longlong *)&local_210.Data[lVar17].field_0x0 = local_1e8._padding_;
        local_1e8._padding_ = 0;
        *(int *)(local_210.Data + lVar17 + 8) = (int)local_1e8._padding_;
        *(undefined4 *)(local_210.Data + lVar17 + 0xc) = local_1e8._padding_._4_4_;
        local_1e8._padding_ = 0;
        *(undefined8 *)(local_210.Data + lVar17 + 0x10) = 0;
        *(longlong *)(local_210.Data + lVar17 + 0x10) = local_1e8._padding_;
        local_1e8._padding_ = 0;
        *(undefined4 *)(local_210.Data + lVar17 + 0x18) = (undefined4)local_1e8._padding_;
        *(undefined4 *)(local_210.Data + lVar17 + 0x1c) = local_1e8._padding_._4_4_;
        local_1e8._padding_ = 0;
        *(undefined8 *)(local_210.Data + lVar17 + 0x20) = 0;
        *(longlong *)(local_210.Data + lVar17 + 0x20) = local_1e8._padding_;
        local_1e8._padding_ = 0;
        *(undefined4 *)(local_210.Data + lVar17 + 0x28) = (undefined4)local_1e8._padding_;
        *(undefined4 *)(local_210.Data + lVar17 + 0x2c) = local_1e8._padding_._4_4_;
        local_1e8._padding_ = 0;
        *(longlong *)(local_210.Data + lVar17 + 0x30) = local_1e8._padding_;
        *(longlong *)(local_210.Data + lVar17 + 0x30 + 8) = local_1e8._padding_;
        pFVar1 = (FName *)(local_210.Data + lVar17 + 0x40);
        *pFVar1 = local_1e8.Metadata.Version.Name;
        pFVar1[1].ComparisonIndex = (FNameEntryId)local_1e8.Metadata.Version.Number.Major;
        pFVar1[1].Number = local_1e8.Metadata.Version.Number.Minor;
        *(undefined8 *)(local_210.Data + lVar17 + 0x50) = 0;
        *(FScriptContainerElement **)(local_210.Data + lVar17 + 0x50) =
             local_1e8.Metadata.UClassOptions.AllocatorInstance.Data;
        local_1e8.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_210.Data + lVar17 + 0x58) = local_1e8.Metadata.UClassOptions.ArrayNum;
        *(int *)(local_210.Data + lVar17 + 0x5c) = local_1e8.Metadata.UClassOptions.ArrayMax;
        local_1e8.Metadata.UClassOptions.ArrayNum = 0;
        local_1e8.Metadata.UClassOptions.ArrayMax = 0;
      }
      if (local_1e8.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_1e8.Metadata.UClassOptions.AllocatorInstance.Data);
      }
      if ((void *)local_1e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1e8._padding_);
      }
      if ((void *)local_1e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1e8._padding_);
      }
      DestructItems<FMetasoundFrontendClassInput,int>
                ((FMetasoundFrontendClassInput *)local_1e8._padding_,(int)local_1e8._padding_);
      if ((FMetasoundFrontendClassInput *)local_1e8._padding_ != (FMetasoundFrontendClassInput *)0x0
         ) {
        FMemory::Free((void *)local_1e8._padding_);
      }
      FVar21.Data = FVar21.Data + 0x10;
    }
    Metasound::Frontend::GetInterfaceRegistryKey(&local_100,&local_138);
    pIVar12 = Metasound::Frontend::IInterfaceRegistry::Get();
    plVar14 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x10))(pIVar12,&local_100);
    if (plVar14 != (longlong *)0x0) {
      if (((*(longlong *)&this->DocumentInterface == 0) ||
          (plVar18 = *(longlong **)&(this->DocumentInterface).field_0x8, plVar18 == (longlong *)0x0)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Interface",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                   ,0xe0a,
                                   L"Failed to return class path; interface must always be valid while builder is operating on MetaSound UObject!"
                                  ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      this_00 = (UStruct *)(**(code **)(*plVar18 + 0x20))(plVar18);
      UStruct::GetStructPathName(this_00,&local_110);
      lVar17 = (**(code **)(*plVar14 + 8))(plVar14);
      pFVar20 = *(FName **)(lVar17 + 0x50);
      pFVar1 = (FName *)((longlong)pFVar20 + (longlong)*(int *)(lVar17 + 0x58) * 0x14);
      for (; pFVar20 != pFVar1; pFVar20 = (FName *)&pFVar20[2].Number) {
        if ((*pFVar20 == local_110.PackageName) && (pFVar20[1] == local_110.AssetName)) {
          if ((param_2) && ((char)pFVar20[2].ComparisonIndex.Value == '\0')) {
            if (1 < (byte)LogMetaSound._0_1_) {
              FTopLevelAssetPath::ToString(&local_110,&local_c0);
              ::FName::ToString(&local_res10,&local_d0);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
            }
            bVar5 = false;
            goto LAB_14adecf89;
          }
          break;
        }
      }
      local_200.Data = (FScriptContainerElement *)0x0;
      local_1f8 = 0;
      pFVar15 = (FMetasoundFrontendInterface *)(**(code **)(*plVar14 + 8))(plVar14);
      if (local_200.Data <= pFVar15) {
        if (pFVar15 < (FMetasoundFrontendInterface *)
                      (local_200.Data + (longlong)local_1f8._4_4_ * 0x60)) {
          local_230 = (longlong)(int)local_1f8;
          local_228 = 0x60;
          local_240 = (FMetasoundFrontendInterface *)local_200.Data;
          local_248 = pFVar15;
          local_238 = (longlong)local_1f8._4_4_;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
        }
      }
      iVar9 = (int)local_1f8;
      if ((int)local_1f8 == local_1f8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x860,&local_200,(int *)((longlong)&local_1f8 + 4));
      }
      local_1f8._0_4_ = iVar9 + 1;
      FMetasoundFrontendInterface::FMetasoundFrontendInterface
                ((FMetasoundFrontendInterface *)(local_200.Data + (longlong)iVar9 * 0x60),pFVar15);
      local_a8._0_8_ = local_210.Data;
      local_a8._8_4_ = (int)local_208;
      local_a8._12_4_ = local_208._4_4_;
      local_a8._16_8_ = local_200.Data;
      local_a8._24_4_ = (int)local_1f8;
      local_a8._28_4_ = local_1f8._4_4_;
      local_58 = local_118;
      local_210.Data = (FScriptContainerElement *)0x0;
      local_208 = 0;
      local_200.Data = (FScriptContainerElement *)0x0;
      local_1f8 = 0;
      local_a8._32_8_ = 0;
      local_60 = (longlong *)0x0;
      bVar5 = ModifyInterfaces(this,(FModifyInterfaceOptions *)local_a8);
      if (local_a8._32_8_ != 0) {
        plVar18 = (longlong *)(local_a8 + 0x30);
        if (local_60 != (longlong *)0x0) {
          plVar18 = local_60;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      DestructItems<FMetasoundFrontendInterface,int>
                ((FMetasoundFrontendInterface *)local_a8._16_8_,local_a8._24_4_);
      if ((FMetasoundFrontendInterface *)local_a8._16_8_ != (FMetasoundFrontendInterface *)0x0) {
        FMemory::Free((void *)local_a8._16_8_);
      }
      DestructItems<FMetasoundFrontendInterface,int>
                ((FMetasoundFrontendInterface *)local_a8._0_8_,local_a8._8_4_);
      if ((FMetasoundFrontendInterface *)local_a8._0_8_ != (FMetasoundFrontendInterface *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      DestructItems<FMetasoundFrontendInterface,int>
                ((FMetasoundFrontendInterface *)local_200.Data,(int)local_1f8);
      if ((FMetasoundFrontendInterface *)local_200.Data != (FMetasoundFrontendInterface *)0x0) {
        FMemory::Free(local_200.Data);
      }
LAB_14adecf89:
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      DestructItems<FMetasoundFrontendInterface,int>
                ((FMetasoundFrontendInterface *)local_210.Data,(int)local_208);
      if ((FMetasoundFrontendInterface *)local_210.Data != (FMetasoundFrontendInterface *)0x0) {
        FMemory::Free(local_210.Data);
      }
      if ((FMetasoundFrontendVersion *)local_188.AllocatorInstance.Data !=
          (FMetasoundFrontendVersion *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      goto LAB_14aded0a5;
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    DestructItems<FMetasoundFrontendInterface,int>
              ((FMetasoundFrontendInterface *)local_210.Data,(int)local_208);
    if ((FMetasoundFrontendInterface *)local_210.Data != (FMetasoundFrontendInterface *)0x0) {
      FMemory::Free(local_210.Data);
    }
    if ((FMetasoundFrontendVersion *)local_188.AllocatorInstance.Data !=
        (FMetasoundFrontendVersion *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14aded0a5:
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_178,(int)local_170);
  if (local_178 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_178);
  }
  return bVar5;
}

// AddNamedEdges @ 14aded130

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::AddNamedEdges
          (FMetaSoundFrontendDocumentBuilder *this,
          TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
          *param_1,TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3,FGuid *param_4)

{
  FMetasoundFrontendEdge *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  IDocumentCache *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FMetasoundFrontendGraph *pFVar7;
  FMetasoundFrontendEdge *pFVar8;
  TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  EInvalidEdgeReason EVar12;
  char cVar13;
  int iVar14;
  FMetasoundFrontendDocument *pFVar15;
  longlong lVar16;
  FMetasoundFrontendVertex *this_00;
  longlong *plVar17;
  uint *puVar18;
  FName *this_01;
  FName *this_02;
  longlong lVar19;
  ulonglong uVar20;
  wchar_t *pwVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  FGuid *pFVar26;
  undefined1 *puVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  FGuid *pFVar29;
  bool local_278;
  undefined1 local_277;
  undefined1 local_276 [6];
  ForAnyElementType local_270;
  undefined8 local_268;
  TBitArray<FDefaultBitArrayAllocator> *local_260;
  FGuid *local_258;
  FScriptContainerElement *local_250;
  uint local_248;
  FMetasoundFrontendNode *local_240;
  FMetasoundFrontendGraph *local_238;
  int local_230;
  int local_22c;
  FMetasoundFrontendEdge *local_228;
  FString local_220;
  TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
  *local_210;
  int iStack_208;
  uint uStack_204;
  undefined1 *local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
  *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  FGuid local_1b0;
  FGuid local_1a0;
  FGuid local_190;
  FGuid local_180;
  longlong local_170;
  longlong lStack_168;
  FMetasoundFrontendEdge local_158;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  if (param_4 == (FGuid *)0x0) {
    param_4 = &this->BuildPageID;
  }
  pFVar15 = GetDocumentChecked(this);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  pIVar4 = (this->DocumentCache).Object;
  local_258 = (FGuid *)(**(code **)(*(longlong *)pIVar4 + 0x40))(pIVar4,param_4);
  local_238 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar15->RootGraph,param_4);
  iStack_208 = 0;
  if (param_2 != (TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268 = 0;
  iVar14 = *(int *)&(param_1->Elements).field_0x28;
  uStack_204 = 1;
  local_278 = true;
  local_1f0 = 0;
  iStack_1f4 = local_1f0;
  if (iVar14 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar28;
    }
    uVar24 = *puVar18;
    local_1f0 = 0;
    iStack_208 = 0;
    while (uVar24 == 0) {
      lVar19 = (longlong)iStack_208;
      local_1f0 = local_1f0 + 0x20;
      iStack_208 = iStack_208 + 1;
      iStack_1f4 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_208) goto LAB_14aded29d;
      uVar24 = puVar18[lVar19 + 1];
    }
    uStack_204 = -uVar24 & uVar24;
    uVar2 = (ulonglong)uStack_204 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_230 = (int)lVar19;
    iStack_1f4 = local_1f0 + -1 + local_230;
    if (iVar14 < iStack_1f4) {
      iStack_1f4 = iVar14;
    }
  }
LAB_14aded29d:
  uVar24 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_1ec = local_4c;
  uVar23 = uVar24 & 0xffffffe0;
  iStack_1e8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_1f8 = 0xffffffff;
  TStack_1d8._padding_ = CONCAT44(uStack_204,iStack_208);
  TStack_1d8.CurrentBitIndex = iStack_1f4;
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar24 >> 5;
  TStack_1d8._28_4_ = local_4c;
  TStack_1d8.BaseBitIndex = local_1f0;
  uStack_1b8 = CONCAT44(uStack_1e4,iStack_1e8);
  local_260 = pTVar28;
  local_210 = param_1;
  local_200 = (undefined1 *)pTVar28;
  local_1e0 = param_1;
  TStack_1d8.Array = pTVar28;
  if ((((int)uVar24 < 0) || (iVar14 < (int)uVar24)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar24 != uVar3) {
    puVar27 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = (undefined1 *)pTVar28;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar22 * 4);
    while (uVar24 == 0) {
      lVar19 = (longlong)iVar22;
      uVar23 = uVar23 + 0x20;
      iVar22 = iVar22 + 1;
      uVar24 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14aded3a0;
      uVar24 = *(uint *)(puVar27 + lVar19 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_22c = (int)lVar19;
    uVar24 = local_22c + -1 + uVar23;
    if ((int)uVar3 < (int)uVar24) {
      uVar24 = uVar3;
    }
  }
LAB_14aded3a0:
  while( true ) {
    pTVar9 = local_1e0;
    if (*(int *)&(local_1e0->Elements).field_0x8 - *(int *)&(local_1e0->Elements).field_0x34 !=
        (int)uStack_1b8) {
      local_277 = 0;
      `TSparseArray<TSparseSetElement<Metasound::Frontend::FNamedEdge>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_277);
    }
    pFVar29 = local_258;
    uVar2 = local_268;
    if (((TStack_1d8.CurrentBitIndex == uVar24) && (TStack_1d8.Array == pTVar28)) &&
       (pTVar9 == param_1)) break;
    puVar25 = (undefined8 *)
              ((longlong)TStack_1d8.CurrentBitIndex * 0x38 + *(longlong *)&pTVar9->Elements);
    lVar19 = (**(code **)(*(longlong *)local_258 + 0x50))(local_258,puVar25,*(FName *)(puVar25 + 2))
    ;
    lVar16 = (**(code **)(*(longlong *)pFVar29 + 0x40))(pFVar29,puVar25 + 3);
    if ((lVar19 != 0) && (lVar16 != 0)) {
      local_158.FromNodeID._0_8_ = *puVar25;
      local_158.FromNodeID._8_8_ = puVar25[1];
      local_158.FromVertexID._0_8_ = *(undefined8 *)(lVar19 + 0x10);
      local_158.FromVertexID._8_8_ = *(undefined8 *)(lVar19 + 0x18);
      local_158.ToNodeID._0_8_ = puVar25[3];
      local_158.ToNodeID._8_8_ = puVar25[4];
      local_158.ToVertexID._0_8_ = *(undefined8 *)(lVar16 + 0x10);
      local_158.ToVertexID._8_8_ = *(undefined8 *)(lVar16 + 0x18);
      EVar12 = IsValidEdge(this,&local_158,(FGuid *)0x0);
      if (EVar12 == None) {
        local_1b0.A = local_158.FromNodeID.A;
        local_1b0.B = local_158.FromNodeID.B;
        local_1b0.C = local_158.FromNodeID.C;
        local_1b0.D = local_158.FromNodeID.D;
        local_1a0.A = local_158.FromVertexID.A;
        local_1a0.B = local_158.FromVertexID.B;
        local_1a0.C = local_158.FromVertexID.C;
        local_1a0.D = local_158.FromVertexID.D;
        local_190.A = local_158.ToNodeID.A;
        local_190.B = local_158.ToNodeID.B;
        local_190.C = local_158.ToNodeID.C;
        local_190.D = local_158.ToNodeID.D;
        local_180.A = local_158.ToVertexID.A;
        local_180.B = local_158.ToVertexID.B;
        local_180.C = local_158.ToVertexID.C;
        local_180.D = local_158.ToVertexID.D;
        local_170 = lVar19;
        lStack_168 = lVar16;
        if (((local_270.Data <= &local_1b0) &&
            (&local_1b0 < (FGuid *)(local_270.Data + (longlong)local_268._4_4_ * 0x50))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        iVar14 = (int)local_268;
        if ((int)local_268 == local_268._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&local_270,(int *)((longlong)&local_268 + 4));
        }
        lVar19 = (longlong)iVar14;
        local_268 = CONCAT44(local_268._4_4_,iVar14 + 1);
        *(undefined8 *)(local_270.Data + lVar19 * 0x50) = local_1b0._0_8_;
        *(undefined8 *)(local_270.Data + lVar19 * 0x50 + 8) = local_1b0._8_8_;
        *(undefined8 *)(local_270.Data + lVar19 * 0x50 + 0x10) = local_1a0._0_8_;
        *(undefined8 *)(local_270.Data + lVar19 * 0x50 + 0x10 + 8) = local_1a0._8_8_;
        *(undefined8 *)(local_270.Data + lVar19 * 0x50 + 0x20) = local_190._0_8_;
        *(undefined8 *)(local_270.Data + lVar19 * 0x50 + 0x20 + 8) = local_190._8_8_;
        *(undefined8 *)(local_270.Data + lVar19 * 0x50 + 0x30) = local_180._0_8_;
        *(undefined8 *)(local_270.Data + lVar19 * 0x50 + 0x30 + 8) = local_180._8_8_;
        *(longlong *)(local_270.Data + lVar19 * 0x50 + 0x40) = local_170;
        *(longlong *)(local_270.Data + lVar19 * 0x50 + 0x40 + 8) = lStack_168;
      }
      else {
        local_278 = false;
        if (1 < (byte)LogMetaSound._0_1_) {
          if (EVar12 == None) {
            pwVar21 = L"No reason";
          }
          else if (EVar12 == MismatchedAccessType) {
            pwVar21 = L"Mismatched Access Type";
          }
          else if (EVar12 == MismatchedDataType) {
            pwVar21 = L"Mismatched DataType";
          }
          else if (EVar12 == MissingInput) {
            pwVar21 = L"Missing Input";
          }
          else if (EVar12 == MissingOutput) {
            pwVar21 = L"Missing Output";
          }
          else {
            pwVar21 = L"COUNT";
          }
          ::FString::FString(&local_220,pwVar21);
          ::FName::ToString((FName *)(puVar25 + 5),&local_108);
          ::FName::ToString((FName *)(puVar25 + 2),&local_118);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
    pTVar28 = local_260;
  }
  uVar20 = (ulonglong)(int)local_268;
  local_248 = (local_238->Edges).ArrayNum;
  pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)(local_270.Data + 0x30);
  local_228 = (FMetasoundFrontendEdge *)(local_270.Data + uVar20 * 0x50);
  pFVar29 = (FGuid *)(local_270.Data + 0x20);
  do {
    while( true ) {
      pFVar8 = local_228;
      local_260 = pTVar28;
      local_258 = pFVar29;
      if ((int)local_268 != (int)uVar20) {
        local_276[0] = 0;
        `TCheckedPointerIterator<`FMetaSoundFrontendDocumentBuilder::AddNamedEdges'::__l2::FNewEdgeData,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_276);
      }
      pFVar7 = local_238;
      pFVar1 = (FMetasoundFrontendEdge *)((longlong)pTVar28 + -0x30);
      if (pFVar1 == pFVar8) {
        if ((param_2 != (TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *)0x0)
           && (iVar14 = (local_238->Edges).ArrayNum, uVar24 = local_248, (int)local_248 < iVar14)) {
          do {
            uVar23 = 0;
            if ((int)uVar24 < iVar14) {
              uVar23 = ~uVar24 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            pFVar5 = (param_2->AllocatorInstance).Data;
            local_250 = (pFVar7->Edges).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x40;
            if (((pFVar5 <= (FScriptContainerElement *)&local_250) &&
                ((FScriptContainerElement *)&local_250 < pFVar5 + (longlong)param_2->ArrayMax * 8))
               && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            iVar14 = param_2->ArrayNum;
            if (iVar14 == param_2->ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            uVar24 = uVar24 + 1;
            param_2->ArrayNum = iVar14 + 1;
            *(FScriptContainerElement **)((param_2->AllocatorInstance).Data + (longlong)iVar14 * 8)
                 = local_250;
            iVar14 = (pFVar7->Edges).ArrayNum;
          } while ((int)uVar24 < iVar14);
        }
        if ((FGuid *)local_270.Data != (FGuid *)0x0) {
          FMemory::Free(local_270.Data);
        }
        return local_278;
      }
      if (param_3) break;
      pFVar26 = param_4;
      if (param_4 == (FGuid *)0x0) {
        pFVar26 = &this->BuildPageID;
      }
      if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      pIVar4 = (this->DocumentCache).Object;
      plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar4 + 0x50))(pIVar4,pFVar26);
      cVar13 = (**(code **)(*plVar17 + 0x10))(plVar17,(FGuid *)((longlong)pTVar28 + -0x10),pTVar28);
      if (cVar13 == '\0') {
        AddEdge(this,pFVar1,param_4);
        pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar28 + 0x50);
        uVar20 = uVar2 & 0xffffffff;
        pFVar29 = pFVar29 + 5;
      }
      else {
        local_278 = false;
        if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        pIVar4 = (this->DocumentCache).Object;
        plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar4 + 0x50))(pIVar4,param_4);
        puVar18 = (uint *)(**(code **)(*plVar17 + 0x28))
                                    (plVar17,(FGuid *)((longlong)pTVar28 + -0x10),pTVar28);
        if (puVar18 != (uint *)0x0) {
          uVar24 = 0;
          if ((int)*puVar18 < (local_238->Edges).ArrayNum) {
            uVar24 = ~*puVar18 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
        }
        if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        pIVar4 = (this->DocumentCache).Object;
        plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar4 + 0x40))(pIVar4,pFVar26);
        this_01 = (FName *)(**(code **)(*plVar17 + 0x48))
                                     (plVar17,(FGuid *)((longlong)pTVar28 + -0x10),pTVar28);
        if ((this_01 == (FName *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Input",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                ,0x3f9,
                                L"Prior loop to check edge validity should protect against missing input vertex"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        pIVar4 = (this->DocumentCache).Object;
        plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar4 + 0x40))(pIVar4,pFVar26);
        this_02 = (FName *)(**(code **)(*plVar17 + 0x58))
                                     (plVar17,pFVar1,(FGuid *)((longlong)pTVar28 + -0x20));
        if ((this_01 == (FName *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Input",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                ,0x3fc,
                                L"Prior loop to check edge validity should protect against missing output vertex"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        if (2 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString(this_02,local_78);
          ::FName::ToString(this_01,&local_88);
          ::FName::ToString(this_02,&local_98);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
          }
        }
        pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar28 + 0x50);
        uVar20 = uVar2 & 0xffffffff;
        pFVar29 = pFVar29 + 5;
      }
    }
    local_240 = (FMetasoundFrontendNode *)0x0;
    this_00 = FindNodeOutputConnectedToNodeInput(this,pFVar29,(FGuid *)pTVar28,&local_240,param_4);
    bVar10 = RemoveEdgeToNodeInput
                       (this,(FGuid *)((longlong)pTVar28 + -0x10),(FGuid *)pTVar28,param_4);
    if (bVar10) {
      if ((local_240 == (FMetasoundFrontendNode *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("OldOutputNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                              ,0x3d4,
                              L"MetaSound edge was removed from output but output node not found."),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      if ((this_00 == (FMetasoundFrontendVertex *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("OldOutputVertex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                              ,0x3d5,
                              L"MetaSound edge was removed from output but output vertex not found."
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      pIVar4 = (this->DocumentCache).Object;
      plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar4 + 0x40))(pIVar4,&this->BuildPageID);
      lVar19 = (**(code **)(*plVar17 + 0x28))(plVar17,(FGuid *)((longlong)pTVar28 + -0x10));
      if ((lVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InputNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                              ,0x3d8,L"Edge was deemed valid but input parent node is missing"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      pIVar4 = (this->DocumentCache).Object;
      plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar4 + 0x40))(pIVar4,&this->BuildPageID);
      lVar16 = (**(code **)(*plVar17 + 0x28))(plVar17,pFVar1);
      if ((lVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutputNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                              ,0x3db,L"Edge was deemed valid but output parent node is missing"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      if (5 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(*(FName **)((longlong)pTVar28 + 0x10),&local_a8);
        ::FName::ToString((FName *)(lVar16 + 0x20),&local_b8);
        ::FName::ToString(*(FName **)&((FGuid *)((longlong)local_260 + 0x10))->C,&local_c8);
        ::FName::ToString((FName *)(lVar19 + 0x20),&local_d8);
        ::FName::ToString(&this_00->Name,&local_e8);
        ::FName::ToString(&local_240->Name,&local_f8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        pTVar28 = local_260;
        pFVar29 = local_258;
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          pTVar28 = local_260;
          pFVar29 = local_258;
        }
      }
    }
    AddEdge(this,pFVar1,param_4);
    pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar28 + 0x50);
    uVar20 = uVar2 & 0xffffffff;
    pFVar29 = pFVar29 + 5;
  } while( true );
}

// AddNodeByClassInternal @ 14adedec0

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddNodeByClassInternal
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClass *param_1,FGuid *param_2,
          FGuid *param_3)

{
  EMetasoundFrontendClassType EVar1;
  FMetasoundFrontendClass *pFVar2;
  FMetasoundFrontendNode *pFVar3;
  undefined1 local_res10 [8];
  undefined1 local_c8 [16];
  FGuid local_b8;
  FMetasoundFrontendClass local_a8;
  
  EVar1 = FMetasoundFrontendClassMetadata::GetType(&param_1->Metadata);
  if (EVar1 < Input) {
    (param_1->Metadata).Type = External;
    pFVar2 = FindDependency(this,&param_1->Metadata);
    if (pFVar2 == (FMetasoundFrontendClass *)0x0) {
      pFVar2 = FMetasoundFrontendClass::FMetasoundFrontendClass(&local_a8,param_1);
      pFVar2 = AddDependency(this,pFVar2);
      if (pFVar2 == (FMetasoundFrontendClass *)0x0) goto LAB_14adedf84;
    }
    if (param_3 == (FGuid *)0x0) {
      param_3 = &this->BuildPageID;
    }
    local_b8.A = param_2->A;
    local_b8.B = param_2->B;
    local_b8.C = param_2->C;
    local_b8.D = param_2->D;
    local_c8._8_8_ = local_res10;
    local_c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddNodeByClassInternal'::__l29::<lambda_1>,void,FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&>
         ::Call;
    pFVar3 = AddNodeInternal(this,&pFVar2->Metadata,
                             (TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
                              *)local_c8,param_3,&local_b8,(int *)0x0);
  }
  else {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::LexToString(EVar1);
      FMetasoundFrontendClassName::ToString(&(param_1->Metadata).ClassName,(FString *)local_c8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._0_8_);
        return (FMetasoundFrontendNode *)0x0;
      }
    }
LAB_14adedf84:
    pFVar3 = (FMetasoundFrontendNode *)0x0;
  }
  return pFVar3;
}

// AddNodeByClassName @ 14adee000

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddNodeByClassName
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassName *param_1,int param_2,
          int param_3,FGuid *param_4,FGuid *param_5)

{
  char cVar1;
  INodeClassRegistry *pIVar2;
  FMetasoundFrontendNode *pFVar3;
  ForAnyElementType local_e8;
  undefined8 uStack_e0;
  FMetasoundFrontendClass local_d8;
  FNodeClassRegistryKey local_48;
  
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_48,External,param_1,param_2,param_3);
  local_d8._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  local_d8.ID = Metasound::FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_d8.Metadata);
  pFVar3 = (FMetasoundFrontendNode *)0x0;
  local_d8.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Interface.Inputs.ArrayNum = 0;
  local_d8.Interface.Inputs.ArrayMax = 0;
  local_d8.Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Interface.Outputs.ArrayNum = 0;
  local_d8.Interface.Outputs.ArrayMax = 0;
  local_d8.Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Interface.Environment.ArrayNum = 0;
  local_d8.Interface.Environment.ArrayMax = 0;
  local_d8.Interface.ChangeID.A = 0;
  local_d8.Interface.ChangeID.B = 0;
  local_d8.Interface.ChangeID.C = 0;
  local_d8.Interface.ChangeID.D = 0;
  pIVar2 = Metasound::Frontend::INodeClassRegistry::GetChecked();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2,&local_48,&local_d8);
  if (cVar1 == '\0') {
    if (1 < (byte)LogMetaSound._0_1_) {
      FMetasoundFrontendClassName::ToString(param_1,(FString *)&local_e8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
    }
  }
  else {
    local_e8.Data = *(FScriptContainerElement **)param_4;
    uStack_e0._0_4_ = param_4->C;
    uStack_e0._4_4_ = param_4->D;
    pFVar3 = AddNodeByClassInternal(this,&local_d8,(FGuid *)&local_e8,param_5);
  }
  if (local_d8.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_d8.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_d8.Interface.Inputs.AllocatorInstance.Data,
             local_d8.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_d8.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_d8.Interface.Inputs.AllocatorInstance.Data);
  }
  return pFVar3;
}

// AddNodeByClassName @ 14adee180

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddNodeByClassName
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassName *param_1,int param_2,
          FGuid *param_3,FGuid *param_4)

{
  char cVar1;
  ISearchEngine *pIVar2;
  FMetasoundFrontendNode *pFVar3;
  ForAnyElementType local_b8;
  undefined8 uStack_b0;
  FMetasoundFrontendClass local_a8;
  
  local_a8._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  local_a8.ID = Metasound::FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_a8.Metadata);
  pFVar3 = (FMetasoundFrontendNode *)0x0;
  local_a8.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Interface.Inputs.ArrayNum = 0;
  local_a8.Interface.Inputs.ArrayMax = 0;
  local_a8.Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Interface.Outputs.ArrayNum = 0;
  local_a8.Interface.Outputs.ArrayMax = 0;
  local_a8.Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Interface.Environment.ArrayNum = 0;
  local_a8.Interface.Environment.ArrayMax = 0;
  local_a8.Interface.ChangeID.A = 0;
  local_a8.Interface.ChangeID.B = 0;
  local_a8.Interface.ChangeID.C = 0;
  local_a8.Interface.ChangeID.D = 0;
  pIVar2 = Metasound::Frontend::ISearchEngine::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,param_1,param_2,&local_a8);
  if (cVar1 == '\0') {
    if (1 < (byte)LogMetaSound._0_1_) {
      FMetasoundFrontendClassName::ToString(param_1,(FString *)&local_b8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
    }
  }
  else {
    local_b8.Data = *(FScriptContainerElement **)param_3;
    uStack_b0._0_4_ = param_3->C;
    uStack_b0._4_4_ = param_3->D;
    pFVar3 = AddNodeByClassInternal(this,&local_a8,(FGuid *)&local_b8,param_4);
  }
  if (local_a8.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_a8.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_a8.Interface.Inputs.AllocatorInstance.Data,
             local_a8.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_a8.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_a8.Interface.Inputs.AllocatorInstance.Data);
  }
  return pFVar3;
}

// AddNodeByTemplate @ 14adee2e0

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddNodeByTemplate
          (FMetaSoundFrontendDocumentBuilder *this,INodeTemplate *param_1,
          FNodeTemplateGenerateInterfaceParams *param_2,FGuid *param_3,FGuid *param_4)

{
  FMetasoundFrontendNodeInterface *pFVar1;
  IDocumentCache *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  EMetasoundFrontendClassType EVar5;
  bool bVar6;
  longlong lVar7;
  FMetasoundFrontendNode *pFVar8;
  FMetasoundFrontendClass *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_158;
  int local_150;
  int local_14c;
  FScriptContainerElement *local_148;
  int local_140;
  int local_13c;
  code *local_138;
  undefined1 *local_130;
  FGuid local_128;
  void *local_118 [2];
  void *local_108;
  void *local_f8;
  FNodeClassRegistryKey local_e8;
  FMetasoundFrontendClass local_c0;
  
  lVar7 = (**(code **)((longlong)*param_1 + 0x30))(param_1);
  EVar5 = FMetasoundFrontendClassMetadata::GetType
                    ((FMetasoundFrontendClassMetadata *)(lVar7 + 0x18));
  if ((EVar5 != Template) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TemplateClass.Metadata.GetType() == EMetasoundFrontendClassType::Template"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x77e,L"INodeTemplate ClassType must always be \'Template\'"), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
    return pFVar8;
  }
  EVar5 = FMetasoundFrontendClassMetadata::GetType
                    ((FMetasoundFrontendClassMetadata *)(lVar7 + 0x18));
  if ((EVar5 == Graph) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0xb49,
                         L"Dependencies are never listed as \'Graph\' types. Graphs are considered \'External\' from the perspective of the parent document to allow for nativization."
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
    return pFVar8;
  }
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_e8,(FMetasoundFrontendClassMetadata *)(lVar7 + 0x18));
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
    return pFVar8;
  }
  pIVar2 = (this->DocumentCache).Object;
  pFVar9 = (FMetasoundFrontendClass *)(**(code **)(*(longlong *)pIVar2 + 0x20))(pIVar2,&local_e8);
  if (pFVar9 == (FMetasoundFrontendClass *)0x0) {
    local_c0.ID._0_8_ = *(undefined8 *)(lVar7 + 8);
    local_c0.ID._8_8_ = *(undefined8 *)(lVar7 + 0x10);
    local_c0.Metadata.ClassName.Namespace = *(FName *)(lVar7 + 0x18);
    local_c0.Metadata.ClassName.Name = *(FName *)(lVar7 + 0x20);
    local_c0._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
    local_c0.Metadata.ChangeID.D = *(uint *)(lVar7 + 0x48);
    local_c0.Metadata.ClassName.Variant = *(FName *)(lVar7 + 0x28);
    local_c0.Metadata.Version = *(FMetasoundFrontendVersionNumber *)(lVar7 + 0x30);
    local_c0.Metadata._32_8_ = *(undefined8 *)(lVar7 + 0x38);
    local_c0.Metadata.ChangeID._4_8_ = *(undefined8 *)(lVar7 + 0x40);
    FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
              (&local_c0.Interface,(FMetasoundFrontendClassInterface *)(lVar7 + 0x50));
    pFVar9 = AddDependency(this,&local_c0);
    if ((pFVar9 == (FMetasoundFrontendClass *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dependency",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0x785,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
      return pFVar8;
    }
  }
  if (param_4 == (FGuid *)0x0) {
    param_4 = &this->BuildPageID;
  }
  local_128.A = param_3->A;
  local_128.B = param_3->B;
  local_128.C = param_3->C;
  local_128.D = param_3->D;
  local_130 = local_res8;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::AddNodeByTemplate'::__l2::<lambda_1>,void,FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&>
              ::Call;
  pFVar8 = AddNodeInternal(this,&pFVar9->Metadata,
                           (TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
                            *)&local_138,param_4,&local_128,(int *)0x0);
  if ((pFVar8 == (FMetasoundFrontendNode *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x78b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
    return pFVar8;
  }
  pcVar4 = *(code **)*param_1;
  local_158 = (param_2->InputsToConnect).AllocatorInstance.Data;
  (param_2->InputsToConnect).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150 = (param_2->InputsToConnect).ArrayNum;
  local_14c = (param_2->InputsToConnect).ArrayMax;
  (param_2->InputsToConnect).ArrayNum = 0;
  (param_2->InputsToConnect).ArrayMax = 0;
  local_148 = (param_2->OutputsToConnect).AllocatorInstance.Data;
  (param_2->OutputsToConnect).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140 = (param_2->OutputsToConnect).ArrayNum;
  local_13c = (param_2->OutputsToConnect).ArrayMax;
  (param_2->OutputsToConnect).ArrayNum = 0;
  (param_2->OutputsToConnect).ArrayMax = 0;
  puVar10 = (undefined8 *)(*pcVar4)(param_1,local_118,&local_158);
  pFVar1 = &pFVar8->Interface;
  if (pFVar1 != (FMetasoundFrontendNodeInterface *)puVar10) {
    pFVar3 = (pFVar1->Inputs).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)*puVar10;
    *puVar10 = 0;
    (pFVar8->Interface).Inputs.ArrayNum = *(int *)(puVar10 + 1);
    (pFVar8->Interface).Inputs.ArrayMax = *(int *)((longlong)puVar10 + 0xc);
    puVar10[1] = 0;
  }
  puVar11 = puVar10 + 2;
  pTVar12 = &(pFVar8->Interface).Outputs;
  if (pTVar12 != (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)puVar11) {
    pFVar3 = (pTVar12->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)*puVar11;
    *puVar11 = 0;
    (pFVar8->Interface).Outputs.ArrayNum = *(int *)(puVar10 + 3);
    (pFVar8->Interface).Outputs.ArrayMax = *(int *)((longlong)puVar10 + 0x1c);
    puVar10[3] = 0;
  }
  puVar11 = puVar10 + 4;
  pTVar12 = &(pFVar8->Interface).Environment;
  if (pTVar12 != (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)puVar11) {
    pFVar3 = (pTVar12->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)*puVar11;
    *puVar11 = 0;
    (pFVar8->Interface).Environment.ArrayNum = *(int *)(puVar10 + 5);
    (pFVar8->Interface).Environment.ArrayMax = *(int *)((longlong)puVar10 + 0x2c);
    puVar10[5] = 0;
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_118[0] != (void *)0x0) {
    FMemory::Free(local_118[0]);
  }
  pFVar3 = (param_2->OutputsToConnect).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_2->InputsToConnect).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return pFVar8;
}

// AddNodeInternal @ 14adee640

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddNodeInternal
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassMetadata *param_1,
          TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
          *param_2,FGuid *param_3,FGuid *param_4,int *param_5)

{
  bool bVar1;
  FMetasoundFrontendNode *pFVar2;
  bool bVar3;
  TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
  local_68;
  FGuid local_58;
  FNodeClassRegistryKey local_48;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetaSoundFrontendDocumentBuilder::AddNodeInternal");
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1965,"FMetaSoundFrontendDocumentBuilder::AddNodeInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
               ,0x7ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1965);
  }
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_48,param_1);
  local_68._0_8_ = *(undefined8 *)param_2;
  local_68._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_58.A = param_4->A;
  local_58.B = param_4->B;
  local_58.C = param_4->C;
  local_58.D = param_4->D;
  pFVar2 = AddNodeInternal(this,&local_48,&local_68,param_3,&local_58,param_5);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return pFVar2;
}

// AddNodeInternal @ 14adee770

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::AddNodeInternal
          (FMetaSoundFrontendDocumentBuilder *this,FNodeClassRegistryKey *param_1,
          TFunctionRef<void___cdecl(FMetasoundFrontendNode_&,Metasound::Frontend::FNodeClassRegistryKey_const_&)>
          *param_2,FGuid *param_3,FGuid *param_4,int *param_5)

{
  int *piVar1;
  IDocumentCache *pIVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  EMetasoundFrontendClassType EVar10;
  int iVar11;
  FMetasoundFrontendNode *pFVar12;
  FMetasoundFrontendClass *pFVar13;
  FMetasoundFrontendDocument *pFVar14;
  FMetasoundFrontendGraph *pFVar15;
  INodeTemplateRegistry *pIVar16;
  longlong *plVar17;
  FInstancedStruct *pFVar18;
  INodeClassRegistry *pIVar19;
  FGraphModifyDelegates *pFVar20;
  bool bVar21;
  TObjectPtr<UScriptStruct_const_>_u_0 local_78;
  undefined8 uStack_70;
  TObjectPtr<UScriptStruct_const_>_u_0 local_68;
  undefined8 local_60;
  FInstancedStruct local_58;
  FInstancedStruct local_48;
  
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetaSoundFrontendDocumentBuilder::AddNodeInternal");
  }
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1975,"FMetaSoundFrontendDocumentBuilder::AddNodeInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
               ,0x7b7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1975);
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FMetasoundFrontendNode *)(*pcVar5)();
    return pFVar12;
  }
  pIVar2 = (this->DocumentCache).Object;
  pFVar13 = (FMetasoundFrontendClass *)(**(code **)(*(longlong *)pIVar2 + 0x20))(pIVar2,param_1);
  if (pFVar13 == (FMetasoundFrontendClass *)0x0) {
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    return (FMetasoundFrontendNode *)0x0;
  }
  pFVar14 = GetDocumentChecked(this);
  pFVar15 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar14->RootGraph,param_3);
  EVar10 = FMetasoundFrontendClassMetadata::GetType(&pFVar13->Metadata);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_78.ObjectPtr);
  if (EVar10 == Template) {
    pIVar16 = Metasound::Frontend::INodeTemplateRegistry::Get();
    plVar17 = (longlong *)(**(code **)((longlong)*pIVar16 + 0x10))(pIVar16,param_1);
    if (plVar17 == (longlong *)0x0) goto LAB_14adee8ed;
    pFVar18 = (FInstancedStruct *)(**(code **)(*plVar17 + 0x20))(plVar17,&local_58);
    FInstancedStruct::operator=((FInstancedStruct *)&local_78.ObjectPtr,pFVar18);
    pFVar18 = &local_58;
  }
  else {
    pIVar19 = Metasound::Frontend::INodeClassRegistry::GetChecked();
    pFVar18 = (FInstancedStruct *)
              (**(code **)((longlong)*pIVar19 + 0x78))(pIVar19,&local_48,param_1);
    FInstancedStruct::operator=((FInstancedStruct *)&local_78.ObjectPtr,pFVar18);
    pFVar18 = &local_48;
  }
  FInstancedStruct::Reset(pFVar18);
LAB_14adee8ed:
  iVar11 = (pFVar15->Nodes).ArrayNum;
  piVar1 = &(pFVar15->Nodes).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x888,(ForAnyElementType *)pFVar15,piVar1);
  }
  (pFVar15->Nodes).ArrayNum = iVar11 + 1;
  pFVar3 = (pFVar15->Nodes).AllocatorInstance.Data;
  local_68.DebugPtr = local_78.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_78.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
  }
  local_60 = uStack_70;
  local_78.DebugPtr = (UScriptStruct *)0x0;
  uStack_70 = 0;
  pFVar12 = FMetasoundFrontendNode::FMetasoundFrontendNode
                      ((FMetasoundFrontendNode *)(pFVar3 + (longlong)iVar11 * 0x88),pFVar13,
                       (TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *)&local_68.ObjectPtr)
  ;
  uVar6 = param_4->B;
  uVar7 = param_4->C;
  uVar8 = param_4->D;
  (pFVar12->ID).A = param_4->A;
  (pFVar12->ID).B = uVar6;
  (pFVar12->ID).C = uVar7;
  (pFVar12->ID).D = uVar8;
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar12,param_1);
  iVar11 = (pFVar15->Nodes).ArrayNum + -1;
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FMetasoundFrontendNode *)(*pcVar5)();
    return pFVar12;
  }
  pIVar2 = (this->DocumentCache).Object;
  (**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_3);
  if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FMetasoundFrontendNode *)(*pcVar5)();
    return pFVar12;
  }
  pFVar20 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                      ((this->DocumentDelegates).Object,param_3);
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&(pFVar20->NodeDelegates).OnNodeAdded,iVar11);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar11;
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_78.ObjectPtr);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return pFVar12;
}

// ApplyNodeInstanceReplacementData @ 14adeea90

void __thiscall
FMetaSoundFrontendDocumentBuilder::ApplyNodeInstanceReplacementData
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendNode *param_1,
          FNodeInstanceReplacementData *param_2,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_4)

{
  uint uVar1;
  uchar *puVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar3;
  undefined1 *puVar4;
  IDocumentCache *pIVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>_>
  *pTVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
  *pTVar12;
  EInvalidEdgeReason EVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 *puVar22;
  FGuid *pFVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  int *piVar26;
  longlong *plVar27;
  int iVar28;
  uint *puVar29;
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
  *pTVar30;
  TMap<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>_>
  *pTVar31;
  FScriptContainerElement *pFVar32;
  FGuid *pFVar33;
  int *piVar34;
  <lambda_1> local_res18;
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226;
  undefined1 local_225;
  undefined1 local_224 [4];
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
  *local_220;
  TMap<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>_>
  *local_218;
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
  *local_210;
  int iStack_208;
  uint uStack_204;
  undefined1 *local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  FScriptContainerElement *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  TTuple<FName,FName> local_1b8;
  TTuple<FName,FName> local_1a8;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  FScriptContainerElement *local_188;
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
  *local_180;
  TMap<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  TObjectPtr<UScriptStruct_const_>_u_0 local_118;
  uchar *local_110;
  FMetasoundFrontendEdge local_108;
  FMetasoundFrontendEdge local_c8;
  undefined4 local_6c;
  undefined4 local_4c;
  
  puVar2 = (param_2->Configuration).InstancedStruct.StructMemory;
  TVar3.ObjectPtr.field0_0x0 =
       (FObjectPtr)(param_2->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  if ((param_1->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr == TVar3.DebugPtr) {
    local_118.ObjectPtr.field0_0x0 = TVar3.ObjectPtr.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar3.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    (param_2->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0
    ;
    (param_2->Configuration).InstancedStruct.StructMemory = (uchar *)0x0;
    local_110 = puVar2;
    SetNodeConfiguration
              (this,&param_1->ID,
               (TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *)&local_118.ObjectPtr,
               &param_2->PageID);
  }
  iVar24 = (param_1->Interface).Inputs.ArrayNum;
  uVar19 = (ulonglong)iVar24;
  local_218 = &param_2->InputConnections;
  pFVar32 = (param_1->Interface).Inputs.AllocatorInstance.Data;
  pFVar25 = pFVar32 + uVar19 * 0x20;
  local_220 = (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
               *)CONCAT44(local_220._4_4_,iVar24);
  pFVar33 = (FGuid *)(pFVar32 + 0x10);
  while( true ) {
    pTVar8 = local_218;
    pTVar31 = &param_2->InputConnections;
    if ((param_1->Interface).Inputs.ArrayNum != (int)uVar19) {
      local_228 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVertex,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_228);
      pTVar31 = pTVar8;
    }
    if (pFVar32 == pFVar25) break;
    lVar21 = *(longlong *)pFVar32;
    lVar6._0_4_ = pFVar33[-1].C;
    lVar6._4_4_ = pFVar33[-1].D;
    local_1b8._0_8_ = lVar21;
    local_1b8._8_8_ = lVar6;
    uVar16 = ::GetTypeHash((FNameEntryId)(uint)lVar21);
    iVar24 = (int)((ulonglong)lVar21 >> 0x20);
    uVar16 = iVar24 + uVar16;
    uVar17 = ::GetTypeHash((FNameEntryId)(undefined4)lVar6);
    if (*(int *)&(param_2->InputConnections).field_0x8 !=
        *(int *)&(param_2->InputConnections).field_0x34) {
      puVar4 = *(undefined1 **)&(param_2->InputConnections).field_0x40;
      puVar22 = &(param_2->InputConnections).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar22 = puVar4;
      }
      iVar28 = *(int *)(puVar22 +
                       (ulonglong)
                       (*(int *)&(param_2->InputConnections).field_0x48 - 1U &
                       (lVar6._4_4_ + uVar16 * 0x40 + (uVar16 >> 2) + uVar17 + 0x9e3779b9 ^ uVar16))
                       * 4);
      if (iVar28 != -1) {
        do {
          plVar20 = (longlong *)
                    ((longlong)iVar28 * 0xa8 + *(longlong *)&(param_2->InputConnections).field_0x0);
          if ((*plVar20 == lVar21) && (plVar20[1] == lVar6)) {
            if (iVar28 != -1) {
              plVar27 = plVar20 + 2;
              if (plVar20 == (longlong *)0x0) {
                plVar27 = (longlong *)0x0;
              }
              if (plVar27 != (longlong *)0x0) {
                if ((char)plVar27[0x11] != '\0') {
                  SetNodeInputDefault(this,&param_1->ID,pFVar33,
                                      (FMetasoundFrontendLiteral *)(plVar27 + 6),&param_2->PageID);
                }
                if ((((*(int *)((longlong)plVar27 + 0xc) != 0 || (int)plVar27[1] != 0) ||
                     *(int *)((longlong)plVar27 + 4) != 0) || (int)*plVar27 != 0) &&
                   (((*(int *)((longlong)plVar27 + 0x1c) != 0 || (int)plVar27[3] != 0) ||
                    *(int *)((longlong)plVar27 + 0x14) != 0) || (int)plVar27[2] != 0)) {
                  local_108.FromNodeID._0_8_ = *plVar27;
                  local_108.FromNodeID._8_8_ = plVar27[1];
                  local_108.FromVertexID._0_8_ = plVar27[2];
                  local_108.FromVertexID._8_8_ = plVar27[3];
                  local_108.ToNodeID.A = (param_1->ID).A;
                  local_108.ToNodeID.B = (param_1->ID).B;
                  local_108.ToNodeID.C = (param_1->ID).C;
                  local_108.ToNodeID.D = (param_1->ID).D;
                  local_108.ToVertexID.A = pFVar33->A;
                  local_108.ToVertexID.B = pFVar33->B;
                  local_108.ToVertexID.C = pFVar33->C;
                  local_108.ToVertexID.D = pFVar33->D;
                  EVar13 = IsValidEdge(this,&local_108,&param_2->PageID);
                  if (EVar13 == None) {
                    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar14)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pIVar5 = (this->DocumentCache).Object;
                    pFVar23 = &param_2->PageID;
                    if (&param_2->PageID == (FGuid *)0x0) {
                      pFVar23 = &this->BuildPageID;
                    }
                    plVar20 = (longlong *)(**(code **)(*(longlong *)pIVar5 + 0x50))(pIVar5,pFVar23);
                    cVar15 = (**(code **)(*plVar20 + 8))(plVar20,&local_108);
                    if (cVar15 == '\0') {
                      AddEdge(this,&local_108,&param_2->PageID);
                    }
                  }
                  if (*(int *)&(param_2->InputConnections).field_0x8 !=
                      *(int *)&(param_2->InputConnections).field_0x34) {
                    uVar16 = ::GetTypeHash((FNameEntryId)(uint)lVar21);
                    uVar16 = iVar24 + uVar16;
                    uVar17 = ::GetTypeHash((FNameEntryId)(undefined4)lVar6);
                    TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
                    ::RemoveImpl<TTuple<FName,FName>_>
                              ((TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
                                *)&param_2->InputConnections,
                               uVar16 * 0x40 + lVar6._4_4_ + (uVar16 >> 2) + uVar17 + 0x9e3779b9 ^
                               uVar16,&local_1b8);
                  }
                }
              }
            }
            break;
          }
          iVar28 = (int)plVar20[0x14];
        } while (iVar28 != -1);
      }
    }
    uVar19 = (ulonglong)local_220 & 0xffffffff;
    pFVar32 = pFVar32 + 0x20;
    pFVar33 = pFVar33 + 2;
  }
  local_218 = (TMap<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>_>
               *)0x1;
  if (param_3 != (TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar24 = *(int *)&(param_2->InputConnections).field_0x28;
    puVar4 = &(param_2->InputConnections).field_0x10;
    uStack_204 = 1;
    iStack_208 = 0;
    local_1f0 = 0;
    iStack_1f4 = 0;
    if (iVar24 != 0) {
      puVar29 = *(uint **)&(param_2->InputConnections).field_0x20;
      if (puVar29 == (uint *)0x0) {
        puVar29 = (uint *)puVar4;
      }
      uVar16 = *puVar29;
      local_1f0 = 0;
      while (uVar16 == 0) {
        lVar21 = (longlong)iStack_208;
        local_1f0 = local_1f0 + 0x20;
        iStack_208 = iStack_208 + 1;
        iStack_1f4 = iVar24;
        if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_208)
        goto LAB_14adeeea4;
        uVar16 = puVar29[lVar21 + 1];
      }
      uStack_204 = -uVar16 & uVar16;
      uVar19 = (ulonglong)uStack_204 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_198 = (int)lVar21;
      iStack_1f4 = local_198 + -1 + local_1f0;
      if (iVar24 < iStack_1f4) {
        iStack_1f4 = iVar24;
      }
    }
LAB_14adeeea4:
    uVar16 = *(uint *)&(param_2->InputConnections).field_0x28;
    uStack_1ec = local_6c;
    iStack_1e8 = *(int *)&(param_2->InputConnections).field_0x8 -
                 *(int *)&(param_2->InputConnections).field_0x34;
    uStack_1f8 = 0xffffffff;
    uVar17 = uVar16 & 0xffffffe0;
    TStack_170._padding_ = CONCAT44(uStack_204,iStack_208);
    TStack_170.CurrentBitIndex = iStack_1f4;
    TStack_170.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)uVar16 >> 5;
    TStack_170._28_4_ = local_6c;
    TStack_170.BaseBitIndex = local_1f0;
    uStack_150 = CONCAT44(uStack_1e4,iStack_1e8);
    local_210 = (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
                 *)pTVar31;
    local_200 = puVar4;
    local_178 = pTVar31;
    TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
    if (((int)uVar16 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar18 = *(uint *)&(param_2->InputConnections).field_0x28;
    if (uVar16 != uVar18) {
      puVar22 = *(undefined1 **)&(param_2->InputConnections).field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar4;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar24 * 4);
      while (uVar16 == 0) {
        lVar21 = (longlong)iVar24;
        uVar17 = uVar17 + 0x20;
        iVar24 = iVar24 + 1;
        uVar16 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_14adeefa0;
        uVar16 = *(uint *)(puVar22 + lVar21 * 4 + 4);
      }
      uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_194 = (int)lVar21;
      uVar16 = local_194 + -1 + uVar17;
      if ((int)uVar18 < (int)uVar16) {
        uVar16 = uVar18;
      }
    }
LAB_14adeefa0:
    while( true ) {
      pTVar8 = local_178;
      if (*(int *)&local_178->field_0x8 - *(int *)&local_178->field_0x34 != (int)uStack_150) {
        local_227 = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_227);
      }
      if (((TStack_170.CurrentBitIndex == uVar16) &&
          (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) &&
         (pTVar8 == pTVar31)) break;
      lVar21 = (longlong)TStack_170.CurrentBitIndex * 0xa8 + *(longlong *)pTVar8;
      if ((((*(int *)(lVar21 + 0x1c) != 0 || *(int *)(lVar21 + 0x18) != 0) ||
           *(int *)(lVar21 + 0x14) != 0) || *(int *)(lVar21 + 0x10) != 0) &&
         (((*(int *)(lVar21 + 0x2c) != 0 || *(int *)(lVar21 + 0x28) != 0) ||
          *(int *)(lVar21 + 0x24) != 0) || *(int *)(lVar21 + 0x20) != 0)) {
        local_1d8 = *(undefined8 *)(lVar21 + 0x30);
        pFVar32 = (param_3->AllocatorInstance).Data;
        uStack_1d0 = *(undefined8 *)(lVar21 + 0x38);
        if ((pFVar32 <= (FScriptContainerElement *)&local_1d8) &&
           (((FScriptContainerElement *)&local_1d8 < pFVar32 + (longlong)param_3->ArrayMax * 0x10 &&
            (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar14)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar24 = param_3->ArrayNum;
        if (iVar24 == param_3->ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar24 + 1;
        pFVar32 = (param_3->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
        *(undefined8 *)pFVar32 = local_1d8;
        *(undefined8 *)(pFVar32 + 8) = uStack_1d0;
      }
      TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
    }
  }
  uVar16 = (param_1->Interface).Outputs.ArrayNum;
  uVar19 = (ulonglong)(int)uVar16;
  pFVar25 = (param_1->Interface).Outputs.AllocatorInstance.Data;
  pTVar30 = (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
             *)&param_2->OutputConnections;
  local_188 = pFVar25 + uVar19 * 0x20;
  pFVar32 = pFVar25 + 0x10;
  local_180 = pTVar30;
  while( true ) {
    pTVar12 = local_180;
    pFVar11 = local_188;
    local_1e0 = pFVar25;
    if ((param_1->Interface).Outputs.ArrayNum != (int)uVar19) {
      local_226 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVertex,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_226);
      pTVar30 = pTVar12;
    }
    if (pFVar25 == pFVar11) break;
    lVar21 = *(longlong *)pFVar25;
    pTVar30 = (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
               *)&param_2->OutputConnections;
    lVar6 = *(longlong *)(pFVar32 + -8);
    local_220 = pTVar30;
    local_1a8._0_8_ = lVar21;
    local_1a8._8_8_ = lVar6;
    uVar17 = ::GetTypeHash((FNameEntryId)(uint)lVar21);
    uVar17 = (int)((ulonglong)lVar21 >> 0x20) + uVar17;
    uVar18 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
    if (*(int *)&(param_2->OutputConnections).field_0x8 !=
        *(int *)&(param_2->OutputConnections).field_0x34) {
      puVar4 = *(undefined1 **)&(param_2->OutputConnections).field_0x40;
      puVar22 = &(param_2->OutputConnections).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar22 = puVar4;
      }
      iVar24 = *(int *)(puVar22 +
                       (ulonglong)
                       (*(int *)&(param_2->OutputConnections).field_0x48 - 1U &
                       ((int)((ulonglong)lVar6 >> 0x20) + uVar17 * 0x40 + (uVar17 >> 2) +
                        uVar18 + 0x9e3779b9 ^ uVar17)) * 4);
      if (iVar24 != -1) {
        do {
          plVar20 = (longlong *)
                    ((longlong)iVar24 * 0x38 +
                    *(longlong *)
                     &((TMap<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>_>
                        *)pTVar30)->field_0x0);
          if ((*plVar20 == lVar21) && (plVar20[1] == lVar6)) {
            if (iVar24 != -1) {
              plVar27 = plVar20 + 2;
              if (plVar20 == (longlong *)0x0) {
                plVar27 = (longlong *)0x0;
              }
              if (plVar27 != (longlong *)0x0) {
                lVar21 = plVar27[1];
                bVar14 = false;
                piVar26 = (int *)*plVar27;
                piVar34 = piVar26 + (longlong)(int)lVar21 * 8;
                while( true ) {
                  if ((int)plVar27[1] != (int)lVar21) {
                    local_225 = 0;
                    `TCheckedPointerIterator<FMetasoundFrontendVertexHandle,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(&local_225);
                  }
                  uVar9 = local_1a8._0_8_;
                  if (piVar26 == piVar34) break;
                  if ((((piVar26[3] != 0 || piVar26[2] != 0) || piVar26[1] != 0) || *piVar26 != 0)
                     && (((piVar26[7] != 0 || piVar26[6] != 0) || piVar26[5] != 0) ||
                         piVar26[4] != 0)) {
                    local_c8.FromVertexID._0_8_ = *(undefined8 *)pFVar32;
                    local_c8.FromVertexID._8_8_ = *(undefined8 *)(pFVar32 + 8);
                    pFVar33 = &param_2->PageID;
                    local_c8.ToVertexID.A = piVar26[4];
                    local_c8.ToVertexID.B = piVar26[5];
                    local_c8.ToVertexID.C = piVar26[6];
                    local_c8.ToVertexID.D = piVar26[7];
                    local_c8.FromNodeID.A = (param_1->ID).A;
                    local_c8.FromNodeID.B = (param_1->ID).B;
                    local_c8.FromNodeID.C = (param_1->ID).C;
                    local_c8.FromNodeID.D = (param_1->ID).D;
                    local_c8.ToNodeID.A = piVar26[0];
                    local_c8.ToNodeID.B = piVar26[1];
                    local_c8.ToNodeID.C = piVar26[2];
                    local_c8.ToNodeID.D = piVar26[3];
                    EVar13 = IsValidEdge(this,&local_c8,pFVar33);
                    if (EVar13 == None) {
                      if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar14)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pIVar5 = (this->DocumentCache).Object;
                      pFVar23 = pFVar33;
                      if (pFVar33 == (FGuid *)0x0) {
                        pFVar23 = &this->BuildPageID;
                      }
                      plVar20 = (longlong *)
                                (**(code **)(*(longlong *)pIVar5 + 0x50))(pIVar5,pFVar23);
                      cVar15 = (**(code **)(*plVar20 + 8))(plVar20,&local_c8);
                      if (cVar15 == '\0') {
                        AddEdge(this,&local_c8,pFVar33);
                      }
                    }
                    bVar14 = true;
                  }
                  piVar26 = piVar26 + 8;
                }
                pTVar30 = local_220;
                if ((bVar14) &&
                   (*(int *)&(param_2->OutputConnections).field_0x8 !=
                    *(int *)&(param_2->OutputConnections).field_0x34)) {
                  uVar17 = ::GetTypeHash((FNameEntryId)local_1a8._0_4_);
                  uVar10 = local_1a8._8_8_;
                  uVar17 = uVar17 + SUB84(uVar9,4);
                  uVar18 = ::GetTypeHash((FNameEntryId)local_1a8._8_4_);
                  pTVar30 = local_220;
                  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
                  ::RemoveImpl<TTuple<FName,FName>_>
                            (local_220,
                             uVar17 * 0x40 + SUB84(uVar10,4) + (uVar17 >> 2) + uVar18 + 0x9e3779b9 ^
                             uVar17,&local_1a8);
                }
              }
            }
            break;
          }
          iVar24 = (int)plVar20[6];
        } while (iVar24 != -1);
      }
    }
    pFVar25 = local_1e0 + 0x20;
    uVar19 = (ulonglong)uVar16;
    pFVar32 = pFVar32 + 0x20;
  }
  if (param_4 != (TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *)0x0) {
    iStack_208 = 0;
    puVar4 = &(param_2->OutputConnections).field_0x10;
    iVar24 = *(int *)&(param_2->OutputConnections).field_0x28;
    local_1f0 = 0;
    iStack_1f4 = 0;
    if (iVar24 != 0) {
      puVar29 = *(uint **)&(param_2->OutputConnections).field_0x20;
      if (puVar29 == (uint *)0x0) {
        puVar29 = (uint *)puVar4;
      }
      uVar16 = *puVar29;
      while (uVar16 == 0) {
        lVar21 = (longlong)iStack_208;
        local_1f0 = local_1f0 + 0x20;
        iStack_208 = iStack_208 + 1;
        iStack_1f4 = iVar24;
        if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_208)
        goto LAB_14adef470;
        uVar16 = puVar29[lVar21 + 1];
      }
      local_218 = (TMap<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>_>
                   *)(ulonglong)(-uVar16 & uVar16);
      uVar19 = (longlong)local_218 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_190 = (int)lVar21;
      iStack_1f4 = local_1f0 + -1 + local_190;
      if (iVar24 < iStack_1f4) {
        iStack_1f4 = iVar24;
      }
    }
LAB_14adef470:
    uStack_204 = (uint)local_218;
    uStack_1ec = local_4c;
    iStack_1e8 = *(int *)&(param_2->OutputConnections).field_0x8 -
                 *(int *)&(param_2->OutputConnections).field_0x34;
    uVar16 = *(uint *)&(param_2->OutputConnections).field_0x28;
    uStack_1f8 = 0xffffffff;
    uVar18 = -1 << ((byte)uVar16 & 0x1f);
    uVar17 = uVar16 & 0xffffffe0;
    TStack_140._padding_ = CONCAT44(uStack_204,iStack_208);
    TStack_140.CurrentBitIndex = iStack_1f4;
    TStack_140.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)uVar16 >> 5;
    TStack_140._28_4_ = local_4c;
    TStack_140.BaseBitIndex = local_1f0;
    uStack_120 = CONCAT44(uStack_1e4,iStack_1e8);
    local_210 = pTVar30;
    local_200 = puVar4;
    local_148 = pTVar30;
    TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
    if (((int)uVar16 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar1 = *(uint *)&(param_2->OutputConnections).field_0x28;
    if (uVar16 != uVar1) {
      puVar22 = *(undefined1 **)&(param_2->OutputConnections).field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar4;
      }
      uVar16 = uVar18 & *(uint *)(puVar22 + (longlong)iVar24 * 4);
      while (uVar16 == 0) {
        lVar21 = (longlong)iVar24;
        uVar17 = uVar17 + 0x20;
        iVar24 = iVar24 + 1;
        uVar16 = uVar1;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_14adef590;
        uVar16 = *(uint *)(puVar22 + lVar21 * 4 + 4);
      }
      uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_18c = (int)lVar21;
      uVar16 = (uVar17 - 1) + local_18c;
      if ((int)uVar1 < (int)uVar16) {
        uVar16 = uVar1;
      }
    }
LAB_14adef590:
    local_res18 = SUB41(uVar18,0);
    while( true ) {
      pTVar12 = local_148;
      if (*(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34 !=
          (int)uStack_120) {
        local_224[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_224);
      }
      if (((TStack_140.CurrentBitIndex == uVar16) &&
          (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) &&
         (pTVar12 == pTVar30)) break;
      lVar21 = *(longlong *)&pTVar12->Elements + (longlong)TStack_140.CurrentBitIndex * 0x38;
      bVar14 = Algo::
               NoneOf<TArray<FMetasoundFrontendVertexHandle,TSizedDefaultAllocator<32>_>,_FMetaSoundFrontendDocumentBuilder::ApplyNodeInstanceReplacementData_::__l58::<lambda_1>_>
                         ((TArray<FMetasoundFrontendVertexHandle,TSizedDefaultAllocator<32>_> *)
                          (lVar21 + 0x10),local_res18);
      if (!bVar14) {
        local_1c8 = *(undefined8 *)(lVar21 + 0x20);
        pFVar32 = (param_4->AllocatorInstance).Data;
        uStack_1c0 = *(undefined8 *)(lVar21 + 0x28);
        if (((pFVar32 <= (FScriptContainerElement *)&local_1c8) &&
            ((FScriptContainerElement *)&local_1c8 < pFVar32 + (longlong)param_4->ArrayMax * 0x10))
           && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar24 = param_4->ArrayNum;
        if (iVar24 == param_4->ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar24 + 1;
        pFVar32 = (param_4->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
        *(undefined8 *)pFVar32 = local_1c8;
        *(undefined8 *)(pFVar32 + 8) = uStack_1c0;
      }
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    }
  }
  return;
}

// BeginBuilding @ 14adef6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMetaSoundFrontendDocumentBuilder::BeginBuilding
          (FMetaSoundFrontendDocumentBuilder *this,
          TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint *puVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  FMetasoundFrontendDocument *pFVar12;
  TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *pTVar13;
  TSharedRef<Metasound::Frontend::FDocumentCache,1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FDocumentModifyDelegates *pFVar16;
  FSharedReferencer<1> FVar17;
  undefined1 local_res8 [8];
  FDocumentModifyDelegates *local_f8;
  FSharedReferencer<1> local_f0;
  FDocumentModifyDelegates *local_e8;
  FSharedReferencer<1> local_e0;
  FString local_d8;
  FTopLevelAssetPath local_c8;
  FDocumentCache *local_b8;
  FSharedReferencer<1> local_b0;
  undefined1 *local_a8;
  FMetaSoundFrontendDocumentBuilder *local_a0;
  code *local_98;
  undefined1 **local_90;
  FString local_88;
  FDocumentModifyDelegates *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedRef<Metasound::Frontend::FDocumentCache,1> local_68;
  undefined1 local_58 [16];
  TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> local_48;
  
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  (this->HintPath).AssetName.ComparisonIndex = 0;
  (this->HintPath).AssetName.Number = 0;
  (this->HintPath).PackageName.ComparisonIndex = 0;
  (this->HintPath).PackageName.Number = 0;
  if ((*(longlong *)&this->DocumentInterface != 0) &&
     (*(longlong *)&(this->DocumentInterface).field_0x8 != 0)) {
    plVar3 = *(longlong **)&(this->DocumentInterface).field_0x8;
    puVar9 = (uint *)(**(code **)(*plVar3 + 0x10))(plVar3,local_58);
    uVar5 = puVar9[1];
    uVar6 = puVar9[2];
    uVar7 = puVar9[3];
    (this->HintPath).PackageName.ComparisonIndex.Value = *puVar9;
    (this->HintPath).PackageName.Number = uVar5;
    (this->HintPath).AssetName.ComparisonIndex.Value = uVar6;
    (this->HintPath).AssetName.Number = uVar7;
    pTVar11 = pTVar15;
    if (*(longlong *)&this->DocumentInterface != 0) {
      pTVar11 = *(TReferenceControllerBase<1> **)&(this->DocumentInterface).field_0x8;
    }
    lVar10 = (**(code **)(pTVar11->_padding_ + 0x18))();
    local_a8 = local_res8;
    local_res8[0] = 0;
    local_90 = &local_a8;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::BeginBuilding'::__l5::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
               ::Call;
    local_a0 = this;
    FMetasoundFrontendGraphClass::IterateGraphPages
              ((FMetasoundFrontendGraphClass *)(lVar10 + 0x70),
               (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *)&local_98);
    if (6 < (byte)LogMetaSound._0_1_) {
      local_c8.PackageName.ComparisonIndex.Value = 0;
      local_c8.PackageName.Number = 0;
      local_c8.AssetName.ComparisonIndex.Value = 0;
      local_c8.AssetName.Number = 0;
      bVar8 = FTopLevelAssetPath::TrySetPath(&local_c8,*(UObject **)&this->DocumentInterface);
      if ((bVar8) && (6 < (byte)LogMetaSound._0_1_)) {
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        FGuid::AppendString(&this->BuildPageID,&local_d8,Digits);
        FTopLevelAssetPath::ToString(&local_c8,&local_88);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  pFVar16 = param_1->Object;
  if (pFVar16 != (FDocumentModifyDelegates *)0x0) {
    pTVar15 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = (this->DocumentDelegates).Object;
    pTStack_70 = (this->DocumentDelegates).SharedReferenceCount.ReferenceController;
    (this->DocumentDelegates).Object = pFVar16;
    (this->DocumentDelegates).SharedReferenceCount.ReferenceController = pTVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
    goto LAB_14adefaf7;
  }
  if ((*(longlong *)&this->DocumentInterface == 0) ||
     (*(longlong *)&(this->DocumentInterface).field_0x8 == 0)) {
    pTVar11 = ::operator_new(0x2f0);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      pFVar16 = (FDocumentModifyDelegates *)&DAT_00000010;
LAB_14adefa3b:
      if (((pFVar16->_padding_ == 0) || (pFVar16->_padding_ == 0)) ||
         (*(int *)(pFVar16->_padding_ + 8) < 1)) {
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar16->_padding_ = (longlong)pFVar16;
        if (pTVar15 != (TReferenceControllerBase<1> *)pFVar16->_padding_) {
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
            UNLOCK();
          }
          plVar3 = (longlong *)pFVar16->_padding_;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
          pFVar16->_padding_ = (longlong)pTVar15;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
      }
    }
    else {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
      ;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
                ((FDocumentModifyDelegates *)(pTVar11 + 1));
      pFVar16 = (FDocumentModifyDelegates *)(pTVar11 + 1);
      pTVar15 = pTVar11;
      if (pFVar16 != (FDocumentModifyDelegates *)0x0) goto LAB_14adefa3b;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar17.ReferenceController = pTVar15;
    local_e8 = pFVar16;
    local_e0.ReferenceController = pTVar15;
    if (&this->DocumentDelegates !=
        (TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *)&local_e8) {
      (this->DocumentDelegates).Object = pFVar16;
      local_e8 = (FDocumentModifyDelegates *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DocumentDelegates).SharedReferenceCount,&local_e0);
      FVar17.ReferenceController = local_e0.ReferenceController;
    }
  }
  else {
    pFVar12 = GetConstDocumentChecked(this);
    pTVar11 = ::operator_new(0x2f0);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      pFVar16 = (FDocumentModifyDelegates *)&DAT_00000010;
LAB_14adef911:
      if (((pFVar16->_padding_ == 0) || (pFVar16->_padding_ == 0)) ||
         (*(int *)(pFVar16->_padding_ + 8) < 1)) {
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar16->_padding_ = (longlong)pFVar16;
        if (pTVar15 != (TReferenceControllerBase<1> *)pFVar16->_padding_) {
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
            UNLOCK();
          }
          plVar3 = (longlong *)pFVar16->_padding_;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
          pFVar16->_padding_ = (longlong)pTVar15;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
      }
    }
    else {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
      ;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
                ((FDocumentModifyDelegates *)(pTVar11 + 1),pFVar12);
      pFVar16 = (FDocumentModifyDelegates *)(pTVar11 + 1);
      pTVar15 = pTVar11;
      if (pFVar16 != (FDocumentModifyDelegates *)0x0) goto LAB_14adef911;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar17.ReferenceController = pTVar15;
    local_f8 = pFVar16;
    local_f0.ReferenceController = pTVar15;
    if (&this->DocumentDelegates !=
        (TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *)&local_f8) {
      (this->DocumentDelegates).Object = pFVar16;
      local_f8 = (FDocumentModifyDelegates *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DocumentDelegates).SharedReferenceCount,&local_f0);
      FVar17.ReferenceController = local_f0.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
LAB_14adefaf7:
  if ((*(longlong *)&this->DocumentInterface != 0) &&
     (*(longlong *)&(this->DocumentInterface).field_0x8 != 0)) {
    (**(code **)(**(longlong **)&(this->DocumentInterface).field_0x8 + 0x50))();
    pFVar12 = GetConstDocumentChecked(this);
    pTVar13 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::ToSharedRef
                        (&this->DocumentDelegates,&local_48);
    pTVar14 = Metasound::Frontend::FDocumentCache::Create
                        (&local_68,pFVar12,pTVar13,&this->BuildPageID,param_2);
    local_b0.ReferenceController = (pTVar14->SharedReferenceCount).ReferenceController;
    local_b8 = pTVar14->Object;
    if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->DocumentCache != (TSharedPtr<Metasound::Frontend::IDocumentCache,1> *)&local_b8) {
      (this->DocumentCache).Object = (IDocumentCache *)local_b8;
      local_b8 = (FDocumentCache *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DocumentCache).SharedReferenceCount,&local_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CanAddEdge @ 14adf18f0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::CanAddEdge
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendEdge *param_1,FGuid *param_2)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  EInvalidEdgeReason EVar6;
  longlong *plVar7;
  FGuid *pFVar8;
  
  pFVar8 = param_2;
  if (param_2 == (FGuid *)0x0) {
    pFVar8 = &this->BuildPageID;
  }
  GetConstDocumentChecked(this);
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar7 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1,pFVar8);
  cVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,&param_1->ToNodeID,&param_1->ToVertexID);
  if (cVar5 == '\0') {
    EVar6 = IsValidEdge(this,param_1,param_2);
    bVar3 = EVar6 == None;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// CaptureNodeInstanceReplacementData @ 14adf19b0

FNodeInstanceReplacementData * __thiscall
FMetaSoundFrontendDocumentBuilder::CaptureNodeInstanceReplacementData
          (FMetaSoundFrontendDocumentBuilder *this,
          FNodeInstanceReplacementData *__return_storage_ptr__,FMetasoundFrontendNode *param_1,
          FGuid *param_2)

{
  FGuid *pFVar1;
  ForAnyElementType FVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  FMetasoundFrontendVertex *pFVar9;
  FNodeInstanceReplacementData *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  longlong lVar16;
  undefined1 uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 local_238;
  undefined1 local_237 [7];
  ForAnyElementType local_230;
  undefined8 local_228;
  FScriptContainerElement local_218;
  int local_214;
  ForAnyElementType local_210;
  undefined8 local_208;
  ForAnyElementType local_200;
  undefined8 local_1f8;
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> local_1a0;
  FMetasoundFrontendNode *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ForAnyElementType local_168;
  int local_160;
  int local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [4];
  undefined1 local_144 [52];
  undefined8 *local_110;
  uint *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  ForAnyElementType *local_e8;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  FMetasoundFrontendLiteral local_b0;
  undefined1 local_58;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)__return_storage_ptr__);
  FInstancedStruct::FInstancedStruct
            (&(__return_storage_ptr__->ClassInterfaceOverride).InstancedStruct);
  local_230.Data = (FScriptContainerElement *)&__return_storage_ptr__->OutputConnections;
  *(undefined8 *)&__return_storage_ptr__->InputConnections = 0;
  this_00 = (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
             *)&__return_storage_ptr__->InputConnections;
  *(undefined8 *)&(__return_storage_ptr__->InputConnections).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputConnections).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputConnections).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputConnections).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputConnections).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputConnections).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->InputConnections).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputConnections).field_0x48 = 0;
  *(undefined8 *)
   &((TMap<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>_>
      *)local_230.Data)->field_0x0 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputConnections).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputConnections).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputConnections).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputConnections).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputConnections).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputConnections).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->OutputConnections).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputConnections).field_0x48 = 0;
  (__return_storage_ptr__->NodeID).A = 0;
  (__return_storage_ptr__->NodeID).B = 0;
  (__return_storage_ptr__->NodeID).C = 0;
  (__return_storage_ptr__->NodeID).D = 0;
  (__return_storage_ptr__->PageID).A = 0;
  (__return_storage_ptr__->PageID).B = 0;
  (__return_storage_ptr__->PageID).C = 0;
  (__return_storage_ptr__->PageID).D = 0;
  uVar13 = param_2->B;
  uVar6 = param_2->C;
  uVar18 = param_2->D;
  (__return_storage_ptr__->PageID).A = param_2->A;
  (__return_storage_ptr__->PageID).B = uVar13;
  (__return_storage_ptr__->PageID).C = uVar6;
  (__return_storage_ptr__->PageID).D = uVar18;
  local_1b8._8_8_ = this_00;
  FInstancedStruct::operator=
            ((FInstancedStruct *)__return_storage_ptr__,&(param_1->Configuration).InstancedStruct);
  FInstancedStruct::operator=
            (&(__return_storage_ptr__->ClassInterfaceOverride).InstancedStruct,
             &(param_1->ClassInterfaceOverride).InstancedStruct);
  uVar13 = (param_1->ID).B;
  uVar6 = (param_1->ID).C;
  uVar18 = (param_1->ID).D;
  (__return_storage_ptr__->NodeID).A = (param_1->ID).A;
  (__return_storage_ptr__->NodeID).B = uVar13;
  (__return_storage_ptr__->NodeID).C = uVar6;
  (__return_storage_ptr__->NodeID).D = uVar18;
  local_1b8._0_4_ = (param_1->Interface).Inputs.ArrayNum;
  uVar8 = (ulonglong)(int)local_1b8._0_4_;
  pFVar19 = (param_1->Interface).Inputs.AllocatorInstance.Data;
  pFVar20 = pFVar19 + uVar8 * 0x20;
  pFVar21 = pFVar19 + 0x18;
  do {
    if ((param_1->Interface).Inputs.ArrayNum != (int)uVar8) {
      local_238 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVertex,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_238);
    }
    FVar2.Data = local_230.Data;
    if (pFVar19 == pFVar20) {
      iVar15 = (param_1->Interface).Outputs.ArrayNum;
      pFVar21 = (param_1->Interface).Outputs.AllocatorInstance.Data;
      pFVar19 = pFVar21 + (longlong)iVar15 * 0x20;
      do {
        if ((param_1->Interface).Outputs.ArrayNum != iVar15) {
          local_237[0] = 0;
          `TCheckedPointerIterator<FMetasoundFrontendVertex,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_237);
        }
        if (pFVar21 == pFVar19) {
          return __return_storage_ptr__;
        }
        local_100 = *(undefined8 *)pFVar21;
        local_f8 = *(undefined8 *)(pFVar21 + 8);
        local_1b8._8_8_ =
             (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
              *)0x0;
        local_1a8 = 0;
        FindNodeInputsConnectedToNodeOutput
                  (this,&local_1a0,&param_1->ID,(FGuid *)(pFVar21 + 0x10),
                   (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)
                   (local_1b8 + 8),param_2);
        local_230.Data = (FScriptContainerElement *)0x0;
        local_228 = 0;
        if (((int)local_1a8 != local_1a0.ArrayNum) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ConnectedInputNodes.Num() == ConnectedInputVertices.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                               ,0x16ab,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FNodeInstanceReplacementData *)(*pcVar4)();
          return pFVar10;
        }
        uVar13 = 0;
        if (0 < local_1a0.ArrayNum) {
          lVar16 = 0;
          do {
            uVar18 = ~uVar13 >> 0x1f;
            uVar6 = 0;
            if ((int)uVar13 < (int)local_1a8) {
              uVar6 = uVar18;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FNodeInstanceReplacementData *)(*pcVar4)();
              return pFVar10;
            }
            if ((*(longlong *)
                  (((ForElementType<FSetElementId> *)(local_1b8._8_8_ + 0x38))->InlineData +
                  lVar16 + -0x38) == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ConnectedInputNodes[i]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                   ,0x16ae,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FNodeInstanceReplacementData *)(*pcVar4)();
              return pFVar10;
            }
            uVar6 = 0;
            if ((int)uVar13 < local_1a0.ArrayNum) {
              uVar6 = uVar18;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FNodeInstanceReplacementData *)(*pcVar4)();
              return pFVar10;
            }
            if ((*(longlong *)(local_1a0.AllocatorInstance.Data + lVar16) == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ConnectedInputVertices[i]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                   ,0x16af,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FNodeInstanceReplacementData *)(*pcVar4)();
              return pFVar10;
            }
            uVar6 = 0;
            if ((int)uVar13 < (int)local_1a8) {
              uVar6 = uVar18;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FNodeInstanceReplacementData *)(*pcVar4)();
              return pFVar10;
            }
            puVar3 = *(undefined8 **)
                      (((ForElementType<FSetElementId> *)(local_1b8._8_8_ + 0x38))->InlineData +
                      lVar16 + -0x38);
            local_144._0_8_ = *puVar3;
            local_144._8_8_ = puVar3[1];
            uVar6 = 0;
            if ((int)uVar13 < local_1a0.ArrayNum) {
              uVar6 = uVar18;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FNodeInstanceReplacementData *)(*pcVar4)();
              return pFVar10;
            }
            local_144._16_8_ =
                 *(undefined8 *)(*(longlong *)(local_1a0.AllocatorInstance.Data + lVar16) + 0x10);
            local_144._24_8_ =
                 *(undefined8 *)(*(longlong *)(local_1a0.AllocatorInstance.Data + lVar16) + 0x18);
            if (((local_230.Data <=
                  (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
                   *)local_144) &&
                ((FScriptContainerElement *)local_144 <
                 local_230.Data + (longlong)local_228._4_4_ * 0x20)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FNodeInstanceReplacementData *)(*pcVar4)();
              return pFVar10;
            }
            if ((int)local_228 == local_228._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x420,&local_230,(int *)((longlong)&local_228 + 4));
              local_228 = CONCAT44(local_228._4_4_,iVar7);
            }
            lVar11 = (longlong)(int)local_228;
            uVar13 = uVar13 + 1;
            lVar16 = lVar16 + 8;
            local_228 = CONCAT44(local_228._4_4_,(int)local_228 + 1);
            *(undefined8 *)(local_230.Data + lVar11 * 0x20) = local_144._0_8_;
            *(undefined8 *)(local_230.Data + lVar11 * 0x20 + 8) = local_144._8_8_;
            *(undefined8 *)(local_230.Data + lVar11 * 0x20 + 0x10) = local_144._16_8_;
            *(undefined8 *)(local_230.Data + lVar11 * 0x20 + 0x10 + 8) = local_144._24_8_;
          } while ((int)uVar13 < local_1a0.ArrayNum);
        }
        _Src.Data = local_230.Data;
        lVar16 = (longlong)(int)local_228;
        local_168.Data = (FScriptContainerElement *)0x0;
        local_160 = (int)local_228;
        if ((int)local_228 == 0) {
          local_15c = (int)local_228;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,4,(int)local_228,0,&local_168,(int)local_228,&local_15c);
          memcpy(local_168.Data,_Src.Data,lVar16 << 5);
        }
        local_158 = *(undefined8 *)pFVar21;
        local_150 = *(undefined8 *)(pFVar21 + 8);
        local_f0 = &local_100;
        local_e8 = &local_168;
        TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<TTuple<FName,FName>_const_&,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo_&&>_>
                  ((TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
                    *)FVar2.Data,
                   (TPairInitializer<TTuple<FName,FName>_const_&,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo_&&>
                    *)local_1b8,(bool *)&local_f0);
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data);
        }
        if ((TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
             *)local_230.Data !=
            (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
             *)0x0) {
          FMemory::Free(local_230.Data);
        }
        if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.AllocatorInstance.Data);
        }
        if ((TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
             *)local_1b8._8_8_ !=
            (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
             *)0x0) {
          FMemory::Free((void *)local_1b8._8_8_);
        }
        pFVar21 = pFVar21 + 0x20;
      } while( true );
    }
    pFVar14 = (param_1->InputLiterals).AllocatorInstance.Data;
    uVar17 = 0;
    local_214 = 0;
    local_210.Data = (FScriptContainerElement *)0x0;
    local_208 = 0;
    local_200.Data = (FScriptContainerElement *)0x0;
    local_1f8 = 0;
    local_1f0.Data = (FScriptContainerElement *)0x0;
    local_1e8 = 0;
    local_1e0.Data = (FScriptContainerElement *)0x0;
    local_1d8 = 0;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8 = 0;
    local_218 = (FScriptContainerElement)0x0;
    pFVar12 = pFVar14 + (longlong)(param_1->InputLiterals).ArrayNum * 0x68;
    if (pFVar14 != pFVar12) {
      do {
        if (((*(int *)pFVar21 == *(int *)(pFVar14 + 8) &&
             *(int *)(pFVar21 + -4) == *(int *)(pFVar14 + 4)) &&
            *(int *)(pFVar21 + 4) == *(int *)(pFVar14 + 0xc)) &&
            *(int *)(pFVar21 + -8) == *(int *)pFVar14) {
          if (pFVar14 != (FScriptContainerElement *)0x0) {
            local_218 = pFVar14[0x10];
            local_214 = *(int *)(pFVar14 + 0x14);
            iVar15 = 0;
            if ((FScriptContainerElement *)&local_210 != pFVar14 + 0x18) {
              uVar13 = *(uint *)(pFVar14 + 0x20);
                    /* WARNING: Load size is inaccurate */
              FVar2.Data = pFVar14[0x18];
              local_208 = (ulonglong)uVar13;
              iVar15 = 0;
              if (uVar13 != 0) {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,uVar13,0,&local_210,uVar13,(int *)((longlong)&local_208 + 4));
                memcpy(local_210.Data,FVar2.Data,(longlong)(int)uVar13);
                iVar15 = local_1f8._4_4_;
              }
            }
            if ((FScriptContainerElement *)&local_200 != pFVar14 + 0x28) {
              iVar7 = *(int *)(pFVar14 + 0x30);
                    /* WARNING: Load size is inaccurate */
              FVar2.Data = pFVar14[0x28];
              local_1f8 = CONCAT44(local_1f8._4_4_,iVar7);
              if ((iVar7 == 0) && (iVar15 == 0)) {
                local_1f8 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,iVar15,&local_200,iVar7,(int *)((longlong)&local_1f8 + 4));
                if (iVar7 != 0) {
                  memcpy(local_200.Data,FVar2.Data,(longlong)iVar7 << 2);
                }
              }
            }
            if ((FScriptContainerElement *)&local_1f0 != pFVar14 + 0x38) {
              iVar15 = *(int *)(pFVar14 + 0x40);
                    /* WARNING: Load size is inaccurate */
              FVar2.Data = pFVar14[0x38];
              local_1e8 = CONCAT44(local_1e8._4_4_,iVar15);
              if ((iVar15 == 0) && (local_1e8._4_4_ == 0)) {
                local_1e8 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar15,local_1e8._4_4_,&local_1f0,iVar15,
                           (int *)((longlong)&local_1e8 + 4));
                if (iVar15 != 0) {
                  memcpy(local_1f0.Data,FVar2.Data,(longlong)iVar15 << 2);
                }
              }
            }
            if ((FScriptContainerElement *)&local_1e0 != pFVar14 + 0x48) {
              DestructItems<FString,int>((FString *)local_1e0.Data,(int)local_1d8);
              iVar15 = *(int *)(pFVar14 + 0x50);
                    /* WARNING: Load size is inaccurate */
              FVar2.Data = pFVar14[0x48];
              local_1d8 = CONCAT44(local_1d8._4_4_,iVar15);
              if ((iVar15 == 0) && (local_1d8._4_4_ == 0)) {
                local_1d8 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar15,local_1d8._4_4_,&local_1e0,iVar15,
                           (int *)((longlong)&local_1d8 + 4));
                ConstructItems<FString,FString,int>(local_1e0.Data,(FString *)FVar2.Data,iVar15);
              }
            }
            if ((FScriptContainerElement *)&local_1d0 != pFVar14 + 0x58) {
              iVar15 = *(int *)(pFVar14 + 0x60);
                    /* WARNING: Load size is inaccurate */
              FVar2.Data = pFVar14[0x58];
              local_1c8 = CONCAT44(local_1c8._4_4_,iVar15);
              if ((iVar15 == 0) && (local_1c8._4_4_ == 0)) {
                local_1c8 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar15,local_1c8._4_4_,&local_1d0,iVar15,
                           (int *)((longlong)&local_1c8 + 4));
                ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                          (local_1d0.Data,(TObjectPtr<UObject> *)FVar2.Data,iVar15);
              }
            }
            uVar17 = 1;
            this_00 = (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
                       *)local_1b8._8_8_;
          }
          break;
        }
        pFVar14 = pFVar14 + 0x68;
      } while (pFVar14 != pFVar12);
    }
    local_144._36_8_ = *(undefined8 *)pFVar19;
    local_144._44_8_ = *(undefined8 *)(pFVar21 + -0x10);
    local_190 = (FMetasoundFrontendNode *)0x0;
    pFVar9 = FindNodeOutputConnectedToNodeInput
                       (this,&param_1->ID,(FGuid *)(pFVar21 + -8),&local_190,param_2);
    if ((local_190 == (FMetasoundFrontendNode *)0x0) || (pFVar9 == (FMetasoundFrontendVertex *)0x0))
    {
      local_188 = 0;
      uStack_180 = 0;
      local_188._0_4_ = 0;
      local_188._4_4_ = 0;
      uStack_180._0_4_ = 0;
      uStack_180._4_4_ = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_178._0_4_ = 0;
      local_178._4_4_ = 0;
      uStack_170._0_4_ = 0;
      uStack_170._4_4_ = 0;
      local_e0 = (uint)local_188;
      uStack_dc = local_188._4_4_;
      uStack_d8 = (uint)uStack_180;
      uStack_d4 = uStack_180._4_4_;
      local_d0 = (uint)local_178;
      uStack_cc = local_178._4_4_;
      uStack_c8 = (uint)uStack_170;
      uStack_c4 = uStack_170._4_4_;
    }
    else {
      local_188._0_4_ = (local_190->ID).A;
      local_188._4_4_ = (local_190->ID).B;
      uStack_180._0_4_ = (local_190->ID).C;
      uStack_180._4_4_ = (local_190->ID).D;
      pFVar1 = &pFVar9->VertexID;
      local_178._0_4_ = pFVar1->A;
      local_178._4_4_ = pFVar1->B;
      uStack_170._0_4_ = (pFVar9->VertexID).C;
      uStack_170._4_4_ = (pFVar9->VertexID).D;
      local_e0 = (local_190->ID).A;
      uStack_dc = (local_190->ID).B;
      uStack_d8 = (local_190->ID).C;
      uStack_d4 = (local_190->ID).D;
      local_d0 = pFVar1->A;
      uStack_cc = (pFVar9->VertexID).B;
      uStack_c8 = (pFVar9->VertexID).C;
      uStack_c4 = (pFVar9->VertexID).D;
    }
    local_c0 = *(undefined8 *)pFVar19;
    local_b8 = *(undefined8 *)(pFVar21 + -0x10);
    local_b0.Type = (EMetasoundFrontendLiteralType)local_218;
    local_b0.AsNumDefault = local_214;
    local_b0.AsBoolean.AllocatorInstance.Data = local_210.Data;
    local_b0.AsBoolean.ArrayNum = (int)local_208;
    local_b0.AsBoolean.ArrayMax = local_208._4_4_;
    local_b0.AsInteger.AllocatorInstance.Data = local_200.Data;
    local_b0.AsInteger.ArrayNum = (int)local_1f8;
    local_b0.AsInteger.ArrayMax = local_1f8._4_4_;
    local_b0.AsFloat.AllocatorInstance.Data = local_1f0.Data;
    local_b0.AsFloat.ArrayNum = (int)local_1e8;
    local_b0.AsFloat.ArrayMax = local_1e8._4_4_;
    local_b0.AsString.AllocatorInstance.Data = local_1e0.Data;
    local_b0.AsString.ArrayNum = (int)local_1d8;
    local_b0.AsString.ArrayMax = local_1d8._4_4_;
    local_b0.AsUObject.AllocatorInstance.Data = local_1d0.Data;
    local_b0.AsUObject.ArrayNum = (int)local_1c8;
    local_b0.AsUObject.ArrayMax = local_1c8._4_4_;
    local_110 = (undefined8 *)(local_144 + 0x24);
    local_108 = &local_e0;
    local_210.Data = (FScriptContainerElement *)0x0;
    local_200.Data = (FScriptContainerElement *)0x0;
    local_1f0.Data = (FScriptContainerElement *)0x0;
    local_1e0.Data = (FScriptContainerElement *)0x0;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_208 = 0;
    local_1f8 = 0;
    local_1e8 = 0;
    local_1d8 = 0;
    local_1c8 = 0;
    local_58 = uVar17;
    TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TTuple<FName,FName>_const_&,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo_&&>_>
              (this_00,(TPairInitializer<TTuple<FName,FName>_const_&,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo_&&>
                        *)local_148,(bool *)&local_110);
    FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&local_b0);
    if (local_1d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    DestructItems<FString,int>((FString *)local_1e0.Data,(int)local_1d8);
    if (local_1e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data);
    }
    if (local_1f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data);
    }
    if (local_200.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data);
    }
    if (local_210.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data);
    }
    uVar8 = (ulonglong)(uint)local_1b8._0_4_;
    pFVar19 = pFVar19 + 0x20;
    pFVar21 = pFVar21 + 0x20;
  } while( true );
}

// ClearAccessFlags @ 14adf2430

void __thiscall
FMetaSoundFrontendDocumentBuilder::ClearAccessFlags(FMetaSoundFrontendDocumentBuilder *this)

{
  FMetasoundFrontendDocument *pFVar1;
  
  pFVar1 = GetDocumentChecked(this);
  FMetasoundFrontendClassMetadata::ClearAccessFlags
            ((FMetasoundFrontendClassMetadata *)&(pFVar1->RootGraph)._padding_);
  return;
}

// ClearDocument @ 14adf2450

void __thiscall
FMetaSoundFrontendDocumentBuilder::ClearDocument
          (FMetaSoundFrontendDocumentBuilder *this,
          TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  FMetasoundFrontendDocument *pFVar7;
  FMetasoundFrontendClassInterface *pFVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  undefined1 local_res8 [8];
  FString local_78;
  code *local_68;
  undefined1 *local_60;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_58;
  FString local_48;
  FString local_38;
  
  pFVar7 = GetDocumentChecked(this);
  pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar7->RootGraph);
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)(pFVar8->Inputs).AllocatorInstance.Data,
             (pFVar8->Inputs).ArrayNum);
  piVar1 = &(pFVar8->Inputs).ArrayMax;
  (pFVar8->Inputs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)pFVar8,0,piVar1);
  }
  pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar7->RootGraph);
  (pFVar8->Outputs).ArrayNum = 0;
  if ((pFVar8->Outputs).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x34,4,0,&(pFVar8->Outputs).AllocatorInstance,0,&(pFVar8->Outputs).ArrayMax);
  }
  this_00 = &(pFVar7->RootGraph).PresetOptions.InputsInheritingDefault;
  bVar6 = 1 < (pFVar7->RootGraph).PresetOptions.InputsInheritingDefault.HashSize;
  if (!bVar6) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar2 = &(pFVar7->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0xc;
  *(undefined4 *)&(pFVar7->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(pFVar7->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(pFVar7->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x34 = 0;
  iVar3 = *(int *)&(pFVar7->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x2c;
  *(undefined4 *)&(pFVar7->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(pFVar7->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x2c =
         0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(pFVar7->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x10,0);
  }
  if (bVar6) {
    (pFVar7->RootGraph).PresetOptions.InputsInheritingDefault.HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  if (*(longlong **)&this->DocumentInterface == (longlong *)0x0) {
    pFVar9 = GetTypeName<UObject>(&local_48);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar10);
  }
  cVar5 = (**(code **)(**(longlong **)&this->DocumentInterface + 0x1c0))();
  if (cVar5 != '\0') {
    if (*(UObjectBaseUtility **)&this->DocumentInterface == (UObjectBaseUtility *)0x0) {
      pFVar9 = GetTypeName<UObject>(&local_38);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar10);
    }
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)&this->DocumentInterface,&local_78,(UObject *)0x0);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!DocObject.IsAsset()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x918,
                       L"Cannot call clear document on asset \'%s\': builder API does not support document mutation on serialized objects without editor data loaded"
                      );
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_60 = local_res8;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::ClearDocument'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_&>
             ::Call;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&pFVar7->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_68);
  pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar7->RootGraph);
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)(pFVar8->Inputs).AllocatorInstance.Data,
             (pFVar8->Inputs).ArrayNum);
  piVar1 = &(pFVar8->Inputs).ArrayMax;
  (pFVar8->Inputs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)pFVar8,0,piVar1);
  }
  pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar7->RootGraph);
  (pFVar8->Outputs).ArrayNum = 0;
  if ((pFVar8->Outputs).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x34,4,0,&(pFVar8->Outputs).AllocatorInstance,0,&(pFVar8->Outputs).ArrayMax);
  }
  pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar7->RootGraph);
  (pFVar8->Environment).ArrayNum = 0;
  if ((pFVar8->Environment).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&(pFVar8->Environment).AllocatorInstance,0,&(pFVar8->Environment).ArrayMax);
  }
  bVar6 = 1 < (pFVar7->Interfaces).HashSize;
  if (!bVar6) {
    TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
    ::UnhashElements(&pFVar7->Interfaces);
  }
  puVar2 = &(pFVar7->Interfaces).Elements.field_0xc;
  *(undefined4 *)&(pFVar7->Interfaces).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&pFVar7->Interfaces,0,(int *)puVar2);
  }
  *(undefined4 *)&(pFVar7->Interfaces).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar7->Interfaces).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(pFVar7->Interfaces).Elements.field_0x2c;
  *(undefined4 *)&(pFVar7->Interfaces).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(pFVar7->Interfaces).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar7->Interfaces).Elements.field_0x10,0);
  }
  if (bVar6) {
    (pFVar7->Interfaces).HashSize = 1;
    TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
    ::Rehash(&pFVar7->Interfaces);
  }
  DestructItems<FMetasoundFrontendClass,int>
            ((FMetasoundFrontendClass *)(pFVar7->Dependencies).AllocatorInstance.Data,
             (pFVar7->Dependencies).ArrayNum);
  piVar1 = &(pFVar7->Dependencies).ArrayMax;
  (pFVar7->Dependencies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,&(pFVar7->Dependencies).AllocatorInstance,0,piVar1);
  }
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  Reload(this,&local_58,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ConformGraphInputNodeToClass @ 14adf4780

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ConformGraphInputNodeToClass
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassInput *param_1)

{
  int iVar1;
  IDocumentCache *pIVar2;
  FGuid FVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  EMetasoundFrontendClassType EVar7;
  IDataTypeRegistry *pIVar8;
  FMetasoundFrontendDocument *pFVar9;
  code *pcVar10;
  longlong local_res10;
  FMetasoundFrontendClass *local_res18 [2];
  undefined **local_1a8;
  FGuid local_1a0;
  FMetasoundFrontendClassMetadata local_190;
  FMetasoundFrontendClassInput *local_158;
  undefined8 local_150;
  FScriptContainerElement *local_148;
  undefined8 local_140;
  FScriptContainerElement *local_138;
  undefined8 local_130;
  FGuid local_128;
  code *local_118;
  FMetaSoundFrontendDocumentBuilder **local_110;
  FMetaSoundFrontendDocumentBuilder *local_108;
  FMetasoundFrontendDocument *local_100;
  FMetasoundFrontendClass **local_f8;
  FMetasoundFrontendClassInput *local_f0;
  FMetasoundFrontendClass local_e8;
  FNodeClassRegistryKey local_58;
  
  local_1a8 = &___7FMetasoundFrontendClass__6B_;
  local_1a0 = Metasound::FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_190);
  local_res10 = param_1->_padding_;
  iVar1 = (int)param_1->_padding_;
  local_158 = (FMetasoundFrontendClassInput *)0x0;
  local_150 = 0;
  local_148 = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_138 = (FScriptContainerElement *)0x0;
  local_130 = 0;
  local_128.A = 0;
  local_128.B = 0;
  local_128.C = 0;
  local_128.D = 0;
  if (iVar1 == 0) {
    pIVar8 = Metasound::Frontend::IDataTypeRegistry::Get();
    pcVar10 = *(code **)((longlong)*pIVar8 + 0xb8);
LAB_14adf484d:
    cVar6 = (*pcVar10)(pIVar8,&local_res10,&local_1a8);
    if (cVar6 != '\0') {
      pFVar9 = GetDocumentChecked(this);
      EVar7 = FMetasoundFrontendClassMetadata::GetType(&local_190);
      if (EVar7 == Graph) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0xb49,
                           L"Dependencies are never listed as \'Graph\' types. Graphs are considered \'External\' from the perspective of the parent document to allow for nativization."
                          );
        if (bVar4) {
          pcVar10 = (code *)swi(3);
          uVar5 = (*pcVar10)();
          return (bool)uVar5;
        }
      }
      Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_58,&local_190);
      if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar10 = (code *)swi(3);
          uVar5 = (*pcVar10)();
          return (bool)uVar5;
        }
      }
      pIVar2 = (this->DocumentCache).Object;
      local_res18[0] =
           (FMetasoundFrontendClass *)(**(code **)(*(longlong *)pIVar2 + 0x20))(pIVar2,&local_58);
      FVar3 = local_1a0;
      if (local_res18[0] == (FMetasoundFrontendClass *)0x0) {
        local_e8.Metadata.ChangeID.D = local_190.ChangeID.D;
        local_e8.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)local_158;
        local_e8.Interface.Inputs.ArrayNum = (int)local_150;
        local_e8.Interface.Inputs.ArrayMax = local_150._4_4_;
        local_e8.Interface.Outputs.AllocatorInstance.Data = local_148;
        local_e8.Interface.Outputs.ArrayNum = (int)local_140;
        local_e8.Interface.Outputs.ArrayMax = local_140._4_4_;
        local_e8.ID.A = local_1a0.A;
        local_e8.ID.B = local_1a0.B;
        local_e8.ID.C = local_1a0.C;
        local_e8.ID.D = local_1a0.D;
        local_e8.Interface.Environment.AllocatorInstance.Data = local_138;
        local_e8.Interface.Environment.ArrayNum = (int)local_130;
        local_e8.Metadata.ClassName.Namespace = local_190.ClassName.Namespace;
        local_e8.Metadata.ClassName.Name = local_190.ClassName.Name;
        local_e8.Interface.Environment.ArrayMax = local_130._4_4_;
        local_130 = 0;
        local_e8.Metadata.ClassName.Variant = local_190.ClassName.Variant;
        local_e8.Metadata.Version = local_190.Version;
        local_e8._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
        local_e8.Metadata.Type = local_190.Type;
        local_e8.Metadata._33_1_ = local_190._33_1_;
        local_e8.Metadata.AccessFlags = local_190.AccessFlags;
        local_e8.Metadata.ChangeID.A = local_190.ChangeID.A;
        local_e8.Metadata.ChangeID.B = local_190.ChangeID.B;
        local_e8.Metadata.ChangeID.C = local_190.ChangeID.C;
        local_158 = (FMetasoundFrontendClassInput *)0x0;
        local_150 = 0;
        local_148 = (FScriptContainerElement *)0x0;
        local_140 = 0;
        local_138 = (FScriptContainerElement *)0x0;
        local_e8.Interface.ChangeID.A = local_128.A;
        local_e8.Interface.ChangeID.B = local_128.B;
        local_e8.Interface.ChangeID.C = local_128.C;
        local_e8.Interface.ChangeID.D = local_128.D;
        local_1a0 = FVar3;
        local_res18[0] = AddDependency(this,&local_e8);
        if (local_res18[0] == (FMetasoundFrontendClass *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3428680960856553145>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                             ,0x947,"Dependency");
          if (bVar4) goto code_r0x00014adf4a05;
          bVar4 = false;
          goto LAB_14adf4a4b;
        }
      }
      local_f8 = local_res18;
      local_110 = &local_108;
      local_118 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::ConformGraphInputNodeToClass'::__l11::<lambda_1>,void,FMetasoundFrontendGraph_&>
                  ::Call;
      local_108 = this;
      local_100 = pFVar9;
      local_f0 = param_1;
      FMetasoundFrontendGraphClass::IterateGraphPages
                (&pFVar9->RootGraph,
                 (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_118);
      RemoveUnusedDependencies(this);
      bVar4 = true;
      goto LAB_14adf4a4b;
    }
  }
  else {
    if (iVar1 == 1) {
      pIVar8 = Metasound::Frontend::IDataTypeRegistry::Get();
      pcVar10 = *(code **)((longlong)*pIVar8 + 0xc0);
      goto LAB_14adf484d;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x3a,L"");
    if (bVar4) {
      pcVar10 = (code *)swi(3);
      uVar5 = (*pcVar10)();
      return (bool)uVar5;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3428680960856553154>,true,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0x93e,"bClassFound");
  if (bVar4) {
code_r0x00014adf4a05:
    pcVar10 = (code *)swi(3);
    uVar5 = (*pcVar10)();
    return (bool)uVar5;
  }
  bVar4 = false;
LAB_14adf4a4b:
  if (local_138 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_148 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_158,(int)local_150);
  if (local_158 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_158);
  }
  return bVar4;
}

// ConformGraphOutputNodeToClass @ 14adf4ac0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ConformGraphOutputNodeToClass
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassOutput *param_1)

{
  IDocumentCache *pIVar1;
  FGuid FVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  EMetasoundFrontendClassType EVar6;
  IDataTypeRegistry *pIVar7;
  FMetasoundFrontendDocument *pFVar8;
  code *pcVar9;
  undefined8 local_res10;
  FMetasoundFrontendClass *local_res18 [2];
  undefined **local_1a8;
  FGuid local_1a0;
  FMetasoundFrontendClassMetadata local_190;
  FMetasoundFrontendClassInput *local_158;
  undefined8 local_150;
  FScriptContainerElement *local_148;
  undefined8 local_140;
  FScriptContainerElement *local_138;
  undefined8 local_130;
  FGuid local_128;
  code *local_118;
  FMetaSoundFrontendDocumentBuilder **local_110;
  FMetaSoundFrontendDocumentBuilder *local_108;
  FMetasoundFrontendDocument *local_100;
  FMetasoundFrontendClass **local_f8;
  FMetasoundFrontendClassOutput *local_f0;
  FMetasoundFrontendClass local_e8;
  FNodeClassRegistryKey local_58;
  
  local_1a8 = &___7FMetasoundFrontendClass__6B_;
  local_1a0 = Metasound::FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_190);
  local_res10 = *(undefined8 *)&param_1->field_0x8;
  local_158 = (FMetasoundFrontendClassInput *)0x0;
  local_150 = 0;
  local_148 = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_138 = (FScriptContainerElement *)0x0;
  local_130 = 0;
  local_128.A = 0;
  local_128.B = 0;
  local_128.C = 0;
  local_128.D = 0;
  if (*(int *)&param_1->field_0x30 == 0) {
    pIVar7 = Metasound::Frontend::IDataTypeRegistry::Get();
    pcVar9 = *(code **)((longlong)*pIVar7 + 0xd0);
LAB_14adf4b8d:
    cVar5 = (*pcVar9)(pIVar7,&local_res10,&local_1a8);
    if (cVar5 != '\0') {
      pFVar8 = GetDocumentChecked(this);
      EVar6 = FMetasoundFrontendClassMetadata::GetType(&local_190);
      if (EVar6 == Graph) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0xb49,
                           L"Dependencies are never listed as \'Graph\' types. Graphs are considered \'External\' from the perspective of the parent document to allow for nativization."
                          );
        if (bVar3) {
          pcVar9 = (code *)swi(3);
          uVar4 = (*pcVar9)();
          return (bool)uVar4;
        }
      }
      Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_58,&local_190);
      if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar9 = (code *)swi(3);
          uVar4 = (*pcVar9)();
          return (bool)uVar4;
        }
      }
      pIVar1 = (this->DocumentCache).Object;
      local_res18[0] =
           (FMetasoundFrontendClass *)(**(code **)(*(longlong *)pIVar1 + 0x20))(pIVar1,&local_58);
      FVar2 = local_1a0;
      if (local_res18[0] == (FMetasoundFrontendClass *)0x0) {
        local_e8.Metadata.ChangeID.D = local_190.ChangeID.D;
        local_e8.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)local_158;
        local_e8.Interface.Inputs.ArrayNum = (int)local_150;
        local_e8.Interface.Inputs.ArrayMax = local_150._4_4_;
        local_e8.Interface.Outputs.AllocatorInstance.Data = local_148;
        local_e8.Interface.Outputs.ArrayNum = (int)local_140;
        local_e8.Interface.Outputs.ArrayMax = local_140._4_4_;
        local_e8.ID.A = local_1a0.A;
        local_e8.ID.B = local_1a0.B;
        local_e8.ID.C = local_1a0.C;
        local_e8.ID.D = local_1a0.D;
        local_e8.Interface.Environment.AllocatorInstance.Data = local_138;
        local_e8.Interface.Environment.ArrayNum = (int)local_130;
        local_e8.Metadata.ClassName.Namespace = local_190.ClassName.Namespace;
        local_e8.Metadata.ClassName.Name = local_190.ClassName.Name;
        local_e8.Interface.Environment.ArrayMax = local_130._4_4_;
        local_130 = 0;
        local_e8.Metadata.ClassName.Variant = local_190.ClassName.Variant;
        local_e8.Metadata.Version = local_190.Version;
        local_e8._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
        local_e8.Metadata.Type = local_190.Type;
        local_e8.Metadata._33_1_ = local_190._33_1_;
        local_e8.Metadata.AccessFlags = local_190.AccessFlags;
        local_e8.Metadata.ChangeID.A = local_190.ChangeID.A;
        local_e8.Metadata.ChangeID.B = local_190.ChangeID.B;
        local_e8.Metadata.ChangeID.C = local_190.ChangeID.C;
        local_158 = (FMetasoundFrontendClassInput *)0x0;
        local_150 = 0;
        local_148 = (FScriptContainerElement *)0x0;
        local_140 = 0;
        local_138 = (FScriptContainerElement *)0x0;
        local_e8.Interface.ChangeID.A = local_128.A;
        local_e8.Interface.ChangeID.B = local_128.B;
        local_e8.Interface.ChangeID.C = local_128.C;
        local_e8.Interface.ChangeID.D = local_128.D;
        local_1a0 = FVar2;
        local_res18[0] = AddDependency(this,&local_e8);
        if (local_res18[0] == (FMetasoundFrontendClass *)0x0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3428680960856553087>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                             ,0x981,"Dependency");
          if (bVar3) goto code_r0x00014adf4d45;
          bVar3 = false;
          goto LAB_14adf4d8b;
        }
      }
      local_f8 = local_res18;
      local_110 = &local_108;
      local_118 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::ConformGraphOutputNodeToClass'::__l11::<lambda_1>,void,FMetasoundFrontendGraph_&>
                  ::Call;
      local_108 = this;
      local_100 = pFVar8;
      local_f0 = param_1;
      FMetasoundFrontendGraphClass::IterateGraphPages
                (&pFVar8->RootGraph,
                 (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_118);
      RemoveUnusedDependencies(this);
      bVar3 = true;
      goto LAB_14adf4d8b;
    }
  }
  else {
    if (*(int *)&param_1->field_0x30 == 1) {
      pIVar7 = Metasound::Frontend::IDataTypeRegistry::Get();
      pcVar9 = *(code **)((longlong)*pIVar7 + 0xd8);
      goto LAB_14adf4b8d;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x53,L"");
    if (bVar3) {
      pcVar9 = (code *)swi(3);
      uVar4 = (*pcVar9)();
      return (bool)uVar4;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3428680960856553096>,true,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0x978,"bClassFound");
  if (bVar3) {
code_r0x00014adf4d45:
    pcVar9 = (code *)swi(3);
    uVar4 = (*pcVar9)();
    return (bool)uVar4;
  }
  bVar3 = false;
LAB_14adf4d8b:
  if (local_138 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_148 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_158,(int)local_150);
  if (local_158 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_158);
  }
  return bVar3;
}

// ContainsDependencyOfType @ 14adf4e10

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ContainsDependencyOfType
          (FMetaSoundFrontendDocumentBuilder *this,EMetasoundFrontendClassType param_1)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
                    /* WARNING: Could not recover jumptable at 0x00014adf4e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)pIVar1 + 0x10))(pIVar1,param_1);
  return (bool)uVar4;
}

// ContainsEdge @ 14adf4e70

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ContainsEdge
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendEdge *param_1,FGuid *param_2)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014adf4ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5,param_1,*(code **)(*plVar5 + 8));
  return (bool)uVar4;
}

// ContainsNode @ 14adf4ef0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ContainsNode
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014adf4f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5,param_1,*(code **)(*plVar5 + 8));
  return (bool)uVar4;
}

// ConvertFromPreset @ 14adf4f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ConvertFromPreset(FMetaSoundFrontendDocumentBuilder *this)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  FMetasoundFrontendDocument *pFVar6;
  undefined1 auStackY_b8 [32];
  FDocumentPresetStateChangedArgs local_88 [16];
  bool local_78;
  undefined1 local_70 [24];
  undefined8 uStack_58;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ForElementType<FSetElementId> FStack_38;
  ulonglong uStack_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar6 = GetConstDocumentChecked(this);
  if ((pFVar6->RootGraph).PresetOptions.bIsPreset == false) {
    bVar4 = false;
  }
  else {
    local_78 = false;
    local_70._0_8_ = (FScriptContainerElement *)0x0;
    local_70._8_8_ = 0;
    local_50 = (void *)0x0;
    FStack_38.InlineData[0] = '\0';
    FStack_38.InlineData[1] = '\0';
    FStack_38.InlineData[2] = '\0';
    FStack_38.InlineData[3] = '\0';
    FStack_38._padding_ = 0;
    FStack_38.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_70._16_8_ = 0;
    uStack_58 = 0;
    uStack_28 = 0;
    uStack_48 = ___xmm_00000000ffffffff0000008000000000;
    local_40 = _UNK_150631d98;
    pFVar6 = GetDocumentChecked(this);
    (pFVar6->RootGraph).PresetOptions.bIsPreset = local_78;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              (&(pFVar6->RootGraph).PresetOptions.InputsInheritingDefault,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_70);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    if (FStack_38.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_38.SecondaryData);
    }
    iVar2 = SUB84(local_70._8_8_,4);
    local_70._8_8_ = local_70._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_70,0,(int *)(local_70 + 0xc));
    }
    uVar3 = uStack_48._4_4_;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    local_40 = 0xffffffff;
    if (0x80 < uVar3) {
      uStack_48 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_70 + 0x10),0);
    }
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_70._0_8_);
    }
    if ((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    local_88[0] = (FDocumentPresetStateChangedArgs)0x0;
    TMulticastDelegate<void___cdecl(Metasound::Frontend::FDocumentPresetStateChangedArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&((this->DocumentDelegates).Object)->OnPresetStateChanged,local_88);
    bVar4 = true;
  }
  return bVar4;
}

// ConvertToPreset @ 14adf5110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ConvertToPreset
          (FMetaSoundFrontendDocumentBuilder *this,FMetaSoundFrontendDocumentBuilder *param_1,
          TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *param_2)

{
  int *piVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  int iVar8;
  FDocumentModifyDelegates *pFVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendClassInterface *pFVar11;
  FDocumentModifyDelegates *pFVar12;
  FDocumentModifyDelegates *pFVar13;
  FScriptContainerElement *pFVar14;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar15;
  FDocumentModifyDelegates *pFVar16;
  int iVar17;
  FDocumentModifyDelegates *pFVar18;
  bool bVar19;
  undefined1 local_res20 [8];
  FDocumentPresetStateChangedArgs local_98 [4];
  undefined1 local_94 [12];
  FDocumentModifyDelegates *local_88;
  FDocumentModifyDelegates *local_80;
  FDocumentModifyDelegates *local_78;
  FDocumentModifyDelegates *pFStack_70;
  TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> local_68;
  FRebuildPresetRootGraph local_58;
  
  pFVar13 = param_2->Object;
  pFVar18 = (FDocumentModifyDelegates *)0x0;
  iVar17 = 0;
  if (pFVar13 != (FDocumentModifyDelegates *)0x0) {
    pFVar9 = *(FDocumentModifyDelegates **)&pFVar13->_padding_;
    pFVar16 = pFVar18;
    if (pFVar9 != (FDocumentModifyDelegates *)0x0) {
      aVar5 = *(atomic<int> *)&pFVar9->_padding_;
      do {
        pFVar12 = pFVar18;
        if (aVar5 == (atomic<int>)0x0) goto LAB_14adf5187;
        LOCK();
        aVar7 = *(atomic<int> *)&pFVar9->_padding_;
        bVar19 = aVar5 == aVar7;
        if (bVar19) {
          *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar7 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar7;
      } while (!bVar19);
      pFVar16 = (FDocumentModifyDelegates *)pFVar13->_padding_;
    }
    pFVar12 = pFVar9;
    if (pFVar16 != pFVar13) {
LAB_14adf5187:
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L"");
      pFVar9 = pFVar12;
      if (bVar19) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    if ((pFVar16 == (FDocumentModifyDelegates *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_88 = pFVar16;
    local_80 = pFVar9;
    if ((pFVar16 == (FDocumentModifyDelegates *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar13 = pFVar9;
    pFVar12 = pFStack_70;
    iVar8 = iVar17;
    iVar17 = 1;
    goto LAB_14adf5362;
  }
  pFVar10 = GetConstDocumentChecked(param_1);
  pFVar9 = ::operator_new(0x2f0);
  if (pFVar9 == (FDocumentModifyDelegates *)0x0) {
    pTVar15 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_00000010;
    pFVar13 = pFVar18;
    pFVar16 = ___xmm_00000000000000000000000000000010;
    pFVar9 = _UNK_150651568;
LAB_14adf52f6:
    local_78 = pFVar16;
    pFStack_70 = pFVar9;
    if (((*(longlong *)&pTVar15->field_0x0 == 0) || (*(longlong *)&pTVar15->field_0x8 == 0)) ||
       (*(int *)(*(longlong *)&pTVar15->field_0x8 + 8) < 1)) {
      if (pFVar13 != (FDocumentModifyDelegates *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar13->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar13->_padding_ + 1);
        UNLOCK();
      }
      *(TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)&pTVar15->field_0x0 =
           pTVar15;
      if (pFVar13 != *(FDocumentModifyDelegates **)&pTVar15->field_0x8) {
        if (pFVar13 != (FDocumentModifyDelegates *)0x0) {
          LOCK();
          ((atomic<int> *)&pFVar13->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pFVar13->_padding_)[1] + 1);
          UNLOCK();
        }
        plVar3 = *(longlong **)&pTVar15->field_0x8;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        *(FDocumentModifyDelegates **)&pTVar15->field_0x8 = pFVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar13);
    }
  }
  else {
    *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar9->_padding_)[1] = (atomic<int>)0x1;
    pFVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
              ((FDocumentModifyDelegates *)&pFVar9->OnDocumentMetadataChanged,pFVar10);
    pTVar15 = &pFVar9->OnDocumentMetadataChanged;
    pFVar13 = pFVar9;
    pFVar16 = (FDocumentModifyDelegates *)pTVar15;
    if (pTVar15 != (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0)
    goto LAB_14adf52f6;
    local_78 = (FDocumentModifyDelegates *)pTVar15;
    pFStack_70 = pFVar9;
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar8 = 2;
  pFVar13 = local_80;
  pFVar12 = pFVar9;
LAB_14adf5362:
  if (pFVar9 != (FDocumentModifyDelegates *)0x0) {
    LOCK();
    *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
    UNLOCK();
  }
  if (iVar8 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
  }
  if (iVar17 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
  }
  if (pFVar9 != (FDocumentModifyDelegates *)0x0) {
    LOCK();
    *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
    UNLOCK();
  }
  local_68.Object = pFVar16;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
  ClearDocument(this,&local_68);
  pFVar10 = GetDocumentChecked(this);
  this_00 = &(pFVar10->RootGraph).PresetOptions.InputsInheritingDefault;
  if (*(int *)&(pFVar10->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x8 !=
      *(int *)&(pFVar10->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    iVar17 = *(int *)&(pFVar10->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0xc;
    *(undefined4 *)&(pFVar10->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x8 =
         0;
    if (iVar17 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_00,0,
                 (int *)&(pFVar10->RootGraph).PresetOptions.InputsInheritingDefault.Elements.
                         field_0xc);
    }
    *(undefined4 *)&(pFVar10->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x30 =
         0xffffffff;
    *(undefined4 *)&(pFVar10->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x34 =
         0;
    *(undefined4 *)&(pFVar10->RootGraph).PresetOptions.InputsInheritingDefault.Elements.field_0x28 =
         0;
  }
  pFVar11 = FMetasoundFrontendClass::GetDefaultInterface
                      ((FMetasoundFrontendClass *)&pFVar10->RootGraph);
  iVar17 = (pFVar11->Inputs).ArrayNum;
  pFVar14 = (pFVar11->Inputs).AllocatorInstance.Data;
  pFVar2 = pFVar14 + (longlong)iVar17 * 0x48;
  while( true ) {
    if ((pFVar11->Inputs).ArrayNum != iVar17) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar14 == pFVar2) break;
    local_94._4_8_ = *(undefined8 *)pFVar14;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&(pFVar10->RootGraph).PresetOptions.InputsInheritingDefault,(FName *)local_94,
               (bool *)(local_94 + 4));
    pFVar14 = pFVar14 + 0x48;
  }
  (pFVar10->RootGraph).PresetOptions.bIsPreset = true;
  local_58._padding_ = (longlong)&___7FRebuildPresetRootGraph_Frontend_Metasound__6B_;
  local_58.ParentBuilder = param_1;
  bVar19 = Metasound::Frontend::FRebuildPresetRootGraph::Transform(&local_58,this);
  if (bVar19) {
    if (*(longlong *)&this->DocumentInterface != 0) {
      pFVar18 = *(FDocumentModifyDelegates **)&(this->DocumentInterface).field_0x8;
    }
    (**(code **)(pFVar18->_padding_ + 0x38))(pFVar18);
    if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_98[0] = (FDocumentPresetStateChangedArgs)0x0;
    TMulticastDelegate<void___cdecl(Metasound::Frontend::FDocumentPresetStateChangedArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&((this->DocumentDelegates).Object)->OnPresetStateChanged,local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    bVar19 = true;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    bVar19 = false;
  }
  return bVar19;
}

// ConvertToPreset @ 14adf5530

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ConvertToPreset
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendDocument *param_1,
          TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// CreateDataReference @ 14adf56a0

TOptional<Metasound::FAnyDataReference> * __cdecl
FMetaSoundFrontendDocumentBuilder::CreateDataReference
          (TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,
          FOperatorSettings *param_1,FName param_2,FLiteral *param_3,
          EDataReferenceAccessType param_4)

{
  IDataTypeRegistry *pIVar1;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  pIVar1 = Metasound::Frontend::IDataTypeRegistry::Get();
  (**(code **)((longlong)*pIVar1 + 0x98))
            (pIVar1,__return_storage_ptr__,local_res18,param_4,param_3,param_1);
  return __return_storage_ptr__;
}

// CreateFrontendNodeConfiguration @ 14adf5710

TInstancedStruct<FMetaSoundFrontendNodeConfiguration> * __thiscall
FMetaSoundFrontendDocumentBuilder::CreateFrontendNodeConfiguration
          (FMetaSoundFrontendDocumentBuilder *this,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1)

{
  EMetasoundFrontendClassType EVar1;
  FNodeClassRegistryKey *pFVar2;
  FNodeClassRegistryKey local_38;
  
  pFVar2 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,param_1);
  EVar1 = FMetasoundFrontendClassMetadata::GetType(param_1);
  CreateFrontendNodeConfiguration(this,__return_storage_ptr__,EVar1,pFVar2);
  return __return_storage_ptr__;
}

// CreateFrontendNodeConfiguration @ 14adf5780

TInstancedStruct<FMetaSoundFrontendNodeConfiguration> * __thiscall
FMetaSoundFrontendDocumentBuilder::CreateFrontendNodeConfiguration
          (FMetaSoundFrontendDocumentBuilder *this,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__,
          EMetasoundFrontendClassType param_1,FNodeClassRegistryKey *param_2)

{
  INodeTemplateRegistry *pIVar1;
  longlong *plVar2;
  FInstancedStruct *pFVar3;
  INodeClassRegistry *pIVar4;
  FInstancedStruct local_18;
  
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->InstancedStruct);
  if (param_1 == Template) {
    pIVar1 = Metasound::Frontend::INodeTemplateRegistry::Get();
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_2);
    if (plVar2 == (longlong *)0x0) {
      return __return_storage_ptr__;
    }
    pFVar3 = (FInstancedStruct *)(**(code **)(*plVar2 + 0x20))(plVar2,&local_18);
  }
  else {
    pIVar4 = Metasound::Frontend::INodeClassRegistry::GetChecked();
    pFVar3 = (FInstancedStruct *)(**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,&local_18,param_2);
  }
  FInstancedStruct::operator=(&__return_storage_ptr__->InstancedStruct,pFVar3);
  FInstancedStruct::Reset(&local_18);
  return __return_storage_ptr__;
}

// DuplicateGraphInput @ 14adf6540

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendClassInput * __thiscall
FMetaSoundFrontendDocumentBuilder::DuplicateGraphInput
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendClassInput *pFVar3;
  longlong *plVar4;
  FMetasoundFrontendClassInput *pFVar5;
  FDocumentIDGenerator *this_00;
  FMetasoundFrontendDocument *pFVar6;
  FGuid *pFVar7;
  FName local_res10;
  FName local_res18;
  FMetasoundFrontendClassInput local_108;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FMetasoundFrontendClassInput local_88;
  FGuid local_40;
  FGuid local_30;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMetasoundFrontendClassInput *)(*pcVar1)();
    return pFVar3;
  }
  plVar4 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  pFVar3 = (FMetasoundFrontendClassInput *)(**(code **)(*plVar4 + 8))(plVar4,param_1);
  if (pFVar3 == (FMetasoundFrontendClassInput *)0x0) {
    if ((byte)LogMetaSound._0_1_ < 3) {
      return (FMetasoundFrontendClassInput *)0x0;
    }
    ::FName::ToString(&local_res10,&local_b8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  else {
    pFVar5 = FindGraphInput(this,local_res18);
    if (pFVar5 == (FMetasoundFrontendClassInput *)0x0) {
      this_00 = Metasound::Frontend::FDocumentIDGenerator::Get();
      pFVar6 = GetConstDocumentChecked(this);
      FMetasoundFrontendClassInput::FMetasoundFrontendClassInput(&local_108,pFVar3);
      pFVar7 = Metasound::Frontend::FDocumentIDGenerator::CreateNodeID(this_00,&local_40,pFVar6);
      local_108._padding_._0_4_ = pFVar7->A;
      local_108._padding_._4_4_ = pFVar7->B;
      local_108._padding_._0_4_ = pFVar7->C;
      local_108._padding_._4_4_ = pFVar7->D;
      pFVar7 = Metasound::Frontend::FDocumentIDGenerator::CreateVertexID(this_00,&local_30,pFVar6);
      local_108._padding_._0_4_ = pFVar7->A;
      local_108._padding_._4_4_ = pFVar7->B;
      local_108._padding_._0_4_ = pFVar7->C;
      local_108._padding_._4_4_ = pFVar7->D;
      local_108._padding_._0_4_ = local_res18.ComparisonIndex.Value;
      local_108._padding_._4_4_ = local_res18.Number;
      local_88._padding_._0_4_ = (undefined4)local_108._padding_;
      local_88.Defaults.AllocatorInstance.Data = local_108.Defaults.AllocatorInstance.Data;
      local_88.Defaults.ArrayNum = local_108.Defaults.ArrayNum;
      local_88.Defaults.ArrayMax = local_108.Defaults.ArrayMax;
      local_88._padding_._0_4_ = local_res18.ComparisonIndex.Value;
      local_88._padding_._4_4_ = local_res18.Number;
      local_88._padding_ = local_108._padding_;
      local_108.Defaults.ArrayNum = 0;
      local_108.Defaults.ArrayMax = 0;
      local_108.Defaults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88._padding_ = local_108._padding_;
      local_88._padding_ = local_108._padding_;
      local_88._padding_ = local_108._padding_;
      local_88._padding_ = local_108._padding_;
      AddGraphInput(this,&local_88,(FGuid *)0x0);
      pFVar3 = FindGraphInput(this,local_res18);
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                ((FMetasoundFrontendClassInputDefault *)local_108.Defaults.AllocatorInstance.Data,
                 local_108.Defaults.ArrayNum);
      if ((FMetasoundFrontendClassInputDefault *)local_108.Defaults.AllocatorInstance.Data !=
          (FMetasoundFrontendClassInputDefault *)0x0) {
        FMemory::Free(local_108.Defaults.AllocatorInstance.Data);
        return pFVar3;
      }
      return pFVar3;
    }
    if ((byte)LogMetaSound._0_1_ < 3) {
      return (FMetasoundFrontendClassInput *)0x0;
    }
    ::FName::ToString(&local_res18,&local_98);
    ::FName::ToString(&local_res10,&local_a8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    }
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return (FMetasoundFrontendClassInput *)0x0;
}

// DuplicateGraphInput @ 14adf6780

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::DuplicateGraphInput
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassInput *param_1,
          FName param_2,FGuid *param_3)

{
  int iVar1;
  FMetasoundFrontendClassInputDefault *pFVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  FDocumentIDGenerator *this_00;
  FMetasoundFrontendDocument *pFVar7;
  FGuid *pFVar8;
  FMetasoundFrontendNode *pFVar9;
  ForAnyElementType local_a0;
  undefined8 local_98;
  FGuid local_88;
  FMetasoundFrontendClassInput local_78;
  
  this_00 = Metasound::Frontend::FDocumentIDGenerator::Get();
  pFVar7 = GetConstDocumentChecked(this);
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  lVar3 = param_1->_padding_;
  lVar6 = param_1->_padding_;
  iVar1 = (param_1->Defaults).ArrayNum;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = CONCAT44(local_98._4_4_,iVar1);
  pFVar2 = (FMetasoundFrontendClassInputDefault *)(param_1->Defaults).AllocatorInstance.Data;
  if (iVar1 == 0) {
    local_98 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar1,0,&local_a0,iVar1,(int *)((longlong)&local_98 + 4));
    ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
              (local_a0.Data,pFVar2,iVar1);
  }
  pFVar8 = Metasound::Frontend::FDocumentIDGenerator::CreateNodeID(this_00,&local_88,pFVar7);
  lVar4._0_4_ = pFVar8->A;
  lVar4._4_4_ = pFVar8->B;
  lVar5._0_4_ = pFVar8->C;
  lVar5._4_4_ = pFVar8->D;
  pFVar8 = Metasound::Frontend::FDocumentIDGenerator::CreateVertexID(this_00,&local_88,pFVar7);
  local_78._padding_._0_4_ = pFVar8->A;
  local_78._padding_._4_4_ = pFVar8->B;
  local_78._padding_._0_4_ = pFVar8->C;
  local_78._padding_._4_4_ = pFVar8->D;
  local_78.Defaults.AllocatorInstance.Data = local_a0.Data;
  local_78.Defaults.ArrayNum = (int)local_98;
  local_78.Defaults.ArrayMax = local_98._4_4_;
  local_98 = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_78._padding_ = (longlong)param_2;
  local_78._padding_ = lVar3;
  local_78._padding_ = lVar4;
  local_78._padding_ = lVar5;
  local_78._padding_._0_4_ = (int)lVar6;
  pFVar9 = AddGraphInput(this,&local_78,param_3);
  DestructItems<FMetasoundFrontendClassInputDefault,int>
            ((FMetasoundFrontendClassInputDefault *)local_a0.Data,(int)local_98);
  if ((FMetasoundFrontendClassInputDefault *)local_a0.Data !=
      (FMetasoundFrontendClassInputDefault *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return pFVar9;
}

// DuplicateGraphOutput @ 14adf6900

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendClassOutput * __thiscall
FMetaSoundFrontendDocumentBuilder::DuplicateGraphOutput
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FName param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendClassOutput *pFVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  FDocumentIDGenerator *this_00;
  FMetasoundFrontendDocument *pFVar7;
  FGuid *pFVar8;
  FName local_res10;
  FName local_res18;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FName local_b8;
  undefined8 uStack_b0;
  FName local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FScriptContainerElement *local_58;
  int iStack_50;
  int iStack_4c;
  undefined4 local_48;
  FGuid local_38;
  FGuid local_28;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetasoundFrontendClassOutput *)(*pcVar2)();
    return pFVar4;
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x18))(plVar5,param_1);
  if (puVar6 == (undefined8 *)0x0) {
    if ((byte)LogMetaSound._0_1_ < 3) {
      return (FMetasoundFrontendClassOutput *)0x0;
    }
    ::FName::ToString(&local_res10,&local_d8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  else {
    pFVar4 = FindGraphOutput(this,local_res18);
    if (pFVar4 == (FMetasoundFrontendClassOutput *)0x0) {
      this_00 = Metasound::Frontend::FDocumentIDGenerator::Get();
      pFVar7 = GetConstDocumentChecked(this);
      local_b8 = (FName)*puVar6;
      uStack_b0 = puVar6[1];
      uVar1 = *(undefined4 *)(puVar6 + 6);
      pFVar8 = Metasound::Frontend::FDocumentIDGenerator::CreateNodeID(this_00,&local_38,pFVar7);
      local_e8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar8;
      local_e8.Data.ArrayNum = pFVar8->C;
      local_e8.Data.ArrayMax = pFVar8->D;
      pFVar8 = Metasound::Frontend::FDocumentIDGenerator::CreateVertexID(this_00,&local_28,pFVar7);
      local_68._0_4_ = pFVar8->A;
      local_68._4_4_ = pFVar8->B;
      uStack_60._0_4_ = pFVar8->C;
      uStack_60._4_4_ = pFVar8->D;
      local_b8 = local_res18;
      local_78 = local_res18;
      uStack_70 = uStack_b0;
      local_58 = local_e8.Data.AllocatorInstance.Data;
      iStack_50 = local_e8.Data.ArrayNum;
      iStack_4c = local_e8.Data.ArrayMax;
      local_48 = uVar1;
      AddGraphOutput(this,(FMetasoundFrontendClassOutput *)&local_78,(FGuid *)0x0);
      pFVar4 = FindGraphOutput(this,local_res18);
      return pFVar4;
    }
    if ((byte)LogMetaSound._0_1_ < 3) {
      return (FMetasoundFrontendClassOutput *)0x0;
    }
    ::FName::ToString(&local_res18,&local_e8);
    ::FName::ToString(&local_res10,&local_c8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    local_d8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      local_d8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return (FMetasoundFrontendClassOutput *)0x0;
}

// DuplicateGraphOutput @ 14adf6af0

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::DuplicateGraphOutput
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassOutput *param_1,
          FName param_2,FGuid *param_3)

{
  undefined4 uVar1;
  FDocumentIDGenerator *this_00;
  FMetasoundFrontendDocument *pFVar2;
  FGuid *pFVar3;
  FMetasoundFrontendNode *pFVar4;
  FGuid local_78;
  FGuid local_68;
  FName local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  FGuid local_38 [2];
  
  this_00 = Metasound::Frontend::FDocumentIDGenerator::Get();
  pFVar2 = GetConstDocumentChecked(this);
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  local_58 = *(FName *)param_1;
  uStack_50 = *(undefined8 *)&param_1->field_0x8;
  local_48 = *(undefined8 *)&param_1->field_0x10;
  uStack_40 = *(undefined8 *)&param_1->field_0x18;
  local_38[0]._0_8_ = *(undefined8 *)&param_1->field_0x20;
  local_38[0]._8_8_ = *(undefined8 *)&param_1->field_0x28;
  uVar1 = *(undefined4 *)&param_1->field_0x30;
  pFVar3 = Metasound::Frontend::FDocumentIDGenerator::CreateNodeID(this_00,&local_78,pFVar2);
  local_78.A = pFVar3->A;
  local_78.B = pFVar3->B;
  local_78.C = pFVar3->C;
  local_78.D = pFVar3->D;
  pFVar3 = Metasound::Frontend::FDocumentIDGenerator::CreateVertexID(this_00,&local_68,pFVar2);
  local_48._0_4_ = pFVar3->A;
  local_48._4_4_ = pFVar3->B;
  uStack_40._0_4_ = pFVar3->C;
  uStack_40._4_4_ = pFVar3->D;
  local_38[0].A = local_78.A;
  local_38[0].B = local_78.B;
  local_38[0].C = local_78.C;
  local_38[0].D = local_78.D;
  local_58 = param_2;
  local_38[1].A = uVar1;
  pFVar4 = AddGraphOutput(this,(FMetasoundFrontendClassOutput *)&local_58,param_3);
  return pFVar4;
}

// DuplicateGraphVariable @ 14adf6bd0

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendVariable * __thiscall
FMetaSoundFrontendDocumentBuilder::DuplicateGraphVariable
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FName param_2,FGuid *param_3)

{
  FName FVar1;
  FMetasoundFrontendDocument *pFVar2;
  FMetasoundFrontendGraph *pFVar3;
  FText *pFVar4;
  FMetasoundFrontendVariable *pFVar5;
  FName *pFVar6;
  ForAnyElementType FVar7;
  FName *pFVar8;
  FGuid *this_00;
  FGuid *pFVar9;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  this_00 = &this->BuildPageID;
  pFVar9 = this_00;
  if (param_3 != (FGuid *)0x0) {
    pFVar9 = param_3;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  pFVar2 = GetDocumentChecked(this);
  pFVar3 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar2->RootGraph,pFVar9);
  FVar1 = local_res10;
  pFVar6 = (FName *)(pFVar3->Variables).AllocatorInstance.Data;
  pFVar8 = pFVar6 + (longlong)(pFVar3->Variables).ArrayNum * 0x17;
  do {
    if (pFVar6 == pFVar8) {
LAB_14adf6c45:
      pFVar9 = this_00;
      if (param_3 != (FGuid *)0x0) {
        pFVar9 = param_3;
      }
      pFVar2 = GetDocumentChecked(this);
      pFVar3 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar2->RootGraph,pFVar9);
      pFVar6 = (FName *)(pFVar3->Variables).AllocatorInstance.Data;
      pFVar8 = pFVar6 + (longlong)(pFVar3->Variables).ArrayNum * 0x17;
      for (; pFVar6 != pFVar8; pFVar6 = pFVar6 + 0x17) {
        if (*pFVar6 == FVar1) {
          pFVar4 = FText::GetEmpty();
          pFVar5 = AddGraphVariable(this,local_res18,pFVar6[1],
                                    (FMetasoundFrontendLiteral *)(pFVar6 + 2),pFVar4,(FText *)0x0,
                                    param_3);
          return pFVar5;
        }
      }
      if (param_3 != (FGuid *)0x0) {
        this_00 = param_3;
      }
      if (2 < (byte)LogMetaSound._0_1_) {
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        FGuid::AppendString(this_00,&local_38,Digits);
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        FVar7.Data = local_38.Data.AllocatorInstance.Data;
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
          FVar7.Data = local_38.Data.AllocatorInstance.Data;
        }
LAB_14adf6d24:
        if (FVar7.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar7.Data);
        }
      }
      return (FMetasoundFrontendVariable *)0x0;
    }
    if (*pFVar6 == param_2) {
      if (pFVar6 != (FName *)0x0) {
        if ((byte)LogMetaSound._0_1_ < 3) {
          return (FMetasoundFrontendVariable *)0x0;
        }
        ::FName::ToString(&local_res18,&local_28);
        ::FName::ToString(&local_res10,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        FVar7.Data = local_28.Data.AllocatorInstance.Data;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
          FVar7.Data = local_28.Data.AllocatorInstance.Data;
        }
        goto LAB_14adf6d24;
      }
      goto LAB_14adf6c45;
    }
    pFVar6 = pFVar6 + 0x17;
  } while( true );
}

// FindBuildGraphChecked @ 14adf7440

FMetasoundFrontendGraph * __thiscall
FMetaSoundFrontendDocumentBuilder::FindBuildGraphChecked(FMetaSoundFrontendDocumentBuilder *this)

{
  FMetasoundFrontendDocument *pFVar1;
  FMetasoundFrontendGraph *pFVar2;
  
  pFVar1 = GetDocumentChecked(this);
  pFVar2 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar1->RootGraph,&this->BuildPageID);
  return pFVar2;
}

// FindClassInterfaceOverride @ 14adf7470

TConstStructView<FMetasoundFrontendClassInterface> * __thiscall
FMetaSoundFrontendDocumentBuilder::FindClassInterfaceOverride
          (FMetaSoundFrontendDocumentBuilder *this,
          TConstStructView<FMetasoundFrontendClassInterface> *__return_storage_ptr__,FGuid *param_1,
          FGuid *param_2)

{
  IDocumentCache *pIVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  TConstStructView<FMetasoundFrontendClassInterface> *pTVar5;
  longlong *plVar6;
  longlong lVar7;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TConstStructView<FMetasoundFrontendClassInterface> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar6 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_2);
  lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,param_1);
  if (lVar7 != 0) {
    uVar2 = *(undefined8 *)(lVar7 + 0x80);
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar7 + 0x78);
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  }
  return __return_storage_ptr__;
}

// FindConstBuildGraphChecked @ 14adf7590

FMetasoundFrontendGraph * __thiscall
FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked
          (FMetaSoundFrontendDocumentBuilder *this)

{
  FMetasoundFrontendDocument *pFVar1;
  FMetasoundFrontendGraph *pFVar2;
  
  pFVar1 = GetConstDocumentChecked(this);
  pFVar2 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     (&pFVar1->RootGraph,&this->BuildPageID);
  return pFVar2;
}

// FindDeclaredInterfaces @ 14adf75c0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::FindDeclaredInterfaces
          (FMetaSoundFrontendDocumentBuilder *this,
          TArray<Metasound::Frontend::IInterfaceRegistryEntry_const_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FMetasoundFrontendDocument *pFVar1;
  undefined1 local_res18 [16];
  
  pFVar1 = GetConstDocumentChecked(this);
  local_res18[0] = 1;
  Algo::
  Transform<TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>,TArray<Metasound::Frontend::IInterfaceRegistryEntry_const_*,TSizedDefaultAllocator<32>_>_&,_FMetaSoundFrontendDocumentBuilder::FindDeclaredInterfaces_::__l2::<lambda_1>_>
            (&pFVar1->Interfaces,param_1,(<lambda_1>)local_res18);
  return (bool)local_res18[0];
}

// FindDeclaredInterfaces @ 14adf7600

bool __cdecl
FMetaSoundFrontendDocumentBuilder::FindDeclaredInterfaces
          (FMetasoundFrontendDocument *param_1,
          TArray<Metasound::Frontend::IInterfaceRegistryEntry_const_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 1;
  Algo::
  Transform<TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>,TArray<Metasound::Frontend::IInterfaceRegistryEntry_const_*,TSizedDefaultAllocator<32>_>_&,_FMetaSoundFrontendDocumentBuilder::FindDeclaredInterfaces_::__l2::<lambda_1>_>
            (&param_1->Interfaces,param_2,(<lambda_1>)local_res8);
  return (bool)local_res8[0];
}

// FindDependency @ 14adf7630

FMetasoundFrontendClass * __thiscall
FMetaSoundFrontendDocumentBuilder::FindDependency
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendClass *pFVar4;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendClass *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
                    /* WARNING: Could not recover jumptable at 0x00014adf7681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FMetasoundFrontendClass *)(**(code **)(*(longlong *)pIVar1 + 0x18))(pIVar1,param_1);
  return pFVar4;
}

// FindDependency @ 14adf7690

FMetasoundFrontendClass * __thiscall
FMetaSoundFrontendDocumentBuilder::FindDependency
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassMetadata *param_1)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  EMetasoundFrontendClassType EVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  FNodeClassRegistryKey local_38;
  
  EVar3 = FMetasoundFrontendClassMetadata::GetType(param_1);
  if (EVar3 == Graph) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0xb49,
                       L"Dependencies are never listed as \'Graph\' types. Graphs are considered \'External\' from the perspective of the parent document to allow for nativization."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendClass *)(*pcVar2)();
      return pFVar5;
    }
  }
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,param_1);
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendClass *)(*pcVar2)();
      return pFVar5;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  pFVar5 = (FMetasoundFrontendClass *)(**(code **)(*(longlong *)pIVar1 + 0x20))(pIVar1,&local_38);
  return pFVar5;
}

// FindDependency @ 14adf7730

FMetasoundFrontendClass * __thiscall
FMetaSoundFrontendDocumentBuilder::FindDependency
          (FMetaSoundFrontendDocumentBuilder *this,FNodeClassRegistryKey *param_1)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendClass *pFVar4;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendClass *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
                    /* WARNING: Could not recover jumptable at 0x00014adf7781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FMetasoundFrontendClass *)(**(code **)(*(longlong *)pIVar1 + 0x20))(pIVar1,param_1);
  return pFVar4;
}

// FindEdges @ 14adf7790

TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FMetaSoundFrontendDocumentBuilder::FindEdges
          (FMetaSoundFrontendDocumentBuilder *this,
          TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1,param_3);
  (**(code **)(*plVar5 + 0x20))(plVar5,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FindGraphInput @ 14adf7830

FMetasoundFrontendClassInput * __thiscall
FMetaSoundFrontendDocumentBuilder::FindGraphInput
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendClassInput *pFVar3;
  longlong *plVar4;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMetasoundFrontendClassInput *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00014adf788e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FMetasoundFrontendClassInput *)
           (**(code **)(*plVar4 + 8))(plVar4,param_1,*(code **)(*plVar4 + 8));
  return pFVar3;
}

// FindGraphInputNode @ 14adf78a0

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::FindGraphInputNode
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendNode *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendNode *)(*pcVar2)();
      return pFVar4;
    }
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  lVar6 = (**(code **)(*plVar5 + 8))(plVar5,param_1);
  if (lVar6 != 0) {
    if (param_2 == (FGuid *)0x0) {
      param_2 = &this->BuildPageID;
    }
    if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FMetasoundFrontendNode *)(*pcVar2)();
        return pFVar4;
      }
    }
    pIVar1 = (this->DocumentCache).Object;
    plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014adf7967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar4 = (FMetasoundFrontendNode *)
             (**(code **)(*plVar5 + 0x28))(plVar5,lVar6 + 0x20,*(code **)(*plVar5 + 0x28));
    return pFVar4;
  }
  return (FMetasoundFrontendNode *)0x0;
}

// FindGraphOutput @ 14adf7980

FMetasoundFrontendClassOutput * __thiscall
FMetaSoundFrontendDocumentBuilder::FindGraphOutput
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendClassOutput *pFVar3;
  longlong *plVar4;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMetasoundFrontendClassOutput *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00014adf79de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FMetasoundFrontendClassOutput *)
           (**(code **)(*plVar4 + 0x18))(plVar4,param_1,*(code **)(*plVar4 + 0x18));
  return pFVar3;
}

// FindGraphOutputNode @ 14adf79f0

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::FindGraphOutputNode
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendNode *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendNode *)(*pcVar2)();
      return pFVar4;
    }
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,param_1);
  if (lVar6 != 0) {
    if (param_2 == (FGuid *)0x0) {
      param_2 = &this->BuildPageID;
    }
    if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FMetasoundFrontendNode *)(*pcVar2)();
        return pFVar4;
      }
    }
    pIVar1 = (this->DocumentCache).Object;
    plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014adf7ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar4 = (FMetasoundFrontendNode *)
             (**(code **)(*plVar5 + 0x28))(plVar5,lVar6 + 0x20,*(code **)(*plVar5 + 0x28));
    return pFVar4;
  }
  return (FMetasoundFrontendNode *)0x0;
}

// FindGraphVariable @ 14adf7ad0

FMetasoundFrontendVariable * __thiscall
FMetaSoundFrontendDocumentBuilder::FindGraphVariable
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  FMetasoundFrontendDocument *pFVar1;
  FMetasoundFrontendGraph *pFVar2;
  FMetasoundFrontendVariable *pFVar3;
  FMetasoundFrontendVariable *pFVar4;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  pFVar1 = GetDocumentChecked(this);
  pFVar2 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar1->RootGraph,param_2);
  pFVar3 = (FMetasoundFrontendVariable *)(pFVar2->Variables).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (pFVar2->Variables).ArrayNum;
  if (pFVar3 != pFVar4) {
    do {
      if (((param_1->A == (pFVar3->ID).A && param_1->D == (pFVar3->ID).D) &&
          param_1->C == (pFVar3->ID).C) && param_1->B == (pFVar3->ID).B) {
        return pFVar3;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar4);
  }
  return (FMetasoundFrontendVariable *)0x0;
}

// FindGraphVariable @ 14adf7b60

FMetasoundFrontendVariable * __thiscall
FMetaSoundFrontendDocumentBuilder::FindGraphVariable
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2)

{
  FMetasoundFrontendDocument *pFVar1;
  FMetasoundFrontendGraph *pFVar2;
  FMetasoundFrontendVariable *pFVar3;
  FMetasoundFrontendVariable *pFVar4;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  pFVar1 = GetDocumentChecked(this);
  pFVar2 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar1->RootGraph,param_2);
  pFVar3 = (FMetasoundFrontendVariable *)(pFVar2->Variables).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (pFVar2->Variables).ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return (FMetasoundFrontendVariable *)0x0;
    }
    if (pFVar3->Name == param_1) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}

// FindGraphVariableByNodeID @ 14adf7bd0

FMetasoundFrontendVariable * __thiscall
FMetaSoundFrontendDocumentBuilder::FindGraphVariableByNodeID
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  bool bVar1;
  FMetasoundFrontendDocument *pFVar2;
  FMetasoundFrontendGraph *pFVar3;
  FMetasoundFrontendVariable *pFVar4;
  FMetasoundFrontendVariable *pFVar5;
  FGuid *local_res10 [3];
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  pFVar2 = GetDocumentChecked(this);
  pFVar3 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar2->RootGraph,param_2);
  pFVar4 = (FMetasoundFrontendVariable *)(pFVar3->Variables).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (pFVar3->Variables).ArrayNum;
  local_res10[0] = param_1;
  while( true ) {
    if (pFVar4 == pFVar5) {
      return (FMetasoundFrontendVariable *)0x0;
    }
    bVar1 = `FMetaSoundFrontendDocumentBuilder::FindGraphVariableByNodeID'::__l2::<lambda_1>::
            operator()(local_res10,pFVar4);
    if (bVar1) break;
    pFVar4 = pFVar4 + 1;
  }
  return pFVar4;
}

// FindGraphVariableInternal @ 14adf7c60

FMetasoundFrontendVariable * __thiscall
FMetaSoundFrontendDocumentBuilder::FindGraphVariableInternal
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2)

{
  FMetasoundFrontendDocument *pFVar1;
  FMetasoundFrontendGraph *pFVar2;
  FMetasoundFrontendVariable *pFVar3;
  FMetasoundFrontendVariable *pFVar4;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  pFVar1 = GetDocumentChecked(this);
  pFVar2 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar1->RootGraph,param_2);
  pFVar3 = (FMetasoundFrontendVariable *)(pFVar2->Variables).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (pFVar2->Variables).ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return (FMetasoundFrontendVariable *)0x0;
    }
    if (pFVar3->Name == param_1) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}

// FindHeadNodeInVariableStack @ 14adf7cd0

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::FindHeadNodeInVariableStack
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2)

{
  uint uVar1;
  FName FVar2;
  IDocumentCache *pIVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendDocument *pFVar6;
  FMetasoundFrontendGraph *pFVar7;
  FMetasoundFrontendNode *pFVar8;
  longlong *plVar9;
  FName *pFVar10;
  FGuid *pFVar11;
  FName *pFVar12;
  
  pFVar11 = param_2;
  if (param_2 == (FGuid *)0x0) {
    pFVar11 = &this->BuildPageID;
  }
  pFVar6 = GetDocumentChecked(this);
  pFVar7 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar6->RootGraph,pFVar11);
  pFVar12 = (FName *)(pFVar7->Variables).AllocatorInstance.Data;
  pFVar10 = pFVar12 + (longlong)(pFVar7->Variables).ArrayNum * 0x17;
  while( true ) {
    if (pFVar12 == pFVar10) {
      return (FMetasoundFrontendNode *)0x0;
    }
    if (*pFVar12 == param_1) break;
    pFVar12 = pFVar12 + 0x17;
  }
  uVar1 = pFVar12[0x16].ComparisonIndex.Value;
  if (uVar1 == 0) {
    if (((pFVar12[0x12].Number != 0 || pFVar12[0x12].ComparisonIndex.Value != 0) ||
        pFVar12[0x11].Number != 0) || ((FGuid *)(pFVar12 + 0x11))->A != 0) {
      pFVar8 = FindNode(this,(FGuid *)(pFVar12 + 0x11),param_2);
      return pFVar8;
    }
    uVar1 = pFVar12[0x14].ComparisonIndex.Value;
    if (uVar1 == 0) {
      return (FMetasoundFrontendNode *)0x0;
    }
    if (((int)uVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
      return pFVar8;
    }
    pFVar8 = FindNode(this,(FGuid *)pFVar12[0x13],param_2);
    return pFVar8;
  }
  if (((int)uVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
    return pFVar8;
  }
  FVar2 = pFVar12[0x15];
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
    return pFVar8;
  }
  pIVar3 = (this->DocumentCache).Object;
  plVar9 = (longlong *)(**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,param_2);
  pFVar8 = (FMetasoundFrontendNode *)(**(code **)(*plVar9 + 0x28))(plVar9,FVar2);
  return pFVar8;
}

// FindInterfaceInputNodes @ 14adf7f10

bool __thiscall
FMetaSoundFrontendDocumentBuilder::FindInterfaceInputNodes
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,
          TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *param_2,FGuid *param_3
          )

{
  int *piVar1;
  FMetasoundFrontendClassInput *pFVar2;
  IDocumentCache *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FMetasoundFrontendDocument *pFVar11;
  ISearchEngine *pIVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  ForElementType<FSetElementId> FVar17;
  FMetasoundFrontendClassInput *pFVar18;
  uint uVar19;
  int iVar20;
  undefined1 local_res18 [8];
  longlong local_a8;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> local_a0;
  FMetasoundFrontendClassInput *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  local_88 = (FMetasoundFrontendClassInput *)0x0;
  local_78 = (void *)0x0;
  local_68 = (void *)0x0;
  local_38 = (void *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 1;
  local_30 = 0;
  pFVar11 = GetConstDocumentChecked(this);
  pIVar12 = Metasound::Frontend::ISearchEngine::Get();
  cVar6 = (**(code **)((longlong)*pIVar12 + 0x20))(pIVar12,param_1,&local_88);
  lVar15 = local_48;
  if (cVar6 != '\0') {
    uVar19 = (uint)local_40 * 0x40 + local_40._4_4_ + ((uint)local_40 >> 2) + 0x9e3779b9 ^
             (uint)local_40;
    uVar9 = ::GetTypeHash(local_48._0_4_);
    uVar9 = uVar9 + (int)((ulonglong)lVar15 >> 0x20);
    if (*(int *)&(pFVar11->Interfaces).Elements.field_0x8 !=
        *(int *)&(pFVar11->Interfaces).Elements.field_0x34) {
      FVar17 = (pFVar11->Interfaces).Hash.SecondaryData;
      if (FVar17 == (ForElementType<FSetElementId>)0x0) {
        FVar17 = (ForElementType<FSetElementId>)&(pFVar11->Interfaces).Hash;
      }
      iVar20 = *(int *)((longlong)FVar17 +
                       (ulonglong)
                       ((pFVar11->Interfaces).HashSize - 1U &
                       (uVar9 * 0x40 + uVar19 + 0x9e3779b9 + (uVar9 >> 2) ^ uVar9)) * 4);
      if (iVar20 != -1) {
        lVar15 = *(longlong *)&(pFVar11->Interfaces).Elements;
        do {
          lVar16 = (longlong)iVar20;
          if (((*(longlong *)(lVar15 + lVar16 * 0x18) == local_48) &&
              (*(int *)(lVar15 + 8 + lVar16 * 0x18) == (uint)local_40)) &&
             (*(int *)(lVar15 + 0xc + lVar16 * 0x18) == local_40._4_4_)) {
            if (iVar20 != -1) {
              if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
              pIVar3 = (this->DocumentCache).Object;
              plVar13 = (longlong *)(**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,param_3);
              if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
              plVar14 = (longlong *)
                        (**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
              iVar20 = (int)local_80;
              local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_a0.ArrayNum = 0;
              local_a0.ArrayMax = 0;
              pFVar2 = local_88 + (int)local_80;
              pFVar18 = local_88;
              goto LAB_14adf81d8;
            }
            break;
          }
          iVar20 = *(int *)(lVar15 + 0x10 + lVar16 * 0x18);
        } while (iVar20 != -1);
      }
    }
  }
  bVar7 = false;
LAB_14adf80bc:
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_88,(int)local_80);
  if (local_88 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_88);
  }
  return bVar7;
LAB_14adf81d8:
  if ((int)local_80 != iVar20) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<FMetasoundFrontendClassInput,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res18);
  }
  if (pFVar18 == pFVar2) {
    if (param_2 != &local_a0) {
      pFVar4 = (param_2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_2->AllocatorInstance).Data = local_a0.AllocatorInstance.Data;
      param_2->ArrayNum = local_a0.ArrayNum;
      *piVar1 = local_a0.ArrayMax;
      local_a0.ArrayNum = 0;
      local_a0.ArrayMax = 0;
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    bVar7 = true;
LAB_14adf8306:
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    goto LAB_14adf80bc;
  }
  lVar15 = (**(code **)(*plVar14 + 8))(plVar14,pFVar18->_padding_);
  if ((lVar15 == 0) ||
     (local_a8 = (**(code **)(*plVar13 + 0x28))(plVar13,lVar15 + 0x20), local_a8 == 0)) {
    bVar7 = false;
    goto LAB_14adf8306;
  }
  if (((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 <
       local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar10 = local_a0.ArrayNum;
  if (local_a0.ArrayNum == local_a0.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
  }
  pFVar18 = pFVar18 + 1;
  local_a0.ArrayNum = iVar10 + 1;
  *(longlong *)(local_a0.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_a8;
  goto LAB_14adf81d8;
}

// FindInterfaceOutputNodes @ 14adf8330

bool __thiscall
FMetaSoundFrontendDocumentBuilder::FindInterfaceOutputNodes
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,
          TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *param_2,FGuid *param_3
          )

{
  int *piVar1;
  IDocumentCache *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FMetasoundFrontendDocument *pFVar10;
  ISearchEngine *pIVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  undefined1 local_res18 [8];
  longlong local_a8;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> local_a0;
  FMetasoundFrontendClassInput *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  local_88 = (FMetasoundFrontendClassInput *)0x0;
  local_78 = (undefined8 *)0x0;
  local_68 = (void *)0x0;
  local_38 = (void *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 1;
  local_30 = 0;
  pFVar10 = GetConstDocumentChecked(this);
  pIVar11 = Metasound::Frontend::ISearchEngine::Get();
  cVar5 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,param_1,&local_88);
  lVar14 = local_48;
  if (cVar5 != '\0') {
    uVar20 = (uint)local_40 * 0x40 + local_40._4_4_ + ((uint)local_40 >> 2) + 0x9e3779b9 ^
             (uint)local_40;
    uVar8 = ::GetTypeHash(local_48._0_4_);
    uVar8 = uVar8 + (int)((ulonglong)lVar14 >> 0x20);
    if (*(int *)&(pFVar10->Interfaces).Elements.field_0x8 !=
        *(int *)&(pFVar10->Interfaces).Elements.field_0x34) {
      FVar16 = (pFVar10->Interfaces).Hash.SecondaryData;
      if (FVar16 == (ForElementType<FSetElementId>)0x0) {
        FVar16 = (ForElementType<FSetElementId>)&(pFVar10->Interfaces).Hash;
      }
      iVar21 = *(int *)((longlong)FVar16 +
                       (ulonglong)
                       ((pFVar10->Interfaces).HashSize - 1U &
                       (uVar8 * 0x40 + uVar20 + 0x9e3779b9 + (uVar8 >> 2) ^ uVar8)) * 4);
      if (iVar21 != -1) {
        lVar14 = *(longlong *)&(pFVar10->Interfaces).Elements;
        do {
          lVar15 = (longlong)iVar21;
          if (((*(longlong *)(lVar14 + lVar15 * 0x18) == local_48) &&
              (*(int *)(lVar14 + 8 + lVar15 * 0x18) == (uint)local_40)) &&
             (*(int *)(lVar14 + 0xc + lVar15 * 0x18) == local_40._4_4_)) {
            if (iVar21 != -1) {
              if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              pIVar2 = (this->DocumentCache).Object;
              plVar12 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_3);
              if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              plVar13 = (longlong *)
                        (**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
              iVar21 = (int)local_70;
              uVar17 = (ulonglong)(int)local_70;
              local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              puVar19 = (undefined8 *)(uVar17 * 0x34 + (longlong)local_78);
              local_a0.ArrayNum = 0;
              local_a0.ArrayMax = 0;
              puVar18 = local_78;
              goto LAB_14adf8600;
            }
            break;
          }
          iVar21 = *(int *)(lVar14 + 0x10 + lVar15 * 0x18);
        } while (iVar21 != -1);
      }
    }
  }
  bVar6 = false;
LAB_14adf84dc:
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_88,(int)local_80);
  if (local_88 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_88);
  }
  return bVar6;
LAB_14adf8600:
  if ((int)uVar17 != iVar21) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<FMetasoundFrontendClassOutput,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res18);
  }
  if (puVar18 == puVar19) {
    if (param_2 != &local_a0) {
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_2->AllocatorInstance).Data = local_a0.AllocatorInstance.Data;
      param_2->ArrayNum = local_a0.ArrayNum;
      *piVar1 = local_a0.ArrayMax;
      local_a0.ArrayNum = 0;
      local_a0.ArrayMax = 0;
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    bVar6 = true;
LAB_14adf8730:
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    goto LAB_14adf84dc;
  }
  lVar14 = (**(code **)(*plVar13 + 0x18))(plVar13,*puVar18);
  if ((lVar14 == 0) ||
     (local_a8 = (**(code **)(*plVar12 + 0x28))(plVar12,lVar14 + 0x20), local_a8 == 0)) {
    bVar6 = false;
    goto LAB_14adf8730;
  }
  if (((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 <
       local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar9 = local_a0.ArrayNum;
  if (local_a0.ArrayNum == local_a0.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
  }
  puVar18 = (undefined8 *)((longlong)puVar18 + 0x34);
  local_a0.ArrayNum = iVar9 + 1;
  *(longlong *)(local_a0.AllocatorInstance.Data + (longlong)iVar9 * 8) = local_a8;
  uVar17 = local_70 & 0xffffffff;
  goto LAB_14adf8600;
}

// FindNode @ 14adf8750

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNode
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendNode *pFVar4;
  longlong *plVar5;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendNode *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014adf87c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FMetasoundFrontendNode *)
           (**(code **)(*plVar5 + 0x28))(plVar5,param_1,*(code **)(*plVar5 + 0x28));
  return pFVar4;
}

// FindNodeClassInputDefaults @ 14adf87d0

TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeClassInputDefaults
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FName param_2,FGuid *param_3)

{
  FMetasoundFrontendClassInput *pFVar1;
  int iVar2;
  IDocumentCache *pIVar3;
  code *pcVar4;
  bool bVar5;
  EMetasoundFrontendClassType EVar6;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  FMetasoundFrontendNode *pFVar9;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar10;
  INodeTemplateRegistry *pIVar11;
  uint uVar12;
  FMetasoundFrontendClassInput *pFVar13;
  FGuid *pFVar14;
  uint uVar15;
  longlong local_res8;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  FNodeClassRegistryKey local_58;
  
  pFVar14 = param_3;
  if (param_3 == (FGuid *)0x0) {
    pFVar14 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar7;
  }
  pIVar3 = (this->DocumentCache).Object;
  plVar8 = (longlong *)(**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,pFVar14);
  pFVar9 = (FMetasoundFrontendNode *)(**(code **)(*plVar8 + 0x28))(plVar8,param_1);
  if (pFVar9 != (FMetasoundFrontendNode *)0x0) {
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar7;
    }
    pIVar3 = (this->DocumentCache).Object;
    this_00 = (FMetasoundFrontendClass *)
              (**(code **)(*(longlong *)pIVar3 + 0x18))(pIVar3,&pFVar9->ClassID);
    if (this_00 != (FMetasoundFrontendClass *)0x0) {
      EVar6 = FMetasoundFrontendClassMetadata::GetType(&this_00->Metadata);
      switch(EVar6) {
      case External:
        pFVar10 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar9);
        pFVar13 = (FMetasoundFrontendClassInput *)(pFVar10->Inputs).AllocatorInstance.Data;
        pFVar1 = pFVar13 + (pFVar10->Inputs).ArrayNum;
        for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 1) {
          if ((FName)pFVar13->_padding_ == param_2) {
            pTVar7 = FMetasoundFrontendClassInput::GetDefaults(pFVar13);
            return pTVar7;
          }
        }
        break;
      default:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0xd66,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
                   (*pcVar4)();
          return pTVar7;
        }
        break;
      case Input:
      case Output:
      case Literal:
        pFVar10 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar9);
        iVar2 = (pFVar10->Inputs).ArrayNum;
        uVar15 = iVar2 - 1;
        uVar12 = 0;
        if ((int)uVar15 < iVar2) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
                   (*pcVar4)();
          return pTVar7;
        }
        pTVar7 = FMetasoundFrontendClassInput::GetDefaults
                           ((FMetasoundFrontendClassInput *)
                            ((pFVar10->Inputs).AllocatorInstance.Data +
                            (longlong)((pFVar10->Inputs).ArrayNum + -1) * 0x48));
        return pTVar7;
      case Variable:
      case VariableDeferredAccessor:
      case VariableAccessor:
      case VariableMutator:
        pFVar10 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar9);
        pFVar13 = (FMetasoundFrontendClassInput *)(pFVar10->Inputs).AllocatorInstance.Data;
        pFVar1 = pFVar13 + (pFVar10->Inputs).ArrayNum;
        for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 1) {
          FLazyName::Resolve(&Metasound::VariableNames::InputDataName);
          if (pFVar13->_padding_ == local_res8) {
            pTVar7 = FMetasoundFrontendClassInput::GetDefaults(pFVar13);
            return pTVar7;
          }
        }
        break;
      case Template:
        Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                  (&local_58,&this_00->Metadata);
        pIVar11 = Metasound::Frontend::INodeTemplateRegistry::Get();
        plVar8 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x10))(pIVar11,&local_58);
        if ((plVar8 == (longlong *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Template",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                               ,0xd5d,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
                   (*pcVar4)();
          return pTVar7;
        }
        if (param_3 == (FGuid *)0x0) {
          param_3 = &this->BuildPageID;
        }
        local_68 = param_3->A;
        uStack_64 = param_3->B;
        uStack_60 = param_3->C;
        uStack_5c = param_3->D;
        pTVar7 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
                 (**(code **)(*plVar8 + 0x10))(plVar8,this,&local_68,param_1,param_2);
        return pTVar7;
      }
    }
  }
  return (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindNodeClassInterfaces @ 14adf8af0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeClassInterfaces
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,
          TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          *param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  INodeClassRegistry *pIVar7;
  FNodeClassRegistryKey local_38;
  
  GetConstDocumentChecked(this);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_3);
  lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5,param_1);
  if (lVar6 != 0) {
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->DocumentCache).Object;
    lVar6 = (**(code **)(*(longlong *)pIVar1 + 0x18))(pIVar1,lVar6 + 0x10);
    if (lVar6 != 0) {
      Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                (&local_38,(FMetasoundFrontendClassMetadata *)(lVar6 + 0x18));
      pIVar7 = Metasound::Frontend::INodeClassRegistry::Get();
      uVar4 = (**(code **)((longlong)*pIVar7 + 0x80))(pIVar7,&local_38,param_2);
      return (bool)uVar4;
    }
  }
  return false;
}

// FindNodeConfiguration @ 14adf8c00

TInstancedStruct<FMetaSoundFrontendNodeConfiguration> * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeConfiguration
          (FMetaSoundFrontendDocumentBuilder *this,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__,
          FGuid *param_1,FGuid *param_2)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *pTVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_2);
  lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5,param_1);
  if (lVar6 == 0) {
    (__return_storage_ptr__->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr =
         (UScriptStruct *)0x0;
    (__return_storage_ptr__->InstancedStruct).StructMemory = (uchar *)0x0;
    FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->InstancedStruct);
  }
  else {
    (__return_storage_ptr__->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr =
         (UScriptStruct *)0x0;
    (__return_storage_ptr__->InstancedStruct).StructMemory = (uchar *)0x0;
    FInstancedStruct::InitializeAs
              (&__return_storage_ptr__->InstancedStruct,*(UScriptStruct **)(lVar6 + 0x68),
               *(uchar **)(lVar6 + 0x70));
  }
  return __return_storage_ptr__;
}

// FindNodeConfiguration @ 14adf8cc0

TConstStructView<FMetaSoundFrontendNodeConfiguration> * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeConfiguration
          (FMetaSoundFrontendDocumentBuilder *this,
          TConstStructView<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__,
          FGuid *param_1,FGuid *param_2)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  TConstStructView<FMetaSoundFrontendNodeConfiguration> *pTVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TConstStructView<FMetaSoundFrontendNodeConfiguration> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_2);
  lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5,param_1);
  if (lVar6 == 0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar6 + 0x70);
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar6 + 0x68);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar7;
  return __return_storage_ptr__;
}

// FindNodeConfigurationUpdates @ 14adf8d70

void __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeConfigurationUpdates
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,
          FMetasoundFrontendClass *param_3,FNodeConfigurationUpdateData *param_4,bool param_5)

{
  int iVar1;
  IDocumentCache *pIVar2;
  code *pcVar3;
  bool bVar4;
  EMetasoundFrontendClassType EVar5;
  longlong *plVar6;
  longlong lVar7;
  FNodeClassRegistryKey *pFVar8;
  INodeTemplateRegistry *pIVar9;
  FInstancedStruct *pFVar10;
  INodeClassRegistry *pIVar11;
  UScriptStruct *pUVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FGuid *pFVar15;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res18;
  FInstancedStruct local_a8;
  TObjectPtr<UScriptStruct_const_>_u_0 local_98;
  longlong *plStack_90;
  FInstancedStruct local_88;
  FInstancedStruct local_78;
  FInstancedStruct local_68;
  FNodeClassRegistryKey local_58;
  
  pFVar15 = &this->BuildPageID;
  if (param_2 != (FGuid *)0x0) {
    pFVar15 = param_2;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar6 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,pFVar15);
  lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,param_1);
  if (lVar7 == 0) {
    local_98.DebugPtr = (UScriptStruct *)0x0;
    plStack_90 = (longlong *)0x0;
  }
  else {
    local_98 = *(TObjectPtr<UScriptStruct_const_>_u_0 *)(lVar7 + 0x68);
    plStack_90 = *(longlong **)(lVar7 + 0x70);
  }
  pFVar15 = &this->BuildPageID;
  if (param_2 != (FGuid *)0x0) {
    pFVar15 = param_2;
  }
  *(TObjectPtr<UScriptStruct_const_>_u_0 *)&param_4->ExistingConfig = local_98;
  *(longlong **)&(param_4->ExistingConfig).field_0x8 = plStack_90;
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar6 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,pFVar15);
  lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,param_1);
  uVar13 = 0;
  uVar14 = uVar13;
  if (lVar7 != 0) {
    uVar13 = *(undefined8 *)(lVar7 + 0x80);
    uVar14 = *(undefined8 *)(lVar7 + 0x78);
  }
  *(undefined8 *)&param_4->ExistingClassInterfaceOverride = uVar14;
  *(undefined8 *)&(param_4->ExistingClassInterfaceOverride).field_0x8 = uVar13;
  pFVar8 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                     (&local_58,&param_3->Metadata);
  EVar5 = FMetasoundFrontendClassMetadata::GetType(&param_3->Metadata);
  FInstancedStruct::FInstancedStruct(&local_a8);
  if (EVar5 == Template) {
    pIVar9 = Metasound::Frontend::INodeTemplateRegistry::Get();
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x10))(pIVar9,pFVar8);
    if (plVar6 != (longlong *)0x0) {
      pFVar10 = (FInstancedStruct *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_88);
      FInstancedStruct::operator=(&local_a8,pFVar10);
      pFVar10 = &local_88;
      goto LAB_14adf8f1a;
    }
  }
  else {
    pIVar11 = Metasound::Frontend::INodeClassRegistry::GetChecked();
    pFVar10 = (FInstancedStruct *)(**(code **)((longlong)*pIVar11 + 0x78))(pIVar11,&local_78,pFVar8)
    ;
    FInstancedStruct::operator=(&local_a8,pFVar10);
    pFVar10 = &local_78;
LAB_14adf8f1a:
    FInstancedStruct::Reset(pFVar10);
  }
  FInstancedStruct::operator=(&(param_4->RegisteredConfig).InstancedStruct,&local_a8);
  FInstancedStruct::Reset(&local_a8);
  local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)
               (param_4->RegisteredConfig).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  if (local_res8.DebugPtr == *(UScriptStruct **)&param_4->ExistingConfig) {
    local_res8 = *(TObjectPtr<UScriptStruct_const_>_u_0 *)&param_4->ExistingConfig;
    plVar6 = *(longlong **)&(param_4->ExistingConfig).field_0x8;
    local_98 = local_res8;
    plStack_90 = plVar6;
    if (!param_5) {
      return;
    }
  }
  else {
    plVar6 = (longlong *)(param_4->RegisteredConfig).InstancedStruct.StructMemory;
  }
  param_4->bDidUpdateClassInterfaceOverride = true;
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if (local_res8.DebugPtr == (UScriptStruct *)0x0) {
    return;
  }
  pUVar12 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
  if (local_res8.DebugPtr != pUVar12) {
    pUVar12 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar12->_padding_;
      if (((int)(local_res8.DebugPtr)->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)((local_res8.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar12->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_14adf8fc1;
    }
    local_res18 = &local_res8;
    bVar4 = `UE::StructUtils::
            GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>'::
            __l7::<lambda_1>::operator()(&local_res18);
    if (!bVar4) {
      return;
    }
  }
LAB_14adf8fc1:
  pFVar10 = (FInstancedStruct *)(**(code **)(*plVar6 + 8))(plVar6,&local_68,param_3);
  FInstancedStruct::operator=(&(param_4->RegeneratedClassInterfaceOverride).InstancedStruct,pFVar10)
  ;
  FInstancedStruct::Reset(&local_68);
  return;
}

// FindNodeIndex @ 14adf9010

int * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeIndex
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  longlong *plVar5;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar4 = (int *)(*pcVar2)();
      return piVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014adf9087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar4 = (int *)(**(code **)(*plVar5 + 0x18))(plVar5,param_1,*(code **)(*plVar5 + 0x18));
  return piVar4;
}

// FindNodeInput @ 14adf9090

FMetasoundFrontendVertex * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeInput
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendVertex *pFVar4;
  longlong *plVar5;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendVertex *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014adf9117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FMetasoundFrontendVertex *)
           (**(code **)(*plVar5 + 0x48))(plVar5,param_1,param_2,*(code **)(*plVar5 + 0x48));
  return pFVar4;
}

// FindNodeInput @ 14adf9120

FMetasoundFrontendVertex * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeInput
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FName param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendVertex *pFVar4;
  longlong *plVar5;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendVertex *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014adf91a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FMetasoundFrontendVertex *)
           (**(code **)(*plVar5 + 0x40))(plVar5,param_1,param_2,*(code **)(*plVar5 + 0x40));
  return pFVar4;
}

// FindNodeInputDefault @ 14adf91b0

FMetasoundFrontendVertexLiteral * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeInputDefault
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendVertexLiteral *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  FMetasoundFrontendVertexLiteral *pFVar7;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetasoundFrontendVertexLiteral *)(*pcVar2)();
    return pFVar4;
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_3);
  lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5,param_1);
  if (lVar6 != 0) {
    pFVar4 = *(FMetasoundFrontendVertexLiteral **)(lVar6 + 0x58);
    pFVar7 = pFVar4 + *(int *)(lVar6 + 0x60);
    if (pFVar4 != pFVar7) {
      do {
        if (((param_2->D == (pFVar4->VertexID).D && param_2->C == (pFVar4->VertexID).C) &&
            param_2->B == (pFVar4->VertexID).B) && param_2->A == (pFVar4->VertexID).A) {
          return pFVar4;
        }
        pFVar4 = pFVar4 + 1;
      } while (pFVar4 != pFVar7);
    }
  }
  return (FMetasoundFrontendVertexLiteral *)0x0;
}

// FindNodeInputDefault @ 14adf92a0

FMetasoundFrontendVertexLiteral * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeInputDefault
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FName param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendVertexLiteral *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  FGuid *pFVar8;
  FMetasoundFrontendVertexLiteral *pFVar9;
  
  pFVar8 = &this->BuildPageID;
  if (param_3 != (FGuid *)0x0) {
    pFVar8 = param_3;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetasoundFrontendVertexLiteral *)(*pcVar2)();
    return pFVar4;
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,pFVar8);
  lVar6 = (**(code **)(*plVar5 + 0x40))(plVar5,param_1,param_2);
  if (lVar6 != 0) {
    pFVar8 = &this->BuildPageID;
    if (param_3 != (FGuid *)0x0) {
      pFVar8 = param_3;
    }
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendVertexLiteral *)(*pcVar2)();
      return pFVar4;
    }
    pIVar1 = (this->DocumentCache).Object;
    plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,pFVar8);
    lVar7 = (**(code **)(*plVar5 + 0x28))(plVar5,param_1);
    if (lVar7 != 0) {
      pFVar4 = *(FMetasoundFrontendVertexLiteral **)(lVar7 + 0x58);
      pFVar9 = pFVar4 + *(int *)(lVar7 + 0x60);
      if (pFVar4 != pFVar9) {
        do {
          if (((*(uint *)(lVar6 + 0x1c) == (pFVar4->VertexID).D &&
               *(uint *)(lVar6 + 0x18) == (pFVar4->VertexID).C) &&
              *(uint *)(lVar6 + 0x14) == (pFVar4->VertexID).B) &&
              *(uint *)(lVar6 + 0x10) == (pFVar4->VertexID).A) {
            return pFVar4;
          }
          pFVar4 = pFVar4 + 1;
        } while (pFVar4 != pFVar9);
      }
    }
  }
  return (FMetasoundFrontendVertexLiteral *)0x0;
}

// FindNodeInputs @ 14adf9400

TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeInputs
          (FMetaSoundFrontendDocumentBuilder *this,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FName param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_3);
  (**(code **)(*plVar5 + 0x30))(plVar5,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FindNodeInputsConnectedToNodeOutput @ 14adf94b0

TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeInputsConnectedToNodeOutput
          (FMetaSoundFrontendDocumentBuilder *this,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FGuid *param_2,
          TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4
          )

{
  IDocumentCache *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong *plVar7;
  undefined8 uVar8;
  FMetasoundFrontendDocument *pFVar9;
  FMetasoundFrontendGraph *pFVar10;
  int *piVar11;
  FGuid *pFVar12;
  FMetasoundFrontendVertex *local_68;
  int *local_60;
  int local_58;
  FMetasoundFrontendGraph *local_48;
  FMetasoundFrontendDocument *local_40;
  undefined8 local_38;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> **local_30;
  
  pFVar12 = param_4;
  if (param_4 == (FGuid *)0x0) {
    pFVar12 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar6;
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar7 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1,pFVar12);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar6;
  }
  pIVar1 = (this->DocumentCache).Object;
  uVar8 = (**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,pFVar12);
  pFVar9 = GetConstDocumentChecked(this);
  if (param_3 != (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar10 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar9->RootGraph,pFVar12);
  (**(code **)(*plVar7 + 0x30))(plVar7,&local_60,param_1,param_2);
  local_30 = &param_3;
  local_40 = pFVar9;
  local_48 = pFVar10;
  local_38 = uVar8;
  piVar11 = local_60;
  while( true ) {
    if (piVar11 == local_60 + local_58) {
      return __return_storage_ptr__;
    }
    local_68 = `FMetaSoundFrontendDocumentBuilder::FindNodeInputsConnectedToNodeOutput'::__l2::
               <lambda_1>::operator()(&local_48,piVar11);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    piVar11 = piVar11 + 1;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(FMetasoundFrontendVertex **)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_68;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar6;
}

// FindNodeInternal @ 14adf9710

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeInternal
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  uint uVar1;
  IDocumentCache *pIVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendNode *pFVar5;
  longlong *plVar6;
  uint *puVar7;
  FMetasoundFrontendDocument *pFVar8;
  FMetasoundFrontendGraph *pFVar9;
  uint uVar10;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendNode *)(*pcVar3)();
      return pFVar5;
    }
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar6 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_2);
  puVar7 = (uint *)(**(code **)(*plVar6 + 0x18))(plVar6,param_1);
  if (puVar7 != (uint *)0x0) {
    pFVar8 = GetDocumentChecked(this);
    pFVar9 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar8->RootGraph,param_2);
    uVar1 = *puVar7;
    uVar10 = 0;
    if ((int)uVar1 < (pFVar9->Nodes).ArrayNum) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FMetasoundFrontendNode *)(*pcVar3)();
        return pFVar5;
      }
    }
    return (FMetasoundFrontendNode *)
           ((pFVar9->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88);
  }
  return (FMetasoundFrontendNode *)0x0;
}

// FindNodeOutput @ 14adf9820

FMetasoundFrontendVertex * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeOutput
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendVertex *pFVar4;
  longlong *plVar5;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendVertex *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014adf98a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FMetasoundFrontendVertex *)
           (**(code **)(*plVar5 + 0x58))(plVar5,param_1,param_2,*(code **)(*plVar5 + 0x58));
  return pFVar4;
}

// FindNodeOutput @ 14adf98b0

FMetasoundFrontendVertex * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeOutput
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FName param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendVertex *pFVar4;
  longlong *plVar5;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendVertex *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014adf9937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FMetasoundFrontendVertex *)
           (**(code **)(*plVar5 + 0x50))(plVar5,param_1,param_2,*(code **)(*plVar5 + 0x50));
  return pFVar4;
}

// FindNodeOutputConnectedToNodeInput @ 14adf9940

FMetasoundFrontendVertex * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeOutputConnectedToNodeInput
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,
          FMetasoundFrontendNode **param_3,FGuid *param_4)

{
  uint uVar1;
  IDocumentCache *pIVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendVertex *pFVar5;
  longlong *plVar6;
  uint *puVar7;
  FMetasoundFrontendDocument *pFVar8;
  FMetasoundFrontendGraph *pFVar9;
  FMetasoundFrontendNode *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  
  if (param_4 == (FGuid *)0x0) {
    param_4 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
      return pFVar5;
    }
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar6 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x50))(pIVar2,param_4);
  puVar7 = (uint *)(**(code **)(*plVar6 + 0x28))(plVar6,param_1,param_2);
  if (puVar7 == (uint *)0x0) {
    if (param_3 != (FMetasoundFrontendNode **)0x0) {
      *param_3 = (FMetasoundFrontendNode *)0x0;
    }
    pFVar5 = (FMetasoundFrontendVertex *)0x0;
  }
  else {
    pFVar8 = GetConstDocumentChecked(this);
    pFVar9 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar8->RootGraph,param_4);
    uVar1 = *puVar7;
    uVar11 = 0;
    if ((int)uVar1 < (pFVar9->Edges).ArrayNum) {
      uVar11 = ~uVar1 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar12 = (pFVar9->Edges).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x40;
    if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
        return pFVar5;
      }
    }
    pIVar2 = (this->DocumentCache).Object;
    plVar6 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_4);
    if (param_3 != (FMetasoundFrontendNode **)0x0) {
      pFVar10 = (FMetasoundFrontendNode *)(**(code **)(*plVar6 + 0x28))(plVar6,pFVar12);
      *param_3 = pFVar10;
    }
    pFVar5 = (FMetasoundFrontendVertex *)
             (**(code **)(*plVar6 + 0x58))(plVar6,pFVar12,pFVar12 + 0x10);
  }
  return pFVar5;
}

// FindNodeOutputs @ 14adf9ad0

TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FMetaSoundFrontendDocumentBuilder::FindNodeOutputs
          (FMetaSoundFrontendDocumentBuilder *this,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FName param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_3);
  (**(code **)(*plVar5 + 0x38))(plVar5,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FindPageIndex @ 14adf9c10

int __thiscall
FMetaSoundFrontendDocumentBuilder::FindPageIndex
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FMetasoundFrontendDocument *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar2 = GetDocumentChecked(this);
  pFVar1 = (pFVar2->RootGraph).PagedGraphs.AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(pFVar2->RootGraph).PagedGraphs.ArrayNum * 0x40) {
    pFVar3 = pFVar1;
    do {
      if (((param_1->A == *(uint *)(pFVar3 + 0x30) && param_1->D == *(uint *)(pFVar3 + 0x3c)) &&
          param_1->C == *(uint *)(pFVar3 + 0x38)) && param_1->B == *(uint *)(pFVar3 + 0x34)) {
        return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 6);
      }
      pFVar3 = pFVar3 + 0x40;
    } while (pFVar3 != pFVar1 + (longlong)(pFVar2->RootGraph).PagedGraphs.ArrayNum * 0x40);
  }
  return -1;
}

// FindTailNodeInVariableStack @ 14adf9ca0

FMetasoundFrontendNode * __thiscall
FMetaSoundFrontendDocumentBuilder::FindTailNodeInVariableStack
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2)

{
  uint uVar1;
  FName FVar2;
  IDocumentCache *pIVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendDocument *pFVar6;
  FMetasoundFrontendGraph *pFVar7;
  FMetasoundFrontendNode *pFVar8;
  longlong *plVar9;
  uint uVar10;
  FName *pFVar11;
  FGuid *pFVar12;
  FName *pFVar13;
  
  pFVar12 = param_2;
  if (param_2 == (FGuid *)0x0) {
    pFVar12 = &this->BuildPageID;
  }
  pFVar6 = GetDocumentChecked(this);
  pFVar7 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar6->RootGraph,pFVar12);
  pFVar13 = (FName *)(pFVar7->Variables).AllocatorInstance.Data;
  pFVar11 = pFVar13 + (longlong)(pFVar7->Variables).ArrayNum * 0x17;
  while( true ) {
    if (pFVar13 == pFVar11) {
      return (FMetasoundFrontendNode *)0x0;
    }
    if (*pFVar13 == param_1) break;
    pFVar13 = pFVar13 + 0x17;
  }
  uVar1 = pFVar13[0x14].ComparisonIndex.Value;
  if (uVar1 == 0) {
    pFVar12 = (FGuid *)(pFVar13 + 0x11);
    if (((pFVar13[0x12].Number == 0 && pFVar13[0x12].ComparisonIndex.Value == 0) &&
        pFVar13[0x11].Number == 0) && ((FNameEntryId *)&pFVar12->A)->Value == 0) {
      uVar1 = pFVar13[0x16].ComparisonIndex.Value;
      if (uVar1 == 0) {
        return (FMetasoundFrontendNode *)0x0;
      }
      uVar10 = 0;
      if ((int)(uVar1 - 1) < (int)uVar1) {
        uVar10 = ~(uVar1 - 1) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
        return pFVar8;
      }
      pFVar12 = (FGuid *)((longlong)(int)(pFVar13[0x16].ComparisonIndex.Value - 1) * 0x10 +
                         (longlong)pFVar13[0x15]);
    }
    pFVar8 = FindNode(this,pFVar12,param_2);
    return pFVar8;
  }
  uVar10 = 0;
  if ((int)(uVar1 - 1) < (int)uVar1) {
    uVar10 = ~(uVar1 - 1) >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
    return pFVar8;
  }
  uVar1 = pFVar13[0x14].ComparisonIndex.Value;
  FVar2 = pFVar13[0x13];
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMetasoundFrontendNode *)(*pcVar4)();
    return pFVar8;
  }
  pIVar3 = (this->DocumentCache).Object;
  plVar9 = (longlong *)(**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,param_2);
  pFVar8 = (FMetasoundFrontendNode *)
           (**(code **)(*plVar9 + 0x28))(plVar9,(longlong)(int)(uVar1 - 1) * 0x10 + (longlong)FVar2)
  ;
  return pFVar8;
}

// FindUserModifiableNodeInputs @ 14adf9e80

TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FMetaSoundFrontendDocumentBuilder::FindUserModifiableNodeInputs
          (FMetaSoundFrontendDocumentBuilder *this,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FGuid *param_2)

{
  int iVar1;
  IDocumentCache *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar7;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar8 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_2);
  lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8,param_1);
  if (lVar9 != 0) {
    lVar10 = *(longlong *)(lVar9 + 0x28);
    iVar1 = *(int *)(lVar9 + 0x30);
    lVar11 = (longlong)iVar1 * 0x20 + lVar10;
    while( true ) {
      if (*(int *)(lVar9 + 0x30) != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (lVar10 == lVar11) break;
      bVar5 = IsNodeInputConnectionUserModifiable
                        (this,param_1,(FGuid *)(lVar10 + 0x10),(FGuid *)0x0);
      if (bVar5) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_38[0] = lVar10;
        if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar4)();
          return pTVar7;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_38[0];
      }
      lVar10 = lVar10 + 0x20;
    }
  }
  return __return_storage_ptr__;
}

// FindUserModifiableNodeOutputs @ 14adfa040

TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FMetaSoundFrontendDocumentBuilder::FindUserModifiableNodeOutputs
          (FMetaSoundFrontendDocumentBuilder *this,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FGuid *param_2)

{
  int iVar1;
  IDocumentCache *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar7;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar8 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_2);
  lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8,param_1);
  if (lVar9 != 0) {
    lVar10 = *(longlong *)(lVar9 + 0x38);
    iVar1 = *(int *)(lVar9 + 0x40);
    lVar11 = (longlong)iVar1 * 0x20 + lVar10;
    while( true ) {
      if (*(int *)(lVar9 + 0x40) != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (lVar10 == lVar11) break;
      bVar5 = IsNodeOutputConnectionUserModifiable
                        (this,param_1,(FGuid *)(lVar10 + 0x10),(FGuid *)0x0);
      if (bVar5) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_38[0] = lVar10;
        if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar4)();
          return pTVar7;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_38[0];
      }
      lVar10 = lVar10 + 0x20;
    }
  }
  return __return_storage_ptr__;
}

// FinishBuilding @ 14adfa200

void __thiscall
FMetaSoundFrontendDocumentBuilder::FinishBuilding(FMetaSoundFrontendDocumentBuilder *this)

{
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((*(longlong *)&this->DocumentInterface != 0) &&
     (*(longlong *)&(this->DocumentInterface).field_0x8 != 0)) {
    (**(code **)(**(longlong **)&(this->DocumentInterface).field_0x8 + 0x58))();
    *(undefined8 *)&this->DocumentInterface = 0;
    *(undefined8 *)&(this->DocumentInterface).field_0x8 = 0;
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->DocumentDelegates !=
      (TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *)&local_28) {
    (this->DocumentDelegates).Object = (FDocumentModifyDelegates *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DocumentDelegates).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->DocumentCache != (TSharedPtr<Metasound::Frontend::IDocumentCache,1> *)&local_18) {
    (this->DocumentCache).Object = (IDocumentCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DocumentCache).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// GenerateNewClassName @ 14adfa2b0

FMetasoundFrontendClassName * __thiscall
FMetaSoundFrontendDocumentBuilder::GenerateNewClassName
          (FMetaSoundFrontendDocumentBuilder *this,
          FMetasoundFrontendClassName *__return_storage_ptr__)

{
  FMetasoundFrontendDocument *pFVar1;
  FGuid *this_00;
  FName *pFVar2;
  ForAnyElementType FVar3;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_38;
  FGuid local_28;
  
  pFVar1 = GetDocumentChecked(this);
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  this_00 = FGuid::NewGuid(&local_28);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FGuid::AppendString(this_00,&local_38,Digits);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res20,(wchar_t *)FVar3.Data);
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FMetasoundFrontendClassName::FMetasoundFrontendClassName
            (__return_storage_ptr__,&local_res18,pFVar2,&local_res10);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FMetasoundFrontendClassMetadata::SetClassName
            ((FMetasoundFrontendClassMetadata *)&(pFVar1->RootGraph)._padding_,
             __return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAccessFlags @ 14adfa360

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

EMetasoundFrontendClassAccessFlags __thiscall
FMetaSoundFrontendDocumentBuilder::GetAccessFlags(FMetaSoundFrontendDocumentBuilder *this)

{
  EMetasoundFrontendClassAccessFlags EVar1;
  FMetasoundFrontendDocument *pFVar2;
  
  pFVar2 = GetDocumentChecked(this);
  EVar1 = FMetasoundFrontendClassMetadata::GetAccessFlags
                    ((FMetasoundFrontendClassMetadata *)&(pFVar2->RootGraph)._padding_);
  return EVar1;
}

// GetApplicableRegistryInterface @ 14adfa740

FMetasoundFrontendClassInterface * __thiscall
FMetaSoundFrontendDocumentBuilder::GetApplicableRegistryInterface
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClass *param_1,
          FNodeConfigurationUpdateData *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FMetasoundFrontendClassInterface *pFVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res18;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res20;
  
  if (param_2->bDidUpdateClassInterfaceOverride == false) {
    pFVar4 = *(FMetasoundFrontendClassInterface **)
              &(param_2->ExistingClassInterfaceOverride).field_0x8;
    local_res18 = *(TObjectPtr<UScriptStruct_const_>_u_0 *)&param_2->ExistingClassInterfaceOverride;
  }
  else {
    pFVar4 = (FMetasoundFrontendClassInterface *)
             (param_2->RegeneratedClassInterfaceOverride).InstancedStruct.StructMemory;
    local_res18 = (TObjectPtr<UScriptStruct_const_>_u_0)
                  (param_2->RegeneratedClassInterfaceOverride).InstancedStruct.ScriptStruct.
                  field0_0x0.DebugPtr;
  }
  if ((pFVar4 != (FMetasoundFrontendClassInterface *)0x0) &&
     (local_res18.DebugPtr != (UScriptStruct *)0x0)) {
    pUVar3 = FMetasoundFrontendClassInterface::StaticStruct();
    if (local_res18.DebugPtr != pUVar3) {
      pUVar3 = FMetasoundFrontendClassInterface::StaticStruct();
      if (pUVar3 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar3->_padding_;
        if (((int)(local_res18.DebugPtr)->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)((local_res18.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return pFVar4;
        }
      }
      local_res20 = &local_res18;
      bVar2 = `UE::StructUtils::
              GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface>'::__l7
              ::<lambda_1>::operator()(&local_res20);
      if (!bVar2) goto LAB_14adfa7da;
    }
    return pFVar4;
  }
LAB_14adfa7da:
  pFVar4 = FMetasoundFrontendClass::GetDefaultInterface(param_1);
  return pFVar4;
}

// GetBuildPageID @ 14adfa8d0

FGuid * __thiscall
FMetaSoundFrontendDocumentBuilder::GetBuildPageID(FMetaSoundFrontendDocumentBuilder *this)

{
  return &this->BuildPageID;
}

// GetBuilderClassPath @ 14adfa8e0

FTopLevelAssetPath * __thiscall
FMetaSoundFrontendDocumentBuilder::GetBuilderClassPath
          (FMetaSoundFrontendDocumentBuilder *this,FTopLevelAssetPath *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FTopLevelAssetPath *pFVar3;
  UStruct *this_00;
  longlong *plVar4;
  
  if (*(longlong *)&this->DocumentInterface == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)&(this->DocumentInterface).field_0x8;
    if (plVar4 != (longlong *)0x0) goto LAB_14adfa927;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Interface",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0xe0a,
                     L"Failed to return class path; interface must always be valid while builder is operating on MetaSound UObject!"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTopLevelAssetPath *)(*pcVar1)();
    return pFVar3;
  }
LAB_14adfa927:
  this_00 = (UStruct *)(**(code **)(*plVar4 + 0x20))(plVar4);
  UStruct::GetStructPathName(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConstDocumentChecked @ 14adfbec0

FMetasoundFrontendDocument * __thiscall
FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(FMetaSoundFrontendDocumentBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendDocument *pFVar3;
  longlong *plVar4;
  FString local_18;
  
  if (*(longlong *)&this->DocumentInterface == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)&(this->DocumentInterface).field_0x8;
    if (plVar4 != (longlong *)0x0) goto LAB_14adfbf42;
  }
  FTopLevelAssetPath::ToString(&this->HintPath,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Interface",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0xe16,
                     L"Failed to return document; interface must always be valid while builder is operating on MetaSound UObject! Builder constructed with asset at %s"
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMetasoundFrontendDocument *)(*pcVar1)();
    return pFVar3;
  }
LAB_14adfbf42:
                    /* WARNING: Could not recover jumptable at 0x00014adfbf4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FMetasoundFrontendDocument *)(**(code **)(*plVar4 + 0x18))(plVar4);
  return pFVar3;
}

// GetConstDocumentInterfaceChecked @ 14adfbf60

IMetaSoundDocumentInterface * __thiscall
FMetaSoundFrontendDocumentBuilder::GetConstDocumentInterfaceChecked
          (FMetaSoundFrontendDocumentBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  IMetaSoundDocumentInterface *pIVar3;
  FString local_18;
  
  if ((*(longlong *)&this->DocumentInterface != 0) &&
     (pIVar3 = *(IMetaSoundDocumentInterface **)&(this->DocumentInterface).field_0x8,
     pIVar3 != (IMetaSoundDocumentInterface *)0x0)) {
    return pIVar3;
  }
  FTopLevelAssetPath::ToString(&this->HintPath,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Interface",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0xe16,
                     L"Failed to return document; interface must always be valid while builder is operating on MetaSound UObject! Builder constructed with asset at %s"
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMetaSoundDocumentInterface *)(*pcVar1)();
    return pIVar3;
  }
  return (IMetaSoundDocumentInterface *)0x0;
}

// GetDebugName @ 14adfc000

FString * __thiscall
FMetaSoundFrontendDocumentBuilder::GetDebugName
          (FMetaSoundFrontendDocumentBuilder *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (*(UObjectBaseUtility **)&this->DocumentInterface != (UObjectBaseUtility *)0x0) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)&this->DocumentInterface,__return_storage_ptr__,
               (UObject *)0x0);
    return __return_storage_ptr__;
  }
  pFVar1 = GetTypeName<UObject>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// GetDocument @ 14adfc520

FMetasoundFrontendDocument * __thiscall
FMetaSoundFrontendDocumentBuilder::GetDocument(FMetaSoundFrontendDocumentBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendDocument *pFVar3;
  longlong *plVar4;
  FString local_18;
  
  if (*(longlong *)&this->DocumentInterface == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)&(this->DocumentInterface).field_0x8;
    if (plVar4 != (longlong *)0x0) goto LAB_14adfc5a2;
  }
  FTopLevelAssetPath::ToString(&this->HintPath,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Interface",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0xe25,
                     L"Failed to return document; interface must always be valid while builder is operating on MetaSound UObject! Builder constructed with asset at %s"
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMetasoundFrontendDocument *)(*pcVar1)();
    return pFVar3;
  }
LAB_14adfc5a2:
                    /* WARNING: Could not recover jumptable at 0x00014adfc5ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FMetasoundFrontendDocument *)(**(code **)(*plVar4 + 0x18))(plVar4);
  return pFVar3;
}

// GetDocumentChecked @ 14adfc5d0

FMetasoundFrontendDocument * __thiscall
FMetaSoundFrontendDocumentBuilder::GetDocumentChecked(FMetaSoundFrontendDocumentBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendDocument *pFVar3;
  longlong *plVar4;
  FString local_18;
  
  if (*(longlong *)&this->DocumentInterface == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)&(this->DocumentInterface).field_0x8;
    if (plVar4 != (longlong *)0x0) goto LAB_14adfc652;
  }
  FTopLevelAssetPath::ToString(&this->HintPath,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Interface",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0xe3d,
                     L"Failed to return document; interface must always be valid while builder is operating on MetaSound UObject! Builder constructed with asset at %s"
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMetasoundFrontendDocument *)(*pcVar1)();
    return pFVar3;
  }
LAB_14adfc652:
                    /* WARNING: Could not recover jumptable at 0x00014adfc65d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FMetasoundFrontendDocument *)(**(code **)(*plVar4 + 0x48))(plVar4);
  return pFVar3;
}

// GetDocumentDelegates @ 14adfc670

FDocumentModifyDelegates * __thiscall
FMetaSoundFrontendDocumentBuilder::GetDocumentDelegates(FMetaSoundFrontendDocumentBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  FDocumentModifyDelegates *pFVar3;
  
  if ((this->DocumentDelegates).Object != (FDocumentModifyDelegates *)0x0) {
    return (this->DocumentDelegates).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDocumentModifyDelegates *)(*pcVar1)();
    return pFVar3;
  }
  return (this->DocumentDelegates).Object;
}

// GetDocumentInterface @ 14adfc6c0

IMetaSoundDocumentInterface * __thiscall
FMetaSoundFrontendDocumentBuilder::GetDocumentInterface(FMetaSoundFrontendDocumentBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  IMetaSoundDocumentInterface *pIVar3;
  FString local_18;
  
  if ((*(longlong *)&this->DocumentInterface != 0) &&
     (pIVar3 = *(IMetaSoundDocumentInterface **)&(this->DocumentInterface).field_0x8,
     pIVar3 != (IMetaSoundDocumentInterface *)0x0)) {
    return pIVar3;
  }
  FTopLevelAssetPath::ToString(&this->HintPath,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Interface",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0xe36,
                     L"Failed to return document; interface must always be valid while builder is operating on MetaSound UObject! Builder constructed with asset at %s"
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMetaSoundDocumentInterface *)(*pcVar1)();
    return pIVar3;
  }
  return (IMetaSoundDocumentInterface *)0x0;
}

// GetDocumentInterfaceChecked @ 14adfc760

IMetaSoundDocumentInterface * __thiscall
FMetaSoundFrontendDocumentBuilder::GetDocumentInterfaceChecked
          (FMetaSoundFrontendDocumentBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  IMetaSoundDocumentInterface *pIVar3;
  FString local_18;
  
  if ((*(longlong *)&this->DocumentInterface != 0) &&
     (pIVar3 = *(IMetaSoundDocumentInterface **)&(this->DocumentInterface).field_0x8,
     pIVar3 != (IMetaSoundDocumentInterface *)0x0)) {
    return pIVar3;
  }
  FTopLevelAssetPath::ToString(&this->HintPath,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Interface",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0xe3d,
                     L"Failed to return document; interface must always be valid while builder is operating on MetaSound UObject! Builder constructed with asset at %s"
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMetaSoundDocumentInterface *)(*pcVar1)();
    return pIVar3;
  }
  return (IMetaSoundDocumentInterface *)0x0;
}

// GetGraphInputDefault @ 14adfcaf0

FMetasoundFrontendLiteral * __thiscall
FMetaSoundFrontendDocumentBuilder::GetGraphInputDefault
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendLiteral *pFVar3;
  longlong *plVar4;
  FMetasoundFrontendClassInput *this_00;
  
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMetasoundFrontendLiteral *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  this_00 = (FMetasoundFrontendClassInput *)(**(code **)(*plVar4 + 8))(plVar4,param_1);
  if (this_00 != (FMetasoundFrontendClassInput *)0x0) {
    if (param_2 == (FGuid *)0x0) {
      param_2 = &this->BuildPageID;
    }
    pFVar3 = FMetasoundFrontendClassInput::FindConstDefault(this_00,param_2);
    return pFVar3;
  }
  return (FMetasoundFrontendLiteral *)0x0;
}

// GetGraphInputTemplateNodes @ 14adfcb90

TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FMetaSoundFrontendDocumentBuilder::GetGraphInputTemplateNodes
          (FMetaSoundFrontendDocumentBuilder *this,
          TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,FName param_1,FGuid *param_2)

{
  undefined4 *puVar1;
  IDocumentCache *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FMetasoundFrontendDocument *pFVar9;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong *plVar11;
  uint *puVar12;
  FMetasoundFrontendClassInterface *pFVar13;
  FMetasoundFrontendGraph *pFVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  longlong *local_res10;
  FScriptContainerElement *local_78;
  longlong *local_70 [2];
  FGuid local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  local_60.A = param_2->A;
  local_60.B = param_2->B;
  local_60.C = param_2->C;
  local_60.D = param_2->D;
  pFVar9 = GetDocumentChecked(this);
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
  }
  plVar11 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  puVar12 = (uint *)(**(code **)(*plVar11 + 0x10))(plVar11,param_1);
  if (puVar12 != (uint *)0x0) {
    pFVar13 = FMetasoundFrontendClass::GetDefaultInterface
                        ((FMetasoundFrontendClass *)&pFVar9->RootGraph);
    uVar7 = *puVar12;
    uVar18 = 0;
    if ((int)uVar7 < (pFVar13->Inputs).ArrayNum) {
      uVar18 = ~uVar7 >> 0x1f;
    }
    if (uVar18 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
    }
    pFVar19 = (pFVar13->Inputs).AllocatorInstance.Data;
    pFVar14 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar9->RootGraph,&local_60);
    if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
    }
    pIVar2 = (this->DocumentCache).Object;
    plVar11 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,&local_60);
    if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
    }
    pIVar2 = (this->DocumentCache).Object;
    plVar15 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x50))(pIVar2,&local_60);
    pFVar19 = pFVar19 + (longlong)(int)uVar7 * 0x48 + 0x20;
    lVar16 = (**(code **)(*plVar11 + 0x28))(plVar11,pFVar19);
    if (lVar16 != 0) {
      uVar18 = *(int *)(lVar16 + 0x40) - 1;
      uVar7 = 0;
      if ((int)uVar18 < *(int *)(lVar16 + 0x40)) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)
                    (*pcVar4)();
          return pTVar10;
        }
      }
      puVar1 = (undefined4 *)
               ((longlong)*(int *)(lVar16 + 0x40) * 0x20 + -0x10 + *(longlong *)(lVar16 + 0x38));
      local_50 = *puVar1;
      uStack_4c = puVar1[1];
      uStack_48 = puVar1[2];
      uStack_44 = puVar1[3];
      (**(code **)(*plVar15 + 0x20))(plVar15,local_70,pFVar19,&local_50);
      iVar17 = (int)local_70[1];
      local_res10 = local_70[0] + iVar17;
      plVar15 = local_70[0];
      while( true ) {
        plVar5 = local_res10;
        if ((int)local_70[1] != iVar17) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FMetasoundFrontendEdge_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (plVar15 == plVar5) break;
        lVar16 = *plVar15;
        if (lVar16 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Edge",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                             ,0xe56,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar4)();
            return pTVar10;
          }
        }
        puVar12 = (uint *)(**(code **)(*plVar11 + 0x18))(plVar11,lVar16 + 0x20);
        if (puVar12 != (uint *)0x0) {
          uVar7 = *puVar12;
          uVar18 = 0;
          if ((int)uVar7 < (pFVar14->Nodes).ArrayNum) {
            uVar18 = ~uVar7 >> 0x1f;
          }
          if (uVar18 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)
                        (*pcVar4)();
              return pTVar10;
            }
          }
          pFVar19 = (pFVar14->Nodes).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x88;
          if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)
                        (*pcVar4)();
              return pTVar10;
            }
          }
          pIVar2 = (this->DocumentCache).Object;
          lVar16 = (**(code **)(*(longlong *)pIVar2 + 0x18))(pIVar2,pFVar19 + 0x10);
          if ((((lVar16 != 0) &&
               (*(FName *)(lVar16 + 0x18) ==
                Metasound::Frontend::FInputNodeTemplate::ClassName.Namespace)) &&
              (*(FName *)(lVar16 + 0x20) == Metasound::Frontend::FInputNodeTemplate::ClassName.Name)
              ) && (*(FName *)(lVar16 + 0x28) ==
                    Metasound::Frontend::FInputNodeTemplate::ClassName.Variant)) {
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            local_78 = pFVar19;
            if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
               ((FScriptContainerElement *)&local_78 <
                pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)
                          (*pcVar4)();
                return pTVar10;
              }
            }
            iVar8 = __return_storage_ptr__->ArrayNum;
            if (iVar8 == __return_storage_ptr__->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar8 + 1;
            *(FScriptContainerElement **)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_78;
          }
        }
        plVar15 = plVar15 + 1;
      }
      if (local_70[0] != (longlong *)0x0) {
        FMemory::Free(local_70[0]);
      }
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetGraphInputsInheritingDefault @ 14adfd010

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
FMetaSoundFrontendDocumentBuilder::GetGraphInputsInheritingDefault
          (FMetaSoundFrontendDocumentBuilder *this)

{
  FMetasoundFrontendDocument *pFVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  
  pFVar1 = GetDocumentChecked(this);
  pTVar2 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0;
  if ((pFVar1->RootGraph).PresetOptions.bIsPreset != false) {
    pTVar2 = &(pFVar1->RootGraph).PresetOptions.InputsInheritingDefault;
  }
  return pTVar2;
}

// GetGraphVariableDefault @ 14adfd040

FMetasoundFrontendLiteral * __thiscall
FMetaSoundFrontendDocumentBuilder::GetGraphVariableDefault
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2)

{
  FMetasoundFrontendDocument *pFVar1;
  FMetasoundFrontendGraph *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  pFVar1 = GetDocumentChecked(this);
  pFVar2 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar1->RootGraph,param_2);
  pFVar3 = (FName *)(pFVar2->Variables).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)(pFVar2->Variables).ArrayNum * 0x17;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return (FMetasoundFrontendLiteral *)0x0;
    }
    if (*pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 0x17;
  }
  return (FMetasoundFrontendLiteral *)(pFVar3 + 2);
}

// GetHintPath @ 14adfd0c0

FTopLevelAssetPath * __thiscall
FMetaSoundFrontendDocumentBuilder::GetHintPath(FMetaSoundFrontendDocumentBuilder *this)

{
  return &this->HintPath;
}

// GetMetasoundAsset @ 14adfe720

FMetasoundAssetBase * __thiscall
FMetaSoundFrontendDocumentBuilder::GetMetasoundAsset(FMetaSoundFrontendDocumentBuilder *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundAssetBase *pFVar4;
  IMetaSoundAssetManager *pIVar5;
  
  lVar1 = *(longlong *)&this->DocumentInterface;
  if ((lVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0xe7e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetasoundAssetBase *)(*pcVar2)();
    return pFVar4;
  }
  pIVar5 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
  pFVar4 = (FMetasoundAssetBase *)(**(code **)((longlong)*pIVar5 + 0x70))(pIVar5,lVar1);
  if ((pFVar4 == (FMetasoundAssetBase *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Asset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0xe80,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetasoundAssetBase *)(*pcVar2)();
    return pFVar4;
  }
  return pFVar4;
}

// GetNodeInputAccessType @ 14adfe7b0

EMetasoundFrontendVertexAccessType __thiscall
FMetaSoundFrontendDocumentBuilder::GetNodeInputAccessType
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  int iVar1;
  IDocumentCache *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  EMetasoundFrontendClassType EVar6;
  char cVar7;
  EMetasoundFrontendVertexAccessType EVar8;
  longlong *plVar9;
  uint *puVar10;
  FMetasoundFrontendDocument *pFVar11;
  FMetasoundFrontendGraph *pFVar12;
  FMetasoundFrontendClass *this_00;
  INodeTemplateRegistry *pIVar13;
  FMetasoundFrontendClassInterface *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FMetasoundFrontendNode *pFVar17;
  uint uVar18;
  uint uVar19;
  FNodeClassRegistryKey *local_res8;
  FNodeClassRegistryKey local_58;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar9 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_3);
  puVar10 = (uint *)(**(code **)(*plVar9 + 0x18))(plVar9,param_1);
  if (puVar10 == (uint *)0x0) {
    return Unset;
  }
  pFVar11 = GetConstDocumentChecked(this);
  pFVar12 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar11->RootGraph,param_3);
  uVar19 = *puVar10;
  uVar18 = 0;
  if ((int)uVar19 < (pFVar12->Nodes).ArrayNum) {
    uVar18 = ~uVar19 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  pFVar17 = (FMetasoundFrontendNode *)
            ((pFVar12->Nodes).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x88);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  pIVar2 = (this->DocumentCache).Object;
  this_00 = (FMetasoundFrontendClass *)
            (**(code **)(*(longlong *)pIVar2 + 0x18))(pIVar2,&pFVar17->ClassID);
  if (this_00 == (FMetasoundFrontendClass *)0x0) {
    return Unset;
  }
  EVar6 = FMetasoundFrontendClassMetadata::GetType(&this_00->Metadata);
  if (EVar6 == Output) {
    pFVar14 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar17);
    iVar1 = (pFVar14->Inputs).ArrayNum;
    uVar18 = iVar1 - 1;
    uVar19 = 0;
    if ((int)uVar18 < iVar1) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar8 = (*pcVar4)();
      return EVar8;
    }
    return *(EMetasoundFrontendVertexAccessType *)
            ((pFVar14->Inputs).AllocatorInstance.Data +
            (longlong)(pFVar14->Inputs).ArrayNum * 0x48 + -0x18);
  }
  if (EVar6 == Template) {
    Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_58,&this_00->Metadata);
    pIVar13 = Metasound::Frontend::INodeTemplateRegistry::Get();
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x10))(pIVar13,&local_58);
    if (plVar9 == (longlong *)0x0) {
      local_res8 = &local_58;
      bVar5 = `FMetaSoundFrontendDocumentBuilder::GetNodeInputAccessType'::__l12::<lambda_2>::
              operator()(&local_res8);
      if (!bVar5) goto LAB_14adfe97d;
    }
    cVar7 = (**(code **)(*plVar9 + 0x50))(plVar9);
    if (cVar7 != '\0') {
      EVar8 = (**(code **)(*plVar9 + 0x38))(plVar9,this,param_3,param_1,param_2);
      return EVar8;
    }
  }
LAB_14adfe97d:
  pFVar16 = (pFVar17->Interface).Inputs.AllocatorInstance.Data;
  pFVar15 = pFVar16 + (longlong)(pFVar17->Interface).Inputs.ArrayNum * 0x20;
  if (pFVar16 != pFVar15) {
    do {
      if (((param_2->A == *(uint *)(pFVar16 + 0x10) && param_2->D == *(uint *)(pFVar16 + 0x1c)) &&
          param_2->C == *(uint *)(pFVar16 + 0x18)) && param_2->B == *(uint *)(pFVar16 + 0x14)) {
        lVar3 = *(longlong *)pFVar16;
        pFVar14 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar17);
        pFVar15 = (pFVar14->Inputs).AllocatorInstance.Data;
        pFVar16 = pFVar15 + (longlong)(pFVar14->Inputs).ArrayNum * 0x48;
        while( true ) {
          if (pFVar15 == pFVar16) {
            return Unset;
          }
          if (*(longlong *)pFVar15 == lVar3) break;
          pFVar15 = pFVar15 + 0x48;
        }
        return *(EMetasoundFrontendVertexAccessType *)(pFVar15 + 0x30);
      }
      pFVar16 = pFVar16 + 0x20;
    } while (pFVar16 != pFVar15);
  }
  return Unset;
}

// GetNodeInputClassDefault @ 14adfeab0

/* WARNING: Type propagation algorithm not settling */

FMetasoundFrontendLiteral * __thiscall
FMetaSoundFrontendDocumentBuilder::GetNodeInputClassDefault
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  FMetasoundFrontendClassInput *pFVar1;
  int iVar2;
  IDocumentCache *pIVar3;
  code *pcVar4;
  bool bVar5;
  EMetasoundFrontendClassType EVar6;
  FMetasoundFrontendLiteral *pFVar7;
  longlong *plVar8;
  uint *puVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendGraph *pFVar11;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar12;
  FScriptContainerElement *pFVar13;
  FMetasoundFrontendNode *pFVar14;
  FScriptContainerElement *pFVar15;
  FMetasoundFrontendClassInput *this_01;
  uint uVar16;
  uint uVar17;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FMetasoundFrontendLiteral *)(*pcVar4)();
    return pFVar7;
  }
  pIVar3 = (this->DocumentCache).Object;
  plVar8 = (longlong *)(**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,param_3);
  puVar9 = (uint *)(**(code **)(*plVar8 + 0x18))(plVar8,param_1);
  if (puVar9 != (uint *)0x0) {
    pFVar10 = GetConstDocumentChecked(this);
    pFVar11 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar10->RootGraph,param_3);
    uVar17 = *puVar9;
    uVar16 = 0;
    if ((int)uVar17 < (pFVar11->Nodes).ArrayNum) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FMetasoundFrontendLiteral *)(*pcVar4)();
      return pFVar7;
    }
    pFVar14 = (FMetasoundFrontendNode *)
              ((pFVar11->Nodes).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x88);
    pFVar15 = (pFVar14->Interface).Inputs.AllocatorInstance.Data;
    pFVar13 = pFVar15 + (longlong)(pFVar14->Interface).Inputs.ArrayNum * 0x20;
    if (pFVar15 != pFVar13) {
      do {
        if (((param_2->A == *(uint *)(pFVar15 + 0x10) && param_2->D == *(uint *)(pFVar15 + 0x1c)) &&
            param_2->C == *(uint *)(pFVar15 + 0x18)) && param_2->B == *(uint *)(pFVar15 + 0x14)) {
          if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FMetasoundFrontendLiteral *)(*pcVar4)();
            return pFVar7;
          }
          pIVar3 = (this->DocumentCache).Object;
          this_00 = (FMetasoundFrontendClass *)
                    (**(code **)(*(longlong *)pIVar3 + 0x18))(pIVar3,&pFVar14->ClassID);
          if (this_00 == (FMetasoundFrontendClass *)0x0) {
            return (FMetasoundFrontendLiteral *)0x0;
          }
          EVar6 = FMetasoundFrontendClassMetadata::GetType(&this_00->Metadata);
          pFVar12 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar14);
          if (EVar6 != Output) {
            this_01 = (FMetasoundFrontendClassInput *)(pFVar12->Inputs).AllocatorInstance.Data;
            pFVar1 = this_01 + (pFVar12->Inputs).ArrayNum;
            while( true ) {
              if (this_01 == pFVar1) {
                return (FMetasoundFrontendLiteral *)0x0;
              }
              if (this_01->_padding_ == *(longlong *)pFVar15) break;
              this_01 = this_01 + 1;
            }
            pFVar7 = FMetasoundFrontendClassInput::FindConstDefault
                               (this_01,&Metasound::Frontend::DefaultPageID);
            return pFVar7;
          }
          iVar2 = (pFVar12->Inputs).ArrayNum;
          uVar16 = iVar2 - 1;
          uVar17 = 0;
          if ((int)uVar16 < iVar2) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FMetasoundFrontendLiteral *)(*pcVar4)();
            return pFVar7;
          }
          pFVar7 = FMetasoundFrontendClassInput::FindConstDefault
                             ((FMetasoundFrontendClassInput *)
                              ((pFVar12->Inputs).AllocatorInstance.Data +
                              (longlong)((pFVar12->Inputs).ArrayNum + -1) * 0x48),
                              &Metasound::Frontend::DefaultPageID);
          return pFVar7;
        }
        pFVar15 = pFVar15 + 0x20;
      } while (pFVar15 != pFVar13);
    }
  }
  return (FMetasoundFrontendLiteral *)0x0;
}

// GetNodeInputDefault @ 14adfed30

/* WARNING: Type propagation algorithm not settling */

FMetasoundFrontendLiteral * __thiscall
FMetaSoundFrontendDocumentBuilder::GetNodeInputDefault
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  uint uVar1;
  IDocumentCache *pIVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FMetasoundFrontendLiteral *pFVar7;
  longlong *plVar8;
  uint *puVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendGraph *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  uint uVar16;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FMetasoundFrontendLiteral *)(*pcVar5)();
    return pFVar7;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar8 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_3);
  puVar9 = (uint *)(**(code **)(*plVar8 + 0x18))(plVar8,param_1);
  if (puVar9 == (uint *)0x0) {
    return (FMetasoundFrontendLiteral *)0x0;
  }
  pFVar10 = GetConstDocumentChecked(this);
  pFVar11 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar10->RootGraph,param_3);
  uVar1 = *puVar9;
  uVar12 = 0;
  if ((int)uVar1 < (pFVar11->Nodes).ArrayNum) {
    uVar12 = ~uVar1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FMetasoundFrontendLiteral *)(*pcVar5)();
    return pFVar7;
  }
  pFVar3 = (pFVar11->Nodes).AllocatorInstance.Data;
  lVar4 = *(longlong *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x28);
  lVar15 = (longlong)*(int *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x30) * 0x20 + lVar4;
  if (lVar4 == lVar15) {
    return (FMetasoundFrontendLiteral *)0x0;
  }
  lVar13 = lVar4;
  while (((param_2->A != *(uint *)(lVar13 + 0x10) || param_2->D != *(uint *)(lVar13 + 0x1c)) ||
         param_2->C != *(uint *)(lVar13 + 0x18)) || param_2->B != *(uint *)(lVar13 + 0x14)) {
    lVar13 = lVar13 + 0x20;
    if (lVar13 == lVar15) {
      return (FMetasoundFrontendLiteral *)0x0;
    }
  }
  uVar12 = (uint)(lVar13 - lVar4 >> 5);
  if (uVar12 == 0xffffffff) {
    return (FMetasoundFrontendLiteral *)0x0;
  }
  uVar16 = 0;
  if ((int)uVar12 < *(int *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x30)) {
    uVar16 = ~uVar12 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FMetasoundFrontendLiteral *)(*pcVar5)();
    return pFVar7;
  }
  puVar9 = *(uint **)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x58);
  if (puVar9 == puVar9 + (longlong)*(int *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x60) * 0x1a) {
    return (FMetasoundFrontendLiteral *)0x0;
  }
  puVar14 = puVar9;
  while (((param_2->D != puVar14[3] || param_2->C != puVar14[2]) || param_2->B != puVar14[1]) ||
         param_2->A != *puVar14) {
    puVar14 = puVar14 + 0x1a;
    if (puVar14 == puVar9 + (longlong)*(int *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x60) * 0x1a)
    {
      return (FMetasoundFrontendLiteral *)0x0;
    }
  }
  uVar12 = (uint)(((longlong)puVar14 - (longlong)puVar9) / 0x68);
  if (uVar12 == 0xffffffff) {
    return (FMetasoundFrontendLiteral *)0x0;
  }
  uVar16 = 0;
  if ((int)uVar12 < *(int *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x60)) {
    uVar16 = ~uVar12 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FMetasoundFrontendLiteral *)(*pcVar5)();
    return pFVar7;
  }
  return (FMetasoundFrontendLiteral *)
         (*(longlong *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x58) + 0x10 +
         (longlong)(int)uVar12 * 0x68);
}

// GetNodeOutputAccessType @ 14adfefd0

EMetasoundFrontendVertexAccessType __thiscall
FMetaSoundFrontendDocumentBuilder::GetNodeOutputAccessType
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  int iVar1;
  IDocumentCache *pIVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  EMetasoundFrontendClassType EVar6;
  char cVar7;
  EMetasoundFrontendVertexAccessType EVar8;
  longlong *plVar9;
  uint *puVar10;
  FMetasoundFrontendDocument *pFVar11;
  FMetasoundFrontendGraph *pFVar12;
  FMetasoundFrontendClass *this_00;
  INodeTemplateRegistry *pIVar13;
  FMetasoundFrontendClassInterface *pFVar14;
  FMetasoundFrontendClassOutput *pFVar15;
  FName *pFVar16;
  FName *pFVar17;
  FMetasoundFrontendNode *pFVar18;
  uint uVar19;
  uint uVar20;
  FNodeClassRegistryKey *local_res8;
  FNodeClassRegistryKey local_58;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar9 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_3);
  puVar10 = (uint *)(**(code **)(*plVar9 + 0x18))(plVar9,param_1);
  if (puVar10 == (uint *)0x0) {
    return Unset;
  }
  pFVar11 = GetConstDocumentChecked(this);
  pFVar12 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar11->RootGraph,param_3);
  uVar20 = *puVar10;
  uVar19 = 0;
  if ((int)uVar20 < (pFVar12->Nodes).ArrayNum) {
    uVar19 = ~uVar20 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  pFVar18 = (FMetasoundFrontendNode *)
            ((pFVar12->Nodes).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x88);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  pIVar2 = (this->DocumentCache).Object;
  this_00 = (FMetasoundFrontendClass *)
            (**(code **)(*(longlong *)pIVar2 + 0x18))(pIVar2,&pFVar18->ClassID);
  if (this_00 == (FMetasoundFrontendClass *)0x0) {
    return Unset;
  }
  EVar6 = FMetasoundFrontendClassMetadata::GetType(&this_00->Metadata);
  if (EVar6 == Input) {
    pFVar14 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar18);
    iVar1 = (pFVar14->Outputs).ArrayNum;
    uVar19 = iVar1 - 1;
    uVar20 = 0;
    if ((int)uVar19 < iVar1) {
      uVar20 = ~uVar19 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar8 = (*pcVar4)();
      return EVar8;
    }
    return *(EMetasoundFrontendVertexAccessType *)
            ((pFVar14->Outputs).AllocatorInstance.Data +
            (longlong)(pFVar14->Outputs).ArrayNum * 0x34 + -4);
  }
  if (EVar6 == Template) {
    Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_58,&this_00->Metadata);
    pIVar13 = Metasound::Frontend::INodeTemplateRegistry::Get();
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x10))(pIVar13,&local_58);
    if (plVar9 == (longlong *)0x0) {
      local_res8 = &local_58;
      bVar5 = `FMetaSoundFrontendDocumentBuilder::GetNodeOutputAccessType'::__l12::<lambda_1>::
              operator()(&local_res8);
      if (!bVar5) goto LAB_14adff19d;
    }
    cVar7 = (**(code **)(*plVar9 + 0x60))(plVar9);
    if (cVar7 != '\0') {
      EVar8 = (**(code **)(*plVar9 + 0x40))(plVar9,this,param_3,param_1,param_2);
      return EVar8;
    }
  }
LAB_14adff19d:
  pFVar17 = (FName *)(pFVar18->Interface).Outputs.AllocatorInstance.Data;
  pFVar16 = pFVar17 + (longlong)(pFVar18->Interface).Outputs.ArrayNum * 4;
  if (pFVar17 != pFVar16) {
    do {
      if (((param_2->A == pFVar17[2].ComparisonIndex.Value && param_2->D == pFVar17[3].Number) &&
          param_2->C == pFVar17[3].ComparisonIndex.Value) && param_2->B == pFVar17[2].Number) {
        FVar3 = *pFVar17;
        pFVar14 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar18);
        pFVar15 = TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_>::
                  FindByPredicate<_FMetaSoundFrontendDocumentBuilder::GetNodeOutputAccessType_::__l21::<lambda_3>_>
                            (&pFVar14->Outputs,(<lambda_3>)FVar3);
        if (pFVar15 == (FMetasoundFrontendClassOutput *)0x0) {
          return Unset;
        }
        return *(EMetasoundFrontendVertexAccessType *)&pFVar15->field_0x30;
      }
      pFVar17 = pFVar17 + 4;
    } while (pFVar17 != pFVar16);
  }
  return Unset;
}

// GetReferencedPresetAsset @ 14ae00d20

FMetasoundAssetBase * __thiscall
FMetaSoundFrontendDocumentBuilder::GetReferencedPresetAsset(FMetaSoundFrontendDocumentBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendDocument *pFVar3;
  FMetasoundFrontendGraph *this_00;
  FMetasoundFrontendNode *pFVar4;
  FMetasoundFrontendClass *pFVar5;
  FMetasoundAssetBase *pFVar6;
  IMetaSoundAssetManager *pIVar7;
  longlong *plVar8;
  UObject *this_01;
  UClass *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 local_res10 [8];
  longlong *local_68 [2];
  FMetaSoundAssetKey local_58;
  FMetaSoundAssetKey local_38;
  
  pFVar3 = GetConstDocumentChecked(this);
  if ((pFVar3->RootGraph).PresetOptions.bIsPreset != false) {
    pFVar3 = GetConstDocumentChecked(this);
    this_00 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                        (&pFVar3->RootGraph,&this->BuildPageID);
    pFVar4 = TArray<FMetasoundFrontendNode,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FMetaSoundFrontendDocumentBuilder::GetReferencedPresetAsset_::__l2::<lambda_1>_>
                       (&this_00->Nodes,(<lambda_1>)this);
    if (pFVar4 != (FMetasoundFrontendNode *)0x0) {
      pFVar5 = FindDependency(this,&pFVar4->ClassID);
      if ((pFVar5 == (FMetasoundFrontendClass *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NodeClass",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                             ,0xe98,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FMetasoundAssetBase *)(*pcVar1)();
        return pFVar6;
      }
      FMetaSoundAssetKey::FMetaSoundAssetKey(&local_58,&pFVar5->Metadata);
      lVar11 = *(longlong *)&this->DocumentInterface;
      if ((lVar11 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                             ,0xe7e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FMetasoundAssetBase *)(*pcVar1)();
        return pFVar6;
      }
      pIVar7 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
      plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,lVar11);
      if ((plVar8 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Asset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                             ,0xe80,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FMetasoundAssetBase *)(*pcVar1)();
        return pFVar6;
      }
      (**(code **)(*plVar8 + 0x28))(plVar8,local_68);
      iVar12 = (int)local_68[1];
      plVar8 = local_68[0] + iVar12;
      plVar13 = local_68[0];
      while( true ) {
        if ((int)local_68[1] != iVar12) {
          `TCheckedPointerIterator<FMetasoundAssetBase_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (plVar13 == plVar8) break;
        pFVar6 = (FMetasoundAssetBase *)*plVar13;
        this_01 = (UObject *)(**(code **)(pFVar6->_padding_ + 0x50))();
        if (this_01 == (UObject *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(this_01);
          }
          pUVar9 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
          plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar9);
        }
        if (this_01 != (UObject *)0x0) {
          lVar11 = (**(code **)(*plVar10 + 0x18))();
          FMetaSoundAssetKey::FMetaSoundAssetKey
                    (&local_38,(FMetasoundFrontendClassMetadata *)(lVar11 + 0x88));
          if ((((local_38.ClassName.Namespace == local_58.ClassName.Namespace) &&
               (local_38.ClassName.Name == local_58.ClassName.Name)) &&
              (local_38.ClassName.Variant == local_58.ClassName.Variant)) &&
             ((local_38.Version.Major == local_58.Version.Major &&
              (local_38.Version.Minor == local_58.Version.Minor)))) {
            if (local_68[0] == (longlong *)0x0) {
              return pFVar6;
            }
            FMemory::Free(local_68[0]);
            return pFVar6;
          }
        }
        plVar13 = plVar13 + 1;
      }
      if (local_68[0] != (longlong *)0x0) {
        FMemory::Free(local_68[0]);
      }
    }
  }
  return (FMetasoundAssetBase *)0x0;
}

// GetTransactionCount @ 14ae01820

int __thiscall
FMetaSoundFrontendDocumentBuilder::GetTransactionCount(FMetaSoundFrontendDocumentBuilder *this)

{
  FDocumentCache *this_00;
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  
  this_00 = (FDocumentCache *)(this->DocumentCache).Object;
  if (this_00 != (FDocumentCache *)0x0) {
    pTVar1 = (this->DocumentCache).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar2 = Metasound::Frontend::FDocumentCache::GetTransactionCount(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return iVar2;
  }
  return 0;
}

// InitDocument @ 14ae01cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
FMetaSoundFrontendDocumentBuilder::InitDocument
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendDocument *param_1,
          FMetasoundFrontendClassName *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  EMetasoundFrontendClassAccessFlags EVar3;
  FMetasoundFrontendDocument *pFVar4;
  FGuid *pFVar5;
  FMetasoundFrontendClassName *pFVar6;
  ISearchEngine *pIVar7;
  UStruct *this_00;
  longlong *plVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined1 auStack_1b8 [32];
  <lambda_1> local_198;
  FString local_190;
  FString local_180;
  FName local_170;
  FName local_168;
  FMetasoundFrontendVersionNumber local_160;
  FName local_158;
  FName local_150;
  FMetasoundFrontendVersionNumber local_148;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_140;
  FName local_130;
  FName local_128;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_120;
  FTopLevelAssetPath local_110;
  FGuid local_100;
  FGuid local_f0;
  FMetasoundFrontendClassName local_e0;
  FMetasoundFrontendClassName local_c8;
  undefined1 local_a8 [72];
  longlong *local_60;
  FMetaSoundFrontendDocumentBuilder *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (GCycleStatsShouldEmitNamedEvents < 1) {
    local_198 = (<lambda_1>)0x0;
  }
  else {
    local_198 = (<lambda_1>)0x1;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetaSoundFrontendDocumentBuilder::InitDocument");
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4176,"FMetaSoundFrontendDocumentBuilder::InitDocument",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
               ,0x1050);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4176);
  }
  pFVar4 = GetDocumentChecked(this);
  if (param_1 == (FMetasoundFrontendDocument *)0x0) {
    if ((pFVar4->RootGraph).PagedGraphs.ArrayNum == 0) {
      FMetasoundFrontendGraphClass::InitDefaultGraphPage(&pFVar4->RootGraph);
      if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      Metasound::Frontend::FDocumentModifyDelegates::AddPageDelegates
                ((this->DocumentDelegates).Object,&Metasound::Frontend::DefaultPageID);
    }
    plVar8 = &(pFVar4->RootGraph)._padding_;
    plVar9 = (longlong *)0x0;
    if (param_2 == (FMetasoundFrontendClassName *)0x0) {
      local_158.ComparisonIndex.Value = 0;
      local_158.Number = 0;
      pFVar5 = FGuid::NewGuid(&local_f0);
      local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.Data.ArrayNum = 0;
      local_180.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar5,&local_180,Digits);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_180.Data.ArrayNum != 0) {
        FVar10.Data = local_180.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_128,(wchar_t *)FVar10.Data);
      local_150.ComparisonIndex.Value = 0;
      local_150.Number = 0;
      pFVar6 = FMetasoundFrontendClassName::FMetasoundFrontendClassName
                         (&local_c8,&local_150,&local_128,&local_158);
      FMetasoundFrontendClassMetadata::SetClassName
                ((FMetasoundFrontendClassMetadata *)plVar8,pFVar6);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
    }
    else {
      FMetasoundFrontendClassMetadata::SetClassName
                ((FMetasoundFrontendClassMetadata *)plVar8,param_2);
    }
    if (param_3) {
      local_148.Major = 1;
      local_148.Minor = 0;
      FMetasoundFrontendClassMetadata::SetVersion
                ((FMetasoundFrontendClassMetadata *)plVar8,&local_148);
    }
    *(undefined1 *)&(pFVar4->RootGraph)._padding_ = 1;
    pIVar7 = Metasound::Frontend::ISearchEngine::Get();
    pcVar1 = *(code **)((longlong)*pIVar7 + 0x30);
    plVar8 = plVar9;
    if (((*(longlong *)&this->DocumentInterface == 0) ||
        (plVar8 = *(longlong **)&(this->DocumentInterface).field_0x8, plVar8 == (longlong *)0x0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Interface",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0xe0a,
                           L"Failed to return class path; interface must always be valid while builder is operating on MetaSound UObject!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (UStruct *)(**(code **)(*plVar8 + 0x20))(plVar8);
    UStruct::GetStructPathName(this_00,&local_110);
    (*pcVar1)(pIVar7,&local_120,&local_110);
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    local_a8._0_8_ = (FMetasoundFrontendInterface *)0x0;
    local_a8._8_4_ = 0;
    local_a8._12_4_ = 0;
    local_a8._16_8_ = (FMetasoundFrontendInterface *)0x0;
    local_a8._24_4_ = 0;
    local_a8._28_4_ = 0;
    local_a8._32_8_ = 0;
    local_60 = (longlong *)0x0;
    local_58 = (FMetaSoundFrontendDocumentBuilder *)0x0;
    Algo::
    Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions_::__l2::<lambda_1>_>
              (&local_140,
               (TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *)local_a8,local_198
              );
    Algo::
    Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions_::__l2::<lambda_2>_>
              (&local_120,
               (TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *)(local_a8 + 0x10),
               (<lambda_2>)local_198);
    local_58 = (FMetaSoundFrontendDocumentBuilder *)0x0;
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    ModifyInterfaces(this,(FModifyInterfaceOptions *)local_a8);
    if (local_a8._32_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x30);
      if (local_60 != (longlong *)0x0) {
        plVar8 = local_60;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    DestructItems<FMetasoundFrontendInterface,int>
              ((FMetasoundFrontendInterface *)local_a8._16_8_,local_a8._24_4_);
    if ((FMetasoundFrontendInterface *)local_a8._16_8_ != (FMetasoundFrontendInterface *)0x0) {
      FMemory::Free((void *)local_a8._16_8_);
    }
    DestructItems<FMetasoundFrontendInterface,int>
              ((FMetasoundFrontendInterface *)local_a8._0_8_,local_a8._8_4_);
    if ((FMetasoundFrontendInterface *)local_a8._0_8_ != (FMetasoundFrontendInterface *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    if (*(longlong *)&this->DocumentInterface != 0) {
      plVar9 = *(longlong **)&(this->DocumentInterface).field_0x8;
    }
    EVar3 = (**(code **)(*plVar9 + 0x30))(plVar9);
    pFVar4 = GetDocumentChecked(this);
    FMetasoundFrontendClassMetadata::SetAccessFlags
              ((FMetasoundFrontendClassMetadata *)&(pFVar4->RootGraph)._padding_,EVar3);
  }
  else {
    FMetasoundFrontendDocument::operator=(pFVar4,param_1);
    if ((pFVar4->RootGraph).PagedGraphs.ArrayNum == 0) {
      FMetasoundFrontendGraphClass::InitDefaultGraphPage(&pFVar4->RootGraph);
      if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      Metasound::Frontend::FDocumentModifyDelegates::AddPageDelegates
                ((this->DocumentDelegates).Object,&Metasound::Frontend::DefaultPageID);
    }
    pFVar4 = GetDocumentChecked(this);
    plVar8 = &(pFVar4->RootGraph)._padding_;
    if (param_2 == (FMetasoundFrontendClassName *)0x0) {
      local_170.ComparisonIndex.Value = 0;
      local_170.Number = 0;
      pFVar5 = FGuid::NewGuid(&local_100);
      local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.Data.ArrayNum = 0;
      local_190.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar5,&local_190,Digits);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_190.Data.ArrayNum != 0) {
        FVar10.Data = local_190.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_130,(wchar_t *)FVar10.Data);
      local_168.ComparisonIndex.Value = 0;
      local_168.Number = 0;
      pFVar6 = FMetasoundFrontendClassName::FMetasoundFrontendClassName
                         (&local_e0,&local_168,&local_130,&local_170);
      FMetasoundFrontendClassMetadata::SetClassName
                ((FMetasoundFrontendClassMetadata *)plVar8,pFVar6);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
    else {
      FMetasoundFrontendClassMetadata::SetClassName
                ((FMetasoundFrontendClassMetadata *)plVar8,param_2);
    }
    if (param_3) {
      local_160.Major = 1;
      local_160.Minor = 0;
      FMetasoundFrontendClassMetadata::SetVersion
                ((FMetasoundFrontendClassMetadata *)plVar8,&local_160);
    }
    *(undefined1 *)&(pFVar4->RootGraph)._padding_ = 1;
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_198 != (<lambda_1>)0x0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// InitGraphClassMetadata @ 14ae02140

void __thiscall
FMetaSoundFrontendDocumentBuilder::InitGraphClassMetadata
          (FMetaSoundFrontendDocumentBuilder *this,bool param_1,FMetasoundFrontendClassName *param_2
          )

{
  longlong *this_00;
  FMetasoundFrontendDocument *pFVar1;
  FGuid *this_01;
  FMetasoundFrontendClassName *pFVar2;
  ForAnyElementType FVar3;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FString local_50;
  FGuid local_40;
  FMetasoundFrontendClassName local_30;
  
  pFVar1 = GetDocumentChecked(this);
  this_00 = &(pFVar1->RootGraph)._padding_;
  if (param_2 == (FMetasoundFrontendClassName *)0x0) {
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    this_01 = FGuid::NewGuid(&local_40);
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    FGuid::AppendString(this_01,&local_50,Digits);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar3.Data = local_50.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_58,(wchar_t *)FVar3.Data);
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    pFVar2 = FMetasoundFrontendClassName::FMetasoundFrontendClassName
                       (&local_30,&local_res20,&local_58,&local_res18);
    FMetasoundFrontendClassMetadata::SetClassName((FMetasoundFrontendClassMetadata *)this_00,pFVar2)
    ;
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  else {
    FMetasoundFrontendClassMetadata::SetClassName
              ((FMetasoundFrontendClassMetadata *)this_00,param_2);
  }
  if (param_1) {
    local_res18.ComparisonIndex.Value = 1;
    local_res18.Number = 0;
    FMetasoundFrontendClassMetadata::SetVersion
              ((FMetasoundFrontendClassMetadata *)this_00,
               (FMetasoundFrontendVersionNumber *)&local_res18);
  }
  *(undefined1 *)&(pFVar1->RootGraph)._padding_ = 1;
  return;
}

// InitGraphClassMetadata @ 14ae02240

void __cdecl
FMetaSoundFrontendDocumentBuilder::InitGraphClassMetadata
          (FMetasoundFrontendClassMetadata *param_1,bool param_2,
          FMetasoundFrontendClassName *param_3)

{
  FGuid *this;
  FMetasoundFrontendClassName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  FString local_58;
  FGuid local_48;
  FMetasoundFrontendClassName local_38;
  
  if (param_3 == (FMetasoundFrontendClassName *)0x0) {
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
    this = FGuid::NewGuid(&local_48);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(this,&local_58,Digits);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar2.Data = local_58.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res20,(wchar_t *)FVar2.Data);
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    pFVar1 = FMetasoundFrontendClassName::FMetasoundFrontendClassName
                       (&local_38,&local_res18,&local_res20,local_res8);
    FMetasoundFrontendClassMetadata::SetClassName(param_1,pFVar1);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    FMetasoundFrontendClassMetadata::SetClassName(param_1,param_3);
  }
  if (param_2) {
    local_res8[0].ComparisonIndex.Value = 1;
    local_res8[0].Number = 0;
    FMetasoundFrontendClassMetadata::SetVersion
              (param_1,(FMetasoundFrontendVersionNumber *)local_res8);
  }
  param_1->Type = Graph;
  return;
}

// InitNodeLocations @ 14ae02330

void __thiscall
FMetaSoundFrontendDocumentBuilder::InitNodeLocations(FMetaSoundFrontendDocumentBuilder *this)

{
  return;
}

// IsDependencyReferenced @ 14ae027b0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::IsDependencyReferenced
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1)

{
  FMetasoundFrontendDocument *pFVar1;
  undefined1 local_res8 [8];
  code *local_38;
  FMetaSoundFrontendDocumentBuilder **local_30;
  FMetaSoundFrontendDocumentBuilder *local_28;
  FGuid *local_20;
  undefined1 *local_18;
  
  local_res8[0] = 0;
  pFVar1 = GetConstDocumentChecked(this);
  local_18 = local_res8;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::IsDependencyReferenced'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&pFVar1->RootGraph,
             (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *)&local_38);
  return (bool)local_res8[0];
}

// IsInterfaceDeclared @ 14ae02820

bool __thiscall
FMetaSoundFrontendDocumentBuilder::IsInterfaceDeclared
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendVersion *param_1)

{
  uint uVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  FMetasoundFrontendDocument *pFVar5;
  
  pFVar5 = GetConstDocumentChecked(this);
  uVar1 = (param_1->Number).Major;
  iVar4 = (param_1->Number).Minor;
  FVar2 = param_1->Name;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  iVar4 = TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendVersion>
                    (&pFVar5->Interfaces,
                     (uVar3 >> 2) +
                     uVar3 * 0x40 +
                     (iVar4 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) + 0x9e3779b9 ^
                     uVar3,param_1);
  return iVar4 != -1;
}

// IsInterfaceDeclared @ 14ae028c0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::IsInterfaceDeclared
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ISearchEngine *pIVar4;
  FMetasoundFrontendDocument *pFVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  FMetasoundFrontendClassInput *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_68 = (FMetasoundFrontendClassInput *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  local_20 = 1;
  pIVar4 = Metasound::Frontend::ISearchEngine::Get();
  cVar2 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,param_1,&local_68);
  if (cVar2 == '\0') {
    bVar10 = false;
  }
  else {
    pFVar5 = GetConstDocumentChecked(this);
    lVar1 = local_28;
    uVar8 = (uint)local_20 * 0x40 + local_20._4_4_ + ((uint)local_20 >> 2) + 0x9e3779b9 ^
            (uint)local_20;
    uVar3 = ::GetTypeHash(local_28._0_4_);
    uVar3 = uVar3 + (int)((ulonglong)lVar1 >> 0x20);
    if (*(int *)&(pFVar5->Interfaces).Elements.field_0x8 !=
        *(int *)&(pFVar5->Interfaces).Elements.field_0x34) {
      FVar7 = (pFVar5->Interfaces).Hash.SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&(pFVar5->Interfaces).Hash;
      }
      iVar9 = *(int *)((longlong)FVar7 +
                      (ulonglong)
                      ((pFVar5->Interfaces).HashSize - 1U &
                      (uVar3 * 0x40 + uVar8 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3)) * 4);
      if (iVar9 != -1) {
        lVar1 = *(longlong *)&(pFVar5->Interfaces).Elements;
        do {
          lVar6 = (longlong)iVar9;
          if (((*(longlong *)(lVar1 + lVar6 * 0x18) == local_28) &&
              (*(int *)(lVar1 + 8 + lVar6 * 0x18) == (uint)local_20)) &&
             (*(int *)(lVar1 + 0xc + lVar6 * 0x18) == local_20._4_4_)) goto LAB_14ae029ff;
          iVar9 = *(int *)(lVar1 + 0x10 + lVar6 * 0x18);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
LAB_14ae029ff:
    bVar10 = iVar9 != -1;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_68,(int)local_60);
  if (local_68 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_68);
  }
  return bVar10;
}

// IsNodeInputConnected @ 14ae02e90

bool __thiscall
FMetaSoundFrontendDocumentBuilder::IsNodeInputConnected
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014ae02f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,param_1,param_2,*(code **)(*plVar5 + 0x10));
  return (bool)uVar4;
}

// IsNodeInputConnectionUserModifiable @ 14ae02f20

bool __thiscall
FMetaSoundFrontendDocumentBuilder::IsNodeInputConnectionUserModifiable
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EMetasoundFrontendClassType EVar5;
  longlong *plVar6;
  longlong lVar7;
  INodeTemplateRegistry *pIVar8;
  longlong local_res8;
  FNodeClassRegistryKey local_48;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar6 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_3);
  lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,param_1);
  if (lVar7 != 0) {
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->DocumentCache).Object;
    lVar7 = (**(code **)(*(longlong *)pIVar1 + 0x18))(pIVar1,lVar7 + 0x10);
    if (lVar7 != 0) {
      EVar5 = FMetasoundFrontendClassMetadata::GetType
                        ((FMetasoundFrontendClassMetadata *)(lVar7 + 0x18));
      switch(EVar5) {
      case Input:
      case VariableMutator:
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6,param_1,param_2);
        if (plVar6 != (longlong *)0x0) {
          FLazyName::Resolve(&Metasound::VariableNames::InputDataName);
          return *plVar6 == local_res8;
        }
      case Variable:
      case VariableDeferredAccessor:
      case VariableAccessor:
        return false;
      case Template:
        Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                  (&local_48,(FMetasoundFrontendClassMetadata *)(lVar7 + 0x18));
        pIVar8 = Metasound::Frontend::INodeTemplateRegistry::Get();
        plVar6 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
        if (plVar6 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar6 + 0x58))(plVar6);
          return (bool)uVar4;
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3428680960856551146>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0x1116,"Template");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
  }
  return true;
}

// IsNodeOutputConnected @ 14ae030f0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::IsNodeOutputConnected
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014ae03177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,param_1,param_2,*(code **)(*plVar5 + 0x18));
  return (bool)uVar4;
}

// IsNodeOutputConnectionUserModifiable @ 14ae03180

bool __thiscall
FMetaSoundFrontendDocumentBuilder::IsNodeOutputConnectionUserModifiable
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EMetasoundFrontendClassType EVar5;
  longlong *plVar6;
  longlong lVar7;
  INodeTemplateRegistry *pIVar8;
  longlong local_res8;
  FNodeClassRegistryKey local_48;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar6 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,param_3);
  lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,param_1);
  if (lVar7 != 0) {
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->DocumentCache).Object;
    lVar7 = (**(code **)(*(longlong *)pIVar1 + 0x18))(pIVar1,lVar7 + 0x10);
    if (lVar7 != 0) {
      EVar5 = FMetasoundFrontendClassMetadata::GetType
                        ((FMetasoundFrontendClassMetadata *)(lVar7 + 0x18));
      switch(EVar5) {
      case Output:
      case Variable:
      case VariableMutator:
        return false;
      case VariableDeferredAccessor:
      case VariableAccessor:
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x58))(plVar6,param_1,param_2);
        if (plVar6 == (longlong *)0x0) {
          return false;
        }
        FLazyName::Resolve(&Metasound::VariableNames::OutputDataName);
        return *plVar6 == local_res8;
      case Template:
        Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                  (&local_48,(FMetasoundFrontendClassMetadata *)(lVar7 + 0x18));
        pIVar8 = Metasound::Frontend::INodeTemplateRegistry::Get();
        plVar6 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
        if (plVar6 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
          return (bool)uVar4;
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3428680960856551090>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0x114e,"Template");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
  }
  return true;
}

// IsPreset @ 14ae03350

bool __thiscall FMetaSoundFrontendDocumentBuilder::IsPreset(FMetaSoundFrontendDocumentBuilder *this)

{
  FMetasoundFrontendDocument *pFVar1;
  
  pFVar1 = GetConstDocumentChecked(this);
  return (pFVar1->RootGraph).PresetOptions.bIsPreset;
}

// IsValid @ 14ae03370

bool __thiscall FMetaSoundFrontendDocumentBuilder::IsValid(FMetaSoundFrontendDocumentBuilder *this)

{
  return *(longlong *)&this->DocumentInterface != 0;
}

// IsValidEdge @ 14ae03380

EInvalidEdgeReason __thiscall
FMetaSoundFrontendDocumentBuilder::IsValidEdge
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendEdge *param_1,FGuid *param_2)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  EInvalidEdgeReason EVar4;
  EMetasoundFrontendVertexAccessType EVar5;
  EMetasoundFrontendVertexAccessType EVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  FGuid *pFVar10;
  
  pFVar10 = param_2;
  if (param_2 == (FGuid *)0x0) {
    pFVar10 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  plVar7 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x40))(pIVar1,pFVar10);
  lVar8 = (**(code **)(*plVar7 + 0x58))(plVar7,param_1,&param_1->FromVertexID);
  if (lVar8 == 0) {
    return MissingOutput;
  }
  lVar9 = (**(code **)(*plVar7 + 0x48))(plVar7,&param_1->ToNodeID,&param_1->ToVertexID);
  if (lVar9 == 0) {
    EVar4 = MissingInput;
  }
  else {
    bVar3 = Metasound::IsCastable(*(FName *)(lVar8 + 8),*(FName *)(lVar9 + 8));
    if (bVar3) {
      EVar5 = GetNodeOutputAccessType(this,&param_1->FromNodeID,&param_1->FromVertexID,param_2);
      EVar6 = GetNodeInputAccessType(this,&param_1->ToNodeID,&param_1->ToVertexID,param_2);
      bVar3 = FMetasoundFrontendClassVertex::CanConnectVertexAccessTypes(EVar5,EVar6);
      EVar4 = !bVar3;
    }
    else {
      EVar4 = MismatchedDataType;
    }
  }
  return EVar4;
}

// IterateNodes @ 14ae034b0

void __thiscall
FMetaSoundFrontendDocumentBuilder::IterateNodes
          (FMetaSoundFrontendDocumentBuilder *this,
          TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
          *param_1,FGuid *param_2)

{
  int iVar1;
  IDocumentCache *pIVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendDocument *pFVar5;
  FMetasoundFrontendGraph *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  pFVar5 = GetConstDocumentChecked(this);
  pFVar6 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar5->RootGraph,param_2);
  iVar1 = (pFVar6->Nodes).ArrayNum;
  pFVar8 = (pFVar6->Nodes).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((pFVar6->Nodes).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar8 == pFVar9) break;
    if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar2 = (this->DocumentCache).Object;
    lVar7 = (**(code **)(*(longlong *)pIVar2 + 0x18))(pIVar2,pFVar8 + 0x10);
    if (lVar7 != 0) {
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar7,pFVar8);
    }
    pFVar8 = pFVar8 + 0x88;
  }
  return;
}

// IterateNodesByClassType @ 14ae035a0

void __thiscall
FMetaSoundFrontendDocumentBuilder::IterateNodesByClassType
          (FMetaSoundFrontendDocumentBuilder *this,
          TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&)>
          *param_1,EMetasoundFrontendClassType param_2,FGuid *param_3)

{
  int iVar1;
  IDocumentCache *pIVar2;
  code *pcVar3;
  bool bVar4;
  EMetasoundFrontendClassType EVar5;
  FMetasoundFrontendDocument *pFVar6;
  FMetasoundFrontendGraph *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [8];
  
  if (param_2 == Invalid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClassType != EMetasoundFrontendClassType::Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x11f9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  pFVar6 = GetConstDocumentChecked(this);
  pFVar7 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar6->RootGraph,param_3);
  iVar1 = (pFVar7->Nodes).ArrayNum;
  pFVar9 = (pFVar7->Nodes).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((pFVar7->Nodes).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar9 == pFVar10) break;
    if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar2 = (this->DocumentCache).Object;
    lVar8 = (**(code **)(*(longlong *)pIVar2 + 0x18))(pIVar2,pFVar9 + 0x10);
    if (lVar8 != 0) {
      EVar5 = FMetasoundFrontendClassMetadata::GetType
                        ((FMetasoundFrontendClassMetadata *)(lVar8 + 0x18));
      if (EVar5 == param_2) {
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar8,pFVar9);
      }
    }
    pFVar9 = pFVar9 + 0x88;
  }
  return;
}

// IterateNodesByPredicate @ 14ae036d0

void __thiscall
FMetaSoundFrontendDocumentBuilder::IterateNodesByPredicate
          (FMetaSoundFrontendDocumentBuilder *this,
          TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&,FGuid_const_&)>
          *param_1,TFunctionRef<bool___cdecl(FMetasoundFrontendNode_const_&)> *param_2,
          FGuid *param_3,bool param_4)

{
  int iVar1;
  IDocumentCache *pIVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FMetasoundFrontendDocument *pFVar6;
  FMetasoundFrontendGraph *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *local_48;
  TFunctionRef<bool___cdecl(FMetasoundFrontendNode_const_&)> **local_40;
  TFunctionRef<bool___cdecl(FMetasoundFrontendNode_const_&)> *local_38;
  FMetaSoundFrontendDocumentBuilder *local_30;
  TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&,FGuid_const_&)>
  *local_28;
  
  pFVar6 = GetDocumentChecked(this);
  if (param_4 != false) {
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::IterateNodesByPredicate'::__l5::<lambda_1>,void,FMetasoundFrontendGraph_&>
               ::Call;
    local_38 = param_2;
    local_30 = this;
    local_28 = param_1;
    FMetasoundFrontendGraphClass::IterateGraphPages
              (&pFVar6->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_48
              );
    return;
  }
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  pFVar7 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar6->RootGraph,param_3);
  iVar1 = (pFVar7->Nodes).ArrayNum;
  pFVar9 = (pFVar7->Nodes).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((pFVar7->Nodes).ArrayNum != iVar1) {
      param_4 = false;
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_4);
    }
    if (pFVar9 == pFVar10) break;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar9);
    if (cVar4 != '\0') {
      if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pIVar2 = (this->DocumentCache).Object;
      lVar8 = (**(code **)(*(longlong *)pIVar2 + 0x18))(pIVar2,pFVar9 + 0x10);
      if (lVar8 != 0) {
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar8,pFVar9,&pFVar7->PageID);
      }
    }
    pFVar9 = pFVar9 + 0x88;
  }
  return;
}

// IterateNodesConnectedWithVertex @ 14ae03840

void __thiscall
FMetaSoundFrontendDocumentBuilder::IterateNodesConnectedWithVertex
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendVertexHandle *param_1,
          TFunctionRef<void___cdecl(FMetasoundFrontendEdge_const_&,FMetasoundFrontendNode_&)>
          *param_2,FGuid *param_3)

{
  uint uVar1;
  IDocumentCache *pIVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FMetasoundFrontendDocument *pFVar8;
  FMetasoundFrontendGraph *pFVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_a0;
  undefined8 local_98;
  longlong *local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pFVar8 = GetDocumentChecked(this);
  pFVar9 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar8->RootGraph,param_3);
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar10 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x50))(pIVar2,param_3);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar11 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_3);
  (**(code **)(*plVar10 + 0x20))(plVar10,local_90,param_1,&param_1->VertexID);
  iVar15 = (int)local_90[1];
  plVar10 = local_90[0] + iVar15;
  plVar19 = local_90[0];
  while( true ) {
    if ((int)local_90[1] != iVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendEdge_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar19 == plVar10) {
      iVar15 = (int)local_98;
      uVar13 = (ulonglong)(int)local_98;
      pFVar18 = local_a0.Data + uVar13 * 0x40;
      FVar17.Data = local_a0.Data;
      do {
        if ((int)uVar13 != iVar15) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FMetasoundFrontendEdge,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (FVar17.Data == pFVar18) {
          if (local_90[0] != (longlong *)0x0) {
            FMemory::Free(local_90[0]);
          }
          if (local_a0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data);
          }
          return;
        }
        pFVar16 = FVar17.Data;
        if (((*(uint *)(FVar17.Data + 0x2c) != (param_1->NodeID).D ||
             *(uint *)(FVar17.Data + 0x28) != (param_1->NodeID).C) ||
            *(uint *)(FVar17.Data + 0x24) != (param_1->NodeID).B) ||
            *(uint *)(FVar17.Data + 0x20) != (param_1->NodeID).A) {
          pFVar16 = FVar17.Data + 0x20;
        }
        puVar14 = (uint *)(**(code **)(*plVar11 + 0x18))(plVar11,pFVar16);
        if (puVar14 != (uint *)0x0) {
          uVar1 = *puVar14;
          uVar7 = 0;
          if ((int)uVar1 < (pFVar9->Nodes).ArrayNum) {
            uVar7 = ~uVar1 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)param_2)
                    (*(undefined8 *)&param_2->field_0x8,FVar17.Data,
                     (pFVar9->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88);
        }
        uVar13 = local_98 & 0xffffffff;
        FVar17.Data = FVar17.Data + 0x40;
      } while( true );
    }
    puVar3 = (undefined8 *)*plVar19;
    if ((puVar3 == (undefined8 *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Edge",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0x11b3,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_80 = *puVar3;
    uStack_78 = puVar3[1];
    local_70 = puVar3[2];
    uStack_68 = puVar3[3];
    local_60 = puVar3[4];
    uStack_58 = puVar3[5];
    local_50 = puVar3[6];
    uStack_48 = puVar3[7];
    if (((local_a0.Data <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 < local_a0.Data + (longlong)local_98._4_4_ * 0x40)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = (int)local_98;
    if ((int)local_98 == local_98._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x440,&local_a0,(int *)((longlong)&local_98 + 4));
    }
    lVar12 = (longlong)iVar6 * 0x40;
    local_98 = CONCAT44(local_98._4_4_,iVar6 + 1);
    plVar19 = plVar19 + 1;
    *(undefined8 *)(local_a0.Data + lVar12) = local_80;
    *(undefined8 *)(local_a0.Data + lVar12 + 8) = uStack_78;
    *(undefined8 *)(local_a0.Data + lVar12 + 0x10) = local_70;
    *(undefined8 *)(local_a0.Data + lVar12 + 0x10 + 8) = uStack_68;
    *(undefined8 *)(local_a0.Data + lVar12 + 0x20) = local_60;
    *(undefined8 *)(local_a0.Data + lVar12 + 0x20 + 8) = uStack_58;
    *(undefined8 *)(local_a0.Data + lVar12 + 0x30) = local_50;
    *(undefined8 *)(local_a0.Data + lVar12 + 0x30 + 8) = uStack_48;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ModifyInterfaces @ 14ae03c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ModifyInterfaces
          (FMetaSoundFrontendDocumentBuilder *this,FModifyInterfaceOptions *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMetasoundFrontendDocument *pFVar4;
  undefined1 auStack_108 [32];
  FModifyInterfacesImpl local_e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar4 = GetDocumentChecked(this);
  Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl
            (&local_e8,pFVar4,param_1);
  if ((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::Execute
                    (&local_e8,this,(this->DocumentDelegates).Object);
  if (local_e8.OutputsToRemove.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.OutputsToRemove.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_e8.InputsToRemove.AllocatorInstance.Data,
             local_e8.InputsToRemove.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_e8.InputsToRemove.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_e8.InputsToRemove.AllocatorInstance.Data);
  }
  if (local_e8.OutputsToAdd.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.OutputsToAdd.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,int>
            ((TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*> *)
             local_e8.InputsToAdd.AllocatorInstance.Data,local_e8.InputsToAdd.ArrayNum);
  if ((TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*> *)
      local_e8.InputsToAdd.AllocatorInstance.Data !=
      (TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*> *)0x0) {
    FMemory::Free(local_e8.InputsToAdd.AllocatorInstance.Data);
  }
  if (local_e8.PairedOutputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.PairedOutputs.AllocatorInstance.Data);
  }
  if (local_e8.PairedInputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.PairedInputs.AllocatorInstance.Data);
  }
  Metasound::Frontend::FModifyInterfaceOptions::~FModifyInterfaceOptions(&local_e8.Options);
  return bVar2;
}

// Reload @ 14ae04650

void __thiscall
FMetaSoundFrontendDocumentBuilder::Reload
          (FMetaSoundFrontendDocumentBuilder *this,
          TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *param_1,bool param_2)

{
  int *piVar1;
  FMetasoundFrontendVersionNumber FVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendVersionNumber FVar5;
  FMetasoundFrontendVersionNumber FVar6;
  TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *pTVar7;
  TSharedRef<Metasound::Frontend::FDocumentCache,1> *pTVar8;
  FName *pFVar9;
  int iVar10;
  FName FVar11;
  FMetasoundFrontendVersionNumber FVar12;
  int iVar13;
  FName local_88;
  FMetasoundFrontendVersionNumber local_80;
  FDocumentCache *local_78;
  FSharedReferencer<1> local_70;
  FName local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<Metasound::Frontend::FDocumentCache,1> local_58;
  TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> local_48;
  
  FVar12.Major = 0;
  FVar12.Minor = 0;
  if ((*(longlong *)&this->DocumentInterface != 0) &&
     (*(longlong *)&(this->DocumentInterface).field_0x8 != 0)) {
    (**(code **)(**(longlong **)&(this->DocumentInterface).field_0x8 + 0x58))();
  }
  FVar5 = (FMetasoundFrontendVersionNumber)GetConstDocumentChecked(this);
  FVar11 = (FName)param_1->Object;
  if (FVar11 != (FName)0x0) {
    local_60 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = &local_68;
    bVar4 = true;
    iVar10 = 0;
    FVar6 = FVar5;
    iVar13 = iVar10;
    local_68 = FVar11;
    goto LAB_14ae047ed;
  }
  FVar6 = (FMetasoundFrontendVersionNumber)::operator_new(0x2f0);
  if (FVar6 == (FMetasoundFrontendVersionNumber)0x0) {
    FVar11 = (FName)&DAT_00000010;
    FVar6 = FVar12;
LAB_14ae0476a:
    if (((*(longlong *)FVar11 == 0) ||
        (*(FMetasoundFrontendVersionNumber *)((longlong)FVar11 + 8) ==
         (FMetasoundFrontendVersionNumber)0x0)) ||
       (*(int *)((longlong)*(FMetasoundFrontendVersionNumber *)((longlong)FVar11 + 8) + 8) < 1)) {
      if (FVar6 != (FMetasoundFrontendVersionNumber)0x0) {
        LOCK();
        *(int *)&((FSharedReferencer<1> *)((longlong)FVar6 + 8))->ReferenceController =
             *(int *)&((FSharedReferencer<1> *)((longlong)FVar6 + 8))->ReferenceController + 1;
        UNLOCK();
      }
      *(FName *)FVar11 = FVar11;
      if (FVar6 != *(FMetasoundFrontendVersionNumber *)((longlong)FVar11 + 8)) {
        if (FVar6 != (FMetasoundFrontendVersionNumber)0x0) {
          LOCK();
          *(int *)((longlong)FVar6 + 0xc) = *(int *)((longlong)FVar6 + 0xc) + 1;
          UNLOCK();
        }
        FVar2 = *(FMetasoundFrontendVersionNumber *)((longlong)FVar11 + 8);
        if (FVar2 != (FMetasoundFrontendVersionNumber)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)FVar2 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*(longlong *)FVar2 + 8))(FVar2,1);
          }
        }
        *(FMetasoundFrontendVersionNumber *)((longlong)FVar11 + 8) = FVar6;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar6);
    }
  }
  else {
    *(undefined4 *)&((FSharedReferencer<1> *)((longlong)FVar6 + 8))->ReferenceController = 1;
    *(undefined4 *)((longlong)FVar6 + 0xc) = 1;
    *(undefined ***)FVar6 =
         &
         ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
              ((FDocumentModifyDelegates *)((longlong)FVar6 + 0x10),
               (FMetasoundFrontendDocument *)FVar5);
    FVar11 = (FName)((longlong)FVar6 + 0x10);
    if (FVar11 != (FName)0x0) goto LAB_14ae0476a;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (FVar6 != (FMetasoundFrontendVersionNumber)0x0) {
    LOCK();
    *(int *)&((FSharedReferencer<1> *)((longlong)FVar6 + 8))->ReferenceController =
         *(int *)&((FSharedReferencer<1> *)((longlong)FVar6 + 8))->ReferenceController + 1;
    UNLOCK();
  }
  pFVar9 = &local_88;
  bVar4 = false;
  iVar10 = 4;
  iVar13 = 2;
  local_88 = FVar11;
  local_80 = FVar6;
LAB_14ae047ed:
  if (&this->DocumentDelegates !=
      (TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *)pFVar9) {
    (this->DocumentDelegates).Object = (FDocumentModifyDelegates *)FVar11;
    pFVar9->ComparisonIndex = 0;
    pFVar9->Number = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DocumentDelegates).SharedReferenceCount,(FSharedReferencer<1> *)(pFVar9 + 1))
    ;
  }
  if (iVar10 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_80);
  }
  if (iVar13 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar6);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  if ((*(longlong *)&this->DocumentInterface != 0) &&
     (*(longlong *)&(this->DocumentInterface).field_0x8 != 0)) {
    pTVar7 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::ToSharedRef
                       (&this->DocumentDelegates,&local_48);
    pTVar8 = Metasound::Frontend::FDocumentCache::Create
                       (&local_58,(FMetasoundFrontendDocument *)FVar5,pTVar7,&this->BuildPageID,
                        param_2);
    local_70.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_78 = pTVar8->Object;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->DocumentCache != (TSharedPtr<Metasound::Frontend::IDocumentCache,1> *)&local_78) {
      (this->DocumentCache).Object = (IDocumentCache *)local_78;
      local_78 = (FDocumentCache *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DocumentCache).SharedReferenceCount,&local_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (*(longlong *)&this->DocumentInterface != 0) {
      FVar12.Major = *(int *)&(this->DocumentInterface).field_0x8;
      FVar12.Minor = *(int *)&(this->DocumentInterface).field_0xc;
    }
    (**(code **)(*(longlong *)FVar12 + 0x50))(FVar12);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ReloadCache @ 14ae04920

void __thiscall
FMetaSoundFrontendDocumentBuilder::ReloadCache(FMetaSoundFrontendDocumentBuilder *this)

{
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_18;
  
  local_18.Object = (this->DocumentDelegates).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->DocumentDelegates).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  Reload(this,&local_18,true);
  return;
}

// RemoveAccessFlags @ 14ae04b40

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveAccessFlags
          (FMetaSoundFrontendDocumentBuilder *this,EMetasoundFrontendClassAccessFlags param_1)

{
  FMetasoundFrontendDocument *pFVar1;
  
  pFVar1 = GetDocumentChecked(this);
  FMetasoundFrontendClassMetadata::RemoveAccessFlags
            ((FMetasoundFrontendClassMetadata *)&(pFVar1->RootGraph)._padding_,param_1);
  return;
}

// RemoveDependency @ 14ae04f40

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveDependency
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1)

{
  int iVar1;
  IDocumentCache *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int *piVar6;
  FMetasoundFrontendDocument *pFVar7;
  undefined1 local_res8 [8];
  code *local_38;
  FMetaSoundFrontendDocumentBuilder **local_30;
  FMetaSoundFrontendDocumentBuilder *local_28;
  undefined1 *local_20;
  FGuid *local_18;
  
  local_res8[0] = 0;
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pIVar2 = (this->DocumentCache).Object;
  piVar6 = (int *)(**(code **)(*(longlong *)pIVar2 + 0x28))(pIVar2,param_1);
  if (piVar6 != (int *)0x0) {
    pFVar7 = GetDocumentChecked(this);
    iVar1 = *piVar6;
    local_20 = local_res8;
    local_30 = &local_28;
    local_res8[0] = 1;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::RemoveDependency'::__l5::<lambda_1>,void,FMetasoundFrontendGraph_&>
               ::Call;
    local_28 = this;
    local_18 = param_1;
    FMetasoundFrontendGraphClass::IterateGraphPages
              (&pFVar7->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_38
              );
    RemoveSwapDependencyInternal(this,iVar1);
  }
  return (bool)local_res8[0];
}

// RemoveDependency @ 14ae05010

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveDependency
          (FMetaSoundFrontendDocumentBuilder *this,EMetasoundFrontendClassType param_1,
          FMetasoundFrontendClassName *param_2,FMetasoundFrontendVersionNumber *param_3)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int *piVar5;
  FMetasoundFrontendDocument *pFVar6;
  undefined1 local_res8 [8];
  int local_68 [2];
  code *local_60;
  FMetaSoundFrontendDocumentBuilder **local_58;
  FMetaSoundFrontendDocumentBuilder *local_50;
  undefined1 *local_48;
  TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *local_40;
  int *local_38;
  FNodeClassRegistryKey local_30;
  
  local_res8[0] = 0;
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_30,param_1,param_2,param_3);
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->DocumentCache).Object;
  piVar5 = (int *)(**(code **)(*(longlong *)pIVar1 + 0x30))(pIVar1,&local_30);
  if (piVar5 != (int *)0x0) {
    pFVar6 = GetDocumentChecked(this);
    local_68[0] = *piVar5;
    local_48 = local_res8;
    local_40 = &pFVar6->Dependencies;
    local_res8[0] = 1;
    local_38 = local_68;
    local_58 = &local_50;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::RemoveDependency'::__l5::<lambda_1>,void,FMetasoundFrontendGraph_&>
               ::Call;
    local_50 = this;
    FMetasoundFrontendGraphClass::IterateGraphPages
              (&pFVar6->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_60
              );
    RemoveSwapDependencyInternal(this,local_68[0]);
  }
  return (bool)local_res8[0];
}

// RemoveEdge @ 14ae05110

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveEdge
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendEdge *param_1,FGuid *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  IDocumentCache *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendGraph *pFVar11;
  longlong *plVar12;
  uint *puVar13;
  FDocumentModifyDelegates *this_00;
  FGraphModifyDelegates *pFVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  pFVar10 = GetDocumentChecked(this);
  pFVar11 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar10->RootGraph,param_2);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pIVar4 = (this->DocumentCache).Object;
  plVar12 = (longlong *)(**(code **)(*(longlong *)pIVar4 + 0x50))(pIVar4,param_2);
  puVar13 = (uint *)(**(code **)(*plVar12 + 0x28))(plVar12,&param_1->ToNodeID,&param_1->ToVertexID);
  if (puVar13 != (uint *)0x0) {
    uVar2 = *puVar13;
    uVar16 = ~uVar2 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar2 < (pFVar11->Edges).ArrayNum) {
      uVar8 = uVar16;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar15 = (pFVar11->Edges).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x40;
    if ((((*(uint *)(pFVar15 + 0xc) == (param_1->FromNodeID).D &&
          *(uint *)(pFVar15 + 8) == (param_1->FromNodeID).C) &&
         *(uint *)(pFVar15 + 4) == (param_1->FromNodeID).B) &&
         (param_1->FromNodeID).A == *(uint *)pFVar15) &&
       ((((param_1->FromVertexID).D == *(uint *)(pFVar15 + 0x1c) &&
         (param_1->FromVertexID).C == *(uint *)(pFVar15 + 0x18)) &&
        (param_1->FromVertexID).B == *(uint *)(pFVar15 + 0x14)) &&
        (param_1->FromVertexID).A == *(uint *)(pFVar15 + 0x10))) {
      iVar9 = (pFVar11->Edges).ArrayNum;
      this_00 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                          (&this->DocumentDelegates);
      pFVar14 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                          (this_00,param_2);
      TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pFVar14->EdgeDelegates).OnRemoveSwappingEdge,uVar2,iVar9 + -1);
      uVar8 = 0;
      if ((int)uVar2 < (pFVar11->Edges).ArrayNum) {
        uVar8 = uVar16;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar3 = (pFVar11->Edges).ArrayNum;
      pFVar15 = (pFVar11->Edges).AllocatorInstance.Data;
      iVar9 = iVar3 + ~uVar2;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      if (iVar9 != 0) {
        memmove(pFVar15 + (longlong)(int)uVar2 * 0x40,pFVar15 + (longlong)(iVar3 - iVar9) * 0x40,
                (longlong)iVar9 << 6);
      }
      piVar1 = &(pFVar11->Edges).ArrayNum;
      *piVar1 = *piVar1 + -1;
      return true;
    }
  }
  return false;
}

// RemoveEdgeToNodeInput @ 14ae05320

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveEdgeToNodeInput
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  IDocumentCache *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  uint *puVar12;
  FMetasoundFrontendDocument *pFVar13;
  FMetasoundFrontendGraph *pFVar14;
  FGraphModifyDelegates *pFVar15;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  pIVar4 = (this->DocumentCache).Object;
  plVar11 = (longlong *)(**(code **)(*(longlong *)pIVar4 + 0x50))(pIVar4,param_3);
  puVar12 = (uint *)(**(code **)(*plVar11 + 0x28))(plVar11,param_1,param_2);
  bVar7 = false;
  if (puVar12 != (uint *)0x0) {
    pFVar13 = GetDocumentChecked(this);
    pFVar14 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar13->RootGraph,param_3);
    uVar2 = *puVar12;
    if ((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pFVar15 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                        ((this->DocumentDelegates).Object,param_3);
    TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy>::Broadcast
              (&(pFVar15->EdgeDelegates).OnRemoveSwappingEdge,uVar2,(pFVar14->Edges).ArrayNum + -1);
    uVar9 = 0;
    if ((int)uVar2 < (pFVar14->Edges).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    iVar3 = (pFVar14->Edges).ArrayNum;
    pFVar5 = (pFVar14->Edges).AllocatorInstance.Data;
    iVar10 = iVar3 + ~uVar2;
    if (1 < iVar10) {
      iVar10 = 1;
    }
    if (iVar10 != 0) {
      memmove(pFVar5 + (longlong)(int)uVar2 * 0x40,pFVar5 + (longlong)(iVar3 - iVar10) * 0x40,
              (longlong)iVar10 << 6);
    }
    piVar1 = &(pFVar14->Edges).ArrayNum;
    *piVar1 = *piVar1 + -1;
    bVar7 = true;
  }
  return bVar7;
}

// RemoveEdges @ 14ae054b0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveEdges
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  int iVar1;
  IDocumentCache *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong lVar7;
  FGuid *pFVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  pFVar8 = param_2;
  if (param_2 == (FGuid *)0x0) {
    pFVar8 = &this->BuildPageID;
  }
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar6 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,pFVar8);
  lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,param_1);
  if (lVar7 != 0) {
    if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pIVar2 = (this->DocumentCache).Object;
    (**(code **)(*(longlong *)pIVar2 + 0x50))(pIVar2,pFVar8);
    iVar1 = *(int *)(lVar7 + 0x30);
    lVar9 = *(longlong *)(lVar7 + 0x28);
    lVar10 = (longlong)iVar1 * 0x20 + lVar9;
    while( true ) {
      if (*(int *)(lVar7 + 0x30) != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (lVar9 == lVar10) break;
      RemoveEdgeToNodeInput(this,param_1,(FGuid *)(lVar9 + 0x10),param_2);
      lVar9 = lVar9 + 0x20;
    }
    iVar1 = *(int *)(lVar7 + 0x40);
    lVar9 = *(longlong *)(lVar7 + 0x38);
    lVar10 = (longlong)iVar1 * 0x20 + lVar9;
    while( true ) {
      if (*(int *)(lVar7 + 0x40) != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (lVar9 == lVar10) break;
      RemoveEdgesFromNodeOutput(this,param_1,(FGuid *)(lVar9 + 0x10),param_2);
      lVar9 = lVar9 + 0x20;
    }
    return true;
  }
  return false;
}

// RemoveEdgesByNodeClassInterfaceBindings @ 14ae05620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveEdgesByNodeClassInterfaceBindings
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  int iVar1;
  bool bVar2;
  FGuid *pFVar3;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  pFVar3 = param_3;
  if (param_3 == (FGuid *)0x0) {
    pFVar3 = &this->BuildPageID;
  }
  bVar2 = FindNodeClassInterfaces
                    (this,param_1,
                     (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                      *)local_98,pFVar3);
  if (bVar2) {
    bVar2 = FindNodeClassInterfaces
                      (this,param_2,
                       (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                        *)local_e8,pFVar3);
    if (bVar2) {
      local_138._0_8_ = (FScriptContainerElement *)0x0;
      local_138._8_8_ = 0;
      local_118 = (void *)0x0;
      local_110 = 0;
      local_10c = 0x80;
      local_108 = 0xffffffff;
      local_104 = 0;
      local_f8 = (ForElementType<FSetElementId>)0x0;
      local_f0 = 0;
      bVar2 = Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges
                        (param_1,(TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                                  *)local_98,param_2,
                         (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                          *)local_e8,
                         (TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
                          *)local_138);
      if (bVar2) {
        bVar2 = RemoveNamedEdges(this,(TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
                                       *)local_138,
                                 (TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *)0x0,
                                 param_3);
        local_f0 = 0;
        if (local_f8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_f8);
        }
        iVar1 = SUB84(local_138._8_8_,4);
        local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
        if (iVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,4,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
        }
        local_108 = 0xffffffff;
        local_104 = 0;
        local_110 = 0;
        if (0x80 < local_10c) {
          local_10c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
        }
        if (local_118 != (void *)0x0) {
          FMemory::Free(local_118);
        }
        if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_138._0_8_);
        }
        goto LAB_14ae05883;
      }
      local_f0 = 0;
      if (local_f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8);
      }
      iVar1 = SUB84(local_138._8_8_,4);
      local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
      if (iVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,4,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
      }
      local_108 = 0xffffffff;
      local_104 = 0;
      local_110 = 0;
      if (0x80 < local_10c) {
        local_10c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free(local_118);
      }
      if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_138._0_8_);
      }
    }
  }
  bVar2 = false;
LAB_14ae05883:
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  iVar1 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return bVar2;
}

// RemoveEdgesFromNodeOutput @ 14ae059c0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveEdgesFromNodeOutput
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy> *this_00;
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  IDocumentCache *pIVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  FMetasoundFrontendDocument *pFVar18;
  FMetasoundFrontendGraph *pFVar19;
  FGraphModifyDelegates *pFVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  ForAnyElementType FVar25;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_78;
  uint local_70;
  int local_6c;
  void *local_68;
  uint local_60;
  FDestructionSentinel local_58;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  pIVar6 = (this->DocumentCache).Object;
  plVar17 = (longlong *)(**(code **)(*(longlong *)pIVar6 + 0x50))(pIVar6,param_3);
  (**(code **)(*plVar17 + 0x30))(plVar17,&local_68,param_1);
  if (local_60 == 0) {
    return false;
  }
  pFVar18 = GetDocumentChecked(this);
  pFVar19 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar18->RootGraph,param_3);
  local_78.Data = (FScriptContainerElement *)0x0;
  if (-1 < (int)local_60) {
    if (((local_68 == (void *)0x0) && (local_60 != 0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr != nullptr || Count == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x2d3,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    local_70 = local_60;
    if (local_60 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_78,local_60,&local_6c);
      memcpy(local_78.Data,local_68,(longlong)(int)local_60 << 2);
    }
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,_FMetaSoundFrontendDocumentBuilder::RemoveEdgesFromNodeOutput_::__l5::<lambda_1>_>
              ((int *)local_78.Data,local_70,local_res8[0],(<lambda_1>)local_res8[0]);
    if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    pFVar20 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                        ((this->DocumentDelegates).Object,param_3);
    uVar10 = local_70;
    uVar21 = (ulonglong)(int)local_70;
    pFVar3 = local_78.Data + uVar21 * 4;
    uVar22 = uVar21;
    FVar25.Data = local_78.Data;
    while( true ) {
      if ((int)uVar22 != (int)uVar21) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar25.Data == pFVar3) {
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data);
        }
        return true;
      }
      iVar16 = (pFVar19->Edges).ArrayNum;
      this_00 = &(pFVar20->EdgeDelegates).OnRemoveSwappingEdge;
      uVar4 = *(uint *)FVar25.Data;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_58);
      puVar1 = &(pFVar20->EdgeDelegates).OnRemoveSwappingEdge.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar11 = false;
      uVar23 = *(int *)&(pFVar20->EdgeDelegates).OnRemoveSwappingEdge.field_0x10 - 1;
      if (-1 < (int)uVar23) {
        lVar24 = (longlong)(int)uVar23 << 4;
        bVar11 = false;
        do {
          uVar15 = 0;
          if ((int)uVar23 < *(int *)&(pFVar20->EdgeDelegates).OnRemoveSwappingEdge.field_0x10) {
            uVar15 = ~uVar23 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          lVar7 = *(longlong *)&(pFVar20->EdgeDelegates).OnRemoveSwappingEdge.field_0x8;
          if (((*(int *)(lVar24 + 8 + lVar7) == 0) ||
              (plVar17 = *(longlong **)(lVar24 + lVar7), plVar17 == (longlong *)0x0)) ||
             (cVar14 = (**(code **)(*plVar17 + 0x68))(plVar17,uVar4,iVar16 + -1), cVar14 == '\0')) {
            bVar11 = true;
          }
          lVar24 = lVar24 + -0x10;
          uVar23 = uVar23 - 1;
        } while (-1 < (int)uVar23);
      }
      puVar1 = &(pFVar20->EdgeDelegates).OnRemoveSwappingEdge.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar11) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      uVar23 = 0;
      if ((int)uVar4 < (pFVar19->Edges).ArrayNum) {
        uVar23 = ~uVar4 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) break;
      iVar5 = (pFVar19->Edges).ArrayNum;
      pFVar8 = (pFVar19->Edges).AllocatorInstance.Data;
      iVar16 = iVar5 + ~uVar4;
      if (1 < iVar16) {
        iVar16 = 1;
      }
      if (iVar16 != 0) {
        memmove(pFVar8 + (longlong)(int)uVar4 * 0x40,pFVar8 + (longlong)(iVar5 - iVar16) * 0x40,
                (longlong)iVar16 << 6);
      }
      piVar2 = &(pFVar19->Edges).ArrayNum;
      *piVar2 = *piVar2 + -1;
      uVar22 = (ulonglong)local_70;
      FVar25.Data = FVar25.Data + 4;
      uVar21 = (ulonglong)uVar10;
    }
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_60);
}

// RemoveGraphInput @ 14ae05de0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveGraphInput
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FMetasoundFrontendDocument *pFVar6;
  longlong *plVar7;
  uint *puVar8;
  FMetasoundFrontendClassInterface *this_00;
  FDocumentModifyDelegates *pFVar9;
  uint uVar10;
  uint uVar11;
  char local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [8];
  char local_res20 [8];
  FGuid local_c8;
  code *local_b8;
  undefined8 **local_b0;
  code *local_a8;
  FMetaSoundFrontendDocumentBuilder **local_a0;
  FMetaSoundFrontendDocumentBuilder *local_98;
  FGuid *local_90;
  char *local_88;
  undefined8 *local_80;
  FMetaSoundFrontendDocumentBuilder *local_78;
  FGuid *local_70;
  char *local_68;
  undefined1 *local_60;
  FName *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar6 = GetDocumentChecked(this);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  plVar7 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  puVar8 = (uint *)(**(code **)(*plVar7 + 0x10))(plVar7,local_res10);
  if (puVar8 != (uint *)0x0) {
    this_00 = FMetasoundFrontendClass::GetDefaultInterface
                        ((FMetasoundFrontendClass *)&pFVar6->RootGraph);
    uVar2 = *puVar8;
    uVar11 = 0;
    if ((int)uVar2 < (this_00->Inputs).ArrayNum) {
      uVar11 = ~uVar2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar1 = (this_00->Inputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x48 + 0x20;
    local_50 = *(undefined8 *)pFVar1;
    uStack_48 = *(undefined8 *)(pFVar1 + 8);
    local_80 = &local_50;
    local_c8.A = 0;
    local_c8.B = 0;
    local_70 = &local_c8;
    local_c8.C = 0;
    local_c8.D = 0;
    local_68 = local_res8;
    local_60 = local_res18;
    local_58 = &local_res10;
    local_b0 = &local_80;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::RemoveGraphInput'::__l5::<lambda_1>,void,FMetasoundFrontendGraph_&>
               ::Call;
    local_res8[0] = '\x01';
    local_78 = this;
    FMetasoundFrontendGraphClass::IterateGraphPages
              (&pFVar6->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_b8
              );
    if (local_res8[0] != '\0') {
      uVar2 = *puVar8;
      if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(((this->DocumentDelegates).Object)->InterfaceDelegates).OnRemovingInput,uVar2);
      uVar11 = (this_00->Inputs).ArrayNum - 1;
      if (uVar2 != uVar11) {
        pFVar9 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                           (&this->DocumentDelegates);
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pFVar9->InterfaceDelegates).OnRemovingInput,uVar11);
      }
      uVar10 = 0;
      if ((int)uVar2 < (this_00->Inputs).ArrayNum) {
        uVar10 = ~uVar2 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (&this_00->Inputs,uVar2);
      if (uVar2 != uVar11) {
        pFVar9 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                           (&this->DocumentDelegates);
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pFVar9->InterfaceDelegates).OnInputAdded,uVar2);
      }
      SetGraphInputInheritsDefault(this,local_res10,false,true);
      local_res20[0] = '\0';
      pFVar6 = GetConstDocumentChecked(this);
      local_90 = &local_c8;
      local_88 = local_res20;
      local_a0 = &local_98;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::IsDependencyReferenced'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
                 ::Call;
      local_98 = this;
      FMetasoundFrontendGraphClass::IterateGraphPages
                (&pFVar6->RootGraph,
                 (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *)&local_a8);
      if (local_res20[0] == '\0') {
        bVar4 = RemoveDependency(this,&local_c8);
        return bVar4;
      }
      return true;
    }
  }
  return false;
}

// RemoveGraphOutput @ 14ae060b0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveGraphOutput
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1)

{
  FMetasoundFrontendGraphClass *this_00;
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  FMetasoundFrontendClassInterface *pFVar9;
  FDocumentModifyDelegates *pFVar10;
  FMetasoundFrontendDocument *pFVar11;
  int iVar12;
  FName *pFVar13;
  uint uVar14;
  uint uVar15;
  char local_res8 [8];
  FName local_res10;
  char local_res18 [8];
  FGuid local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  code *local_a8;
  FMetaSoundFrontendDocumentBuilder **local_a0;
  code *local_98;
  FMetaSoundFrontendDocumentBuilder **local_90;
  FMetaSoundFrontendDocumentBuilder *local_88;
  FGuid *local_80;
  char *local_78;
  FMetaSoundFrontendDocumentBuilder *local_70;
  FName *local_68;
  FMetasoundFrontendDocument *local_60;
  FGuid *local_58;
  undefined8 *local_50;
  char *local_48;
  
  local_res8[0] = '\x01';
  local_c8.A = 0;
  local_c8.B = 0;
  local_c8.C = 0;
  local_c8.D = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_res10 = param_1;
  local_60 = GetDocumentChecked(this);
  local_68 = &local_res10;
  local_58 = &local_c8;
  this_00 = &local_60->RootGraph;
  local_50 = &local_b8;
  local_48 = local_res8;
  local_a0 = &local_70;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::RemoveGraphOutput'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_&>
             ::Call;
  local_70 = this;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (this_00,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_a8);
  if (local_res8[0] != '\0') {
    pFVar9 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)this_00);
    pFVar3 = (FName *)(pFVar9->Outputs).AllocatorInstance.Data;
    for (pFVar13 = pFVar3;
        pFVar13 != (FName *)((longlong)pFVar3 + (longlong)(pFVar9->Outputs).ArrayNum * 0x34);
        pFVar13 = (FName *)&pFVar13[6].Number) {
      if (*pFVar13 == local_res10) {
        uVar6 = (uint)(((longlong)pFVar13 - (longlong)pFVar3) / 0x34);
        if (uVar6 == 0xffffffff) {
          return false;
        }
        if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(((this->DocumentDelegates).Object)->InterfaceDelegates).OnRemovingOutput,uVar6)
        ;
        uVar15 = (pFVar9->Outputs).ArrayNum - 1;
        if (uVar6 != uVar15) {
          pFVar10 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                              (&this->DocumentDelegates);
          TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pFVar10->InterfaceDelegates).OnRemovingOutput,uVar15);
        }
        uVar14 = 0;
        if ((int)uVar6 < (pFVar9->Outputs).ArrayNum) {
          uVar14 = ~uVar6 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar2 = (pFVar9->Outputs).ArrayNum;
        pFVar4 = (pFVar9->Outputs).AllocatorInstance.Data;
        iVar12 = iVar2 + ~uVar6;
        if (1 < iVar12) {
          iVar12 = 1;
        }
        if (iVar12 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar6 * 0x34,pFVar4 + (longlong)(iVar2 - iVar12) * 0x34,
                  (longlong)iVar12 * 0x34);
        }
        piVar1 = &(pFVar9->Outputs).ArrayNum;
        *piVar1 = *piVar1 + -1;
        if (uVar6 != uVar15) {
          pFVar10 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                              (&this->DocumentDelegates);
          TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pFVar10->InterfaceDelegates).OnOutputAdded,uVar6);
        }
        local_res18[0] = '\0';
        pFVar11 = GetConstDocumentChecked(this);
        local_80 = &local_c8;
        local_78 = local_res18;
        local_90 = &local_88;
        local_98 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::IsDependencyReferenced'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
                   ::Call;
        local_88 = this;
        FMetasoundFrontendGraphClass::IterateGraphPages
                  (&pFVar11->RootGraph,
                   (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *)&local_98);
        if (local_res18[0] != '\0') {
          return true;
        }
        bVar7 = RemoveDependency(this,&local_c8);
        return bVar7;
      }
    }
  }
  return false;
}

// RemoveGraphVariable @ 14ae06360

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveGraphVariable
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FGuid *param_2)

{
  TArray<FMetasoundFrontendVariable,TSizedDefaultAllocator<32>_> *this_00;
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FMetasoundFrontendDocument *pFVar8;
  FMetasoundFrontendGraph *pFVar9;
  FName *pFVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  FName *pFVar14;
  int iVar15;
  FGuid *pFVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  ForAnyElementType local_68;
  uint local_60;
  int local_5c;
  ForAnyElementType local_58;
  uint local_50;
  int local_4c;
  FName local_48;
  FName FStack_40;
  
  pFVar16 = param_2;
  if (param_2 == (FGuid *)0x0) {
    pFVar16 = &this->BuildPageID;
  }
  pFVar8 = GetDocumentChecked(this);
  pFVar9 = FMetasoundFrontendGraphClass::FindConstGraphChecked(&pFVar8->RootGraph,pFVar16);
  pFVar14 = (FName *)(pFVar9->Variables).AllocatorInstance.Data;
  pFVar10 = pFVar14 + (longlong)(pFVar9->Variables).ArrayNum * 0x17;
  while( true ) {
    if (pFVar14 == pFVar10) {
      return false;
    }
    if (*pFVar14 == param_1) break;
    pFVar14 = pFVar14 + 0x17;
  }
  if (pFVar14 == (FName *)0x0) {
    return false;
  }
  RemoveNode(this,(FGuid *)(pFVar14 + 0xf),(FGuid *)0x0);
  RemoveNode(this,(FGuid *)(pFVar14 + 0x11),(FGuid *)0x0);
  local_50 = pFVar14[0x14].ComparisonIndex.Value;
  lVar13 = (longlong)(int)local_50;
  FVar1 = pFVar14[0x13];
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
    uVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,(void *)FVar1,lVar13 << 4);
    uVar11 = local_50;
  }
  pFVar16 = (FGuid *)(local_58.Data + (longlong)(int)uVar11 * 0x10);
  FVar12.Data = local_58.Data;
  uVar7 = uVar11;
  while( true ) {
    if (uVar7 != uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((FGuid *)FVar12.Data == pFVar16) break;
    RemoveNode(this,(FGuid *)FVar12.Data,param_2);
    FVar12.Data = FVar12.Data + 0x10;
    uVar7 = local_50;
  }
  local_60 = pFVar14[0x16].ComparisonIndex.Value;
  lVar13 = (longlong)(int)local_60;
  FVar1 = pFVar14[0x15];
  local_68.Data = (FScriptContainerElement *)0x0;
  if (local_60 == 0) {
    local_5c = 0;
    uVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_60,0,&local_68,local_60,&local_5c);
    memcpy(local_68.Data,(void *)FVar1,lVar13 << 4);
    uVar11 = local_60;
  }
  pFVar16 = (FGuid *)(local_68.Data + (longlong)(int)uVar11 * 0x10);
  FVar12.Data = local_68.Data;
  uVar7 = uVar11;
  while( true ) {
    if (uVar7 != uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((FGuid *)FVar12.Data == pFVar16) break;
    RemoveNode(this,(FGuid *)FVar12.Data,param_2);
    FVar12.Data = FVar12.Data + 0x10;
    uVar7 = local_60;
  }
  pFVar8 = GetDocumentChecked(this);
  if (param_2 == (FGuid *)0x0) {
    param_2 = &this->BuildPageID;
  }
  pFVar9 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar8->RootGraph,param_2);
  local_48 = pFVar14[0xd];
  FStack_40 = pFVar14[0xe];
  iVar15 = (pFVar9->Variables).ArrayNum;
  bVar4 = false;
  uVar11 = 0;
  this_00 = &pFVar9->Variables;
  if (0 < iVar15) {
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < iVar15) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar2 = (this_00->AllocatorInstance).Data;
      if (((FStack_40.Number == *(uint *)(pFVar2 + lVar13 + 0x74) &&
           FStack_40.ComparisonIndex.Value == *(uint *)(pFVar2 + lVar13 + 0x70)) &&
          local_48.Number == *(uint *)(pFVar2 + lVar13 + 0x6c)) &&
          local_48.ComparisonIndex.Value == *(uint *)(pFVar2 + lVar13 + 0x68)) {
        bVar4 = true;
        uVar7 = 0;
        if ((int)uVar11 < (pFVar9->Variables).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        TArray<FMetasoundFrontendVariable,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar11);
      }
      else {
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0xb8;
      }
      iVar15 = (pFVar9->Variables).ArrayNum;
    } while ((int)uVar11 < iVar15);
    if (bVar4) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,&this_00->AllocatorInstance,iVar15,&(pFVar9->Variables).ArrayMax);
    }
  }
  RemoveUnusedDependencies(this);
  if ((FGuid *)local_68.Data != (FGuid *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if ((FGuid *)local_58.Data != (FGuid *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return true;
}

// RemoveInterface @ 14ae066e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveInterface
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1)

{
  FName *pFVar1;
  code *pcVar2;
  FName FVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ISearchEngine *pIVar9;
  FMetasoundFrontendDocument *pFVar10;
  IInterfaceRegistry *pIVar11;
  longlong *plVar12;
  UStruct *this_00;
  longlong lVar13;
  FMetasoundFrontendInterface *pFVar14;
  longlong lVar15;
  longlong *plVar16;
  ForElementType<FSetElementId> FVar17;
  FName *pFVar18;
  uint uVar19;
  FName local_res10;
  undefined1 auStack_1a8 [32];
  FMetasoundFrontendInterface *local_188;
  FMetasoundFrontendInterface *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  ForAnyElementType local_158;
  undefined8 local_150;
  FMetasoundFrontendClassInput *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  FMetasoundFrontendVersion local_108;
  void *local_f8;
  undefined8 local_f0;
  FTopLevelAssetPath local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [72];
  longlong *local_50;
  FMetaSoundFrontendDocumentBuilder *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  plVar16 = (longlong *)0x0;
  local_148 = (FMetasoundFrontendClassInput *)0x0;
  local_140 = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108.Name.ComparisonIndex.Value = 0;
  local_108.Name.Number = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_108.Number.Major = 1;
  local_108.Number.Minor = 0;
  local_res10 = param_1;
  pIVar9 = Metasound::Frontend::ISearchEngine::Get();
  cVar4 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,local_res10,&local_148);
  if (cVar4 == '\0') {
LAB_14ae06b51:
    bVar5 = false;
  }
  else {
    pFVar10 = GetDocumentChecked(this);
    FVar3 = local_108.Name;
    uVar19 = local_108.Number.Major * 0x40 + local_108.Number.Minor +
             ((uint)local_108.Number.Major >> 2) + 0x9e3779b9 ^ local_108.Number.Major;
    uVar7 = ::GetTypeHash(local_108.Name.ComparisonIndex);
    uVar7 = uVar7 + FVar3.Number;
    if (*(int *)&(pFVar10->Interfaces).Elements.field_0x8 !=
        *(int *)&(pFVar10->Interfaces).Elements.field_0x34) {
      FVar17 = (pFVar10->Interfaces).Hash.SecondaryData;
      if (FVar17 == (ForElementType<FSetElementId>)0x0) {
        FVar17 = (ForElementType<FSetElementId>)&(pFVar10->Interfaces).Hash;
      }
      iVar8 = *(int *)((longlong)FVar17 +
                      (ulonglong)
                      ((pFVar10->Interfaces).HashSize - 1U &
                      (uVar7 * 0x40 + uVar19 + 0x9e3779b9 + (uVar7 >> 2) ^ uVar7)) * 4);
      if (iVar8 != -1) {
        lVar13 = *(longlong *)&(pFVar10->Interfaces).Elements;
        do {
          lVar15 = (longlong)iVar8;
          if (((*(FName *)(lVar13 + lVar15 * 0x18) == local_108.Name) &&
              (*(int *)(lVar13 + 8 + lVar15 * 0x18) == local_108.Number.Major)) &&
             (*(int *)(lVar13 + 0xc + lVar15 * 0x18) == local_108.Number.Minor)) {
            if (iVar8 != -1) {
              Metasound::Frontend::GetInterfaceRegistryKey(&local_d8,&local_108);
              pIVar11 = Metasound::Frontend::IInterfaceRegistry::Get();
              plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x10))(pIVar11,&local_d8);
              if (plVar12 == (longlong *)0x0) {
                if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                }
                goto LAB_14ae06b51;
              }
              if (((*(longlong *)&this->DocumentInterface == 0) ||
                  (plVar16 = *(longlong **)&(this->DocumentInterface).field_0x8,
                  plVar16 == (longlong *)0x0)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Interface",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                     ,0xe0a,
                                     L"Failed to return class path; interface must always be valid while builder is operating on MetaSound UObject!"
                                    ), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              this_00 = (UStruct *)(**(code **)(*plVar16 + 0x20))(plVar16);
              UStruct::GetStructPathName(this_00,&local_e8);
              lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
              pFVar18 = *(FName **)(lVar13 + 0x50);
              pFVar1 = (FName *)((longlong)pFVar18 + (longlong)*(int *)(lVar13 + 0x58) * 0x14);
              if (pFVar18 == pFVar1) goto LAB_14ae06928;
              goto LAB_14ae06910;
            }
            break;
          }
          iVar8 = *(int *)(lVar13 + 0x10 + lVar15 * 0x18);
        } while (iVar8 != -1);
      }
    }
    if (6 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_res10,&local_a8);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = true;
  }
  goto LAB_14ae06b53;
  while (pFVar18 = (FName *)&pFVar18[2].Number, pFVar18 != pFVar1) {
LAB_14ae06910:
    if ((*pFVar18 == local_e8.PackageName) && (pFVar18[1] == local_e8.AssetName)) {
      if ((char)pFVar18[2].ComparisonIndex.Value == '\0') {
        if (1 < (byte)LogMetaSound._0_1_) {
          FTopLevelAssetPath::ToString(&local_e8,&local_b8);
          ::FName::ToString(&local_res10,&local_c8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        bVar5 = false;
        goto LAB_14ae06aa2;
      }
      break;
    }
  }
LAB_14ae06928:
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  pFVar14 = (FMetasoundFrontendInterface *)(**(code **)(*plVar12 + 8))(plVar12);
  if (local_158.Data <= pFVar14) {
    if (pFVar14 < (FMetasoundFrontendInterface *)(local_158.Data + (longlong)local_150._4_4_ * 0x60)
       ) {
      local_170 = (longlong)(int)local_150;
      local_168 = 0x60;
      local_180 = (FMetasoundFrontendInterface *)local_158.Data;
      local_188 = pFVar14;
      local_178 = (longlong)local_150._4_4_;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
  }
  iVar8 = (int)local_150;
  if ((int)local_150 == local_150._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&local_158,(int *)((longlong)&local_150 + 4));
  }
  local_150._0_4_ = iVar8 + 1;
  FMetasoundFrontendInterface::FMetasoundFrontendInterface
            ((FMetasoundFrontendInterface *)(local_158.Data + (longlong)iVar8 * 0x60),pFVar14);
  local_98._0_8_ = local_158.Data;
  local_98._8_4_ = (int)local_150;
  local_98._12_4_ = local_150._4_4_;
  local_150 = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_98._16_8_ = (FMetasoundFrontendInterface *)0x0;
  local_98._24_4_ = 0;
  local_98._28_4_ = 0;
  local_98._32_8_ = 0;
  local_50 = (longlong *)0x0;
  local_48 = (FMetaSoundFrontendDocumentBuilder *)0x0;
  DestructItems<FMetasoundFrontendInterface,int>((FMetasoundFrontendInterface *)0x0,0);
  bVar5 = ModifyInterfaces(this,(FModifyInterfaceOptions *)local_98);
  if (local_98._32_8_ != 0) {
    plVar16 = (longlong *)(local_98 + 0x30);
    if (local_50 != (longlong *)0x0) {
      plVar16 = local_50;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)local_98._16_8_,local_98._24_4_);
  if ((FMetasoundFrontendInterface *)local_98._16_8_ != (FMetasoundFrontendInterface *)0x0) {
    FMemory::Free((void *)local_98._16_8_);
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)local_98._0_8_,local_98._8_4_);
  if ((FMetasoundFrontendInterface *)local_98._0_8_ != (FMetasoundFrontendInterface *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)local_158.Data,(int)local_150);
  if ((FMetasoundFrontendInterface *)local_158.Data != (FMetasoundFrontendInterface *)0x0) {
    FMemory::Free(local_158.Data);
  }
LAB_14ae06aa2:
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
LAB_14ae06b53:
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_148,(int)local_140);
  if (local_148 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_148);
  }
  return bVar5;
}

// RemoveNamedEdges @ 14ae06c10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveNamedEdges
          (FMetaSoundFrontendDocumentBuilder *this,
          TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
          *param_1,TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *param_2,
          FGuid *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  IDocumentCache *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  FGuid *pFVar16;
  undefined8 *puVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  bool local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165 [5];
  ForAnyElementType local_160;
  undefined8 local_158;
  longlong *local_150;
  int local_148;
  int local_144;
  longlong *local_138;
  TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  pFVar16 = param_3;
  if (param_3 == (FGuid *)0x0) {
    pFVar16 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pIVar4 = (this->DocumentCache).Object;
  local_150 = (longlong *)(**(code **)(*(longlong *)pIVar4 + 0x40))(pIVar4,pFVar16);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pIVar4 = (this->DocumentCache).Object;
  local_138 = (longlong *)(**(code **)(*(longlong *)pIVar4 + 0x50))(pIVar4,pFVar16);
  iStack_128 = 0;
  if (param_2 != (TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *)0x0) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  puVar2 = &(param_1->Elements).field_0x10;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  uStack_124 = 1;
  iVar12 = *(int *)&(param_1->Elements).field_0x28;
  local_168 = true;
  local_110 = 0;
  iStack_114 = iStack_128;
  if (iVar12 != 0) {
    puVar22 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar19 = *puVar22;
    local_110 = 0;
    iStack_128 = 0;
    while (uVar19 == 0) {
      lVar14 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      iStack_114 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_14ae06d8e;
      uVar19 = puVar22[lVar14 + 1];
    }
    uStack_124 = -uVar19 & uVar19;
    uVar1 = (ulonglong)uStack_124 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_148 = (int)lVar14;
    iStack_114 = local_110 + -1 + local_148;
    if (iVar12 < iStack_114) {
      iStack_114 = iVar12;
    }
  }
LAB_14ae06d8e:
  uVar19 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_10c = local_4c;
  uVar23 = uVar19 & 0xffffffe0;
  iStack_108 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_118 = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_124,iStack_128);
  TStack_f8.CurrentBitIndex = iStack_114;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_f8._28_4_ = local_4c;
  TStack_f8.BaseBitIndex = local_110;
  uStack_d8 = CONCAT44(uStack_104,iStack_108);
  local_130 = param_1;
  local_120 = puVar2;
  local_100 = param_1;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar19 < 0) || (iVar12 < (int)uVar19)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar19 != uVar3) {
    puVar21 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar2;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar15;
      uVar23 = uVar23 + 0x20;
      iVar15 = iVar15 + 1;
      uVar19 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14ae06e90;
      uVar19 = *(uint *)(puVar21 + lVar14 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_144 = (int)lVar14;
    uVar19 = local_144 + -1 + uVar23;
    if ((int)uVar3 < (int)uVar19) {
      uVar19 = uVar3;
    }
  }
LAB_14ae06e90:
  while( true ) {
    pTVar8 = local_100;
    if (*(int *)&(local_100->Elements).field_0x8 - *(int *)&(local_100->Elements).field_0x34 !=
        (int)uStack_d8) {
      local_167 = 0;
      `TSparseArray<TSparseSetElement<Metasound::Frontend::FNamedEdge>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_167);
    }
    if (((TStack_f8.CurrentBitIndex == uVar19) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == param_1))
    break;
    puVar17 = (undefined8 *)
              (*(longlong *)&pTVar8->Elements + (longlong)TStack_f8.CurrentBitIndex * 0x38);
    lVar14 = (**(code **)(*local_150 + 0x50))(local_150,puVar17,puVar17[2]);
    lVar13 = (**(code **)(*local_150 + 0x40))(local_150,puVar17 + 3,puVar17[5]);
    if ((lVar14 != 0) && (lVar13 != 0)) {
      local_b8 = *(undefined8 *)(lVar14 + 0x10);
      uStack_b0 = *(undefined8 *)(lVar14 + 0x18);
      local_c8 = *puVar17;
      uStack_c0 = puVar17[1];
      local_98 = *(undefined4 *)(lVar13 + 0x10);
      uStack_94 = *(undefined4 *)(lVar13 + 0x14);
      uStack_90 = *(undefined4 *)(lVar13 + 0x18);
      uStack_8c = *(undefined4 *)(lVar13 + 0x1c);
      local_a8 = *(undefined4 *)(puVar17 + 3);
      uStack_a4 = *(undefined4 *)((longlong)puVar17 + 0x1c);
      uStack_a0 = *(undefined4 *)(puVar17 + 4);
      uStack_9c = *(undefined4 *)((longlong)puVar17 + 0x24);
      cVar11 = (**(code **)(*local_138 + 8))(local_138,&local_c8);
      if (cVar11 == '\0') {
        local_168 = false;
        if (2 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString((FName *)(puVar17 + 5),local_78);
          ::FName::ToString((FName *)(puVar17 + 2),&local_88);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if (((local_160.Data <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 <
             local_160.Data + (longlong)local_158._4_4_ * 0x40)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        iVar12 = (int)local_158;
        if ((int)local_158 == local_158._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x440,&local_160,(int *)((longlong)&local_158 + 4));
        }
        local_158 = CONCAT44(local_158._4_4_,iVar12 + 1);
        lVar14 = (longlong)iVar12 * 0x40;
        *(undefined8 *)(local_160.Data + lVar14) = local_c8;
        *(undefined8 *)(local_160.Data + lVar14 + 8) = uStack_c0;
        *(undefined8 *)(local_160.Data + lVar14 + 0x10) = local_b8;
        *(undefined8 *)(local_160.Data + lVar14 + 0x10 + 8) = uStack_b0;
        *(ulonglong *)(local_160.Data + lVar14 + 0x20) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)(local_160.Data + lVar14 + 0x20 + 8) = CONCAT44(uStack_9c,uStack_a0);
        *(ulonglong *)(local_160.Data + lVar14 + 0x30) = CONCAT44(uStack_94,local_98);
        *(ulonglong *)(local_160.Data + lVar14 + 0x30 + 8) = CONCAT44(uStack_8c,uStack_90);
      }
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  }
  iVar12 = (int)local_158;
  pFVar20 = local_160.Data + (longlong)(int)local_158 * 0x40;
  FVar18.Data = local_160.Data;
  while( true ) {
    if ((int)local_158 != iVar12) {
      local_166 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendEdge,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_166);
    }
    if (FVar18.Data == pFVar20) break;
    bVar9 = RemoveEdgeToNodeInput
                      (this,(FGuid *)(FVar18.Data + 0x20),(FGuid *)(FVar18.Data + 0x30),param_3);
    if ((bVar9) ||
       (local_165[0] = bVar9,
       bVar9 = `FMetaSoundFrontendDocumentBuilder::RemoveNamedEdges'::__l40::<lambda_1>::operator()
                         (local_165), bVar9)) {
      if (param_2 != (TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar5 = (param_2->AllocatorInstance).Data;
        if (((pFVar5 <= FVar18.Data) && (FVar18.Data < pFVar5 + (longlong)param_2->ArrayMax * 0x40))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        iVar15 = param_2->ArrayNum;
        if (iVar15 == param_2->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x440,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar15 + 1;
        uVar7 = *(undefined8 *)(FVar18.Data + 8);
        pFVar5 = (param_2->AllocatorInstance).Data;
        lVar14 = (longlong)iVar15 * 0x40;
        *(undefined8 *)(pFVar5 + lVar14) = *(undefined8 *)FVar18.Data;
        *(undefined8 *)(pFVar5 + lVar14 + 8) = uVar7;
        uVar7 = *(undefined8 *)(FVar18.Data + 0x18);
        *(undefined8 *)(pFVar5 + lVar14 + 0x10) = *(undefined8 *)(FVar18.Data + 0x10);
        *(undefined8 *)(pFVar5 + lVar14 + 0x10 + 8) = uVar7;
        uVar7 = *(undefined8 *)(FVar18.Data + 0x28);
        *(undefined8 *)(pFVar5 + lVar14 + 0x20) = *(undefined8 *)(FVar18.Data + 0x20);
        *(undefined8 *)(pFVar5 + lVar14 + 0x20 + 8) = uVar7;
        uVar7 = *(undefined8 *)(FVar18.Data + 0x38);
        *(undefined8 *)(pFVar5 + lVar14 + 0x30) = *(undefined8 *)(FVar18.Data + 0x30);
        *(undefined8 *)(pFVar5 + lVar14 + 0x30 + 8) = uVar7;
      }
      FVar18.Data = FVar18.Data + 0x40;
    }
    else {
      local_168 = false;
      FVar18.Data = FVar18.Data + 0x40;
    }
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  return local_168;
}

// RemoveNode @ 14ae07220

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveNode
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  uint uVar1;
  int iVar2;
  IDocumentCache *pIVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong *plVar8;
  uint *puVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendGraph *this_00;
  longlong lVar11;
  FGraphModifyDelegates *pFVar12;
  uint uVar13;
  FGuid *pFVar14;
  FGuid *pFVar15;
  bool bVar16;
  EMetasoundFrontendClassType local_res18 [8];
  uint local_res20;
  EMetasoundFrontendClassType *local_58;
  FGuid *local_50;
  
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetaSoundFrontendDocumentBuilder::RemoveNode");
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5446,"FMetaSoundFrontendDocumentBuilder::RemoveNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
               ,0x1546);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5446);
  }
  pFVar15 = param_2;
  if (param_2 == (FGuid *)0x0) {
    pFVar15 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pIVar3 = (this->DocumentCache).Object;
  plVar8 = (longlong *)(**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,pFVar15);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pIVar3 = (this->DocumentCache).Object;
  (**(code **)(*(longlong *)pIVar3 + 0x50))(pIVar3,pFVar15);
  puVar9 = (uint *)(**(code **)(*plVar8 + 0x18))(plVar8,param_1);
  if (puVar9 == (uint *)0x0) {
    bVar6 = false;
  }
  else {
    uVar1 = *puVar9;
    pFVar10 = GetDocumentChecked(this);
    this_00 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar10->RootGraph,pFVar15);
    local_res20 = ~uVar1 >> 0x1f;
    uVar13 = 0;
    if ((int)uVar1 < (this_00->Nodes).ArrayNum) {
      uVar13 = local_res20;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar14 = (FGuid *)((this_00->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88);
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pIVar3 = (this->DocumentCache).Object;
    lVar11 = (**(code **)(*(longlong *)pIVar3 + 0x18))(pIVar3,pFVar14 + 1);
    if ((lVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodeClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0x1558,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    local_res18[0] =
         FMetasoundFrontendClassMetadata::GetType
                   ((FMetasoundFrontendClassMetadata *)(lVar11 + 0x18));
    if (((((local_res18[0] == Variable) || (local_res18[0] == VariableDeferredAccessor)) ||
         (local_res18[0] == VariableAccessor)) || (local_res18[0] == VariableMutator)) &&
       (bVar6 = UnlinkVariableNode(this,pFVar14,pFVar15), !bVar6)) {
      local_58 = local_res18;
      local_50 = param_1;
      `FMetaSoundFrontendDocumentBuilder::RemoveNode'::__l15::<lambda_1>::operator()(&local_58);
    }
    RemoveEdges(this,pFVar14,param_2);
    iVar2 = (this_00->Nodes).ArrayNum;
    if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar12 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                        ((this->DocumentDelegates).Object,pFVar15);
    TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy>::Broadcast
              (&(pFVar12->NodeDelegates).OnRemoveSwappingNode,uVar1,iVar2 + -1);
    uVar13 = 0;
    if ((int)uVar1 < (this_00->Nodes).ArrayNum) {
      uVar13 = local_res20;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    TArray<FMetasoundFrontendNode,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&this_00->Nodes,uVar1);
    bVar6 = true;
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar6;
}

// RemoveNodeInputDefault @ 14ae075b0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveNodeInputDefault
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,FGuid *param_3)

{
  uint uVar1;
  IDocumentCache *pIVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong *plVar9;
  uint *puVar10;
  FMetasoundFrontendDocument *pFVar11;
  FMetasoundFrontendGraph *pFVar12;
  FDocumentModifyDelegates *this_00;
  FGraphModifyDelegates *pFVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar9 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,param_3);
  puVar10 = (uint *)(**(code **)(*plVar9 + 0x18))(plVar9,param_1);
  if (puVar10 == (uint *)0x0) {
    return false;
  }
  pFVar11 = GetDocumentChecked(this);
  pFVar12 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar11->RootGraph,param_3);
  uVar1 = *puVar10;
  uVar14 = 0;
  if ((int)uVar1 < (pFVar12->Nodes).ArrayNum) {
    uVar14 = ~uVar1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar3 = (pFVar12->Nodes).AllocatorInstance.Data;
  lVar4 = *(longlong *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x28);
  lVar15 = (longlong)*(int *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x30) * 0x20 + lVar4;
  if (lVar4 == lVar15) {
    return false;
  }
  lVar18 = lVar4;
  while (((param_2->A != *(uint *)(lVar18 + 0x10) || param_2->D != *(uint *)(lVar18 + 0x1c)) ||
         param_2->C != *(uint *)(lVar18 + 0x18)) || param_2->B != *(uint *)(lVar18 + 0x14)) {
    lVar18 = lVar18 + 0x20;
    if (lVar18 == lVar15) {
      return false;
    }
  }
  iVar17 = (int)(lVar18 - lVar4 >> 5);
  if (iVar17 == -1) {
    return false;
  }
  puVar5 = *(uint **)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x58);
  if (puVar5 == puVar5 + (longlong)*(int *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x60) * 0x1a) {
    return false;
  }
  puVar16 = puVar5;
  while (((param_2->D != puVar16[3] || param_2->C != puVar16[2]) || param_2->B != puVar16[1]) ||
         param_2->A != *puVar16) {
    puVar16 = puVar16 + 0x1a;
    if (puVar16 == puVar5 + (longlong)*(int *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x60) * 0x1a)
    {
      return false;
    }
  }
  uVar14 = (uint)(((longlong)puVar16 - (longlong)puVar5) / 0x68);
  if (uVar14 == 0xffffffff) {
    return false;
  }
  this_00 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                      (&this->DocumentDelegates);
  pFVar13 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                      (this_00,param_3);
  uVar19 = *(int *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x60) - 1;
  TMulticastDelegate<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::Broadcast
            (&(pFVar13->NodeDelegates).OnRemovingNodeInputLiteral,*puVar10,iVar17,uVar19);
  if (uVar14 != uVar19) {
    TMulticastDelegate<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::Broadcast
              (&(pFVar13->NodeDelegates).OnRemovingNodeInputLiteral,*puVar10,iVar17,uVar14);
  }
  uVar20 = 0;
  if ((int)uVar14 < *(int *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x60)) {
    uVar20 = ~uVar14 >> 0x1f;
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
  TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_> *)
             (pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x58),uVar14);
  if (uVar14 != uVar19) {
    TMulticastDelegate<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::Broadcast
              (&(pFVar13->NodeDelegates).OnNodeInputLiteralSet,*puVar10,iVar17,uVar14);
  }
  return true;
}

// RemoveSwapDependencyInternal @ 14ae07870

void __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveSwapDependencyInternal
          (FMetaSoundFrontendDocumentBuilder *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetasoundFrontendDocument *pFVar5;
  
  pFVar5 = GetDocumentChecked(this);
  iVar1 = (pFVar5->Dependencies).ArrayNum;
  if ((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy>::Broadcast
            (&((this->DocumentDelegates).Object)->OnRemoveSwappingDependency,param_1,iVar1 + -1);
  uVar4 = 0;
  if (param_1 < (pFVar5->Dependencies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (&pFVar5->Dependencies,param_1);
  return;
}

// RemoveUnusedDependencies @ 14ae07bf0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RemoveUnusedDependencies(FMetaSoundFrontendDocumentBuilder *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FMetasoundFrontendDocument *pFVar6;
  FMetasoundFrontendDocument *pFVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  char local_res10 [8];
  code *local_58;
  FMetaSoundFrontendDocumentBuilder **local_50;
  FMetaSoundFrontendDocumentBuilder *local_48;
  FScriptContainerElement *local_40;
  char *local_38;
  
  pFVar6 = GetConstDocumentChecked(this);
  bVar10 = false;
  uVar8 = (pFVar6->Dependencies).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 * 0x90;
    bVar10 = false;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (pFVar6->Dependencies).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (pFVar6->Dependencies).AllocatorInstance.Data;
      local_res10[0] = '\0';
      pFVar7 = GetConstDocumentChecked(this);
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::IsDependencyReferenced'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
                 ::Call;
      local_38 = local_res10;
      local_50 = &local_48;
      local_48 = this;
      local_40 = pFVar1 + lVar9 + 8;
      FMetasoundFrontendGraphClass::IterateGraphPages
                (&pFVar7->RootGraph,
                 (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *)&local_58);
      if (local_res10[0] == '\0') {
        RemoveSwapDependencyInternal(this,uVar8);
        bVar10 = true;
      }
      lVar9 = lVar9 + -0x90;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return bVar10;
}

// RenameRootGraphClass @ 14ae07d50

bool __thiscall
FMetaSoundFrontendDocumentBuilder::RenameRootGraphClass
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassName *param_1)

{
  return false;
}

// ReplaceDependency @ 14ae07d60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ReplaceDependency
          (FMetaSoundFrontendDocumentBuilder *this,FNodeClassRegistryKey *param_1,
          FNodeClassRegistryKey *param_2,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_4)

{
  uint uVar1;
  IDocumentCache *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  longlong lVar10;
  FMetasoundFrontendDocument *pFVar11;
  int *piVar12;
  INodeClassRegistry *pIVar13;
  FMetasoundFrontendNode *pFVar14;
  longlong *plVar15;
  uint *puVar16;
  FMetasoundFrontendGraph *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  FGuid *pFVar20;
  FGuid *pFVar21;
  FNodeInstanceReplacementData *pFVar22;
  byte local_res8 [8];
  byte local_208;
  undefined1 local_207;
  undefined1 local_206 [6];
  FNodeInstanceReplacementData *local_200;
  undefined8 local_1f8;
  int local_1f0;
  uint local_1ec;
  FMetasoundFrontendClass local_1e8;
  FMetaSoundFrontendDocumentBuilder *local_158;
  FNodeClassRegistryKey *local_150;
  FMetaSoundFrontendDocumentBuilder *local_148;
  FNodeInstanceReplacementData **local_140;
  code *local_138;
  FMetaSoundFrontendDocumentBuilder **local_130;
  code *local_128;
  FMetaSoundFrontendDocumentBuilder **local_120;
  code *local_118;
  code ***local_110;
  code *local_108;
  FMetaSoundFrontendDocumentBuilder **local_100;
  code **local_f8;
  FMetaSoundFrontendDocumentBuilder *local_f0;
  code **local_e8;
  FMetaSoundFrontendDocumentBuilder *local_e0;
  byte *local_d8;
  TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *local_d0;
  int *local_c8;
  FString local_c0;
  FGuid local_a8;
  FNodeClassRegistryKey local_98;
  FNodeClassRegistryKey local_70;
  
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  pIVar2 = (this->DocumentCache).Object;
  lVar10 = (**(code **)(*(longlong *)pIVar2 + 0x20))(pIVar2,param_1);
  if (lVar10 == 0) {
    return false;
  }
  local_200 = (FNodeInstanceReplacementData *)0x0;
  local_1f8 = 0;
  local_140 = &local_200;
  local_130 = &local_158;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::ReplaceDependency'::__l2::<lambda_2>,bool,FMetasoundFrontendNode_const_&>
              ::Call;
  local_120 = &local_148;
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::ReplaceDependency'::__l2::<lambda_1>,void,FMetasoundFrontendClass_const_&,FMetasoundFrontendNode_const_&,FGuid_const_&>
              ::Call;
  local_e8 = &local_128;
  local_110 = &local_f8;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::IterateNodesByPredicate'::__l5::<lambda_1>,void,FMetasoundFrontendGraph_&>
              ::Call;
  local_158 = this;
  local_150 = param_1;
  local_148 = this;
  local_f8 = &local_138;
  local_f0 = this;
  pFVar11 = GetDocumentChecked(this);
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&pFVar11->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_118
            );
  local_res8[0] = 0;
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_98,param_1->Type,&param_1->ClassName,&param_1->Version);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  piVar12 = (int *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x30))();
  if (piVar12 != (int *)0x0) {
    pFVar11 = GetDocumentChecked(this);
    local_1f0 = *piVar12;
    local_d8 = local_res8;
    local_d0 = &pFVar11->Dependencies;
    local_res8[0] = 1;
    local_c8 = &local_1f0;
    local_100 = &local_e0;
    local_108 = UE::Core::Private::Function::
                TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::RemoveDependency'::__l5::<lambda_1>,void,FMetasoundFrontendGraph_&>
                ::Call;
    local_e0 = this;
    FMetasoundFrontendGraphClass::IterateGraphPages
              (&pFVar11->RootGraph,
               (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_108);
    RemoveSwapDependencyInternal(this,local_1f0);
  }
  local_208 = local_res8[0];
  RemoveUnusedDependencies(this);
  iVar6 = (uint)local_1f8;
  pFVar20 = &local_200->PageID;
  pFVar22 = local_200 + (int)(uint)local_1f8;
  while( true ) {
    if ((uint)local_1f8 != iVar6) {
      local_207 = 0;
      `TCheckedPointerIterator<FMetaSoundFrontendDocumentBuilder::FNodeInstanceReplacementData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_207);
    }
    if ((FNodeInstanceReplacementData *)(pFVar20 + -0xd) == pFVar22) break;
    uVar4._0_4_ = pFVar20[-1].A;
    uVar4._4_4_ = pFVar20[-1].B;
    uVar5._0_4_ = pFVar20[-1].C;
    uVar5._4_4_ = pFVar20[-1].D;
    Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
              (&local_70,External,&param_2->ClassName,(param_2->Version).Major,
               (param_2->Version).Minor);
    local_1e8._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
    local_1e8.ID = Metasound::FrontendInvalidID;
    FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_1e8.Metadata);
    local_1e8.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Interface.Inputs.ArrayNum = 0;
    local_1e8.Interface.Inputs.ArrayMax = 0;
    local_1e8.Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Interface.Outputs.ArrayNum = 0;
    local_1e8.Interface.Outputs.ArrayMax = 0;
    local_1e8.Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Interface.Environment.ArrayNum = 0;
    local_1e8.Interface.Environment.ArrayMax = 0;
    local_1e8.Interface.ChangeID.A = 0;
    local_1e8.Interface.ChangeID.B = 0;
    local_1e8.Interface.ChangeID.C = 0;
    local_1e8.Interface.ChangeID.D = 0;
    pIVar13 = Metasound::Frontend::INodeClassRegistry::GetChecked();
    cVar9 = (**(code **)((longlong)*pIVar13 + 0x68))(pIVar13,&local_70,&local_1e8);
    if (cVar9 == '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        FMetasoundFrontendClassName::ToString(&param_2->ClassName,&local_c0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      if (local_1e8.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_1e8.Interface.Environment.AllocatorInstance.Data);
      }
      if (local_1e8.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Interface.Outputs.AllocatorInstance.Data);
      }
      DestructItems<FMetasoundFrontendClassInput,int>
                ((FMetasoundFrontendClassInput *)local_1e8.Interface.Inputs.AllocatorInstance.Data,
                 local_1e8.Interface.Inputs.ArrayNum);
      if ((FMetasoundFrontendClassInput *)local_1e8.Interface.Inputs.AllocatorInstance.Data !=
          (FMetasoundFrontendClassInput *)0x0) {
        FMemory::Free(local_1e8.Interface.Inputs.AllocatorInstance.Data);
      }
      pFVar14 = (FMetasoundFrontendNode *)0x0;
    }
    else {
      local_a8._0_8_ = uVar4;
      local_a8._8_8_ = uVar5;
      pFVar14 = AddNodeByClassInternal(this,&local_1e8,&local_a8,pFVar20);
      if (local_1e8.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_1e8.Interface.Environment.AllocatorInstance.Data);
      }
      if (local_1e8.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Interface.Outputs.AllocatorInstance.Data);
      }
      DestructItems<FMetasoundFrontendClassInput,int>
                ((FMetasoundFrontendClassInput *)local_1e8.Interface.Inputs.AllocatorInstance.Data,
                 local_1e8.Interface.Inputs.ArrayNum);
      if ((FMetasoundFrontendClassInput *)local_1e8.Interface.Inputs.AllocatorInstance.Data !=
          (FMetasoundFrontendClassInput *)0x0) {
        FMemory::Free(local_1e8.Interface.Inputs.AllocatorInstance.Data);
      }
    }
    local_208 = local_208 | pFVar14 != (FMetasoundFrontendNode *)0x0;
    pFVar20 = pFVar20 + 0xe;
  }
  uVar19 = (ulonglong)(int)(uint)local_1f8;
  local_1ec = (uint)local_1f8;
  pFVar20 = &local_200->PageID;
  pFVar22 = local_200 + uVar19;
  while( true ) {
    if ((uint)local_1f8 != (int)uVar19) {
      local_206[0] = 0;
      `TCheckedPointerIterator<FMetaSoundFrontendDocumentBuilder::FNodeInstanceReplacementData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_206);
    }
    if ((FNodeInstanceReplacementData *)(pFVar20 + -0xd) == pFVar22) {
      DestructItems<FMetaSoundFrontendDocumentBuilder::FNodeInstanceReplacementData,int>
                (local_200,(uint)local_1f8);
      if (local_200 != (FNodeInstanceReplacementData *)0x0) {
        FMemory::Free(local_200);
      }
      return (bool)local_208;
    }
    pFVar21 = pFVar20;
    if (pFVar20 == (FGuid *)0x0) {
      pFVar21 = &this->BuildPageID;
    }
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) break;
    pIVar2 = (this->DocumentCache).Object;
    plVar15 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,pFVar21);
    puVar16 = (uint *)(**(code **)(*plVar15 + 0x18))(plVar15,pFVar20 + -1);
    if (puVar16 != (uint *)0x0) {
      pFVar11 = GetDocumentChecked(this);
      pFVar17 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar11->RootGraph,pFVar21);
      uVar1 = *puVar16;
      uVar18 = 0;
      if ((int)uVar1 < (pFVar17->Nodes).ArrayNum) {
        uVar18 = ~uVar1 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pFVar14 = (FMetasoundFrontendNode *)
                ((pFVar17->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88);
      if (pFVar14 != (FMetasoundFrontendNode *)0x0) {
        if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        pIVar2 = (this->DocumentCache).Object;
        lVar10 = (**(code **)(*(longlong *)pIVar2 + 0x18))(pIVar2,&pFVar14->ClassID);
        if (lVar10 != 0) {
          ApplyNodeInstanceReplacementData
                    (this,pFVar14,(FNodeInstanceReplacementData *)(pFVar20 + -0xd),param_3,param_4);
        }
      }
    }
    uVar19 = (ulonglong)local_1ec;
    pFVar20 = pFVar20 + 0xe;
  }
  pcVar3 = (code *)swi(3);
  uVar8 = (*pcVar3)();
  return (bool)uVar8;
}

// SetAccessFlags @ 14ae08320

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
FMetaSoundFrontendDocumentBuilder::SetAccessFlags
          (FMetaSoundFrontendDocumentBuilder *this,EMetasoundFrontendClassAccessFlags param_1)

{
  FMetasoundFrontendDocument *pFVar1;
  
  pFVar1 = GetDocumentChecked(this);
  FMetasoundFrontendClassMetadata::SetAccessFlags
            ((FMetasoundFrontendClassMetadata *)&(pFVar1->RootGraph)._padding_,param_1);
  return;
}

// SetGraphInputAccessType @ 14ae085a0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphInputAccessType
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,
          EMetasoundFrontendVertexAccessType param_2)

{
  FMetasoundFrontendClassInput *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  uint *puVar7;
  FMetasoundFrontendDocument *pFVar8;
  FMetasoundFrontendClassInterface *pFVar9;
  FDocumentModifyDelegates *pFVar10;
  uint uVar11;
  EMetasoundFrontendVertexAccessType local_res18 [2];
  EMetasoundFrontendVertexAccessType *local_res20;
  code *local_58;
  FMetaSoundFrontendDocumentBuilder **local_50;
  FMetaSoundFrontendDocumentBuilder *local_48;
  FMetasoundFrontendDocument *local_40;
  FMetasoundFrontendClassInput *local_38;
  EMetasoundFrontendVertexAccessType *local_30;
  
  local_res18[0] = param_2;
  if (param_2 == Unset) {
    local_res20 = local_res18;
    bVar4 = `FMetaSoundFrontendDocumentBuilder::SetGraphInputAccessType'::__l3::<lambda_1>::
            operator()(&local_res20);
    if (!bVar4) {
      return false;
    }
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  plVar6 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  puVar7 = (uint *)(**(code **)(*plVar6 + 0x10))(plVar6,param_1);
  if (puVar7 == (uint *)0x0) {
    return false;
  }
  pFVar8 = GetDocumentChecked(this);
  pFVar9 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar8->RootGraph);
  uVar2 = *puVar7;
  uVar11 = 0;
  if ((int)uVar2 < (pFVar9->Inputs).ArrayNum) {
    uVar11 = ~uVar2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar1 = (FMetasoundFrontendClassInput *)
           ((pFVar9->Inputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x48);
  if ((EMetasoundFrontendVertexAccessType)pFVar1->_padding_ != local_res18[0]) {
    *(EMetasoundFrontendVertexAccessType *)&pFVar1->_padding_ = local_res18[0];
    local_30 = local_res18;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SetGraphInputAccessType'::__l11::<lambda_2>,void,FMetasoundFrontendGraph_&>
               ::Call;
    local_48 = this;
    local_40 = pFVar8;
    local_38 = pFVar1;
    FMetasoundFrontendGraphClass::IterateGraphPages
              (&pFVar8->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_58
              );
    bVar4 = ConformGraphInputNodeToClass(this,pFVar1);
    if (!bVar4) {
      return false;
    }
    pFVar10 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                        (&this->DocumentDelegates);
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&(pFVar10->InterfaceDelegates).OnInputIsConstructorPinChanged,*puVar7);
  }
  return true;
}

// SetGraphInputDataType @ 14ae08740

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphInputDataType
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FName param_2)

{
  FMetasoundFrontendClassInput *this_00;
  uint uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  IDataTypeRegistry *pIVar6;
  longlong *plVar7;
  uint *puVar8;
  FMetasoundFrontendDocument *pFVar9;
  FMetasoundFrontendClassInterface *pFVar10;
  FDocumentModifyDelegates *pFVar11;
  uint uVar12;
  FName local_res18 [2];
  code *local_48;
  FMetaSoundFrontendDocumentBuilder **local_40;
  FMetaSoundFrontendDocumentBuilder *local_38;
  FName *local_30;
  FMetasoundFrontendClassInput *local_28;
  
  local_res18[0] = param_2;
  pIVar6 = Metasound::Frontend::IDataTypeRegistry::Get();
  cVar3 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,local_res18);
  if (cVar3 != '\0') {
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar7 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
    puVar8 = (uint *)(**(code **)(*plVar7 + 0x10))(plVar7,param_1);
    if (puVar8 == (uint *)0x0) {
      return false;
    }
    pFVar9 = GetDocumentChecked(this);
    pFVar10 = FMetasoundFrontendClass::GetDefaultInterface
                        ((FMetasoundFrontendClass *)&pFVar9->RootGraph);
    uVar1 = *puVar8;
    uVar12 = 0;
    if ((int)uVar1 < (pFVar10->Inputs).ArrayNum) {
      uVar12 = ~uVar1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    this_00 = (FMetasoundFrontendClassInput *)
              ((pFVar10->Inputs).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x48);
    if ((FName)this_00->_padding_ != local_res18[0]) {
      this_00->_padding_ = (longlong)local_res18[0];
      FMetasoundFrontendClassInput::ResetDefaults(this_00,true);
      local_30 = local_res18;
      local_40 = &local_38;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SetGraphInputDataType'::__l11::<lambda_1>,void,FMetasoundFrontendGraph_&>
                 ::Call;
      local_38 = this;
      local_28 = this_00;
      FMetasoundFrontendGraphClass::IterateGraphPages
                (&pFVar9->RootGraph,
                 (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_48);
      bVar4 = ConformGraphInputNodeToClass(this,this_00);
      if (!bVar4) {
        return false;
      }
      pFVar11 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                          (&this->DocumentDelegates);
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pFVar11->InterfaceDelegates).OnInputDefaultChanged,*puVar8);
      pFVar11 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                          (&this->DocumentDelegates);
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pFVar11->InterfaceDelegates).OnInputDataTypeChanged,*puVar8);
      RemoveUnusedDependencies(this);
    }
  }
  return true;
}

// SetGraphInputDefault @ 14ae08920

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphInputDefault
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FMetasoundFrontendLiteral *param_2,
          FGuid *param_3)

{
  FMetasoundFrontendClassInput *this_00;
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  FMetasoundFrontendDocument *pFVar8;
  FMetasoundFrontendClassInterface *pFVar9;
  IDataTypeRegistry *pIVar10;
  FMetasoundFrontendLiteral *this_01;
  FName *pFVar11;
  longlong lVar12;
  uint uVar13;
  char local_78 [8];
  code *local_70;
  char **local_68;
  FGuid local_60;
  FString local_50;
  char *local_40;
  FGuid *local_38;
  FMetasoundFrontendLiteral *local_30;
  
  pFVar8 = GetDocumentChecked(this);
  pFVar9 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar8->RootGraph);
  pFVar2 = (FName *)(pFVar9->Inputs).AllocatorInstance.Data;
  iVar1 = (pFVar9->Inputs).ArrayNum;
  pFVar11 = pFVar2;
  do {
    if (pFVar11 == pFVar2 + (longlong)iVar1 * 9) {
LAB_14ae08b59:
      FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(param_2);
      return false;
    }
    if (*pFVar11 == param_1) {
      lVar12 = ((longlong)pFVar11 - (longlong)pFVar2) / 0x12 +
               ((longlong)pFVar11 - (longlong)pFVar2 >> 0x3f);
      uVar13 = (int)(lVar12 >> 2) - (int)(lVar12 >> 0x3f);
      if (uVar13 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar13 < iVar1) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        this_00 = (FMetasoundFrontendClassInput *)
                  ((pFVar9->Inputs).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x48);
        pIVar10 = Metasound::Frontend::IDataTypeRegistry::Get();
        pcVar3 = *(code **)((longlong)*pIVar10 + 0x50);
        FMetasoundFrontendLiteral::GetType(param_2);
        cVar6 = (*pcVar3)(pIVar10,&this_00->_padding_);
        if (cVar6 != '\0') {
          if (param_3 == (FGuid *)0x0) {
            param_3 = &this->BuildPageID;
          }
          local_60.A = param_3->A;
          local_60.B = param_3->B;
          local_60.C = param_3->C;
          local_60.D = param_3->D;
          local_40 = local_78;
          local_78[0] = '\0';
          local_38 = &local_60;
          local_68 = &local_40;
          local_70 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SetGraphInputDefault'::__l8::<lambda_2>,void,FGuid_const_&,FMetasoundFrontendLiteral_&>
                     ::Call;
          local_30 = param_2;
          FMetasoundFrontendClassInput::IterateDefaults
                    (this_00,(TFunctionRef<void___cdecl(FGuid_const_&,FMetasoundFrontendLiteral_&)>
                              *)&local_70);
          if (local_78[0] == '\0') {
            this_01 = FMetasoundFrontendClassInput::AddDefault(this_00,&local_60);
            FMetasoundFrontendLiteral::operator=(this_01,param_2);
          }
          if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                    (&(((this->DocumentDelegates).Object)->InterfaceDelegates).OnInputDefaultChanged
                     ,uVar13);
          SetGraphInputInheritsDefault(this,param_1,false,true);
          FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(param_2);
          return true;
        }
        if (1 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString((FName *)&this_00->_padding_,&local_50);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
      goto LAB_14ae08b59;
    }
    pFVar11 = pFVar11 + 9;
  } while( true );
}

// SetGraphInputDefaults @ 14ae08b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphInputDefaults
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,
          TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FMetaSoundFrontendDocumentBuilder *this_00;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  FMetasoundFrontendDocument *pFVar9;
  FMetasoundFrontendClassInterface *pFVar10;
  IDataTypeRegistry *pIVar11;
  ulonglong uVar12;
  FName *pFVar13;
  longlong lVar14;
  uint uVar15;
  FMetasoundFrontendLiteral *pFVar16;
  FMetasoundFrontendLiteral *this_01;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [4];
  uint local_d4;
  FMetasoundFrontendClassInput *local_d0;
  FMetaSoundFrontendDocumentBuilder *local_c8;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> local_c0;
  FString local_b0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c8 = this;
  pFVar9 = GetDocumentChecked(this);
  pFVar10 = FMetasoundFrontendClass::GetDefaultInterface
                      ((FMetasoundFrontendClass *)&pFVar9->RootGraph);
  pFVar2 = (FName *)(pFVar10->Inputs).AllocatorInstance.Data;
  iVar1 = (pFVar10->Inputs).ArrayNum;
  pFVar13 = pFVar2;
  do {
    if (pFVar13 == pFVar2 + (longlong)iVar1 * 9) {
      uVar15 = 0xffffffff;
LAB_14ae08bfd:
      if (uVar15 != 0xffffffff) {
        uVar8 = 0;
        if ((int)uVar15 < iVar1) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        this_01 = (FMetasoundFrontendLiteral *)(param_2->AllocatorInstance).Data;
        local_88.MaxBits = 0x80;
        local_68 = 0xffffffff;
        local_98.Data = (FScriptContainerElement *)0x0;
        local_90 = 0;
        local_d0 = (FMetasoundFrontendClassInput *)
                   ((pFVar10->Inputs).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x48);
        local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_d4 = param_2->ArrayNum;
        uVar12 = (ulonglong)(int)local_d4;
        pFVar16 = (FMetasoundFrontendLiteral *)((longlong)this_01 + uVar12 * 0x68);
        local_88.NumBits = 0;
        local_64 = 0;
        local_58 = (void *)0x0;
        local_50 = 0;
        while( true ) {
          if (param_2->ArrayNum != (int)uVar12) {
            local_d8[0] = 0;
            `TCheckedPointerIterator<FMetasoundFrontendClassInputDefault_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_d8);
          }
          if (this_01 == pFVar16) {
            local_c0.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
            (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_c0.ArrayNum = param_2->ArrayNum;
            local_c0.ArrayMax = param_2->ArrayMax;
            param_2->ArrayNum = 0;
            param_2->ArrayMax = 0;
            FMetasoundFrontendClassInput::SetDefaults(local_d0,&local_c0);
            this_00 = local_c8;
            if (((local_c8->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                      (&(((this_00->DocumentDelegates).Object)->InterfaceDelegates).
                        OnInputDefaultChanged,uVar15);
            SetGraphInputInheritsDefault(this_00,param_1,false,true);
            if (local_58 != (void *)0x0) {
              FMemory::Free(local_58);
            }
            if (local_90._4_4_ != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
            }
            local_68 = 0xffffffff;
            local_64 = 0;
            local_88.NumBits = 0;
            if (0x80 < (uint)local_88.MaxBits) {
              local_88.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
            }
            if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
            }
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data);
            }
            DestructItems<FMetasoundFrontendClassInputDefault,int>
                      ((FMetasoundFrontendClassInputDefault *)(param_2->AllocatorInstance).Data,
                       param_2->ArrayNum);
            pFVar3 = (param_2->AllocatorInstance).Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            return true;
          }
          pIVar11 = Metasound::Frontend::IDataTypeRegistry::Get();
          pcVar4 = *(code **)((longlong)*pIVar11 + 0x50);
          FMetasoundFrontendLiteral::GetType(this_01);
          cVar7 = (*pcVar4)(pIVar11);
          if (cVar7 == '\0') break;
          uVar12 = (ulonglong)local_d4;
          this_01 = (FMetasoundFrontendLiteral *)&this_01[1].AsBoolean.ArrayNum;
        }
        if (1 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString((FName *)&local_d0->_padding_,&local_b0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        if (local_90._4_4_ != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
        }
        local_68 = 0xffffffff;
        local_64 = 0;
        local_88.NumBits = 0;
        if (0x80 < (uint)local_88.MaxBits) {
          local_88.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
        }
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
        }
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data);
        }
      }
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                ((FMetasoundFrontendClassInputDefault *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return false;
    }
    if (*pFVar13 == param_1) {
      lVar14 = ((longlong)pFVar13 - (longlong)pFVar2) / 0x12 +
               ((longlong)pFVar13 - (longlong)pFVar2 >> 0x3f);
      uVar15 = (int)(lVar14 >> 2) - (int)(lVar14 >> 0x3f);
      goto LAB_14ae08bfd;
    }
    pFVar13 = pFVar13 + 9;
  } while( true );
}

// SetGraphInputInheritsDefault @ 14ae08f70

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphInputInheritsDefault
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,bool param_2,bool param_3)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FMetasoundFrontendDocument *pFVar5;
  longlong *plVar6;
  int *piVar7;
  FDocumentModifyDelegates *pFVar8;
  bool bVar9;
  FName local_res10;
  FName local_18 [2];
  
  local_res10 = param_1;
  pFVar5 = GetDocumentChecked(this);
  if (((pFVar5->RootGraph).PresetOptions.bIsPreset != false) || (param_3)) {
    this_00 = &(pFVar5->RootGraph).PresetOptions.InputsInheritingDefault;
    if (param_2) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (this_00,local_18,(bool *)&local_res10);
      bVar9 = local_18[0].ComparisonIndex.Value != 0xffffffff;
    }
    else {
      iVar4 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(this_00,param_1);
      bVar9 = 0 < iVar4;
    }
    if (bVar9 != false) {
      if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      plVar6 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
      piVar7 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,param_1);
      if (piVar7 != (int *)0x0) {
        pFVar8 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                           (&this->DocumentDelegates);
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pFVar8->InterfaceDelegates).OnInputInheritsDefaultChanged,*piVar7);
      }
    }
  }
  else {
    bVar9 = false;
  }
  return bVar9;
}

// SetGraphInputName @ 14ae09080

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphInputName
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FName param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  uint *puVar6;
  FMetasoundFrontendDocument *pFVar7;
  FMetasoundFrontendClassInterface *pFVar8;
  uint uVar9;
  FName local_res18 [2];
  code *local_48;
  FMetaSoundFrontendDocumentBuilder **local_40;
  FMetaSoundFrontendDocumentBuilder *local_38;
  FName *local_30;
  FName *local_28;
  
  if (param_1 == param_2) {
    return true;
  }
  local_res18[0] = param_2;
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  puVar6 = (uint *)(**(code **)(*plVar5 + 0x10))(plVar5,param_1);
  if (puVar6 == (uint *)0x0) {
    return false;
  }
  pFVar7 = GetDocumentChecked(this);
  pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar7->RootGraph);
  uVar1 = *puVar6;
  uVar9 = 0;
  if ((int)uVar1 < (pFVar8->Inputs).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_30 = (FName *)((pFVar8->Inputs).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x48);
  *local_30 = local_res18[0];
  local_28 = local_res18;
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SetGraphInputName'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_&>
             ::Call;
  local_38 = this;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&pFVar7->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_48);
  if ((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  TMulticastDelegate<void___cdecl(FName,FName),FDefaultDelegateUserPolicy>::Broadcast
            (&(((this->DocumentDelegates).Object)->InterfaceDelegates).OnInputNameChanged,param_1,
             local_res18[0]);
  return true;
}

// SetGraphInputsInheritingDefault @ 14ae09230

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphInputsInheritingDefault
          (FMetaSoundFrontendDocumentBuilder *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  FMetasoundFrontendDocument *pFVar1;
  
  pFVar1 = GetDocumentChecked(this);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&(pFVar1->RootGraph).PresetOptions.InputsInheritingDefault,param_1);
  return true;
}

// SetGraphOutputAccessType @ 14ae09260

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphOutputAccessType
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,
          EMetasoundFrontendVertexAccessType param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  uint *puVar6;
  FMetasoundFrontendDocument *pFVar7;
  FMetasoundFrontendClassInterface *pFVar8;
  FDocumentModifyDelegates *pFVar9;
  uint uVar10;
  FMetasoundFrontendClassOutput *pFVar11;
  EMetasoundFrontendVertexAccessType local_res18 [2];
  EMetasoundFrontendVertexAccessType *local_res20;
  code *local_48;
  FMetaSoundFrontendDocumentBuilder **local_40;
  FMetaSoundFrontendDocumentBuilder *local_38;
  FMetasoundFrontendClassOutput *local_30;
  EMetasoundFrontendVertexAccessType *local_28;
  
  local_res18[0] = param_2;
  if (param_2 == Unset) {
    local_res20 = local_res18;
    bVar3 = `FMetaSoundFrontendDocumentBuilder::SetGraphOutputAccessType'::__l3::<lambda_1>::
            operator()(&local_res20);
    if (!bVar3) {
      return false;
    }
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  puVar6 = (uint *)(**(code **)(*plVar5 + 0x20))(plVar5,param_1);
  if (puVar6 == (uint *)0x0) {
    return false;
  }
  pFVar7 = GetDocumentChecked(this);
  pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar7->RootGraph);
  uVar1 = *puVar6;
  uVar10 = 0;
  if ((int)uVar1 < (pFVar8->Outputs).ArrayNum) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar11 = (FMetasoundFrontendClassOutput *)
            ((pFVar8->Outputs).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x34);
  if (*(EMetasoundFrontendVertexAccessType *)&pFVar11->field_0x30 != local_res18[0]) {
    *(EMetasoundFrontendVertexAccessType *)&pFVar11->field_0x30 = local_res18[0];
    if (local_res18[0] == Value) {
      local_28 = local_res18;
      local_40 = &local_38;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SetGraphOutputAccessType'::__l14::<lambda_2>,void,FMetasoundFrontendGraph_&>
                 ::Call;
      local_38 = this;
      local_30 = pFVar11;
      FMetasoundFrontendGraphClass::IterateGraphPages
                (&pFVar7->RootGraph,
                 (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_48);
    }
    bVar3 = ConformGraphOutputNodeToClass(this,pFVar11);
    if (!bVar3) {
      return false;
    }
    pFVar9 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                       (&this->DocumentDelegates);
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&(pFVar9->InterfaceDelegates).OnOutputIsConstructorPinChanged,*puVar6);
  }
  return true;
}

// SetGraphOutputDataType @ 14ae09410

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphOutputDataType
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FName param_2)

{
  uint uVar1;
  FName FVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  IDataTypeRegistry *pIVar7;
  longlong *plVar8;
  uint *puVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendClassInterface *pFVar11;
  FDocumentModifyDelegates *pFVar12;
  uint uVar13;
  FMetasoundFrontendClassOutput *pFVar14;
  FName local_res18 [2];
  code *local_48;
  FMetaSoundFrontendDocumentBuilder **local_40;
  FMetaSoundFrontendDocumentBuilder *local_38;
  FMetasoundFrontendClassOutput *local_30;
  FName *local_28;
  
  local_res18[0] = param_2;
  pIVar7 = Metasound::Frontend::IDataTypeRegistry::Get();
  cVar4 = (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7,local_res18);
  if (cVar4 != '\0') {
    if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    plVar8 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
    puVar9 = (uint *)(**(code **)(*plVar8 + 0x20))(plVar8,param_1);
    if (puVar9 != (uint *)0x0) {
      pFVar10 = GetDocumentChecked(this);
      pFVar11 = FMetasoundFrontendClass::GetDefaultInterface
                          ((FMetasoundFrontendClass *)&pFVar10->RootGraph);
      uVar1 = *puVar9;
      uVar13 = 0;
      if ((int)uVar1 < (pFVar11->Outputs).ArrayNum) {
        uVar13 = ~uVar1 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar14 = (FMetasoundFrontendClassOutput *)
                ((pFVar11->Outputs).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x34);
      FVar2.ComparisonIndex.Value = *(uint *)&pFVar14->field_0x8;
      FVar2.Number = *(uint *)&pFVar14->field_0xc;
      if (FVar2 != local_res18[0]) {
        *(uint *)&pFVar14->field_0x8 = local_res18[0].ComparisonIndex.Value;
        *(uint *)&pFVar14->field_0xc = local_res18[0].Number;
        local_28 = local_res18;
        local_40 = &local_38;
        local_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SetGraphOutputDataType'::__l11::<lambda_1>,void,FMetasoundFrontendGraph_&>
                   ::Call;
        local_38 = this;
        local_30 = pFVar14;
        FMetasoundFrontendGraphClass::IterateGraphPages
                  (&pFVar10->RootGraph,
                   (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_48);
        bVar5 = ConformGraphOutputNodeToClass(this,pFVar14);
        if (!bVar5) {
          return false;
        }
        pFVar12 = TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
                            (&this->DocumentDelegates);
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pFVar12->InterfaceDelegates).OnOutputDataTypeChanged,*puVar9);
      }
      return true;
    }
  }
  return false;
}

// SetGraphOutputName @ 14ae095c0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphOutputName
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FName param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong *plVar7;
  uint *puVar8;
  FMetasoundFrontendDocument *pFVar9;
  FMetasoundFrontendClassInterface *pFVar10;
  FGuid *pFVar11;
  FName local_res18 [2];
  code *local_58;
  FMetaSoundFrontendDocumentBuilder **local_50;
  FGuid local_48;
  FMetaSoundFrontendDocumentBuilder *local_38;
  FName *local_30;
  FName *local_28;
  
  if (param_1 == param_2) {
    return true;
  }
  local_res18[0] = param_2;
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  plVar7 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  puVar8 = (uint *)(**(code **)(*plVar7 + 0x20))(plVar7,param_1);
  if (puVar8 == (uint *)0x0) {
    return false;
  }
  pFVar9 = GetDocumentChecked(this);
  pFVar10 = FMetasoundFrontendClass::GetDefaultInterface
                      ((FMetasoundFrontendClass *)&pFVar9->RootGraph);
  pFVar11 = FGuid::NewGuid(&local_48);
  uVar1 = pFVar11->B;
  uVar6 = pFVar11->C;
  uVar3 = pFVar11->D;
  (pFVar10->ChangeID).A = pFVar11->A;
  (pFVar10->ChangeID).B = uVar1;
  (pFVar10->ChangeID).C = uVar6;
  (pFVar10->ChangeID).D = uVar3;
  uVar1 = *puVar8;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar10->Outputs).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  local_30 = (FName *)((pFVar10->Outputs).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x34);
  *local_30 = local_res18[0];
  local_28 = local_res18;
  local_50 = &local_38;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SetGraphOutputName'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_&>
             ::Call;
  local_38 = this;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&pFVar9->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_58);
  if ((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  TMulticastDelegate<void___cdecl(FName,FName),FDefaultDelegateUserPolicy>::Broadcast
            (&(((this->DocumentDelegates).Object)->InterfaceDelegates).OnOutputNameChanged,param_1,
             local_res18[0]);
  return true;
}

// SetGraphVariableDefault @ 14ae09780

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphVariableDefault
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FMetasoundFrontendLiteral *param_2,
          FGuid *param_3)

{
  code *pcVar1;
  EMetasoundFrontendLiteralType EVar2;
  char cVar3;
  FMetasoundFrontendDocument *pFVar4;
  FMetasoundFrontendGraph *pFVar5;
  IDataTypeRegistry *pIVar6;
  FName *pFVar7;
  FName *pFVar8;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  pFVar4 = GetDocumentChecked(this);
  pFVar5 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar4->RootGraph,param_3);
  pFVar8 = (FName *)(pFVar5->Variables).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)(pFVar5->Variables).ArrayNum * 0x17;
  do {
    if (pFVar8 == pFVar7) {
LAB_14ae097e1:
      FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(param_2);
      return false;
    }
    if (*pFVar8 == param_1) {
      pIVar6 = Metasound::Frontend::IDataTypeRegistry::Get();
      pcVar1 = *(code **)((longlong)*pIVar6 + 0x50);
      EVar2 = FMetasoundFrontendLiteral::GetType(param_2);
      cVar3 = (*pcVar1)(pIVar6,pFVar8 + 1,EVar2);
      if (cVar3 != '\0') {
        FMetasoundFrontendLiteral::operator=((FMetasoundFrontendLiteral *)(pFVar8 + 2),param_2);
        FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(param_2);
        return true;
      }
      goto LAB_14ae097e1;
    }
    pFVar8 = pFVar8 + 0x17;
  } while( true );
}

// SetGraphVariableName @ 14ae09860

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetGraphVariableName
          (FMetaSoundFrontendDocumentBuilder *this,FName param_1,FName param_2,FGuid *param_3)

{
  FMetasoundFrontendDocument *pFVar1;
  FMetasoundFrontendGraph *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  
  if (param_3 == (FGuid *)0x0) {
    param_3 = &this->BuildPageID;
  }
  pFVar1 = GetDocumentChecked(this);
  pFVar2 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar1->RootGraph,param_3);
  pFVar3 = (FName *)(pFVar2->Variables).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)(pFVar2->Variables).ArrayNum * 0x17;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return false;
    }
    if (*pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 0x17;
  }
  *pFVar3 = param_2;
  return true;
}

// SetNodeConfiguration @ 14ae09a30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetNodeConfiguration
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *param_2,FGuid *param_3)

{
  FMetasoundFrontendClassMetadata *this_00;
  uint uVar1;
  IDocumentCache *pIVar2;
  FScriptContainerElement *pFVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  EMetasoundFrontendClassType EVar9;
  uint uVar10;
  FMetasoundFrontendDocument *pFVar11;
  FMetasoundFrontendGraph *pFVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong lVar15;
  INodeClassRegistry *pIVar16;
  FNodeClassRegistryKey *pFVar17;
  INodeTemplateRegistry *pIVar18;
  FInstancedStruct *pFVar19;
  FGuid *pFVar20;
  FName local_res8;
  FGuid *local_res10;
  FName local_res20;
  FString local_e8;
  FString local_d8;
  TObjectPtr<UScriptStruct_const_>_u_0 local_c8 [2];
  TObjectPtr<UScriptStruct_const_>_u_0 local_b8;
  uchar *local_b0;
  FInstancedStruct local_a8;
  FInstancedStruct local_98;
  FNodeClassRegistryKey local_88;
  FNodeClassRegistryKey local_60;
  
  pFVar20 = param_3;
  if (param_3 == (FGuid *)0x0) {
    pFVar20 = &this->BuildPageID;
  }
  local_res10 = param_1;
  pFVar11 = GetDocumentChecked(this);
  pFVar12 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar11->RootGraph,pFVar20);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar13 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,pFVar20);
  puVar14 = (uint *)(**(code **)(*plVar13 + 0x18))(plVar13,param_1);
  if (puVar14 == (uint *)0x0) goto LAB_14ae09d01;
  uVar1 = *puVar14;
  uVar10 = 0;
  if ((int)uVar1 < (pFVar12->Nodes).ArrayNum) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar3 = (pFVar12->Nodes).AllocatorInstance.Data;
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pIVar2 = (this->DocumentCache).Object;
  lVar15 = (**(code **)(*(longlong *)pIVar2 + 0x18))
                     (pIVar2,pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x10);
  if (lVar15 == 0) goto LAB_14ae09d01;
  this_00 = (FMetasoundFrontendClassMetadata *)(lVar15 + 0x18);
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_88,this_00);
  pIVar16 = Metasound::Frontend::INodeClassRegistry::Get();
  local_b8 = (param_2->InstancedStruct).ScriptStruct.field0_0x0;
  local_b0 = (param_2->InstancedStruct).StructMemory;
  cVar8 = (**(code **)((longlong)*pIVar16 + 0x70))(pIVar16,&local_88,&local_b8);
  if (cVar8 != '\0') {
    FInstancedStruct::operator=
              ((FInstancedStruct *)(pFVar3 + (longlong)(int)uVar1 * 0x88 + 0x68),
               &param_2->InstancedStruct);
    bVar6 = UpdateNodeInterfaceFromConfiguration(this,local_res10,param_3);
    FInstancedStruct::Reset(&param_2->InstancedStruct);
    return bVar6;
  }
  pFVar17 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_60,this_00);
  EVar9 = FMetasoundFrontendClassMetadata::GetType(this_00);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_c8[0].ObjectPtr);
  if (EVar9 == Template) {
    pIVar18 = Metasound::Frontend::INodeTemplateRegistry::Get();
    plVar13 = (longlong *)(**(code **)((longlong)*pIVar18 + 0x10))(pIVar18,pFVar17);
    if (plVar13 != (longlong *)0x0) {
      pFVar19 = (FInstancedStruct *)(**(code **)(*plVar13 + 0x20))(plVar13,&local_a8);
      FInstancedStruct::operator=((FInstancedStruct *)&local_c8[0].ObjectPtr,pFVar19);
      pFVar19 = &local_a8;
      goto LAB_14ae09c38;
    }
  }
  else {
    pIVar16 = Metasound::Frontend::INodeClassRegistry::GetChecked();
    pFVar19 = (FInstancedStruct *)
              (**(code **)((longlong)*pIVar16 + 0x78))(pIVar16,&local_98,pFVar17);
    FInstancedStruct::operator=((FInstancedStruct *)&local_c8[0].ObjectPtr,pFVar19);
    pFVar19 = &local_98;
LAB_14ae09c38:
    FInstancedStruct::Reset(pFVar19);
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    if (local_c8[0].DebugPtr == (UScriptStruct *)0x0) {
      ::FString::FString(&local_d8,L"None");
    }
    else {
      local_res8 = (FName)(local_c8[0].DebugPtr)->_padding_;
      ::FName::ToString(&local_res8,&local_d8);
    }
    pUVar4 = (param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr;
    if (pUVar4 == (UScriptStruct *)0x0) {
      ::FString::FString(&local_e8,L"None");
    }
    else {
      local_res20 = (FName)pUVar4->_padding_;
      ::FName::ToString(&local_res20,&local_e8);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_c8[0].ObjectPtr);
LAB_14ae09d01:
  FInstancedStruct::Reset(&param_2->InstancedStruct);
  return false;
}

// SetNodeInputDefault @ 14ae09d60

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SetNodeInputDefault
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2,
          FMetasoundFrontendLiteral *param_3,FGuid *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  IDocumentCache *pIVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  uint *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FMetasoundFrontendDocument *pFVar12;
  FMetasoundFrontendGraph *pFVar13;
  longlong *plVar14;
  uint *puVar15;
  FGraphModifyDelegates *pFVar16;
  longlong lVar17;
  uint *puVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FMetasoundFrontendLiteral local_98;
  
  if (param_4 == (FGuid *)0x0) {
    param_4 = &this->BuildPageID;
  }
  pFVar12 = GetDocumentChecked(this);
  pFVar13 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar12->RootGraph,param_4);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pIVar3 = (this->DocumentCache).Object;
  plVar14 = (longlong *)(**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,param_4);
  puVar15 = (uint *)(**(code **)(*plVar14 + 0x18))(plVar14,param_1);
  if (puVar15 != (uint *)0x0) {
    uVar2 = *puVar15;
    uVar10 = 0;
    if ((int)uVar2 < (pFVar13->Nodes).ArrayNum) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pFVar4 = (pFVar13->Nodes).AllocatorInstance.Data;
    lVar5 = *(longlong *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x28);
    lVar17 = (longlong)*(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x30) * 0x20 + lVar5;
    if (lVar5 != lVar17) {
      lVar20 = lVar5;
      do {
        if (((param_2->A == *(uint *)(lVar20 + 0x10) && param_2->D == *(uint *)(lVar20 + 0x1c)) &&
            param_2->C == *(uint *)(lVar20 + 0x18)) && param_2->B == *(uint *)(lVar20 + 0x14)) {
          iVar19 = (int)(lVar20 - lVar5 >> 5);
          goto LAB_14ae09ec3;
        }
        lVar20 = lVar20 + 0x20;
      } while (lVar20 != lVar17);
    }
    iVar19 = -1;
LAB_14ae09ec3:
    if (iVar19 != -1) {
      local_a8._0_4_ = param_2->A;
      local_a8._4_4_ = param_2->B;
      uStack_a0._0_4_ = param_2->C;
      uStack_a0._4_4_ = param_2->D;
      local_98.Type = None;
      local_98.AsNumDefault = 0;
      local_98.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.AsBoolean.ArrayNum = 0;
      local_98.AsBoolean.ArrayMax = 0;
      local_98.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.AsInteger.ArrayNum = 0;
      local_98.AsInteger.ArrayMax = 0;
      local_98.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.AsFloat.ArrayNum = 0;
      local_98.AsFloat.ArrayMax = 0;
      local_98.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.AsString.ArrayNum = 0;
      local_98.AsString.ArrayMax = 0;
      local_98.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.AsUObject.ArrayNum = 0;
      local_98.AsUObject.ArrayMax = 0;
      FMetasoundFrontendLiteral::operator=(&local_98,param_3);
      puVar6 = *(uint **)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x58);
      uVar10 = *(uint *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x60);
      if (puVar6 != puVar6 + (longlong)(int)uVar10 * 0x1a) {
        puVar18 = puVar6;
        do {
          if (((param_2->D == puVar18[3] && param_2->C == puVar18[2]) && param_2->B == puVar18[1])
              && param_2->A == *puVar18) {
            uVar21 = (uint)(((longlong)puVar18 - (longlong)puVar6) / 0x68);
            if (uVar21 != 0xffffffff) {
              uVar22 = 0;
              if ((int)uVar21 < (int)uVar10) {
                uVar22 = ~uVar21 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                uVar9 = (*pcVar7)();
                return (bool)uVar9;
              }
              lVar5 = *(longlong *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x58);
              puVar1 = (undefined8 *)((longlong)(int)uVar21 * 0x68 + lVar5);
              *puVar1 = local_a8;
              puVar1[1] = uStack_a0;
              FMetasoundFrontendLiteral::operator=
                        ((FMetasoundFrontendLiteral *)((longlong)(int)uVar21 * 0x68 + lVar5 + 0x10),
                         &local_98);
              goto LAB_14ae0a01a;
            }
            break;
          }
          puVar18 = puVar18 + 0x1a;
        } while (puVar18 != puVar6 + (longlong)(int)uVar10 * 0x1a);
      }
      if (((puVar6 <= &local_a8) &&
          (&local_a8 <
           puVar6 + (longlong)*(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 100) * 0x1a)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar11 = *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x60);
      if (iVar11 == *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 100)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x868,(ForAnyElementType *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x58)
                            ,(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 100));
      }
      *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x60) = iVar11 + 1;
      lVar5 = *(longlong *)(pFVar4 + (longlong)(int)uVar2 * 0x88 + 0x58);
      puVar1 = (undefined8 *)((longlong)iVar11 * 0x68 + lVar5);
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      FMetasoundFrontendLiteral::FMetasoundFrontendLiteral
                ((FMetasoundFrontendLiteral *)((longlong)iVar11 * 0x68 + lVar5 + 0x10),&local_98);
      uVar21 = uVar10;
LAB_14ae0a01a:
      if (((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar16 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                          ((this->DocumentDelegates).Object,param_4);
      TMulticastDelegate<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pFVar16->NodeDelegates).OnNodeInputLiteralSet,*puVar15,iVar19,uVar21);
      if (local_98.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AsUObject.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_98.AsString.AllocatorInstance.Data,local_98.AsString.ArrayNum);
      if (local_98.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AsString.AllocatorInstance.Data);
      }
      if (local_98.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AsFloat.AllocatorInstance.Data);
      }
      if (local_98.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AsInteger.AllocatorInstance.Data);
      }
      if (local_98.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AsBoolean.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// SetPresetFlags @ 14ae0a1a0

void __thiscall
FMetaSoundFrontendDocumentBuilder::SetPresetFlags
          (FMetaSoundFrontendDocumentBuilder *this,bool param_1)

{
  FMetasoundFrontendDocument *pFVar1;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  pFVar1 = GetDocumentChecked(this);
  local_res10[0] = 0;
  local_10 = local_res10;
  (pFVar1->RootGraph).PresetOptions.bIsPreset = param_1;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SetPresetFlags'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_&>
             ::Call;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&pFVar1->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_18);
  return;
}

// SetVersionNumber @ 14ae0a1f0

void __thiscall
FMetaSoundFrontendDocumentBuilder::SetVersionNumber
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendVersionNumber *param_1)

{
  FMetasoundFrontendVersionNumber FVar1;
  FMetasoundFrontendDocument *pFVar2;
  
  FVar1 = *param_1;
  pFVar2 = GetDocumentChecked(this);
  (pFVar2->Metadata).Version.Number = FVar1;
  return;
}

// ShouldReplaceExistingNodeConfig @ 14ae0a210

bool __thiscall
FMetaSoundFrontendDocumentBuilder::ShouldReplaceExistingNodeConfig
          (FMetaSoundFrontendDocumentBuilder *this,
          TConstStructView<FMetaSoundFrontendNodeConfiguration> *param_1,
          TConstStructView<FMetaSoundFrontendNodeConfiguration> *param_2)

{
  return *(longlong *)param_1 != *(longlong *)param_2;
}

// SpliceVariableNodeFromStack @ 14ae0a220

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SpliceVariableNodeFromStack
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  uint uVar1;
  IDocumentCache *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendGraph *pFVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  FGuid *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  FGuid *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  ForAnyElementType local_118;
  undefined8 local_110;
  FGuid local_108;
  FGuid local_f8;
  FGuid local_e8;
  FGuid local_d8;
  FGuid *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint *local_a0;
  int local_98;
  FMetasoundFrontendEdge local_90;
  
  bVar7 = false;
  local_res10 = param_1;
  pFVar10 = GetDocumentChecked(this);
  pFVar11 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar10->RootGraph,param_2);
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar12 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x50))(pIVar2,param_2);
  local_108.A = 0;
  local_108.B = 0;
  local_108.C = 0;
  local_108.D = 0;
  local_f8.A = 0;
  local_f8.B = 0;
  local_f8.C = 0;
  local_f8.D = 0;
  FLazyName::Resolve(&Metasound::VariableNames::InputVariableName);
  pFVar17 = param_2;
  if (param_2 == (FGuid *)0x0) {
    pFVar17 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar13 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,pFVar17);
  pFVar17 = local_res10;
  lVar14 = (**(code **)(*plVar13 + 0x40))(plVar13,local_res10,local_res18);
  if (lVar14 != 0) {
    puVar15 = (uint *)(**(code **)(*plVar12 + 0x28))(plVar12,pFVar17,(FGuid *)(lVar14 + 0x10));
    if (puVar15 != (uint *)0x0) {
      uVar1 = *puVar15;
      uVar8 = 0;
      if ((int)uVar1 < (pFVar11->Edges).ArrayNum) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = (pFVar11->Edges).AllocatorInstance.Data;
      pFVar19 = pFVar3 + (longlong)(int)uVar1 * 0x40;
      local_108._0_8_ = *(undefined8 *)pFVar19;
      local_108._8_8_ = *(undefined8 *)(pFVar19 + 8);
      pFVar3 = pFVar3 + (longlong)(int)uVar1 * 0x40 + 0x10;
      local_f8._0_8_ = *(undefined8 *)pFVar3;
      local_f8._8_8_ = *(undefined8 *)(pFVar3 + 8);
      local_e8._0_8_ = local_108._0_8_;
      local_e8._8_8_ = local_108._8_8_;
      local_d8._0_8_ = local_f8._0_8_;
      local_d8._8_8_ = local_f8._8_8_;
      bVar7 = RemoveEdgeToNodeInput(this,local_res10,(FGuid *)(lVar14 + 0x10),param_2);
      goto LAB_14ae0a44c;
    }
  }
  local_d8.A = local_f8.A;
  local_d8.B = local_f8.B;
  local_d8.C = local_f8.C;
  local_d8.D = local_f8.D;
  local_e8.A = local_108.A;
  local_e8.B = local_108.B;
  local_e8.C = local_108.C;
  local_e8.D = local_108.D;
LAB_14ae0a44c:
  local_108._0_8_ = local_e8._0_8_;
  local_108._8_8_ = local_e8._8_8_;
  local_f8._0_8_ = local_d8._0_8_;
  local_f8._8_8_ = local_d8._8_8_;
  FLazyName::Resolve(&Metasound::VariableNames::OutputVariableName);
  pFVar17 = param_2;
  if (param_2 == (FGuid *)0x0) {
    pFVar17 = &this->BuildPageID;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pIVar2 = (this->DocumentCache).Object;
  plVar13 = (longlong *)(**(code **)(*(longlong *)pIVar2 + 0x40))(pIVar2,pFVar17);
  pFVar17 = local_res10;
  lVar14 = (**(code **)(*plVar13 + 0x50))(plVar13,local_res10,local_res20);
  if (lVar14 != 0) {
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = 0;
    local_c8 = (FGuid *)(lVar14 + 0x10);
    (**(code **)(*plVar12 + 0x30))(plVar12,&local_a0,pFVar17,local_c8);
    puVar15 = local_a0;
    if (local_a0 != local_a0 + local_98) {
      do {
        uVar1 = *puVar15;
        uVar8 = 0;
        if ((int)uVar1 < (pFVar11->Edges).ArrayNum) {
          uVar8 = ~uVar1 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (pFVar11->Edges).AllocatorInstance.Data;
        pFVar19 = pFVar3 + (longlong)(int)uVar1 * 0x40 + 0x20;
        local_c0 = *(undefined8 *)pFVar19;
        uStack_b8 = *(undefined8 *)(pFVar19 + 8);
        pFVar3 = pFVar3 + (longlong)(int)uVar1 * 0x40 + 0x30;
        local_b0 = *(undefined8 *)pFVar3;
        uStack_a8 = *(undefined8 *)(pFVar3 + 8);
        if (((local_118.Data <= (FScriptContainerElement *)&local_c0) &&
            ((FScriptContainerElement *)&local_c0 <
             local_118.Data + (longlong)local_110._4_4_ * 0x20)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar9 = (int)local_110;
        if ((int)local_110 == local_110._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x420,&local_118,(int *)((longlong)&local_110 + 4));
        }
        puVar15 = puVar15 + 1;
        local_110 = CONCAT44(local_110._4_4_,iVar9 + 1);
        *(undefined8 *)(local_118.Data + (longlong)iVar9 * 0x20) = local_c0;
        *(undefined8 *)(local_118.Data + (longlong)iVar9 * 0x20 + 8) = uStack_b8;
        *(undefined8 *)(local_118.Data + (longlong)iVar9 * 0x20 + 0x10) = local_b0;
        *(undefined8 *)(local_118.Data + (longlong)iVar9 * 0x20 + 0x10 + 8) = uStack_a8;
      } while (puVar15 != local_a0 + local_98);
      local_d8.A = local_f8.A;
      local_d8.B = local_f8.B;
      local_d8.C = local_f8.C;
      local_d8.D = local_f8.D;
      local_e8.A = local_108.A;
      local_e8.B = local_108.B;
      local_e8.C = local_108.C;
      local_e8.D = local_108.D;
      pFVar17 = local_res10;
    }
    bVar5 = RemoveEdgesFromNodeOutput(this,pFVar17,local_c8,param_2);
    bVar7 = (bool)(bVar7 | bVar5);
    if (((local_108.D != 0 || local_108.C != 0) || local_108.B != 0) || local_108.A != 0) {
      if (((local_f8.D != 0 || local_f8.C != 0) || local_f8.B != 0) || local_f8.A != 0) {
        iVar9 = (int)local_110;
        uVar16 = (ulonglong)(int)local_110;
        pFVar19 = local_118.Data + uVar16 * 0x20;
        FVar18.Data = local_118.Data;
        while( true ) {
          if ((int)uVar16 != iVar9) {
            `TCheckedPointerIterator<FMetasoundFrontendVertexHandle,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (FVar18.Data == pFVar19) break;
          local_90.ToVertexID._0_8_ = *(undefined8 *)(FVar18.Data + 0x10);
          local_90.ToVertexID._8_8_ = *(undefined8 *)(FVar18.Data + 0x18);
          local_90.FromNodeID.A = local_e8.A;
          local_90.FromNodeID.B = local_e8.B;
          local_90.FromNodeID.C = local_e8.C;
          local_90.FromNodeID.D = local_e8.D;
          local_90.FromVertexID.A = local_d8.A;
          local_90.FromVertexID.B = local_d8.B;
          local_90.FromVertexID.C = local_d8.C;
          local_90.FromVertexID.D = local_d8.D;
          local_90.ToNodeID._0_8_ = *(undefined8 *)FVar18.Data;
          local_90.ToNodeID._8_8_ = *(undefined8 *)(FVar18.Data + 8);
          AddEdge(this,&local_90,param_2);
          uVar16 = local_110 & 0xffffffff;
          FVar18.Data = FVar18.Data + 0x20;
        }
      }
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
  }
  return bVar7;
}

// SwapGraphInput @ 14ae0a740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SwapGraphInput
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassVertex *param_1,
          FMetasoundFrontendClassVertex *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  FName FVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong *plVar10;
  FMetasoundFrontendVertex *pFVar11;
  longlong lVar12;
  FMetasoundFrontendDocument *pFVar13;
  FMetasoundFrontendNode *pFVar14;
  uint uVar15;
  undefined1 auStackY_1d8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  FMetasoundFrontendClassInput local_188;
  code *local_138;
  FMetaSoundFrontendDocumentBuilder **local_130;
  code *local_128;
  ForAnyElementType **local_120;
  FMetaSoundFrontendDocumentBuilder *local_118;
  undefined8 *local_110;
  ForAnyElementType *local_108;
  ForAnyElementType *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  FMetaSoundFrontendDocumentBuilder *local_e8;
  FMetasoundFrontendClassInput local_e0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar3 = *(undefined8 *)param_1;
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  pFVar11 = (FMetasoundFrontendVertex *)(**(code **)(*plVar10 + 8))(plVar10,uVar3);
  if ((pFVar11 == (FMetasoundFrontendVertex *)0x0) ||
     (bVar7 = FMetasoundFrontendVertex::IsFunctionalEquivalent
                        (pFVar11,(FMetasoundFrontendVertex *)param_1), !bVar7)) {
    return false;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  lVar12 = (**(code **)(*plVar10 + 8))(plVar10,*(undefined8 *)param_1);
  if ((lVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExistingInputClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x1b4c,L"\'SwapGraphInput\' failed to find original graph input"), bVar7))
  {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_1a8 = *(longlong *)(lVar12 + 0x20);
  uStack_1a0 = *(longlong *)(lVar12 + 0x28);
  pFVar13 = GetDocumentChecked(this);
  local_110 = &local_1a8;
  local_108 = &local_98;
  local_130 = &local_118;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SwapGraphInput'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_&>
              ::Call;
  local_118 = this;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&pFVar13->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_138
            );
  FVar4.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
  FVar4.Number = *(uint *)&param_1->field_0x4;
  bVar7 = RemoveGraphInput(this,FVar4,false);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRemovedVertex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x1b6b,L"Failed to swap MetaSound input expected to exist"), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_198 = 0;
  uStack_190 = 0;
  FMetasoundFrontendClassInput::FMetasoundFrontendClassInput(&local_188,param_2);
  local_e0._padding_._0_4_ = (undefined4)local_188._padding_;
  local_e0.Defaults.AllocatorInstance.Data = local_188.Defaults.AllocatorInstance.Data;
  local_e0.Defaults.ArrayNum = local_188.Defaults.ArrayNum;
  local_e0.Defaults.ArrayMax = local_188.Defaults.ArrayMax;
  local_188.Defaults.ArrayNum = 0;
  local_188.Defaults.ArrayMax = 0;
  local_188._padding_ = local_1a8;
  local_188._padding_ = uStack_1a0;
  local_e0._padding_ = local_188._padding_;
  local_e0._padding_ = local_188._padding_;
  local_188.Defaults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0._padding_ = local_188._padding_;
  local_e0._padding_ = local_188._padding_;
  local_e0._padding_ = local_1a8;
  local_e0._padding_ = uStack_1a0;
  pFVar14 = AddGraphInput(this,&local_e0,(FGuid *)0x0);
  if ((pFVar14 == (FMetasoundFrontendNode *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewInputNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x1b78,L"Failed to add new Input node when swapping graph inputs"), bVar7)
     ) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if ((((uStack_1a0._4_4_ != (pFVar14->ID).D || (uint)uStack_1a0 != (pFVar14->ID).C) ||
       local_1a8._4_4_ != (pFVar14->ID).B) || (uint)local_1a8 != (pFVar14->ID).A) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewInputNode->GetID() == NodeID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x1b79,
                         L"Expected new node added to build graph to have same ID as provided input"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar2 = (pFVar14->Interface).Outputs.ArrayNum;
  uVar15 = iVar2 - 1;
  uVar9 = 0;
  if ((int)uVar15 < iVar2) {
    uVar9 = ~uVar15 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pFVar1 = (pFVar14->Interface).Outputs.AllocatorInstance.Data +
           (longlong)(pFVar14->Interface).Outputs.ArrayNum * 0x20 + -0x10;
  local_198 = *(undefined8 *)pFVar1;
  uStack_190 = *(undefined8 *)(pFVar1 + 8);
  DestructItems<FMetasoundFrontendClassInputDefault,int>
            ((FMetasoundFrontendClassInputDefault *)local_188.Defaults.AllocatorInstance.Data,
             local_188.Defaults.ArrayNum);
  if ((FMetasoundFrontendClassInputDefault *)local_188.Defaults.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInputDefault *)0x0) {
    FMemory::Free(local_188.Defaults.AllocatorInstance.Data);
  }
  local_100 = &local_98;
  local_f8 = &local_1a8;
  local_f0 = &local_198;
  local_120 = &local_100;
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SwapGraphInput'::__l2::<lambda_2>,void,FMetasoundFrontendGraph_&>
              ::Call;
  local_e8 = this;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&pFVar13->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_128
            );
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  uVar6 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_64 = 0;
  local_88.NumBits = 0;
  local_68 = 0xffffffff;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// SwapGraphOutput @ 14ae0ab80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMetaSoundFrontendDocumentBuilder::SwapGraphOutput
          (FMetaSoundFrontendDocumentBuilder *this,FMetasoundFrontendClassVertex *param_1,
          FMetasoundFrontendClassVertex *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  FName FVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong *plVar10;
  FMetasoundFrontendVertex *pFVar11;
  longlong lVar12;
  FMetasoundFrontendDocument *pFVar13;
  FMetasoundFrontendNode *pFVar14;
  uint uVar15;
  undefined1 auStackY_1b8 [32];
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168;
  FMetaSoundFrontendDocumentBuilder **local_160;
  code *local_158;
  ForAnyElementType **local_150;
  FMetaSoundFrontendDocumentBuilder *local_148;
  uint *local_140;
  ForAnyElementType *local_138;
  ForAnyElementType *local_130;
  uint *local_128;
  undefined8 *local_120;
  FMetaSoundFrontendDocumentBuilder *local_118;
  FMetasoundFrontendClassOutput local_110;
  FMetasoundFrontendClassOutput local_d8;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar3 = *(undefined8 *)param_1;
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  pFVar11 = (FMetasoundFrontendVertex *)(**(code **)(*plVar10 + 0x18))(plVar10,uVar3);
  if ((pFVar11 == (FMetasoundFrontendVertex *)0x0) ||
     (bVar7 = FMetasoundFrontendVertex::IsFunctionalEquivalent
                        (pFVar11,(FMetasoundFrontendVertex *)param_1), !bVar7)) {
    return false;
  }
  if (((this->DocumentCache).Object == (IDocumentCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)(this->DocumentCache).Object + 0x60))();
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  lVar12 = (**(code **)(*plVar10 + 0x18))(plVar10,*(undefined8 *)param_1);
  if ((lVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExistingOutputClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x1bb2,L"\'SwapGraphOutput\' failed to find original graph output"), bVar7
     )) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  _local_188 = *(undefined8 *)(lVar12 + 0x20);
  _uStack_180 = *(undefined8 *)(lVar12 + 0x28);
  pFVar13 = GetDocumentChecked(this);
  local_140 = &local_188;
  local_138 = &local_98;
  local_160 = &local_148;
  local_168 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SwapGraphOutput'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_&>
              ::Call;
  local_148 = this;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&pFVar13->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_168
            );
  FVar4.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
  FVar4.Number = *(uint *)&param_1->field_0x4;
  bVar7 = RemoveGraphOutput(this,FVar4);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRemovedVertex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x1bcc,
                         L"Failed to swap output expected to exist while swapping MetaSound outputs"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_178 = 0;
  uStack_170 = 0;
  FMetasoundFrontendClassOutput::FMetasoundFrontendClassOutput(&local_110,param_2);
  local_d8._48_4_ = local_110._48_4_;
  local_110._32_8_ = _local_188;
  local_110._40_8_ = _uStack_180;
  local_d8._0_8_ = local_110._0_8_;
  local_d8._8_8_ = local_110._8_8_;
  local_d8._16_8_ = local_110._16_8_;
  local_d8._24_8_ = local_110._24_8_;
  local_d8._32_8_ = _local_188;
  local_d8._40_8_ = _uStack_180;
  pFVar14 = AddGraphOutput(this,&local_d8,(FGuid *)0x0);
  if ((pFVar14 == (FMetasoundFrontendNode *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewOutputNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x1bd9,L"Failed to add new output node when swapping graph outputs"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if ((((uStack_17c != (pFVar14->ID).D || uStack_180 != (pFVar14->ID).C) ||
       uStack_184 != (pFVar14->ID).B) || local_188 != (pFVar14->ID).A) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewOutputNode->GetID() == NodeID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0x1bda,
                         L"Expected new node added to build graph to have same ID as provided output"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar2 = (pFVar14->Interface).Inputs.ArrayNum;
  uVar15 = iVar2 - 1;
  uVar9 = 0;
  if ((int)uVar15 < iVar2) {
    uVar9 = ~uVar15 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pFVar1 = (pFVar14->Interface).Inputs.AllocatorInstance.Data +
           (longlong)(pFVar14->Interface).Inputs.ArrayNum * 0x20 + -0x10;
  local_178 = *(undefined8 *)pFVar1;
  uStack_170 = *(undefined8 *)(pFVar1 + 8);
  local_130 = &local_98;
  local_128 = &local_188;
  local_120 = &local_178;
  local_150 = &local_130;
  local_158 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::SwapGraphOutput'::__l2::<lambda_2>,void,FMetasoundFrontendGraph_&>
              ::Call;
  local_118 = this;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&pFVar13->RootGraph,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *)&local_158
            );
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  uVar6 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_64 = 0;
  local_88.NumBits = 0;
  local_68 = 0xffffffff;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// UnlinkVariableNode @ 14ae0bd30

bool __thiscall
FMetaSoundFrontendDocumentBuilder::UnlinkVariableNode
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  FMetasoundFrontendDocument *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  bool bVar18;
  undefined1 local_res10 [8];
  FGuid *local_res18;
  uint local_res20;
  <lambda_1> local_68;
  FMetasoundFrontendGraph *local_60;
  undefined8 uStack_58;
  
  local_res18 = param_2;
  local_68.InNodeID = param_1;
  pFVar7 = GetDocumentChecked(this);
  local_60 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar7->RootGraph,param_2);
  local_res20 = (local_60->Variables).ArrayNum;
  uVar9 = (ulonglong)(int)local_res20;
  pFVar16 = (local_60->Variables).AllocatorInstance.Data;
  pFVar11 = pFVar16 + 0xb0;
  pFVar13 = pFVar16 + uVar9 * 0xb8;
  while( true ) {
    if ((local_60->Variables).ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<FMetasoundFrontendVariable,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar16 == pFVar13) {
      return false;
    }
    uVar1 = param_1->C;
    uVar2 = param_1->D;
    uVar3 = param_1->B;
    uVar4 = param_1->A;
    if (((uVar2 == *(uint *)(pFVar11 + -0x1c) && uVar1 == *(uint *)(pFVar11 + -0x20)) &&
        uVar3 == *(uint *)(pFVar11 + -0x24)) && uVar4 == *(uint *)(pFVar11 + -0x28)) break;
    if (((uVar2 == *(uint *)(pFVar11 + -0x2c) && uVar1 == *(uint *)(pFVar11 + -0x30)) &&
        uVar3 == *(uint *)(pFVar11 + -0x34)) && uVar4 == *(uint *)(pFVar11 + -0x38)) {
      local_60 = (FMetasoundFrontendGraph *)0x0;
      uStack_58 = 0;
      *(undefined8 *)(pFVar16 + 0x78) = 0;
      *(undefined8 *)(pFVar16 + 0x80) = 0;
      goto LAB_14ae0bf97;
    }
    iVar6 = *(int *)pFVar11;
    lVar8 = (longlong)iVar6;
    if (iVar6 != 0) {
      puVar5 = *(uint **)(pFVar11 + -8);
      iVar17 = 0;
      lVar12 = 0;
      bVar18 = ((uVar3 != puVar5[1] || uVar1 != puVar5[2]) || uVar2 != puVar5[3]) ||
               uVar4 != *puVar5;
      iVar14 = 0;
      do {
        lVar12 = lVar12 + 1;
        iVar15 = iVar14 + 1;
        if (lVar12 < lVar8) {
          puVar10 = puVar5 + lVar12 * 4 + 2;
          do {
            if (bVar18 != (((param_1->A != puVar10[-2] || param_1->D != puVar10[1]) ||
                           param_1->B != puVar10[-1]) || param_1->C != *puVar10)) break;
            iVar15 = iVar15 + 1;
            lVar12 = lVar12 + 1;
            puVar10 = puVar10 + 4;
          } while (lVar12 < lVar8);
        }
        if (bVar18 != false) {
          if (iVar17 != iVar14) {
            memmove(puVar5 + (longlong)iVar17 * 4,puVar5 + (longlong)iVar14 * 4,
                    (longlong)(iVar15 - iVar14) << 4);
          }
          iVar17 = iVar17 + (iVar15 - iVar14);
        }
        bVar18 = (bool)(bVar18 ^ 1);
        iVar14 = iVar15;
      } while (lVar12 < lVar8);
      *(int *)pFVar11 = iVar17;
      if (0 < iVar6 - iVar17) goto LAB_14ae0bf97;
    }
    iVar6 = TArray<FGuid,TSizedDefaultAllocator<32>_>::
            RemoveAll<_FMetaSoundFrontendDocumentBuilder::UnlinkVariableNode_::__l2::<lambda_1>_>
                      ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)(pFVar11 + -0x18),&local_68);
    if (0 < iVar6) goto LAB_14ae0bf97;
    pFVar16 = pFVar16 + 0xb8;
    uVar9 = (ulonglong)local_res20;
    pFVar11 = pFVar11 + 0xb8;
  }
  local_60 = (FMetasoundFrontendGraph *)0x0;
  uStack_58 = 0;
  *(undefined8 *)(pFVar16 + 0x88) = 0;
  *(undefined8 *)(pFVar16 + 0x90) = 0;
LAB_14ae0bf97:
  SpliceVariableNodeFromStack(this,param_1,local_res18);
  return true;
}

// UpdateNodeInterfaceFromConfiguration @ 14ae0bfd0

bool __thiscall
FMetaSoundFrontendDocumentBuilder::UpdateNodeInterfaceFromConfiguration
          (FMetaSoundFrontendDocumentBuilder *this,FGuid *param_1,FGuid *param_2)

{
  uint uVar1;
  int iVar2;
  IDocumentCache *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  uint *puVar8;
  FMetasoundFrontendDocument *pFVar9;
  FMetasoundFrontendGraph *pFVar10;
  FMetasoundFrontendClass *this_00;
  UScriptStruct *pUVar11;
  FInstancedStruct *pFVar12;
  FMetasoundFrontendClassInterface *pFVar13;
  FGraphModifyDelegates *pFVar14;
  uint uVar15;
  TObjectPtr<UScriptStruct_const_>_u_0 *this_01;
  FGuid *pFVar16;
  FMetasoundFrontendNode *pFVar17;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  FGuid *local_res10;
  FGuid *local_res18;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res20;
  TObjectPtr<UScriptStruct_const_>_u_0 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  FMetaSoundFrontendDocumentBuilder **local_a0;
  code *local_98;
  FMetaSoundFrontendDocumentBuilder **local_90;
  TObjectPtr<UScriptStruct_const_>_u_0 local_88 [2];
  FMetaSoundFrontendDocumentBuilder *local_78;
  FGuid *local_70;
  FGuid **local_68;
  FMetaSoundFrontendDocumentBuilder *local_60;
  FGuid *local_58;
  FGuid **local_50;
  
  pFVar16 = param_2;
  if (param_2 == (FGuid *)0x0) {
    pFVar16 = &this->BuildPageID;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pIVar3 = (this->DocumentCache).Object;
  plVar7 = (longlong *)(**(code **)(*(longlong *)pIVar3 + 0x40))(pIVar3,pFVar16);
  puVar8 = (uint *)(**(code **)(*plVar7 + 0x18))(plVar7,param_1);
  if (puVar8 == (uint *)0x0) {
    return false;
  }
  pFVar9 = GetDocumentChecked(this);
  pFVar10 = FMetasoundFrontendGraphClass::FindGraphChecked(&pFVar9->RootGraph,pFVar16);
  uVar1 = *puVar8;
  uVar15 = 0;
  if ((int)uVar1 < (pFVar10->Nodes).ArrayNum) {
    uVar15 = ~uVar1 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar17 = (FMetasoundFrontendNode *)
            ((pFVar10->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88);
  if ((this->DocumentCache).Object == (IDocumentCache *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pIVar3 = (this->DocumentCache).Object;
  this_00 = (FMetasoundFrontendClass *)
            (**(code **)(*(longlong *)pIVar3 + 0x18))(pIVar3,&pFVar17->ClassID);
  if (this_00 == (FMetasoundFrontendClass *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Class",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x1c0b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  plVar7 = (longlong *)(pFVar17->Configuration).InstancedStruct.StructMemory;
  local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)
               (pFVar17->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  if ((plVar7 == (longlong *)0x0) || (local_res8.DebugPtr == (UScriptStruct *)0x0)) {
LAB_14ae0c1d8:
    local_b8.DebugPtr = (UScriptStruct *)0x0;
    uStack_b0 = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_b8.ObjectPtr);
    FInstancedStruct::operator=
              (&(pFVar17->ClassInterfaceOverride).InstancedStruct,
               (FInstancedStruct *)&local_b8.ObjectPtr);
    this_01 = &local_b8;
  }
  else {
    pUVar11 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
    if (local_res8.DebugPtr != pUVar11) {
      pUVar11 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
      if (pUVar11 != (UScriptStruct *)0x0) {
        iVar2 = (int)pUVar11->_padding_;
        if (((int)(local_res8.DebugPtr)->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)((local_res8.DebugPtr)->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar11->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_14ae0c1b6;
      }
      local_res20 = &local_res8;
      bVar5 = `UE::StructUtils::
              GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>'
              ::__l7::<lambda_1>::operator()(&local_res20);
      if (!bVar5) goto LAB_14ae0c1d8;
    }
LAB_14ae0c1b6:
    pFVar12 = (FInstancedStruct *)(**(code **)(*plVar7 + 8))(plVar7,local_88,this_00);
    FInstancedStruct::operator=(&(pFVar17->ClassInterfaceOverride).InstancedStruct,pFVar12);
    this_01 = local_88;
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this_01->ObjectPtr);
  pFVar13 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar17);
  local_50 = &local_res18;
  local_58 = local_res10;
  local_70 = local_res10;
  local_68 = &local_res18;
  local_a0 = &local_78;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::UpdateNodeInterfaceFromConfiguration'::__l2::<lambda_2>,void,FMetasoundFrontendVertex_const_&>
             ::Call;
  local_90 = &local_60;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetaSoundFrontendDocumentBuilder::UpdateNodeInterfaceFromConfiguration'::__l2::<lambda_1>,void,FMetasoundFrontendVertex_const_&>
             ::Call;
  local_78 = this;
  local_60 = this;
  FMetasoundFrontendNodeInterface::Update
            (&pFVar17->Interface,pFVar13,
             (TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *)&local_98,
             (TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *)&local_a8);
  if ((this->DocumentDelegates).Object == (FDocumentModifyDelegates *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar14 = Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
                      ((this->DocumentDelegates).Object,pFVar16);
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&(pFVar14->NodeDelegates).OnNodeConfigurationUpdated,*puVar8);
  return true;
}

// operator() @ 15055dbf0

bool __thiscall
`FMetaSoundFrontendDocumentBuilder::SetGraphInputAccessType'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3428680960856549580>);
  if (bVar2) {
    ::LexToString(**(EMetasoundFrontendVertexAccessType **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3428680960856549580>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15055dc40

bool __thiscall
`FMetaSoundFrontendDocumentBuilder::SetGraphOutputAccessType'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3428680960856549160>);
  if (bVar2) {
    ::LexToString(**(EMetasoundFrontendVertexAccessType **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3428680960856549160>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15055dc90

bool __thiscall
`FMetaSoundFrontendDocumentBuilder::RemoveNamedEdges'::__l40::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3428680960856550587>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3428680960856550587>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15055dcd0

bool __thiscall
`FMetaSoundFrontendDocumentBuilder::GetNodeOutputAccessType'::__l12::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3428680960856551414>);
  if (bVar2) {
    Metasound::Frontend::FNodeClassRegistryKey::ToString(*(FNodeClassRegistryKey **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3428680960856551414>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055dd37;
    }
  }
  bVar2 = false;
LAB_15055dd37:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15055dd70

bool __thiscall
`FMetaSoundFrontendDocumentBuilder::RemoveNode'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3428680960856550046>);
  if (bVar2) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(*(FGuid **)((longlong)this + 8),&local_18,Digits);
    ::LexToString(**(EMetasoundFrontendClassType **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3428680960856550046>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055ddfb;
    }
  }
  bVar2 = false;
LAB_15055ddfb:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15055ded0

bool __thiscall
`FMetaSoundFrontendDocumentBuilder::GetNodeInputAccessType'::__l12::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3428680960856551721>);
  if (bVar2) {
    Metasound::Frontend::FNodeClassRegistryKey::ToString(*(FNodeClassRegistryKey **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3428680960856551721>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055df37;
    }
  }
  bVar2 = false;
LAB_15055df37:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

