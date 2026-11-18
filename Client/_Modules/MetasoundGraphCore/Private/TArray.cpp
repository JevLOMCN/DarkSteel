// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 14

// TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_><Metasound::VertexPrivate::FSubInterfaceLayout_const_,int> @ 14ad28cc0

TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_>::
TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_><Metasound::VertexPrivate::FSubInterfaceLayout_const_,int>
          (TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *this,
          TArrayView<Metasound::VertexPrivate::FSubInterfaceLayout_const_,int> *param_1)

{
  int iVar1;
  FSubInterfaceLayout *pFVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pFVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((this->AllocatorInstance).Data,pFVar2,iVar1);
  return this;
}

// operator= @ 14ad3e2a0

TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_>::operator=
          (TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *this,
          TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  int iVar2;
  FSubInterfaceLayout *pFVar3;
  
  if (this != param_1) {
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FSubInterfaceLayout *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Insert @ 14ad596b0

int __thiscall
TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_>::Insert
          (TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_> *this,
          FExecuteEntry *param_1,int param_2)

{
  FExecuteEntry *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  
  pFVar1 = (FExecuteEntry *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar8 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar7 + 1;
  lVar9 = (longlong)param_2 * 0x20;
  pFVar8 = pFVar8 + lVar9;
  memmove(pFVar8 + 0x20,pFVar8,(longlong)(iVar7 - param_2) << 5);
  pFVar2 = (this->AllocatorInstance).Data;
  uVar4 = param_1->OperatorID;
  pFVar8 = pFVar2 + lVar9;
  *(undefined8 *)pFVar8 = *(undefined8 *)param_1;
  *(ulong64 *)(pFVar8 + 8) = uVar4;
  p_Var5 = param_1->Function;
  pFVar2 = pFVar2 + lVar9 + 0x10;
  *(IOperator **)pFVar2 = param_1->Operator;
  *(_func___cdecl_void_IOperator_ptr **)(pFVar2 + 8) = p_Var5;
  return param_2;
}

// Insert @ 14ad597a0

int __thiscall
TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_>::Insert
          (TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_> *this,
          FPostExecuteEntry *param_1,int param_2)

{
  FPostExecuteEntry *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  
  pFVar1 = (FPostExecuteEntry *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar8 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar7 + 1;
  lVar9 = (longlong)param_2 * 0x20;
  pFVar8 = pFVar8 + lVar9;
  memmove(pFVar8 + 0x20,pFVar8,(longlong)(iVar7 - param_2) << 5);
  pFVar2 = (this->AllocatorInstance).Data;
  uVar4 = param_1->OperatorID;
  pFVar8 = pFVar2 + lVar9;
  *(undefined8 *)pFVar8 = *(undefined8 *)param_1;
  *(ulong64 *)(pFVar8 + 8) = uVar4;
  p_Var5 = param_1->Function;
  pFVar2 = pFVar2 + lVar9 + 0x10;
  *(IOperator **)pFVar2 = param_1->Operator;
  *(_func___cdecl_void_IOperator_ptr **)(pFVar2 + 8) = p_Var5;
  return param_2;
}

// Insert @ 14ad59890

int __thiscall
TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_>::Insert
          (TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_> *this,
          FResetEntry *param_1,int param_2)

{
  FResetEntry *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  
  pFVar1 = (FResetEntry *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar8 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar7 + 1;
  lVar9 = (longlong)param_2 * 0x20;
  pFVar8 = pFVar8 + lVar9;
  memmove(pFVar8 + 0x20,pFVar8,(longlong)(iVar7 - param_2) << 5);
  pFVar2 = (this->AllocatorInstance).Data;
  uVar4 = param_1->OperatorID;
  pFVar8 = pFVar2 + lVar9;
  *(undefined8 *)pFVar8 = *(undefined8 *)param_1;
  *(ulong64 *)(pFVar8 + 8) = uVar4;
  p_Var5 = param_1->Function;
  pFVar2 = pFVar2 + lVar9 + 0x10;
  *(IOperator **)pFVar2 = param_1->Operator;
  *(_func___cdecl_void_IOperator_ptr_FResetParams_ptr **)(pFVar2 + 8) = p_Var5;
  return param_2;
}

// InsertUninitializedImpl @ 14ad5a2e0

void __thiscall
TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 14ad5a360

void __thiscall
TArray<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 14ad5a3e0

void __thiscall
TArray<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14ad5a460

void __thiscall
TArray<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// InsertUninitializedImpl @ 14ad5a4e0

void __thiscall
TArray<TTuple<FName,Metasound::FAnyDataReference>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<FName,Metasound::FAnyDataReference>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 14ad5a560

void __thiscall
TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// RemoveAt @ 14ad5ecd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>
::RemoveAt(TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
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
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x28;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_1 * 0x28 + 0x20));
  iVar5 = this->ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x28,(longlong)iVar5 * 0x28);
  }
  iVar5 = this->ArrayNum + -1;
  this->ArrayNum = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14ad5edc0

void __thiscall
TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FInputDataVertex *_Dst;
  
  _Dst = (FInputDataVertex *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x38);
  DestructItems<Metasound::FInputDataVertex,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14ad5ee30

void __thiscall
TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  
  pFVar2 = (this->AllocatorInstance).Data;
  _Dst = pFVar2 + (longlong)param_1 * 0x68;
  FVar1 = _Dst[0x60];
  if (0xc < (ulonglong)(byte)FVar1) {
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
              ::__l2::Destructors)[(byte)FVar1])(_Dst + 0x50);
  iVar5 = ~param_1 + this->ArrayNum;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove(_Dst,pFVar2 + (longlong)(this->ArrayNum - iVar5) * 0x68,(longlong)iVar5 * 0x68);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

