// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// ClearAll @ 1425d1590

void __cdecl FSlateAccessibleWidgetCache::ClearAll(void)

{
  bool bVar1;
  
  bVar1 = 1 < (int)AccessibleWidgetMap._72_4_;
  if (!bVar1) {
    TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
                      *)&AccessibleWidgetMap);
  }
  TSparseArray<TSparseSetElement<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&AccessibleWidgetMap,0,AccessibleWidgetMap._8_4_);
  AccessibleWidgetMap._8_4_ = 0;
  if (AccessibleWidgetMap._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&AccessibleWidgetMap,0,
               (int *)&AccessibleWidgetMap.field_0xc);
  }
  AccessibleWidgetMap._48_4_ = 0xffffffff;
  AccessibleWidgetMap._52_4_ = 0;
  AccessibleWidgetMap._40_4_ = 0;
  if (0x80 < (uint)AccessibleWidgetMap._44_4_) {
    AccessibleWidgetMap._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&AccessibleWidgetMap.field_0x10,0);
  }
  if (bVar1) {
    AccessibleWidgetMap._72_4_ = 1;
    TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
              *)&AccessibleWidgetMap);
  }
  bVar1 = 1 < (int)AccessibleIdMap._72_4_;
  if (!bVar1) {
    TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
                      *)&AccessibleIdMap);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&AccessibleIdMap,0,AccessibleIdMap._8_4_);
  AccessibleIdMap._8_4_ = 0;
  if (AccessibleIdMap._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&AccessibleIdMap,0,(int *)&AccessibleIdMap.field_0xc);
  }
  AccessibleIdMap._48_4_ = 0xffffffff;
  AccessibleIdMap._52_4_ = 0;
  AccessibleIdMap._40_4_ = 0;
  if (0x80 < (uint)AccessibleIdMap._44_4_) {
    AccessibleIdMap._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&AccessibleIdMap.field_0x10,0);
  }
  if (bVar1) {
    AccessibleIdMap._72_4_ = 1;
    TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
              *)&AccessibleIdMap);
  }
  return;
}

// DumpAccessibilityStats @ 1425da820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FSlateAccessibleWidgetCache::DumpAccessibilityStats(void)

{
  if ((((4 < (byte)LogAccessibility._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
       4 < (byte)LogAccessibility._0_1_)) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
      4 < (byte)LogAccessibility._0_1_)) &&
     ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
      4 < (byte)LogAccessibility._0_1_ &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility),
      4 < (byte)LogAccessibility._0_1_)))) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility);
  }
  return;
}

// GetAccessibleWidget @ 1425dd710

