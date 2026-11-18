// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 21

// FLinkerInstancingContext @ 1420a1960

FLinkerInstancingContext * __thiscall
FLinkerInstancingContext::FLinkerInstancingContext
          (FLinkerInstancingContext *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedLinkerInstancingContextData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  TSharedRef<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FLLMScope local_48 [2];
  TSharedRef<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1> local_40;
  FMemScope local_30;
  FLinkerInstancingContext local_28;
  
  (this->SharedData).Object = (FSharedLinkerInstancingContextData *)0x0;
  (this->SharedData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FLLMScope::FLLMScope
            (local_48,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,None,
             Default,true);
  local_40.Object =
       (FSharedLinkerInstancingContextData *)
       LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
  FMemScope::FMemScope(&local_30,(FName *)&local_40,true);
  pTVar7 = MakeShared<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                     (&local_40,param_1);
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar7->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = pTVar3;
  if (this != &local_28) {
    (this->SharedData).Object = pFVar4;
    pTVar5 = (this->SharedData).SharedReferenceCount.ReferenceController;
    if (pTVar3 != pTVar5) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      (this->SharedData).SharedReferenceCount.ReferenceController = pTVar3;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar5->_padding_)(pTVar5);
          LOCK();
          paVar1 = &pTVar5->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_30);
  FLLMScope::~FLLMScope(local_48);
  param_1->HashSize = 0;
  FVar6 = (param_1->Hash).SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_1->Elements);
  return this;
}

// FLinkerInstancingContext @ 1420a1ab0

