// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 16

// FNavigationDirtyAreasController @ 146d73cd0

FNavigationDirtyAreasController * __thiscall
FNavigationDirtyAreasController::FNavigationDirtyAreasController
          (FNavigationDirtyAreasController *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  this->DirtyAreasUpdateFreq = 60.0;
  this->DirtyAreasUpdateTime = 0.0;
  (this->DirtyAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar2 = &this->field_0x18;
  this->bCanAccumulateDirtyAreas = '\x01';
  this->bNavigationBuildLocked = '\0';
  this->bCanReportOversizedDirtyArea = '\0';
  this->bDirtyAreasReportedWhileAccumulationLocked = '\0';
  this->bUseWorldPartitionedDynamicMode = '\0';
  (this->DirtyAreas).ArrayNum = 0;
  (this->DirtyAreas).ArrayMax = 0;
  this->DirtyAreaWarningSizeThreshold = -1.0;
  *(undefined8 *)&this->ShouldSkipObjectPredicate = 0;
  *(undefined8 *)&(this->ShouldSkipObjectPredicate).field_0x8 = 0;
  *(undefined4 *)&(this->ShouldSkipObjectPredicate).field_0x10 = 0;
  return this;
}

// operator() @ 146d7b610

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
`FNavigationDirtyAreasController::AddAreas'::__l48::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UObject *this_00;
  void *_Src;
  UObject *this_01;
  UClass *pUVar2;
  ForAnyElementType FVar3;
  UObject *this_02;
  FScriptContainerElement *local_res20;
  FWeakObjectPtr local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if (*(longlong *)this == 0) {
    local_res20 = (FScriptContainerElement *)0x0;
    this_01 = (UObject *)0x0;
    this_02 = (UObject *)0x0;
  }
  else {
    local_88 = *(FWeakObjectPtr *)(*(longlong *)this + 0x58);
    this_01 = FWeakObjectPtr::Get(&local_88);
    local_res20 = (FScriptContainerElement *)0x0;
    this_02 = this_01;
    if (this_01 != (UObject *)0x0) {
      this_00 = *(UObject **)&this_01->field_0x20;
      if (this_00 != (UObject *)0x0) {
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::BoxLogfImpl
                    (this_00,(FName *)&LogNavigationDirtyArea.field_0x4,Log,
                     (TBox<double> *)((longlong)this + 0x28),&UE::Math::TMatrix<double>::Identity,
                     &FColor::Red,false,L"");
        }
        if (*(longlong *)&this_00->field_0x10 == 0) {
          ::FString::FString(&local_68,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,&local_68,(UObject *)0x0,None);
        }
        ::FString::PrintfImpl(&local_78,L" | Element\'s owner: %s");
        local_res20 = local_78.Data.AllocatorInstance.Data;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      pUVar2 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) goto LAB_146d7b7b6;
    }
  }
  do {
    do {
      FVar3.Data = (FScriptContainerElement *)0x0;
      if (this_01 == (UObject *)0x0) goto LAB_146d7b8c8;
      this_01 = *(UObject **)&this_01->field_0x20;
    } while (this_01 == (UObject *)0x0);
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
  } while ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar2->_padding_));
LAB_146d7b7b6:
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (*(int *)&((UObjectBaseUtility *)(this_01 + 0xc))->field_0x10 < 2) {
    local_80.ComparisonIndex.Value = *(uint *)&((UObjectBaseUtility *)this_01)->field_0x18;
    local_80.Number = *(uint *)&((UObjectBaseUtility *)this_01)->field_0x1c;
    ::FName::ToString(&local_80,&local_78);
  }
  else {
    iVar1 = *(int *)&((UObjectBaseUtility *)(this_01 + 0xc))->field_0x10;
    _Src = *(void **)&((UObjectBaseUtility *)(this_01 + 0xc))->field_0x8;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_78,iVar1,&local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  if (*(longlong *)&((UObjectBaseUtility *)this_01)->field_0x10 == 0) {
    ::FString::FString(&local_58,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_58,(UObject *)0x0,None);
  }
  ::FString::PrintfImpl(&local_68,L"| Actor: %s | Actor label: %s");
  FVar3.Data = local_68.Data.AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_146d7b8c8:
  ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f");
  if ((this_02 == (UObject *)0x0) ||
     (*(longlong *)&((UObjectBaseUtility *)this_02)->field_0x10 == 0)) {
    ::FString::FString(&local_58,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_02,&local_58,(UObject *)0x0,None);
  }
  ::FName::ToString((FName *)((longlong)this + 0x10),&local_78);
  ::FString::PrintfImpl(__return_storage_ptr__,L"From: %s | Object: %s %s | Bounds: %s %s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (local_res20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_res20);
  }
  return __return_storage_ptr__;
}

// AddArea @ 146d7eed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavigationDirtyAreasController::AddArea
          (FNavigationDirtyAreasController *this,TBox<double> *param_1,int param_2,
          TFunction<UObject_*___cdecl(void)> *param_3,FNavigationDirtyElement *param_4,
          FName *param_5)

{
  longlong *plVar1;
  undefined1 auStackY_b8 [32];
  TArrayView<UE::Math::TBox<double>_const_,int> local_88;
  undefined1 local_78 [40];
  longlong *local_50;
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_48._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  local_48._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
  local_48._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  dStack_30 = (param_1->Max).field0_0x0._s_0.X;
  local_88.ArrayNum = 1;
  local_28 = (param_1->Max).field0_0x0._s_0.Y;
  dStack_20 = (param_1->Max).field0_0x0._s_0.Z;
  local_18._0_1_ = param_1->IsValid;
  local_18._1_1_ = param_1->Pad[0];
  local_18._2_1_ = param_1->Pad[1];
  local_18._3_1_ = param_1->Pad[2];
  local_18._4_1_ = param_1->Pad[3];
  local_18._5_1_ = param_1->Pad[4];
  local_18._6_1_ = param_1->Pad[5];
  local_18._7_1_ = param_1->Pad[6];
  local_88.DataPtr = (TBox<double> *)&local_48;
  local_78._0_8_ = 0;
  local_50 = (longlong *)0x0;
  AddAreas(this,&local_88,(ENavigationDirtyFlag)param_2,
           (TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *)local_78,
           param_4,param_5);
  if (local_78._0_8_ != 0) {
    plVar1 = (longlong *)(local_78 + 0x10);
    if (local_50 != (longlong *)0x0) {
      plVar1 = local_50;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// AddArea @ 146d7efa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavigationDirtyAreasController::AddArea
          (FNavigationDirtyAreasController *this,TBox<double> *param_1,ENavigationDirtyFlag param_2,
          TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *param_3,
          FNavigationDirtyElement *param_4,FName *param_5)

{
  undefined1 auStackY_88 [32];
  TArrayView<UE::Math::TBox<double>_const_,int> local_58;
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_48._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  local_48._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
  local_48._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  dStack_30 = (param_1->Max).field0_0x0._s_0.X;
  local_58.ArrayNum = 1;
  local_28 = (param_1->Max).field0_0x0._s_0.Y;
  dStack_20 = (param_1->Max).field0_0x0._s_0.Z;
  local_18._0_1_ = param_1->IsValid;
  local_18._1_1_ = param_1->Pad[0];
  local_18._2_1_ = param_1->Pad[1];
  local_18._3_1_ = param_1->Pad[2];
  local_18._4_1_ = param_1->Pad[3];
  local_18._5_1_ = param_1->Pad[4];
  local_18._6_1_ = param_1->Pad[5];
  local_18._7_1_ = param_1->Pad[6];
  local_58.DataPtr = (TBox<double> *)&local_48;
  AddAreas(this,&local_58,param_2,param_3,param_4,param_5);
  return;
}

// AddAreas @ 146d7f040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavigationDirtyAreasController::AddAreas
          (FNavigationDirtyAreasController *this,
          TArrayView<UE::Math::TBox<double>_const_,int> *param_1,int param_2,
          TFunction<UObject_*___cdecl(void)> *param_3,FNavigationDirtyElement *param_4,
          FName *param_5)

{
  longlong *plVar1;
  undefined1 auStackY_88 [32];
  TArrayView<UE::Math::TBox<double>_const_,int> local_58;
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_58.DataPtr = param_1->DataPtr;
  local_58.ArrayNum = param_1->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  AddAreas(this,&local_58,(ENavigationDirtyFlag)param_2,
           (TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *)local_48,
           param_4,param_5);
  if (local_48._0_8_ != 0) {
    plVar1 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// AddAreas @ 146d7f0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationDirtyAreasController::AddAreas
          (FNavigationDirtyAreasController *this,
          TArrayView<UE::Math::TBox<double>_const_,int> *param_1,ENavigationDirtyFlag param_2,
          TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *param_3,
          FNavigationDirtyElement *param_4,FName *param_5)

{
  int *piVar1;
  undefined1 uVar2;
  FScriptContainerElement *pFVar3;
  FNavigationDirtyArea *pFVar4;
  code *pcVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  ENavigationDirtyFlag EVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  FString *pFVar15;
  UObject *pUVar16;
  FNavigationDirtyArea *pFVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  byte bVar20;
  int iVar21;
  longlong lVar22;
  TBox<double> *pTVar23;
  wchar_t *pwVar24;
  TBox<double> *pTVar25;
  uint uVar26;
  uint uVar27;
  double dVar28;
  undefined1 auStack_2a8 [32];
  FNavigationDirtyArea *local_288;
  FNavigationDirtyArea *local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  ENavigationDirtyFlag local_258;
  TSharedPtr<FNavigationElement_const_,1> local_250;
  int local_240;
  int local_23c;
  uint local_238;
  FName *local_230;
  FWeakObjectPtr local_228;
  FNavigationElement *local_220;
  TReferenceControllerBase<1> *local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FReadAccessScope local_190;
  FReadAccessScope local_178;
  undefined8 local_160;
  undefined8 uStack_158;
  FNavigationElement *local_148;
  TReferenceControllerBase<1> *local_140;
  FName local_138;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  undefined8 local_f0;
  FNavigationDirtyArea local_e8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_238 = 0;
  uVar2 = this->field_0x18;
  local_230 = param_5;
  if ((param_2 == None) || (this->bCanAccumulateDirtyAreas != 0)) {
    bVar20 = 0;
  }
  else {
    bVar20 = 4;
  }
  iVar13 = param_1->ArrayNum;
  this->field_0x18 = (uVar2 & 4 | bVar20) ^ uVar2 & 0xfb;
  local_258 = param_2;
  if ((iVar13 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewAreas.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDirtyAreasController.cpp"
                          ,0x90,
                          L"All callers of this method are expected to provide at least one area."),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(void **)param_3 == (void *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_238 = 0;
    local_250.Object = (FNavigationElement *)0x0;
    local_250.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
    pcVar5 = *(code **)param_3;
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    uVar14 = (**(code **)(*plVar18 + 8))();
    (*pcVar5)(&local_220,uVar14);
    local_250.Object = local_220;
    local_250.SharedReferenceCount.ReferenceController = local_218;
    if (local_218 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_218->SharedReferenceCount = (atomic<int>)((int)local_218->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_238 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_218);
    param_5 = local_230;
  }
  if (this->bUseWorldPartitionedDynamicMode == '\0') {
LAB_146d7f38f:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ShouldSkipObjectPredicate,&local_190);
    if (((*(int *)&(this->ShouldSkipObjectPredicate).field_0x10 == 0) ||
        (plVar18 = *(longlong **)&(this->ShouldSkipObjectPredicate).field_0x8,
        plVar18 == (longlong *)0x0)) || (cVar12 = (**(code **)(*plVar18 + 0x38))(), cVar12 == '\0'))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_190);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_190);
      if (local_250.Object != (FNavigationElement *)0x0) {
        if ((local_250.Object == (FNavigationElement *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_228 = ((local_250.Object)->OwnerUObject).WeakPtr;
        pUVar16 = FWeakObjectPtr::Get(&local_228);
        if (pUVar16 != (UObject *)0x0) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->ShouldSkipObjectPredicate,&local_178);
          if (*(int *)&(this->ShouldSkipObjectPredicate).field_0x10 == 0) {
            plVar18 = (longlong *)0x0;
          }
          else {
            plVar18 = *(longlong **)&(this->ShouldSkipObjectPredicate).field_0x8;
          }
          cVar12 = (**(code **)(*plVar18 + 0x60))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_178);
          if (cVar12 != '\0') goto LAB_146d7f831;
        }
      }
    }
    EVar10 = local_258;
    dVar9 = __real_3f1a36e2e0000000;
    uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pTVar23 = param_1->DataPtr;
    iVar13 = 0;
    iVar21 = 0;
    local_23c = 0;
    pTVar25 = pTVar23 + param_1->ArrayNum;
    local_240 = 0;
    uVar26 = 0;
    dVar28 = local_130;
    dVar6 = local_128;
    for (; local_130 = dVar28, local_128 = dVar6, pTVar23 != pTVar25; pTVar23 = pTVar23 + 1) {
      if (pTVar23->IsValid == '\0') {
        local_23c = iVar13 + 1;
        iVar13 = local_23c;
      }
      else {
        local_130 = (pTVar23->Max).field0_0x0._s_0.X - (pTVar23->Min).field0_0x0._s_0.X;
        local_128 = (pTVar23->Max).field0_0x0._s_0.Y - (pTVar23->Min).field0_0x0._s_0.Y;
        uVar26 = SUB84(local_130,0) & uVar7;
        uVar27 = (uint)((ulonglong)local_130 >> 0x20) & uVar8;
        if ((dVar9 <= (double)CONCAT44(uVar27,uVar26) && (double)CONCAT44(uVar27,uVar26) != dVar9)
           || (uVar26 = SUB84(local_128,0) & uVar7,
              uVar27 = (uint)((ulonglong)local_128 >> 0x20) & uVar8,
              dVar9 <= (double)CONCAT44(uVar27,uVar26) && (double)CONCAT44(uVar27,uVar26) != dVar9))
        {
          if (local_250.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_120 = (pTVar23->Min).field0_0x0._s_0.X;
          dStack_118 = (pTVar23->Min).field0_0x0._s_0.Y;
          local_110 = (pTVar23->Min).field0_0x0._s_0.Z;
          dStack_108 = (pTVar23->Max).field0_0x0._s_0.X;
          local_138 = *local_230;
          local_100 = (pTVar23->Max).field0_0x0._s_0.Y;
          dStack_f8 = (pTVar23->Max).field0_0x0._s_0.Z;
          local_f0._0_1_ = pTVar23->IsValid;
          local_f0._1_1_ = pTVar23->Pad[0];
          local_f0._2_1_ = pTVar23->Pad[1];
          local_f0._3_1_ = pTVar23->Pad[2];
          local_f0._4_1_ = pTVar23->Pad[3];
          local_f0._5_1_ = pTVar23->Pad[4];
          local_f0._6_1_ = pTVar23->Pad[5];
          local_f0._7_1_ = pTVar23->Pad[6];
          local_148 = local_250.Object;
          local_140 = local_250.SharedReferenceCount.ReferenceController;
          if ((this->bCanReportOversizedDirtyArea != '\x01' || this->bNavigationBuildLocked != '\0')
             || (this->DirtyAreaWarningSizeThreshold < 0.0)) {
LAB_146d7f5e7:
            if (6 < (byte)LogNavigationDirtyArea._0_1_) {
              `FNavigationDirtyAreasController::AddAreas'::__l48::<lambda_1>::operator()
                        (&local_148,&local_1d0);
              UE::Logging::Private::BasicLog<7>
                        (&::LOG_Static,(FLogCategoryBase *)&LogNavigationDirtyArea);
              FVar19.Data = local_1d0.Data.AllocatorInstance.Data;
LAB_146d7f622:
              if (FVar19.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar19.Data);
              }
            }
          }
          else {
            dVar28 = local_128;
            if (local_128 <= local_130) {
              dVar28 = local_130;
            }
            if (dVar28 <= (double)this->DirtyAreaWarningSizeThreshold) goto LAB_146d7f5e7;
            if (2 < (byte)LogNavigationDirtyArea._0_1_) {
              `FNavigationDirtyAreasController::AddAreas'::__l48::<lambda_1>::operator()
                        (&local_148,&local_1e0);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogNavigationDirtyArea);
              FVar19.Data = local_1e0.Data.AllocatorInstance.Data;
              goto LAB_146d7f622;
            }
          }
          if ((EVar10 != None) && (this->bCanAccumulateDirtyAreas != 0)) {
            pFVar17 = FNavigationDirtyArea::FNavigationDirtyArea
                                (&local_e8,pTVar23,EVar10,&local_250);
            pFVar4 = (FNavigationDirtyArea *)(this->DirtyAreas).AllocatorInstance.Data;
            if ((pFVar4 <= pFVar17) &&
               (lVar22 = (longlong)(this->DirtyAreas).ArrayMax, pFVar17 < pFVar4 + lVar22)) {
              local_270 = (longlong)(this->DirtyAreas).ArrayNum;
              local_268 = 0x50;
              local_288 = pFVar17;
              local_280 = pFVar4;
              local_278 = lVar22;
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar11) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar13 = (this->DirtyAreas).ArrayNum;
            piVar1 = &(this->DirtyAreas).ArrayMax;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&(this->DirtyAreas).AllocatorInstance,piVar1);
            }
            (this->DirtyAreas).ArrayNum = iVar13 + 1;
            FNavigationDirtyArea::FNavigationDirtyArea
                      ((FNavigationDirtyArea *)
                       ((this->DirtyAreas).AllocatorInstance.Data + (longlong)iVar13 * 0x50),pFVar17
                      );
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e8.OptionalSourceElement.SharedReferenceCount.ReferenceController);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_140);
          iVar13 = local_23c;
          iVar21 = local_240;
        }
        else {
          local_240 = iVar21 + 1;
          iVar21 = local_240;
          local_130 = dVar28;
          local_128 = dVar6;
        }
      }
      uVar26 = local_238;
      dVar28 = local_130;
      dVar6 = local_128;
    }
    if (((byte)LogNavigationDirtyArea._0_1_ < 3) || ((iVar13 < 1 && (iVar21 < 1))))
    goto LAB_146d7f831;
    pFVar15 = ::FName::ToString(local_230,&local_1a0);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    if (local_250.Object == (FNavigationElement *)0x0) {
      uVar26 = uVar26 | 8;
      pFVar15 = ::FString::FString(&local_1c0,L"None");
    }
    else {
      uVar26 = uVar26 | 4;
      pFVar15 = FNavigationElement::GetFullName(local_250.Object,&local_1b0);
    }
    pFVar4 = (FNavigationDirtyArea *)(pFVar15->Data).AllocatorInstance.Data;
    (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = (pFVar15->Data).ArrayNum;
    (pFVar15->Data).ArrayNum = 0;
    (pFVar15->Data).ArrayMax = 0;
    if (((uVar26 & 8) != 0) &&
       (uVar26 = uVar26 & 0xfffffff7,
       local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (((uVar26 & 4) != 0) &&
       (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    local_288 = (FNavigationDirtyArea *)L"";
    if (iVar13 != 0) {
      local_288 = pFVar4;
    }
    local_280 = (FNavigationDirtyArea *)pwVar24;
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDirtyArea);
    if (pFVar4 != (FNavigationDirtyArea *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    if ((param_4 == (FNavigationDirtyElement *)0x0) || (param_4->bIsFromVisibilityChange == '\0')) {
      if (local_250.Object != (FNavigationElement *)0x0) {
        if ((local_250.Object == (FNavigationElement *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((local_250.Object)->bIsFromLevelVisibilityChange != false) goto LAB_146d7f275;
      }
      goto LAB_146d7f38f;
    }
LAB_146d7f275:
    if ((param_4 == (FNavigationDirtyElement *)0x0) || (param_4->bIsInBaseNavmesh == '\0')) {
      if (local_250.Object != (FNavigationElement *)0x0) {
        if ((local_250.Object == (FNavigationElement *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((local_250.Object)->bIsInBaseNavigationData != false) goto LAB_146d7f2c7;
      }
      goto LAB_146d7f38f;
    }
LAB_146d7f2c7:
    if ((byte)LogNavigationDirtyArea._0_1_ < 7) goto LAB_146d7f831;
    ::FName::ToString(param_5,&local_1f0);
    bVar11 = local_250.Object == (FNavigationElement *)0x0;
    if (bVar11) {
      pFVar15 = ::FString::FString(&local_210,L"None");
    }
    else {
      pFVar15 = FNavigationElement::GetFullName(local_250.Object,&local_200);
    }
    pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
    (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar15->Data).ArrayNum = 0;
    (pFVar15->Data).ArrayMax = 0;
    if ((bVar11) && (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if ((!bVar11) && (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDirtyArea);
    local_1a0.Data.AllocatorInstance.Data = local_1f0.Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
      local_1a0.Data.AllocatorInstance.Data = local_1f0.Data.AllocatorInstance.Data;
    }
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
LAB_146d7f831:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250.SharedReferenceCount.ReferenceController);
  return;
}

// ForceRebuildOnNextTick @ 146d97950

void __thiscall
FNavigationDirtyAreasController::ForceRebuildOnNextTick(FNavigationDirtyAreasController *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (this->DirtyAreasUpdateFreq != 0.0) {
    fVar2 = __real_3f800000 / this->DirtyAreasUpdateFreq;
  }
  fVar1 = this->DirtyAreasUpdateTime;
  if (this->DirtyAreasUpdateTime <= fVar2) {
    fVar1 = fVar2;
  }
  this->DirtyAreasUpdateTime = fVar1;
  return;
}

// OnNavigationBuildLocked @ 146da9640

void __thiscall
FNavigationDirtyAreasController::OnNavigationBuildLocked(FNavigationDirtyAreasController *this)

{
  this->bNavigationBuildLocked = '\x01';
  return;
}

// OnNavigationBuildUnlocked @ 146da9650

void __thiscall
FNavigationDirtyAreasController::OnNavigationBuildUnlocked(FNavigationDirtyAreasController *this)

{
  this->bNavigationBuildLocked = '\0';
  return;
}

// Reset @ 146db79b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNavigationDirtyAreasController::Reset(FNavigationDirtyAreasController *this)

{
  int *piVar1;
  int iVar2;
  FNavigationDirtyArea *pFVar3;
  
  if (6 < (byte)LogNavigationDirtyArea._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDirtyArea);
  }
  piVar1 = &(this->DirtyAreas).ArrayMax;
  pFVar3 = (FNavigationDirtyArea *)(this->DirtyAreas).AllocatorInstance.Data;
  iVar2 = (this->DirtyAreas).ArrayNum;
  if ((this->DirtyAreas).ArrayMax < 0) {
    DestructItems<FNavigationDirtyArea,int>(pFVar3,iVar2);
    (this->DirtyAreas).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->DirtyAreas).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNavigationDirtyArea,int>(pFVar3,iVar2);
    (this->DirtyAreas).ArrayNum = 0;
  }
  this->bDirtyAreasReportedWhileAccumulationLocked = '\0';
  return;
}

// SetCanReportOversizedDirtyArea @ 146db8890

void __thiscall
FNavigationDirtyAreasController::SetCanReportOversizedDirtyArea
          (FNavigationDirtyAreasController *this,bool param_1)

{
  this->bCanReportOversizedDirtyArea = '\0';
  this->field_0x18 = this->field_0x18 | param_1 << 3;
  return;
}

// SetDirtyAreaWarningSizeThreshold @ 146db8a30

void __thiscall
FNavigationDirtyAreasController::SetDirtyAreaWarningSizeThreshold
          (FNavigationDirtyAreasController *this,float param_1)

{
  this->DirtyAreaWarningSizeThreshold = param_1;
  return;
}

// SetUseWorldPartitionedDynamicMode @ 146db9c50

void __thiscall
FNavigationDirtyAreasController::SetUseWorldPartitionedDynamicMode
          (FNavigationDirtyAreasController *this,bool param_1)

{
  this->bUseWorldPartitionedDynamicMode = '\0';
  this->field_0x18 = this->field_0x18 | param_1 * '\x02';
  return;
}

// ShouldReportOversizedDirtyArea @ 146dba2b0

bool __thiscall
FNavigationDirtyAreasController::ShouldReportOversizedDirtyArea
          (FNavigationDirtyAreasController *this)

{
  if ((this->bCanReportOversizedDirtyArea == '\x01' && this->bNavigationBuildLocked == '\0') &&
     (0.0 < this->DirtyAreaWarningSizeThreshold || this->DirtyAreaWarningSizeThreshold == 0.0)) {
    return true;
  }
  return false;
}

// Tick @ 146dbb080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNavigationDirtyAreasController::Tick
          (FNavigationDirtyAreasController *this,float param_1,
          TArray<ANavigationData_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  FNavigationDirtyArea *pFVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  FName FVar16;
  TArray<ANavigationData_*,TSizedDefaultAllocator<32>_> *pTVar17;
  undefined8 uVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<_public:_void___cdecl_FNavigationDirtyAreasController::Tick(float,TArray<ANavigationData_*,TSizedDefaultAllocator<32>_>_const_&,bool)_::_6_::FStat_STAT_RecastNavMeshGenerator_MakingSubAreas>
  FVar24;
  UWorld *pUVar25;
  UClass *pUVar26;
  TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> *pTVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  UNavigationSystemBase *pUVar30;
  FName FVar31;
  double *pdVar32;
  longlong *plVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStackY_178 [32];
  char local_117;
  undefined1 local_116 [6];
  FName local_110;
  TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> local_108;
  FName local_f8;
  FName local_f0;
  FName local_e0;
  TArray<ANavigationData_*,TSizedDefaultAllocator<32>_> *local_d8;
  TVector<double>_u_0 local_d0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  uchar local_a0;
  uchar uStack_9f;
  uchar uStack_9e;
  uchar uStack_9d;
  uchar uStack_9c;
  uchar uStack_9b;
  uchar uStack_9a;
  uchar uStack_99;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_178;
  fVar36 = param_1 + this->DirtyAreasUpdateTime;
  this->DirtyAreasUpdateTime = fVar36;
  if ((param_3) ||
     ((this->DirtyAreasUpdateFreq != 0.0 && (__real_3f800000 / this->DirtyAreasUpdateFreq <= fVar36)
      ))) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  iVar10 = (this->DirtyAreas).ArrayNum;
  if (iVar10 < 1) {
    return;
  }
  if (!bVar13) {
    return;
  }
  pUVar30 = (UNavigationSystemBase *)0x0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  local_d8 = param_2;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,iVar10,&local_108.AllocatorInstance,0,&local_108.ArrayMax);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RecastNavMeshGenerator_MakingSubAreas ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationDirtyAreasController::Tick(float,TArray<ANavigationData_*,TSizedDefaultAllocator<32>_>_const_&,bool)_::_6_::FStat_STAT_RecastNavMeshGenerator_MakingSubAreas>
         )0x0) {
      pFVar23 = ::FName::FName(&local_f8,"STAT_RecastNavMeshGenerator_MakingSubAreas");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMeshGenerator_MakingSubAreas,
                 *pFVar23,L"STAT_RecastNavMeshGenerator_MakingSubAreas","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar24 = StatPtr_STAT_RecastNavMeshGenerator_MakingSubAreas;
  if (StatPtr_STAT_RecastNavMeshGenerator_MakingSubAreas ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationDirtyAreasController::Tick(float,TArray<ANavigationData_*,TSizedDefaultAllocator<32>_>_const_&,bool)_::_6_::FStat_STAT_RecastNavMeshGenerator_MakingSubAreas>
       )0x0) {
    pFVar23 = ::FName::FName(&local_f8,"STAT_RecastNavMeshGenerator_MakingSubAreas");
    FVar24 = (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationDirtyAreasController::Tick(float,TArray<ANavigationData_*,TSizedDefaultAllocator<32>_>_const_&,bool)_::_6_::FStat_STAT_RecastNavMeshGenerator_MakingSubAreas>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMeshGenerator_MakingSubAreas,*pFVar23,
                          L"STAT_RecastNavMeshGenerator_MakingSubAreas","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar24;
  bVar13 = false;
  bVar14 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar19 = false;
  bVar20 = false;
  if ((FVar31.ComparisonIndex.Value.Value != 0) || (FVar31.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110 = (FName)((ulonglong)local_110.Number << 0x20);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar13 = false;
      bVar14 = true;
      bVar19 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110 = FVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDirtyAreasController.cpp"
                   ,0x42);
        bVar13 = true;
        bVar14 = true;
        bVar19 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_110 = FVar31;
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      bVar19 = true;
      goto LAB_146dbb2d4;
    }
  }
  bVar14 = bVar20;
  bVar13 = bVar19;
  bVar19 = false;
  local_110 = local_f0;
LAB_146dbb2d4:
  pFVar28 = (param_2->AllocatorInstance).Data;
  iVar10 = param_2->ArrayNum;
  pFVar29 = pFVar28 + (longlong)iVar10 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar10) {
      `TCheckedPointerIterator<ANavigationData_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_117);
    }
    if (pFVar28 == pFVar29) break;
    if (*(AActor **)pFVar28 != (AActor *)0x0) {
      pUVar25 = AActor::GetWorld(*(AActor **)pFVar28);
      if (pUVar25 == (UWorld *)0x0) {
        pUVar30 = (UNavigationSystemBase *)0x0;
      }
      else {
        pUVar30 = (pUVar25->NavigationSystem).field0_0x0.DebugPtr;
        if (pUVar30 == (UNavigationSystemBase *)0x0) {
LAB_146dbb33b:
          pUVar30 = (UNavigationSystemBase *)0x0;
        }
        else {
          pUVar26 = UNavigationSystemV1::StaticClass();
          iVar22 = (int)pUVar26->_padding_;
          if ((*(int *)(*(longlong *)&pUVar30->field_0x10 + 0x38) < iVar22) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar30->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
              &pUVar26->_padding_)) goto LAB_146dbb33b;
        }
        if (pUVar30 != (UNavigationSystemBase *)0x0) goto LAB_146dbb357;
      }
    }
    pFVar28 = pFVar28 + 8;
  }
  if (pUVar30 == (UNavigationSystemBase *)0x0) goto LAB_146dbb36b;
