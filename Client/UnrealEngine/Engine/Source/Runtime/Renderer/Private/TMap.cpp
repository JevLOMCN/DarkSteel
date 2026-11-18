// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_> @ 1447f2260

TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
* __thiscall
TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
::
TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
          (TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// ~TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_> @ 1447f5f20

void __thiscall
TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
::
~TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
          (TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_> @ 1447f5f60

void __thiscall
TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
::
~TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
          (TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FLightSceneInfo_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLightSceneInfo_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLightSceneInfo_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 1447f8e60

TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
* __thiscall
TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
::operator=(TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
            *this,TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
                  *param_1)

{
  if (this != param_1) {
    TSet<TTuple<FLightSceneInfo_const_*,int>,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FLightSceneInfo_const_*,int>,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FLightSceneInfo_const_*,int>,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>,FDefaultSetAllocator>
                *)this,(TSet<TTuple<FLightSceneInfo_const_*,int>,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>,FDefaultSetAllocator>
                        *)param_1);
  }
  return this;
}

// TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_> @ 144eec3f0

TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
* __thiscall
TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
::
TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
          (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
           *this,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// ~TMap<float> @ 145295fb0

void __thiscall DynamicRenderScaling::TMap<float>::~TMap<float>(TMap<float> *this)

{
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// operator[] @ 145296b80

float * __thiscall DynamicRenderScaling::TMap<float>::operator[](TMap<float> *this,FBudget *param_1)

{
  uint uVar1;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  
  iVar5 = FBudget::GetGlobalListSize();
  if ((this->Array).ArrayNum != iVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Array.Num() == FBudget::GetGlobalListSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                       ,0xd5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pfVar7 = (float *)(*pcVar3)();
      return pfVar7;
    }
  }
  uVar1 = param_1->BudgetId;
  uVar6 = 0;
  if ((int)uVar1 < (this->Array).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pfVar7 = (float *)(*pcVar3)();
      return pfVar7;
    }
  }
  FVar2 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    this = (TMap<float> *)FVar2;
  }
  return (float *)((uchar *)((longlong)this + 8) + (longlong)(int)uVar1 * 0x10);
}

// TMap<float> @ 1454d0790

TMap<float> * __thiscall DynamicRenderScaling::TMap<float>::TMap<float>(TMap<float> *this)

{
  int *piVar1;
  int *piVar2;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar3;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  void *_Dst;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar10;
  TMap<float> *pTVar11;
  int iVar12;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar13;
  uint uVar14;
  
  (this->Array).AllocatorInstance.SecondaryData =
       (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0;
  piVar1 = &(this->Array).ArrayNum;
  piVar2 = &(this->Array).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0x10;
  uVar8 = FBudget::GetGlobalListSize();
  iVar12 = *piVar1;
  if (iVar12 < (int)uVar8) {
    iVar9 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<float>::FItem>_>
                      (0x10,8,uVar8 - iVar12,
                       (ForElementType<DynamicRenderScaling::TMap<float>::FItem> *)this,piVar1,
                       piVar2);
    FVar3 = (this->Array).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)this;
    if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FVar13 = FVar3;
    }
    DefaultConstructItems<DynamicRenderScaling::TMap<float>::FItem,int>
              ((void *)((longlong)iVar9 * 0x10 + (longlong)FVar13),uVar8 - iVar12);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar12) {
      uVar14 = iVar12 - uVar8;
      if (((int)(uVar14 | uVar8) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TMap<float> *)(*pcVar6)();
        return pTVar11;
      }
      if (uVar14 != 0) {
        FVar3 = (this->Array).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)this;
        if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
          FVar13 = FVar3;
        }
        _Dst = (void *)((longlong)(int)uVar8 * 0x10 + (longlong)FVar13);
        iVar12 = (*piVar1 - uVar14) - uVar8;
        if (iVar12 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar14 * 0x10 + (longlong)_Dst),(longlong)iVar12 << 4
                 );
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<float>::FItem>_>
                  (0x10,8,(ForElementType<DynamicRenderScaling::TMap<float>::FItem> *)this,*piVar1,
                   piVar2);
      }
    }
  }
  ppTVar10 = FBudget::GetGlobalList();
  pTVar4 = *ppTVar10;
  while( true ) {
    if (pTVar4 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      return this;
    }
    uVar8 = pTVar4->Element->BudgetId;
    pwVar5 = pTVar4->Element->Name;
    uVar14 = 0;
    if ((int)uVar8 < *piVar1) {
      uVar14 = ~uVar8 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    FVar3 = (this->Array).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)this;
    if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FVar13 = FVar3;
    }
    *(wchar_t **)((longlong)FVar13 + (longlong)(int)uVar8 * 0x10) = pwVar5;
    pTVar4 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar4->_padding_;
  }
  pcVar6 = (code *)swi(3);
  pTVar11 = (TMap<float> *)(*pcVar6)();
  return pTVar11;
}

// operator= @ 1454d7d60

TMap<float> * __thiscall
DynamicRenderScaling::TMap<float>::operator=(TMap<float> *this,TMap<float> *param_1)

{
  int iVar1;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar2;
  int *piVar3;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->Array).AllocatorInstance.SecondaryData;
    piVar3 = &(this->Array).ArrayMax;
    iVar1 = (param_1->Array).ArrayNum;
    if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      param_1 = (TMap<float> *)FVar2;
    }
    (this->Array).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0x10;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<float>::FItem>_>
              (0x10,8,iVar1,*piVar3,(ForElementType<DynamicRenderScaling::TMap<float>::FItem> *)this
               ,iVar1,piVar3);
    FVar2 = (this->Array).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)this;
    if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator[] @ 145750730

float * __thiscall DynamicRenderScaling::TMap<float>::operator[](TMap<float> *this,FBudget *param_1)

{
  uint uVar1;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  
  iVar5 = FBudget::GetGlobalListSize();
  if ((this->Array).ArrayNum != iVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Array.Num() == FBudget::GetGlobalListSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                       ,0xcf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pfVar7 = (float *)(*pcVar3)();
      return pfVar7;
    }
  }
  uVar1 = param_1->BudgetId;
  uVar6 = 0;
  if ((int)uVar1 < (this->Array).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pfVar7 = (float *)(*pcVar3)();
      return pfVar7;
    }
  }
  FVar2 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    this = (TMap<float> *)FVar2;
  }
  return (float *)((uchar *)((longlong)this + 8) + (longlong)(int)uVar1 * 0x10);
}

