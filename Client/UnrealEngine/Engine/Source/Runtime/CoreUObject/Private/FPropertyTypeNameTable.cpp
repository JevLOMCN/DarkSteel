// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FPropertyTypeNameTable @ 1421621f0

FPropertyTypeNameTable * __thiscall
UE::FPropertyTypeNameTable::FPropertyTypeNameTable(FPropertyTypeNameTable *this)

{
  (this->NameMapMutex).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->NameMap = 0;
  *(undefined8 *)&(this->NameMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameMap).field_0x34 = 0;
  *(undefined8 *)&(this->NameMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  this->NextIndex = (atomic<int>)0x1;
  memset(this->Blocks,0,0x10000);
  (this->BlockAllocationMutex).State = (atomic<unsigned_char>)0x0;
  AllocateBlock(this,0);
  return this;
}

// AllocateBlock @ 142166fa0

FPropertyTypeNameNode * __thiscall
UE::FPropertyTypeNameTable::AllocateBlock(FPropertyTypeNameTable *this,int param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  atomic<UE::FPropertyTypeNameNode_*> aVar2;
  bool bVar3;
  
  this_00 = &this->BlockAllocationMutex;
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    FMutex::LockSlow(this_00);
  }
  aVar2 = this->Blocks[param_1];
  if (aVar2 == (atomic<UE::FPropertyTypeNameNode_*>)0x0) {
    aVar2 = (atomic<UE::FPropertyTypeNameNode_*>)FMemory::MallocZeroed(0x18000,4);
    this->Blocks[param_1] = aVar2;
  }
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return (FPropertyTypeNameNode *)aVar2;
}

// FindOrAddByName @ 142178100

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::FPropertyTypeNameTable::FindOrAddByName
          (FPropertyTypeNameTable *this,FPropertyTypeNameNode *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  FName FVar3;
  FName *pFVar4;
  uint uVar5;
  atomic<int> aVar6;
  longlong *plVar7;
  TPairInitializer<UE::FPropertyTypeNameNodeProxy_&&,int_const_&> *pTVar8;
  atomic<UE::FPropertyTypeNameNode_*> aVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  TPairInitializer<UE::FPropertyTypeNameNodeProxy_&&,int_const_&> *pTVar18;
  FPropertyTypeNameNode *pFVar19;
  bool bVar20;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  FName local_res18;
  longlong local_res20;
  FMemScope local_68;
  longlong *local_60;
  uint *local_58;
  
  iVar15 = 1;
  pTVar18 = (TPairInitializer<UE::FPropertyTypeNameNodeProxy_&&,int_const_&> *)0x0;
  pFVar19 = param_1;
  do {
    FVar3 = pFVar19->Name;
    iVar10 = pFVar19->InnerCount;
    uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    iVar15 = iVar15 + -1 + pFVar19->InnerCount;
    pFVar19 = pFVar19 + 1;
    uVar5 = uVar5 + FVar3.Number;
    uVar5 = (uint)pTVar18 ^
            (int)((ulonglong)pTVar18 >> 2) +
            (uVar5 * 0x40 + iVar10 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5) + 0x9e3779b9 +
            (uint)pTVar18 * 0x40;
    pTVar18 = (TPairInitializer<UE::FPropertyTypeNameNodeProxy_&&,int_const_&> *)(ulonglong)uVar5;
  } while (0 < iVar15);
  lVar12 = ((longlong)pFVar19 - (longlong)param_1) / 6 +
           ((longlong)pFVar19 - (longlong)param_1 >> 0x3f);
  uVar14 = (lVar12 >> 1) - (lVar12 >> 0x3f);
  AcquireSRWLockShared((PSRWLOCK)this);
  if (*(int *)&(this->NameMap).field_0x8 != *(int *)&(this->NameMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->NameMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->NameMap).field_0x38;
    }
    iVar15 = *(int *)(puVar13 + (ulonglong)(*(int *)&(this->NameMap).field_0x48 - 1U & uVar5) * 4);
    if (iVar15 != -1) {
      do {
        iVar10 = 1;
        plVar7 = *(longlong **)(*(longlong *)&this->NameMap + (longlong)iVar15 * 0x18);
        lVar12 = *(longlong *)&this->NameMap + (longlong)iVar15 * 0x18;
        lVar17 = (longlong)param_1 - (longlong)plVar7;
        while ((*plVar7 == *(longlong *)(lVar17 + (longlong)plVar7) &&
               (plVar1 = plVar7 + 1, (int)*plVar1 == *(int *)(lVar17 + 8 + (longlong)plVar7)))) {
          plVar7 = (longlong *)((longlong)plVar7 + 0xc);
          iVar10 = iVar10 + -1 + (int)*plVar1;
          if (iVar10 < 1) {
            if (iVar15 != -1) {
              pTVar8 = (TPairInitializer<UE::FPropertyTypeNameNodeProxy_&&,int_const_&> *)
                       (lVar12 + 8);
              if (lVar12 == 0) {
                pTVar8 = (TPairInitializer<UE::FPropertyTypeNameNodeProxy_&&,int_const_&> *)0x0;
              }
              if (pTVar8 != (TPairInitializer<UE::FPropertyTypeNameNodeProxy_&&,int_const_&> *)0x0)
              {
                iVar15 = *(int *)&pTVar8->Key;
                ReleaseSRWLockShared((PSRWLOCK)this);
                return iVar15;
              }
            }
            goto LAB_14217825f;
          }
        }
        iVar15 = *(int *)(lVar12 + 0x10);
      } while (iVar15 != -1);
    }
  }
