// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 7

// FColorTheme @ 14301aa70

FColorTheme * __thiscall
FColorTheme::FColorTheme
          (FColorTheme *this,FString *param_1,
          TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TSharedPtr<FColorInfo,1> *pTVar4;
  
  ::FString::FString(&this->Name,param_1);
  pTVar1 = &this->Colors;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Colors).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pTVar4 = (TSharedPtr<FColorInfo,1> *)(param_2->AllocatorInstance).Data;
  (this->Colors).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedPtr<FColorInfo,1>,TSharedPtr<FColorInfo,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  *(undefined8 *)&this->RefreshEvent = 0;
  *(undefined8 *)&(this->RefreshEvent).field_0x8 = 0;
  *(undefined8 *)&(this->RefreshEvent).field_0x10 = 0;
  *(undefined8 *)&(this->RefreshEvent).field_0x18 = 2;
  return this;
}

// ~FColorTheme @ 14301aed0

void __thiscall FColorTheme::~FColorTheme(FColorTheme *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RefreshEvent).field_0x8,*(int *)&(this->RefreshEvent).field_0x10);
  pvVar1 = *(void **)&(this->RefreshEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RefreshEvent);
  DestructItems<TSharedPtr<FColorInfo,1>,int>
            ((TSharedPtr<FColorInfo,1> *)(this->Colors).AllocatorInstance.Data,
             (this->Colors).ArrayNum);
  pFVar2 = (this->Colors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// FindApproxColor @ 143032960

int __thiscall FColorTheme::FindApproxColor(FColorTheme *this,FLinearColor *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  float *pfVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar10 = 0;
  if (0 < (this->Colors).ArrayNum) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->Colors).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      pFVar1 = (this->Colors).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar11) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      puVar2 = *(undefined8 **)(pFVar1 + lVar11);
      pTVar3 = (TReferenceControllerBase<1> *)puVar2[1];
      pfVar4 = (float *)*puVar2;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pfVar4 == (float *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      if (((((float)((uint)(*pfVar4 - (param_1->field0_0x0)._s_0.R) & uVar6) < param_2) &&
           ((float)((uint)(pfVar4[1] - (param_1->field0_0x0)._s_0.G) & uVar6) < param_2)) &&
          ((float)((uint)(pfVar4[2] - (param_1->field0_0x0)._s_0.B) & uVar6) < param_2)) &&
         ((float)((uint)(pfVar4[3] - (param_1->field0_0x0)._s_0.A) & uVar6) < param_2)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return uVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar10 < (this->Colors).ArrayNum);
  }
  return -1;
}

// InsertNewColor @ 1430376a0

void __thiscall
FColorTheme::InsertNewColor(FColorTheme *this,TSharedPtr<FColorInfo,1> *param_1,int param_2)

{
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_>::Insert
            (&this->Colors,param_1,param_2);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->RefreshEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// InsertNewColor @ 1430376e0

void __thiscall
FColorTheme::InsertNewColor(FColorTheme *this,TSharedPtr<FLinearColor,1> *param_1,int param_2)

{
  FColorInfo *this_00;
  TRawPtrProxy<FColorInfo> local_res8;
  TSharedPtr<FLinearColor,1> local_28;
  TSharedPtr<FColorInfo,1> local_18;
  
  this_00 = ::operator_new(0x20);
  local_res8.Object = (FColorInfo *)0x0;
  if (this_00 != (FColorInfo *)0x0) {
    local_28.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    local_28.Object = param_1->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res8.Object = FColorInfo::FColorInfo(this_00,&local_28);
  }
  TSharedPtr<FColorInfo,1>::TSharedPtr<FColorInfo,1><FColorInfo>(&local_18,&local_res8);
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_>::Insert
            (&this->Colors,&local_18,param_2);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->RefreshEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveAll @ 14303d780

void __thiscall FColorTheme::RemoveAll(FColorTheme *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<FColorInfo,1>,int>
            ((TSharedPtr<FColorInfo,1> *)(this->Colors).AllocatorInstance.Data,
             (this->Colors).ArrayNum);
  piVar1 = &(this->Colors).ArrayMax;
  (this->Colors).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Colors).AllocatorInstance,0,piVar1);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->RefreshEvent);
  return;
}

// RemoveColor @ 14303d7e0

int __thiscall FColorTheme::RemoveColor(FColorTheme *this,TSharedPtr<FLinearColor,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLinearColor *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  uVar12 = 0xffffffff;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar9 = (this->Colors).AllocatorInstance.Data;
  pFVar11 = pFVar9 + (longlong)(this->Colors).ArrayNum * 0x10;
  for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 0x10) {
    if ((*(longlong *)pFVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if ((FLinearColor *)**(longlong **)pFVar9 == pFVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pFVar9 == (FScriptContainerElement *)0x0) goto LAB_14303d875;
      pFVar11 = (this->Colors).AllocatorInstance.Data;
      iVar6 = (this->Colors).ArrayNum;
      if (pFVar11 == pFVar11 + (longlong)iVar6 * 0x10) goto LAB_14303d8e2;
      pFVar7 = pFVar11;
      goto LAB_14303d8d0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  goto LAB_14303d875;
  while (pFVar7 = pFVar7 + 0x10, pFVar7 != pFVar11 + (longlong)iVar6 * 0x10) {
LAB_14303d8d0:
    if (*(longlong *)pFVar7 == *(longlong *)pFVar9) {
      uVar12 = (uint)((longlong)pFVar7 - (longlong)pFVar11 >> 4);
      uVar10 = ~uVar12;
      uVar8 = 0;
      if ((int)uVar12 < iVar6) {
        uVar8 = uVar10 >> 0x1f;
      }
      if (uVar8 == 0) goto LAB_14303d8e9;
      goto LAB_14303d91c;
    }
  }
LAB_14303d8e2:
  uVar10 = 0;
  uVar12 = 0xffffffff;
LAB_14303d8e9:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
LAB_14303d91c:
  pFVar9 = (this->Colors).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar9 + 8));
  iVar6 = (this->Colors).ArrayNum + uVar10;
  if (iVar6 != 0) {
    memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar6 << 4);
  }
  piVar1 = &(this->Colors).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&(this->Colors).AllocatorInstance,(this->Colors).ArrayNum,
             &(this->Colors).ArrayMax);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->RefreshEvent);
LAB_14303d875:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return uVar12;
}

