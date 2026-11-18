// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_> @ 1468e9e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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
  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
  ::ForEachAllocation(param_1,pFVar6,TVar7,
                      (TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                       *)&local_68,TVar12,TVar10,local_80,local_88);
  return;
}

// ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_> @ 1468ea1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>_>::
ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
           *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
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
  TRead<double> TVar11;
  TRead<UObject_*> TVar12;
  undefined1 auStackY_f8 [32];
  TRead<double> local_98;
  TRead<double> local_90;
  TRead<double> local_88;
  TRead<double> local_80;
  TRead<double> local_78;
  TRead<UObject_*> local_68;
  TRead<UObject_*> local_60;
  TRead<UObject_*> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FEntityAllocationProxy::GetAllocation(param_2);
  iVar1 = param_3->ArrayNum;
  if ((iVar1 < 0xb) &&
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
  TVar9 = (TRead<UObject_*>)0x0;
  uVar2 = param_3->DataPtr[10].Offset;
  if (uVar2 == 0xffffffff) {
    local_98 = (TRead<double>)0x0;
  }
  else {
    local_98 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  if ((iVar1 < 10) &&
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
  uVar2 = param_3->DataPtr[9].Offset;
  if (uVar2 == 0xffffffff) {
    local_90 = (TRead<double>)0x0;
  }
  else {
    local_90 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  if ((iVar1 < 9) &&
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
  uVar2 = param_3->DataPtr[8].Offset;
  if (uVar2 == 0xffffffff) {
    local_88 = (TRead<double>)0x0;
  }
  else {
    local_88 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
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
  uVar2 = param_3->DataPtr[7].Offset;
  if (uVar2 == 0xffffffff) {
    local_80 = (TRead<double>)0x0;
  }
  else {
    local_80 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
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
    local_78 = (TRead<double>)0x0;
  }
  else {
    local_78 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
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
  TVar11 = (TRead<double>)TVar9;
  if (uVar2 != 0xffffffff) {
    TVar11 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
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
  TVar10 = (TRead<double>)TVar9;
  if (uVar2 != 0xffffffff) {
    TVar10 = (TRead<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
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
  TVar12 = TVar9;
  if (pTVar3[3].Offset != 0xffffffff) {
    TVar12 = (TRead<UObject_*>)((ulonglong)pTVar3[3].Offset + (longlong)pFVar6->ComponentData);
  }
  TVar7 = TVar9;
  if (pTVar3[2].Offset != 0xffffffff) {
    TVar7 = (TRead<UObject_*>)((ulonglong)pTVar3[2].Offset + (longlong)pFVar6->ComponentData);
  }
  TVar8 = TVar9;
  if (pTVar3[1].Offset != 0xffffffff) {
    TVar8 = (TRead<UObject_*>)((ulonglong)pTVar3[1].Offset + (longlong)pFVar6->ComponentData);
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
    TVar9 = (TRead<UObject_*>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  local_68 = TVar8;
  local_60 = TVar7;
  local_58 = TVar12;
  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
  ::ForEachAllocation(param_1,pFVar6,TVar9,
                      (TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                       *)&local_68,TVar10,TVar11,local_78,local_80,local_88,local_90,local_98);
  return;
}

// ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_> @ 1468ea630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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
        TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
        ::ForEachSlow(param_1,pFVar6,(UObject **)pTVar7,pTVar13,(double *)pTVar12,(double *)pTVar10,
                      (double *)pTVar11,local_58);
      }
    }
    else {
      TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
      ::ForEachFast(param_1,pFVar6,(UObject **)pTVar7,(ushort *)pTVar8,(double *)pTVar12,
                    (double *)pTVar10,(double *)pTVar11,local_58);
    }
  }
  else {
    TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
    ::ForEachCustom(param_1,pFVar6,(UObject **)pTVar7,(FCustomPropertyIndex *)pTVar9,
                    (double *)pTVar12,(double *)pTVar10,(double *)pTVar11,local_58);
  }
  return;
}

// ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_> @ 1468ea9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>_>::
ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>_const_,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
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
  TReadOptional<double> TVar10;
  TReadOptional<double> TVar11;
  TRead<UObject_*> TVar12;
  undefined1 auStackY_f8 [32];
  TReadOptional<double> local_98;
  TReadOptional<double> local_90;
  TReadOptional<double> local_88;
  TReadOptional<double> local_80;
  TReadOptional<double> local_78;
  TRead<UObject_*> local_68;
  TRead<UObject_*> local_60;
  TRead<UObject_*> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FEntityAllocationProxy::GetAllocation(param_2);
  iVar1 = param_3->ArrayNum;
  if ((iVar1 < 0xb) &&
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
  TVar9 = (TRead<UObject_*>)0x0;
  uVar2 = param_3->DataPtr[10].Offset;
  if (uVar2 == 0xffffffff) {
    local_98 = (TReadOptional<double>)0x0;
  }
  else {
    local_98 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  if ((iVar1 < 10) &&
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
  uVar2 = param_3->DataPtr[9].Offset;
  if (uVar2 == 0xffffffff) {
    local_90 = (TReadOptional<double>)0x0;
  }
  else {
    local_90 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  if ((iVar1 < 9) &&
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
  uVar2 = param_3->DataPtr[8].Offset;
  if (uVar2 == 0xffffffff) {
    local_88 = (TReadOptional<double>)0x0;
  }
  else {
    local_88 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
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
  uVar2 = param_3->DataPtr[7].Offset;
  if (uVar2 == 0xffffffff) {
    local_80 = (TReadOptional<double>)0x0;
  }
  else {
    local_80 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
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
    local_78 = (TReadOptional<double>)0x0;
  }
  else {
    local_78 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
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
  TVar11 = (TReadOptional<double>)TVar9;
  if (uVar2 != 0xffffffff) {
    TVar11 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
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
  TVar10 = (TReadOptional<double>)TVar9;
  if (uVar2 != 0xffffffff) {
    TVar10 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
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
  TVar12 = TVar9;
  if (pTVar3[3].Offset != 0xffffffff) {
    TVar12 = (TRead<UObject_*>)((ulonglong)pTVar3[3].Offset + (longlong)pFVar6->ComponentData);
  }
  TVar7 = TVar9;
  if (pTVar3[2].Offset != 0xffffffff) {
    TVar7 = (TRead<UObject_*>)((ulonglong)pTVar3[2].Offset + (longlong)pFVar6->ComponentData);
  }
  TVar8 = TVar9;
  if (pTVar3[1].Offset != 0xffffffff) {
    TVar8 = (TRead<UObject_*>)((ulonglong)pTVar3[1].Offset + (longlong)pFVar6->ComponentData);
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
    TVar9 = (TRead<UObject_*>)((ulonglong)uVar2 + (longlong)pFVar6->ComponentData);
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  local_68 = TVar8;
  local_60 = TVar7;
  local_58 = TVar12;
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
  ::ForEachAllocation(param_1,pFVar6,TVar9,
                      (TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                       *)&local_68,TVar10,TVar11,local_78,local_80,local_88,local_90,local_98);
  return;
}

// ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_> @ 1468eae40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eaedd;
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
LAB_1468eaedd:
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
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eaf60;
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
LAB_1468eaf60:
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
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eafe8;
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
LAB_1468eafe8:
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
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eb06b;
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
LAB_1468eb06b:
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
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eb128;
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
LAB_1468eb128:
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
  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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

// ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_> @ 1468eb360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>_>::
ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
           *param_1,FEntityAllocationProxy *param_2,FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
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
  undefined1 auStackY_318 [32];
  FComponentHeader *local_298;
  EComponentHeaderLockMode local_290;
  uchar *local_288;
  FComponentHeader *local_280;
  EComponentHeaderLockMode local_278;
  uchar *local_270;
  FComponentHeader *local_268;
  EComponentHeaderLockMode local_260;
  uchar *local_258;
  FComponentHeader *local_250;
  EComponentHeaderLockMode local_248;
  uchar *local_240;
  FComponentHeader *local_238;
  EComponentHeaderLockMode local_230;
  uchar *local_228;
  FComponentHeader *local_220;
  EComponentHeaderLockMode local_218;
  uchar *local_210;
  FComponentHeader *local_208;
  EComponentHeaderLockMode local_200;
  uchar *local_1f8;
  FComponentHeader *local_1f0;
  EComponentHeaderLockMode local_1e8;
  uchar *local_1e0;
  undefined1 local_1d8 [32];
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  local_1b8;
  undefined1 local_168 [40];
  longlong local_140;
  longlong local_128;
  FComponentHeader *local_110;
  TRead<double> local_f8;
  TRead<double> local_e0;
  TRead<double> local_c8;
  TRead<double> local_b0;
  TRead<double> local_98;
  TRead<double> local_80;
  TRead<double> local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  uVar1 = *(ushort *)&param_4->field_0x1a;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar9 = (FComponentHeader *)0x0;
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eb3fd;
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
LAB_1468eb3fd:
  local_1e8 = pFVar4->LockMode;
  local_1f0 = pFVar8;
  if (local_1e8 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_1e0 = pFVar8->Components;
  uVar1 = *(ushort *)&param_4->field_0x18;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eb480;
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
LAB_1468eb480:
  local_200 = pFVar4->LockMode;
  local_208 = pFVar8;
  if (local_200 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_1f8 = pFVar8->Components;
  uVar1 = *(ushort *)&param_4->field_0x16;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eb508;
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
LAB_1468eb508:
  local_218 = pFVar4->LockMode;
  local_220 = pFVar8;
  if (local_218 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_210 = pFVar8->Components;
  uVar1 = *(ushort *)&param_4->field_0x14;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eb58b;
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
LAB_1468eb58b:
  local_230 = pFVar4->LockMode;
  local_238 = pFVar8;
  if (local_230 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_228 = pFVar8->Components;
  uVar1 = *(ushort *)&param_4->field_0x12;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eb60e;
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
LAB_1468eb60e:
  local_248 = pFVar4->LockMode;
  local_250 = pFVar8;
  if (local_248 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_240 = pFVar8->Components;
  uVar1 = *(ushort *)&param_4->field_0x10;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eb698;
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
LAB_1468eb698:
  local_260 = pFVar4->LockMode;
  local_268 = pFVar8;
  if (local_260 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_258 = pFVar8->Components;
  uVar1 = *(ushort *)&param_4->field_0xe;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eb71b;
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
LAB_1468eb71b:
  local_278 = pFVar4->LockMode;
  local_280 = pFVar8;
  if (local_278 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_270 = pFVar8->Components;
  local_58 = *(undefined8 *)&param_4->field_0x2;
  local_50 = *(undefined4 *)&param_4->field_0xa;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  TUnpackMultiComponentData<TIntegerSequence<int,0,1,2>,UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::LockComponentData(&local_1b8,pFVar4,(FOptionalReadAccess *)&local_58,param_3);
  uVar1 = *(ushort *)param_4;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar8 = pFVar4->ComponentHeaders;
  pFVar7 = pFVar8 + pFVar4->NumComponents;
  for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == uVar1) goto LAB_1468eb7d8;
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
LAB_1468eb7d8:
  local_290 = pFVar4->LockMode;
  local_298 = pFVar8;
  if (local_290 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  local_288 = pFVar8->Components;
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
  ::
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_><UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
            ((TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
              *)local_168,(TComponentLock<UE::MovieScene::TRead<UObject_*>_> *)&local_298,&local_1b8
             ,(TComponentLock<UE::MovieScene::TRead<double>_> *)&local_280,
             (TComponentLock<UE::MovieScene::TRead<double>_> *)&local_268,
             (TComponentLock<UE::MovieScene::TRead<double>_> *)&local_250,
             (TComponentLock<UE::MovieScene::TRead<double>_> *)&local_238,
             (TComponentLock<UE::MovieScene::TRead<double>_> *)&local_220,
             (TComponentLock<UE::MovieScene::TRead<double>_> *)&local_208,
             (TComponentLock<UE::MovieScene::TRead<double>_> *)&local_1f0);
  if (local_298 != (FComponentHeader *)0x0) {
    LOCK();
    local_298->ScheduledAccessCount = (atomic<int>)((int)local_298->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_290 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_298->ReadWriteLock);
    }
  }
  if (local_1b8._48_8_ != 0) {
    LOCK();
    *(int *)(local_1b8._48_8_ + 0x30) = *(int *)(local_1b8._48_8_ + 0x30) + -1;
    UNLOCK();
    if (local_1b8._56_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1b8._48_8_ + 0x20));
    }
  }
  if (local_1b8._24_8_ != 0) {
    LOCK();
    *(int *)(local_1b8._24_8_ + 0x30) = *(int *)(local_1b8._24_8_ + 0x30) + -1;
    UNLOCK();
    if (local_1b8._32_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1b8._24_8_ + 0x20));
    }
  }
  if (local_1b8._0_8_ != 0) {
    LOCK();
    *(int *)(local_1b8._0_8_ + 0x30) = *(int *)(local_1b8._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_1b8._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1b8._0_8_ + 0x20));
    }
  }
  if (local_280 != (FComponentHeader *)0x0) {
    LOCK();
    local_280->ScheduledAccessCount = (atomic<int>)((int)local_280->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_278 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_280->ReadWriteLock);
    }
  }
  if (local_268 != (FComponentHeader *)0x0) {
    LOCK();
    local_268->ScheduledAccessCount = (atomic<int>)((int)local_268->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_260 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_268->ReadWriteLock);
    }
  }
  if (local_250 != (FComponentHeader *)0x0) {
    LOCK();
    local_250->ScheduledAccessCount = (atomic<int>)((int)local_250->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_248 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_250->ReadWriteLock);
    }
  }
  if (local_238 != (FComponentHeader *)0x0) {
    LOCK();
    local_238->ScheduledAccessCount = (atomic<int>)((int)local_238->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_230 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_238->ReadWriteLock);
    }
  }
  if (local_220 != (FComponentHeader *)0x0) {
    LOCK();
    local_220->ScheduledAccessCount = (atomic<int>)((int)local_220->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_218 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_220->ReadWriteLock);
    }
  }
  if (local_208 != (FComponentHeader *)0x0) {
    LOCK();
    local_208->ScheduledAccessCount = (atomic<int>)((int)local_208->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_200 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_208->ReadWriteLock);
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
  lVar5 = 0;
  if (local_140 != 0) {
    lVar5 = local_140;
  }
  lVar6 = 0;
  if (local_128 != 0) {
    lVar6 = local_128;
  }
  if (local_110 != (FComponentHeader *)0x0) {
    pFVar9 = local_110;
  }
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_2);
  local_1d8._0_8_ = lVar5;
  local_1d8._8_8_ = lVar6;
  local_1d8._16_8_ = pFVar9;
  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
  ::ForEachAllocation(param_1,pFVar4,(TRead<UObject_*>)local_168._16_8_,
                      (TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                       *)local_1d8,local_f8,local_e0,local_c8,local_b0,local_98,local_80,local_68);
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
              *)local_168);
  return;
}

// ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_> @ 1468ebab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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
      goto LAB_1468ebb30;
    }
  }
  local_198 = 0;
  local_1a0 = (FComponentHeader *)0x0;
  local_190 = (uchar *)0x0;
LAB_1468ebb30:
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
      goto LAB_1468ebb73;
    }
  }
  local_1b0 = 0;
  local_1b8 = (FComponentHeader *)0x0;
  local_1a8 = (uchar *)0x0;
LAB_1468ebb73:
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
      goto LAB_1468ebbb7;
    }
  }
  local_1c8 = 0;
  local_1d0 = (FComponentHeader *)0x0;
  local_1c0 = (uchar *)0x0;
LAB_1468ebbb7:
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
      goto LAB_1468ebc03;
    }
  }
  local_1e0 = 0;
  local_1e8 = (FComponentHeader *)0x0;
  local_1d8 = (uchar *)0x0;