LAB_14217825f:
  ReleaseSRWLockShared((PSRWLOCK)this);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_FPropertyTypeName.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_FPropertyTypeName.UniqueName;
  FMemScope::FMemScope(&local_68,&local_res18,true);
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar5 = (uint)uVar14;
  local_res10[0] = 0;
  if (uVar5 == 1) {
    if (param_1->Name == (FName)0x0) goto LAB_14217838d;
  }
  else if (0x2000 < (int)uVar5) {
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  aVar6 = this->NextIndex;
  do {
    uVar11 = 0x2000 - ((uint)aVar6 & 0x1fff);
    uVar16 = local_res10[0];
    if ((int)uVar11 <= (int)uVar5) {
      uVar16 = uVar11;
    }
    uVar16 = uVar16 + (int)aVar6;
    LOCK();
    aVar2 = this->NextIndex;
    bVar20 = aVar6 == aVar2;
    if (bVar20) {
      this->NextIndex = (atomic<int>)(uVar16 + uVar5);
      aVar2 = aVar6;
    }
    aVar6 = aVar2;
    UNLOCK();
  } while (!bVar20);
  if (0x4000000 < (int)(uVar16 + uVar5)) {
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  aVar9 = this->Blocks[(int)uVar16 >> 0xd];
  if (aVar9 == (atomic<UE::FPropertyTypeNameNode_*>)0x0) {
    aVar9 = (atomic<UE::FPropertyTypeNameNode_*>)AllocateBlock(this,(int)uVar16 >> 0xd);
  }
  pFVar19 = (FPropertyTypeNameNode *)((longlong)aVar9 + (ulonglong)(uVar16 & 0x1fff) * 0xc);
  while (local_res10[0] = uVar16, 0 < (int)uVar5) {
    pFVar4 = &param_1->Name;
    iVar15 = param_1->InnerCount;
    param_1 = param_1 + 1;
    pFVar19->Name = *pFVar4;
    uVar5 = (int)uVar14 - 1;
    uVar14 = (ulonglong)uVar5;
    pFVar19->InnerCount = iVar15;
    pFVar19 = pFVar19 + 1;
  }
LAB_14217838d:
  local_res20 = (longlong)this->Blocks[(longlong)(int)local_res10[0] >> 0xd] +
                (ulonglong)(local_res10[0] & 0x1fff) * 0xc;
  local_60 = &local_res20;
  local_58 = local_res10;
  TSet<TTuple<UE::FPropertyTypeNameNodeProxy,int>,TDefaultMapHashableKeyFuncs<UE::FPropertyTypeNameNodeProxy,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<UE::FPropertyTypeNameNodeProxy_&&,int_const_&>_>
            ((TSet<TTuple<UE::FPropertyTypeNameNodeProxy,int>,TDefaultMapHashableKeyFuncs<UE::FPropertyTypeNameNodeProxy,int,0>,FDefaultSetAllocator>
              *)&this->NameMap,(uint)&local_res18,pTVar18,(bool *)&local_60);
  uVar5 = local_res10[0];
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res8);
  return uVar5;
}

// ResolveByIndex @ 142189540

FPropertyTypeNameNode * __thiscall
UE::FPropertyTypeNameTable::ResolveByIndex(FPropertyTypeNameTable *this,int param_1)

{
  return (FPropertyTypeNameNode *)
         ((longlong)this->Blocks[(longlong)param_1 >> 0xd] + (ulonglong)(param_1 & 0x1fff) * 0xc);
}

// StoreByIndex @ 142194280

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::FPropertyTypeNameTable::StoreByIndex
          (FPropertyTypeNameTable *this,FPropertyTypeNameNode *param_1,int param_2)

{
  uint uVar1;
  atomic<int> aVar2;
  FName *pFVar3;
  FPropertyTypeNameNode *pFVar4;
  atomic<int> aVar5;
  atomic<UE::FPropertyTypeNameNode_*> aVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 == 1) {
    if (param_1->Name == (FName)0x0) {
      return 0;
    }
  }
  else if (0x2000 < param_2) {
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  aVar5 = this->NextIndex;
  do {
    iVar8 = 0x2000 - ((uint)aVar5 & 0x1fff);
    iVar7 = 0;
    if (iVar8 <= param_2) {
      iVar7 = iVar8;
    }
    uVar1 = iVar7 + (int)aVar5;
    LOCK();
    aVar2 = this->NextIndex;
    bVar9 = aVar5 == aVar2;
    if (bVar9) {
      this->NextIndex = (atomic<int>)(uVar1 + param_2);
      aVar2 = aVar5;
    }
    aVar5 = aVar2;
    UNLOCK();
  } while (!bVar9);
  if (0x4000000 < (int)(uVar1 + param_2)) {
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  aVar6 = this->Blocks[(int)uVar1 >> 0xd];
  if (aVar6 == (atomic<UE::FPropertyTypeNameNode_*>)0x0) {
    aVar6 = (atomic<UE::FPropertyTypeNameNode_*>)AllocateBlock(this,(int)uVar1 >> 0xd);
  }
  pFVar4 = (FPropertyTypeNameNode *)((longlong)aVar6 + (ulonglong)(uVar1 & 0x1fff) * 0xc);
  for (; 0 < param_2; param_2 = param_2 + -1) {
    pFVar3 = &param_1->Name;
    iVar7 = param_1->InnerCount;
    param_1 = param_1 + 1;
    pFVar4->Name = *pFVar3;
    pFVar4->InnerCount = iVar7;
    pFVar4 = pFVar4 + 1;
  }
  return uVar1;
}

