// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 13

// StaticClass @ 14e11c0d0

UClass * __cdecl UOptimusComputeGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComputeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComputeGraph",
               &Z_Registration_Info_UClass_UOptimusComputeGraph.InnerSingleton,
               StaticRegisterNativesUOptimusComputeGraph,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusComputeGraph>,
               InternalVTableHelperCtorCaller<UOptimusComputeGraph>,local_res8,
               UComputeGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComputeGraph.InnerSingleton;
}

// UOptimusComputeGraph @ 14e1588d0

UOptimusComputeGraph * __thiscall
UOptimusComputeGraph::UOptimusComputeGraph(UOptimusComputeGraph *this,FVTableHelper *param_1)

{
  UComputeGraph::UComputeGraph((UComputeGraph *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusComputeGraph__6B_;
  (this->KernelToNode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelToNode).ArrayNum = 0;
  (this->KernelToNode).ArrayMax = 0;
  return this;
}

// UOptimusComputeGraph @ 14e158910

UOptimusComputeGraph * __thiscall
UOptimusComputeGraph::UOptimusComputeGraph(UOptimusComputeGraph *this,FObjectInitializer *param_1)

{
  UComputeGraph::UComputeGraph((UComputeGraph *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusComputeGraph__6B_;
  (this->KernelToNode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelToNode).ArrayNum = 0;
  (this->KernelToNode).ArrayMax = 0;
  return this;
}

// ~UOptimusComputeGraph @ 14e1623e0

void __thiscall UOptimusComputeGraph::~UOptimusComputeGraph(UOptimusComputeGraph *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusComputeGraph__6B_;
  DestructItems<TSoftObjectPtr<UOptimusNode_const_>,int>
            ((TSoftObjectPtr<UOptimusNode_const_> *)(this->KernelToNode).AllocatorInstance.Data,
             (this->KernelToNode).ArrayNum);
  pFVar1 = (this->KernelToNode).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UComputeGraph::~UComputeGraph((UComputeGraph *)this);
  return;
}

// GetGraphDataInterfaceForPostLoadFixUp @ 14e1c56e0

UOptimusGraphDataInterface * __thiscall
UOptimusComputeGraph::GetGraphDataInterfaceForPostLoadFixUp(UOptimusComputeGraph *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  UOptimusGraphDataInterface *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  plVar6 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar6 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UComputeDataInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar6 == plVar1) break;
    pUVar4 = (UOptimusGraphDataInterface *)*plVar6;
    if (pUVar4 != (UOptimusGraphDataInterface *)0x0) {
      pUVar5 = UOptimusGraphDataInterface::StaticClass();
      iVar3 = (int)pUVar5->_padding_;
      if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
    plVar6 = plVar6 + 1;
  }
  return (UOptimusGraphDataInterface *)0x0;
}

// GetOutputBuffers @ 14e1cbb10

EMeshDeformerOutputBuffer __thiscall
UOptimusComputeGraph::GetOutputBuffers(UOptimusComputeGraph *this)

{
  int iVar1;
  uint uVar2;
  UObjectBaseUtility *this_00;
  code *pcVar3;
  bool bVar4;
  EMeshDeformerOutputBuffer EVar5;
  EMeshDeformerOutputBuffer EVar6;
  uint uVar7;
  UClass *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  EVar5 = None;
  lVar10 = this->_padding_;
  lVar11 = (longlong)iVar1 * 0x38 + lVar10;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FComputeGraphEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar10 == lVar11) break;
    if (*(char *)(lVar10 + 0x10) == '\0') {
      uVar2 = *(uint *)(lVar10 + 8);
      uVar7 = 0;
      if ((int)uVar2 < (int)this->_padding_) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
      }
      this_00 = *(UObjectBaseUtility **)(this->_padding_ + (longlong)(int)uVar2 * 8);
      if (this_00 != (UObjectBaseUtility *)0x0) {
        pUVar8 = Z_Construct_UClass_UOptimusOutputBufferWriter_NoRegister();
        plVar9 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar8);
        if (plVar9 != (longlong *)0x0) {
          EVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined4 *)(lVar10 + 0xc));
          EVar5 = EVar5 | EVar6;
        }
      }
    }
    lVar10 = lVar10 + 0x38;
  }
  return EVar5;
}

// GetPrivateStaticClass @ 14e1d4db0

UClass * __cdecl UOptimusComputeGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComputeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComputeGraph",
               &Z_Registration_Info_UClass_UOptimusComputeGraph.InnerSingleton,
               StaticRegisterNativesUOptimusComputeGraph,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusComputeGraph>,
               InternalVTableHelperCtorCaller<UOptimusComputeGraph>,local_res8,
               UComputeGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComputeGraph.InnerSingleton;
}

// HasHalfEdgeDataInterface @ 14e1e9a40

bool __thiscall UOptimusComputeGraph::HasHalfEdgeDataInterface(UOptimusComputeGraph *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  plVar6 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar6 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UComputeDataInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar6 == plVar1) break;
    lVar4 = *plVar6;
    pUVar5 = UOptimusHalfEdgeDataInterface::StaticClass();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar5->_padding_)) {
      return true;
    }
    plVar6 = plVar6 + 1;
  }
  return false;
}

// OnKernelCompilationComplete @ 14e1f5500

