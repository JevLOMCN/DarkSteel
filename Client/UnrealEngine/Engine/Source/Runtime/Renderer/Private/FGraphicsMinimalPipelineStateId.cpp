// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// AddSizeToLocalPipelineIdTableSize @ 144ef7390

void __cdecl FGraphicsMinimalPipelineStateId::AddSizeToLocalPipelineIdTableSize(ulong64 param_1)

{
  LOCK();
  CurrentLocalPipelineIdTableSize =
       (atomic<int>)((int)CurrentLocalPipelineIdTableSize + (int)param_1);
  UNLOCK();
  return;
}

// FreezeIdTable @ 144f0d180

void __cdecl FGraphicsMinimalPipelineStateId::FreezeIdTable(bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FIteratorState FVar3;
  TKeyValue<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
  *pTVar4;
  undefined4 extraout_var;
  FHashElementId FVar5;
  int local_res8 [2];
  undefined1 local_res10 [24];
  
  if (param_1 == bIsIdTableFrozen) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&PersistentIdTableLock);
  bIsIdTableFrozen = param_1;
  if ((!param_1) &&
     ((atomic<int>)(PersistentIdTable._8_4_ - PersistentIdTable._56_4_) != ReffedItemCount)) {
    if ((int)(PersistentIdTable._8_4_ - PersistentIdTable._56_4_) <= (int)ReffedItemCount) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PersistentIdTable.Num() > ReffedItemCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x221,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
    ::FData::Next((FData *)&PersistentIdTable,(FIteratorState)(uint)local_res8);
    FVar5.Index = local_res8[0];
    while (FVar5.Index != PersistentIdTable._8_4_) {
      pTVar4 = Experimental::RobinHoodHashTable_Private::
               TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
               ::FData::Get((FData *)&PersistentIdTable,FVar5.Index);
      if (*(int *)&(pTVar4->Pair).field_0xa0 == 0) {
        Experimental::RobinHoodHashTable_Private::
        TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
        ::RemoveByElementId((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
                             *)&PersistentIdTable,FVar5);
      }
      FVar3 = Experimental::RobinHoodHashTable_Private::
              TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
              ::FData::Next((FData *)&PersistentIdTable,(uint)local_res10);
      FVar5.Index = *(int *)CONCAT44(extraout_var,FVar3.Index);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144f0d276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&PersistentIdTableLock);
  return;
}

// GetPersistentId @ 144f12c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FGraphicsMinimalPipelineStateId __cdecl
FGraphicsMinimalPipelineStateId::GetPersistentId(FGraphicsMinimalPipelineStateInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FHashElementId FVar9;
  undefined4 extraout_var;
  FGraphicsMinimalPipelineStateId FVar10;
  FGraphicsMinimalPipelineStateInitializer *in_RDX;
  uint uVar11;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  bool local_48 [4];
  atomic<int> local_44;
  
  uVar8 = ::GetTypeHash(in_RDX);
  AcquireSRWLockShared((PSRWLOCK)&PersistentIdTableLock);
  FVar9 = Experimental::RobinHoodHashTable_Private::
          TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
          ::FindIdByHash((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
                          *)&PersistentIdTable,(FHashType)(uint)local_res20,
                         (FGraphicsMinimalPipelineStateInitializer *)(ulonglong)(uVar8 & 0x7fffffff)
                        );
  uVar3 = *(uint *)CONCAT44(extraout_var,FVar9.Index);
  uVar11 = uVar3;
  if (uVar3 == 0xffffffff) {
    ReleaseSRWLockShared((PSRWLOCK)&PersistentIdTableLock);
    AcquireSRWLockExclusive((PSRWLOCK)&PersistentIdTableLock);
    local_48[0] = false;
    local_48[1] = false;
    local_48[2] = false;
    local_48[3] = false;
    LOCK();
    UNLOCK();
    local_44 = DebugSaltAllocationIndex;
    DebugSaltAllocationIndex = (atomic<int>)((int)DebugSaltAllocationIndex + 1);
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
    ::
    FindOrUpdateIdByHashInternal<0,FGraphicsMinimalPipelineStateInitializer_const_&,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
              ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
                *)&PersistentIdTable,(FHashType)(uint)local_res18,
               (FGraphicsMinimalPipelineStateInitializer *)(ulonglong)(uVar8 & 0x7fffffff),
               (FRefCountedGraphicsMinimalPipelineState *)in_RDX,local_48);
    uVar11 = local_res18[0];
  }
  uVar8 = 0;
  if ((int)uVar11 < (int)PersistentIdTable._8_4_) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FGraphicsMinimalPipelineStateId)(*pcVar5)();
      return FVar10;
    }
  }
  uVar6 = PersistentIdTable._0_8_;
  LOCK();
  piVar1 = (int *)((longlong)(int)uVar11 * 0xa8 + 0xa0 + PersistentIdTable._0_8_);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    if (NeedsShaderInitialisation == false) {
      NeedsShaderInitialisation = true;
    }
    LOCK();
    ReffedItemCount = (atomic<int>)((int)ReffedItemCount + 1);
    UNLOCK();
  }
  uVar4 = *(undefined4 *)((longlong)(int)uVar11 * 0xa8 + 0xa4 + uVar6);
  if (uVar3 == 0xffffffff) {
    ReleaseSRWLockExclusive((PSRWLOCK)&PersistentIdTableLock);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&PersistentIdTableLock);
  }
  if (0x3ffffffe < uVar11) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TableId.GetIndex() < (((uint32) 0xffffffff) >> 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x1dc,L"Persistent FGraphicsMinimalPipelineStateId table overflow!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FGraphicsMinimalPipelineStateId)(*pcVar5)();
      return FVar10;
    }
  }
  *(undefined4 *)((longlong)&(param_1->BoundShaderState).VertexDeclarationRHI + 4) = uVar4;
  *(uint *)&(param_1->BoundShaderState).VertexDeclarationRHI = uVar11 & 0x3fffffff | 0x80000000;
  return (FGraphicsMinimalPipelineStateId)param_1;
}