LAB_146dbb357:
  if ((pUVar30[2].field_0x20 & 1) == 0) {
LAB_146dbb36b:
    plVar33 = (longlong *)0x0;
    local_117 = '\0';
  }
  else {
    local_117 = '\x01';
    plVar33 = (longlong *)&pUVar30[0xd].field_0x18;
  }
  pFVar28 = (this->DirtyAreas).AllocatorInstance.Data;
  iVar10 = (this->DirtyAreas).ArrayNum;
  pFVar29 = pFVar28 + 0x18;
  FVar31 = (FName)((longlong)iVar10 * 0x50 + (longlong)pFVar28);
  local_f8 = FVar31;
  do {
    while( true ) {
      if ((this->DirtyAreas).ArrayNum != iVar10) {
        `TCheckedPointerIterator<FNavigationDirtyArea,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_116);
      }
      FVar16 = local_110;
      if ((FName)((longlong)pFVar29 + -0x18) == FVar31) {
        if (bVar14) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar13) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar19) {
          FThreadStats::AddMessage(FVar16,CycleScopeEnd);
        }
        pTVar17 = local_d8;
        cVar15 = local_117;
        pFVar28 = (local_d8->AllocatorInstance).Data;
        iVar10 = local_d8->ArrayNum;
        pFVar29 = pFVar28 + (longlong)iVar10 * 8;
        while( true ) {
          if (pTVar17->ArrayNum != iVar10) {
            `TCheckedPointerIterator<ANavigationData_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_116);
          }
          if (pFVar28 == pFVar29) break;
          plVar33 = *(longlong **)pFVar28;
          if (plVar33 != (longlong *)0x0) {
            pTVar27 = &local_108;
            if (cVar15 == '\0') {
              pTVar27 = &this->DirtyAreas;
            }
            (**(code **)(*plVar33 + 0x818))(plVar33,pTVar27);
          }
          pFVar28 = pFVar28 + 8;
        }
        piVar1 = &(this->DirtyAreas).ArrayMax;
        this->DirtyAreasUpdateTime = 0.0;
        pFVar12 = (FNavigationDirtyArea *)(this->DirtyAreas).AllocatorInstance.Data;
        iVar10 = (this->DirtyAreas).ArrayNum;
        if (*piVar1 < 0) {
          DestructItems<FNavigationDirtyArea,int>(pFVar12,iVar10);
          (this->DirtyAreas).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,0,&(this->DirtyAreas).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<FNavigationDirtyArea,int>(pFVar12,iVar10);
          (this->DirtyAreas).ArrayNum = 0;
        }
        DestructItems<FNavigationDirtyArea,int>
                  ((FNavigationDirtyArea *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
        if ((FNavigationDirtyArea *)local_108.AllocatorInstance.Data != (FNavigationDirtyArea *)0x0)
        {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        return;
      }
      if ((pFVar29[0x18] != (FScriptContainerElement)0x0) ||
         (local_e0 = (FName)((longlong)pFVar29 + -0x18),
         bVar20 = `FNavigationDirtyAreasController::Tick'::__l14::<lambda_1>::operator()(&local_e0),
         bVar20)) break;
LAB_146dbb586:
      pFVar29 = pFVar29 + 0x50;
    }
    if (plVar33 != (longlong *)0x0) {
      iVar22 = (int)plVar33[1];
      if (0 < iVar22) {
        lVar11 = *plVar33;
        pdVar32 = (double *)(lVar11 + 8);
        while( true ) {
          if ((int)plVar33[1] != iVar22) {
            `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_116);
          }
          FVar31 = local_f8;
          if (pdVar32 + -1 == (double *)((longlong)iVar22 * 0x38 + lVar11)) break;
          local_d0._s_0.X = (double)*(undefined8 *)(pFVar29 + -0x18);
          dStack_b8 = pdVar32[2];
          if (dStack_b8 < local_d0._s_0.X) {
LAB_146dbb4b9:
            local_d0._s_0.X =
                 `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                 ::__l5::EmptyBox.Min.field0_0x0._s_0.X;
            local_d0._s_0.Y =
                 `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                 ::__l5::EmptyBox.Min.field0_0x0._s_0.Y;
            local_d0._s_0.Z =
                 `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                 ::__l5::EmptyBox.Min.field0_0x0._s_0.Z;
            dStack_b8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                        ::__l5::EmptyBox.Max.field0_0x0._s_0.X;
            local_a0 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                       ::__l5::EmptyBox.IsValid;
            uStack_9f = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                        ::__l5::EmptyBox.Pad[0];
            uStack_9e = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                        ::__l5::EmptyBox.Pad[1];
            uStack_9d = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                        ::__l5::EmptyBox.Pad[2];
            uStack_9c = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                        ::__l5::EmptyBox.Pad[3];
            uStack_9b = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                        ::__l5::EmptyBox.Pad[4];
            uStack_9a = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                        ::__l5::EmptyBox.Pad[5];
            uStack_99 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                        ::__l5::EmptyBox.Pad[6];
            uVar18 = _local_a0;
            local_a0 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                       ::__l5::EmptyBox.IsValid;
            bVar20 = local_a0 != '\0';
            local_b0 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                       ::__l5::EmptyBox.Max.field0_0x0._s_0.Y;
            dStack_a8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                        ::__l5::EmptyBox.Max.field0_0x0._s_0.Z;
            _local_a0 = uVar18;
            if (bVar20) goto LAB_146dbb4ed;
          }
          else {
            dVar2 = pdVar32[-1];
            dVar3 = *(double *)pFVar29;
            if (dVar3 < dVar2) goto LAB_146dbb4b9;
            dVar4 = *(double *)(pFVar29 + -0x10);
            dVar5 = pdVar32[3];
            if (dVar5 < dVar4) goto LAB_146dbb4b9;
            dVar6 = *pdVar32;
            dVar7 = *(double *)(pFVar29 + 8);
            if (dVar7 < dVar6) goto LAB_146dbb4b9;
            dVar8 = *(double *)(pFVar29 + -8);
            dStack_a8 = pdVar32[4];
            if (dStack_a8 < dVar8) goto LAB_146dbb4b9;
            local_d0._s_0.Z = pdVar32[1];
            dVar9 = *(double *)(pFVar29 + 0x10);
            if (dVar9 < local_d0._s_0.Z) goto LAB_146dbb4b9;
            if (local_d0._s_0.X <= dVar2) {
              local_d0._s_0.X = dVar2;
            }
            local_a0 = '\x01';
            uVar37 = SUB84(dVar6,0);
            uVar38 = (int)((ulonglong)dVar6 >> 0x20);
            if (dVar6 <= dVar4) {
              uVar37 = SUB84(dVar4,0);
              uVar38 = (int)((ulonglong)dVar4 >> 0x20);
            }
            if (local_d0._s_0.Z <= dVar8) {
              local_d0._s_0.Z = dVar8;
            }
            if (dVar3 <= dStack_b8) {
              dStack_b8 = dVar3;
            }
            uVar34 = SUB84(dVar5,0);
            uVar35 = (int)((ulonglong)dVar5 >> 0x20);
            if (dVar7 <= dVar5) {
              uVar34 = SUB84(dVar7,0);
              uVar35 = (int)((ulonglong)dVar7 >> 0x20);
            }
            if (dVar9 <= dStack_a8) {
              dStack_a8 = dVar9;
            }
            local_d0._s_0.Y = (double)CONCAT44(uVar38,uVar37);
            local_b0 = (double)CONCAT44(uVar35,uVar34);
LAB_146dbb4ed:
            iVar21 = local_108.ArrayNum;
            if (local_108.ArrayNum == local_108.ArrayMax) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&local_108.AllocatorInstance,&local_108.ArrayMax);
            }
            local_108.ArrayNum = iVar21 + 1;
            FNavigationDirtyArea::FNavigationDirtyArea
                      ((FNavigationDirtyArea *)
                       (local_108.AllocatorInstance.Data + (longlong)iVar21 * 0x50),
                       (TBox<double> *)&local_d0._s_0,(ENavigationDirtyFlag)pFVar29[0x30],
                       (TSharedPtr<FNavigationElement_const_,1> *)(pFVar29 + 0x20));
          }
          pdVar32 = pdVar32 + 7;
        }
        goto LAB_146dbb586;
      }
    }
    iVar22 = local_108.ArrayNum;
    if (local_108.ArrayNum == local_108.ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&local_108.AllocatorInstance,&local_108.ArrayMax);
    }
    local_108.ArrayNum = iVar22 + 1;
    FNavigationDirtyArea::FNavigationDirtyArea
              ((FNavigationDirtyArea *)(local_108.AllocatorInstance.Data + (longlong)iVar22 * 0x50),
               (FNavigationDirtyArea *)(pFVar29 + -0x18));
    pFVar29 = pFVar29 + 0x50;
  } while( true );
}

// operator() @ 1504fc520

bool __thiscall `FNavigationDirtyAreasController::Tick'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4769546364570828882>);
  if (bVar2) {
    FNavigationDirtyArea::GetSourceDescription(*(FNavigationDirtyArea **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4769546364570828882>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504fc58e;
    }
  }
  bVar2 = false;
LAB_1504fc58e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

