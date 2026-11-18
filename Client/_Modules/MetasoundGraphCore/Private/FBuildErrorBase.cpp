// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 16

// FBuildErrorBase @ 14ad37830

FBuildErrorBase * __thiscall
Metasound::FBuildErrorBase::FBuildErrorBase(FBuildErrorBase *this,FName *param_1,FText *param_2)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FBuildErrorBase_Metasound__6B_;
  this->ErrorType = *param_1;
  (this->ErrorDescription).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (this->ErrorDescription).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ErrorDescription).Flags = param_2->Flags;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->Destinations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Destinations).ArrayNum = 0;
  (this->Destinations).ArrayMax = 0;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  return this;
}

// ~FBuildErrorBase @ 14ad3d810

void __thiscall Metasound::FBuildErrorBase::~FBuildErrorBase(FBuildErrorBase *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::FInputDataDestination,int>
            ((FInputDataDestination *)(this->Destinations).AllocatorInstance.Data,
             (this->Destinations).ArrayNum);
  pFVar1 = (this->Destinations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::FDataEdge,int>
            ((FDataEdge *)(this->Edges).AllocatorInstance.Data,(this->Edges).ArrayNum);
  pFVar1 = (this->Edges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->ErrorDescription).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad3d87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x10))();
    return;
  }
  return;
}

// AddDataEdge @ 14ad43ae0

void __thiscall Metasound::FBuildErrorBase::AddDataEdge(FBuildErrorBase *this,FDataEdge *param_1)

{
  TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FDataEdge *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->Edges;
  pFVar3 = (FDataEdge *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Edges).ArrayMax)) {
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
  iVar6 = (this->Edges).ArrayNum;
  piVar2 = &(this->Edges).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Edges).ArrayNum = iVar6 + 1;
  FDataEdge::FDataEdge
            ((FDataEdge *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x68),param_1);
  return;
}

// AddDataEdges @ 14ad447a0

void __thiscall
Metasound::FBuildErrorBase::AddDataEdges
          (FBuildErrorBase *this,TArrayView<Metasound::FDataEdge_const_,int> *param_1)

{
  int iVar1;
  FDataEdge *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  if ((pFVar2 == (FDataEdge *)0x0) && (iVar1 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar1,&(this->Edges).AllocatorInstance,&(this->Edges).ArrayNum,
                     &(this->Edges).ArrayMax);
  ConstructItems<Metasound::FDataEdge,Metasound::FDataEdge,int>
            ((this->Edges).AllocatorInstance.Data + (longlong)iVar5 * 0x68,pFVar2,iVar1);
  return;
}

// AddInputDataDestination @ 14ad44990

void __thiscall
Metasound::FBuildErrorBase::AddInputDataDestination
          (FBuildErrorBase *this,FInputDataDestination *param_1)

{
  TArray<Metasound::FInputDataDestination,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FInputDataDestination *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &this->Destinations;
  pFVar3 = (FInputDataDestination *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Destinations).ArrayMax)) {
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
  iVar6 = (this->Destinations).ArrayNum;
  piVar2 = &(this->Destinations).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Destinations).ArrayNum = iVar6 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x40;
  *(INode **)pFVar7 = param_1->Node;
  *(undefined ***)(pFVar7 + 8) = &___7FDataVertex_Metasound__6B_;
  *(longlong *)(pFVar7 + 0x10) = (param_1->Vertex)._padding_;
  *(longlong *)(pFVar7 + 0x18) = (param_1->Vertex)._padding_;
  *(int *)(pFVar7 + 0x20) = (int)(param_1->Vertex)._padding_;
  *(undefined ***)(pFVar7 + 8) = &___7FInputDataVertex_Metasound__6B_;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              *)(pFVar7 + 0x28),&(param_1->Vertex).Literal.Value);
  return;
}

// AddInputDataDestinations @ 14ad45070

void __thiscall
Metasound::FBuildErrorBase::AddInputDataDestinations
          (FBuildErrorBase *this,TArrayView<Metasound::FInputDataDestination_const_,int> *param_1)