FLinkerInstancingContext * __thiscall
FLinkerInstancingContext::FLinkerInstancingContext(FLinkerInstancingContext *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FLinkerInstancingContext *pFVar7;
  FSharedLinkerInstancingContextData *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  FLinkerInstancingContext local_38;
  
  (this->SharedData).Object = (FSharedLinkerInstancingContextData *)0x0;
  (this->SharedData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,None,
             Default,true);
  local_res10 = LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  pTVar6 = ::operator_new(400);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FSharedLinkerInstancingContextData *)&DAT_00000010;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSharedLinkerInstancingContextData_FLinkerInstancingContext___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x180);
    *(undefined4 *)((longlong)&pTVar6[4]._padding_ + 4) = 0x80;
    pFVar8 = (FSharedLinkerInstancingContextData *)(pTVar6 + 1);
    pTVar6[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    *(undefined1 *)((longlong)&pTVar6[10]._padding_ + 1) = 1;
    pTVar6[0x10].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[0x11]._padding_ = 0xffffffff;
    pTVar6[0x15].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[0x16]._padding_ = 0xffffffff;
    *(undefined1 *)&pTVar6[0x18]._padding_ = 1;
    if (pFVar8 == (FSharedLinkerInstancingContextData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FLinkerInstancingContext *)(*pcVar4)();
        return pFVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = pTVar6;
  if (this != &local_38) {
    (this->SharedData).Object = pFVar8;
    pTVar3 = (this->SharedData).SharedReferenceCount.ReferenceController;
    if (pTVar6 != pTVar3) {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      (this->SharedData).SharedReferenceCount.ReferenceController = pTVar6;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar3->_padding_)(pTVar3);
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// FLinkerInstancingContext @ 1420a1c60

FLinkerInstancingContext * __thiscall
FLinkerInstancingContext::FLinkerInstancingContext(FLinkerInstancingContext *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FLinkerInstancingContext *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSharedLinkerInstancingContextData *pFVar10;
  FLLMScope local_res8 [5];
  FName local_res18;
  FMemScope local_res20;
  FLinkerInstancingContext local_48;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->SharedData).Object = (FSharedLinkerInstancingContextData *)0x0;
  (this->SharedData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,None,
             Default,true);
  local_res18 = LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  pTVar6 = ::operator_new(400);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FSharedLinkerInstancingContextData *)&DAT_00000010;
    pTVar6 = pTVar8;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pFVar10 = (FSharedLinkerInstancingContextData *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSharedLinkerInstancingContextData_FLinkerInstancingContext___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[4]._padding_ + 4) = 0x80;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[6]._padding_ = 0;
    *(undefined1 *)&pTVar6[6].SharedReferenceCount = 0;
    pTVar6[7]._padding_ = 0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[8]._padding_ = 0;
    pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[9]._padding_ = 0;
    pTVar6[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar6[10]._padding_ = 0x100;
    pTVar6[0xb]._padding_ = 0;
    pTVar6[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xe]._padding_ = 0;
    pTVar6[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x10]._padding_ = 0;
    pTVar6[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x10].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[0x11]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[0x11]._padding_ + 4) = 0;
    pTVar6[0x12]._padding_ = 0;
    pTVar6[0x12].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x13]._padding_ = 0;
    pTVar6[0x13].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x13].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x15]._padding_ = 0;
    pTVar6[0x15].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x15].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[0x16]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[0x16]._padding_ + 4) = 0;
    pTVar6[0x17]._padding_ = 0;
    pTVar6[0x17].SharedReferenceCount = (atomic<int>)0x0;
    *(bool *)&pTVar6[0x18]._padding_ = param_1;
    if (pFVar10 == (FSharedLinkerInstancingContextData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FLinkerInstancingContext *)(*pcVar4)();
        return pFVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = pTVar6;
  if (this != &local_48) {
    (this->SharedData).Object = pFVar10;
    pTVar3 = (this->SharedData).SharedReferenceCount.ReferenceController;
    if (pTVar6 != pTVar3) {
      (this->SharedData).SharedReferenceCount.ReferenceController = pTVar6;
      pTVar9 = pTVar8;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar3->_padding_)(pTVar3);
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// AddPackageMapping @ 1420a9540

void __thiscall
FLinkerInstancingContext::AddPackageMapping
          (FLinkerInstancingContext *this,FName param_1,FName param_2)

{
  FSharedLinkerInstancingContextData *SRWLock;
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SRWLock = (this->SharedData).Object;
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,None,
             Default,true);
  local_res20 = LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  FLinkerInstancedPackageMap::AddPackageMapping(&SRWLock->InstancedPackageMap,param_1,param_2);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// AddPackageMappingFunc @ 1420a9650

void __thiscall
FLinkerInstancingContext::AddPackageMappingFunc
          (FLinkerInstancingContext *this,TFunction<FName___cdecl(FName)> *param_1)

{
  longlong lVar1;
  FSharedLinkerInstancingContextData *SRWLock;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)param_1;
  SRWLock = (this->SharedData).Object;
  uStack_10 = (longlong *)0x0;
  if (lVar1 != 0) {
    puVar10 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar10)(puVar10,&local_28);
  }
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  lVar8 = *(longlong *)&(SRWLock->InstancedPackageMapFunc).field_0x0;
  uVar3 = *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x10;
  uVar4 = *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x14;
  uVar5 = *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x18;
  uVar6 = *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x1c;
  uVar7 = *(undefined8 *)&(SRWLock->InstancedPackageMapFunc).field_0x20;
  plVar11 = *(longlong **)&(SRWLock->InstancedPackageMapFunc).field_0x28;
  *(longlong *)&(SRWLock->InstancedPackageMapFunc).field_0x0 = lVar1;
  *(ulonglong *)&(SRWLock->InstancedPackageMapFunc).field_0x8 = CONCAT44(uStack_2c,uStack_30);
  *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x10 = (undefined4)local_28;
  *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x14 = local_28._4_4_;
  *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x18 = uStack_20;
  *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x1c = uStack_1c;
  *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x20 = (undefined4)local_18;
  *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x24 = local_18._4_4_;
  *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x28 = (undefined4)uStack_10;
  *(undefined4 *)&(SRWLock->InstancedPackageMapFunc).field_0x2c = uStack_10._4_4_;
  local_28._0_4_ = uVar3;
  local_28._4_4_ = uVar4;
  uStack_20 = uVar5;
  uStack_1c = uVar6;
  local_18 = uVar7;
  uStack_10 = plVar11;
  if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if (lVar8 != 0) {
    plVar11 = &local_28;
    if (uStack_10 != (longlong *)0x0) {
      plVar11 = uStack_10;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// AddPathMapping @ 1420a97f0

void __thiscall
FLinkerInstancingContext::AddPathMapping
          (FLinkerInstancingContext *this,FSoftObjectPath *param_1,FSoftObjectPath *param_2)

{
  FSharedLinkerInstancingContextData *SRWLock;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FSoftObjectPath *pFVar4;
  FSoftObjectPath *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  FLLMScope local_res8 [2];
  TPairInitializer<FTopLevelAssetPath_&&,FTopLevelAssetPath_&&> local_res10;
  FSoftObjectPath *local_res20;
  FName local_f8;
  FMemScope local_f0;
  FName *local_e8;
  FName *local_e0;
  FString local_d8;
  FString local_c8;
  FName local_b8;
  FName FStack_b0;
  FName local_a8;
  FName FStack_a0;
  FString local_98;
  FString local_88;
  FSoftObjectPath local_78;
  FSoftObjectPath local_58;
  
  iVar10 = (param_1->SubPathString).Data.ArrayNum;
  pFVar7 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = iVar6;
  }
  pFVar3 = ::FString::ConstructFromPtrSize
                     (&local_d8,(uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data,iVar9)
  ;
  iVar10 = 0;
  pFVar8 = pFVar7;
  if (&local_98 != pFVar3) {
    pFVar8 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar3->Data).ArrayNum;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (1 < iVar10) {
    local_res10.Value = &param_1->AssetPath;
    `FLinkerInstancingContext::AddPathMapping'::__l2::<lambda_1>::operator()(&local_res10.Value);
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  iVar10 = (param_2->SubPathString).Data.ArrayNum;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  pFVar3 = ::FString::ConstructFromPtrSize
                     (&local_c8,(uchar *)(param_2->SubPathString).Data.AllocatorInstance.Data,iVar9)
  ;
  if (&local_88 != pFVar3) {
    pFVar7 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = (pFVar3->Data).ArrayNum;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (1 < iVar6) {
    local_res20 = param_2;
    `FLinkerInstancingContext::AddPathMapping'::__l2::<lambda_2>::operator()(&local_res20);
  }
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SRWLock = (this->SharedData).Object;
  pFVar4 = FSoftObjectPath::FSoftObjectPath(&local_78,param_2);
  pFVar5 = FSoftObjectPath::FSoftObjectPath(&local_58,param_1);
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,None,
             Default,true);
  local_f8 = LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
  FMemScope::FMemScope(&local_f0,&local_f8,true);
  local_a8 = (pFVar4->AssetPath).PackageName;
  FStack_a0 = (pFVar4->AssetPath).AssetName;
  local_e8 = &local_b8;
  local_b8 = (pFVar5->AssetPath).PackageName;
  FStack_b0 = (pFVar5->AssetPath).AssetName;
  local_e0 = &local_a8;
  TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FTopLevelAssetPath_&&,FTopLevelAssetPath_&&>_>
            ((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
              *)&SRWLock->PathMapping,&local_res10,(bool *)&local_e8);
  FMemScope::~FMemScope(&local_f0);
  FLLMScope::~FLLMScope(local_res8);
  if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  pFVar7 = (pFVar5->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (pFVar4->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (param_2->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// AddTag @ 1420a9c20

void __thiscall FLinkerInstancingContext::AddTag(FLinkerInstancingContext *this,FName param_1)

{
  FSharedLinkerInstancingContextData *SRWLock;
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FMemScope local_28 [3];
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SRWLock = (this->SharedData).Object;
  local_res20 = param_1;
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,None,
             Default,true);
  local_res18 = LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
  FMemScope::FMemScope(local_28,&local_res18,true);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&SRWLock->Tags,&local_res10,(bool *)&local_res20);
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res8);
  if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// AppendTags @ 1420aa190

void __thiscall
FLinkerInstancingContext::AppendTags
          (FLinkerInstancingContext *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  FSharedLinkerInstancingContextData *SRWLock;
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SRWLock = (this->SharedData).Object;
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,None,
             Default,true);
  local_res18 = LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
            (&SRWLock->Tags,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// BuildPackageMapping @ 1420ab040

void __thiscall
FLinkerInstancingContext::BuildPackageMapping
          (FLinkerInstancingContext *this,FName param_1,FName param_2)

{
  atomic<bool> aVar1;
  FSharedLinkerInstancingContextData *SRWLock;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_28 [2];
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
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
  SRWLock = (this->SharedData).Object;
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
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
  aVar1 = ((this->SharedData).Object)->bSoftObjectPathRemappingEnabled;
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,None,
             Default,true);
  local_res20 = LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
  FMemScope::FMemScope(local_28,&local_res20,true);
  FLinkerInstancedPackageMap::BuildPackageMapping
            (&SRWLock->InstancedPackageMap,param_1,param_2,(bool)aVar1);
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res8);
  if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// DuplicateContext @ 1420b3bc0

FLinkerInstancingContext * __cdecl
FLinkerInstancingContext::DuplicateContext
          (FLinkerInstancingContext *__return_storage_ptr__,FLinkerInstancingContext *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
  *pTVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
  *pTVar9;
  FLinkerInstancingContext *pFVar10;
  TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
  *pTVar11;
  TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
  *pTVar12;
  FLinkerInstancingContext local_18;
  
  (__return_storage_ptr__->SharedData).Object = (param_1->SharedData).Object;
  pTVar4 = (param_1->SharedData).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedData).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = SharedPointerInternals::
           NewIntrusiveReferenceController<1,FLinkerInstancingContext::FSharedLinkerInstancingContextData,FLinkerInstancingContext::FSharedLinkerInstancingContextData_&>
                     ((__return_storage_ptr__->SharedData).Object);
  if ((&pTVar9->ObjectStorage ==
       (TTypeCompatibleBytes<FLinkerInstancingContext::FSharedLinkerInstancingContextData> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FLinkerInstancingContext *)(*pcVar6)();
    return pFVar10;
  }
  if (pTVar9 != (TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
                 *)0x0) {
    LOCK();
    *(int *)&pTVar9->_padding_ = (int)pTVar9->_padding_ + 1;
    UNLOCK();
  }
  pTVar12 = pTVar9;
  if (__return_storage_ptr__ != &local_18) {
    (__return_storage_ptr__->SharedData).Object =
         (FSharedLinkerInstancingContextData *)&pTVar9->ObjectStorage;
    pTVar5 = (TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
              *)(__return_storage_ptr__->SharedData).SharedReferenceCount.ReferenceController;
    if (pTVar9 != pTVar5) {
      pTVar11 = (TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
                 *)0x0;
      (__return_storage_ptr__->SharedData).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pTVar9;
      pTVar12 = (TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
                 *)0x0;
      if (pTVar5 != (TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
                     *)0x0) {
        LOCK();
        plVar1 = &pTVar5->_padding_;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        pTVar12 = pTVar11;
        if ((int)lVar7 == 1) {
          (**(code **)pTVar5->_padding_)(pTVar5);
          LOCK();
          puVar2 = (undefined1 *)((longlong)&pTVar5->_padding_ + 4);
          iVar3 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar9);
  return __return_storage_ptr__;
}

// EnableAutomationTest @ 1420b4220

void __thiscall FLinkerInstancingContext::EnableAutomationTest(FLinkerInstancingContext *this)

{
  FSharedLinkerInstancingContextData *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SRWLock = (this->SharedData).Object;
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  (SRWLock->InstancedPackageMap).bEnableNonEditorPath = true;
                    /* WARNING: Could not recover jumptable at 0x0001420b429b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// FindPackageMapping @ 1420b70d0

bool __thiscall
FLinkerInstancingContext::FindPackageMapping
          (FLinkerInstancingContext *this,FName param_1,FName *param_2)

{
  FSharedLinkerInstancingContextData *SRWLock;
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FName *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FName local_res20;
  FName local_28;
  FName local_20;
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
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
  SRWLock = (this->SharedData).Object;
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,None,
             Default,true);
  local_res20 = LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
  FMemScope::FMemScope(&local_res10,&local_res20,true);
  pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&SRWLock->InstancedPackageMap,param_1);
  if (pFVar6 != (FName *)0x0) {
    *param_2 = *pFVar6;
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope(local_res8);
    if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    return true;
  }
  pvVar1 = *(void **)&(SRWLock->InstancedPackageMapFunc).field_0x0;
  if (pvVar1 != (void *)0x0) {
    local_28 = param_1;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar3 = *(code **)&(SRWLock->InstancedPackageMapFunc).field_0x0;
    plVar2 = *(longlong **)&(SRWLock->InstancedPackageMapFunc).field_0x28;
    plVar8 = (longlong *)&(SRWLock->InstancedPackageMapFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar8 = plVar2;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(&local_20,uVar7,&local_28);
    if (local_20 != param_1) {
      *param_2 = local_20;
      FMemScope::~FMemScope(&local_res10);
      FLLMScope::~FLLMScope(local_res8);
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      return true;
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return false;
}

// FixupSoftObjectPath @ 1420b8d80

void __thiscall
FLinkerInstancingContext::FixupSoftObjectPath
          (FLinkerInstancingContext *this,FSoftObjectPath *param_1)

{
  FSharedLinkerInstancingContextData *SRWLock;
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_38;
  FSoftObjectPath local_30;
  
  bVar2 = IsInstanced(this);
  if (bVar2) {
    if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((this->SharedData).Object)->bSoftObjectPathRemappingEnabled != (atomic<bool>)0x0) {
      if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FSharedLinkerInstancingContextData::RemapPath((this->SharedData).Object,&local_30,param_1);
      bVar2 = FSoftObjectPath::operator==(&local_30,param_1);
      if (bVar2) {
        if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        SRWLock = (this->SharedData).Object;
        if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x1c,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        AcquireSRWLockShared((PSRWLOCK)SRWLock);
        FLLMScope::FLLMScope
                  (local_res18,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,
                   None,Default,true);
        local_res20 = LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
        FMemScope::FMemScope(&local_38,&local_res20,true);
        FLinkerInstancedPackageMap::FixupSoftObjectPath(&SRWLock->InstancedPackageMap,param_1);
        FMemScope::~FMemScope(&local_38);
        FLLMScope::~FLLMScope(local_res18);
        if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
          ReleaseSRWLockShared((PSRWLOCK)SRWLock);
        }
      }
      else {
        FSoftObjectPath::operator=(param_1,&local_30);
      }
      if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetSoftObjectPathRemappingEnabled @ 1420c87b0

bool __thiscall
FLinkerInstancingContext::GetSoftObjectPathRemappingEnabled(FLinkerInstancingContext *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)((this->SharedData).Object)->bSoftObjectPathRemappingEnabled;
}

// HasTag @ 1420c8d00

bool __thiscall FLinkerInstancingContext::HasTag(FLinkerInstancingContext *this,FName param_1)

{
  FSharedLinkerInstancingContextData *SRWLock;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> *pFVar7;
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
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
  SRWLock = (this->SharedData).Object;
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(SRWLock->Tags).Elements.field_0x8 != *(int *)&(SRWLock->Tags).Elements.field_0x34) {
    pFVar7 = *(ForElementType<FSetElementId> **)&(SRWLock->Tags).Hash.SecondaryData.field_0x0;
    if (pFVar7 == (ForElementType<FSetElementId> *)0x0) {
      pFVar7 = &(SRWLock->Tags).Hash;
    }
    iVar6 = *(int *)(pFVar7->InlineData +
                    (ulonglong)((SRWLock->Tags).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(SRWLock->Tags).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar6 * 0x10) == param_1) goto LAB_1420c8dde;
        iVar6 = *(int *)(lVar1 + (longlong)iVar6 * 0x10 + 8);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_1420c8dde:
  if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return iVar6 != -1;
}

// IsInstanced @ 1420c97f0

bool __thiscall FLinkerInstancingContext::IsInstanced(FLinkerInstancingContext *this)

{
  FSharedLinkerInstancingContextData *SRWLock;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  SRWLock = (this->SharedData).Object;
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if ((((SRWLock->InstancedPackageMap).bIsInstanced == false) &&
      (*(longlong *)&(SRWLock->InstancedPackageMapFunc).field_0x0 == 0)) &&
     (*(int *)&(SRWLock->PathMapping).field_0x8 - *(int *)&(SRWLock->PathMapping).field_0x34 < 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return bVar2;
}

// RemapPackage @ 1420d0840

FName __thiscall
FLinkerInstancingContext::RemapPackage(FLinkerInstancingContext *this,FName *param_1)

{
  FSharedLinkerInstancingContextData *SRWLock;
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FName FVar6;
  FName *pFVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FName *in_R8;
  FLLMScope local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FMemScope local_38 [2];
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FName)(*pcVar3)();
      return FVar6;
    }
  }
  SRWLock = (this->SharedData).Object;
  bVar4 = false;
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FName)(*pcVar3)();
      return FVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&SRWLock->InstancedPackageMap,*in_R8);
  if (pFVar7 == (FName *)0x0) {
    *param_1 = *in_R8;
    pvVar1 = *(void **)&(SRWLock->InstancedPackageMapFunc).field_0x0;
    if (pvVar1 == (void *)0x0) goto LAB_1420d0931;
    local_res10 = *in_R8;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar3 = *(code **)&(SRWLock->InstancedPackageMapFunc).field_0x0;
    plVar2 = *(longlong **)&(SRWLock->InstancedPackageMapFunc).field_0x28;
    plVar9 = (longlong *)&(SRWLock->InstancedPackageMapFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar9 = plVar2;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar3)(&local_res18,uVar8);
    bVar4 = true;
  }
  else {
    local_res18 = *pFVar7;
    bVar4 = false;
  }
  *param_1 = local_res18;
LAB_1420d0931:
  if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (bVar4) {
    if (SRWLock == (FSharedLinkerInstancingContextData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar6 = (FName)(*pcVar3)();
        return FVar6;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    FLLMScope::FLLMScope
              (local_res8,LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName,false,None,
               Default,true);
    local_res20 = LLMTagDeclaration_Loading_LinkerInstancingContext.UniqueName;
    FMemScope::FMemScope(local_38,&local_res20,true);
    FLinkerInstancedPackageMap::AddPackageMapping(&SRWLock->InstancedPackageMap,*in_R8,*param_1);
    FMemScope::~FMemScope(local_38);
    FLLMScope::~FLLMScope(local_res8);
    if (SRWLock != (FSharedLinkerInstancingContextData *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return (FName)param_1;
}

// RemapPath @ 1420d0a10

FSoftObjectPath * __thiscall
FLinkerInstancingContext::RemapPath
          (FLinkerInstancingContext *this,FSoftObjectPath *__return_storage_ptr__,
          FSoftObjectPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSoftObjectPath *pFVar3;
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSoftObjectPath *)(*pcVar1)();
      return pFVar3;
    }
  }
  FSharedLinkerInstancingContextData::RemapPath
            ((this->SharedData).Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// SetSoftObjectPathRemappingEnabled @ 1420da650

void __thiscall
FLinkerInstancingContext::SetSoftObjectPathRemappingEnabled
          (FLinkerInstancingContext *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  ((this->SharedData).Object)->bSoftObjectPathRemappingEnabled = (atomic<bool>)param_1;
  UNLOCK();
  return;
}

// operator() @ 150485190

bool __thiscall `FLinkerInstancingContext::AddPathMapping'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5362718130248352018>);
  if (bVar2) {
    FSoftObjectPath::ToString(*(FSoftObjectPath **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5362718130248352018>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504851f7;
    }
  }
  bVar2 = false;
LAB_1504851f7:
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

// operator() @ 150485360

bool __thiscall `FLinkerInstancingContext::AddPathMapping'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5362718130248352020>);
  if (bVar2) {
    FSoftObjectPath::ToString(*(FSoftObjectPath **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5362718130248352020>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504853c7;
    }
  }
  bVar2 = false;
LAB_1504853c7:
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

