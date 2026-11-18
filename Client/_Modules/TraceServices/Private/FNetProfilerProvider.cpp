// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 49

// FNetProfilerProvider @ 14d424580

FNetProfilerProvider * __thiscall
TraceServices::FNetProfilerProvider::FNetProfilerProvider
          (FNetProfilerProvider *this,IAnalysisSession *param_1)

{
  int iVar1;
  ILinearAllocator *pIVar2;
  undefined8 uVar3;
  TTableLayout<TraceServices::FNetProfilerAggregatedStats> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FNetProfilerProvider_TraceServices__6B_;
  (this->Names).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Names).ArrayNum = 0;
  (this->Names).ArrayMax = 0;
  (this->EventTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventTypes).ArrayNum = 0;
  (this->EventTypes).ArrayMax = 0;
  (this->StatsCounterTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatsCounterTypes).ArrayNum = 0;
  (this->StatsCounterTypes).ArrayMax = 0;
  (this->GameInstances).AllocatorInstance.SecondaryData =
       (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0;
  (this->GameInstances).ArrayNum = 0;
  (this->GameInstances).ArrayMax = 4;
  pIVar2 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->Connections).Allocator = pIVar2;
  (this->Connections).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Connections).PagesArray.ArrayNum = 0;
  (this->Connections).PagesArray.ArrayMax = 0;
  (this->Connections).FirstPage =
       (TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal> *)0x0;
  (this->Connections).LastPage =
       (TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal> *)0x0;
  (this->Connections).PageSize = 0x1000;
  (this->Connections).TotalItemCount = 0;
  (this->AggregatedStatsTableLayout)._padding_ =
       (longlong)&___7__TTableLayout_UFNetProfilerAggregatedStats_TraceServices___TraceServices__6B_
  ;
  (this->AggregatedStatsCounterStatsTableLayout)._padding_ =
       (longlong)
       &
       ___7__TTableLayout_UFNetProfilerAggregatedStatsCounterStats_TraceServices___TraceServices__6B_
  ;
  (this->AggregatedStatsTableLayout).Columns.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AggregatedStatsTableLayout).Columns.ArrayNum = 0;
  (this->AggregatedStatsTableLayout).Columns.ArrayMax = 0;
  (this->AggregatedStatsCounterStatsTableLayout).Columns.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AggregatedStatsCounterStatsTableLayout).Columns.ArrayNum = 0;
  (this->AggregatedStatsCounterStatsTableLayout).Columns.ArrayMax = 0;
  this->NetTraceVersion = 0;
  this->ConnectionChangeCount = 0;
  this->GameInstanceChangeCount = 0;
  (**(code **)((longlong)*this->Session + 0xb0))();
  iVar1 = (this->Names).ArrayNum;
  if (iVar1 == (this->Names).ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Names).AllocatorInstance,&(this->Names).ArrayMax);
  }
  pFVar5 = (this->Names).AllocatorInstance.Data;
  (this->Names).ArrayNum = iVar1 + 1;
  pFVar5 = pFVar5 + (longlong)iVar1 * 0x10;
  *(int *)(pFVar5 + 8) = iVar1;
  uVar3 = (**(code **)((longlong)*this->Session + 0xd0))();
  *(undefined8 *)pFVar5 = uVar3;
  pTVar4 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>
                     (&this->AggregatedStatsTableLayout,(pdm_e7677e7b)0x0,L"EventTypeIndex",0);
  pTVar4 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>
                     (pTVar4,(pdm_e7677e7b)0x4,L"Count",0);
  pTVar4 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>
                     (pTVar4,(pdm_e7677e7b)0x8,L"Incl",0);
  pTVar4 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>
                     (pTVar4,(pdm_e7677e7b)0xc,L"I.Max",0);
  pTVar4 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>
                     (pTVar4,(pdm_e7677e7b)0x10,L"I.Avg",0);
  pTVar4 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>
                     (pTVar4,(pdm_e7677e7b)0x14,L"Excl",0);
  TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>
            (pTVar4,(pdm_e7677e7b)0x18,L"E.Max",0);
  return this;
}

// ~FNetProfilerProvider @ 14d42c2d0

void __thiscall
TraceServices::FNetProfilerProvider::~FNetProfilerProvider(FNetProfilerProvider *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar2;
  
  this->_padding_ = (longlong)&___7FNetProfilerProvider_TraceServices__6B_;
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)
             (this->AggregatedStatsCounterStatsTableLayout).Columns.AllocatorInstance.Data,
             (this->AggregatedStatsCounterStatsTableLayout).Columns.ArrayNum);
  pFVar1 = (this->AggregatedStatsCounterStatsTableLayout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->AggregatedStatsTableLayout).Columns.AllocatorInstance.Data
             ,(this->AggregatedStatsTableLayout).Columns.ArrayNum);
  pFVar1 = (this->AggregatedStatsTableLayout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TPagedArray<TraceServices::FNetProfilerConnectionInternal,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>_>
  ::
  ~TPagedArray<TraceServices::FNetProfilerConnectionInternal,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>_>
            (&this->Connections);
  FVar2 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar2 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
  }
  DestructItems<TraceServices::FNetProfilerGameInstanceInternal,int>
            ((FNetProfilerGameInstanceInternal *)FVar2,(this->GameInstances).ArrayNum);
  FVar2 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->StatsCounterTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EventTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Names).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 14d42f840

