// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 147ba23f0

UClass * __cdecl UViewportStatsSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewportStatsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ViewportStatsSubsystem",
               &Z_Registration_Info_UClass_UViewportStatsSubsystem.InnerSingleton,
               StaticRegisterNativesUViewportStatsSubsystem,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UViewportStatsSubsystem>,
               InternalVTableHelperCtorCaller<UViewportStatsSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewportStatsSubsystem.InnerSingleton;
}

// UViewportStatsSubsystem @ 147bbde70

UViewportStatsSubsystem * __thiscall
UViewportStatsSubsystem::UViewportStatsSubsystem
          (UViewportStatsSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UViewportStatsSubsystem__6B_;
  (this->DisplayDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayDelegates).ArrayNum = 0;
  (this->DisplayDelegates).ArrayMax = 0;
  (this->UniqueDisplayMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueDisplayMessages).ArrayNum = 0;
  (this->UniqueDisplayMessages).ArrayMax = 0;
  return this;
}

// UViewportStatsSubsystem @ 147bbdeb0

UViewportStatsSubsystem * __thiscall
UViewportStatsSubsystem::UViewportStatsSubsystem(UViewportStatsSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UViewportStatsSubsystem__6B_;
  (this->DisplayDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayDelegates).ArrayNum = 0;
  (this->DisplayDelegates).ArrayMax = 0;
  (this->UniqueDisplayMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueDisplayMessages).ArrayNum = 0;
  (this->UniqueDisplayMessages).ArrayMax = 0;
  return this;
}

// ~UViewportStatsSubsystem @ 147bbfb80

