// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// StaticStruct @ 14ad79d60

UScriptStruct * __cdecl FMetasoundFrontendDocument::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendDocument.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendDocument.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendDocument,(UObject *)pUVar1,
                         L"MetasoundFrontendDocument");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendDocument.OuterSingleton;
}

// FMetasoundFrontendDocument @ 14ad9a6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMetasoundFrontendDocument * __thiscall
FMetasoundFrontendDocument::FMetasoundFrontendDocument(FMetasoundFrontendDocument *this)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendDocument *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  (this->AccessPoint).Token.Object = (FAccessToken *)0x0;
  (this->AccessPoint).Token.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStack_20.ReferenceController = ::operator_new(0x18);
  if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pTVar4 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4 = FStack_20.ReferenceController + 1;
    (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_20.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAccessToken_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FMetasoundFrontendDocument *)(*pcVar1)();
        return pFVar3;
      }
    }
    LOCK();
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = FStack_20.ReferenceController;
    local_28 = pTVar4;
  }
  if (this != (FMetasoundFrontendDocument *)&stack0xffffffffffffffd8) {
    (this->AccessPoint).Token.Object = (FAccessToken *)pTVar4;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AccessPoint).Token.SharedReferenceCount,&stack0xffffffffffffffe0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (this->Metadata).Version.Name.ComparisonIndex = 0;
  (this->Metadata).Version.Name.Number = 0;
  (this->Metadata).Version.Number.Major = 1;
  (this->Metadata).Version.Number.Minor = 0;
  *(undefined8 *)&(this->Interfaces).Elements = 0;
  *(undefined8 *)&(this->Interfaces).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Interfaces).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x34 = 0;
  (this->Interfaces).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Interfaces).HashSize = 0;
  FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass(&this->RootGraph);
  (this->Subgraphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subgraphs).ArrayNum = 0;
  (this->Subgraphs).ArrayMax = 0;
  (this->Dependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dependencies).ArrayNum = 0;
  (this->Dependencies).ArrayMax = 0;
  this->IdCounter = 1;
  *(undefined1 *)&(this->RootGraph)._padding_ = 1;
  return this;
}

// ~FMetasoundFrontendDocument @ 14ad9e400