void __thiscall
`TraceServices::FNetProfilerProvider::CreateAggregation'::__l2::<lambda_1>::operator()
          (void *this,FNetProfilerContentEvent *param_1)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  undefined3 uVar7;
  undefined1 uVar10;
  TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
  *this_00;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 uVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  longlong lVar22;
  ForElementType<FSetElementId> FVar23;
  longlong *plVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  TKeyInitializer<unsigned_int_const_&> local_res8;
  uint *local_res10;
  undefined3 uVar6;
  undefined5 uVar8;
  undefined1 uVar9;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  
  this_00 = *(TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
              **)this;
  puVar1 = &param_1->EventTypeIndex;
  puVar25 = (uint *)0x0;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar23 = (this_00->Hash).SecondaryData;
    if (FVar23 == (ForElementType<FSetElementId>)0x0) {
      FVar23 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    iVar17 = *(int *)((longlong)FVar23 + (ulonglong)(this_00->HashSize - 1U & *puVar1) * 4);
    if (iVar17 != -1) {
      do {
        lVar22 = *(longlong *)&this_00->Elements + (longlong)iVar17 * 0x28;
        if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar17 * 0x28) == *puVar1) {
          puVar21 = (uint *)(lVar22 + 4);
          if (lVar22 == 0) {
            puVar21 = puVar25;
          }
          if (puVar21 != (uint *)0x0) goto LAB_14d42f8fd;
          break;
        }
        iVar17 = *(int *)(lVar22 + 0x20);
      } while (iVar17 != -1);
    }
  }
  local_res10 = puVar1;
  TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned_int_const_&>_>(this_00,&local_res8,(bool *)&local_res10);
  puVar21 = (uint *)((longlong)(int)local_res8.Key * 0x28 + 4 + *(longlong *)&this_00->Elements);
  *puVar21 = *puVar1;
LAB_14d42f8fd:
  uVar4._0_3_ = param_1->StartPos;
  uVar6 = param_1->EndPos;
  uVar9 = param_1->Level;
  uVar13 = param_1->Padding;
  uVar11 = CONCAT11(uVar13,uVar9);
  uVar4._3_5_ = CONCAT23(uVar11,uVar6);
  puVar21[1] = puVar21[1] + 1;
  uVar27 = ((uint)uVar4._3_5_ & 0xffffff) - ((uint)uVar4 & 0xffffff);
  puVar21[2] = puVar21[2] + uVar27;
  uVar20 = puVar21[3];
  if (puVar21[3] < uVar27) {
    uVar20 = uVar27;
  }
  puVar21[3] = uVar20;
  lVar22 = *(longlong *)this;
  uVar19 = (ulonglong)param_1->Level;
  if (uVar19 < *(ulonglong *)(lVar22 + 0x50)) {
    do {
      *(longlong *)(lVar22 + 0x50) = *(longlong *)(lVar22 + 0x50) + -1;
      lVar22 = *(longlong *)this;
      uVar20 = *(uint *)(lVar22 + 0x50);
      uVar18 = 0;
      if ((int)uVar20 < *(int *)(lVar22 + 0x60)) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      plVar5 = *(longlong **)this;
      puVar26 = (uint *)(*(longlong *)(lVar22 + 0x58) + (longlong)(int)uVar20 * 0x10);
      puVar21 = puVar25;
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        plVar24 = plVar5 + 7;
        if ((longlong *)plVar5[8] != (longlong *)0x0) {
          plVar24 = (longlong *)plVar5[8];
        }
        uVar20 = *(uint *)((longlong)plVar24 + (ulonglong)((int)plVar5[9] - 1U & *puVar26) * 4);
        if (uVar20 != 0xffffffff) {
          do {
            puVar21 = (uint *)(*plVar5 + (longlong)(int)uVar20 * 0x28);
            if (*(uint *)(*plVar5 + (longlong)(int)uVar20 * 0x28) == *puVar26) {
              if (puVar21 != (uint *)0x0) goto LAB_14d42fa17;
              break;
            }
            uVar20 = puVar21[8];
            puVar21 = puVar25;
          } while (uVar20 != 0xffffffff);
        }
      }
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar16) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
LAB_14d42fa17:
      uVar20 = (puVar26[2] - puVar26[3]) - puVar26[1];
      puVar21[6] = puVar21[6] + uVar20;
      if (uVar20 < puVar21[7]) {
        uVar20 = puVar21[7];
      }
      puVar21[7] = uVar20;
      lVar22 = *(longlong *)this;
      uVar19 = (ulonglong)param_1->Level;
    } while (uVar19 < *(ulonglong *)(lVar22 + 0x50));
  }
  if ((uVar19 != *(ulonglong *)(lVar22 + 0x50)) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2067707362075999601>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                          ,0x28f,"ContentEvent.Level == Helper.StackSize"), bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  *(ulonglong *)(*(longlong *)this + 0x50) = (ulonglong)param_1->Level + 1;
  lVar22 = *(longlong *)this;
  bVar3 = param_1->Level;
  if ((*(int *)(lVar22 + 0x60) <= (int)(uint)bVar3) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  puVar25 = (uint *)((ulonglong)bVar3 * 0x10 + *(longlong *)(lVar22 + 0x58));
  *puVar25 = *puVar1;
  puVar25[1] = *(uint *)param_1 & 0xffffff;
  uVar7 = param_1->EndPos;
  uVar10 = param_1->Level;
  uVar14 = param_1->Padding;
  uVar12 = CONCAT11(uVar14,uVar10);
  uVar8 = CONCAT23(uVar12,uVar7);
  puVar25[3] = 0;
  puVar25[2] = (uint)uVar8 & 0xffffff;
  bVar3 = param_1->Level;
  if (bVar3 != 0) {
    lVar22 = *(longlong *)this;
    uVar20 = 0;
    if ((int)(bVar3 - 1) < *(int *)(lVar22 + 0x60)) {
      uVar20 = ~(bVar3 - 1) >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    piVar2 = (int *)((ulonglong)bVar3 * 0x10 + -4 + *(longlong *)(lVar22 + 0x58));
    *piVar2 = *piVar2 + uVar27;
  }
  return;
}

// AddNetProfilerEventType @ 14d43ba30

uint __thiscall
TraceServices::FNetProfilerProvider::AddNetProfilerEventType
          (FNetProfilerProvider *this,uint param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FNetProfilerName *pFVar7;
  longlong lVar8;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  iVar5 = (this->EventTypes).ArrayNum;
  piVar1 = &(this->EventTypes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->EventTypes).AllocatorInstance,piVar1);
  }
  (this->EventTypes).ArrayNum = iVar5 + 1;
  lVar8 = (longlong)iVar5;
  pFVar2 = (this->EventTypes).AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar8 * 0x18 + 8) = iVar5;
  *(uint *)(pFVar2 + lVar8 * 0x18 + 0xc) = param_1;
  pFVar2 = pFVar2 + lVar8 * 0x18;
  pFVar7 = GetNetProfilerName(this,param_1);
  *(wchar_t **)pFVar2 = pFVar7->Name;
  if (param_2 != (param_2 & 0xffff)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  *(short *)(pFVar2 + 0x10) = (short)param_2;
  return *(uint *)(pFVar2 + 8);
}

// AddNetProfilerName @ 14d43bb00

uint __thiscall
TraceServices::FNetProfilerProvider::AddNetProfilerName(FNetProfilerProvider *this,wchar_t *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  iVar2 = (this->Names).ArrayNum;
  piVar1 = &(this->Names).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Names).AllocatorInstance,piVar1);
  }
  pFVar4 = (this->Names).AllocatorInstance.Data;
  (this->Names).ArrayNum = iVar2 + 1;
  pFVar4 = pFVar4 + (longlong)iVar2 * 0x10;
  *(int *)(pFVar4 + 8) = iVar2;
  uVar3 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,param_1);
  *(undefined8 *)pFVar4 = uVar3;
  return *(uint *)(pFVar4 + 8);
}

// AddNetProfilerStatsCounterType @ 14d43bb80

uint __thiscall
TraceServices::FNetProfilerProvider::AddNetProfilerStatsCounterType
          (FNetProfilerProvider *this,uint param_1,ENetProfilerStatsCounterType param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  longlong lVar4;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  uVar3 = (this->StatsCounterTypes).ArrayNum;
  piVar1 = &(this->StatsCounterTypes).ArrayMax;
  if (uVar3 == *piVar1) {
    uVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->StatsCounterTypes).AllocatorInstance,piVar1);
  }
  (this->StatsCounterTypes).ArrayNum = uVar3 + 1;
  lVar4 = (longlong)(int)uVar3;
  pFVar2 = (this->StatsCounterTypes).AllocatorInstance.Data;
  *(uint *)(pFVar2 + lVar4 * 0xc + 4) = param_1;
  *(uint *)(pFVar2 + lVar4 * 0xc) = uVar3;
  pFVar2[lVar4 * 0xc + 8] = (FScriptContainerElement)param_2;
  return uVar3;
}

// CreateAggregation @ 14d446130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ITable<TraceServices::FNetProfilerAggregatedStats> * __thiscall
TraceServices::FNetProfilerProvider::CreateAggregation
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2,uint param_3,
          uint param_4,uint param_5,uint param_6)

{
  FNetProfilerContentEvent *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined3 uVar10;
  undefined1 uVar13;
  FNetProfilerPacket *pFVar4;
  FNetProfilerContentEvent *pFVar5;
  ForElementType<FSetElementId> FVar6;
  undefined8 uVar7;
  undefined1 uVar17;
  longlong lVar8;
  code *pcVar18;
  double dVar19;
  TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
  *pTVar20;
  longlong *plVar21;
  bool bVar22;
  int iVar23;
  char *pcVar24;
  ITable<TraceServices::FNetProfilerAggregatedStats> *pIVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ITable<TraceServices::FNetProfilerAggregatedStats> *pIVar29;
  TTableLayout<TraceServices::FNetProfilerAggregatedStats> *pTVar30;
  TTableLayout<TraceServices::FNetProfilerAggregatedStats> *pTVar31;
  undefined8 uVar32;
  byte bVar33;
  atomic<unsigned_char> *paVar34;
  ForAnyElementType FVar35;
  uint *puVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  ForElementType<FSetElementId> FVar41;
  ForAnyElementType FVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  FScriptContainerElement *pFVar46;
  ITable<TraceServices::FNetProfilerAggregatedStats> IVar47;
  int iVar48;
  TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
  *pTVar49;
  ITable<TraceServices::FNetProfilerAggregatedStats> *pIVar50;
  ulonglong uVar51;
  ForElementType<unsigned_int> FVar52;
  uint *puVar53;
  double dVar54;
  undefined1 auStackY_2a8 [32];
  uint local_268;
  uint local_264;
  TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
  *local_260;
  FNetProfilerProvider *local_258;
  undefined1 local_250 [8];
  FNetProfilerProvider *local_248;
  TKeyInitializer<unsigned_int_const_&> local_240;
  uint local_238;
  FNetProfilerConnectionData *local_230;
  int local_228;
  uint uStack_224;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_220;
  undefined4 local_218;
  uint uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  int local_204;
  int local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  FNetProfilerConnectionData *local_1e8;
  uint *local_1e0;
  longlong local_1d8;
  FNetProfilerPacket *local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0 [20];
  uint uStack_1ac;
  longlong *local_1a0;
  undefined4 uStack_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  uint local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  code *local_140;
  TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
  **local_138;
  TTableLayout<TraceServices::FNetProfilerAggregatedStats> local_130;
  TTableLayout<TraceServices::FNetProfilerAggregatedStats> local_118 [2];
  undefined4 local_e4;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  longlong local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  ulonglong local_68;
  undefined3 uVar9;
  undefined5 uVar11;
  undefined1 uVar12;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar28 = (ulonglong)param_2;
  uVar39 = (ulonglong)param_1;
  local_248 = this;
  (**(code **)((longlong)*this->Session + 0x98))();
  local_1f8 = uVar39;
  if ((this->Connections).TotalItemCount <= uVar39) {
    pcVar24 = "ConnectionIndex < Connections.Num()";
    iVar45 = 0x24b;
    paVar34 = &bGEnsureHasExecuted<_2067707362075999669>;
LAB_14d44620f:
    bVar22 = UE::Assert::Private::ExecCheckImplInternal
                       (paVar34,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                        ,iVar45,pcVar24);
    if (!bVar22) {
      return (ITable<TraceServices::FNetProfilerAggregatedStats> *)0x0;
    }
    pcVar18 = (code *)swi(3);
    pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
    return pIVar25;
  }
  if (param_4 < param_3) {
    pcVar24 = "PacketIndexIntervalStart <= PacketIndexIntervalEnd";
    iVar45 = 0x251;
    paVar34 = &bGEnsureHasExecuted<_2067707362075999663>;
    goto LAB_14d44620f;
  }
  uVar51 = (this->Connections).PageSize;
  local_1e8 = (this->Connections).FirstPage[uVar39 / uVar51].Items[uVar39 % uVar51].Data[uVar28];
  iVar45 = (int)(local_1e8->Packets).TotalItemCount;
  local_1f0 = uVar28;
  if (iVar45 == 0) {
    pcVar24 = "PacketCount > 0";
    iVar45 = 0x259;
    paVar34 = &bGEnsureHasExecuted<_2067707362075999655>;
    goto LAB_14d44620f;
  }
  uVar43 = (this->EventTypes).ArrayNum;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  if (uVar43 != 0) {
    if ((int)uVar43 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar43);
    }
    TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_d8,uVar43);
    if (uVar43 < 4) {
      uVar43 = 1;
    }
    else {
      uVar39 = (ulonglong)((uVar43 >> 1) + 7) * 2 + 1;
      lVar40 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar40 == 0; lVar40 = lVar40 + -1) {
        }
      }
      local_208 = (undefined4)lVar40;
      uVar43 = 1 << ((byte)lVar40 & 0x1f);
    }
    if ((local_90 == 0) || ((int)local_90 < (int)uVar43)) {
      local_90 = uVar43;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
      }
      if (uVar43 != 0) {
        uVar38 = uVar43;
        if (uVar43 < 2) {
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            uVar38 = 0;
            goto LAB_14d44632d;
          }
        }
        else {
LAB_14d44632d:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar38,4)
          ;
        }
        uVar39 = 0;
        if (0 < (int)uVar43) {
          uVar51 = (ulonglong)uVar43;
          do {
            FVar35.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar35.Data = local_98.Data;
            }
            uVar26 = (longlong)(int)uVar43 - 1U & uVar39;
            uVar39 = uVar39 + 1;
            *(undefined4 *)(FVar35.Data + uVar26 * 4) = 0xffffffff;
            uVar51 = uVar51 - 1;
          } while (uVar51 != 0);
        }
      }
      if (local_90 != 0) {
        uStack_224 = 1;
        local_228 = 0;
        pTStack_220 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        uStack_214 = 0;
        iStack_210 = 0;
        if (local_b0 != 0) {
          FVar52 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
          if (local_b8 != (ForElementType<unsigned_int>)0x0) {
            FVar52 = local_b8;
          }
          uVar43 = *(uint *)FVar52;
          while (uVar43 == 0) {
            iStack_210 = iStack_210 + 0x20;
            lVar40 = (longlong)local_228;
            local_228 = local_228 + 1;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_228)
            goto LAB_14d446439;
            uVar43 = ((uint *)((longlong)FVar52 + 4))[lVar40];
          }
          uStack_224 = -uVar43 & uVar43;
          uVar39 = (ulonglong)uStack_224 * 2 + 1;
          lVar40 = 0x3f;
          if (uVar39 != 0) {
            for (; uVar39 >> lVar40 == 0; lVar40 = lVar40 + -1) {
            }
          }
          local_204 = (int)lVar40;
          uStack_214 = local_204 + -1 + iStack_210;
          if ((int)local_b0 < (int)uStack_214) {
LAB_14d446439:
            uStack_214 = local_b0;
          }
        }
        local_218 = 0xffffffff;
        local_1c8 = (longlong *)local_d8;
        local_1c0._0_8_ = CONCAT44(uStack_224,local_228);
        uStack_1ac = uStack_214;
        local_1c0._16_4_ = 0xffffffff;
        unique0x100008a0 = iStack_210;
        unique0x100008a4 = uStack_20c;
        local_1c0._8_8_ = pTStack_220;
        uVar43 = uStack_214;
        if ((int)uStack_214 < (int)local_b0) {
          do {
            lVar40 = *local_1c8;
            lVar27 = (longlong)(int)uVar43;
            uVar38 = local_90 - 1 & *(uint *)(lVar40 + lVar27 * 0x28);
            *(uint *)(lVar40 + 0x24 + lVar27 * 0x28) = uVar38;
            FVar35.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar35.Data = local_98.Data;
            }
            uVar39 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar38;
            *(undefined4 *)(lVar40 + 0x20 + lVar27 * 0x28) =
                 *(undefined4 *)(FVar35.Data + uVar39 * 4);
            *(uint *)(FVar35.Data + uVar39 * 4) = uVar43;
            local_1c0._16_4_ = local_1c0._16_4_ & ~local_1c0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_1c0);
            uVar43 = uStack_1ac;
          } while ((int)uStack_1ac < *(int *)(local_1c0._8_8_ + 0x18));
        }
      }
    }
  }
  local_88 = 0;
  if ((int)local_78 < 0x100) {
    iVar48 = 0x100 - (int)local_78;
    iVar23 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,4,iVar48,&local_80,(int *)&local_78,(int *)((longlong)&local_78 + 4));
    DefaultConstructItems<_TraceServices::FNetProfilerProvider::CreateAggregation_::__l2::FStackEntry,int>
              (local_80.Data + (longlong)iVar23 * 0x10,iVar48);
  }
  else if (0x100 < (int)local_78) {
    iVar23 = (int)local_78 + -0x100;
    if (iVar23 < 0) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar22) {
        pcVar18 = (code *)swi(3);
        pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
        return pIVar25;
      }
    }
    else {
      this = local_248;
      if (iVar23 == 0) goto LAB_14d446619;
    }
    iVar48 = ((int)local_78 - iVar23) + -0x100;
    if (iVar48 != 0) {
      memmove(local_80.Data + 0x1000,local_80.Data + 0x1000 + (longlong)iVar23 * 0x10,
              (longlong)iVar48 << 4);
    }
    iVar23 = (int)local_78 - iVar23;
    local_78 = CONCAT44(local_78._4_4_,iVar23);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,&local_80,iVar23,(int *)((longlong)&local_78 + 4));
    this = local_248;
  }
LAB_14d446619:
  iVar23 = ___xmm_00000000000000000000000000000001;
  pTVar49 = (TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
             *)local_d8;
  local_260 = pTVar49;
  local_258 = this;
  if (param_3 == param_4) {
    local_138 = &local_260;
    local_140 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FNetProfilerProvider::CreateAggregation'::__l2::<lambda_1>,void,TraceServices::FNetProfilerContentEvent_const_&>
                ::Call;
    (**(code **)(this->_padding_ + 0xd8))(this,param_1,uVar28);
    while (local_88 != 0) {
      uVar38 = (uint)(local_88 + -1);
      local_88 = local_88 + -1;
      uVar43 = 0;
      if ((int)uVar38 < (int)local_78) {
        uVar43 = ~uVar38 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar18 = (code *)swi(3);
        pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
        return pIVar25;
      }
      FVar35.Data = local_80.Data;
      lVar40 = (longlong)(int)uVar38 * 0x10;
      pFVar46 = (FScriptContainerElement *)0x0;
      if (local_d8._8_4_ != local_a4) {
        FVar42.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar42.Data = local_98.Data;
        }
        iVar45 = *(int *)(FVar42.Data +
                         (ulonglong)(local_90 - 1 & *(uint *)(local_80.Data + lVar40)) * 4);
        while (pFVar46 = (FScriptContainerElement *)0x0, iVar45 != -1) {
          pFVar46 = (FScriptContainerElement *)(local_d8._0_8_ + (longlong)iVar45 * 0x28);
          if (*(uint *)(local_d8._0_8_ + (longlong)iVar45 * 0x28) ==
              *(uint *)(local_80.Data + lVar40)) {
            if (pFVar46 != (FScriptContainerElement *)0x0) goto LAB_14d446781;
            break;
          }
          iVar45 = *(int *)(pFVar46 + 0x20);
        }
      }
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar22) {
        pcVar18 = (code *)swi(3);
        pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
        return pIVar25;
      }
LAB_14d446781:
      uVar43 = (*(int *)(FVar35.Data + lVar40 + 8) - *(int *)(FVar35.Data + lVar40 + 0xc)) -
               *(int *)(FVar35.Data + lVar40 + 4);
      *(uint *)(pFVar46 + 0x18) = *(int *)(pFVar46 + 0x18) + uVar43;
      if (uVar43 < *(uint *)(pFVar46 + 0x1c)) {
        uVar43 = *(uint *)(pFVar46 + 0x1c);
      }
      *(uint *)(pFVar46 + 0x1c) = uVar43;
    }
  }
  else {
    local_238 = iVar45 - 1;
    if (param_4 < local_238) {
      local_238 = param_4;
    }
    lVar40 = local_88;
    local_264 = param_3;
    uVar43 = local_238;
    if (param_3 <= local_238) {
      do {
        uVar28 = (this->Connections).PageSize;
        local_230 = (this->Connections).FirstPage[local_1f8 / uVar28].Items[local_1f8 % uVar28].Data
                    [local_1f0];
        uVar28 = (local_1e8->Packets).PageSize;
        uVar39 = (ulonglong)local_264 % uVar28;
        pFVar4 = (local_1e8->Packets).FirstPage[local_264 / uVar28].Items;
        local_1d8 = uVar39 * 0x30;
        local_1d0 = pFVar4;
        if (pFVar4[uVar39].EventCount != 0) {
          if ((lVar40 != 0) &&
             (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2067707362075999553>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                                  ,0x2bf,"Helper.StackSize == 0"), lVar40 = local_88,
             pTVar49 = local_260, bVar22)) {
            pcVar18 = (code *)swi(3);
            pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
            return pIVar25;
          }
          local_240.Key._4_4_ = pFVar4[uVar39].StartEventIndex;
          local_268 = 0;
          this = local_248;
          if (pFVar4[uVar39].EventCount != 0) {
            do {
              uVar28 = (local_230->ContentEvents).PageSize;
              uVar39 = (ulonglong)(local_240.Key._4_4_ + local_268) % uVar28;
              pFVar5 = (local_230->ContentEvents).FirstPage
                       [(local_240.Key._4_4_ + local_268) / uVar28].Items;
              puVar53 = &pFVar5[uVar39].EventTypeIndex;
              if (*(int *)&(pTVar49->Elements).field_0x8 != *(int *)&(pTVar49->Elements).field_0x34)
              {
                FVar6 = (pTVar49->Hash).SecondaryData;
                FVar41 = (ForElementType<FSetElementId>)&pTVar49->Hash;
                if (FVar6 != (ForElementType<FSetElementId>)0x0) {
                  FVar41 = FVar6;
                }
                iVar45 = *(int *)((longlong)FVar41 +
                                 (ulonglong)(pTVar49->HashSize - 1U & *puVar53) * 4);
                if (iVar45 != -1) {
                  do {
                    lVar40 = *(longlong *)&pTVar49->Elements + (longlong)iVar45 * 0x28;
                    if (*(uint *)(*(longlong *)&pTVar49->Elements + (longlong)iVar45 * 0x28) ==
                        *puVar53) {
                      puVar36 = (uint *)(lVar40 + 4);
                      if (lVar40 == 0) {
                        puVar36 = (uint *)0x0;
                      }
                      if (puVar36 != (uint *)0x0) goto LAB_14d44695f;
                      break;
                    }
                    iVar45 = *(int *)(lVar40 + 0x20);
                  } while (iVar45 != -1);
                }
              }
              local_1e0 = puVar53;
              TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
              ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
                        (pTVar49,&local_240,(bool *)&local_1e0);
              puVar36 = (uint *)((longlong)(int)local_240.Key * 0x28 + 4 +
                                *(longlong *)&pTVar49->Elements);
              *puVar36 = *puVar53;
LAB_14d44695f:
              pFVar1 = pFVar5 + uVar39;
              uVar7._0_3_ = pFVar1->StartPos;
              uVar9 = pFVar1->EndPos;
              uVar12 = pFVar1->Level;
              uVar16 = pFVar1->Padding;
              uVar14 = CONCAT11(uVar16,uVar12);
              uVar7._3_5_ = CONCAT23(uVar14,uVar9);
              uVar32 = *(undefined8 *)(puVar36 + 1);
              uVar38 = ((uint)uVar7._3_5_ & 0xffffff) - ((uint)uVar7 & 0xffffff);
              uVar43 = puVar36[3];
              if (puVar36[3] < uVar38) {
                uVar43 = uVar38;
              }
              puVar36[3] = uVar43;
              puVar36[1] = (int)uVar32 + iVar23;
              puVar36[2] = (int)((ulonglong)uVar32 >> 0x20) + uVar38;
              uVar28 = (ulonglong)pFVar5[uVar39].Level;
              if (uVar28 < *(ulonglong *)&local_260[1].Elements) {
                lVar40 = 0;
                do {
                  *(longlong *)&local_260[1].Elements = *(longlong *)&local_260[1].Elements + -1;
                  pTVar49 = local_260 + 1;
                  uVar43 = *(uint *)&local_260[1].Elements;
                  uVar44 = 0;
                  if ((int)uVar43 < *(int *)&local_260[1].Elements.field_0x10) {
                    uVar44 = ~uVar43 >> 0x1f;
                  }
                  if ((uVar44 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar18 = (code *)swi(3);
                    pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
                    return pIVar25;
                  }
                  lVar8 = *(longlong *)&(pTVar49->Elements).field_0x8;
                  lVar37 = (longlong)(int)uVar43 * 0x10;
                  lVar27 = lVar40;
                  if (*(int *)&(local_260->Elements).field_0x8 !=
                      *(int *)&(local_260->Elements).field_0x34) {
                    FVar6 = (local_260->Hash).SecondaryData;
                    FVar41 = (ForElementType<FSetElementId>)&local_260->Hash;
                    if (FVar6 != (ForElementType<FSetElementId>)0x0) {
                      FVar41 = FVar6;
                    }
                    iVar45 = *(int *)((longlong)FVar41 +
                                     (ulonglong)
                                     (local_260->HashSize - 1U & *(uint *)(lVar37 + lVar8)) * 4);
                    if (iVar45 != -1) {
                      do {
                        lVar27 = *(longlong *)&local_260->Elements + (longlong)iVar45 * 0x28;
                        if (*(uint *)(*(longlong *)&local_260->Elements + (longlong)iVar45 * 0x28)
                            == *(uint *)(lVar37 + lVar8)) {
                          if (lVar27 != 0) goto LAB_14d446ab5;
                          break;
                        }
                        iVar45 = *(int *)(lVar27 + 0x20);
                        lVar27 = lVar40;
                      } while (iVar45 != -1);
                    }
                  }
                  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x288,L"");
                  if (bVar22) {
                    pcVar18 = (code *)swi(3);
                    pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
                    return pIVar25;
                  }
LAB_14d446ab5:
                  uVar43 = (*(int *)(lVar37 + 8 + lVar8) - *(int *)(lVar37 + 0xc + lVar8)) -
                           *(int *)(lVar37 + 4 + lVar8);
                  *(int *)(lVar27 + 0x18) = *(int *)(lVar27 + 0x18) + uVar43;
                  if (uVar43 < *(uint *)(lVar27 + 0x1c)) {
                    uVar43 = *(uint *)(lVar27 + 0x1c);
                  }
                  *(uint *)(lVar27 + 0x1c) = uVar43;
                  uVar28 = (ulonglong)pFVar5[uVar39].Level;
                } while (uVar28 < *(ulonglong *)&local_260[1].Elements);
                puVar53 = &pFVar5[uVar39].EventTypeIndex;
              }
              if ((uVar28 != *(ulonglong *)&local_260[1].Elements) &&
                 (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_2067707362075999601>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                                      ,0x28f,"ContentEvent.Level == Helper.StackSize"), bVar22)) {
                pcVar18 = (code *)swi(3);
                pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
                return pIVar25;
              }
              pTVar49 = local_260;
              *(ulonglong *)&local_260[1].Elements = (ulonglong)pFVar5[uVar39].Level + 1;
              uVar28 = (ulonglong)pFVar5[uVar39].Level;
              if ((*(int *)&local_260[1].Elements.field_0x10 <= (int)(uint)pFVar5[uVar39].Level) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar18 = (code *)swi(3);
                pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
                return pIVar25;
              }
              pTVar20 = local_260;
              lVar40 = *(longlong *)&pTVar49[1].Elements.field_0x8;
              *(uint *)(lVar40 + uVar28 * 0x10) = *puVar53;
              *(uint *)(lVar40 + 4 + uVar28 * 0x10) = *(uint *)(pFVar5 + uVar39) & 0xffffff;
              pFVar1 = pFVar5 + uVar39;
              uVar10 = pFVar1->EndPos;
              uVar13 = pFVar1->Level;
              uVar17 = pFVar1->Padding;
              uVar15 = CONCAT11(uVar17,uVar13);
              uVar11 = CONCAT23(uVar15,uVar10);
              *(undefined4 *)(lVar40 + 0xc + uVar28 * 0x10) = 0;
              *(uint *)(lVar40 + 8 + uVar28 * 0x10) = (uint)uVar11 & 0xffffff;
              bVar33 = pFVar5[uVar39].Level;
              if (bVar33 != 0) {
                uVar43 = 0;
                if ((int)(bVar33 - 1) < *(int *)&local_260[1].Elements.field_0x10) {
                  uVar43 = ~(bVar33 - 1) >> 0x1f;
                }
                if ((uVar43 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar18 = (code *)swi(3);
                  pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
                  return pIVar25;
                }
                piVar2 = (int *)((ulonglong)bVar33 * 0x10 + -4 +
                                *(longlong *)&pTVar20[1].Elements.field_0x8);
                *piVar2 = *piVar2 + uVar38;
              }
              local_268 = local_268 + 1;
              pTVar49 = local_260;
              lVar40 = local_88;
              this = local_248;
              uVar43 = local_238;
            } while (local_268 < *(uint *)((longlong)&local_1d0->EventCount + local_1d8));
          }
          while (local_248 = this, lVar40 != 0) {
            uVar44 = (uint)(lVar40 + -1);
            local_88 = lVar40 + -1;
            uVar38 = 0;
            if ((int)uVar44 < (int)local_78) {
              uVar38 = ~uVar44 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar18 = (code *)swi(3);
              pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
              return pIVar25;
            }
            FVar35.Data = local_80.Data;
            lVar40 = (longlong)(int)uVar44 * 0x10;
            pFVar46 = (FScriptContainerElement *)0x0;
            if (local_d8._8_4_ != local_a4) {
              FVar42.Data = local_a0;
              if (local_98.Data != (FScriptContainerElement *)0x0) {
                FVar42.Data = local_98.Data;
              }
              iVar45 = *(int *)(FVar42.Data +
                               (ulonglong)(local_90 - 1 & *(uint *)(local_80.Data + lVar40)) * 4);
              while (pFVar46 = (FScriptContainerElement *)0x0, iVar45 != -1) {
                pFVar46 = (FScriptContainerElement *)(local_d8._0_8_ + (longlong)iVar45 * 0x28);
                if (*(uint *)(local_d8._0_8_ + (longlong)iVar45 * 0x28) ==
                    *(uint *)(local_80.Data + lVar40)) {
                  if (pFVar46 != (FScriptContainerElement *)0x0) goto LAB_14d446d5f;
                  break;
                }
                iVar45 = *(int *)(pFVar46 + 0x20);
              }
            }
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L"");
            if (bVar22) {
              pcVar18 = (code *)swi(3);
              pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
              return pIVar25;
            }
LAB_14d446d5f:
            uVar38 = (*(int *)(FVar35.Data + lVar40 + 8) - *(int *)(FVar35.Data + lVar40 + 0xc)) -
                     *(int *)(FVar35.Data + lVar40 + 4);
            *(uint *)(pFVar46 + 0x18) = *(int *)(pFVar46 + 0x18) + uVar38;
            if (uVar38 < *(uint *)(pFVar46 + 0x1c)) {
              uVar38 = *(uint *)(pFVar46 + 0x1c);
            }
            *(uint *)(pFVar46 + 0x1c) = uVar38;
            lVar40 = local_88;
            pTVar49 = local_260;
            this = local_248;
          }
        }
        local_264 = local_264 + 1;
      } while (local_264 <= uVar43);
    }
  }
  pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)0x0;
  pIVar29 = ::operator_new(0xc0);
  pIVar50 = pIVar25;
  if (pIVar29 != (ITable<TraceServices::FNetProfilerAggregatedStats> *)0x0) {
    pTVar30 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::
              TTableLayout<TraceServices::FNetProfilerAggregatedStats>
                        (&local_130,&local_248->AggregatedStatsTableLayout);
    pTVar31 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::
              TTableLayout<TraceServices::FNetProfilerAggregatedStats>(local_118,pTVar30);
    *pIVar29 = (ITable<TraceServices::FNetProfilerAggregatedStats>)
               &___7__TTableBase_UFNetProfilerAggregatedStats_TraceServices___TraceServices__6B_;
    TTableLayout<TraceServices::FNetProfilerAggregatedStats>::
    TTableLayout<TraceServices::FNetProfilerAggregatedStats>
              ((TTableLayout<TraceServices::FNetProfilerAggregatedStats> *)(pIVar29 + 1),pTVar31);
    DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar31->Columns).AllocatorInstance.Data,
               (pTVar31->Columns).ArrayNum);
    pFVar46 = (pTVar31->Columns).AllocatorInstance.Data;
    if (pFVar46 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar46);
    }
    *pIVar29 = (ITable<TraceServices::FNetProfilerAggregatedStats>)
               &
               ___7__TTable_UFNetProfilerAggregatedStats_TraceServices___0CAAAAA__TraceServices__6B_
    ;
    pIVar29[4] = (ITable<TraceServices::FNetProfilerAggregatedStats>)
                 &___7FSlabAllocator_TraceServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar29 + 5),4000);
    pIVar29[10] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar29[0xb] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar29[0xc] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar29[0xd] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x200000;
    pIVar29[0xe] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar29[0xf] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar29[0x10] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar29[0x11] = (ITable<TraceServices::FNetProfilerAggregatedStats>)(pIVar29 + 4);
    pIVar29[0x12] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar29[0x13] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar29[0x14] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar29[0x15] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar29[0x16] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x400;
    pIVar29[0x17] = (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0;
    DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar30->Columns).AllocatorInstance.Data,
               (pTVar30->Columns).ArrayNum);
    pFVar46 = (pTVar30->Columns).AllocatorInstance.Data;
    pIVar50 = pIVar29;
    if (pFVar46 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar46);
    }
  }
  uVar43 = local_b0;
  local_180 = 0;
  uStack_194 = 1;
  uStack_184 = local_180;
  if (local_b0 != 0) {
    FVar52 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FVar52 = local_b8;
    }
    uVar38 = *(uint *)FVar52;
    pIVar29 = pIVar25;
    while (local_180 = (uint)pIVar29, uVar38 == 0) {
      iVar45 = (int)pIVar25;
      local_180 = local_180 + 0x20;
      pIVar29 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(ulonglong)local_180;
      uVar38 = iVar45 + 1;
      pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(ulonglong)uVar38;
      uStack_184 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar38)
      goto LAB_14d446f60;
      uVar38 = ((uint *)((longlong)FVar52 + 4))[iVar45];
    }
    uStack_194 = -uVar38 & uVar38;
    uVar28 = (ulonglong)uStack_194 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_200 = (int)lVar40;
    uStack_184 = (local_180 - 1) + local_200;
    if ((int)local_b0 < (int)uStack_184) {
      uStack_184 = local_b0;
    }
  }
LAB_14d446f60:
  local_1a0 = (longlong *)local_d8;
  uStack_17c = local_e4;
  local_190 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  iStack_178 = local_d8._8_4_ - local_a4;
  uVar38 = local_b0 & 0xffffffe0;
  uStack_188 = 0xffffffff;
  TStack_168.CurrentBitIndex = uStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  bVar33 = (byte)local_b0;
  uStack_198 = SUB84(pIVar25,0);
  TStack_168._padding_ = CONCAT44(uStack_194,uStack_198);
  iVar45 = (int)local_b0 >> 5;
  TStack_168._28_4_ = local_e4;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  local_170 = local_1a0;
  TStack_168.Array = local_190;
  if (((int)local_b0 < 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar22)) {
    pcVar18 = (code *)swi(3);
    pIVar25 = (ITable<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar18)();
    return pIVar25;
  }
  dVar19 = __real_43e0000000000000;
  if (uVar43 != local_b0) {
    FVar52 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FVar52 = local_b8;
    }
    uVar43 = -1 << (bVar33 & 0x1f) & *(uint *)((longlong)FVar52 + (longlong)iVar45 * 4);
    while (uVar43 == 0) {
      lVar40 = (longlong)iVar45;
      uVar38 = uVar38 + 0x20;
      iVar45 = iVar45 + 1;
      uVar43 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar45)
      goto LAB_14d4470b0;
      uVar43 = ((uint *)((longlong)FVar52 + 4))[lVar40];
    }
    uVar28 = (ulonglong)(-uVar43 & uVar43) * 2 + 1;
    lVar40 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    uVar43 = (uVar38 - 1) + (int)lVar40;
    if ((int)local_b0 < (int)uVar43) {
      uVar43 = local_b0;
    }
  }
LAB_14d4470b0:
  while( true ) {
    plVar21 = local_170;
    if ((int)local_170[1] - *(int *)((longlong)local_170 + 0x34) != (int)uStack_148) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_250);
    }
    lVar40 = (longlong)TStack_168.CurrentBitIndex;
    if (((TStack_168.CurrentBitIndex == uVar43) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar21 == (longlong *)local_d8)) break;
    lVar27 = *plVar21;
    if ((pIVar50[0x15] == (ITable<TraceServices::FNetProfilerAggregatedStats>)0x0) ||
       (*(ITable<TraceServices::FNetProfilerAggregatedStats> *)((longlong)pIVar50[0x15] + 8) ==
        pIVar50[0x16])) {
      iVar45 = *(int *)(pIVar50 + 0x13);
      if (iVar45 == *(int *)&pIVar50[0x13].field_0x4) {
        iVar45 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(pIVar50 + 0x12),
                            (int *)&pIVar50[0x13].field_0x4);
        *(int *)(pIVar50 + 0x13) = iVar45;
      }
      IVar47 = (ITable<TraceServices::FNetProfilerAggregatedStats>)
               ((longlong)iVar45 * 0x10 + (longlong)pIVar50[0x12]);
      *(int *)(pIVar50 + 0x13) = iVar45 + 1;
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>,int>
                ((void *)IVar47,1);
      pIVar50[0x15] = IVar47;
      pIVar50[0x14] = pIVar50[0x12];
      uVar32 = (**(code **)(*(longlong *)pIVar50[0x11] + 8))
                         (pIVar50[0x11],(longlong)pIVar50[0x16] * 0x1c);
      *(undefined8 *)pIVar50[0x15] = uVar32;
    }
    pIVar50[0x17] =
         (ITable<TraceServices::FNetProfilerAggregatedStats>)((longlong)pIVar50[0x17] + 1);
    lVar37 = *(longlong *)((longlong)pIVar50[0x15] + 8) * 0x1c;
    lVar8 = *(longlong *)pIVar50[0x15];
    *(undefined8 *)(lVar37 + lVar8) = 0;
    *(undefined8 *)(lVar37 + 8 + lVar8) = 0;
    *(undefined8 *)(lVar37 + 0x10 + lVar8) = 0;
    *(undefined4 *)(lVar37 + 0x18 + lVar8) = 0;
    *(longlong *)((longlong)pIVar50[0x15] + 8) = *(longlong *)((longlong)pIVar50[0x15] + 8) + 1;
    puVar3 = (undefined8 *)(lVar27 + 4 + lVar40 * 0x28);
    uVar32 = puVar3[1];
    *(undefined8 *)(lVar37 + lVar8) = *puVar3;
    ((undefined8 *)(lVar37 + lVar8))[1] = uVar32;
    *(undefined8 *)(lVar37 + 0x10 + lVar8) = *(undefined8 *)(lVar27 + 0x14 + lVar40 * 0x28);
    *(undefined4 *)(lVar37 + 0x18 + lVar8) = *(undefined4 *)(lVar27 + 0x1c + lVar40 * 0x28);
    dVar54 = (double)*(uint *)(lVar27 + 0xc + lVar40 * 0x28) /
             (double)*(uint *)(lVar27 + 8 + lVar40 * 0x28);
    if (dVar19 <= dVar54) {
      dVar54 = dVar54 - dVar19;
    }
    *(int *)(lVar37 + 0x10 + lVar8) = (int)(longlong)dVar54;
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  local_90 = 0;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  return pIVar50;
}

// CreateConnection @ 14d449aa0

FNetProfilerConnectionInternal * __thiscall
TraceServices::FNetProfilerProvider::CreateConnection(FNetProfilerProvider *this,uint param_1)

{
  ulong64 *puVar1;
  ushort *puVar2;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int *piVar4;
  TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal> *pTVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  FNetProfilerGameInstanceInternal *pFVar10;
  FNetProfilerConnectionInternal *pFVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<unsigned_int> FVar13;
  longlong *plVar14;
  FNetProfilerConnectionData *pFVar15;
  ILinearAllocator *pIVar16;
  TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal> *pTVar17;
  ForElementType<unsigned_int> FVar18;
  undefined4 local_28 [4];
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  pFVar10 = EditGameInstance(this,param_1);
  if ((pFVar10 == (FNetProfilerGameInstanceInternal *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                         ,0xb8,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FNetProfilerConnectionInternal *)(*pcVar6)();
    return pFVar11;
  }
  pTVar5 = (this->Connections).LastPage;
  local_28[0] = (undefined4)(this->Connections).TotalItemCount;
  if ((pTVar5 == (TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal> *)0x0) ||
     (pTVar5->Count == (this->Connections).PageSize)) {
    pTVar3 = &(this->Connections).PagesArray;
    iVar9 = (this->Connections).PagesArray.ArrayNum;
    piVar4 = &(this->Connections).PagesArray.ArrayMax;
    if (iVar9 == *piVar4) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar4);
    }
    (this->Connections).PagesArray.ArrayNum = iVar9 + 1;
    pTVar17 = (TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal> *)
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>,int>
              (pTVar17,1);
    pTVar5 = (TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal> *)
             (pTVar3->AllocatorInstance).Data;
    pIVar16 = (this->Connections).Allocator;
    (this->Connections).LastPage = pTVar17;
    (this->Connections).FirstPage = pTVar5;
    pFVar11 = (FNetProfilerConnectionInternal *)
              (**(code **)((longlong)*pIVar16 + 8))(pIVar16,(this->Connections).PageSize * 0x38);
    ((this->Connections).LastPage)->Items = pFVar11;
  }
  puVar1 = &(this->Connections).TotalItemCount;
  *puVar1 = *puVar1 + 1;
  FVar18 = (ForElementType<unsigned_int>)&pFVar10->Connections;
  pTVar5 = (this->Connections).LastPage;
  pFVar11 = pTVar5->Items + pTVar5->Count;
  (pFVar11->Connection).GameInstanceIndex = 0;
  (pFVar11->Connection).ConnectionIndex = 0;
  *(undefined2 *)&(pFVar11->Connection).field_0x26 = 0;
  pFVar11->Data[0] = (FNetProfilerConnectionData *)0x0;
  pFVar11->Data[1] = (FNetProfilerConnectionData *)0x0;
  (pFVar11->Connection).LifeTime.End = INFINITY;
  (pFVar11->Connection).Name = (wchar_t *)0x0;
  (pFVar11->Connection).AddressString = (wchar_t *)0x0;
  (pFVar11->Connection).LifeTime.Begin = 0.0;
  puVar1 = &((this->Connections).LastPage)->Count;
  *puVar1 = *puVar1 + 1;
  (pFVar11->Connection).ConnectionIndex = (ushort)local_28[0];
  INSERT(*puVar2,0,0x1e,1);
  (pFVar11->Connection).ConnectionIndex = (ushort)uVar7;
  *(short *)&(pFVar11->Connection).field_0x26 = SUB42(uVar7,2);
  INSERT(*puVar2,0,0x1f,1);
  (pFVar11->Connection).ConnectionIndex = (ushort)uVar7;
  *(short *)&(pFVar11->Connection).field_0x26 = SUB42(uVar7,2);
  (pFVar11->Connection).GameInstanceIndex = param_1;
  FVar13 = (pFVar10->Connections).AllocatorInstance.SecondaryData;
  FVar12 = FVar13;
  if (FVar13 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = FVar18;
  }
  if ((ulonglong)FVar12 <= local_28) {
    if (FVar13 == (ForElementType<unsigned_int>)0x0) {
      FVar13 = FVar18;
    }
    if ((local_28 < (undefined4 *)((longlong)FVar13 + (longlong)(pFVar10->Connections).ArrayMax * 4)
        ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FNetProfilerConnectionInternal *)(*pcVar6)();
      return pFVar11;
    }
  }
  iVar9 = (pFVar10->Connections).ArrayNum;
  piVar4 = &(pFVar10->Connections).ArrayMax;
  if (iVar9 == *piVar4) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,(ForElementType<unsigned_int> *)FVar18,piVar4);
  }
  (pFVar10->Connections).ArrayNum = iVar9 + 1;
  FVar13 = (pFVar10->Connections).AllocatorInstance.SecondaryData;
  if (FVar13 != (ForElementType<unsigned_int>)0x0) {
    FVar18 = FVar13;
  }
  *(undefined4 *)((longlong)FVar18 + (longlong)iVar9 * 4) = local_28[0];
  plVar14 = (longlong *)(**(code **)((longlong)*this->Session + 0xb8))();
  pFVar15 = (FNetProfilerConnectionData *)(**(code **)(*plVar14 + 8))(plVar14,0xb8);
  pFVar11->Data[0] = pFVar15;
  pIVar16 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  (pFVar15->Packets).Allocator = pIVar16;
  (pFVar15->PacketStats).Allocator = pIVar16;
  (pFVar15->ContentEvents).Allocator = pIVar16;
  (pFVar15->Packets).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar15->Packets).PagesArray.ArrayNum = 0;
  (pFVar15->Packets).PagesArray.ArrayMax = 0;
  (pFVar15->Packets).FirstPage = (TPagedArrayPage<TraceServices::FNetProfilerPacket> *)0x0;
  (pFVar15->Packets).LastPage = (TPagedArrayPage<TraceServices::FNetProfilerPacket> *)0x0;
  (pFVar15->Packets).PageSize = 0x400;
  (pFVar15->Packets).TotalItemCount = 0;
  (pFVar15->PacketStats).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar15->PacketStats).PagesArray.ArrayNum = 0;
  (pFVar15->PacketStats).PagesArray.ArrayMax = 0;
  (pFVar15->PacketStats).FirstPage = (TPagedArrayPage<TraceServices::FNetProfilerStats> *)0x0;
  (pFVar15->PacketStats).LastPage = (TPagedArrayPage<TraceServices::FNetProfilerStats> *)0x0;
  (pFVar15->PacketStats).PageSize = 0x1000;
  (pFVar15->PacketStats).TotalItemCount = 0;
  (pFVar15->ContentEvents).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar15->ContentEvents).PagesArray.ArrayNum = 0;
  (pFVar15->ContentEvents).PagesArray.ArrayMax = 0;
  (pFVar15->ContentEvents).FirstPage =
       (TPagedArrayPage<TraceServices::FNetProfilerContentEvent> *)0x0;
  (pFVar15->ContentEvents).LastPage =
       (TPagedArrayPage<TraceServices::FNetProfilerContentEvent> *)0x0;
  (pFVar15->ContentEvents).PageSize = 0x2000;
  (pFVar15->ContentEvents).TotalItemCount = 0;
  pFVar15->PacketChangeCount = 0;
  pFVar15->PacketStatsChangeCount = 0;
  pFVar15->ContentEventChangeCount = 0;
  plVar14 = (longlong *)(**(code **)((longlong)*this->Session + 0xb8))();
  pFVar15 = (FNetProfilerConnectionData *)(**(code **)(*plVar14 + 8))(plVar14,0xb8);
  pFVar11->Data[1] = pFVar15;
  pIVar16 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  (pFVar15->Packets).Allocator = pIVar16;
  (pFVar15->PacketStats).Allocator = pIVar16;
  (pFVar15->ContentEvents).Allocator = pIVar16;
  (pFVar15->Packets).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar15->Packets).PagesArray.ArrayNum = 0;
  (pFVar15->Packets).PagesArray.ArrayMax = 0;
  (pFVar15->Packets).FirstPage = (TPagedArrayPage<TraceServices::FNetProfilerPacket> *)0x0;
  (pFVar15->Packets).LastPage = (TPagedArrayPage<TraceServices::FNetProfilerPacket> *)0x0;
  (pFVar15->Packets).PageSize = 0x400;
  (pFVar15->Packets).TotalItemCount = 0;
  (pFVar15->PacketStats).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar15->PacketStats).PagesArray.ArrayNum = 0;
  (pFVar15->PacketStats).PagesArray.ArrayMax = 0;
  (pFVar15->PacketStats).FirstPage = (TPagedArrayPage<TraceServices::FNetProfilerStats> *)0x0;
  (pFVar15->PacketStats).LastPage = (TPagedArrayPage<TraceServices::FNetProfilerStats> *)0x0;
  (pFVar15->PacketStats).PageSize = 0x1000;
  (pFVar15->PacketStats).TotalItemCount = 0;
  (pFVar15->ContentEvents).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar15->ContentEvents).PagesArray.ArrayNum = 0;
  (pFVar15->ContentEvents).PagesArray.ArrayMax = 0;
  (pFVar15->ContentEvents).FirstPage =
       (TPagedArrayPage<TraceServices::FNetProfilerContentEvent> *)0x0;
  (pFVar15->ContentEvents).LastPage =
       (TPagedArrayPage<TraceServices::FNetProfilerContentEvent> *)0x0;
  (pFVar15->ContentEvents).PageSize = 0x2000;
  (pFVar15->ContentEvents).TotalItemCount = 0;
  pFVar15->PacketChangeCount = 0;
  pFVar15->PacketStatsChangeCount = 0;
  pFVar15->ContentEventChangeCount = 0;
  this->ConnectionChangeCount = this->ConnectionChangeCount + 1;
  return pFVar11;
}

// CreateGameInstance @ 14d44aee0

FNetProfilerGameInstanceInternal * __thiscall
TraceServices::FNetProfilerProvider::CreateGameInstance(FNetProfilerProvider *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TPagedArray<TraceServices::FNetProfilerObjectInstance,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerObjectInstance>_>
  *pTVar4;
  ILinearAllocator *pIVar5;
  TPagedArray<TraceServices::FNetProfilerFrame,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerFrame>_>
  *pTVar6;
  TPagedArray<TraceServices::FNetProfilerStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerStats>_>
  *pTVar7;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar8;
  FNetProfilerGameInstanceInternal *pFVar9;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  iVar2 = (this->GameInstances).ArrayNum;
  piVar1 = &(this->GameInstances).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FNetProfilerGameInstanceInternal>_>
                      (600,8,&(this->GameInstances).AllocatorInstance,piVar1);
  }
  (this->GameInstances).ArrayNum = iVar2 + 1;
  FVar8 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar8 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
  }
  pFVar9 = (FNetProfilerGameInstanceInternal *)((longlong)iVar2 * 600 + (longlong)FVar8);
  DefaultConstructItems<TraceServices::FNetProfilerGameInstanceInternal,int>(pFVar9,1);
  (pFVar9->Instance).GameInstanceIndex = (this->GameInstances).ArrayNum - 1;
  plVar3 = (longlong *)(**(code **)((longlong)*this->Session + 0xb8))();
  pTVar4 = (TPagedArray<TraceServices::FNetProfilerObjectInstance,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerObjectInstance>_>
            *)(**(code **)(*plVar3 + 8))(plVar3,0x38);
  pFVar9->Objects = pTVar4;
  pIVar5 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  pTVar4->PageSize = 0x1000;
  pTVar4->Allocator = pIVar5;
  (pTVar4->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar4->PagesArray).ArrayNum = 0;
  (pTVar4->PagesArray).ArrayMax = 0;
  pTVar4->FirstPage = (TPagedArrayPage<TraceServices::FNetProfilerObjectInstance> *)0x0;
  pTVar4->LastPage = (TPagedArrayPage<TraceServices::FNetProfilerObjectInstance> *)0x0;
  pTVar4->TotalItemCount = 0;
  pFVar9->ObjectsChangeCount = 0;
  plVar3 = (longlong *)(**(code **)((longlong)*this->Session + 0xb8))();
  pTVar6 = (TPagedArray<TraceServices::FNetProfilerFrame,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerFrame>_>
            *)(**(code **)(*plVar3 + 8))(plVar3,0x38);
  pFVar9->Frames = pTVar6;
  pIVar5 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  pTVar6->Allocator = pIVar5;
  (pTVar6->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar6->PagesArray).ArrayNum = 0;
  (pTVar6->PagesArray).ArrayMax = 0;
  pTVar6->FirstPage = (TPagedArrayPage<TraceServices::FNetProfilerFrame> *)0x0;
  pTVar6->LastPage = (TPagedArrayPage<TraceServices::FNetProfilerFrame> *)0x0;
  pTVar6->PageSize = 0x1000;
  pTVar6->TotalItemCount = 0;
  pFVar9->FramesChangeCount = 0;
  plVar3 = (longlong *)(**(code **)((longlong)*this->Session + 0xb8))();
  pTVar7 = (TPagedArray<TraceServices::FNetProfilerStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerStats>_>
            *)(**(code **)(*plVar3 + 8))(plVar3,0x38);
  pFVar9->FrameStats = pTVar7;
  pIVar5 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  (pTVar7->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar7->Allocator = pIVar5;
  (pTVar7->PagesArray).ArrayNum = 0;
  (pTVar7->PagesArray).ArrayMax = 0;
  pTVar7->FirstPage = (TPagedArrayPage<TraceServices::FNetProfilerStats> *)0x0;
  pTVar7->LastPage = (TPagedArrayPage<TraceServices::FNetProfilerStats> *)0x0;
  pTVar7->PageSize = 0x1000;
  pTVar7->TotalItemCount = 0;
  CreateObject(this,(pFVar9->Instance).GameInstanceIndex);
  (**(code **)((longlong)*this->Session + 0xb0))();
  this->GameInstanceChangeCount = this->GameInstanceChangeCount + 1;
  return pFVar9;
}

// CreateObject @ 14d44bf10

FNetProfilerObjectInstance * __thiscall
TraceServices::FNetProfilerProvider::CreateObject(FNetProfilerProvider *this,uint param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArray<TraceServices::FNetProfilerObjectInstance,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerObjectInstance>_>
  *pTVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FNetProfilerGameInstanceInternal *pFVar8;
  FNetProfilerObjectInstance *pFVar9;
  TPagedArrayPage<TraceServices::FNetProfilerObjectInstance> *pTVar10;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  pFVar8 = EditGameInstance(this,param_1);
  if (pFVar8 == (FNetProfilerGameInstanceInternal *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0xd6,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FNetProfilerObjectInstance *)(*pcVar5)();
      return pFVar9;
    }
  }
  pTVar3 = pFVar8->Objects;
  if ((pTVar3->LastPage == (TPagedArrayPage<TraceServices::FNetProfilerObjectInstance> *)0x0) ||
     (pTVar3->LastPage->Count == pTVar3->PageSize)) {
    iVar7 = (pTVar3->PagesArray).ArrayNum;
    piVar1 = &(pTVar3->PagesArray).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pTVar3->PagesArray).AllocatorInstance,piVar1);
    }
    (pTVar3->PagesArray).ArrayNum = iVar7 + 1;
    pTVar10 = (TPagedArrayPage<TraceServices::FNetProfilerObjectInstance> *)
              ((pTVar3->PagesArray).AllocatorInstance.Data + (longlong)iVar7 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerObjectInstance>,int>
              (pTVar10,1);
    pTVar3->FirstPage =
         (TPagedArrayPage<TraceServices::FNetProfilerObjectInstance> *)
         (pTVar3->PagesArray).AllocatorInstance.Data;
    pTVar3->LastPage = pTVar10;
    pFVar9 = (FNetProfilerObjectInstance *)
             (**(code **)((longlong)*pTVar3->Allocator + 8))
                       (pTVar3->Allocator,pTVar3->PageSize * 0x28);
    pTVar3->LastPage->Items = pFVar9;
  }
  pTVar3->TotalItemCount = pTVar3->TotalItemCount + 1;
  uVar4 = pTVar3->LastPage->Count;
  pFVar9 = pTVar3->LastPage->Items;
  pFVar9[uVar4].LifeTime.Begin = 0.0;
  pFVar9[uVar4].NetObjectId = 0;
  pFVar9 = pFVar9 + uVar4;
  pFVar9->TypeId = 0;
  pFVar9->ObjectIndex = 0;
  pFVar9->NameIndex = 0;
  (pFVar9->LifeTime).End = INFINITY;
  puVar2 = &pTVar3->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  pFVar9->ObjectIndex = (int)pFVar8->Objects->TotalItemCount - 1;
  pFVar8->ObjectsChangeCount = pFVar8->ObjectsChangeCount + 1;
  return pFVar9;
}

// CreateStatsCountersAggregation @ 14d44d7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> * __thiscall
TraceServices::FNetProfilerProvider::CreateStatsCountersAggregation
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2,uint param_3,
          uint param_4)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar5;
  FNetProfilerPacket *pFVar6;
  FNetProfilerStats *pFVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  uint uVar11;
  FNetProfilerConnectionData *pFVar12;
  double dVar13;
  FNetProfilerProvider *pFVar14;
  longlong *plVar15;
  bool bVar16;
  uint uVar17;
  char *pcVar18;
  ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> *pIVar19;
  ulonglong uVar20;
  longlong lVar21;
  TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *pTVar22;
  TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *pTVar23;
  undefined8 uVar24;
  byte bVar25;
  atomic<unsigned_char> *paVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  int iVar33;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar34;
  ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> IVar35;
  ulonglong uVar36;
  FScriptContainerElement *pFVar37;
  ForElementType<unsigned_int> FVar38;
  double dVar39;
  undefined1 auStackY_238 [32];
  undefined1 local_208 [4];
  undefined1 local_204 [12];
  int local_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f0;
  undefined4 local_1e8;
  uint uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FNetProfilerConnectionData *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  FNetProfilerProvider *local_1c0;
  undefined4 local_1b8;
  int local_1b4;
  int local_1b0;
  FNetProfilerStats *local_1a8;
  undefined4 *local_1a0;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  longlong *local_170;
  uint uStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  uint local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> local_110;
  TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> local_f8 [2];
  undefined4 local_c4;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1c0 = this;
  (**(code **)((longlong)*this->Session + 0x98))();
  uVar31 = (ulonglong)param_1;
  if ((this->Connections).TotalItemCount <= (ulonglong)param_1) {
    pcVar18 = "ConnectionIndex < Connections.Num()";
    iVar33 = 0x2e8;
    paVar26 = &bGEnsureHasExecuted<_2067707362075999512>;
LAB_14d44d889:
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (paVar26,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                        ,iVar33,pcVar18);
    if (!bVar16) {
      return (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)0x0;
    }
    pcVar10 = (code *)swi(3);
    pIVar19 = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)(*pcVar10)();
    return pIVar19;
  }
  if (param_4 < param_3) {
    pcVar18 = "PacketIndexIntervalStart <= PacketIndexIntervalEnd";
    iVar33 = 0x2ee;
    paVar26 = &bGEnsureHasExecuted<_2067707362075999506>;
    goto LAB_14d44d889;
  }
  uVar29 = (this->Connections).PageSize;
  local_1d8 = (this->Connections).FirstPage[uVar31 / uVar29].Items[uVar31 % uVar29].Data[param_2];
  iVar33 = (int)(local_1d8->Packets).TotalItemCount;
  if (iVar33 == 0) {
    pcVar18 = "PacketCount > 0";
    iVar33 = 0x2f8;
    paVar26 = &bGEnsureHasExecuted<_2067707362075999496>;
    goto LAB_14d44d889;
  }
  uVar32 = (this->StatsCounterTypes).ArrayNum;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = -1;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if (uVar32 == 0) goto LAB_14d44db65;
  if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar32);
  }
  TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_b8,uVar32);
  if (uVar32 < 4) {
    uVar32 = 1;
  }
  else {
    uVar29 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
    lVar30 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    local_1b8 = (undefined4)lVar30;
    uVar32 = 1 << ((byte)lVar30 & 0x1f);
  }
  if ((local_70 != 0) && ((int)uVar32 <= (int)local_70)) goto LAB_14d44db65;
  local_70 = uVar32;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
  }
  if (uVar32 != 0) {
    uVar28 = uVar32;
    if (uVar32 < 2) {
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        uVar28 = 0;
        goto LAB_14d44d993;
      }
    }
    else {
LAB_14d44d993:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar28,4);
    }
    uVar29 = 0;
    if (0 < (int)uVar32) {
      uVar36 = (ulonglong)uVar32;
      do {
        FVar27.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar27.Data = local_78.Data;
        }
        uVar20 = (longlong)(int)uVar32 - 1U & uVar29;
        uVar29 = uVar29 + 1;
        *(undefined4 *)(FVar27.Data + uVar20 * 4) = 0xffffffff;
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
    }
  }
  if (local_70 != 0) {
    pTStack_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    local_1f8 = 0;
    uStack_1f4 = 1;
    uStack_1e4 = 0;
    iStack_1e0 = 0;
    if (local_90 != 0) {
      FVar38 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar38 = local_98;
      }
      uVar32 = *(uint *)FVar38;
      while (uVar32 == 0) {
        iStack_1e0 = iStack_1e0 + 0x20;
        lVar30 = (longlong)local_1f8;
        local_1f8 = local_1f8 + 1;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1f8)
        goto LAB_14d44dabf;
        uVar32 = ((uint *)((longlong)FVar38 + 4))[lVar30];
      }
      uStack_1f4 = -uVar32 & uVar32;
      uVar29 = (ulonglong)uStack_1f4 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_1b4 = (int)lVar30;
      uStack_1e4 = local_1b4 + -1 + iStack_1e0;
      if ((int)local_90 < (int)uStack_1e4) {
LAB_14d44dabf:
        uStack_1e4 = local_90;
      }
    }
    local_1e8 = 0xffffffff;
    local_198 = (longlong *)local_b8;
    local_190._padding_ = CONCAT44(uStack_1f4,local_1f8);
    local_190.CurrentBitIndex = uStack_1e4;
    local_190.UnvisitedBitMask = 0xffffffff;
    local_190._28_4_ = uStack_1dc;
    local_190.BaseBitIndex = iStack_1e0;
    local_190.Array = pTStack_1f0;
    uVar32 = uStack_1e4;
    if ((int)uStack_1e4 < (int)local_90) {
      do {
        lVar30 = *local_198;
        lVar21 = (longlong)(int)uVar32;
        uVar28 = local_70 - 1 & *(uint *)(lVar30 + lVar21 * 0x24);
        *(uint *)(lVar30 + 0x20 + lVar21 * 0x24) = uVar28;
        FVar27.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar27.Data = local_78.Data;
        }
        uVar29 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar28;
        *(undefined4 *)(lVar30 + 0x1c + lVar21 * 0x24) = *(undefined4 *)(FVar27.Data + uVar29 * 4);
        *(uint *)(FVar27.Data + uVar29 * 4) = uVar32;
        local_190.UnvisitedBitMask = local_190.UnvisitedBitMask & ~local_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
        uVar32 = local_190.CurrentBitIndex;
      } while (local_190.CurrentBitIndex < (local_190.Array)->NumBits);
    }
  }
LAB_14d44db65:
  pFVar14 = local_1c0;
  uVar29 = (local_1c0->Connections).PageSize;
  FVar34 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)
           &local_1c0->GameInstances;
  uVar32 = (local_1c0->Connections).FirstPage[uVar31 / uVar29].Items[uVar31 % uVar29].Connection.
           GameInstanceIndex;
  uVar28 = 0;
  if ((int)uVar32 < (local_1c0->GameInstances).ArrayNum) {
    uVar28 = ~uVar32 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar10 = (code *)swi(3);
    pIVar19 = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)(*pcVar10)();
    return pIVar19;
  }
  FVar5 = (pFVar14->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar34 = FVar5;
  }
  uVar28 = iVar33 - 1;
  if (param_4 < uVar28) {
    uVar28 = param_4;
  }
  lVar30 = *(longlong *)((longlong)(int)uVar32 * 600 + 0x248 + (longlong)FVar34);
  lVar21 = *(longlong *)((longlong)(int)uVar32 * 600 + 0x240 + (longlong)FVar34);
  local_1d0 = lVar30;
  local_1c8 = lVar21;
  pFVar12 = local_1d8;
  for (; local_1d8 = pFVar12, param_3 <= uVar28; param_3 = param_3 + 1) {
    uVar32 = 0;
    uVar31 = (pFVar12->Packets).PageSize;
    uVar29 = (ulonglong)param_3 % uVar31;
    pFVar6 = (pFVar12->Packets).FirstPage[param_3 / uVar31].Items;
    if (pFVar6[uVar29].StatsCount != 0) {
      do {
        uVar17 = pFVar6[uVar29].StartStatsIndex + uVar32;
        uVar31 = (pFVar12->PacketStats).PageSize;
        uVar36 = (ulonglong)uVar17 % uVar31;
        pFVar7 = (pFVar12->PacketStats).FirstPage[uVar17 / uVar31].Items;
        uVar17 = pFVar7[uVar36].StatsCounterTypeIndex;
        pFVar7 = pFVar7 + uVar36;
        if (local_b8._8_4_ != local_84) {
          FVar27.Data = local_80;
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            FVar27.Data = local_78.Data;
          }
          iVar33 = *(int *)(FVar27.Data + (ulonglong)(local_70 - 1 & uVar17) * 4);
          while (iVar33 != -1) {
            pFVar1 = (FScriptContainerElement *)(local_b8._0_8_ + (longlong)iVar33 * 0x24);
            if (*(uint *)(local_b8._0_8_ + (longlong)iVar33 * 0x24) == uVar17) {
              pFVar37 = pFVar1 + 4;
              if (pFVar1 == (FScriptContainerElement *)0x0) {
                pFVar37 = (FScriptContainerElement *)0x0;
              }
              if (pFVar37 != (FScriptContainerElement *)0x0) goto LAB_14d44dd3d;
              break;
            }
            iVar33 = *(int *)(pFVar1 + 0x1c);
          }
        }
        local_1a8 = pFVar7;
        TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
                  ((TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats,0>,FDefaultSetAllocator>
                    *)local_b8,(TKeyInitializer<unsigned_int_const_&> *)local_204,(bool *)&local_1a8
                  );
        pFVar37 = (FScriptContainerElement *)
                  (local_b8._0_8_ + ((longlong)(int)local_204._0_4_ * 9 + 1) * 4);
        *(uint *)pFVar37 = pFVar7->StatsCounterTypeIndex;
LAB_14d44dd3d:
        uVar17 = pFVar7->StatsValue;
        *(uint *)(pFVar37 + 4) = *(uint *)(pFVar37 + 4) + uVar17;
        uVar11 = *(uint *)(pFVar37 + 0xc);
        if (*(uint *)(pFVar37 + 0xc) < uVar17) {
          uVar11 = uVar17;
        }
        *(uint *)(pFVar37 + 0x14) = *(uint *)(pFVar37 + 0x14) + 1;
        uVar32 = uVar32 + 1;
        *(uint *)(pFVar37 + 0xc) = uVar11;
        lVar21 = local_1c8;
        lVar30 = local_1d0;
      } while (uVar32 < pFVar6[uVar29].StatsCount);
    }
    uVar32 = 0;
    uVar31 = (ulonglong)pFVar6[uVar29].NetProfilerFrameIndex;
    if (uVar31 < *(ulonglong *)(lVar21 + 0x30)) {
      uVar29 = uVar31 % *(ulonglong *)(lVar21 + 0x28);
      lVar8 = *(longlong *)
               (*(longlong *)(lVar21 + 0x18) + (uVar31 / *(ulonglong *)(lVar21 + 0x28)) * 0x10);
      if (*(int *)(lVar8 + 0x14 + uVar29 * 0x18) != 0) {
        do {
          uVar17 = *(int *)(lVar8 + 0x10 + uVar29 * 0x18) + uVar32;
          uVar31 = (ulonglong)uVar17 % *(ulonglong *)(lVar30 + 0x28);
          lVar21 = *(longlong *)
                    (*(longlong *)(lVar30 + 0x18) +
                    ((ulonglong)uVar17 / *(ulonglong *)(lVar30 + 0x28)) * 0x10);
          uVar17 = *(uint *)(lVar21 + uVar31 * 8);
          puVar2 = (undefined4 *)(lVar21 + uVar31 * 8);
          if (local_b8._8_4_ != local_84) {
            FVar27.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar27.Data = local_78.Data;
            }
            iVar33 = *(int *)(FVar27.Data + (ulonglong)(local_70 - 1 & uVar17) * 4);
            while (iVar33 != -1) {
              pFVar1 = (FScriptContainerElement *)(local_b8._0_8_ + (longlong)iVar33 * 0x24);
              if (*(uint *)(local_b8._0_8_ + (longlong)iVar33 * 0x24) == uVar17) {
                pFVar37 = pFVar1 + 4;
                if (pFVar1 == (FScriptContainerElement *)0x0) {
                  pFVar37 = (FScriptContainerElement *)0x0;
                }
                if (pFVar37 != (FScriptContainerElement *)0x0) goto LAB_14d44de6d;
                break;
              }
              iVar33 = *(int *)(pFVar1 + 0x1c);
            }
          }
          local_1a0 = puVar2;
          TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
                    ((TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats,0>,FDefaultSetAllocator>
                      *)local_b8,(TKeyInitializer<unsigned_int_const_&> *)(local_204 + 4),
                     (bool *)&local_1a0);
          pFVar37 = (FScriptContainerElement *)
                    (local_b8._0_8_ + ((longlong)(int)local_204._4_4_ * 9 + 1) * 4);
          *(undefined4 *)pFVar37 = *puVar2;
LAB_14d44de6d:
          uVar17 = puVar2[1];
          *(uint *)(pFVar37 + 4) = *(int *)(pFVar37 + 4) + uVar17;
          uVar11 = *(uint *)(pFVar37 + 0xc);
          if (*(uint *)(pFVar37 + 0xc) < uVar17) {
            uVar11 = uVar17;
          }
          *(int *)(pFVar37 + 0x14) = *(int *)(pFVar37 + 0x14) + 1;
          uVar32 = uVar32 + 1;
          *(uint *)(pFVar37 + 0xc) = uVar11;
          lVar21 = local_1c8;
        } while (uVar32 < *(uint *)(lVar8 + 0x14 + uVar29 * 0x18));
      }
    }
    pFVar12 = local_1d8;
  }
  pIVar19 = ::operator_new(0xc0);
  if (pIVar19 == (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)0x0) {
    pIVar19 = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)0x0;
  }
  else {
    pTVar22 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
              TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>
                        (&local_110,&local_1c0->AggregatedStatsCounterStatsTableLayout);
    pTVar23 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
              TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>(local_f8,pTVar22)
    ;
    *pIVar19 = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)
               &
               ___7__TTableBase_UFNetProfilerAggregatedStatsCounterStats_TraceServices___TraceServices__6B_
    ;
    TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
    TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>
              ((TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)(pIVar19 + 1)
               ,pTVar23);
    DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar23->Columns).AllocatorInstance.Data,
               (pTVar23->Columns).ArrayNum);
    pFVar1 = (pTVar23->Columns).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *pIVar19 = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)
               &
               ___7__TTable_UFNetProfilerAggregatedStatsCounterStats_TraceServices___0CAAAAA__TraceServices__6B_
    ;
    pIVar19[4] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)
                 &___7FSlabAllocator_TraceServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar19 + 5),4000);
    pIVar19[0xd] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x200000;
    pIVar19[10] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar19[0xb] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar19[0xc] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar19[0xe] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar19[0xf] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar19[0x10] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar19[0x11] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)(pIVar19 + 4);
    pIVar19[0x12] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar19[0x13] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar19[0x14] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar19[0x15] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar19[0x16] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x400;
    pIVar19[0x17] = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar22->Columns).AllocatorInstance.Data,
               (pTVar22->Columns).ArrayNum);
    pFVar1 = (pTVar22->Columns).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  uVar32 = local_90;
  uStack_168 = 0;
  uStack_164 = 1;
  uStack_154 = uStack_168;
  local_150 = uStack_168;
  if (local_90 != 0) {
    FVar38 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
    if (local_98 != (ForElementType<unsigned_int>)0x0) {
      FVar38 = local_98;
    }
    uVar28 = *(uint *)FVar38;
    while (uVar28 == 0) {
      lVar30 = (longlong)(int)uStack_168;
      local_150 = local_150 + 0x20;
      uStack_168 = uStack_168 + 1;
      uStack_154 = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_168)
      goto LAB_14d44e040;
      uVar28 = ((uint *)((longlong)FVar38 + 4))[lVar30];
    }
    uStack_164 = -uVar28 & uVar28;
    uVar31 = (ulonglong)uStack_164 * 2 + 1;
    lVar30 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    local_1b0 = (int)lVar30;
    uStack_154 = (local_150 - 1) + local_1b0;
    if ((int)local_90 < (int)uStack_154) {
      uStack_154 = local_90;
    }
  }
LAB_14d44e040:
  local_170 = (longlong *)local_b8;
  uStack_14c = local_c4;
  local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  uVar28 = local_90 & 0xffffffe0;
  iStack_148 = local_b8._8_4_ - local_84;
  uStack_158 = 0xffffffff;
  TStack_138.CurrentBitIndex = uStack_154;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  TStack_138._padding_ = CONCAT44(uStack_164,uStack_168);
  iVar33 = (int)local_90 >> 5;
  TStack_138._28_4_ = local_c4;
  TStack_138.BaseBitIndex = local_150;
  uStack_118 = CONCAT44(uStack_144,iStack_148);
  bVar25 = (byte)local_90;
  local_140 = local_170;
  TStack_138.Array = local_160;
  if (((int)local_90 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    pIVar19 = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)(*pcVar10)();
    return pIVar19;
  }
  dVar13 = __real_43e0000000000000;
  if (uVar32 != local_90) {
    FVar38 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
    if (local_98 != (ForElementType<unsigned_int>)0x0) {
      FVar38 = local_98;
    }
    uVar32 = -1 << (bVar25 & 0x1f) & *(uint *)((longlong)FVar38 + (longlong)iVar33 * 4);
    while (uVar32 == 0) {
      lVar30 = (longlong)iVar33;
      uVar28 = uVar28 + 0x20;
      iVar33 = iVar33 + 1;
      uVar32 = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
      goto LAB_14d44e170;
      uVar32 = ((uint *)((longlong)FVar38 + 4))[lVar30];
    }
    uVar31 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar30 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    uVar32 = (uVar28 - 1) + (int)lVar30;
    if ((int)local_90 < (int)uVar32) {
      uVar32 = local_90;
    }
  }
LAB_14d44e170:
  while( true ) {
    plVar15 = local_140;
    if ((int)local_140[1] - *(int *)((longlong)local_140 + 0x34) != (int)uStack_118) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_208);
    }
    lVar30 = (longlong)TStack_138.CurrentBitIndex;
    if (((TStack_138.CurrentBitIndex == uVar32) &&
        (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
       (plVar15 == (longlong *)local_b8)) break;
    lVar21 = *plVar15;
    if ((pIVar19[0x15] == (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0) ||
       (*(ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)
         ((longlong)pIVar19[0x15] + 8) == pIVar19[0x16])) {
      iVar33 = *(int *)(pIVar19 + 0x13);
      if (iVar33 == *(int *)&pIVar19[0x13].field_0x4) {
        iVar33 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(pIVar19 + 0x12),
                            (int *)&pIVar19[0x13].field_0x4);
        *(int *)(pIVar19 + 0x13) = iVar33;
      }
      IVar35 = (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)
               ((longlong)iVar33 * 0x10 + (longlong)pIVar19[0x12]);
      *(int *)(pIVar19 + 0x13) = iVar33 + 1;
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>,int>
                ((void *)IVar35,1);
      pIVar19[0x14] = pIVar19[0x12];
      pIVar19[0x15] = IVar35;
      uVar24 = (**(code **)(*(longlong *)pIVar19[0x11] + 8))
                         (pIVar19[0x11],(longlong)pIVar19[0x16] * 0x18);
      *(undefined8 *)pIVar19[0x15] = uVar24;
    }
    pIVar19[0x17] =
         (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>)
         ((longlong)pIVar19[0x17] + 1);
    lVar8 = *(longlong *)((longlong)pIVar19[0x15] + 8);
    lVar9 = *(longlong *)pIVar19[0x15];
    puVar3 = (undefined8 *)(lVar9 + lVar8 * 0x18);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)(lVar9 + 0x10 + lVar8 * 0x18) = 0;
    *(longlong *)((longlong)pIVar19[0x15] + 8) = *(longlong *)((longlong)pIVar19[0x15] + 8) + 1;
    puVar4 = (undefined8 *)(lVar21 + 4 + lVar30 * 0x24);
    uVar24 = puVar4[1];
    puVar3 = (undefined8 *)(lVar9 + lVar8 * 0x18);
    *puVar3 = *puVar4;
    puVar3[1] = uVar24;
    *(undefined8 *)(lVar9 + 0x10 + lVar8 * 0x18) = *(undefined8 *)(lVar21 + 0x14 + lVar30 * 0x24);
    dVar39 = (double)*(uint *)(lVar21 + 8 + lVar30 * 0x24) /
             (double)*(uint *)(lVar21 + 0x18 + lVar30 * 0x24);
    if (dVar13 <= dVar39) {
      dVar39 = dVar39 - dVar13;
    }
    *(int *)(lVar9 + 0x10 + lVar8 * 0x18) = (int)(longlong)dVar39;
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  local_70 = 0;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStatsCounterStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  return pIVar19;
}

// EditConnection @ 14d4501a0

FNetProfilerConnectionInternal * __thiscall
TraceServices::FNetProfilerProvider::EditConnection(FNetProfilerProvider *this,uint param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FNetProfilerConnectionInternal *pFVar4;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  if (param_1 < (uint)(this->Connections).TotalItemCount) {
    this->ConnectionChangeCount = this->ConnectionChangeCount + 1;
    uVar1 = (this->Connections).PageSize;
    return (this->Connections).FirstPage[param_1 / uVar1].Items + (ulonglong)param_1 % uVar1;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2067707362076000011>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                     ,0xf5,"ConnectionIndex < (uint32)Connections.Num()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FNetProfilerConnectionInternal *)(*pcVar2)();
    return pFVar4;
  }
  return (FNetProfilerConnectionInternal *)0x0;
}

// EditConnectionData @ 14d450240

FNetProfilerConnectionData * __thiscall
TraceServices::FNetProfilerProvider::EditConnectionData
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  FNetProfilerConnectionInternal *pFVar4;
  code *pcVar5;
  bool bVar6;
  FNetProfilerConnectionData *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)param_1;
  if ((uint)(this->Connections).TotalItemCount <= param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConnectionIndex < (uint32)Connections.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x117,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FNetProfilerConnectionData *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar3 = (this->Connections).PageSize;
  uVar8 = uVar9 % uVar3;
  pFVar4 = (this->Connections).FirstPage[uVar9 / uVar3].Items;
  if (param_2 == Incoming) {
    uVar1._0_2_ = pFVar4[uVar8].Connection.ConnectionIndex;
    uVar1._2_2_ = *(undefined2 *)&pFVar4[uVar8].Connection.field_0x26;
    if (ZPULL(uVar1,0x1e,1) != 0) goto LAB_14d4502da;
    *(uint *)&pFVar4[uVar8].Connection.ConnectionIndex = uVar1 | 0x40000000;
  }
  else {
    if ((param_2 != Outgoing) ||
       (uVar2._0_2_ = pFVar4[uVar8].Connection.ConnectionIndex,
       uVar2._2_2_ = *(undefined2 *)&pFVar4[uVar8].Connection.field_0x26,
       (BADTYPE)ZPULL(uVar2,0x1f,1))) goto LAB_14d4502da;
    *(uint *)&pFVar4[uVar8].Connection.ConnectionIndex = uVar2 | 0x80000000;
  }
  this->ConnectionChangeCount = this->ConnectionChangeCount + 1;
LAB_14d4502da:
  uVar3 = (this->Connections).PageSize;
  return (this->Connections).FirstPage[uVar9 / uVar3].Items[uVar9 % uVar3].Data[param_2];
}

// EditGameInstance @ 14d450700

FNetProfilerGameInstanceInternal * __thiscall
TraceServices::FNetProfilerProvider::EditGameInstance(FNetProfilerProvider *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNetProfilerGameInstanceInternal *pFVar5;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar6;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  uVar1 = (this->GameInstances).ArrayNum;
  if (param_1 < uVar1) {
    uVar4 = 0;
    if ((int)param_1 < (int)uVar1) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNetProfilerGameInstanceInternal *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar6 = (this->GameInstances).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
      FVar6 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
    }
    return (FNetProfilerGameInstanceInternal *)((longlong)FVar6 + (longlong)(int)param_1 * 600);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2067707362076000093>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                     ,0xa3,"GameInstanceIndex < (uint32)GameInstances.Num()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FNetProfilerGameInstanceInternal *)(*pcVar2)();
    return pFVar5;
  }
  return (FNetProfilerGameInstanceInternal *)0x0;
}

// EditObject @ 14d450a00

FNetProfilerObjectInstance * __thiscall
TraceServices::FNetProfilerProvider::EditObject
          (FNetProfilerProvider *this,uint param_1,uint param_2)

{
  TPagedArray<TraceServices::FNetProfilerObjectInstance,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerObjectInstance>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FNetProfilerGameInstanceInternal *pFVar4;
  FNetProfilerObjectInstance *pFVar5;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  pFVar4 = EditGameInstance(this,param_1);
  if (pFVar4 == (FNetProfilerGameInstanceInternal *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0xe4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNetProfilerObjectInstance *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar1 = pFVar4->Objects;
  if ((uint)pTVar1->TotalItemCount <= param_2) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2067707362076000026>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0xe6,"ObjectIndex < (uint32)GameInstance->Objects->Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNetProfilerObjectInstance *)(*pcVar2)();
      return pFVar5;
    }
    return (FNetProfilerObjectInstance *)0x0;
  }
  pFVar4->ObjectsChangeCount = pFVar4->ObjectsChangeCount + 1;
  return pTVar1->FirstPage[(ulonglong)param_2 / pTVar1->PageSize].Items +
         (ulonglong)param_2 % pTVar1->PageSize;
}

// EditPacketDeliveryStatus @ 14d450c30

void __thiscall
TraceServices::FNetProfilerProvider::EditPacketDeliveryStatus
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2,uint param_3,
          ENetProfilerDeliveryStatus param_4)

{
  uint uVar1;
  ulonglong uVar2;
  FNetProfilerConnectionData *pFVar3;
  FNetProfilerPacket *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (((uint)(this->Connections).TotalItemCount <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConnectionIndex < (uint32)Connections.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                         ,0x102,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = (this->Connections).PageSize;
  uVar8 = 0;
  pFVar3 = (this->Connections).FirstPage[param_1 / uVar2].Items[(ulonglong)param_1 % uVar2].Data
           [param_2];
  uVar1 = (uint)(pFVar3->Packets).TotalItemCount;
  if (uVar1 != 0) {
    uVar2 = (pFVar3->Packets).PageSize;
    do {
      uVar7 = (uVar1 - uVar8) - 1;
      uVar9 = (ulonglong)uVar7 % uVar2;
      pFVar4 = (pFVar3->Packets).FirstPage[uVar7 / uVar2].Items;
      if (pFVar4[uVar9].SequenceNumber == param_3) {
        pFVar4[uVar9].DeliveryStatus = param_4;
        pFVar3->PacketChangeCount = pFVar3->PacketChangeCount + 1;
        return;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar1);
  }
  return;
}

// EnumeratePacketContentEventsByIndex @ 14d45b230

void __thiscall
TraceServices::FNetProfilerProvider::EnumeratePacketContentEventsByIndex
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2,uint param_3,
          uint param_4,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerContentEvent_const_&)> *param_5)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  if (((this->Connections).TotalItemCount <= uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConnectionIndex < Connections.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                         ,0x1ff,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = (this->Connections).PageSize;
  iVar1 = (int)((this->Connections).FirstPage[uVar6 / uVar2].Items[uVar6 % uVar2].Data[param_2]->
               ContentEvents).TotalItemCount;
  if ((iVar1 != 0) && (param_3 <= param_4)) {
    uVar5 = iVar1 - 1;
    if (param_4 < uVar5) {
      uVar5 = param_4;
    }
    for (; param_3 <= uVar5; param_3 = param_3 + 1) {
      (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8);
    }
  }
  return;
}

// EnumeratePacketContentEventsByPosition @ 14d45b330

void __thiscall
TraceServices::FNetProfilerProvider::EnumeratePacketContentEventsByPosition
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2,uint param_3,
          uint param_4,uint param_5,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerContentEvent_const_&)> *param_6)

{
  FNetProfilerContentEvent *pFVar1;
  undefined3 uVar4;
  undefined3 uVar5;
  undefined1 uVar8;
  undefined1 uVar9;
  FNetProfilerConnectionData *pFVar2;
  FNetProfilerPacket *pFVar3;
  undefined1 uVar12;
  undefined1 uVar13;
  code *pcVar14;
  bool bVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  TPagedArrayPage<TraceServices::FNetProfilerContentEvent> *pTVar21;
  undefined5 uVar6;
  undefined5 uVar7;
  undefined2 uVar10;
  undefined2 uVar11;
  
  uVar19 = (ulonglong)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  if (((this->Connections).TotalItemCount <= uVar19) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConnectionIndex < Connections.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                          ,0x215,L""), bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar17 = (this->Connections).PageSize;
  pFVar2 = (this->Connections).FirstPage[uVar19 / uVar17].Items[uVar19 % uVar17].Data[param_2];
  uVar19 = (pFVar2->Packets).PageSize;
  uVar17 = (ulonglong)param_3 % uVar19;
  pFVar3 = (pFVar2->Packets).FirstPage[param_3 / uVar19].Items;
  uVar20 = pFVar3[uVar17].EventCount;
  if (uVar20 != 0) {
    uVar18 = pFVar3[uVar17].StartEventIndex;
    uVar20 = (uVar18 - 1) + uVar20;
    if (uVar18 <= uVar20) {
      uVar19 = (pFVar2->ContentEvents).PageSize;
      pTVar21 = (pFVar2->ContentEvents).FirstPage;
      while (pFVar1 = pTVar21[uVar18 / uVar19].Items + (ulonglong)uVar18 % uVar19,
            uVar4 = pFVar1->EndPos, uVar8 = pFVar1->Level, uVar12 = pFVar1->Padding,
            uVar10 = CONCAT11(uVar12,uVar8), uVar6 = CONCAT23(uVar10,uVar4),
            ((uint)uVar6 & 0xffffff) <= param_4) {
        uVar18 = uVar18 + 1;
        if (uVar20 < uVar18) {
          return;
        }
      }
      do {
        uVar19 = (pFVar2->ContentEvents).PageSize;
        if (param_5 <=
            (*(uint *)(pTVar21[uVar18 / uVar19].Items + (ulonglong)uVar18 % uVar19) & 0xffffff)) {
          return;
        }
        (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8);
        pTVar21 = (pFVar2->ContentEvents).FirstPage;
        uVar19 = (pFVar2->ContentEvents).PageSize;
        pFVar1 = pTVar21[uVar18 / uVar19].Items + (ulonglong)uVar18 % uVar19;
        uVar5 = pFVar1->EndPos;
        uVar9 = pFVar1->Level;
        uVar13 = pFVar1->Padding;
        uVar11 = CONCAT11(uVar13,uVar9);
        uVar7 = CONCAT23(uVar11,uVar5);
        uVar16 = (uint)uVar7 & 0xffffff;
        if (uVar16 < param_5) {
          uVar16 = param_5;
        }
        param_5 = uVar16;
        uVar18 = uVar18 + 1;
      } while (uVar18 <= uVar20);
    }
  }
  return;
}

// EnumeratePackets @ 14d45b4e0

void __thiscall
TraceServices::FNetProfilerProvider::EnumeratePackets
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2,uint param_3,
          uint param_4,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerPacket_const_&)> *param_5)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  if (((this->Connections).TotalItemCount <= uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConnectionIndex < Connections.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                         ,0x1e8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = (this->Connections).PageSize;
  iVar1 = (int)((this->Connections).FirstPage[uVar6 / uVar2].Items[uVar6 % uVar2].Data[param_2]->
               Packets).TotalItemCount;
  if ((iVar1 != 0) && (param_3 <= param_4)) {
    uVar5 = iVar1 - 1;
    if (param_4 < uVar5) {
      uVar5 = param_4;
    }
    for (; param_3 <= uVar5; param_3 = param_3 + 1) {
      (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8);
    }
  }
  return;
}

// FindPacketIndexFromPacketSequence @ 14d460cb0

int __thiscall
TraceServices::FNetProfilerProvider::FindPacketIndexFromPacketSequence
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2,uint param_3)

{
  ulonglong uVar1;
  FNetProfilerConnectionData *pFVar2;
  TPagedArrayPage<TraceServices::FNetProfilerPacket> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  if (((this->Connections).TotalItemCount <= uVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConnectionIndex < Connections.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                         ,0x1b9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uVar1 = (this->Connections).PageSize;
  pFVar2 = (this->Connections).FirstPage[uVar8 / uVar1].Items[uVar8 % uVar1].Data[param_2];
  iVar6 = (int)(pFVar2->Packets).TotalItemCount;
  if (iVar6 != 0) {
    pTVar3 = (pFVar2->Packets).FirstPage;
    uVar8 = (pFVar2->Packets).PageSize;
    if (((pTVar3->Items->SequenceNumber <= param_3) &&
        (param_3 <=
         pTVar3[((longlong)iVar6 - 1U) / uVar8].Items[((longlong)iVar6 - 1U) % uVar8].SequenceNumber
        )) && (iVar7 = 0, -1 < iVar6 + -1)) {
      do {
        if (pTVar3[(ulonglong)(longlong)iVar7 / uVar8].Items[(ulonglong)(longlong)iVar7 % uVar8].
            SequenceNumber == param_3) {
          return iVar7;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 <= iVar6 + -1);
    }
  }
  return -1;
}

// GetConnectionChangeCount @ 14d4641a0

uint __thiscall
TraceServices::FNetProfilerProvider::GetConnectionChangeCount(FNetProfilerProvider *this)

{
  return this->ConnectionChangeCount;
}

// GetConnectionCount @ 14d4641b0

uint __thiscall
TraceServices::FNetProfilerProvider::GetConnectionCount(FNetProfilerProvider *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar4;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((uint)(this->GameInstances).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameInstanceIndex < (uint32)GameInstances.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x164,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->GameInstances).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  FVar4 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar4 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
  }
  return *(uint *)((uchar *)((longlong)FVar4 + 0x238) + (longlong)(int)param_1 * 600);
}

// GetEventTypesCount @ 14d467580

uint __thiscall TraceServices::FNetProfilerProvider::GetEventTypesCount(FNetProfilerProvider *this)

{
  return (this->EventTypes).ArrayNum;
}

// GetGameInstanceChangeCount @ 14d467de0

uint __thiscall
TraceServices::FNetProfilerProvider::GetGameInstanceChangeCount(FNetProfilerProvider *this)

{
  return this->GameInstanceChangeCount;
}

// GetGameInstanceCount @ 14d467df0

uint __thiscall
TraceServices::FNetProfilerProvider::GetGameInstanceCount(FNetProfilerProvider *this)

{
  return (this->GameInstances).ArrayNum;
}

// GetNameCount @ 14d469ce0

uint __thiscall TraceServices::FNetProfilerProvider::GetNameCount(FNetProfilerProvider *this)

{
  return (this->Names).ArrayNum;
}

// GetNetProfilerEventType @ 14d469cf0

FNetProfilerEventType * __thiscall
TraceServices::FNetProfilerProvider::GetNetProfilerEventType
          (FNetProfilerProvider *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FNetProfilerEventType *pFVar4;
  uint uVar5;
  
  uVar1 = (this->EventTypes).ArrayNum;
  if (uVar1 <= param_1) {
    return (FNetProfilerEventType *)0x0;
  }
  uVar5 = 0;
  if ((int)param_1 < (int)uVar1) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNetProfilerEventType *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FNetProfilerEventType *)
         ((this->EventTypes).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18);
}

// GetNetProfilerName @ 14d469d80

FNetProfilerName * __thiscall
TraceServices::FNetProfilerProvider::GetNetProfilerName(FNetProfilerProvider *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FNetProfilerName *pFVar4;
  uint uVar5;
  
  uVar1 = (this->Names).ArrayNum;
  if (uVar1 <= param_1) {
    return (FNetProfilerName *)0x0;
  }
  uVar5 = 0;
  if ((int)param_1 < (int)uVar1) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNetProfilerName *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FNetProfilerName *)((this->Names).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
}

// GetNetProfilerStatsCounterType @ 14d469e90

FNetProfilerStatsCounterType * __thiscall
TraceServices::FNetProfilerProvider::GetNetProfilerStatsCounterType
          (FNetProfilerProvider *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FNetProfilerStatsCounterType *pFVar4;
  uint uVar5;
  
  uVar1 = (this->StatsCounterTypes).ArrayNum;
  if (uVar1 <= param_1) {
    return (FNetProfilerStatsCounterType *)0x0;
  }
  uVar5 = 0;
  if ((int)param_1 < (int)uVar1) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNetProfilerStatsCounterType *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FNetProfilerStatsCounterType *)
         ((this->StatsCounterTypes).AllocatorInstance.Data + (longlong)(int)param_1 * 0xc);
}

// GetNetStatsCounterTypesCount @ 14d469f20

uint __thiscall
TraceServices::FNetProfilerProvider::GetNetStatsCounterTypesCount(FNetProfilerProvider *this)

{
  return (this->StatsCounterTypes).ArrayNum;
}

// GetNetTraceVersion @ 14d469f30

uint __thiscall TraceServices::FNetProfilerProvider::GetNetTraceVersion(FNetProfilerProvider *this)

{
  return this->NetTraceVersion;
}

// GetObjectCount @ 14d46a7b0

uint __thiscall
TraceServices::FNetProfilerProvider::GetObjectCount(FNetProfilerProvider *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar4;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((uint)(this->GameInstances).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameInstanceIndex < (uint32)GameInstances.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x186,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->GameInstances).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  FVar4 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar4 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
  }
  return *(uint *)(*(longlong *)((uchar *)((longlong)FVar4 + 0x28) + (longlong)(int)param_1 * 600) +
                  0x30);
}

// GetObjectsChangeCount @ 14d46a880

uint __thiscall
TraceServices::FNetProfilerProvider::GetObjectsChangeCount(FNetProfilerProvider *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar4;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((uint)(this->GameInstances).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameInstanceIndex < (uint32)GameInstances.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x1ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->GameInstances).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  FVar4 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar4 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
  }
  return *(uint *)((uchar *)((longlong)FVar4 + 0x250) + (longlong)(int)param_1 * 600);
}

// GetPacketChangeCount @ 14d46b5d0

uint __thiscall
TraceServices::FNetProfilerProvider::GetPacketChangeCount
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((this->Connections).TotalItemCount <= uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConnectionIndex < Connections.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x23a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar1 = (this->Connections).PageSize;
  return (this->Connections).FirstPage[uVar5 / uVar1].Items[uVar5 % uVar1].Data[param_2]->
         PacketChangeCount;
}

// GetPacketContentEventChangeCount @ 14d46b670

uint __thiscall
TraceServices::FNetProfilerProvider::GetPacketContentEventChangeCount
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((this->Connections).TotalItemCount <= uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConnectionIndex < Connections.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x242,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar1 = (this->Connections).PageSize;
  return (this->Connections).FirstPage[uVar5 / uVar1].Items[uVar5 % uVar1].Data[param_2]->
         ContentEventChangeCount;
}

// GetPacketCount @ 14d46b710

uint __thiscall
TraceServices::FNetProfilerProvider::GetPacketCount
          (FNetProfilerProvider *this,uint param_1,ENetProfilerConnectionMode param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((this->Connections).TotalItemCount <= uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConnectionIndex < Connections.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x1dd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar1 = (this->Connections).PageSize;
  return (uint)((this->Connections).FirstPage[uVar5 / uVar1].Items[uVar5 % uVar1].Data[param_2]->
               Packets).TotalItemCount;
}

// MarkGameInstancesDirty @ 14d479190

void __thiscall
TraceServices::FNetProfilerProvider::MarkGameInstancesDirty(FNetProfilerProvider *this)

{
  (**(code **)((longlong)*this->Session + 0xb0))();
  this->GameInstanceChangeCount = this->GameInstanceChangeCount + 1;
  return;
}

// ReadConnection @ 14d481400

void __thiscall
TraceServices::FNetProfilerProvider::ReadConnection
          (FNetProfilerProvider *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerConnection_const_&)> *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((this->Connections).TotalItemCount <= uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConnectionIndex < Connections.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x17d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = (this->Connections).PageSize;
                    /* WARNING: Could not recover jumptable at 0x00014d481488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_2)
            (*(undefined8 *)&param_2->field_0x8,
             (this->Connections).FirstPage[uVar4 / uVar1].Items + uVar4 % uVar1);
  return;
}

// ReadConnections @ 14d4814a0

void __thiscall
TraceServices::FNetProfilerProvider::ReadConnections
          (FNetProfilerProvider *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerConnection_const_&)> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar6;
  longlong lVar7;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (((uint)(this->GameInstances).ArrayNum <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameInstanceIndex < (uint32)GameInstances.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                         ,0x16f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = 0;
  if ((int)param_1 < (this->GameInstances).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar6 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar6 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
  }
  lVar5 = (longlong)(int)param_1 * 600;
  iVar1 = *(int *)((uchar *)((longlong)FVar6 + 0x238) + lVar5);
  lVar7 = *(longlong *)((uchar *)((longlong)FVar6 + 0x230) + lVar5);
  if (*(longlong *)((uchar *)((longlong)FVar6 + 0x230) + lVar5) == 0) {
    lVar7 = lVar5 + 0x30 + (longlong)FVar6;
  }
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar5 = lVar7 + (longlong)iVar1 * 4;
  for (; lVar7 != lVar5; lVar7 = lVar7 + 4) {
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
  }
  return;
}

// ReadEventType @ 14d4818e0

void __thiscall
TraceServices::FNetProfilerProvider::ReadEventType
          (FNetProfilerProvider *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerEventType_const_&)> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((uint)(this->EventTypes).ArrayNum <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventTypeIndex < (uint32)EventTypes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x142,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = (this->EventTypes).ArrayNum;
  pFVar5 = (FScriptContainerElement *)0x0;
  if (param_1 < uVar1) {
    uVar4 = 0;
    if ((int)param_1 < (int)uVar1) {
      uVar4 = ~param_1 >> 0x1f;
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
    pFVar5 = (this->EventTypes).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d48199c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar5);
  return;
}

// ReadEventTypes @ 14d4819b0

void __thiscall
TraceServices::FNetProfilerProvider::ReadEventTypes
          (FNetProfilerProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerEventType_const_*,unsigned___int64)>
          *param_1)

{
  longlong local_res8;
  FScriptContainerElement *local_res10;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  local_res8 = (longlong)(this->EventTypes).ArrayNum;
  local_res10 = (this->EventTypes).AllocatorInstance.Data;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res10,&local_res8);
  return;
}

// ReadGameInstances @ 14d481aa0

void __thiscall
TraceServices::FNetProfilerProvider::ReadGameInstances
          (FNetProfilerProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerGameInstance_const_&)> *param_1)

{
  int iVar1;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar2;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar3;
  undefined1 local_res8 [8];
  
  (**(code **)((longlong)*this->Session + 0x98))();
  FVar2 = (this->GameInstances).AllocatorInstance.SecondaryData;
  iVar1 = (this->GameInstances).ArrayNum;
  if (FVar2 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar2 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
  }
  FVar3 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)
          ((longlong)iVar1 * 600 + (longlong)FVar2);
  while( true ) {
    if ((this->GameInstances).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FNetProfilerGameInstanceInternal_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar2 == FVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,FVar2);
    FVar2 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)((longlong)FVar2 + 600)
    ;
  }
  return;
}

// ReadName @ 14d481e50

void __thiscall
TraceServices::FNetProfilerProvider::ReadName
          (FNetProfilerProvider *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerName_const_&)> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((uint)(this->Names).ArrayNum <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NameIndex < (uint32)Names.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x133,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = (this->Names).ArrayNum;
  pFVar5 = (FScriptContainerElement *)0x0;
  if (param_1 < uVar1) {
    uVar4 = 0;
    if ((int)param_1 < (int)uVar1) {
      uVar4 = ~param_1 >> 0x1f;
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
    pFVar5 = (this->Names).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d481f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar5);
  return;
}

// ReadNames @ 14d481f20

void __thiscall
TraceServices::FNetProfilerProvider::ReadNames
          (FNetProfilerProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerName_const_*,unsigned___int64)>
          *param_1)

{
  longlong local_res8;
  FScriptContainerElement *local_res10;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  local_res8 = (longlong)(this->Names).ArrayNum;
  local_res10 = (this->Names).AllocatorInstance.Data;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res10,&local_res8);
  return;
}

// ReadNetStatsCounterType @ 14d482010

void __thiscall
TraceServices::FNetProfilerProvider::ReadNetStatsCounterType
          (FNetProfilerProvider *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerStatsCounterType_const_&)> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((uint)(this->StatsCounterTypes).ArrayNum <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (uint32)StatsCounterTypes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x151,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = (this->StatsCounterTypes).ArrayNum;
  pFVar5 = (FScriptContainerElement *)0x0;
  if (param_1 < uVar1) {
    uVar4 = 0;
    if ((int)param_1 < (int)uVar1) {
      uVar4 = ~param_1 >> 0x1f;
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
    pFVar5 = (this->StatsCounterTypes).AllocatorInstance.Data + (longlong)(int)param_1 * 0xc;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4820cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar5);
  return;
}

// ReadNetStatsCounterTypes @ 14d4820e0

void __thiscall
TraceServices::FNetProfilerProvider::ReadNetStatsCounterTypes
          (FNetProfilerProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerStatsCounterType_const_*,unsigned___int64)>
          *param_1)

{
  longlong local_res8;
  FScriptContainerElement *local_res10;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  local_res8 = (longlong)(this->StatsCounterTypes).ArrayNum;
  local_res10 = (this->StatsCounterTypes).AllocatorInstance.Data;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res10,&local_res8);
  return;
}

// ReadObject @ 14d482140

void __thiscall
TraceServices::FNetProfilerProvider::ReadObject
          (FNetProfilerProvider *this,uint param_1,uint param_2,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerObjectInstance_const_&)> *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar7;
  
  uVar3 = (ulonglong)param_2;
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((uint)(this->GameInstances).ArrayNum <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameInstanceIndex < (uint32)GameInstances.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x1a1,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = 0;
  if ((int)param_1 < (this->GameInstances).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar7 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar7 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
  }
  lVar6 = (longlong)(int)param_1 * 600 + (longlong)FVar7;
  if (*(ulonglong *)(*(longlong *)(lVar6 + 0x28) + 0x30) <= uVar3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectIndex < GameInstance.Objects->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x1a5,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x28);
  uVar1 = *(ulonglong *)(lVar6 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00014d48227a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_3)
            (*(undefined8 *)&param_3->field_0x8,
             *(longlong *)(*(longlong *)(lVar6 + 0x18) + (uVar3 / uVar1) * 0x10) +
             (uVar3 % uVar1) * 0x28);
  return;
}

// ReadObjects @ 14d482290

void __thiscall
TraceServices::FNetProfilerProvider::ReadObjects
          (FNetProfilerProvider *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::FNetProfilerObjectInstance_const_&)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar4;
  ulonglong uVar5;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((uint)(this->GameInstances).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameInstanceIndex < (uint32)GameInstances.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                       ,0x191,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->GameInstances).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar4 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar4 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
  }
  uVar3 = *(uint *)(*(longlong *)((uchar *)((longlong)FVar4 + 0x28) + (longlong)(int)param_1 * 600)
                   + 0x30);
  if (uVar3 != 0) {
    uVar5 = (ulonglong)uVar3;
    do {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// SetNetTraceVersion @ 14d48a210

void __thiscall
TraceServices::FNetProfilerProvider::SetNetTraceVersion(FNetProfilerProvider *this,uint param_1)

{
  (**(code **)((longlong)*this->Session + 0xb0))();
  this->NetTraceVersion = param_1;
  return;
}