void __thiscall UViewportStatsSubsystem::~UViewportStatsSubsystem(UViewportStatsSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UViewportStatsSubsystem__6B_;
  DestructItems<TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1>,int>
            ((TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1> *)
             (this->UniqueDisplayMessages).AllocatorInstance.Data,
             (this->UniqueDisplayMessages).ArrayNum);
  pFVar1 = (this->UniqueDisplayMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FViewportDisplayDelegate,int>
            ((FViewportDisplayDelegate *)(this->DisplayDelegates).AllocatorInstance.Data,
             (this->DisplayDelegates).ArrayNum);
  pFVar1 = (this->DisplayDelegates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// operator() @ 147bc4290

void __thiscall
`UViewportStatsSubsystem::AddTimedDisplay'::__l8::<lambda_1>::operator()
          (void *this,TWeakPtr<UViewportStatsSubsystem::FUniqueDisplayData,1> *param_1,
          TArray<TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  FUniqueDisplayData *local_38;
  TReferenceControllerBase<1> *local_30;
  
  if ((((param_1->Object != (FUniqueDisplayData *)0x0) &&
       (pTVar3 = (param_1->WeakReferenceCount).ReferenceController,
       pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) &&
     (param_2 !=
      (TArray<TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1>,TSizedDefaultAllocator<32>_>
       *)0x0)) {
    local_30 = (param_1->WeakReferenceCount).ReferenceController;
    local_38 = (FUniqueDisplayData *)0x0;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = local_30->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_30 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_147bc430d;
        }
        LOCK();
        aVar6 = local_30->SharedReferenceCount;
        bVar14 = aVar2 == aVar6;
        if (bVar14) {
          local_30->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar6;
      } while (!bVar14);
      if (local_30 != (TReferenceControllerBase<1> *)0x0) {
        local_38 = param_1->Object;
      }
    }
LAB_147bc430d:
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar7 = (longlong)param_2->ArrayNum;
    if (param_2->ArrayNum != 0) {
      pFVar4 = (param_2->AllocatorInstance).Data;
      iVar13 = 0;
      bVar14 = *(FUniqueDisplayData **)pFVar4 != local_38;
      lVar9 = 0;
      iVar11 = 0;
      do {
        lVar9 = lVar9 + 1;
        iVar12 = iVar11 + 1;
        if (lVar9 < lVar7) {
          pFVar8 = pFVar4 + lVar9 * 0x10;
          do {
            if (bVar14 != (*(FUniqueDisplayData **)pFVar8 != local_38)) break;
            iVar12 = iVar12 + 1;
            lVar9 = lVar9 + 1;
            pFVar8 = pFVar8 + 0x10;
          } while (lVar9 < lVar7);
        }
        iVar10 = iVar12 - iVar11;
        if (bVar14 == false) {
          DestructItems<TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1>,int>
                    ((TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1> *)
                     (pFVar4 + (longlong)iVar11 * 0x10),iVar10);
        }
        else {
          if (iVar13 != iVar11) {
            memmove(pFVar4 + (longlong)iVar13 * 0x10,pFVar4 + (longlong)iVar11 * 0x10,
                    (longlong)iVar10 << 4);
          }
          iVar13 = iVar13 + iVar10;
        }
        bVar14 = (bool)(bVar14 ^ 1);
        iVar11 = iVar12;
      } while (lVar9 < lVar7);
      param_2->ArrayNum = iVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

// AddDisplayDelegate @ 147bc8410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UViewportStatsSubsystem::AddDisplayDelegate
          (UViewportStatsSubsystem *this,TFunction<bool___cdecl(FText_&,FLinearColor_&)> *param_1)

{
  TArray<FViewportDisplayDelegate,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  FScriptContainerElement *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_68._72_8_ = *(undefined8 *)&param_1->field_0x28;
  pTVar1 = &this->DisplayDelegates;
  local_68._32_8_ = *(undefined8 *)param_1;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_68._64_8_ = *(undefined8 *)&param_1->field_0x20;
  local_68._0_8_ = (atomic<unsigned___int64>)0x0;
  local_68._8_8_ = 0;
  local_68._16_8_ = 0;
  local_68._48_8_ = *(undefined8 *)&param_1->field_0x10;
  local_68._56_8_ = *(undefined8 *)&param_1->field_0x18;
  if (local_68._32_8_ != 0) {
    *(undefined8 *)param_1 = 0;
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_68) &&
     (lVar8 = (longlong)(this->DisplayDelegates).ArrayMax,
     (FScriptContainerElement *)local_68 < pFVar3 + lVar8 * 0x50)) {
    local_80 = (longlong)(this->DisplayDelegates).ArrayNum;
    local_78 = 0x50;
    local_98 = local_68;
    local_90 = pFVar3;
    local_88 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = (this->DisplayDelegates).ArrayNum;
  piVar2 = &(this->DisplayDelegates).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->DisplayDelegates).ArrayNum = iVar6 + 1;
  FViewportDisplayDelegate::FViewportDisplayDelegate
            ((FViewportDisplayDelegate *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x50)
             ,(FViewportDisplayDelegate *)local_68);
  if (local_68._32_8_ != 0) {
    plVar7 = (longlong *)(local_68 + 0x30);
    if ((longlong *)local_68._72_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_68._72_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return iVar6;
}

// AddDisplayDelegate @ 147bc8580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UViewportStatsSubsystem::AddDisplayDelegate
          (UViewportStatsSubsystem *this,FViewportDisplayCallback *param_1)

{
  TArray<FViewportDisplayDelegate,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FReadAccessScope local_88;
  undefined1 local_68 [72];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_68._0_8_ = (atomic<unsigned___int64>)0x0;
  pTVar1 = &this->DisplayDelegates;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_88);
  local_68._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_68._16_8_ = *(undefined8 *)&param_1->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_68._32_8_ = 0;
  local_20 = (longlong *)0x0;
  if ((pFVar3 <= (FScriptContainerElement *)local_68) &&
     (lVar7 = (longlong)(this->DisplayDelegates).ArrayMax,
     (FScriptContainerElement *)local_68 < pFVar3 + lVar7 * 0x50)) {
    local_a0 = (longlong)(this->DisplayDelegates).ArrayNum;
    local_98 = 0x50;
    local_b8 = local_68;
    local_b0 = pFVar3;
    local_a8 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = (this->DisplayDelegates).ArrayNum;
  piVar2 = &(this->DisplayDelegates).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->DisplayDelegates).ArrayNum = iVar6 + 1;
  FViewportDisplayDelegate::FViewportDisplayDelegate
            ((FViewportDisplayDelegate *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x50)
             ,(FViewportDisplayDelegate *)local_68);
  if (local_68._32_8_ != 0) {
    plVar8 = (longlong *)(local_68 + 0x30);
    if (local_20 != (longlong *)0x0) {
      plVar8 = local_20;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return iVar6;
}

// AddTimedDisplay @ 147bc8fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UViewportStatsSubsystem::AddTimedDisplay
          (UViewportStatsSubsystem *this,FText *param_1,FLinearColor *param_2,float param_3,
          TVector2<double> *param_4)

{
  TArray<TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  ITextData *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  UWorld *this_00;
  TReferenceControllerBase<1> *pTVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  FTimerManager *this_01;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 local_68 [8];
  FTimerHandle local_60;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FDelegateAllocation local_48 [2];
  
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (this_00 == (UWorld *)0x0) goto LAB_147bc9289;
  pTVar12 = ::operator_new(0x40);
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    local_58 = ___xmm_00000000000000000000000000000010;
    pTStack_50 = _UNK_150651568;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFUniqueDisplayData_UViewportStatsSubsystem___00_SharedPointerInternals__6B_
    ;
    pTVar12[1]._padding_ = 0;
    pIVar5 = (param_1->TextData).Reference;
    pTVar12[1]._padding_ = (longlong)pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_68);
    }
    pTVar12[1].SharedReferenceCount = (atomic<int>)param_1->Flags;
    uVar8 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    pTVar12[2]._padding_ = *(longlong *)&param_2->field0_0x0;
    pTVar12[2].SharedReferenceCount = (atomic<int>)(int)uVar8;
    pTVar12[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar8 >> 0x20);
    dVar9 = (param_4->field0_0x0)._s_0.Y;
    pTVar12[3]._padding_ = (longlong)(param_4->field0_0x0)._s_0.X;
    *(double *)&pTVar12[3].SharedReferenceCount = dVar9;
    if (pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    pTVar15 = pTVar12;
    local_58 = pTVar12 + 1;
    pTStack_50 = pTVar12;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  pFVar6 = (this->UniqueDisplayMessages).AllocatorInstance.Data;
  pTVar1 = &this->UniqueDisplayMessages;
  if ((pFVar6 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 <
      pFVar6 + (longlong)(this->UniqueDisplayMessages).ArrayMax * 0x10)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar11 = (this->UniqueDisplayMessages).ArrayNum;
  piVar2 = &(this->UniqueDisplayMessages).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  pTVar12 = pTStack_50;
  pTVar15 = local_58;
  (this->UniqueDisplayMessages).ArrayNum = iVar11 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar11 * 0x10) = local_58;
  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar11 * 0x10 + 8) = pTStack_50;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_3 != 0.0) {
    local_48[0].DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_48[0].DelegateSize = 0;
    local_60.Handle = 0;
    if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_50->WeakReferenceCount = (atomic<int>)((int)pTStack_50->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar13 = UE::Core::Private::DelegateAllocate(0x30,local_48);
    if (puVar13 == (undefined8 *)0x0) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar3 = &pTVar12->WeakReferenceCount;
        aVar4 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
        }
      }
    }
    else {
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__V__TWeakPtr_UFUniqueDisplayData_UViewportStatsSubsystem___00__PEAV__TArray_V__TSharedPtr_UFUniqueDisplayData_UViewportStatsSubsystem___00__V__TSizedDefaultAllocator__0CA_______6B_
      ;
      puVar13[1] = pTVar15;
      puVar13[2] = pTVar12;
      puVar13[3] = pTVar1;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[4] = uVar14;
      *puVar13 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UViewportStatsSubsystem::AddTimedDisplay'::`8'::<lambda_1>,TWeakPtr<UViewportStatsSubsystem::FUniqueDisplayData,1>,TArray<TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1>,TSizedDefaultAllocator<32>_>_*>
                  ::_vftable_;
    }
    this_01 = UWorld::GetTimerManager(this_00);
    FTimerManager::SetTimer
              (this_01,&local_60,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)local_48,
               param_3,false,__real_bf800000);
    if (local_48[0].DelegateSize != 0) {
      if (local_48[0].DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
      goto LAB_147bc9268;
      (*(code *)**(undefined8 **)local_48[0].DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)local_48,0,0,0x10);
      local_48[0].DelegateSize = 0;
    }
    if (local_48[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_48[0].DelegateAllocator);
    }
  }