// GetPipelineState @ 144f12e30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FGraphicsMinimalPipelineStateInitializer * __thiscall
FGraphicsMinimalPipelineStateId::GetPipelineState
          (FGraphicsMinimalPipelineStateId *this,
          TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGraphicsMinimalPipelineStateInitializer *pFVar4;
  uint uVar5;
  
  if (((this->field0_0x0).PackedId >> 0x1e & 1) == 0) {
    AcquireSRWLockShared((PSRWLOCK)&PersistentIdTableLock);
    pFVar4 = (FGraphicsMinimalPipelineStateInitializer *)
             Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
             ::FData::Get((FData *)&PersistentIdTable,(this->field0_0x0).PackedId & 0x3fffffff);
    if ((*(int *)&pFVar4[1].BoundShaderState.VertexDeclarationRHI == 0) ||
       (*(int *)((longlong)&pFVar4[1].BoundShaderState.VertexDeclarationRHI + 4) != this->DebugSalt)
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Value.RefNum && Result.Value.DebugSalt == DebugSalt",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                         ,0x25d,
                         L"Pipeline state ID used after release.  Call \'AddRefPersistentId\' to ensure pipeline state doesn\'t get released while in use."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FGraphicsMinimalPipelineStateInitializer *)(*pcVar1)();
        return pFVar4;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&PersistentIdTableLock);
    return pFVar4;
  }
  uVar5 = (this->field0_0x0).PackedId & 0x3fffffff;
  uVar3 = 0;
  if ((int)uVar5 < *(int *)&param_1->field_0x8) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGraphicsMinimalPipelineStateInitializer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FGraphicsMinimalPipelineStateInitializer *)
         ((ulonglong)uVar5 * 0xa0 + *(longlong *)param_1);
}

// GetPipelineStateId @ 144f12f40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FGraphicsMinimalPipelineStateId __cdecl
FGraphicsMinimalPipelineStateId::GetPipelineStateId
          (FGraphicsMinimalPipelineStateInitializer *param_1,
          TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
          *param_2,bool *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  FGraphicsMinimalPipelineStateId FVar5;
  char *in_R9;
  bool local_res20 [8];
  uint local_28 [4];
  
  *(undefined4 *)&(param_1->BoundShaderState).VertexDeclarationRHI = 0xc0000000;
  uVar4 = ::GetTypeHash((FGraphicsMinimalPipelineStateInitializer *)param_2);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  ::
  FindOrUpdateIdByHashInternal<0,FGraphicsMinimalPipelineStateInitializer_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
            ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              *)param_3,(FHashType)(uint)local_28,
             (FGraphicsMinimalPipelineStateInitializer *)(ulonglong)(uVar4 & 0x7fffffff),
             (FUnitType *)param_2,local_res20);
  if ((((*in_R9 == '\0') &&
       ((*(longlong *)&param_2->field_0x30 == 0 ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)&param_2->field_0x30 + 0x60) +
          (longlong)*(int *)&param_2->field_0x50 * 8) != 0)))) &&
      ((*(longlong *)&param_2->field_0x38 == 0 ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)&param_2->field_0x38 + 0x60) +
         (longlong)*(int *)&param_2->field_0x54 * 8) != 0)))) &&
     (((*(longlong *)&param_2->field_0x40 == 0 ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)&param_2->field_0x40 + 0x60) +
         (longlong)*(int *)&param_2->field_0x58 * 8) != 0)) &&
      ((*(longlong *)&param_2->field_0x48 == 0 ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)&param_2->field_0x48 + 0x60) +
         (longlong)*(int *)&param_2->field_0x5c * 8) != 0)))))) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  *in_R9 = cVar2;
  if (0x3ffffffe < local_28[0]) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TableIndex.GetIndex() < (((uint32) 0xffffffff) >> 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x240,L"One frame FGraphicsMinimalPipelineStateId table overflow!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FGraphicsMinimalPipelineStateId)(*pcVar1)();
      return FVar5;
    }
  }
  *(uint *)&(param_1->BoundShaderState).VertexDeclarationRHI =
       *(uint *)&(param_1->BoundShaderState).VertexDeclarationRHI & 0xc0000000;
  *(uint *)&(param_1->BoundShaderState).VertexDeclarationRHI =
       *(uint *)&(param_1->BoundShaderState).VertexDeclarationRHI | local_28[0] & 0x3fffffff;
  *(undefined4 *)((longlong)&(param_1->BoundShaderState).VertexDeclarationRHI + 4) = 0;
  return (FGraphicsMinimalPipelineStateId)param_1;
}

