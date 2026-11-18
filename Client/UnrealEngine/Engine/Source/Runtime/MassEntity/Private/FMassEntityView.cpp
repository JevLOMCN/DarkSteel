// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 11

// StaticStruct @ 1471b62e0

UScriptStruct * __cdecl FMassEntityView::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassEntityView.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassEntityView.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityView,(UObject *)pUVar1,
                         L"MassEntityView");
  }
  return Z_Registration_Info_UScriptStruct_FMassEntityView.OuterSingleton;
}

// FMassEntityView @ 1471d8390

FMassEntityView * __thiscall
FMassEntityView::FMassEntityView
          (FMassEntityView *this,FMassArchetypeHandle *param_1,FMassEntityHandle param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  FMassArchetypeData *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FMassEntityView *pFVar8;
  int *piVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined4 uStack_1c;
  
  *(undefined4 *)&(this->EntityDataHandle)._padding_ = 0xffffffff;
  (this->EntityDataHandle)._padding_ = 0;
  (this->EntityDataHandle).ChunkIndex = -1;
  (this->EntityDataHandle).ChunkSerialNumber = -1;
  this->Archetype = (FMassArchetypeData *)0x0;
  this->Entity = param_2;
  if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMassEntityView *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar4 = (param_1->DataPtr).Object;
  iVar1 = (this->Entity).Index;
  this->Archetype = pFVar4;
  piVar9 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&pFVar4->EntityMap,iVar1);
  iVar1 = *piVar9;
  uVar7 = iVar1 / pFVar4->NumEntitiesPerChunk;
  uVar10 = 0;
  if ((int)uVar7 < (pFVar4->Chunks).ArrayNum) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMassEntityView *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar11 = (pFVar4->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x90;
  iVar2 = pFVar4->NumEntitiesPerChunk;
  uVar3 = *(undefined4 *)(pFVar11 + 0x14);
  (this->EntityDataHandle)._padding_ = *(longlong *)pFVar11;
  (this->EntityDataHandle)._padding_ = CONCAT44(uStack_1c,iVar1 % iVar2);
  (this->EntityDataHandle).ChunkIndex = uVar7;
  (this->EntityDataHandle).ChunkSerialNumber = uVar3;
  return this;
}

// FMassEntityView @ 1471d84d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityView * __thiscall
FMassEntityView::FMassEntityView
          (FMassEntityView *this,FMassEntityManager *param_1,FMassEntityHandle param_2)

{
  TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>
  *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  IEntityStorageInterface *pIVar11;
  longlong *plVar12;
  FMassEntityView *pFVar13;
  int *piVar14;
  FMassArchetypeData *pFVar15;
  FMassArchetypeData *pFVar16;
  uint uVar17;
  StorageSelector local_res8 [8];
  StorageSelector local_res18 [8];
  StorageSelector local_res20 [8];
  undefined4 uStack_3c;
  
  pFVar15 = (FMassArchetypeData *)0x0;
  *(undefined4 *)&(this->EntityDataHandle)._padding_ = 0xffffffff;
  (this->EntityDataHandle)._padding_ = 0;
  (this->EntityDataHandle).ChunkIndex = -1;
  (this->EntityDataHandle).ChunkSerialNumber = -1;
  this->Archetype = (FMassArchetypeData *)0x0;
  this->Entity = param_2;
  pFVar16 = pFVar15;
  if (param_2.Index != 0) {
    pTVar1 = &param_1->EntityStorage;
    local_res8[0] = (StorageSelector)0x0;
    pIVar11 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])(local_res8,pTVar1);
    cVar7 = (**(code **)((longlong)*pIVar11 + 0x48))(pIVar11,(ulonglong)param_2 & 0xffffffff);
    if (cVar7 != '\0') {
      local_res18[0] = (StorageSelector)0x0;
      pIVar11 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                  ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])(local_res18,pTVar1);
      iVar9 = (**(code **)((longlong)*pIVar11 + 0x40))(pIVar11,(ulonglong)param_2 & 0xffffffff);
      if (iVar9 == param_2.SerialNumber) {
        local_res20[0] = (StorageSelector)0x0;
        pIVar11 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                    ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])(local_res20,pTVar1);
        plVar12 = (longlong *)
                  (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,(ulonglong)param_2 & 0xffffffff);
        pFVar16 = (FMassArchetypeData *)plVar12[1];
        pFVar15 = (FMassArchetypeData *)*plVar12;
        if (pFVar16 != (FMassArchetypeData *)0x0) {
          LOCK();
          puVar2 = &(pFVar16->CompositionDescriptor).Fragments.field_0x8;
          *(int *)puVar2 = *(int *)puVar2 + 1;
          UNLOCK();
        }
        if (pFVar15 != (FMassArchetypeData *)0x0) goto LAB_1471d85e9;
      }
    }
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("ArchetypeHandle.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                     ,0x1ff,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FMassEntityView *)(*pcVar6)();
    return pFVar13;
  }