LAB_1468ebc03:
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
    if ((pFVar7->ComponentType).Value == uVar1) goto LAB_1468ebc98;
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
LAB_1468ebc98:
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
        TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
        ::ForEachSlow(param_1,pFVar5,(UObject **)local_128._16_8_,
                      (TSharedPtr<FTrackInstancePropertyBindings,1> *)pFVar7,local_b8,local_a0,
                      local_88,local_70);
      }
    }
    else {
      TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
      ::ForEachFast(param_1,pFVar5,(UObject **)local_128._16_8_,puVar8,local_b8,local_a0,local_88,
                    local_70);
    }
  }
  else {
    TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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

// ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_> @ 1468ec000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>_>::
ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
           *param_1,FEntityAllocationProxy *param_2,FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_4)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  code *pcVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  undefined1 auStackY_308 [32];
  FComponentHeader *local_2a8;
  undefined8 local_2a0;
  uchar *local_298;
  FComponentHeader *local_290;
  undefined8 local_288;
  uchar *local_280;
  FComponentHeader *local_278;
  undefined8 local_270;
  uchar *local_268;
  FComponentHeader *local_260;
  undefined8 local_258;
  uchar *local_250;
  FComponentHeader *local_248;
  undefined8 local_240;
  uchar *local_238;
  FComponentHeader *local_230;
  undefined8 local_228;
  uchar *local_220;
  FComponentHeader *local_218;
  undefined8 local_210;
  uchar *local_208;
  longlong local_200;
  longlong lStack_1f8;
  FComponentHeader *local_1f0;
  FComponentHeader *local_1e8;
  EComponentHeaderLockMode local_1e0;
  uchar *local_1d8;
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [40];
  longlong local_180;
  longlong local_168;
  FComponentHeader *local_150;
  TReadOptional<double> local_138;
  TReadOptional<double> local_120;
  TReadOptional<double> local_108;
  TReadOptional<double> local_f0;
  TReadOptional<double> local_d8;
  TReadOptional<double> local_c0;
  TReadOptional<double> local_a8;
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  local_98;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_308;
  uVar1 = *(ushort *)&param_4->field_0x26;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_218 = pFVar5->ComponentHeaders;
  pFVar7 = local_218 + pFVar5->NumComponents;
  for (; local_218 != pFVar7; local_218 = local_218 + 1) {
    if ((local_218->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_218->ReadWriteLock);
      }
      LOCK();
      local_218->ScheduledAccessCount = (atomic<int>)((int)local_218->ScheduledAccessCount + 1);
      UNLOCK();
      local_208 = local_218->Components;
      local_210._0_4_ = EVar2;
      goto LAB_1468ec080;
    }
  }
  local_210 = 0;
  local_218 = (FComponentHeader *)0x0;
  local_208 = (uchar *)0x0;