TSharedRef<FSlateAccessibleWidget,1> * __cdecl
FSlateAccessibleWidgetCache::GetAccessibleWidget
          (TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar3;
  longlong lVar4;
  TPairInitializer<SWidget_*_&&,TSharedRef<FSlateAccessibleWidget,1>_&&> local_res10;
  FSlateAccessibleWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  TPairInitializer<SWidget_*_&&,TSharedRef<FSlateAccessibleWidget,1>_&&> *local_28;
  FSlateAccessibleWidget **local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pSVar1 = param_1->Object;
  pTVar3 = TMapBase<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>_>
           ::Find((TMapBase<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>_>
                   *)&AccessibleWidgetMap,pSVar1);
  if (pTVar3 == (TSharedRef<FSlateAccessibleWidget,1> *)0x0) {
    local_20 = (FSlateAccessibleWidget **)(**(code **)(pSVar1->_padding_ + 0x150))(pSVar1,local_18);
    local_res10.Value = (TSharedRef<FSlateAccessibleWidget,1> *)param_1->Object;
    local_28 = (TPairInitializer<SWidget_*_&&,TSharedRef<FSlateAccessibleWidget,1>_&&> *)
               &local_res10.Value;
    TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<SWidget_*_&&,TSharedRef<FSlateAccessibleWidget,1>_&&>_>
              ((TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
                *)&AccessibleWidgetMap,&local_res10,(bool *)&local_28);
    lVar4 = (longlong)(int)local_res10.Key * 0x20 + AccessibleWidgetMap._0_8_;
    local_38 = *(FSlateAccessibleWidget **)(lVar4 + 8);
    local_30 = *(TReferenceControllerBase<1> **)(lVar4 + 0x10);
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    local_res10.Key._0_4_ = local_38->Id;
    local_28 = &local_res10;
    local_20 = &local_38;
    TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&&,TSharedRef<FSlateAccessibleWidget,1>_const_&>_>
              ((TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
                *)&AccessibleIdMap,
               (TPairInitializer<int_&&,TSharedRef<FSlateAccessibleWidget,1>_const_&> *)
               &local_res10.Value,(bool *)&local_28);
    __return_storage_ptr__->Object = local_38;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_30;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  else {
    __return_storage_ptr__->Object = pTVar3->Object;
    pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetAccessibleWidgetChecked @ 1425dd860

TSharedPtr<FSlateAccessibleWidget,1> * __cdecl
FSlateAccessibleWidgetCache::GetAccessibleWidgetChecked
          (TSharedPtr<FSlateAccessibleWidget,1> *__return_storage_ptr__,
          TSharedPtr<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FSlateAccessibleWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<FSlateAccessibleWidget,1> local_18;
  
  if (param_1->Object != (SWidget *)0x0) {
    bVar4 = SWidget::IsAccessible(param_1->Object);
    if (bVar4) {
      if (param_1->Object == (SWidget *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TSharedPtr<FSlateAccessibleWidget,1> *)(*pcVar3)();
          return pTVar5;
        }
      }
      local_28.Object = param_1->Object;
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.SharedReferenceCount.ReferenceController = pTVar1;
      if (local_28.Object == (SWidget *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TSharedPtr<FSlateAccessibleWidget,1> *)(*pcVar3)();
          return pTVar5;
        }
      }
      pTVar6 = GetAccessibleWidget(&local_18,&local_28);
      __return_storage_ptr__->Object = pTVar6->Object;
      pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FSlateAccessibleWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetAccessibleWidgetFromId @ 1425dda30

TSharedPtr<FSlateAccessibleWidget,1> * __cdecl
FSlateAccessibleWidgetCache::GetAccessibleWidgetFromId
          (TSharedPtr<FSlateAccessibleWidget,1> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  
  if (AccessibleIdMap._8_4_ != AccessibleIdMap._52_4_) {
    lVar5 = 0x154ba7ec8;
    if (AccessibleIdMap._64_8_ != 0) {
      lVar5 = AccessibleIdMap._64_8_;
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)(AccessibleIdMap._72_4_ - 1 & param_1) * 4);
    while (iVar1 != -1) {
      piVar3 = (int *)((longlong)iVar1 * 0x20 + AccessibleIdMap._0_8_);
      if (*piVar3 == param_1) {
        piVar4 = piVar3 + 2;
        if (piVar3 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        if (piVar4 != (int *)0x0) {
          __return_storage_ptr__->Object = *(FSlateAccessibleWidget **)piVar4;
          pTVar2 = *(TReferenceControllerBase<1> **)(piVar4 + 2);
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
          if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
            return __return_storage_ptr__;
          }
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          return __return_storage_ptr__;
        }
        break;
      }
      iVar1 = piVar3[6];
    }
  }
  __return_storage_ptr__->Object = (FSlateAccessibleWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetAllWidgets @ 1425ddc70

TConstIterator * __cdecl
FSlateAccessibleWidgetCache::GetAllWidgets(TConstIterator *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  
  iVar6 = 0;
  uVar3 = 1;
  iVar7 = 0;
  iVar4 = 0;
  if (AccessibleWidgetMap._40_4_ != 0) {
    puVar8 = (uint *)&AccessibleWidgetMap.field_0x10;
    if (AccessibleWidgetMap._32_8_ != 0) {
      puVar8 = (uint *)AccessibleWidgetMap._32_8_;
    }
    uVar2 = *puVar8;
    while (uVar2 == 0) {
      lVar5 = (longlong)iVar6;
      iVar7 = iVar7 + 0x20;
      iVar6 = iVar6 + 1;
      iVar4 = AccessibleWidgetMap._40_4_;
      if ((int)(AccessibleWidgetMap._40_4_ + -1 + (AccessibleWidgetMap._40_4_ + -1 >> 0x1f & 0x1fU))
          >> 5 < iVar6) goto LAB_1425ddd08;
      uVar2 = puVar8[lVar5 + 1];
    }
    uVar3 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uVar3 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar4 = (int)lVar5 + -1 + iVar7;
    if ((int)AccessibleWidgetMap._40_4_ < iVar4) {
      iVar4 = AccessibleWidgetMap._40_4_;
    }
  }
LAB_1425ddd08:
  *(TMap<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>_>
    **)__return_storage_ptr__ = &AccessibleWidgetMap;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar3,iVar6);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0x154ba7e50;
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = CONCAT44(iVar4,0xffffffff);
  *(ulonglong *)&__return_storage_ptr__->field_0x20 = CONCAT44(iVar4,iVar7);
  return __return_storage_ptr__;
}

// RemoveWidget @ 1425f90a0

TSharedPtr<FSlateAccessibleWidget,1> * __cdecl
FSlateAccessibleWidgetCache::RemoveWidget
          (TSharedPtr<FSlateAccessibleWidget,1> *__return_storage_ptr__,SWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateAccessibleWidget *pFVar2;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar3;
  uint uVar4;
  atomic<int> *paVar5;
  SWidget *local_res18 [2];
  
  pTVar3 = TMapBase<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>_>
           ::Find((TMapBase<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>_>
                   *)&AccessibleWidgetMap,param_1);
  if (pTVar3 != (TSharedRef<FSlateAccessibleWidget,1> *)0x0) {
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar3->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar5 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar5 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_res18[0] = param_1;
    if (AccessibleWidgetMap._8_4_ != AccessibleWidgetMap._52_4_) {
      uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<SWidget_const_*>
                ((TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
                  *)&AccessibleWidgetMap,uVar4 >> 0x10 ^ uVar4,local_res18);
    }
    uVar4 = pFVar2->Id;
    local_res18[0] = (SWidget *)CONCAT44(local_res18[0]._4_4_,uVar4);
    if (AccessibleIdMap._8_4_ != AccessibleIdMap._52_4_) {
      TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
                         *)&AccessibleIdMap,uVar4,(int *)local_res18);
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FSlateAccessibleWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