LAB_1471d85e9:
  iVar9 = (this->Entity).Index;
  this->Archetype = pFVar15;
  piVar14 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)&pFVar15->EntityMap,iVar9);
  iVar9 = *piVar14;
  uVar10 = iVar9 / pFVar15->NumEntitiesPerChunk;
  uVar17 = 0;
  if ((int)uVar10 < (pFVar15->Chunks).ArrayNum) {
    uVar17 = ~uVar10 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FMassEntityView *)(*pcVar6)();
    return pFVar13;
  }
  pFVar5 = (pFVar15->Chunks).AllocatorInstance.Data;
  iVar3 = pFVar15->NumEntitiesPerChunk;
  uVar4 = *(undefined4 *)(pFVar5 + (longlong)(int)uVar10 * 0x90 + 0x14);
  (this->EntityDataHandle)._padding_ = *(longlong *)(pFVar5 + (longlong)(int)uVar10 * 0x90);
  (this->EntityDataHandle)._padding_ = CONCAT44(uStack_3c,iVar9 % iVar3);
  (this->EntityDataHandle).ChunkIndex = uVar10;
  (this->EntityDataHandle).ChunkSerialNumber = uVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar16);
  return this;
}

// GetConstSharedFragmentPtr @ 147220860

void * __thiscall
FMassEntityView::GetConstSharedFragmentPtr(FMassEntityView *this,UScriptStruct *param_1)

{
  FMassArchetypeData *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  void *pvVar8;
  longlong *plVar9;
  uint uVar10;
  UScriptStruct *pUVar11;
  longlong *plVar12;
  
  pFVar1 = this->Archetype;
  piVar7 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&pFVar1->EntityMap,(this->Entity).Index);
  uVar6 = *piVar7 / pFVar1->NumEntitiesPerChunk;
  uVar10 = 0;
  if ((int)uVar6 < (pFVar1->Chunks).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar4)();
    return pvVar8;
  }
  pFVar2 = (pFVar1->Chunks).AllocatorInstance.Data;
  plVar9 = *(longlong **)(pFVar2 + (longlong)(int)uVar6 * 0x90 + 0x70);
  plVar12 = plVar9 + (longlong)*(int *)(pFVar2 + (longlong)(int)uVar6 * 0x90 + 0x78) * 2;
  while( true ) {
    if (plVar9 == plVar12) {
      return (void *)0x0;
    }
    plVar3 = (longlong *)*plVar9;
    pUVar11 = (UScriptStruct *)0x0;
    if (plVar3 != (longlong *)0x0) {
      pUVar11 = (UScriptStruct *)*plVar3;
    }
    if (pUVar11 == param_1) break;
    plVar9 = plVar9 + 2;
  }
  if (plVar3 == (longlong *)0x0) {
    return (void *)0x0;
  }
  return (void *)((longlong)*(short *)(*plVar3 + 0x5c) + 7 + (longlong)plVar3 &
                 -(longlong)*(short *)(*plVar3 + 0x5c));
}

// GetConstSharedFragmentPtrChecked @ 147220960

void * __thiscall
FMassEntityView::GetConstSharedFragmentPtrChecked(FMassEntityView *this,UScriptStruct *param_1)