LAB_1468ec080:
  uVar1 = *(ushort *)&param_4->field_0x22;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_230 = pFVar5->ComponentHeaders;
  pFVar7 = local_230 + pFVar5->NumComponents;
  for (; local_230 != pFVar7; local_230 = local_230 + 1) {
    if ((local_230->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_230->ReadWriteLock);
      }
      LOCK();
      local_230->ScheduledAccessCount = (atomic<int>)((int)local_230->ScheduledAccessCount + 1);
      UNLOCK();
      local_220 = local_230->Components;
      local_228._0_4_ = EVar2;
      goto LAB_1468ec0c1;
    }
  }
  local_228 = 0;
  local_230 = (FComponentHeader *)0x0;
  local_220 = (uchar *)0x0;
LAB_1468ec0c1:
  uVar1 = *(ushort *)&param_4->field_0x1e;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_248 = pFVar5->ComponentHeaders;
  pFVar7 = local_248 + pFVar5->NumComponents;
  for (; local_248 != pFVar7; local_248 = local_248 + 1) {
    if ((local_248->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_248->ReadWriteLock);
      }
      LOCK();
      local_248->ScheduledAccessCount = (atomic<int>)((int)local_248->ScheduledAccessCount + 1);
      UNLOCK();
      local_238 = local_248->Components;
      local_240._0_4_ = EVar2;
      goto LAB_1468ec102;
    }
  }
  local_240 = 0;
  local_248 = (FComponentHeader *)0x0;
  local_238 = (uchar *)0x0;