// InitializePersistentIds @ 144f1b810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FGraphicsMinimalPipelineStateId::InitializePersistentIds(void)

{
  undefined4 uVar1;
  FIteratorState FVar2;
  FMinimalBoundShaderStateInput *this;
  undefined4 extraout_var;
  bool bVar3;
  uint local_res8 [2];
  FBoundShaderStateInput local_48;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId491,"InitializePersistentMdcIds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
               ,0x1eb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId491);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&PersistentIdTableLock);
  if (NeedsShaderInitialisation != false) {
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
    ::FData::Next((FData *)&PersistentIdTable,(FIteratorState)(uint)local_res8);
    uVar1 = PersistentIdTable._8_4_;
    while (local_res8[0] != uVar1) {
      this = (FMinimalBoundShaderStateInput *)
             Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
             ::FData::Get((FData *)&PersistentIdTable,local_res8[0]);
      FMinimalBoundShaderStateInput::AsBoundShaderState(this,&local_48);
      FVar2 = Experimental::RobinHoodHashTable_Private::
              TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
              ::FData::Next((FData *)&PersistentIdTable,(uint)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Index);
    }
    NeedsShaderInitialisation = false;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&PersistentIdTableLock);
  if (!bVar3) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// RemovePersistentId @ 144f23270

void __cdecl
FGraphicsMinimalPipelineStateId::RemovePersistentId(FGraphicsMinimalPipelineStateId param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TKeyValue<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
  *pTVar4;
  FGraphicsMinimalPipelineStateId_u_0 FVar5;
  
  FVar5 = param_1.field0_0x0;
  if (((FVar5.PackedId >> 0x1e & 1) != 0) || (-1 < (int)FVar5.PackedId)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Id.bComesFromLocalPipelineStateSet && Id.bValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x1fa,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&PersistentIdTableLock);
  pTVar4 = Experimental::RobinHoodHashTable_Private::
           TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
           ::FData::Get((FData *)&PersistentIdTable,FVar5.PackedId & 0x3fffffff);
  if (*(int *)&(pTVar4->Pair).field_0xa0 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCountedStateInitializer.RefNum > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x200,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LOCK();
  puVar1 = &(pTVar4->Pair).field_0xa0;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  UNLOCK();
  if (*(int *)puVar1 == 0) {
    LOCK();
    ReffedItemCount = (atomic<int>)((int)ReffedItemCount + -1);
    UNLOCK();
    if (bIsIdTableFrozen == false) {
      Experimental::RobinHoodHashTable_Private::
      TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
      ::RemoveByElementId((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
                           *)&PersistentIdTable,(FHashElementId)(FVar5.PackedId & 0x3fffffff));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144f23341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&PersistentIdTableLock);
  return;
}

// ResetLocalPipelineIdTableSize @ 144f23920

/* WARNING: Removing unreachable block (ram,0x000144f2392b) */

void __cdecl FGraphicsMinimalPipelineStateId::ResetLocalPipelineIdTableSize(void)

{
  LocalPipelineIdTableSize = CurrentLocalPipelineIdTableSize;
  LOCK();
  CurrentLocalPipelineIdTableSize = (atomic<int>)0x0;
  UNLOCK();
  LOCK();
  UNLOCK();
  return;
}