{
  FMassArchetypeData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  void *pvVar7;
  UScriptStruct *pUVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  pFVar1 = this->Archetype;
  piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&pFVar1->EntityMap,(this->Entity).Index);
  uVar5 = *piVar6 / pFVar1->NumEntitiesPerChunk;
  uVar9 = 0;
  if ((int)uVar5 < (pFVar1->Chunks).ArrayNum) {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  pFVar2 = (pFVar1->Chunks).AllocatorInstance.Data;
  plVar11 = *(longlong **)(pFVar2 + (longlong)(int)uVar5 * 0x90 + 0x70);
  plVar10 = plVar11 + (longlong)*(int *)(pFVar2 + (longlong)(int)uVar5 * 0x90 + 0x78) * 2;
  for (; plVar11 != plVar10; plVar11 = plVar11 + 2) {
    pUVar8 = (UScriptStruct *)0x0;
    if ((longlong *)*plVar11 != (longlong *)0x0) {
      pUVar8 = *(UScriptStruct **)*plVar11;
    }
    if (pUVar8 == param_1) goto LAB_147220a41;
  }
  plVar11 = (longlong *)0x0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SharedFragment != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityView.cpp"
                     ,0x45,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
LAB_147220a41:
  plVar11 = (longlong *)*plVar11;
  if (plVar11 == (longlong *)0x0) {
    return (void *)0x0;
  }
  return (void *)((longlong)*(short *)(*plVar11 + 0x5c) + 7 + (longlong)plVar11 &
                 -(longlong)*(short *)(*plVar11 + 0x5c));
}

// GetFragmentPtr @ 147221fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FMassEntityView::GetFragmentPtr(FMassEntityView *this,UScriptStruct *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  FMassArchetypeData *pFVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  TTuple<UScriptStruct_const_*,int> *pTVar11;
  void *pvVar12;
  int iVar13;
  uint *puVar14;
  ForElementType<FMassArchetypeFragmentConfig> FVar15;
  longlong *plVar16;
  undefined1 local_res8 [8];
  uint local_18;
  int iStack_14;
  
  pFVar4 = this->Archetype;
  if (pFVar4 == (FMassArchetypeData *)0x0) {
    if (UE::AITestSuite::TestsInProgress < 1) {
      ``FMassEntityView::GetFragmentPtr'::__l3::<lambda_1>::operator()'::__l16::<lambda_1>::
      operator()(local_res8);
    }
    else if (2 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u__hs__Trying_to__151578ca0,
                 (FLogCategoryBase *)&LogTestableEnsures);
    }
    return (void *)0x0;
  }
  pTVar11 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                    *)&pFVar4->FragmentIndexMap,param_1);
  puVar14 = (uint *)&pTVar11->field_0x8;
  if (pTVar11 == (TTuple<UScriptStruct_const_*,int> *)0x0) {
    puVar14 = (uint *)0x0;
  }
  if (puVar14 == (uint *)0x0) {
    return (void *)0x0;
  }
  lVar7 = (this->EntityDataHandle)._padding_;
  lVar8 = (this->EntityDataHandle)._padding_;
  uVar3 = *puVar14;
  uVar1 = (this->EntityDataHandle).ChunkIndex;
  uVar2 = (this->EntityDataHandle).ChunkSerialNumber;
  if (((this->EntityDataHandle)._padding_ != 0) && ((int)(this->EntityDataHandle)._padding_ != -1))
  {
    if ((-1 < (int)uVar1) && ((int)uVar1 < (pFVar4->Chunks).ArrayNum)) {
      uVar10 = 0;
      if ((int)uVar1 < (pFVar4->Chunks).ArrayNum) {
        uVar10 = (uint)~uVar1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pvVar12 = (void *)(*pcVar6)();
        return pvVar12;
      }
      if (*(int *)((pFVar4->Chunks).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x90 + 0x14) ==
          uVar2) goto LAB_14722211e;
    }
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidHandle(EntityInChunkHandle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                     ,0x1a1,L"Input FMassRawEntityInChunkData is out of date.");
  if (bVar9) {
    pcVar6 = (code *)swi(3);
    pvVar12 = (void *)(*pcVar6)();
    return pvVar12;
  }
LAB_14722211e:
  uVar10 = 0;
  if ((int)uVar3 < (pFVar4->FragmentConfigs).ArrayNum) {
    uVar10 = ~uVar3 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    pvVar12 = (void *)(*pcVar6)();
    return pvVar12;
  }
  FVar15 = (pFVar4->FragmentConfigs).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar15 = (ForElementType<FMassArchetypeFragmentConfig>)&pFVar4->FragmentConfigs;
  }
  plVar16 = (longlong *)((longlong)(int)uVar3 * 0x10 + (longlong)FVar15);
  lVar5 = *plVar16;
  iVar13 = (int)*(short *)(lVar5 + 0x5c);
  return (void *)((longlong)(int)plVar16[1] +
                 (*(int *)(lVar5 + 0x58) + -1 + iVar13 & -iVar13) * (int)lVar8 + lVar7);
}

