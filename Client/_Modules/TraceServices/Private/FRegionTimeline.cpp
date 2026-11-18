// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 11

// ~FRegionTimeline @ 14d3d11e0

void __thiscall TraceServices::FRegionTimeline::~FRegionTimeline(FRegionTimeline *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::FRegionLane,int>
            ((FRegionLane *)(this->Lanes).AllocatorInstance.Data,(this->Lanes).ArrayNum);
  pFVar1 = (this->Lanes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CalculateRegionDepth @ 14d443a70

int __thiscall
TraceServices::FRegionTimeline::CalculateRegionDepth(FRegionTimeline *this,FTimeRegion *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res18 [8];
  
  iVar4 = 0;
  lVar5 = 0;
  do {
    if ((this->Lanes).ArrayNum <= iVar4) {
LAB_14d443afb:
      if (iVar4 < 100) {
        return iVar4;
      }
      break;
    }
    if (((this->Lanes).ArrayNum <= iVar4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    plVar1 = *(longlong **)((this->Lanes).AllocatorInstance.Data + lVar5 + 0x20);
    if (*(double *)(plVar1[1] * 0x38 + -0x28 + *plVar1) <= param_1->BeginTime) goto LAB_14d443afb;
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + 0x38;
  } while (iVar4 < 100);
  `TraceServices::FRegionTimeline::CalculateRegionDepth'::__l2::<lambda_1>::operator()(local_res18);
  return iVar4;
}

// EnumerateLanes @ 14d45a4a0

void __thiscall
TraceServices::FRegionTimeline::EnumerateLanes
          (FRegionTimeline *this,
          TFunctionRef<void___cdecl(TraceServices::FRegionLane_const_&,int)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint local_res8 [2];
  
  (**(code **)(this->Provider->_padding_ + 0x18))();
  uVar4 = 0;
  if (0 < (this->Lanes).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Lanes).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res8[0] = uVar4;
      (**(code **)param_1)
                (*(undefined8 *)&param_1->field_0x8,
                 (this->Lanes).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x38,local_res8);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->Lanes).ArrayNum);
  }
  return;
}

// EnumerateRegions @ 14d45b720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TraceServices::FRegionTimeline::EnumerateRegions
          (FRegionTimeline *this,double param_1,double param_2,
          TFunctionRef<bool___cdecl(TraceServices::FTimeRegion_const_&)> *param_3)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  FIdentityFunctor FVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  TPagedArrayPage<TraceServices::FTimeRegion> *pTVar10;
  TPagedArrayPage<TraceServices::FTimeRegion> *pTVar11;
  wchar_t *pwVar12;
  double dVar13;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_a8;
  TLess<TraceServices::FLaneEnumeration> local_a7;
  undefined1 local_a6 [6];
  undefined1 local_a0 [24];
  FLaneEnumeration local_88;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  undefined1 *local_60;
  
  pwVar12 = (wchar_t *)param_3;
  dVar13 = param_1;
  (**(code **)(this->Provider->_padding_ + 0x18))();
  if (param_2 < param_1) {
LAB_14d45b9c3:
    bVar6 = false;
  }
  else {
    pTVar10 = (TPagedArrayPage<TraceServices::FTimeRegion> *)(this->Lanes).AllocatorInstance.Data;
    iVar1 = (this->Lanes).ArrayNum;
    local_a0._8_8_ = (FLaneEnumeration *)0x0;
    pTVar11 = (TPagedArrayPage<TraceServices::FTimeRegion> *)
              ((longlong)pTVar10 + (longlong)iVar1 * 0x38);
    local_a0._16_4_ = 0;
    local_a0._20_4_ = 0;
    while( true ) {
      if ((this->Lanes).ArrayNum != iVar1) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<TraceServices::FRegionLane_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pTVar10 == pTVar11) break;
      local_70 = local_res10;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TraceServices::FRegionTimeline::EnumerateRegions'::__l9::<lambda_2>,double,TraceServices::FTimeRegion_const_&>
                 ::Call;
      local_60 = local_res18;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TraceServices::FRegionTimeline::EnumerateRegions'::__l9::<lambda_1>,double,TraceServices::FTimeRegion_const_&>
                 ::Call;
      GetElementRangeOverlappingGivenRange<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
                ((TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
                  *)local_a0,dVar13,param_1,
                 (TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *)pwVar12,
                 (TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *)&local_68);
      if ((local_a0._0_4_ != -1) && (-1 < (int)(local_a0._4_4_ - local_a0._0_4_))) {
        local_88.IntervalStart = local_a0._0_4_;
        local_88.IntervalEnd = local_a0._4_4_;
        local_88.Lane = (FRegionLane *)pTVar10;
        if (((ulonglong)local_a0._8_8_ <= (FLaneEnumeration *)(local_a0 + 0x18)) &&
           ((FScriptContainerElement *)(local_a0 + 0x18) <
            (FScriptContainerElement *)(local_a0._8_8_ + (longlong)(int)local_a0._20_4_ * 0x10))) {
          pwVar12 = 
          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
          ;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
        }
        iVar9 = local_a0._16_4_;
        if (local_a0._16_4_ == local_a0._20_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)(local_a0 + 8),(int *)(local_a0 + 0x14));
        }
        local_a0._16_4_ = iVar9 + 1;
        *(FRegionLane **)
         &((FScriptContainerElement *)(local_a0._8_8_ + (longlong)iVar9 * 0x10))->field_0x0 =
             local_88.Lane;
        *(ulonglong *)((FScriptContainerElement *)(local_a0._8_8_ + (longlong)iVar9 * 0x10) + 8) =
             CONCAT44(local_88.IntervalEnd,local_88.IntervalStart);
      }
      pTVar10 = (TPagedArrayPage<TraceServices::FTimeRegion> *)&pTVar10[3].Count;
    }
    AlgoImpl::
    HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,_TraceServices::FRegionTimeline::EnumerateRegions_::__l2::<lambda_3>_>_>
              ((FLaneEnumeration *)local_a0._8_8_,local_a0._16_4_,local_res8[0],
               (<lambda_3> *)&local_a8);
    FVar4 = local_res8[0];
    if (0 < (int)local_a0._16_4_) {
      if (((int)local_a0._16_4_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      do {
        uVar5 = local_a0._8_8_;
        uVar2 = *(ulonglong *)(*(longlong *)local_a0._8_8_ + 0x28);
        cVar8 = (**(code **)param_3)
                          (*(undefined8 *)&param_3->field_0x8,
                           ((ulonglong)(longlong)*(int *)(local_a0._8_8_ + 8) % uVar2) * 0x38 +
                           *(longlong *)
                            (*(longlong *)(*(longlong *)local_a0._8_8_ + 0x18) +
                            ((ulonglong)(longlong)*(int *)(local_a0._8_8_ + 8) / uVar2) * 0x10));
        if (cVar8 == '\0') {
          if ((FLaneEnumeration *)local_a0._8_8_ != (FLaneEnumeration *)0x0) {
            FMemory::Free((void *)local_a0._8_8_);
          }
          goto LAB_14d45b9c3;
        }
        if (*(int *)(uVar5 + 8) < *(int *)(uVar5 + 0xc)) {
          *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
          AlgoImpl::
          HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,_TraceServices::FRegionTimeline::EnumerateRegions_::__l22::<lambda_4>_>_>
                    ((FLaneEnumeration *)local_a0._8_8_,local_a0._16_4_,FVar4,(<lambda_4> *)local_a6
                    );
        }
        else {
          TArray<TraceServices::FLaneEnumeration,TSizedDefaultAllocator<32>_>::
          HeapPopDiscard<TLess<TraceServices::FLaneEnumeration>_>
                    ((TArray<TraceServices::FLaneEnumeration,TSizedDefaultAllocator<32>_> *)
                     (local_a0 + 8),&local_a7,Default);
        }
      } while (0 < (int)local_a0._16_4_);
    }
    if ((FLaneEnumeration *)local_a0._8_8_ != (FLaneEnumeration *)0x0) {
      FMemory::Free((void *)local_a0._8_8_);
    }
    bVar6 = true;
  }
  return bVar6;
}

// EnumerateRegionsBackwards @ 14d45bac0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TraceServices::FRegionTimeline::EnumerateRegionsBackwards
          (FRegionTimeline *this,double param_1,double param_2,
          TFunctionRef<bool___cdecl(TraceServices::FTimeRegion_const_&)> *param_3)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  FIdentityFunctor FVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  TPagedArrayPage<TraceServices::FTimeRegion> *pTVar10;
  TPagedArrayPage<TraceServices::FTimeRegion> *pTVar11;
  wchar_t *pwVar12;
  double dVar13;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_a8;
  TLess<TraceServices::FLaneEnumeration> local_a7;
  undefined1 local_a6 [6];
  undefined1 local_a0 [24];
  FLaneEnumeration local_88;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  undefined1 *local_60;
  
  pwVar12 = (wchar_t *)param_3;
  dVar13 = param_1;
  (**(code **)(this->Provider->_padding_ + 0x18))();
  if (param_1 < param_2) {
LAB_14d45bd63:
    bVar6 = false;
  }
  else {
    pTVar10 = (TPagedArrayPage<TraceServices::FTimeRegion> *)(this->Lanes).AllocatorInstance.Data;
    iVar1 = (this->Lanes).ArrayNum;
    local_a0._8_8_ = (FLaneEnumeration *)0x0;
    pTVar11 = (TPagedArrayPage<TraceServices::FTimeRegion> *)
              ((longlong)pTVar10 + (longlong)iVar1 * 0x38);
    local_a0._16_4_ = 0;
    local_a0._20_4_ = 0;
    while( true ) {
      if ((this->Lanes).ArrayNum != iVar1) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<TraceServices::FRegionLane_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pTVar10 == pTVar11) break;
      local_70 = local_res10;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TraceServices::FRegionTimeline::EnumerateRegionsBackwards'::__l9::<lambda_2>,double,TraceServices::FTimeRegion_const_&>
                 ::Call;
      local_60 = local_res18;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TraceServices::FRegionTimeline::EnumerateRegionsBackwards'::__l9::<lambda_1>,double,TraceServices::FTimeRegion_const_&>
                 ::Call;
      GetElementRangeOverlappingGivenRange<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
                ((TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
                  *)local_a0,dVar13,param_2,
                 (TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *)pwVar12,
                 (TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *)&local_68);
      if ((local_a0._0_4_ != -1) && (-1 < (int)(local_a0._4_4_ - local_a0._0_4_))) {
        local_88.IntervalStart = local_a0._0_4_;
        local_88.IntervalEnd = local_a0._4_4_;
        local_88.Lane = (FRegionLane *)pTVar10;
        if (((ulonglong)local_a0._8_8_ <= (FLaneEnumeration *)(local_a0 + 0x18)) &&
           ((FScriptContainerElement *)(local_a0 + 0x18) <
            (FScriptContainerElement *)(local_a0._8_8_ + (longlong)(int)local_a0._20_4_ * 0x10))) {
          pwVar12 = 
          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
          ;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
        }
        iVar9 = local_a0._16_4_;
        if (local_a0._16_4_ == local_a0._20_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)(local_a0 + 8),(int *)(local_a0 + 0x14));
        }
        local_a0._16_4_ = iVar9 + 1;
        *(FRegionLane **)
         &((FScriptContainerElement *)(local_a0._8_8_ + (longlong)iVar9 * 0x10))->field_0x0 =
             local_88.Lane;
        *(ulonglong *)((FScriptContainerElement *)(local_a0._8_8_ + (longlong)iVar9 * 0x10) + 8) =
             CONCAT44(local_88.IntervalEnd,local_88.IntervalStart);
      }
      pTVar10 = (TPagedArrayPage<TraceServices::FTimeRegion> *)&pTVar10[3].Count;
    }
    AlgoImpl::
    HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,_TraceServices::FRegionTimeline::EnumerateRegionsBackwards_::__l2::<lambda_3>_>_>
              ((FLaneEnumeration *)local_a0._8_8_,local_a0._16_4_,local_res8[0],
               (<lambda_3> *)&local_a8);
    FVar4 = local_res8[0];
    if (0 < (int)local_a0._16_4_) {
      if (((int)local_a0._16_4_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      do {
        uVar5 = local_a0._8_8_;
        uVar2 = *(ulonglong *)(*(longlong *)local_a0._8_8_ + 0x28);
        cVar8 = (**(code **)param_3)
                          (*(undefined8 *)&param_3->field_0x8,
                           ((ulonglong)(longlong)*(int *)(local_a0._8_8_ + 0xc) % uVar2) * 0x38 +
                           *(longlong *)
                            (*(longlong *)(*(longlong *)local_a0._8_8_ + 0x18) +
                            ((ulonglong)(longlong)*(int *)(local_a0._8_8_ + 0xc) / uVar2) * 0x10));
        if (cVar8 == '\0') {
          if ((FLaneEnumeration *)local_a0._8_8_ != (FLaneEnumeration *)0x0) {
            FMemory::Free((void *)local_a0._8_8_);
          }
          goto LAB_14d45bd63;
        }
        if (*(int *)(uVar5 + 8) < *(int *)(uVar5 + 0xc)) {
          *(int *)(uVar5 + 0xc) = *(int *)(uVar5 + 0xc) + -1;
          AlgoImpl::
          HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,_TraceServices::FRegionTimeline::EnumerateRegionsBackwards_::__l22::<lambda_4>_>_>
                    ((FLaneEnumeration *)local_a0._8_8_,local_a0._16_4_,FVar4,(<lambda_4> *)local_a6
                    );
        }
        else {
          TArray<TraceServices::FLaneEnumeration,TSizedDefaultAllocator<32>_>::
          HeapPopDiscard<TLess<TraceServices::FLaneEnumeration>_>
                    ((TArray<TraceServices::FLaneEnumeration,TSizedDefaultAllocator<32>_> *)
                     (local_a0 + 8),&local_a7,Default);
        }
      } while (0 < (int)local_a0._16_4_);
    }
    if ((FLaneEnumeration *)local_a0._8_8_ != (FLaneEnumeration *)0x0) {
      FMemory::Free((void *)local_a0._8_8_);
    }
    bVar6 = true;
  }
  return bVar6;
}

// GetCategory @ 14d4620d0

FRegionCategory * __thiscall TraceServices::FRegionTimeline::GetCategory(FRegionTimeline *this)

{
  (**(code **)(this->Provider->_padding_ + 0x18))();
  return (FRegionCategory *)this->Category;
}

// GetCategoryName @ 14d462100

wchar_t * __thiscall TraceServices::FRegionTimeline::GetCategoryName(FRegionTimeline *this)

{
  (**(code **)(this->Provider->_padding_ + 0x18))();
  if (this->Category != (FRegionCategoryImpl *)0x0) {
    return (wchar_t *)this->Category->_padding_;
  }
  return (wchar_t *)0x0;
}

// GetLane @ 14d468cc0

FRegionLane * __thiscall TraceServices::FRegionTimeline::GetLane(FRegionTimeline *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FRegionLane *pFVar3;
  
  (**(code **)(this->Provider->_padding_ + 0x18))();
  if ((-1 < param_1) && (param_1 < (this->Lanes).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRegionLane *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FRegionLane *)((this->Lanes).AllocatorInstance.Data + (longlong)param_1 * 0x38);
  }
  return (FRegionLane *)0x0;
}

// GetLaneCount @ 14d468d50

int __thiscall TraceServices::FRegionTimeline::GetLaneCount(FRegionTimeline *this)

{
  (**(code **)(this->Provider->_padding_ + 0x18))();
  return (this->Lanes).ArrayNum;
}

// InsertNewRegion @ 14d473560

FTimeRegion * __thiscall
TraceServices::FRegionTimeline::InsertNewRegion
          (FRegionTimeline *this,FRegionTimerImpl *param_1,double param_2,ulong64 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FTimeRegion *pFVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  void *pvVar16;
  TArray<TraceServices::FRegionLane,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  ulonglong uVar20;
  undefined1 local_res8 [8];
  undefined4 uStack_54;
  undefined8 local_48;
  ulonglong uVar19;
  
  (**(code **)(this->Provider->_padding_ + 0x18))();
  uVar8 = __real_7ff0000000000000;
  uVar3 = *(undefined8 *)param_1;
  uVar19 = 0;
  uVar20 = uVar19;
  if (*(undefined8 **)&param_1->field_0x8 == (undefined8 *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = **(undefined8 **)&param_1->field_0x8;
  }
  do {
    uVar18 = (uint)uVar19;
    if ((this->Lanes).ArrayNum <= (int)uVar18) break;
    if (((this->Lanes).ArrayNum <= (int)uVar18) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FTimeRegion *)(*pcVar7)();
      return pFVar12;
    }
    plVar4 = *(longlong **)((this->Lanes).AllocatorInstance.Data + uVar20 + 0x20);
    if (*(double *)(plVar4[1] * 0x38 + -0x28 + *plVar4) <= param_2) break;
    uVar18 = uVar18 + 1;
    uVar19 = (ulonglong)uVar18;
    uVar20 = uVar20 + 0x38;
  } while ((int)uVar18 < 100);
  if (99 < (int)uVar18) {
    local_res8[0] = 0;
    `TraceServices::FRegionTimeline::CalculateRegionDepth'::__l2::<lambda_1>::operator()(local_res8)
    ;
  }
  pTVar17 = &this->Lanes;
  if (uVar18 == (this->Lanes).ArrayNum) {
    uVar13 = (**(code **)((longlong)*this->Session + 0xb8))();
    piVar1 = &(this->Lanes).ArrayMax;
    iVar10 = (this->Lanes).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&pTVar17->AllocatorInstance,piVar1);
      (this->Lanes).ArrayNum = iVar10;
    }
    (this->Lanes).ArrayNum = iVar10 + 1;
    lVar14 = (longlong)iVar10 * 0x38;
    pFVar5 = (pTVar17->AllocatorInstance).Data;
    *(undefined8 *)(pFVar5 + lVar14) = uVar13;
    *(undefined8 *)(pFVar5 + lVar14 + 8) = 0;
    *(undefined8 *)(pFVar5 + lVar14 + 0x10) = 0;
    *(undefined8 *)(pFVar5 + lVar14 + 0x18) = 0;
    *(undefined8 *)(pFVar5 + lVar14 + 0x20) = 0;
    *(undefined8 *)(pFVar5 + lVar14 + 0x28) = 0x200;
    *(undefined8 *)(pFVar5 + lVar14 + 0x30) = 0;
  }
  uVar11 = 0;
  if ((int)uVar18 < (this->Lanes).ArrayNum) {
    uVar11 = ~uVar18 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar12 = (FTimeRegion *)(*pcVar7)();
    return pFVar12;
  }
  pFVar5 = (pTVar17->AllocatorInstance).Data;
  lVar14 = (longlong)(int)uVar18 * 0x38;
  if ((*(longlong *)(pFVar5 + lVar14 + 0x20) == 0) ||
     (*(longlong *)(*(longlong *)(pFVar5 + lVar14 + 0x20) + 8) ==
      *(longlong *)(pFVar5 + lVar14 + 0x28))) {
    iVar10 = *(int *)(pFVar5 + lVar14 + 0x10);
    if (iVar10 == *(int *)(pFVar5 + lVar14 + 0x14)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)(pFVar5 + lVar14 + 8),
                          (int *)(pFVar5 + lVar14 + 0x14));
    }
    *(int *)(pFVar5 + lVar14 + 0x10) = iVar10 + 1;
    pvVar16 = (void *)((longlong)iVar10 * 0x10 + *(longlong *)(pFVar5 + lVar14 + 8));
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>,int>(pvVar16,1)
    ;
    *(void **)(pFVar5 + lVar14 + 0x20) = pvVar16;
    *(undefined8 *)(pFVar5 + lVar14 + 0x18) = *(undefined8 *)(pFVar5 + lVar14 + 8);
    uVar13 = (**(code **)(**(longlong **)(pFVar5 + lVar14) + 8))
                       (*(longlong **)(pFVar5 + lVar14),*(longlong *)(pFVar5 + lVar14 + 0x28) * 0x38
                       );
    **(undefined8 **)(pFVar5 + lVar14 + 0x20) = uVar13;
  }
  *(longlong *)(pFVar5 + lVar14 + 0x30) = *(longlong *)(pFVar5 + lVar14 + 0x30) + 1;
  lVar6 = **(longlong **)(pFVar5 + lVar14 + 0x20);
  lVar15 = (*(longlong **)(pFVar5 + lVar14 + 0x20))[1] * 0x38;
  *(undefined8 *)(lVar15 + lVar6) = param_1;
  ((undefined8 *)(lVar15 + lVar6))[1] = param_2;
  puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar6);
  *puVar2 = uVar8;
  puVar2[1] = param_3;
  puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar6);
  *puVar2 = CONCAT44(uStack_54,uVar18);
  puVar2[1] = uVar3;
  *(undefined8 *)(lVar15 + 0x30 + lVar6) = local_48;
  *(longlong *)(*(longlong *)(pFVar5 + lVar14 + 0x20) + 8) =
       *(longlong *)(*(longlong *)(pFVar5 + lVar14 + 0x20) + 8) + 1;
  uVar11 = 0;
  if ((int)uVar18 < (this->Lanes).ArrayNum) {
    uVar11 = ~uVar18 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar12 = (FTimeRegion *)(*pcVar7)();
    return pFVar12;
  }
  plVar4 = *(longlong **)
            ((this->Lanes).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x38 + 0x20);
  return (FTimeRegion *)(*plVar4 + -0x38 + plVar4[1] * 0x38);
}

// operator() @ 15057d5e0

bool __thiscall
`TraceServices::FRegionTimeline::CalculateRegionDepth'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5452722657449476331>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5452722657449476331>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