LAB_1468ec102:
  uVar1 = *(ushort *)&param_4->field_0x1a;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_260 = pFVar5->ComponentHeaders;
  pFVar7 = local_260 + pFVar5->NumComponents;
  for (; local_260 != pFVar7; local_260 = local_260 + 1) {
    if ((local_260->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_260->ReadWriteLock);
      }
      LOCK();
      local_260->ScheduledAccessCount = (atomic<int>)((int)local_260->ScheduledAccessCount + 1);
      UNLOCK();
      local_250 = local_260->Components;
      local_258._0_4_ = EVar2;
      goto LAB_1468ec143;
    }
  }
  local_258 = 0;
  local_260 = (FComponentHeader *)0x0;
  local_250 = (uchar *)0x0;
LAB_1468ec143:
  uVar1 = *(ushort *)&param_4->field_0x16;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_278 = pFVar5->ComponentHeaders;
  pFVar7 = local_278 + pFVar5->NumComponents;
  for (; local_278 != pFVar7; local_278 = local_278 + 1) {
    if ((local_278->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_278->ReadWriteLock);
      }
      LOCK();
      local_278->ScheduledAccessCount = (atomic<int>)((int)local_278->ScheduledAccessCount + 1);
      UNLOCK();
      local_268 = local_278->Components;
      local_270._0_4_ = EVar2;
      goto LAB_1468ec184;
    }
  }
  local_270 = 0;
  local_278 = (FComponentHeader *)0x0;
  local_268 = (uchar *)0x0;