void __thiscall
FMetasoundFrontendDocument::~FMetasoundFrontendDocument(FMetasoundFrontendDocument *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  DestructItems<FMetasoundFrontendClass,int>
            ((FMetasoundFrontendClass *)(this->Dependencies).AllocatorInstance.Data,
             (this->Dependencies).ArrayNum);
  pFVar1 = (this->Dependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMetasoundFrontendGraphClass,int>
            ((FMetasoundFrontendGraphClass *)(this->Subgraphs).AllocatorInstance.Data,
             (this->Subgraphs).ArrayNum);
  pFVar1 = (this->Subgraphs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMetasoundFrontendGraphClass::~FMetasoundFrontendGraphClass(&this->RootGraph);
  (this->Interfaces).HashSize = 0;
  FVar2 = (this->Interfaces).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Interfaces).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AccessPoint).Token.SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 14addf5a0

FMetasoundFrontendDocument * __thiscall
FMetasoundFrontendDocument::operator=
          (FMetasoundFrontendDocument *this,FMetasoundFrontendDocument *param_1)

{
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 *puVar1;
  undefined1 *this_01;
  int *piVar2;
  TArray<FMetasoundFrontendGraph,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FMetasoundFrontendGraph,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  int iVar8;
  FMetasoundFrontendGraph *pFVar9;
  FMetasoundFrontendGraphClass *pFVar10;
  FMetasoundFrontendClass *pFVar11;
  FMetasoundFrontendVersionNumber FVar12;
  longlong lVar13;
  
  FVar12 = (param_1->Metadata).Version.Number;
  this_00 = &this->Interfaces;
  (this->Metadata).Version.Name = (param_1->Metadata).Version.Name;
  (this->Metadata).Version.Number = FVar12;
  if (this_00 != &param_1->Interfaces) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->Interfaces).Hash,&(this->Interfaces).HashSize,&(param_1->Interfaces).Hash,
               (param_1->Interfaces).HashSize);
    iVar7 = *(int *)&(param_1->Interfaces).Elements.field_0x8;
    TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,iVar7);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar7,(ForAnyElementType *)this_00,
               (int *)&(this->Interfaces).Elements.field_0x8,
               (int *)&(this->Interfaces).Elements.field_0xc);
    puVar1 = &(param_1->Interfaces).Elements.field_0x10;
    this_01 = &(this->Interfaces).Elements.field_0x10;
    *(undefined4 *)&(this->Interfaces).Elements.field_0x30 =
         *(undefined4 *)&(param_1->Interfaces).Elements.field_0x30;
    *(undefined4 *)&(this->Interfaces).Elements.field_0x34 =
         *(undefined4 *)&(param_1->Interfaces).Elements.field_0x34;
    if (this_01 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar7 != 0) {
      memcpy(*(void **)&this_00->Elements,*(void **)&(param_1->Interfaces).Elements,
             (longlong)iVar7 * 0x18);
    }
  }
  lVar13 = (param_1->RootGraph)._padding_;
  (this->RootGraph)._padding_ = (param_1->RootGraph)._padding_;
  (this->RootGraph)._padding_ = lVar13;
  lVar13 = (param_1->RootGraph)._padding_;
  (this->RootGraph)._padding_ = (param_1->RootGraph)._padding_;
  (this->RootGraph)._padding_ = lVar13;
  lVar13 = (param_1->RootGraph)._padding_;
  (this->RootGraph)._padding_ = (param_1->RootGraph)._padding_;
  (this->RootGraph)._padding_ = lVar13;
  lVar13 = (param_1->RootGraph)._padding_;
  (this->RootGraph)._padding_ = (param_1->RootGraph)._padding_;
  (this->RootGraph)._padding_ = lVar13;
  *(int *)&(this->RootGraph)._padding_ = (int)(param_1->RootGraph)._padding_;
  FMetasoundFrontendClassInterface::operator=
            ((FMetasoundFrontendClassInterface *)&(this->RootGraph)._padding_,
             (FMetasoundFrontendClassInterface *)&(param_1->RootGraph)._padding_);
  pTVar3 = &(param_1->RootGraph).PagedGraphs;
  pTVar4 = &(this->RootGraph).PagedGraphs;
  if (pTVar4 != pTVar3) {
    DestructItems<FMetasoundFrontendGraph,int>
              ((FMetasoundFrontendGraph *)(pTVar4->AllocatorInstance).Data,
               (this->RootGraph).PagedGraphs.ArrayNum);
    iVar7 = (param_1->RootGraph).PagedGraphs.ArrayNum;
    piVar2 = &(this->RootGraph).PagedGraphs.ArrayMax;
    pFVar9 = (FMetasoundFrontendGraph *)(pTVar3->AllocatorInstance).Data;
    iVar8 = *piVar2;
    (this->RootGraph).PagedGraphs.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar7,iVar8,&pTVar4->AllocatorInstance,iVar7,piVar2);
      ConstructItems<FMetasoundFrontendGraph,FMetasoundFrontendGraph,int>
                ((pTVar4->AllocatorInstance).Data,pFVar9,iVar7);
    }
  }
  (this->RootGraph).PresetOptions.bIsPreset = (param_1->RootGraph).PresetOptions.bIsPreset;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&(this->RootGraph).PresetOptions.InputsInheritingDefault,
             &(param_1->RootGraph).PresetOptions.InputsInheritingDefault);
  pTVar5 = &this->Subgraphs;
  if (pTVar5 != &param_1->Subgraphs) {
    DestructItems<FMetasoundFrontendGraphClass,int>
              ((FMetasoundFrontendGraphClass *)(pTVar5->AllocatorInstance).Data,
               (this->Subgraphs).ArrayNum);
    iVar7 = (param_1->Subgraphs).ArrayNum;
    piVar2 = &(this->Subgraphs).ArrayMax;
    pFVar10 = (FMetasoundFrontendGraphClass *)(param_1->Subgraphs).AllocatorInstance.Data;
    (this->Subgraphs).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf8,8,iVar7,*piVar2,&pTVar5->AllocatorInstance,iVar7,piVar2);
      ConstructItems<FMetasoundFrontendGraphClass,FMetasoundFrontendGraphClass,int>
                ((pTVar5->AllocatorInstance).Data,pFVar10,iVar7);
    }
  }
  pTVar6 = &this->Dependencies;
  if (pTVar6 != &param_1->Dependencies) {
    DestructItems<FMetasoundFrontendClass,int>
              ((FMetasoundFrontendClass *)(pTVar6->AllocatorInstance).Data,
               (this->Dependencies).ArrayNum);
    iVar7 = (param_1->Dependencies).ArrayNum;
    piVar2 = &(this->Dependencies).ArrayMax;
    pFVar11 = (FMetasoundFrontendClass *)(param_1->Dependencies).AllocatorInstance.Data;
    (this->Dependencies).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,iVar7,*piVar2,&pTVar6->AllocatorInstance,iVar7,piVar2);
      ConstructItems<FMetasoundFrontendClass,FMetasoundFrontendClass,int>
                ((pTVar6->AllocatorInstance).Data,pFVar11,iVar7);
    }
  }
  this->IdCounter = param_1->IdCounter;
  return this;
}