// GetFragmentPtrChecked @ 1472221e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMassEntityView::GetFragmentPtrChecked(FMassEntityView *this,UScriptStruct *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  FMassArchetypeData *pFVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  TTuple<UScriptStruct_const_*,int> *pTVar11;
  void *pvVar12;
  int iVar13;
  ForElementType<FMassArchetypeFragmentConfig> FVar14;
  longlong *plVar15;
  undefined1 local_res8 [8];
  uint local_18;
  int iStack_14;
  
  if (this->Archetype == (FMassArchetypeData *)0x0) {
    if (UE::AITestSuite::TestsInProgress < 1) {
      ``FMassEntityView::GetFragmentPtrChecked'::__l3::<lambda_1>::operator()'::__l16::<lambda_1>::
      operator()(local_res8);
    }
    else if (2 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u__hs__Trying_to__151578e40,
                 (FLogCategoryBase *)&LogTestableEnsures);
      return (void *)0x0;
    }
    return (void *)0x0;
  }
  pTVar11 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                    *)&this->Archetype->FragmentIndexMap,param_1);
  if (pTVar11 == (TTuple<UScriptStruct_const_*,int> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pvVar12 = (void *)(*pcVar6)();
      return pvVar12;
    }
  }
  lVar7 = (this->EntityDataHandle)._padding_;
  lVar8 = (this->EntityDataHandle)._padding_;
  uVar3 = *(uint *)&pTVar11->field_0x8;
  pFVar4 = this->Archetype;
  uVar1 = (this->EntityDataHandle).ChunkIndex;
  uVar2 = (this->EntityDataHandle).ChunkSerialNumber;
  if (((this->EntityDataHandle)._padding_ != 0) && ((int)(this->EntityDataHandle)._padding_ != -1))
  {
    if ((-1 < (int)uVar1) && ((int)uVar1 < (pFVar4->Chunks).ArrayNum)) {
      uVar10 = 0;
      if ((int)uVar1 < (pFVar4->Chunks).ArrayNum) {
        uVar10 = (uint)~uVar1 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pvVar12 = (void *)(*pcVar6)();
          return pvVar12;
        }
      }
      if (*(int *)((pFVar4->Chunks).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x90 + 0x14) ==
          uVar2) goto LAB_147222362;
    }
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidHandle(EntityInChunkHandle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                     ,0x1a1,L"Input FMassRawEntityInChunkData is out of date.");
  if (bVar9) {
    pcVar6 = (code *)swi(3);
    pvVar12 = (void *)(*pcVar6)();
    return pvVar12;
  }