LAB_1468ec184:
  uVar1 = *(ushort *)&param_4->field_0x12;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_290 = pFVar5->ComponentHeaders;
  pFVar7 = local_290 + pFVar5->NumComponents;
  for (; local_290 != pFVar7; local_290 = local_290 + 1) {
    if ((local_290->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_290->ReadWriteLock);
      }
      LOCK();
      local_290->ScheduledAccessCount = (atomic<int>)((int)local_290->ScheduledAccessCount + 1);
      UNLOCK();
      local_280 = local_290->Components;
      local_288._0_4_ = EVar2;
      goto LAB_1468ec1c6;
    }
  }
  local_288 = 0;
  local_290 = (FComponentHeader *)0x0;
  local_280 = (uchar *)0x0;
LAB_1468ec1c6:
  uVar1 = *(ushort *)&param_4->field_0xe;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_2a8 = pFVar5->ComponentHeaders;
  pFVar7 = local_2a8 + pFVar5->NumComponents;
  for (; local_2a8 != pFVar7; local_2a8 = local_2a8 + 1) {
    if ((local_2a8->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_2a8->ReadWriteLock);
      }
      LOCK();
      local_2a8->ScheduledAccessCount = (atomic<int>)((int)local_2a8->ScheduledAccessCount + 1);
      UNLOCK();
      local_298 = local_2a8->Components;
      local_2a0._0_4_ = EVar2;
      goto LAB_1468ec213;
    }
  }
  local_2a0 = 0;
  local_2a8 = (FComponentHeader *)0x0;
  local_298 = (uchar *)0x0;