LAB_147bc9268:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
LAB_147bc9289:
  pIVar5 = (param_1->TextData).Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  return;
}

// Deinitialize @ 147bd4c30

void __thiscall UViewportStatsSubsystem::Deinitialize(UViewportStatsSubsystem *this)

{
  int *piVar1;
  
  DestructItems<FViewportDisplayDelegate,int>
            ((FViewportDisplayDelegate *)(this->DisplayDelegates).AllocatorInstance.Data,
             (this->DisplayDelegates).ArrayNum);
  piVar1 = &(this->DisplayDelegates).ArrayMax;
  (this->DisplayDelegates).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,0,&(this->DisplayDelegates).AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1>,int>
            ((TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1> *)
             (this->UniqueDisplayMessages).AllocatorInstance.Data,
             (this->UniqueDisplayMessages).ArrayNum);
  piVar1 = &(this->UniqueDisplayMessages).ArrayMax;
  (this->UniqueDisplayMessages).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->UniqueDisplayMessages).AllocatorInstance,0,piVar1);
  }
  return;
}

// Draw @ 147bd8270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UViewportStatsSubsystem::Draw
          (UViewportStatsSubsystem *this,FViewport *param_1,FCanvas *param_2,UCanvas *param_3,
          float param_4)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  ITextData *pIVar4;
  FWeakObjectPtr FVar5;
  code *pcVar6;
  double dVar7;
  TRefCountPtr<ITextData> TVar8;
  bool bVar9;
  UFont *pUVar10;
  FText *pFVar11;
  undefined8 uVar12;
  TScriptDelegate<FNotThreadSafeDelegateMode> *pTVar13;
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  FScriptContainerElement *pFVar14;
  TScriptDelegate<FNotThreadSafeDelegateMode> *pTVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  char cVar18;
  undefined1 local_308 [8];
  ITextData *local_300;
  uint local_2f8;
  TVector2<double>_u_0 local_2f0;
  FText local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  char local_2c0;
  FLinearColor_u_0 local_2b8;
  undefined1 local_2a8 [4];
  undefined1 local_2a4 [4];
  undefined1 local_2a0 [4];
  undefined1 local_29c [4];
  undefined1 local_298 [8];
  TVector2<double>_u_0 local_290;
  TVector2<double>_u_0 local_280;
  undefined1 local_268 [72];
  uint local_220;
  FLinearColor_u_0 local_1e0;
  longlong local_1d0;
  longlong lStack_1c8;
  longlong local_198;
  longlong lStack_190;
  TRefCountPtr<ITextData> local_60;
  uint local_58;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId51,"UViewportStatsSubsystem::Draw",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ViewportStatsSubsystem.cpp"
               ,0x33);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId51);
  }
  dVar7 = __real_4034000000000000;
  local_2f0._s_0.Y = (double)param_4;
  local_2f0._s_0.X = __real_4034000000000000;
  pUVar10 = UEngine::GetSmallFont();
  pFVar11 = FText::GetEmpty();
  local_280._s_0.X = 0.0;
  local_280._s_0.Y = 0.0;
  FCanvasTextItem::FCanvasTextItem
            ((FCanvasTextItem *)local_268,(TVector2<double> *)&local_280._s_0,pFVar11,pUVar10,
             &FLinearColor::White);
  iVar1 = (this->UniqueDisplayMessages).ArrayNum;
  local_220 = local_220 | 2;
  pFVar16 = (this->UniqueDisplayMessages).AllocatorInstance.Data;
  local_198 = ___xmm_3ff00000000000003ff0000000000000;
  lStack_190 = _UNK_150689688;
  local_1d0 = ___xmm_3ff00000000000003ff0000000000000;
  lStack_1c8 = _UNK_150689688;
  pFVar14 = pFVar16 + (longlong)iVar1 * 0x10;
  local_1e0 = FLinearColor::Black.field0_0x0;
  while( true ) {
    if ((this->UniqueDisplayMessages).ArrayNum != iVar1) {
      param_4 = (float)((uint)param_4 & 0xffffff00);
      `TCheckedPointerIterator<TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if (pFVar16 == pFVar14) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
    plVar3 = *(longlong **)pFVar16;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar3 == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TVar8.Reference = local_60.Reference;
    pIVar4 = (ITextData *)*plVar3;
    if (local_60.Reference != pIVar4) {
      local_60.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_2a8);
      }
      if (TVar8.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
      }
    }
    local_58 = *(uint *)(plVar3 + 1);
    if ((plVar3 == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_268._48_8_ = plVar3[2];
    local_268._56_8_ = plVar3[3];
    local_290._s_0.Y = local_2f0._s_0.Y + (double)plVar3[5];
    local_290._s_0.X = local_2f0._s_0.X + (double)plVar3[4];
    FCanvas::DrawItem(param_2,(FCanvasItem *)local_268,(TVector2<double> *)&local_290._s_0);
    local_2f0._s_0.Y = local_2f0._s_0.Y + dVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar16 = pFVar16 + 0x10;
  }
  pFVar11 = FText::GetEmpty();
  local_300 = (pFVar11->TextData).Reference;
  if (local_300 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_300 + 8))(local_300,local_2a4);
  }
  local_2f8 = pFVar11->Flags;
  iVar1 = (this->DisplayDelegates).ArrayNum;
  this_00 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)
            (this->DisplayDelegates).AllocatorInstance.Data;
  pTVar15 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)
            ((longlong)this_00 + (longlong)iVar1 * 0x50);
  local_2b8 = FLinearColor::White.field0_0x0;
  do {
    if ((this->DisplayDelegates).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FViewportDisplayDelegate,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_308);
    }
    if (this_00 == pTVar15) {
      if (local_300 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_300 + 0x10))();
      }
      FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_268);
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    bVar9 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this_00);
    if ((bVar9) || (this_00[1].Object != (FWeakObjectPtr)0x0)) {
      bVar9 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this_00);
      if (bVar9) {
        FText::FText(&local_2e0);
        TVar8.Reference = local_2e0.TextData.Reference;
        local_2c0 = '\0';
        if (local_2e0.TextData.Reference != local_300) {
          local_2e0.TextData.Reference = local_300;
          if (local_300 != (ITextData *)0x0) {
            (**(code **)((longlong)*local_300 + 8))(local_300,local_2a0);
          }
          if (TVar8.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
          }
        }
        local_2e0.Flags = local_2f8;
        local_2d0 = local_2b8._0_8_;
        uStack_2c8 = local_2b8._8_8_;
        TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(this_00,&local_2e0);
        pIVar4 = local_300;
        if (local_300 != local_2e0.TextData.Reference) {
          local_300 = local_2e0.TextData.Reference;
          if (local_2e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2e0.TextData.Reference + 8))
                      (local_2e0.TextData.Reference,local_29c);
          }
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
          }
        }
        cVar18 = local_2c0 != '\0';
        local_2f8 = local_2e0.Flags;
        local_2b8._8_8_ = uStack_2c8;
        local_2b8._0_8_ = local_2d0;
        if (local_2e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2e0.TextData.Reference + 0x10))();
        }
      }
      else {
        if (this_00[1].Object == (FWeakObjectPtr)0x0) goto LAB_147bd86a7;
        UE::Core::Private::Function::CheckCallable((void *)this_00[1].Object);
        pTVar13 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)this_00[3]._padding_;
        FVar5 = this_00[1].Object;
        if (pTVar13 == (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
          pTVar13 = this_00 + 2;
        }
        uVar12 = (**(code **)(pTVar13->_padding_ + 8))();
        cVar18 = (*(code *)FVar5)(uVar12,&local_300,&local_2b8);
      }
      TVar8.Reference = local_60.Reference;
      if (cVar18 != '\0') {
        if (local_60.Reference != local_300) {
          local_60.Reference = local_300;
          if (local_300 != (ITextData *)0x0) {
            (**(code **)((longlong)*local_300 + 8))(local_300,local_298);
          }
          if (TVar8.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
          }
        }
        local_58 = local_2f8;
        local_268._48_8_ = local_2b8._0_8_;
        local_268._56_8_ = local_2b8._8_8_;
        FCanvas::DrawItem(param_2,(FCanvasItem *)local_268,(TVector2<double> *)&local_2f0._s_0);
        local_2f0._s_0.Y = local_2f0._s_0.Y + dVar7;
      }
    }
LAB_147bd86a7:
    this_00 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00[3].Object;
  } while( true );
}

// GetPrivateStaticClass @ 147be6150

UClass * __cdecl UViewportStatsSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewportStatsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ViewportStatsSubsystem",
               &Z_Registration_Info_UClass_UViewportStatsSubsystem.InnerSingleton,
               StaticRegisterNativesUViewportStatsSubsystem,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UViewportStatsSubsystem>,
               InternalVTableHelperCtorCaller<UViewportStatsSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewportStatsSubsystem.InnerSingleton;
}

// RemoveDisplayDelegate @ 147bfd030

void __thiscall
UViewportStatsSubsystem::RemoveDisplayDelegate(UViewportStatsSubsystem *this,int param_1)

{
  TArray<FViewportDisplayDelegate,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *this_01;
  uint uVar4;
  undefined8 local_res20;
  FDestructionSentinel local_48;
  
  if ((-1 < param_1) && (param_1 < (this->DisplayDelegates).ArrayNum)) {
    this_00 = &this->DisplayDelegates;
    this_01 = (this_00->AllocatorInstance).Data + (longlong)param_1 * 0x50;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
               (FWriteAccessScope *)&local_48);
    local_res20 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this_01 + 8),(FObjectPtr)&local_res20);
    *(undefined8 *)&this_01[0x10].field_0x0 = 0;
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (*(longlong *)&this_01[0x20].field_0x0 != 0) {
      pFVar3 = this_01 + 0x30;
      if (*(FScriptContainerElement **)&this_01[0x48].field_0x0 != (FScriptContainerElement *)0x0) {
        pFVar3 = *(FScriptContainerElement **)&this_01[0x48].field_0x0;
      }
      (**(code **)(*(longlong *)pFVar3 + 0x10))();
      *(undefined8 *)&this_01[0x20].field_0x0 = 0;
    }
    uVar4 = 0;
    if (param_1 < (this->DisplayDelegates).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TArray<FViewportDisplayDelegate,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,param_1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,&this_00->AllocatorInstance,(this->DisplayDelegates).ArrayNum,
               &(this->DisplayDelegates).ArrayMax);
  }
  return;
}

// StaticRegisterNativesUViewportStatsSubsystem @ 147c03860

void __cdecl UViewportStatsSubsystem::StaticRegisterNativesUViewportStatsSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UViewportStatsSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddDisplayDelegate @ 147c12510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UViewportStatsSubsystem::execAddDisplayDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined1 *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  atomic<unsigned___int64> local_c8;
  atomic<unsigned___int64> local_c0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  undefined1 local_88 [16];
  atomic<unsigned___int64> local_78;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0 = 0;
  local_d8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  this = &local_e8;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_b8);
  local_c8 = this[1].AccessDetector.State;
  local_c0 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b8);
  local_88._0_8_ = (atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d0,&local_a0);
  local_88._8_8_ = local_c8;
  local_78 = local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  puVar2 = *(undefined1 **)&param_1[1].field_0x10;
  local_68 = 0;
  local_40 = (longlong *)0x0;
  if ((puVar2 <= local_88) && (local_88 < puVar2 + (longlong)*(int *)&param_1[1].field_0x1c * 0x50))
  {
    local_100 = (longlong)*(int *)&param_1[1].field_0x18;
    local_f8 = 0x50;
    local_118 = local_88;
    local_110 = puVar2;
    local_108 = (longlong)*(int *)&param_1[1].field_0x1c;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&param_1[1].field_0x18;
  if (iVar5 == *(int *)&param_1[1].field_0x1c) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,(ForAnyElementType *)&param_1[1].field_0x10,
                       (int *)&param_1[1].field_0x1c);
  }
  *(int *)&param_1[1].field_0x18 = iVar5 + 1;
  FViewportDisplayDelegate::FViewportDisplayDelegate
            ((FViewportDisplayDelegate *)
             ((longlong)iVar5 * 0x50 + *(longlong *)&param_1[1].field_0x10),
             (FViewportDisplayDelegate *)local_88);
  if (local_68 != 0) {
    plVar6 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar6 = local_40;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  *(int *)param_3 = iVar5;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  return;
}

// execAddTimedDisplay @ 147c12730

void __cdecl
UViewportStatsSubsystem::execAddTimedDisplay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  TVector2<double> *pTVar3;
  float local_res10 [4];
  undefined1 local_res20 [8];
  FText local_88;
  TVector2<double> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FText local_58;
  FLinearColor_u_0 local_48 [3];
  
  FText::FText(&local_88);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  fVar2 = local_res10[0];
  pTVar3 = &local_78;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  local_58.TextData.Reference = local_88.TextData.Reference;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 8))
              (local_88.TextData.Reference,local_res20);
  }
  local_58.Flags = local_88.Flags;
  local_48[0]._0_8_ = local_68;
  local_48[0]._8_8_ = uStack_60;
  AddTimedDisplay((UViewportStatsSubsystem *)param_1,&local_58,(FLinearColor *)&local_48[0]._s_0,
                  fVar2,pTVar3);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  return;
}

// execRemoveDisplayDelegate @ 147c15220

void __cdecl
UViewportStatsSubsystem::execRemoveDisplayDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  atomic<unsigned___int64> aVar7;
  longlong lVar8;
  uint uVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  uint local_res10 [4];
  undefined8 local_res20;
  undefined8 local_48;
  FDestructionSentinel local_40;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_res10[0];
  if (-1 < (int)local_res10[0]) {
    if ((int)local_res10[0] < *(int *)&param_1[1].field_0x18) {
      uVar9 = ~local_res10[0];
      uVar6 = 0;
      if ((int)local_res10[0] < *(int *)&param_1[1].field_0x18) {
        uVar6 = uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             (lVar8 * 0x50 + *(longlong *)&param_1[1].field_0x10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (this,(FWriteAccessScope *)&local_40);
      local_48 = 0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_48);
      local_res20 = 0;
      this[2].AccessDetector.State = (atomic<unsigned___int64>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (this[4].AccessDetector.State != (atomic<unsigned___int64>)0x0) {
        aVar2 = this[9].AccessDetector.State;
        aVar7 = (atomic<unsigned___int64>)(this + 6);
        if (aVar2 != (atomic<unsigned___int64>)0x0) {
          aVar7 = aVar2;
        }
        (**(code **)(*(longlong *)aVar7 + 0x10))();
        this[4].AccessDetector.State = (atomic<unsigned___int64>)0x0;
      }
      uVar6 = 0;
      if ((int)uVar4 < *(int *)&param_1[1].field_0x18) {
        uVar6 = uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TArray<FViewportDisplayDelegate,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                ((TArray<FViewportDisplayDelegate,TSizedDefaultAllocator<32>_> *)
                 &param_1[1].field_0x10,uVar4);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,(ForAnyElementType *)&param_1[1].field_0x10,
                 *(int *)&param_1[1].field_0x18,(int *)&param_1[1].field_0x1c);
    }
  }
  return;
}

