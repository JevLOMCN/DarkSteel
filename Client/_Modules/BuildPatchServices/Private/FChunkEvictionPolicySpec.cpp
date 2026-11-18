// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// GetTestFlags @ 14326f450

EAutomationTestFlags __thiscall
FChunkEvictionPolicySpec::GetTestFlags(FChunkEvictionPolicySpec *this)

{
  return ProductFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 14326f460

FString * __thiscall
FChunkEvictionPolicySpec::GetTestSourceFileName
          (FChunkEvictionPolicySpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\ChunkEvictionPolicy.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14326f490

int __thiscall FChunkEvictionPolicySpec::GetTestSourceFileLine(FChunkEvictionPolicySpec *this)

{
  return 0xb;
}

// GetBeautifiedTestName @ 14326f4a0

FString * __thiscall
FChunkEvictionPolicySpec::GetBeautifiedTestName
          (FChunkEvictionPolicySpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BuildPatchServices.Unit");
  return __return_storage_ptr__;
}

// Define @ 14326f4d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FChunkEvictionPolicySpec::Define(FChunkEvictionPolicySpec *this)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FFakeChunkDataAccess *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  int *piVar11;
  FFakeChunkDataAccess *pFVar12;
  FGuid *pFVar13;
  longlong lVar14;
  undefined1 local_res8 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  FString local_e8;
  code *local_d8 [2];
  undefined **local_c8;
  FChunkEvictionPolicySpec *local_c0;
  undefined8 local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FChunkEvictionPolicySpec *local_90;
  undefined8 local_80;
  code *local_78 [2];
  undefined **local_68;
  FChunkEvictionPolicySpec *local_60;
  undefined8 local_50;
  FGuid local_48;
  
  pTVar1 = &this->NextReferences;
  lVar14 = 0x32;
  do {
    pFVar9 = FGuid::NewGuid(&local_48);
    pFVar13 = (FGuid *)(pTVar1->AllocatorInstance).Data;
    if ((pFVar13 <= pFVar9) && (pFVar9 < pFVar13 + (this->NextReferences).ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->NextReferences).ArrayNum;
    if (iVar7 == (this->NextReferences).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&pTVar1->AllocatorInstance,&(this->NextReferences).ArrayMax);
    }
    (this->NextReferences).ArrayNum = iVar7 + 1;
    uVar5 = *(undefined8 *)&pFVar9->C;
    pFVar2 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar9;
    *(undefined8 *)(pFVar2 + 8) = uVar5;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  iVar7 = 0;
  lVar14 = 0;
  do {
    if ((this->NextReferences).ArrayNum <= iVar7) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    local_f8 = *(undefined8 *)(pFVar2 + lVar14);
    uStack_f0 = *(undefined8 *)(pFVar2 + lVar14 + 8);
    if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
       ((FScriptContainerElement *)&local_f8 <
        pFVar2 + (longlong)(this->NextReferences).ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (this->NextReferences).ArrayNum;
    if (iVar8 == (this->NextReferences).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&pTVar1->AllocatorInstance,&(this->NextReferences).ArrayMax);
    }
    iVar7 = iVar7 + 1;
    (this->NextReferences).ArrayNum = iVar8 + 1;
    lVar14 = lVar14 + 0x10;
    pFVar2 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar2 = local_f8;
    *(undefined8 *)(pFVar2 + 8) = uStack_f0;
  } while (iVar7 < 0x19);
  iVar7 = (this->NextReferences).ArrayNum;
  pFVar13 = (FGuid *)(pTVar1->AllocatorInstance).Data;
  pFVar9 = pFVar13 + iVar7;
  while( true ) {
    if ((this->NextReferences).ArrayNum != iVar7) {
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar9) break;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (&this->ReferencedChunks,(FGuid *)(local_res8 + 8),(bool *)pFVar13);
    uVar10 = CityHash64((char *)pFVar13,0x10);
    iVar8 = TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
            FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>
                        *)&this->ReferenceCounts,(uint)uVar10,pFVar13);
    if ((iVar8 == -1) ||
       (lVar14 = (longlong)iVar8 * 0x1c + *(longlong *)&this->ReferenceCounts, lVar14 == 0)) {
      piVar11 = TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>::
                EmplaceByHash<FGuid_const_&>
                          ((TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>
                            *)&this->ReferenceCounts,(uint)uVar10,pFVar13);
      *piVar11 = *piVar11 + 1;
      pFVar13 = pFVar13 + 1;
    }
    else {
      piVar11 = (int *)(lVar14 + 0x10);
      *piVar11 = *piVar11 + 1;
      pFVar13 = pFVar13 + 1;
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ChunkData,this->TestChunkSize,Default);
  pFVar12 = ::operator_new(0x90);
  if (pFVar12 == (FFakeChunkDataAccess *)0x0) {
    pFVar12 = (FFakeChunkDataAccess *)0x0;
  }
  else {
    pFVar12->_padding_ = (longlong)&___7FFakeChunkDataAccess_BuildPatchServices__6B_;
    BuildPatchServices::FChunkHeader::FChunkHeader(&pFVar12->ChunkHeader);
    pFVar12->ChunkData = (uchar *)0x0;
    *(undefined8 *)&pFVar12->OnDeleted = 0;
    *(undefined8 *)&(pFVar12->OnDeleted).field_0x28 = 0;
    (pFVar12->ChunkHeader).DataSizeCompressed = 0;
    (pFVar12->ChunkHeader).DataSizeUncompressed = 0;
  }
  pFVar3 = (this->MockChunkDataAccess).Ptr;
  if ((pFVar3 != pFVar12) &&
     ((this->MockChunkDataAccess).Ptr = pFVar12, pFVar3 != (FFakeChunkDataAccess *)0x0)) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  local_b0 = 0;
  ((this->MockChunkDataAccess).Ptr)->ChunkData = (uchar *)(this->ChunkData).AllocatorInstance.Data;
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FChunkEvictionPolicySpec::Define'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FChunkEvictionPolicySpec::Define'::__l2::<lambda_1>,void>::Call;
  local_c0 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_d8);
  local_80 = 0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FChunkEvictionPolicySpec::Define'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FChunkEvictionPolicySpec::Define'::__l2::<lambda_2>,void>::Call;
  local_90 = this;
  ::FString::FString(&local_e8,"ChunkEvictionPolicy");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,&local_e8,(TFunction<void___cdecl(void)> *)local_a8);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FChunkEvictionPolicySpec::Define'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FChunkEvictionPolicySpec::Define'::__l2::<lambda_3>,void>::Call;
  local_60 = this;
  FAutomationSpecBase::AfterEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_78);
  return;
}