LAB_1468ec213:
  local_50 = *(undefined8 *)&param_4->field_0x2;
  local_48 = *(undefined4 *)&param_4->field_0xa;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  TUnpackMultiComponentData<TIntegerSequence<int,0,1,2>,UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::LockComponentData(&local_98,pFVar5,(FOptionalReadAccess *)&local_50,param_3);
  uVar1 = *(ushort *)param_4;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar7 = pFVar5->ComponentHeaders;
  pFVar6 = pFVar7 + pFVar5->NumComponents;
  for (; pFVar7 != pFVar6; pFVar7 = pFVar7 + 1) {
    if ((pFVar7->ComponentType).Value == uVar1) goto LAB_1468ec2a8;
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
LAB_1468ec2a8:
  local_1e0 = pFVar5->LockMode;
  local_1e8 = pFVar7;
  if (local_1e0 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar7->ReadWriteLock);
  }
  LOCK();
  pFVar7->ScheduledAccessCount = (atomic<int>)((int)pFVar7->ScheduledAccessCount + 1);
  UNLOCK();
  local_1d8 = pFVar7->Components;
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
  ::
  TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_><UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
            ((TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
              *)local_1a8,(TComponentLock<UE::MovieScene::TRead<UObject_*>_> *)&local_1e8,&local_98,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_2a8,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_290,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_278,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_260,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_248,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_230,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_218);
  if (local_1e8 != (FComponentHeader *)0x0) {
    LOCK();
    local_1e8->ScheduledAccessCount = (atomic<int>)((int)local_1e8->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_1e0 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_1e8->ReadWriteLock);
    }
  }
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
              *)&local_98);
  if (local_2a8 != (FComponentHeader *)0x0) {
    LOCK();
    local_2a8->ScheduledAccessCount = (atomic<int>)((int)local_2a8->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_2a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_2a8->ReadWriteLock);
    }
  }
  if (local_290 != (FComponentHeader *)0x0) {
    LOCK();
    local_290->ScheduledAccessCount = (atomic<int>)((int)local_290->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_288 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_290->ReadWriteLock);
    }
  }
  if (local_278 != (FComponentHeader *)0x0) {
    LOCK();
    local_278->ScheduledAccessCount = (atomic<int>)((int)local_278->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_270 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_278->ReadWriteLock);
    }
  }
  if (local_260 != (FComponentHeader *)0x0) {
    LOCK();
    local_260->ScheduledAccessCount = (atomic<int>)((int)local_260->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_258 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_260->ReadWriteLock);
    }
  }
  if (local_248 != (FComponentHeader *)0x0) {
    LOCK();
    local_248->ScheduledAccessCount = (atomic<int>)((int)local_248->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_240 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_248->ReadWriteLock);
    }
  }
  if (local_230 != (FComponentHeader *)0x0) {
    LOCK();
    local_230->ScheduledAccessCount = (atomic<int>)((int)local_230->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_228 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_230->ReadWriteLock);
    }
  }
  if (local_218 != (FComponentHeader *)0x0) {
    LOCK();
    local_218->ScheduledAccessCount = (atomic<int>)((int)local_218->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_210 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_218->ReadWriteLock);
    }
  }
  local_200 = 0;
  if (local_180 != 0) {
    local_200 = local_180;
  }
  lStack_1f8 = 0;
  if (local_168 != 0) {
    lStack_1f8 = local_168;
  }
  local_1f0 = (FComponentHeader *)0x0;
  if (local_150 != (FComponentHeader *)0x0) {
    local_1f0 = local_150;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_1c8._0_8_ = local_200;
  local_1c8._8_8_ = lStack_1f8;
  local_1c8._16_8_ = local_1f0;
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
  ::ForEachAllocation(param_1,pFVar5,(TRead<UObject_*>)local_1a8._16_8_,
                      (TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                       *)local_1c8,local_138,local_120,local_108,local_f0,local_d8,local_c0,local_a8
                     );
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
              *)local_1a8);
  return;
}

// ForEachEntityImpl<UE::MovieScene::TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_> @ 1468ec660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
ForEachEntityImpl<UE::MovieScene::TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
          (TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
           *param_1,FEntityAllocationProxy *param_2,FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
          *param_4)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  int iVar3;
  UWidget *pUVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FEntityAllocation *pFVar8;
  FName FVar9;
  UClass *pUVar10;
  UMaterialInterface *pUVar11;
  FComponentHeader *pFVar12;
  uchar *puVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  FComponentHeader *pFVar16;
  FName *pFVar17;
  EComponentHeaderLockMode EVar18;
  int local_res20;
  FName local_e8;
  FName local_e0 [2];
  EComponentHeaderLockMode local_d0;
  EComponentHeaderLockMode local_c8;
  FName *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  uchar *local_a0;
  FName local_98;
  ulonglong local_88;
  uchar *local_80;
  FString local_78;
  FString local_68;
  UWidget *local_58;
  FWidgetMaterialHandle local_50 [2];
  
  uVar1 = *(ushort *)&param_4->field_0x4;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar16 = pFVar8->ComponentHeaders;
  pFVar14 = pFVar16 + pFVar8->NumComponents;
  for (; pFVar16 != pFVar14; pFVar16 = pFVar16 + 1) {
    if ((pFVar16->ComponentType).Value == uVar1) {
      if (pFVar16 != (FComponentHeader *)0x0) goto LAB_1468ec6ec;
      goto LAB_1468ec6c6;
    }
  }
  pFVar16 = (FComponentHeader *)0x0;
LAB_1468ec6c6:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1468ec6ec:
  local_c8 = pFVar8->LockMode;
  if (local_c8 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
  }
  LOCK();
  pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + 1);
  UNLOCK();
  local_a0 = pFVar16->Components;
  uVar1 = *(ushort *)&param_4->field_0x2;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar14 = pFVar8->ComponentHeaders;
  pFVar15 = pFVar14 + pFVar8->NumComponents;
  for (; pFVar14 != pFVar15; pFVar14 = pFVar14 + 1) {
    if ((pFVar14->ComponentType).Value == uVar1) {
      if (pFVar14 != (FComponentHeader *)0x0) goto LAB_1468ec76e;
      goto LAB_1468ec748;
    }
  }
  pFVar14 = (FComponentHeader *)0x0;
