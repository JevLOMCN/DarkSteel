// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_> @ 14d5efb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
           *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  TRelativePtr<void,unsigned_int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  TRead<UObject_*> TVar7;
  TRead<UObject_*> TVar8;
  TRead<UObject_*> TVar9;
  TRead<double> TVar10;
  TRead<UObject_*> TVar11;
  TRead<double> TVar12;
  undefined1 auStackY_c8 [32];
  TRead<double> local_88;
  TRead<double> local_80;
  TRead<UObject_*> local_68;
  TRead<UObject_*> local_60;
  TRead<UObject_*> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FEntityAllocationProxy::GetAllocation(param_2);
  iVar1 = param_3->ArrayNum;
  if ((iVar1 < 8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  TVar7 = (TRead<UObject_*>)0x0;
  uVar2 = param_3->DataPtr[7].Offset;
  if (uVar2 == 0xffffffff) {
    local_88 = (TRead<double>)0x0;
  }
  else {
    local_88 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  if ((iVar1 < 7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[6].Offset;
  if (uVar2 == 0xffffffff) {
    local_80 = (TRead<double>)0x0;
  }
  else {
    local_80 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  if ((iVar1 < 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[5].Offset;
  TVar10 = (TRead<double>)TVar7;
  if (uVar2 != 0xffffffff) {
    TVar10 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  if ((iVar1 < 5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[4].Offset;
  TVar12 = (TRead<double>)TVar7;
  if (uVar2 != 0xffffffff) {
    TVar12 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  if ((iVar1 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar3 = param_3->DataPtr;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  TVar11 = TVar7;
  if (pTVar3[3].Offset != 0xffffffff) {
    TVar11 = (TRead<UObject_*>)((ulonglong)pTVar3[3].Offset + (longlong)pFVar6->ComponentData);
  }
  TVar8 = TVar7;
  if (pTVar3[2].Offset != 0xffffffff) {
    TVar8 = (TRead<UObject_*>)((ulonglong)pTVar3[2].Offset + (longlong)pFVar6->ComponentData);
  }
  TVar9 = TVar7;
  if (pTVar3[1].Offset != 0xffffffff) {
    TVar9 = (TRead<UObject_*>)((ulonglong)pTVar3[1].Offset + (longlong)pFVar6->ComponentData);
  }
  if ((param_3->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr->Offset;
  if (uVar2 != 0xffffffff) {
    TVar7 = (TRead<UObject_*>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  local_68 = TVar9;
  local_60 = TVar8;
  local_58 = TVar11;
  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
  ::ForEachAllocation(param_1,pFVar6,TVar7,
                      (TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                       *)&local_68,TVar12,TVar10,local_80,local_88);
  return;
}

// ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_> @ 14d5efe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  TRelativePtr<void,unsigned_int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar7;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar8;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar9;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar10;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar11;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar12;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar13;
  double *local_58;
  
  FEntityAllocationProxy::GetAllocation(param_2);
  iVar1 = param_3->ArrayNum;
  if ((iVar1 < 8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  pTVar7 = (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0;
  uVar2 = param_3->DataPtr[7].Offset;
  if (uVar2 == 0xffffffff) {
    local_58 = (double *)0x0;
  }
  else {
    local_58 = (double *)(pFVar6->ComponentData + uVar2);
  }
  if ((iVar1 < 7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[6].Offset;
  pTVar11 = pTVar7;
  if (uVar2 != 0xffffffff) {
    pTVar11 = (TSharedPtr<FTrackInstancePropertyBindings,1> *)(pFVar6->ComponentData + uVar2);
  }
  if ((iVar1 < 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[5].Offset;
  pTVar10 = pTVar7;
  if (uVar2 != 0xffffffff) {
    pTVar10 = (TSharedPtr<FTrackInstancePropertyBindings,1> *)(pFVar6->ComponentData + uVar2);
  }
  if ((iVar1 < 5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[4].Offset;
  pTVar12 = pTVar7;
  if (uVar2 != 0xffffffff) {
    pTVar12 = (TSharedPtr<FTrackInstancePropertyBindings,1> *)(pFVar6->ComponentData + uVar2);
  }
  if ((iVar1 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar3 = param_3->DataPtr;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  pTVar13 = pTVar7;
  if (pTVar3[3].Offset != 0xffffffff) {
    pTVar13 = (TSharedPtr<FTrackInstancePropertyBindings,1> *)
              (pFVar6->ComponentData + pTVar3[3].Offset);
  }
  pTVar8 = pTVar7;
  if (pTVar3[2].Offset != 0xffffffff) {
    pTVar8 = (TSharedPtr<FTrackInstancePropertyBindings,1> *)
             (pFVar6->ComponentData + pTVar3[2].Offset);
  }
  pTVar9 = pTVar7;
  if (pTVar3[1].Offset != 0xffffffff) {
    pTVar9 = (TSharedPtr<FTrackInstancePropertyBindings,1> *)
             (pFVar6->ComponentData + pTVar3[1].Offset);
  }
  if ((param_3->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr->Offset;
  if (uVar2 != 0xffffffff) {
    pTVar7 = (TSharedPtr<FTrackInstancePropertyBindings,1> *)(pFVar6->ComponentData + uVar2);
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  if (pTVar9 == (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
    if (pTVar8 == (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
      if (pTVar13 != (TSharedPtr<FTrackInstancePropertyBindings,1> *)0x0) {
        TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
        ::ForEachSlow(param_1,pFVar6,(UObject **)pTVar7,pTVar13,(double *)pTVar12,(double *)pTVar10,
                      (double *)pTVar11,local_58);
      }
    }
    else {
      TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
      ::ForEachFast(param_1,pFVar6,(UObject **)pTVar7,(ushort *)pTVar8,(double *)pTVar12,
                    (double *)pTVar10,(double *)pTVar11,local_58);
    }
  }
  else {
    TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
    ::ForEachCustom(param_1,pFVar6,(UObject **)pTVar7,(FCustomPropertyIndex *)pTVar9,
                    (double *)pTVar12,(double *)pTVar10,(double *)pTVar11,local_58);
  }
  return;
}

// ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_> @ 14d5f0200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
           *param_1,FEntityAllocationProxy *param_2,FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          *param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  longlong lVar5;
  longlong lVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  FComponentHeader *pFVar9;
  undefined1 auStackY_268 [32];
  FComponentHeader *local_208;
  EComponentHeaderLockMode local_200;
  uchar *local_1f8;
  FComponentHeader *local_1f0;
  EComponentHeaderLockMode local_1e8;
  uchar *local_1e0;
  FComponentHeader *local_1d8;
  EComponentHeaderLockMode local_1d0;
  uchar *local_1c8;
  FComponentHeader *local_1c0;
  EComponentHeaderLockMode local_1b8;
  uchar *local_1b0;
  FComponentHeader *local_1a8;
  EComponentHeaderLockMode local_1a0;
  uchar *local_198;
  undefined1 local_188 [32];
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  local_168;
  undefined1 local_118 [40];
  longlong local_f0;
  longlong local_d8;
  FComponentHeader *local_c0;
  TRead<double> local_a8;
  TRead<double> local_90;
  TRead<double> local_78;
  TRead<double> local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar1 = *(ushort *)&param_4->field_0x14;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar9 = (FComponentHeader *)0x0;
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_14d5f029d;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar8 = pFVar9;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d5f029d:
  local_1a0 = pFVar4->LockMode;
  local_1a8 = pFVar8;
  if (local_1a0 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_198 = pFVar8->Components;
  uVar1 = *(ushort *)&param_4->field_0x12;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_14d5f0320;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar8 = pFVar9;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d5f0320:
  local_1b8 = pFVar4->LockMode;
  local_1c0 = pFVar8;
  if (local_1b8 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_1b0 = pFVar8->Components;
  uVar1 = *(ushort *)&param_4->field_0x10;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_14d5f03a8;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar8 = pFVar9;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d5f03a8:
  local_1d0 = pFVar4->LockMode;
  local_1d8 = pFVar8;
  if (local_1d0 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_1c8 = pFVar8->Components;
  uVar1 = *(ushort *)&param_4->field_0xe;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_14d5f042b;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar8 = pFVar9;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d5f042b:
  local_1e8 = pFVar4->LockMode;
  local_1f0 = pFVar8;
  if (local_1e8 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_1e0 = pFVar8->Components;
  local_58 = *(undefined8 *)&param_4->field_0x2;
  local_50 = *(undefined4 *)&param_4->field_0xa;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  TUnpackMultiComponentData<TIntegerSequence<int,0,1,2>,UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::LockComponentData(&local_168,pFVar4,(FOptionalReadAccess *)&local_58,param_3);
  uVar1 = *(ushort *)param_4;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_14d5f04e8;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar8 = pFVar9;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d5f04e8:
  local_200 = pFVar4->LockMode;
  local_208 = pFVar8;
  if (local_200 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_1f8 = pFVar8->Components;
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
  ::
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_><UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
            ((TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
              *)local_118,(TComponentLock<UE::MovieScene::TRead<UObject_*>_> *)&local_208,&local_168
             ,(TComponentLock<UE::MovieScene::TRead<double>_> *)&local_1f0,
             (TComponentLock<UE::MovieScene::TRead<double>_> *)&local_1d8,
             (TComponentLock<UE::MovieScene::TRead<double>_> *)&local_1c0,
             (TComponentLock<UE::MovieScene::TRead<double>_> *)&local_1a8);
  if (local_208 != (FComponentHeader *)0x0) {
    LOCK();
    local_208->ScheduledAccessCount = (atomic<int>)((int)local_208->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_200 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_208->ReadWriteLock);
    }
  }
  if (local_168._48_8_ != 0) {
    LOCK();
    *(int *)(local_168._48_8_ + 0x30) = *(int *)(local_168._48_8_ + 0x30) + -1;
    UNLOCK();
    if (local_168._56_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_168._48_8_ + 0x20));
    }
  }
  if (local_168._24_8_ != 0) {
    LOCK();
    *(int *)(local_168._24_8_ + 0x30) = *(int *)(local_168._24_8_ + 0x30) + -1;
    UNLOCK();
    if (local_168._32_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_168._24_8_ + 0x20));
    }
  }
  if (local_168._0_8_ != 0) {
    LOCK();
    *(int *)(local_168._0_8_ + 0x30) = *(int *)(local_168._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_168._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_168._0_8_ + 0x20));
    }
  }
  if (local_1f0 != (FComponentHeader *)0x0) {
    LOCK();
    local_1f0->ScheduledAccessCount = (atomic<int>)((int)local_1f0->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_1e8 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_1f0->ReadWriteLock);
    }
  }
  if (local_1d8 != (FComponentHeader *)0x0) {
    LOCK();
    local_1d8->ScheduledAccessCount = (atomic<int>)((int)local_1d8->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_1d0 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_1d8->ReadWriteLock);
    }
  }
  if (local_1c0 != (FComponentHeader *)0x0) {
    LOCK();
    local_1c0->ScheduledAccessCount = (atomic<int>)((int)local_1c0->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_1b8 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_1c0->ReadWriteLock);
    }
  }
  if (local_1a8 != (FComponentHeader *)0x0) {
    LOCK();
    local_1a8->ScheduledAccessCount = (atomic<int>)((int)local_1a8->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_1a0 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_1a8->ReadWriteLock);
    }
  }
  lVar5 = 0;
  if (local_f0 != 0) {
    lVar5 = local_f0;
  }
  lVar6 = 0;
  if (local_d8 != 0) {
    lVar6 = local_d8;
  }
  if (local_c0 != (FComponentHeader *)0x0) {
    pFVar9 = local_c0;
  }
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  local_188._0_8_ = lVar5;
  local_188._8_8_ = lVar6;
  local_188._16_8_ = pFVar9;
  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
  ::ForEachAllocation(param_1,pFVar4,(TRead<UObject_*>)local_118._16_8_,
                      (TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                       *)local_188,local_a8,local_90,local_78,local_60);
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
              *)local_118);
  return;
}

// ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_> @ 14d5f0720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
           *param_1,FEntityAllocationProxy *param_2,FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_4)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  code *pcVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  ushort *puVar8;
  FCustomPropertyIndex *pFVar9;
  undefined1 auStackY_228 [32];
  FComponentHeader *local_1e8;
  undefined8 local_1e0;
  uchar *local_1d8;
  FComponentHeader *local_1d0;
  undefined8 local_1c8;
  uchar *local_1c0;
  FComponentHeader *local_1b8;
  undefined8 local_1b0;
  uchar *local_1a8;
  FComponentHeader *local_1a0;
  undefined8 local_198;
  uchar *local_190;
  FComponentHeader *local_188;
  EComponentHeaderLockMode local_180;
  uchar *local_178;
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  local_170;
  undefined1 local_128 [40];
  FCustomPropertyIndex *local_100;
  ushort *local_e8;
  FComponentHeader *local_d0;
  double *local_b8;
  double *local_a0;
  double *local_88;
  double *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar1 = *(ushort *)&param_4->field_0x1a;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_1a0 = pFVar5->ComponentHeaders;
  pFVar7 = local_1a0 + pFVar5->NumComponents;
  for (; local_1a0 != pFVar7; local_1a0 = local_1a0 + 1) {
    if ((local_1a0->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_1a0->ReadWriteLock);
      }
      LOCK();
      local_1a0->ScheduledAccessCount = (atomic<int>)((int)local_1a0->ScheduledAccessCount + 1);
      UNLOCK();
      local_190 = local_1a0->Components;
      local_198._0_4_ = EVar2;
      goto LAB_14d5f07a0;
    }
  }
  local_198 = 0;
  local_1a0 = (FComponentHeader *)0x0;
  local_190 = (uchar *)0x0;
LAB_14d5f07a0:
  uVar1 = *(ushort *)&param_4->field_0x16;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_1b8 = pFVar5->ComponentHeaders;
  pFVar7 = local_1b8 + pFVar5->NumComponents;
  for (; local_1b8 != pFVar7; local_1b8 = local_1b8 + 1) {
    if ((local_1b8->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_1b8->ReadWriteLock);
      }
      LOCK();
      local_1b8->ScheduledAccessCount = (atomic<int>)((int)local_1b8->ScheduledAccessCount + 1);
      UNLOCK();
      local_1a8 = local_1b8->Components;
      local_1b0._0_4_ = EVar2;
      goto LAB_14d5f07e3;
    }
  }
  local_1b0 = 0;
  local_1b8 = (FComponentHeader *)0x0;
  local_1a8 = (uchar *)0x0;
LAB_14d5f07e3:
  uVar1 = *(ushort *)&param_4->field_0x12;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_1d0 = pFVar5->ComponentHeaders;
  pFVar7 = local_1d0 + pFVar5->NumComponents;
  for (; local_1d0 != pFVar7; local_1d0 = local_1d0 + 1) {
    if ((local_1d0->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_1d0->ReadWriteLock);
      }
      LOCK();
      local_1d0->ScheduledAccessCount = (atomic<int>)((int)local_1d0->ScheduledAccessCount + 1);
      UNLOCK();
      local_1c0 = local_1d0->Components;
      local_1c8._0_4_ = EVar2;
      goto LAB_14d5f0827;
    }
  }
  local_1c8 = 0;
  local_1d0 = (FComponentHeader *)0x0;
  local_1c0 = (uchar *)0x0;
LAB_14d5f0827:
  uVar1 = *(ushort *)&param_4->field_0xe;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_1e8 = pFVar5->ComponentHeaders;
  pFVar7 = local_1e8 + pFVar5->NumComponents;
  for (; local_1e8 != pFVar7; local_1e8 = local_1e8 + 1) {
    if ((local_1e8->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_1e8->ReadWriteLock);
      }
      LOCK();
      local_1e8->ScheduledAccessCount = (atomic<int>)((int)local_1e8->ScheduledAccessCount + 1);
      UNLOCK();
      local_1d8 = local_1e8->Components;
      local_1e0._0_4_ = EVar2;
      goto LAB_14d5f0873;
    }
  }
  local_1e0 = 0;
  local_1e8 = (FComponentHeader *)0x0;
  local_1d8 = (uchar *)0x0;
LAB_14d5f0873:
  local_50 = *(undefined8 *)&param_4->field_0x2;
  local_48 = *(undefined4 *)&param_4->field_0xa;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  TUnpackMultiComponentData<TIntegerSequence<int,0,1,2>,UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::LockComponentData(&local_170,pFVar5,(FOptionalReadAccess *)&local_50,param_3);
  uVar1 = *(ushort *)param_4;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar7 = pFVar5->ComponentHeaders;
  pFVar6 = pFVar7 + pFVar5->NumComponents;
  for (; pFVar7 != pFVar6; pFVar7 = pFVar7 + 1) {
    if ((pFVar7->ComponentType).Value == uVar1) goto LAB_14d5f0908;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar7 = (FComponentHeader *)0x0;
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14d5f0908:
  local_180 = pFVar5->LockMode;
  local_188 = pFVar7;
  if (local_180 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar7->ReadWriteLock);
  }
  LOCK();
  pFVar7->ScheduledAccessCount = (atomic<int>)((int)pFVar7->ScheduledAccessCount + 1);
  UNLOCK();
  local_178 = pFVar7->Components;
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
  ::
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_><UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
            ((TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
              *)local_128,(TComponentLock<UE::MovieScene::TRead<UObject_*>_> *)&local_188,&local_170
             ,(TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_1e8,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_1d0,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_1b8,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_1a0);
  if (local_188 != (FComponentHeader *)0x0) {
    LOCK();
    local_188->ScheduledAccessCount = (atomic<int>)((int)local_188->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_180 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_188->ReadWriteLock);
    }
  }
  if (local_170._48_8_ != 0) {
    LOCK();
    *(int *)(local_170._48_8_ + 0x30) = *(int *)(local_170._48_8_ + 0x30) + -1;
    UNLOCK();
    if (local_170._56_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_170._48_8_ + 0x20));
    }
  }
  if (local_170._24_8_ != 0) {
    LOCK();
    *(int *)(local_170._24_8_ + 0x30) = *(int *)(local_170._24_8_ + 0x30) + -1;
    UNLOCK();
    if (local_170._32_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_170._24_8_ + 0x20));
    }
  }
  if (local_170._0_8_ != 0) {
    LOCK();
    *(int *)(local_170._0_8_ + 0x30) = *(int *)(local_170._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_170._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_170._0_8_ + 0x20));
    }
  }
  if (local_1e8 != (FComponentHeader *)0x0) {
    LOCK();
    local_1e8->ScheduledAccessCount = (atomic<int>)((int)local_1e8->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_1e0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_1e8->ReadWriteLock);
    }
  }
  if (local_1d0 != (FComponentHeader *)0x0) {
    LOCK();
    local_1d0->ScheduledAccessCount = (atomic<int>)((int)local_1d0->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_1c8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_1d0->ReadWriteLock);
    }
  }
  if (local_1b8 != (FComponentHeader *)0x0) {
    LOCK();
    local_1b8->ScheduledAccessCount = (atomic<int>)((int)local_1b8->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_1b0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_1b8->ReadWriteLock);
    }
  }
  if (local_1a0 != (FComponentHeader *)0x0) {
    LOCK();
    local_1a0->ScheduledAccessCount = (atomic<int>)((int)local_1a0->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_198 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_1a0->ReadWriteLock);
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  pFVar9 = (FCustomPropertyIndex *)0x0;
  if (local_100 != (FCustomPropertyIndex *)0x0) {
    pFVar9 = local_100;
  }
  puVar8 = (ushort *)0x0;
  if (local_e8 != (ushort *)0x0) {
    puVar8 = local_e8;
  }
  pFVar7 = (FComponentHeader *)0x0;
  if (local_d0 != (FComponentHeader *)0x0) {
    pFVar7 = local_d0;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  if (pFVar9 == (FCustomPropertyIndex *)0x0) {
    if (puVar8 == (ushort *)0x0) {
      if (pFVar7 != (FComponentHeader *)0x0) {
        TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
        ::ForEachSlow(param_1,pFVar5,(UObject **)local_128._16_8_,
                      (TSharedPtr<FTrackInstancePropertyBindings,1> *)pFVar7,local_b8,local_a0,
                      local_88,local_70);
      }
    }
    else {
      TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
      ::ForEachFast(param_1,pFVar5,(UObject **)local_128._16_8_,puVar8,local_b8,local_a0,local_88,
                    local_70);
    }
  }
  else {
    TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
    ::ForEachCustom(param_1,pFVar5,(UObject **)local_128._16_8_,pFVar9,local_b8,local_a0,local_88,
                    local_70);
  }
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
              *)local_128);
  return;
}