LAB_147222362:
  uVar10 = 0;
  if ((int)uVar3 < (pFVar4->FragmentConfigs).ArrayNum) {
    uVar10 = ~uVar3 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pvVar12 = (void *)(*pcVar6)();
      return pvVar12;
    }
  }
  FVar14 = (pFVar4->FragmentConfigs).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar14 = (ForElementType<FMassArchetypeFragmentConfig>)&pFVar4->FragmentConfigs;
  }
  plVar15 = (longlong *)((longlong)(int)uVar3 * 0x10 + (longlong)FVar14);
  lVar5 = *plVar15;
  iVar13 = (int)*(short *)(lVar5 + 0x5c);
  return (void *)((longlong)(int)plVar15[1] +
                 (*(int *)(lVar5 + 0x58) + -1 + iVar13 & -iVar13) * (int)lVar8 + lVar7);
}

// GetSharedFragmentPtr @ 147227490

void * __thiscall
FMassEntityView::GetSharedFragmentPtr(FMassEntityView *this,UScriptStruct *param_1)

{
  FMassArchetypeData *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  void *pvVar8;
  longlong *plVar9;
  uint uVar10;
  UScriptStruct *pUVar11;
  longlong *plVar12;
  
  pFVar1 = this->Archetype;
  piVar7 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&pFVar1->EntityMap,(this->Entity).Index);
  uVar6 = *piVar7 / pFVar1->NumEntitiesPerChunk;
  uVar10 = 0;
  if ((int)uVar6 < (pFVar1->Chunks).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar4)();
    return pvVar8;
  }
  pFVar2 = (pFVar1->Chunks).AllocatorInstance.Data;
  plVar9 = *(longlong **)(pFVar2 + (longlong)(int)uVar6 * 0x90 + 0x80);
  plVar12 = plVar9 + (longlong)*(int *)(pFVar2 + (longlong)(int)uVar6 * 0x90 + 0x88) * 2;
  while( true ) {
    if (plVar9 == plVar12) {
      return (void *)0x0;
    }
    plVar3 = (longlong *)*plVar9;
    pUVar11 = (UScriptStruct *)0x0;
    if (plVar3 != (longlong *)0x0) {
      pUVar11 = (UScriptStruct *)*plVar3;
    }
    if (pUVar11 == param_1) break;
    plVar9 = plVar9 + 2;
  }
  if (plVar3 == (longlong *)0x0) {
    return (void *)0x0;
  }
  return (void *)((longlong)*(short *)(*plVar3 + 0x5c) + 7 + (longlong)plVar3 &
                 -(longlong)*(short *)(*plVar3 + 0x5c));
}

// GetSharedFragmentPtrChecked @ 1472275a0

void * __thiscall
FMassEntityView::GetSharedFragmentPtrChecked(FMassEntityView *this,UScriptStruct *param_1)

{
  FMassArchetypeData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  void *pvVar7;
  UScriptStruct *pUVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  pFVar1 = this->Archetype;
  piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&pFVar1->EntityMap,(this->Entity).Index);
  uVar5 = *piVar6 / pFVar1->NumEntitiesPerChunk;
  uVar9 = 0;
  if ((int)uVar5 < (pFVar1->Chunks).ArrayNum) {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  pFVar2 = (pFVar1->Chunks).AllocatorInstance.Data;
  plVar11 = *(longlong **)(pFVar2 + (longlong)(int)uVar5 * 0x90 + 0x80);
  plVar10 = plVar11 + (longlong)*(int *)(pFVar2 + (longlong)(int)uVar5 * 0x90 + 0x88) * 2;
  for (; plVar11 != plVar10; plVar11 = plVar11 + 2) {
    pUVar8 = (UScriptStruct *)0x0;
    if ((longlong *)*plVar11 != (longlong *)0x0) {
      pUVar8 = *(UScriptStruct **)*plVar11;
    }
    if (pUVar8 == param_1) goto LAB_147227684;
  }
  plVar11 = (longlong *)0x0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SharedFragment != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityView.cpp"
                     ,0x52,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
LAB_147227684:
  plVar11 = (longlong *)*plVar11;
  if (plVar11 == (longlong *)0x0) {
    return (void *)0x0;
  }
  return (void *)((longlong)*(short *)(*plVar11 + 0x5c) + 7 + (longlong)plVar11 &
                 -(longlong)*(short *)(*plVar11 + 0x5c));
}

// HasTag @ 14722b140