LAB_1468ec748:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1468ec76e:
  EVar2 = pFVar8->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar17 = (FName *)pFVar14->Components;
  uVar1 = *(ushort *)param_4;
  local_c0 = pFVar17;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar15 = pFVar8->ComponentHeaders;
  pFVar12 = pFVar15 + pFVar8->NumComponents;
  for (; pFVar15 != pFVar12; pFVar15 = pFVar15 + 1) {
    if ((pFVar15->ComponentType).Value == uVar1) {
      if (pFVar15 != (FComponentHeader *)0x0) goto LAB_1468ec7ed;
      goto LAB_1468ec7c7;
    }
  }
  pFVar15 = (FComponentHeader *)0x0;
LAB_1468ec7c7:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1468ec7ed:
  EVar18 = pFVar8->LockMode;
  local_d0 = EVar18;
  if (EVar18 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
  UNLOCK();
  puVar13 = pFVar15->Components;
  local_80 = puVar13;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  local_res20 = 0;
  local_a8 = 0;
  local_88 = (ulonglong)pFVar8->Size;
  if (local_88 != 0) {
    do {
      pUVar4 = *(UWidget **)(puVar13 + local_a8 * 8);
      FVar9 = (FName)FObjectComponent::GetObject
                               ((FObjectComponent *)(local_a0 + (longlong)local_res20 * 0x10));
      if (FVar9 == (FName)0x0) {
LAB_1468ec898:
        local_e8.ComparisonIndex.Value = 0;
        local_e8.Number = 0;
      }
      else {
        local_e8 = FVar9;
        pUVar10 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        iVar3 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)((longlong)FVar9 + 0x10) + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)FVar9 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar10->_padding_)) goto LAB_1468ec898;
      }
      FVar9 = *pFVar17;
      FVar6 = pFVar17[1];
      if (pUVar4 == (UWidget *)0x0) {
LAB_1468ec9b6:
        local_58 = (UWidget *)0x0;
        local_50[0].TypeName = FVar9;
        local_50[0].Data = (void *)FVar6;
        if ((pUVar4 != (UWidget *)0x0) && (2 < (byte)LogUMG._0_1_)) {
          local_e0[0] = *(FName *)(pUVar4->_padding_ + 0x18);
          ::FName::ToString(local_e0,&local_68);
          local_e8 = (FName)pUVar4->_padding_;
          ::FName::ToString(&local_e8,&local_78);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pUVar10 = Z_Construct_UClass_UWidget_NoRegister();
        iVar3 = (int)pUVar10->_padding_;
        if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar10->_padding_)) goto LAB_1468ec9b6;
        local_b8 = 0;
        local_e0[0] = FVar6;
        local_98 = FVar9;
        local_58 = pUVar4;
        local_50[0].TypeName = FVar9;
        local_50[0].Data = (void *)FVar6;
        if (((FVar9 == (FName)0x0) || (FVar6 == (FName)0x0)) ||
           (pUVar11 = FWidgetMaterialHandle::GetMaterial(local_50),
           pUVar11 == (UMaterialInterface *)0x0)) {
LAB_1468eca97:
          local_b0 = 0;
          if ((local_98 != (FName)0x0) && (local_e0[0] != (FName)0x0)) {
            FWidgetMaterialHandle::SetMaterial(local_50,(UMaterialInterface *)local_e8,pUVar4);
          }
        }
        else {
          pUVar10 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar3 = (int)pUVar10->_padding_;
          if (((*(int *)(pUVar11->_padding_ + 0x38) < iVar3) ||
              ((longlong *)
               *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
               &pUVar10->_padding_)) ||
             ((FVar9.ComparisonIndex.Value = pUVar11[1].SubsurfaceProfiles.ArrayNum,
              FVar9.Number = pUVar11[1].SubsurfaceProfiles.ArrayMax, FVar9 == (FName)0x0 ||
              (FVar9 != local_e8)))) goto LAB_1468eca97;
        }
      }
      local_res20 = local_res20 + 1;
      pFVar17 = local_c0 + 2;
      local_a8 = local_a8 + 1;
      puVar13 = local_80;
      EVar18 = local_d0;
      local_c0 = pFVar17;
    } while (local_a8 < (longlong)local_88);
  }
  LOCK();
  pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_c8 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
  }
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar18 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  return;
}

// ForEachEntityImpl<UE::MovieScene::TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_> @ 1468ecba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
ForEachEntityImpl<UE::MovieScene::TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
          (TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
           *param_1,FEntityAllocationProxy *param_2,FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
          *param_4)