{
  int iVar1;
  FInputDataDestination *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  if ((pFVar2 == (FInputDataDestination *)0x0) && (iVar1 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar1,&(this->Destinations).AllocatorInstance,
                     &(this->Destinations).ArrayNum,&(this->Destinations).ArrayMax);
  ConstructItems<Metasound::FInputDataDestination,Metasound::FInputDataDestination,int>
            ((this->Destinations).AllocatorInstance.Data + (longlong)iVar5 * 0x40,pFVar2,iVar1);
  return;
}

// AddNode @ 14ad45200

void __thiscall Metasound::FBuildErrorBase::AddNode(FBuildErrorBase *this,INode *param_1)

{
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  INode *local_18 [2];
  
  pTVar1 = &this->Nodes;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Nodes).ArrayMax * 8)) {
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
  iVar6 = (this->Nodes).ArrayNum;
  piVar2 = &(this->Nodes).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Nodes).ArrayNum = iVar6 + 1;
  *(INode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddNodes @ 14ad459e0

void __thiscall
Metasound::FBuildErrorBase::AddNodes
          (FBuildErrorBase *this,TArrayView<Metasound::INode_const_*_const,int> *param_1)

{
  int iVar1;
  INode **_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  _Src = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  if ((_Src == (INode **)0x0) && (iVar1 != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&(this->Nodes).AllocatorInstance,&(this->Nodes).ArrayNum,
                     &(this->Nodes).ArrayMax);
  if (iVar1 != 0) {
    memcpy((this->Nodes).AllocatorInstance.Data + (longlong)iVar4 * 8,_Src,(longlong)iVar1 << 3);
  }
  return;
}

// AddOutputDataSource @ 14ad45c90

void __thiscall
Metasound::FBuildErrorBase::AddOutputDataSource(FBuildErrorBase *this,FOutputDataSource *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FOutputDataSource *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pFVar3 = (FOutputDataSource *)(this->Sources).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Sources).ArrayMax)) {
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
  iVar6 = (this->Sources).ArrayNum;
  piVar1 = &(this->Sources).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->Sources).AllocatorInstance,piVar1);
  }
  (this->Sources).ArrayNum = iVar6 + 1;
  pFVar2 = (this->Sources).AllocatorInstance.Data + (longlong)iVar6 * 0x28;
  *(INode **)pFVar2 = param_1->Node;
  *(undefined ***)(pFVar2 + 8) = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)&(param_1->Vertex).field_0x8;
  *(undefined8 *)(pFVar2 + 0x18) = *(undefined8 *)&(param_1->Vertex).field_0x10;
  *(undefined4 *)(pFVar2 + 0x20) = *(undefined4 *)&(param_1->Vertex).field_0x18;
  *(undefined ***)(pFVar2 + 8) = &___7FOutputDataVertex_Metasound__6B_;
  return;
}

// AddOutputDataSources @ 14ad46300

void __thiscall
Metasound::FBuildErrorBase::AddOutputDataSources
          (FBuildErrorBase *this,TArrayView<Metasound::FOutputDataSource_const_,int> *param_1)

{
  int iVar1;
  FOutputDataSource *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  if ((pFVar2 == (FOutputDataSource *)0x0) && (iVar1 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar1,&(this->Sources).AllocatorInstance,&(this->Sources).ArrayNum,
                     &(this->Sources).ArrayMax);
  ConstructItems<Metasound::FOutputDataSource,Metasound::FOutputDataSource,int>
            ((this->Sources).AllocatorInstance.Data + (longlong)iVar5 * 0x28,pFVar2,iVar1);
  return;
}

// GetDataEdges @ 14ad54f40

TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::FBuildErrorBase::GetDataEdges(FBuildErrorBase *this)

{
  return &this->Edges;
}

// GetErrorDescription @ 14ad55c90

FText * __thiscall Metasound::FBuildErrorBase::GetErrorDescription(FBuildErrorBase *this)

{
  return &this->ErrorDescription;
}

// GetErrorType @ 14ad55ca0

FName * __thiscall Metasound::FBuildErrorBase::GetErrorType(FBuildErrorBase *this)

{
  return &this->ErrorType;
}

// GetInputDataDestinations @ 14ad55e70

TArray<Metasound::FInputDataDestination,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::FBuildErrorBase::GetInputDataDestinations(FBuildErrorBase *this)

{
  return &this->Destinations;
}

// GetNodes @ 14ad56320

TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::FBuildErrorBase::GetNodes(FBuildErrorBase *this)

{
  return &this->Nodes;
}

// GetOutputDataSources @ 14ad56550

TArray<Metasound::FOutputDataSource,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::FBuildErrorBase::GetOutputDataSources(FBuildErrorBase *this)

{
  return &this->Sources;
}