// ~FChunkEvictionPolicySpec @ 143287830

void __thiscall FChunkEvictionPolicySpec::~FChunkEvictionPolicySpec(FChunkEvictionPolicySpec *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  FFakeChunkDataAccess *pFVar4;
  FFakeChunkReferenceTracker *pFVar5;
  IChunkEvictionPolicy *pIVar6;
  
  pFVar1 = (this->ChunkData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CurrentMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CurrentMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentMap);
  pFVar1 = (this->NextReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ReferenceCounts).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ReferenceCounts).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReferenceCounts);
  (this->ReferencedChunks).HashSize = 0;
  FVar3 = (this->ReferencedChunks).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedChunks).Elements);
  pFVar4 = (this->MockChunkDataAccess).Ptr;
  if (pFVar4 != (FFakeChunkDataAccess *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pFVar5 = (this->MockChunkReferenceTracker).Ptr;
  if (pFVar5 != (FFakeChunkReferenceTracker *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pIVar6 = (this->ChunkEvictionPolicy).Ptr;
  if (pIVar6 != (IChunkEvictionPolicy *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 143297fe0

void __thiscall `FChunkEvictionPolicySpec::Define'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  FFakeChunkDataAccess *pFVar3;
  IChunkEvictionPolicy *pIVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FFakeChunkDataAccess **ppFVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  IChunkEvictionPolicy *pIVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  TPairInitializer<FGuid_&,BuildPatchServices::FFakeChunkDataAccess_*_&&> local_res8;
  longlong local_48;
  FFakeChunkDataAccess ***local_40;
  
  puVar12 = (undefined8 *)0x0;
  puVar11 = puVar12;
  puVar16 = puVar12;
  while( true ) {
    lVar1 = *(longlong *)this;
    ppFVar10 = ::operator_new(0x90);
    if (ppFVar10 == (FFakeChunkDataAccess **)0x0) {
      ppFVar10 = (FFakeChunkDataAccess **)0x0;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)this + 0x1b0);
      *ppFVar10 = (FFakeChunkDataAccess *)&___7FFakeChunkDataAccess_BuildPatchServices__6B_;
      pFVar3 = *(FFakeChunkDataAccess **)(lVar2 + 0x10);
      ppFVar10[1] = *(FFakeChunkDataAccess **)(lVar2 + 8);
      ppFVar10[2] = pFVar3;
      pFVar3 = *(FFakeChunkDataAccess **)(lVar2 + 0x20);
      ppFVar10[3] = *(FFakeChunkDataAccess **)(lVar2 + 0x18);
      ppFVar10[4] = pFVar3;
      pFVar3 = *(FFakeChunkDataAccess **)(lVar2 + 0x30);
      ppFVar10[5] = *(FFakeChunkDataAccess **)(lVar2 + 0x28);
      ppFVar10[6] = pFVar3;
      uVar6 = *(undefined4 *)(lVar2 + 0x3c);
      uVar7 = *(undefined4 *)(lVar2 + 0x40);
      uVar8 = *(undefined4 *)(lVar2 + 0x44);
      *(undefined4 *)(ppFVar10 + 7) = *(undefined4 *)(lVar2 + 0x38);
      *(undefined4 *)((longlong)ppFVar10 + 0x3c) = uVar6;
      *(undefined4 *)(ppFVar10 + 8) = uVar7;
      *(undefined4 *)((longlong)ppFVar10 + 0x44) = uVar8;
      ppFVar10[9] = *(FFakeChunkDataAccess **)(lVar2 + 0x48);
      ppFVar10[10] = *(FFakeChunkDataAccess **)(lVar2 + 0x50);
      pFVar3 = *(FFakeChunkDataAccess **)(lVar2 + 0x60);
      ppFVar10[0xc] = pFVar3;
      ppFVar10[0x11] = (FFakeChunkDataAccess *)0x0;
      if (pFVar3 != (FFakeChunkDataAccess *)0x0) {
        puVar14 = (undefined8 *)(lVar2 + 0x70);
        if (*(undefined8 **)(lVar2 + 0x88) != (undefined8 *)0x0) {
          puVar14 = *(undefined8 **)(lVar2 + 0x88);
        }
        (**(code **)*puVar14)();
      }
    }
    lVar2 = *(longlong *)this;
    local_res8.Value = ppFVar10;
    if ((*(int *)(lVar2 + 0x260) <= (int)puVar11) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    local_40 = &local_res8.Value;
    local_48 = *(longlong *)(lVar2 + 600) + (longlong)puVar16;
    TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_&,BuildPatchServices::FFakeChunkDataAccess_*_&&>_>
              ((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x268),&local_res8,(bool *)&local_48);
    uVar15 = (int)puVar11 + 1;
    puVar11 = (undefined8 *)(ulonglong)uVar15;
    puVar16 = puVar16 + 2;
    if (9 < (int)uVar15) {
      lVar1 = *(longlong *)this;
      puVar11 = ::operator_new(0xc0);
      if (puVar11 != (undefined8 *)0x0) {
        puVar11[1] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[9] = 0;
        puVar11[0xb] = 0;
        puVar11[0xe] = 0;
        puVar11[0xf] = 0;
        puVar11[0x13] = 0;
        puVar11[0x15] = 0;
        *puVar11 = &___7FFakeChunkReferenceTracker_BuildPatchServices__6B_;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[6] = 0;
        *(undefined4 *)(puVar11 + 7) = 0;
        *(undefined4 *)((longlong)puVar11 + 0x3c) = 0x80;
        *(undefined4 *)(puVar11 + 8) = 0xffffffff;
        *(undefined4 *)((longlong)puVar11 + 0x44) = 0;
        puVar11[10] = 0;
        puVar11[0xc] = 0;
        puVar11[0xd] = 0;
        puVar11[0x10] = 0;
        *(undefined4 *)(puVar11 + 0x11) = 0;
        *(undefined4 *)((longlong)puVar11 + 0x8c) = 0x80;
        *(undefined4 *)(puVar11 + 0x12) = 0xffffffff;
        *(undefined4 *)((longlong)puVar11 + 0x94) = 0;
        puVar11[0x14] = 0;
        puVar11[0x16] = 0;
        puVar11[0x17] = 0;
        puVar12 = puVar11;
      }
      puVar11 = *(undefined8 **)(lVar1 + 0x1a8);
      if ((puVar11 != puVar12) &&
         (*(undefined8 **)(lVar1 + 0x1a8) = puVar12, puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)(puVar11,1);
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                 (*(longlong *)(*(longlong *)this + 0x1a8) + 0x10),
                 (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                 (*(longlong *)this + 0x1b8));
      TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>::operator=
                ((TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)
                 (*(longlong *)(*(longlong *)this + 0x1a8) + 0x60),
                 (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)
                 (*(longlong *)this + 0x208));
      TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)(*(longlong *)this + 0x1a8) + 0xb0),
                 (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 600));
      lVar1 = *(longlong *)this;
      pIVar13 = BuildPatchServices::FChunkEvictionPolicyFactory::Create
                          (*(IChunkReferenceTracker **)(lVar1 + 0x1a8));
      pIVar4 = *(IChunkEvictionPolicy **)(lVar1 + 0x1a0);
      if ((pIVar4 != pIVar13) &&
         (*(IChunkEvictionPolicy **)(lVar1 + 0x1a0) = pIVar13, pIVar4 != (IChunkEvictionPolicy *)0x0
         )) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
      return;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