{
  int *piVar1;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TVar2;
  ushort uVar3;
  EComponentHeaderLockMode EVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uchar *puVar7;
  longlong lVar8;
  uchar *puVar9;
  bool bVar10;
  int iVar11;
  FEntityAllocation *pFVar12;
  FComponentHeader *pFVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  longlong lVar16;
  int iVar17;
  FComponentHeader *pFVar18;
  FMovieSceneEntityID *pFVar19;
  ushort local_a8 [4];
  int local_a0;
  EComponentHeaderLockMode local_9c;
  FComponentHeader *local_98;
  FComponentHeader *local_90;
  uchar *local_88;
  longlong local_80;
  uchar *local_78;
  longlong local_70;
  ulonglong local_68;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_> local_60;
  
  TVar2 = *(TComponentTypeID<UE::MovieScene::FObjectComponent> *)&param_4->field_0x6;
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  FEntityAllocation::WriteComponents<UE::MovieScene::FObjectComponent>
            (pFVar12,&local_60,TVar2,param_3);
  uVar3 = *(ushort *)&param_4->field_0x4;
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar14 = (FComponentHeader *)0x0;
  local_98 = pFVar12->ComponentHeaders;
  pFVar18 = local_98 + pFVar12->NumComponents;
  for (; local_98 != pFVar18; local_98 = local_98 + 1) {
    pFVar13 = local_98;
    if ((local_98->ComponentType).Value == uVar3) goto LAB_1468ecc56;
  }
  local_98 = (FComponentHeader *)0x0;
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar13 = pFVar14;
  if (bVar10) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1468ecc56:
  local_9c = pFVar12->LockMode;
  if (local_9c == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
  }
  LOCK();
  pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
  UNLOCK();
  local_78 = pFVar13->Components;
  uVar3 = *(ushort *)&param_4->field_0x2;
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  local_90 = pFVar12->ComponentHeaders;
  pFVar18 = local_90 + pFVar12->NumComponents;
  for (; local_90 != pFVar18; local_90 = local_90 + 1) {
    pFVar15 = local_90;
    if ((local_90->ComponentType).Value == uVar3) goto LAB_1468ecce6;
  }
  local_90 = (FComponentHeader *)0x0;
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar15 = pFVar14;
  if (bVar10) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1468ecce6:
  EVar4 = pFVar12->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
  UNLOCK();
  local_88 = pFVar15->Components;
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  lVar16 = local_60._0_8_;
  local_70 = local_60._0_8_;
  pFVar19 = pFVar12->EntityIDs;
  local_a0 = local_60._16_4_;
  local_80 = local_60._24_8_;
  local_68 = local_60._8_8_;
  local_60._0_8_ = 0;
  local_60._24_8_ = 0;
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  puVar9 = local_78;
  lVar8 = local_80;
  puVar7 = local_88;
  uVar3 = pFVar12->Size;
  pFVar18 = pFVar14;
  if ((ulonglong)uVar3 != 0) {
    do {
      local_a8[0] = pFVar19->Value;
      iVar17 = (int)pFVar18;
      bVar10 = TInitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
               ::InitializeBoundMaterial
                         (*(UObject **)(puVar7 + (longlong)pFVar14 * 8),
                          (FWidgetMaterialHandle *)(puVar9 + (longlong)iVar17 * 0x10),
                          (FObjectComponent *)(lVar8 + (longlong)iVar17 * 0x10));
      if (bVar10) {
        pFVar5 = (param_1->ReboundMaterials).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_a8) &&
            ((FScriptContainerElement *)local_a8 <
             pFVar5 + (longlong)(param_1->ReboundMaterials).ArrayMax * 2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (param_1->ReboundMaterials).ArrayNum;
        piVar1 = &(param_1->ReboundMaterials).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&(param_1->ReboundMaterials).AllocatorInstance,piVar1);
        }
        (param_1->ReboundMaterials).ArrayNum = iVar11 + 1;
        *(ushort *)((param_1->ReboundMaterials).AllocatorInstance.Data + (longlong)iVar11 * 2) =
             local_a8[0];
      }
      pFVar14 = (FComponentHeader *)((longlong)&pFVar14->_padding_ + 1);
      pFVar19 = pFVar19 + 1;
      pFVar13 = local_98;
      local_60._8_8_ = local_68;
      pFVar15 = local_90;
      lVar16 = local_70;
      pFVar18 = (FComponentHeader *)(ulonglong)(iVar17 + 1);
    } while ((longlong)pFVar14 < (longlong)(ulonglong)uVar3);
  }
  if (lVar16 != 0) {
    if ((ulonglong)local_60._8_8_ < *(ulonglong *)(lVar16 + 0x28)) {
      local_60._8_8_ = *(ulonglong *)(lVar16 + 0x28);
    }
    *(undefined8 *)(lVar16 + 0x28) = local_60._8_8_;
    LOCK();
    *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + -1;
    UNLOCK();
    if (local_a0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar16 + 0x20));
    }
  }
  LOCK();
  pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_9c == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  return;
}