bool __thiscall FMassEntityView::HasTag(FMassEntityView *this,UScriptStruct *param_1)

{
  FMassArchetypeData *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = FMassEntityInChunkDataHandle::IsValid(&this->EntityDataHandle,this->Archetype);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityDataHandle.IsValid(Archetype)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityView.cpp"
                       ,0x58,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  pFVar1 = this->Archetype;
  if (param_1 == (UScriptStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FragmentType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x102,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  bVar3 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      *)&(pFVar1->CompositionDescriptor).Tags,param_1);
  return bVar3;
}

// TryMakeView @ 147252490

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityView * __cdecl
FMassEntityView::TryMakeView
          (FMassEntityView *__return_storage_ptr__,FMassEntityManager *param_1,
          FMassEntityHandle param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  FMassArchetypeData *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  IEntityStorageInterface *pIVar8;
  longlong *plVar9;
  int *piVar10;
  FMassEntityView *pFVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  StorageSelector local_res8 [8];
  undefined4 uStack_2c;
  
  bVar6 = FMassEntityManager::IsEntityValid(param_1,param_2);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (bVar6) {
    local_res8[0] = (StorageSelector)0x0;
    pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])
                       (local_res8,&param_1->EntityStorage);
    plVar9 = (longlong *)
             (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,(ulonglong)param_2 & 0xffffffff);
    pTVar13 = (TReferenceControllerBase<1> *)plVar9[1];
    pFVar4 = (FMassArchetypeData *)*plVar9;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 != (FMassArchetypeData *)0x0) {
      (__return_storage_ptr__->EntityDataHandle)._padding_ = 0;
      *(undefined4 *)&(__return_storage_ptr__->EntityDataHandle)._padding_ = 0xffffffff;
      (__return_storage_ptr__->EntityDataHandle).ChunkIndex = -1;
      (__return_storage_ptr__->EntityDataHandle).ChunkSerialNumber = -1;
      __return_storage_ptr__->Entity = param_2;
      __return_storage_ptr__->Archetype = pFVar4;
      piVar10 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             *)&pFVar4->EntityMap,param_2.Index);
      iVar1 = *piVar10;
      uVar7 = iVar1 / pFVar4->NumEntitiesPerChunk;
      uVar12 = 0;
      if ((int)uVar7 < (pFVar4->Chunks).ArrayNum) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FMassEntityView *)(*pcVar5)();
        return pFVar11;
      }
      pFVar14 = (pFVar4->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x90;
      iVar2 = pFVar4->NumEntitiesPerChunk;
      uVar3 = *(undefined4 *)(pFVar14 + 0x14);
      (__return_storage_ptr__->EntityDataHandle)._padding_ = *(longlong *)pFVar14;
      (__return_storage_ptr__->EntityDataHandle)._padding_ = CONCAT44(uStack_2c,iVar1 % iVar2);
      (__return_storage_ptr__->EntityDataHandle).ChunkIndex = uVar7;
      (__return_storage_ptr__->EntityDataHandle).ChunkSerialNumber = uVar3;
      goto LAB_147252601;
    }
  }
  (__return_storage_ptr__->Entity).Index = 0;
  (__return_storage_ptr__->Entity).SerialNumber = 0;
  (__return_storage_ptr__->EntityDataHandle)._padding_ = 0;
  (__return_storage_ptr__->EntityDataHandle)._padding_ = 0;
  (__return_storage_ptr__->EntityDataHandle).ChunkIndex = 0;
  (__return_storage_ptr__->EntityDataHandle).ChunkSerialNumber = 0;
  (__return_storage_ptr__->Entity).SerialNumber = 0;
  (__return_storage_ptr__->EntityDataHandle)._padding_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->EntityDataHandle)._padding_ = 0xffffffff;
  (__return_storage_ptr__->EntityDataHandle).ChunkIndex = -1;
  (__return_storage_ptr__->EntityDataHandle).ChunkSerialNumber = -1;
  __return_storage_ptr__->Archetype = (FMassArchetypeData *)0x0;
LAB_147252601:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return __return_storage_ptr__;
}