void __thiscall
UOptimusComputeGraph::OnKernelCompilationComplete
          (UOptimusComputeGraph *this,int param_1,FComputeKernelCompileResults *param_2)

{
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  FComputeKernelCompileMessage *pFVar1;
  code *pcVar2;
  bool bVar3;
  EOptimusDiagnosticLevel EVar4;
  int iVar5;
  UClass *pUVar6;
  UOptimusNode *this_01;
  FText *this_02;
  FString *pFVar7;
  FString *pFVar8;
  FComputeKernelCompileMessage *pFVar9;
  EOptimusDiagnosticLevel EVar10;
  int iVar11;
  int iVar12;
  UOptimusDeformer *pUVar13;
  FName local_res8;
  undefined1 local_res10 [8];
  FName local_res20;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  longlong *local_48 [2];
  
  if (param_1 < 0) {
    return;
  }
  if ((this->KernelToNode).ArrayNum <= param_1) {
    return;
  }
  pUVar13 = (UOptimusDeformer *)this->_padding_;
  if (pUVar13 != (UOptimusDeformer *)0x0) {
    pUVar6 = UOptimusDeformer::StaticClass();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) goto LAB_14e1f5569;
  }
  pUVar13 = (UOptimusDeformer *)0x0;
LAB_14e1f5569:
  if (((this->KernelToNode).ArrayNum <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)
            ((this->KernelToNode).AllocatorInstance.Data + (longlong)param_1 * 0x28);
  this_01 = (UOptimusNode *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
  if (this_01 == (UOptimusNode *)0x0) {
    if ((this_00->ObjectID).AssetPath.PackageName == (FName)0x0) {
      return;
    }
    FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
    this_01 = (UOptimusNode *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
  }
  if (this_01 != (UOptimusNode *)0x0) {
    pUVar6 = UOptimusNode::StaticClass();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      this_02 = (FText *)(**(code **)(this_01->_padding_ + 0x2d8))(this_01,local_48);
      pFVar7 = FText::ToString(this_02);
      local_res8 = (FName)this->_padding_;
      pFVar8 = ::FName::GetPlainNameString(&local_res8,&local_58);
      local_res20 = (FName)pUVar13->_padding_;
      ::FName::ToString(&local_res20,(FString *)&local_78);
      iVar5 = (pFVar8->Data).ArrayNum;
      iVar12 = 0;
      iVar11 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar11 = iVar12;
      }
      if ((local_78.ArrayNum != 0) || (iVar5 = 1, iVar11 + 1 == 0)) {
        iVar5 = iVar12;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_88,&local_78,iVar5 + iVar11 + 1);
      ::FString::PathAppend
                ((FString *)&local_88,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar11);
      iVar11 = (pFVar7->Data).ArrayNum;
      iVar5 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar5 = 0;
      }
      if ((local_88.ArrayNum != 0) || (iVar11 = 1, iVar5 + 1 == 0)) {
        iVar11 = iVar12;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_68,&local_88,iVar11 + iVar5 + 1);
      ::FString::PathAppend
                ((FString *)&local_68,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar5);
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
      iVar5 = (param_2->Messages).ArrayNum;
      EVar10 = None;
      pFVar9 = (FComputeKernelCompileMessage *)(param_2->Messages).AllocatorInstance.Data;
      pFVar1 = pFVar9 + iVar5;
      while( true ) {
        if ((param_2->Messages).ArrayNum != iVar5) {
          `TCheckedPointerIterator<FComputeKernelCompileMessage_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar9 == pFVar1) break;
        EVar4 = ProcessCompilationMessage(pUVar13,this_01,(FString *)&local_68,pFVar9);
        if (EVar10 < EVar4) {
          EVar10 = EVar4;
        }
        pFVar9 = pFVar9 + 1;
      }
      if (this_01->DiagnosticLevel != EVar10) {
        this_01->DiagnosticLevel = EVar10;
        UOptimusNode::Notify(this_01,NodeDiagnosticLevelChanged);
      }
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PostLoad @ 14e1fae00

void __thiscall UOptimusComputeGraph::PostLoad(UOptimusComputeGraph *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *local_28 [2];
  FGuid local_18;
  
  UComputeGraph::PostLoad((UComputeGraph *)this);
  local_18 = FOptimusObjectVersion::GUID;
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (3 < iVar4) {
    return;
  }
  local_28[0] = Z_Construct_UClass_UMeshComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28[0]);
  }
  if (((UClass **)this->_padding_ <= local_28) &&
     (local_28 < (UClass **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(UClass **)(this->_padding_ + (longlong)iVar4 * 8) = local_28[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28[0]);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::AddZeroed
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,(int)this->_padding_);
  return;
}

// Serialize @ 14e21b550

void __thiscall UOptimusComputeGraph::Serialize(UOptimusComputeGraph *this,FArchive *param_1)

{
  UComputeGraph::Serialize((UComputeGraph *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e21b570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FOptimusObjectVersion::GUID);
  return;
}

// Serialize @ 14e21b580

void __thiscall
UOptimusComputeGraph::Serialize(UOptimusComputeGraph *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UComputeGraph::Serialize((UComputeGraph *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FOptimusObjectVersion::GUID);
  return;
}

// StaticRegisterNativesUOptimusComputeGraph @ 14e225820

void __cdecl UOptimusComputeGraph::StaticRegisterNativesUOptimusComputeGraph(void)

{
  return;
}

