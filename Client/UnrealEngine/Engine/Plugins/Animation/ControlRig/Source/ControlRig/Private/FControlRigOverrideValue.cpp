// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 47

// StaticStruct @ 14a2053f0

UScriptStruct * __cdecl FControlRigOverrideValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigOverrideValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigOverrideValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigOverrideValue,(UObject *)pUVar1,
                         L"ControlRigOverrideValue");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigOverrideValue.OuterSingleton;
}

// FControlRigOverrideValue @ 14a21e670

FControlRigOverrideValue * __thiscall
FControlRigOverrideValue::FControlRigOverrideValue
          (FControlRigOverrideValue *this,FControlRigOverrideValue *param_1)

{
  *(undefined4 *)((longlong)&(this->Path).field0_0x0 + 0xc) = 0xffffffff;
  (this->Path).field0_0x0.TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Path).field0_0x0 + 8) = 0;
  (this->CachedStringValue).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedStringValue).field0_0x0 + 8) = 0;
  (this->SubjectKey).field0_0x0.TypedValue.Number = 0;
  (this->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Properties).ArrayNum = 0;
  (this->Properties).ArrayMax = 0;
  (this->DataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataArray).ArrayNum = 0;
  (this->DataArray).ArrayMax = 0;
  *(undefined8 *)&(this->CachedStringValue).field0_0x0.TypedValue.Data.ArrayMax = 0xffffffffffffffff
  ;
  operator=(this,param_1);
  return this;
}

// FControlRigOverrideValue @ 14a21e6c0

FControlRigOverrideValue * __thiscall
FControlRigOverrideValue::FControlRigOverrideValue
          (FControlRigOverrideValue *this,FString *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FControlRigOverrideValue *pFVar4;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  *(undefined4 *)((longlong)&(this->Path).field0_0x0 + 0xc) = 0xffffffff;
  (this->Path).field0_0x0.TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Path).field0_0x0 + 8) = 0;
  (this->CachedStringValue).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedStringValue).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) = 0xffffffff;
  if (param_2 != (UObject *)0x0) {
    FVar3.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    FVar3.Number = *(uint *)&param_2->field_0x1c;
  }
  (this->SubjectKey).field0_0x0.TypedValue = FVar3;
  if ((FVar3.ComparisonIndex.Value.Value == 0xffffffff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FControlRigOverrideValue *)(*pcVar1)();
    return pFVar4;
  }
  this->Hash = 0;
  (this->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Properties).ArrayNum = 0;
  (this->Properties).ArrayMax = 0;
  (this->DataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataArray).ArrayNum = 0;
  (this->DataArray).ArrayMax = 0;
  this->DataPropertyHash = 0;
  if ((param_2 != (UObject *)0x0) &&
     (bVar2 = SetPropertiesFromPath(this,param_1,*(UStruct **)&param_2->field_0x10), bVar2)) {
    SetFromSubject(this,param_2,(UStruct *)0x0);
  }
  return this;
}

// FControlRigOverrideValue @ 14a21e7a0

FControlRigOverrideValue * __thiscall
FControlRigOverrideValue::FControlRigOverrideValue
          (FControlRigOverrideValue *this,FString *param_1,UStruct *param_2,FString *param_3,
          FName *param_4,TFunction<void___cdecl(wchar_t_const_*,ELogVerbosity::Type)> *param_5)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FControlRigOverrideValue *pFVar4;
  
  (this->Path).field0_0x0.TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Path).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Path).field0_0x0 + 0xc) = 0xffffffff;
  (this->CachedStringValue).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedStringValue).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) = 0xffffffff;
  FVar1 = *param_4;
  (this->SubjectKey).field0_0x0.TypedValue = FVar1;
  if (FVar1.ComparisonIndex.Value.Value == 0xffffffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FControlRigOverrideValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->Hash = 0;
  (this->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Properties).ArrayNum = 0;
  (this->Properties).ArrayMax = 0;
  (this->DataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataArray).ArrayNum = 0;
  (this->DataArray).ArrayMax = 0;
  this->DataPropertyHash = 0;
  bVar3 = SetPropertiesFromPath(this,param_1,param_2);
  if (bVar3) {
    SetFromString(this,param_3,param_5);
  }
  return this;
}

// FControlRigOverrideValue @ 14a21e880

FControlRigOverrideValue * __thiscall
FControlRigOverrideValue::FControlRigOverrideValue
          (FControlRigOverrideValue *this,FString *param_1,UStruct *param_2,void *param_3,
          FName *param_4)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FControlRigOverrideValue *pFVar5;
  
  (this->Path).field0_0x0.TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Path).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Path).field0_0x0 + 0xc) = 0xffffffff;
  (this->CachedStringValue).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->CachedStringValue).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) = 0xffffffff;
  FVar1 = *param_4;
  (this->SubjectKey).field0_0x0.TypedValue = FVar1;
  if (FVar1.ComparisonIndex.Value.Value == 0xffffffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FControlRigOverrideValue *)(*pcVar2)();
      return pFVar5;
    }
  }
  this->Hash = 0;
  (this->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Properties).ArrayNum = 0;
  (this->Properties).ArrayMax = 0;
  (this->DataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataArray).ArrayNum = 0;
  (this->DataArray).ArrayMax = 0;
  this->DataPropertyHash = 0;
  if (param_2 == (UStruct *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8574949777521770549>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigOverride.cpp"
                       ,0x35,"InOwnerStruct");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FControlRigOverrideValue *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = ::FString::Find(param_1,L".",1,IgnoreCase,FromStart,-1);
  if (iVar4 != -1) {
    `FControlRigOverrideValue::FControlRigOverrideValue'::__l2::<lambda_1>::operator()(&param_4);
  }
  bVar3 = SetPropertiesFromPath(this,param_1,param_2);
  if ((bVar3) && (param_3 != (void *)0x0)) {
    SetFromSubject(this,param_3,(UStruct *)0x0);
  }
  return this;
}

// ~FControlRigOverrideValue @ 14a2257a0

void __thiscall FControlRigOverrideValue::~FControlRigOverrideValue(FControlRigOverrideValue *this)

{
  FScriptContainerElement *pFVar1;
  
  Reset(this);
  pFVar1 = (this->DataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FControlRigOverrideValue::FPropertyInfo,int>
            ((FPropertyInfo *)(this->Properties).AllocatorInstance.Data,(this->Properties).ArrayNum)
  ;
  pFVar1 = (this->Properties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((*(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->CachedStringValue).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if ((*(int *)((longlong)&(this->Path).field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->Path).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14a229130

FControlRigOverrideValue * __thiscall
FControlRigOverrideValue::operator=
          (FControlRigOverrideValue *this,FControlRigOverrideValue *param_1)

{
  TOptional<FName> *pTVar1;
  TOptional<FName> *pTVar2;
  TArray<FControlRigOverrideValue::FPropertyInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  int iVar5;
  FName FVar6;
  FPropertyInfo *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  FControlRigOverrideValue *pFVar11;
  FProperty *pFVar12;
  void *pvVar13;
  
  Reset(this);
  TOptional<FString>::operator=(&this->Path,&param_1->Path);
  pTVar1 = &param_1->SubjectKey;
  pTVar2 = &this->SubjectKey;
  if (pTVar1 != pTVar2) {
    if ((pTVar1->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((pTVar2->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (pTVar2->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->SubjectKey).field0_0x0.TypedValue.Number = 0;
      }
    }
    else {
      FVar6 = (pTVar1->field0_0x0).TypedValue;
      (pTVar2->field0_0x0).TypedValue = FVar6;
      if ((FVar6.ComparisonIndex.Value.Value == 0xffffffff) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x171,
                              L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FControlRigOverrideValue *)(*pcVar9)();
        return pFVar11;
      }
    }
  }
  TOptional<FString>::operator=(&this->CachedStringValue,&param_1->CachedStringValue);
  pTVar3 = &this->Properties;
  if (pTVar3 != &param_1->Properties) {
    DestructItems<FControlRigOverrideValue::FPropertyInfo,int>
              ((FPropertyInfo *)(pTVar3->AllocatorInstance).Data,(this->Properties).ArrayNum);
    iVar5 = (param_1->Properties).ArrayNum;
    piVar4 = &(this->Properties).ArrayMax;
    pFVar7 = (FPropertyInfo *)(param_1->Properties).AllocatorInstance.Data;
    (this->Properties).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar4 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar5,*piVar4,&pTVar3->AllocatorInstance,iVar5,piVar4);
      ConstructItems<FControlRigOverrideValue::FPropertyInfo,FControlRigOverrideValue::FPropertyInfo,int>
                ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  this->Hash = param_1->Hash;
  pFVar12 = GetLeafProperty(this);
  if ((((pFVar12 != (FProperty *)0x0) &&
       (pFVar12 = GetLeafProperty(param_1), pFVar12 != (FProperty *)0x0)) &&
      (bVar10 = IsDataValid(param_1,&param_1->DataArray,&param_1->DataPropertyHash), bVar10)) &&
     (((param_1->DataArray).ArrayNum != 0 &&
      (pFVar8 = (param_1->DataArray).AllocatorInstance.Data,
      pFVar8 != (FScriptContainerElement *)0x0)))) {
    pvVar13 = AllocateDataIfRequired(this,&this->DataArray,&this->DataPropertyHash);
    if ((pvVar13 == (void *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DataPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigOverride.cpp"
                            ,100,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      pFVar11 = (FControlRigOverrideValue *)(*pcVar9)();
      return pFVar11;
    }
    CopyValue(this,pvVar13,pFVar8);
  }
  return this;
}

// operator== @ 14a22a1d0

bool __thiscall
FControlRigOverrideValue::operator==
          (FControlRigOverrideValue *this,FControlRigOverrideValue *param_1)

{
  bool bVar1;
  
  if (this->Hash != param_1->Hash) {
    return false;
  }
  if ((param_1->DataArray).ArrayNum == 0) {
    bVar1 = IdenticalValue(this,(void *)0x0);
    return bVar1;
  }
  bVar1 = IdenticalValue(this,(param_1->DataArray).AllocatorInstance.Data);
  return bVar1;
}

// operator() @ 14a22c4a0

bool __thiscall
`FControlRigOverrideValue::SetPropertiesFromPath'::__l2::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  UStruct *this_00;
  longlong lVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FName *pFVar9;
  FProperty *pFVar10;
  FProperty *this_01;
  TWeakFieldPtr<FProperty> *this_02;
  FProperty *local_res8;
  FName local_res10;
  undefined1 local_58 [8];
  FFieldPath local_50;
  int local_30;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  pwVar4 = (wchar_t *)*puVar1;
  uVar5 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((1 < (int)uVar5) &&
     (this_00 = (UStruct *)**(undefined8 **)((longlong)this + 0x10), this_00 != (UStruct *)0x0)) {
    pFVar9 = ::FName::FName(&local_res10,pwVar4);
    pFVar10 = UStruct::FindPropertyByName(this_00,*pFVar9);
    if (pFVar10 != (FProperty *)0x0) {
      this_01 = pFVar10;
      if ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x15 & 1) == 0) {
LAB_14a22c553:
        if ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x14 & 1) != 0) {
          **(longlong **)((longlong)this + 0x10) = pFVar10[1]._padding_;
        }
      }
      else {
        pFVar10 = (FProperty *)pFVar10[1]._padding_;
        if (*(int *)(*(longlong *)this + 0x38) == 0) {
          this_01 = pFVar10;
        }
        if (pFVar10 != (FProperty *)0x0) goto LAB_14a22c553;
      }
      lVar2 = *(longlong *)this;
      local_res8 = (FProperty *)0x0;
      if (this_01 != (FProperty *)0x0) {
        local_res8 = (FProperty *)FField::GetOwnerUObject((FField *)this_01);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FProperty *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      local_58._0_4_ = 0;
      local_58._4_4_ = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FProperty *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)local_58,(FObjectPtr)&local_res8);
      if ((this_01 == (FProperty *)0x0) || ((*(uint *)(this_01->_padding_ + 0x18) >> 0xf & 1) == 0))
      {
        this_01 = (FProperty *)0x0;
      }
      local_50.ResolvedField = (FField *)0x0;
      local_50.ResolvedOwner.WeakPtr.ObjectIndex = 0;
      local_50.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
      local_50.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.Path.ArrayNum = 0;
      local_50.Path.ArrayMax = 0;
      FFieldPath::Generate(&local_50,(FField *)this_01);
      local_30 = -1;
      if (((*(undefined1 **)(lVar2 + 0x30) <= local_58) &&
          (local_58 < *(undefined1 **)(lVar2 + 0x30) + (longlong)*(int *)(lVar2 + 0x3c) * 0x30)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar8 = *(int *)(lVar2 + 0x38);
      if (iVar8 == *(int *)(lVar2 + 0x3c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,(ForAnyElementType *)(lVar2 + 0x30),(int *)(lVar2 + 0x3c));
      }
      *(int *)(lVar2 + 0x38) = iVar8 + 1;
      this_02 = (TWeakFieldPtr<FProperty> *)((longlong)iVar8 * 0x30 + *(longlong *)(lVar2 + 0x30));
      TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>
                (this_02,(TWeakFieldPtr<FProperty> *)local_58);
      this_02[1].Owner.WeakPtr.ObjectIndex = local_30;
      if (local_50.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Path.AllocatorInstance.Data);
      }
      bVar6 = true;
      goto LAB_14a22c6d2;
    }
  }
  bVar6 = false;
LAB_14a22c6d2:
  if (pwVar4 != (wchar_t *)0x0) {
    FMemory::Free(pwVar4);
  }
  return bVar6;
}

// operator() @ 14a22f540

bool __thiscall
`FControlRigOverrideValue::SetPropertiesFromPath'::__l2::<lambda_2>::operator()(void *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  wchar_t *_Str;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  bVar5 = false;
  _Str = (wchar_t *)*puVar1;
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (1 < (int)uVar4) {
    iVar7 = _wtoi(_Str);
    lVar2 = *(longlong *)this;
    uVar8 = *(int *)(lVar2 + 0x38) - 1;
    uVar9 = 0;
    if ((int)uVar8 < *(int *)(lVar2 + 0x38)) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    bVar5 = true;
    *(int *)(*(longlong *)(lVar2 + 0x30) + -8 + (longlong)*(int *)(lVar2 + 0x38) * 0x30) = iVar7;
  }
  if (_Str != (wchar_t *)0x0) {
    FMemory::Free(_Str);
  }
  return bVar5;
}

// AddStructReferencedObjects @ 14a23d210

void __thiscall
FControlRigOverrideValue::AddStructReferencedObjects
          (FControlRigOverrideValue *this,FReferenceCollector *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  FProperty *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  
  pFVar8 = GetLeafProperty(this);
  if (pFVar8 != (FProperty *)0x0) {
    uVar2 = *(ulonglong *)(pFVar8->_padding_ + 0x18);
    if ((uVar2 >> 0x15 & 1) == 0) {
      if ((uVar2 >> 0x10 & 1) == 0) {
        if ((((uVar2 >> 0x14 & 1) != 0) && ((this->DataArray).ArrayNum != 0)) &&
           (pFVar10 = (this->DataArray).AllocatorInstance.Data,
           pFVar10 != (FScriptContainerElement *)0x0)) {
          FReferenceCollector::AddPropertyReferencesWithStructARO
                    (param_1,(UScriptStruct *)pFVar8[1]._padding_,pFVar10,(UObject *)0x0);
          return;
        }
      }
      else if (((this->DataArray).ArrayNum != 0) &&
              (pFVar10 = (this->DataArray).AllocatorInstance.Data,
              pFVar10 != (FScriptContainerElement *)0x0)) {
        if ((pFVar8->ArrayDim < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = pFVar10 + pFVar8->Offset_Internal;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a23d4a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar10,0,0);
          return;
        }
      }
    }
    else {
      plVar3 = (longlong *)pFVar8[1]._padding_;
      if (plVar3 != (longlong *)0x0) {
        if ((*(uint *)(plVar3[1] + 0x18) >> 0x10 & 1) == 0) {
          if ((((*(uint *)(plVar3[1] + 0x18) >> 0x14 & 1) != 0) && ((this->DataArray).ArrayNum != 0)
              ) && (pFVar10 = (this->DataArray).AllocatorInstance.Data,
                   pFVar10 != (FScriptContainerElement *)0x0)) {
            lVar6 = pFVar8[1]._padding_;
            (**(code **)(*plVar3 + 0x168))(plVar3);
            lVar4 = pFVar8[1]._padding_;
            iVar1 = *(int *)(lVar4 + 0x34);
            if ((iVar1 < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((lVar4 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar9 = (FScriptContainerElement *)0x0;
            while( true ) {
              iVar11 = (int)pFVar9;
              if (*(int *)(pFVar10 + 8) <= iVar11) break;
              pFVar9 = (FScriptContainerElement *)0x0;
              if (*(int *)(pFVar10 + 8) != 0) {
                pFVar9 = *(FScriptContainerElement **)pFVar10;
                if (((lVar6 & 1) != 0) && (((ulonglong)pFVar9 & 1) != 0)) {
                  pFVar9 = pFVar10 + ((longlong)pFVar9 >> 0x18);
                }
                pFVar9 = pFVar9 + (longlong)iVar1 * (longlong)iVar11;
              }
              FReferenceCollector::AddPropertyReferencesWithStructARO
                        (param_1,(UScriptStruct *)plVar3[0xe],pFVar9,(UObject *)0x0);
              pFVar9 = (FScriptContainerElement *)(ulonglong)(iVar11 + 1);
            }
          }
        }
        else if (((this->DataArray).ArrayNum != 0) &&
                (pFVar10 = (this->DataArray).AllocatorInstance.Data,
                pFVar10 != (FScriptContainerElement *)0x0)) {
          lVar6 = pFVar8[1]._padding_;
          (**(code **)(*plVar3 + 0x168))(plVar3);
          lVar4 = pFVar8[1]._padding_;
          iVar1 = *(int *)(lVar4 + 0x34);
          if ((iVar1 < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((lVar4 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          for (iVar11 = 0; iVar11 < *(int *)(pFVar10 + 8); iVar11 = iVar11 + 1) {
            if (*(int *)(pFVar10 + 8) != 0) {
              pFVar9 = *(FScriptContainerElement **)pFVar10;
              if (((lVar6 & 1) != 0) && (((ulonglong)pFVar9 & 1) != 0)) {
                pFVar9 = pFVar10 + ((longlong)pFVar9 >> 0x18);
              }
              if (pFVar9 + (longlong)iVar1 * (longlong)iVar11 != (FScriptContainerElement *)0x0) {
                (**(code **)(param_1->_padding_ + 0x88))
                          (param_1,pFVar9 + (longlong)iVar1 * (longlong)iVar11,0,0);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// AllocateDataIfRequired @ 14a23e130

void * __thiscall FControlRigOverrideValue::AllocateDataIfRequired(FControlRigOverrideValue *this)

{
  void *pvVar1;
  
  pvVar1 = AllocateDataIfRequired(this,&this->DataArray,&this->DataPropertyHash);
  return pvVar1;
}

// AllocateDataIfRequired @ 14a23e150

void * __thiscall
FControlRigOverrideValue::AllocateDataIfRequired
          (FControlRigOverrideValue *this,TArray<unsigned_char,TAlignedHeapAllocator<16>_> *param_1,
          uint *param_2)

{
  FScriptContainerElement *_Dst;
  bool bVar1;
  int iVar2;
  uint uVar3;
  FProperty *pFVar4;
  int iVar5;
  
  pFVar4 = GetLeafProperty(this);
  if ((pFVar4 != (FProperty *)0x0) &&
     ((param_1->ArrayNum == 0 || (bVar1 = IsDataValid(this,param_1,param_2), !bVar1)))) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (1,1,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    iVar5 = pFVar4->ArrayDim * pFVar4->ElementSize;
    iVar2 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (1,1,iVar5,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    memset((param_1->AllocatorInstance).Data + iVar2,0,(longlong)iVar5);
    uVar3 = GetPropertyHash(this);
    *param_2 = uVar3;
    _Dst = (param_1->AllocatorInstance).Data;
    if (((uint)(int)pFVar4->PropertyFlags >> 9 & 1) == 0) {
      (**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,_Dst);
    }
    else {
      memset(_Dst,0,(longlong)pFVar4->ElementSize * (longlong)pFVar4->ArrayDim);
    }
  }
  return (param_1->AllocatorInstance).Data;
}

// ContainsProperty @ 14a247d30

bool __thiscall
FControlRigOverrideValue::ContainsProperty(FControlRigOverrideValue *this,FProperty *param_1)

{
  FFieldPath *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  UObject *pUVar7;
  FProperty *pFVar8;
  uint uVar9;
  FWeakObjectPtr *pFVar10;
  FProperty *pFVar11;
  FProperty *pFVar12;
  
  pFVar11 = (FProperty *)0x0;
  pFVar8 = pFVar11;
  pFVar12 = pFVar11;
  if (0 < (this->Properties).ArrayNum) {
    do {
      uVar9 = (uint)pFVar8;
      uVar4 = 0;
      if ((int)uVar9 < (this->Properties).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar10 = (FWeakObjectPtr *)
                ((longlong)&pFVar12->_padding_ + (longlong)(this->Properties).AllocatorInstance.Data
                );
      bVar2 = FWeakObjectPtr::IsValid(pFVar10);
      if (bVar2) {
        pFVar5 = FProperty::StaticClass();
        pFVar6 = FFieldPath::GetTyped((FFieldPath *)(pFVar10 + 1),pFVar5,(UStruct *)0x0);
        if (pFVar6 != (FField *)0x0) {
          uVar4 = 0;
          if ((int)uVar9 < (this->Properties).ArrayNum) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar10 = (FWeakObjectPtr *)
                    ((longlong)&pFVar12->_padding_ +
                    (longlong)(this->Properties).AllocatorInstance.Data);
          this_00 = (FFieldPath *)(pFVar10 + 1);
          pUVar7 = FWeakObjectPtr::Get(pFVar10);
          if (pUVar7 == (UObject *)0x0) {
            this_00->ResolvedField = (FField *)0x0;
            pFVar8 = pFVar11;
          }
          else {
            pFVar5 = FProperty::StaticClass();
            pFVar8 = (FProperty *)FFieldPath::GetTyped(this_00,pFVar5,(UStruct *)0x0);
          }
          if (pFVar8 == param_1) {
            return true;
          }
        }
      }
      pFVar8 = (FProperty *)(ulonglong)(uVar9 + 1);
      pFVar12 = (FProperty *)&pFVar12->ArrayDim;
    } while ((int)(uVar9 + 1) < (this->Properties).ArrayNum);
  }
  return false;
}

// CopyToSubject @ 14a249cf0

bool __thiscall
FControlRigOverrideValue::CopyToSubject
          (FControlRigOverrideValue *this,void *param_1,UStruct *param_2)

{
  FScriptContainerElement *pFVar1;
  FProperty *this_00;
  UStruct *pUVar2;
  uchar *puVar3;
  
  if (((param_2 != (UStruct *)0x0) && (this_00 = GetRootProperty(this), this_00 != (FProperty *)0x0)
      ) && (pUVar2 = FField::GetOwnerStruct((FField *)this_00), pUVar2 != param_2)) {
    return false;
  }
  if ((((this->DataArray).ArrayNum != 0) &&
      (pFVar1 = (this->DataArray).AllocatorInstance.Data, pFVar1 != (FScriptContainerElement *)0x0))
     && (puVar3 = SubjectPtrToValuePtr(this,param_1,true), puVar3 != (uchar *)0x0)) {
    CopyValue(this,puVar3,pFVar1);
    return true;
  }
  return false;
}

// CopyToUObject @ 14a249e70

void __thiscall
FControlRigOverrideValue::CopyToUObject(FControlRigOverrideValue *this,UObject *param_1)

{
  UStruct *pUVar1;
  FScriptContainerElement *pFVar2;
  FProperty *this_00;
  UStruct *pUVar3;
  uchar *puVar4;
  
  if (((param_1 != (UObject *)0x0) &&
      (((pUVar1 = *(UStruct **)&param_1->field_0x10, pUVar1 == (UStruct *)0x0 ||
        (this_00 = GetRootProperty(this), this_00 == (FProperty *)0x0)) ||
       (pUVar3 = FField::GetOwnerStruct((FField *)this_00), pUVar3 == pUVar1)))) &&
     ((((this->DataArray).ArrayNum != 0 &&
       (pFVar2 = (this->DataArray).AllocatorInstance.Data, pFVar2 != (FScriptContainerElement *)0x0)
       ) && (puVar4 = SubjectPtrToValuePtr(this,param_1,true), puVar4 != (uchar *)0x0)))) {
    CopyValue(this,puVar4,pFVar2);
  }
  return;
}

// CopyValue @ 14a249ef0

void __thiscall
FControlRigOverrideValue::CopyValue(FControlRigOverrideValue *this,void *param_1,void *param_2)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  FProperty *pFVar9;
  ulonglong uVar10;
  void *_Src;
  int iVar11;
  FProperty *pFVar12;
  FScriptArrayHelper_u_8 FVar13;
  void *_Dst;
  FScriptArrayHelper local_38;
  
  if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDestPtr && InSourcePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigOverride.cpp"
                         ,0x340,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9 = GetLeafProperty(this);
  if (pFVar9 == (FProperty *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("LeafProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigOverride.cpp"
                       ,0x343,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pFVar12 = pFVar9;
    if ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x15 & 1) != 0) goto LAB_14a249f71;
  }
  pFVar12 = (FProperty *)0x0;
LAB_14a249f71:
  if (pFVar12 == (FProperty *)0x0) {
    if (param_1 != param_2) {
      if (((uint)(int)pFVar9->PropertyFlags >> 0x1e & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a24a1f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pFVar9->_padding_ + 0xf0))(pFVar9,param_1,param_2,pFVar9->ArrayDim);
        return;
      }
      memcpy(param_1,param_2,(longlong)pFVar9->ElementSize * (longlong)pFVar9->ArrayDim);
      return;
    }
  }
  else {
    lVar7 = pFVar12[1]._padding_;
    (**(code **)(*(longlong *)pFVar12[1]._padding_ + 0x168))();
    lVar4 = pFVar12[1]._padding_;
    iVar2 = *(int *)(lVar4 + 0x34);
    if ((iVar2 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((lVar4 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar1 = (EArrayPropertyFlags)pFVar12[1]._padding_;
    local_38.ElementAlignment = (**(code **)(*(longlong *)pFVar12[1]._padding_ + 0x168))();
    local_38.InnerProperty = (FProperty *)pFVar12[1]._padding_;
    local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
    local_38.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
    local_38.ArrayFlags = EVar1;
    if ((local_38.ElementSize < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((local_38.InnerProperty == (FProperty *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = *(int *)((longlong)param_2 + 8);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((longlong)iVar11);
    }
    iVar3 = (local_38.field1_0x8.FreezableArray)->ArrayNum;
    if (iVar3 < iVar11) {
      FScriptArrayHelper::AddValues(&local_38,iVar11 - iVar3);
    }
    else if (iVar11 < iVar3) {
      FScriptArrayHelper::RemoveValues(&local_38,iVar11,iVar3 - iVar11);
    }
    iVar11 = 0;
    FVar13 = local_38.field1_0x8;
    while (iVar11 < *(int *)((longlong)param_2 + 8)) {
      if (*(int *)((longlong)param_2 + 8) == 0) {
        _Src = (void *)0x0;
      }
      else {
        uVar10 = *(ulonglong *)param_2;
        if (((lVar7 & 1) != 0) && ((uVar10 & 1) != 0)) {
          uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)param_2;
        }
        _Src = (void *)((longlong)iVar2 * (longlong)iVar11 + uVar10);
      }
      if ((FVar13.FreezableArray)->ArrayNum == 0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar10 = (FVar13.FreezableArray)->_padding_;
        if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar10 & 1) != 0)) {
          uVar10 = (longlong)&(FVar13.HeapArray)->field_0x0 + ((longlong)uVar10 >> 0x18);
        }
        _Dst = (void *)((longlong)local_38.ElementSize * (longlong)iVar11 + uVar10);
      }
      if (((_Src == (void *)0x0) || (_Dst == (void *)0x0)) ||
         (plVar5 = (longlong *)pFVar12[1]._padding_, _Dst == _Src)) {
LAB_14a24a19e:
        iVar11 = iVar11 + 1;
      }
      else {
        if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar5 + 0xf0))(plVar5,_Dst,_Src,(int)plVar5[6]);
          FVar13 = local_38.field1_0x8;
          goto LAB_14a24a19e;
        }
        memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6]);
        iVar11 = iVar11 + 1;
        FVar13 = local_38.field1_0x8;
      }
    }
  }
  return;
}

// FindProperty @ 14a25c620

FProperty * __cdecl FControlRigOverrideValue::FindProperty(UStruct *param_1,FString *param_2)

{
  FName *pFVar1;
  FProperty *pFVar2;
  FName local_res8 [4];
  
  if ((param_1 != (UStruct *)0x0) && (1 < (param_2->Data).ArrayNum)) {
    pFVar1 = ::FName::FName(local_res8,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    pFVar2 = UStruct::FindPropertyByName(param_1,*pFVar1);
    return pFVar2;
  }
  return (FProperty *)0x0;
}

// FreeDataIfRequired @ 14a25d410

void __thiscall FControlRigOverrideValue::FreeDataIfRequired(FControlRigOverrideValue *this)

{
  FreeDataIfRequired(this,&this->DataArray,&this->DataPropertyHash);
  return;
}

// FreeDataIfRequired @ 14a25d430

void __thiscall
FControlRigOverrideValue::FreeDataIfRequired
          (FControlRigOverrideValue *this,TArray<unsigned_char,TAlignedHeapAllocator<16>_> *param_1,
          uint *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FProperty *pFVar6;
  
  pFVar6 = GetLeafProperty(this);
  if ((((pFVar6 != (FProperty *)0x0) &&
       (bVar5 = IsDataValid(this,&this->DataArray,&this->DataPropertyHash), bVar5)) &&
      (pFVar1 = (param_1->AllocatorInstance).Data, pFVar1 != (FScriptContainerElement *)0x0)) &&
     (pFVar6 = GetLeafProperty(this), pFVar6 != (FProperty *)0x0)) {
    if ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x15 & 1) == 0) {
      if ((pFVar6->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar6->_padding_ + 0x138))(pFVar6,pFVar1);
      }
    }
    else {
      lVar4 = pFVar6[1]._padding_;
      (**(code **)(*(longlong *)pFVar6[1]._padding_ + 0x168))();
      lVar2 = pFVar6[1]._padding_;
      if ((*(int *)(lVar2 + 0x34) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((lVar4 & 1) == 0) {
        pFVar1 = (((TMemoryImagePtr<FScriptContainerElement> *)&pFVar1->field_0x0)->field0_0x0).
                 UnfrozenPtr;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
      }
      else {
        FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)pFVar1);
      }
    }
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  *param_2 = 0;
  return;
}

// GetArrayIndex @ 14a25df30

int __thiscall FControlRigOverrideValue::GetArrayIndex(FControlRigOverrideValue *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Properties).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->Properties).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x28);
}

// GetData @ 14a261fd0

void * __thiscall FControlRigOverrideValue::GetData(FControlRigOverrideValue *this)

{
  if ((this->DataArray).ArrayNum == 0) {
    return (void *)0x0;
  }
  return (this->DataArray).AllocatorInstance.Data;
}

// GetData @ 14a261ff0

void * __thiscall FControlRigOverrideValue::GetData(FControlRigOverrideValue *this)

{
  if ((this->DataArray).ArrayNum == 0) {
    return (void *)0x0;
  }
  return (this->DataArray).AllocatorInstance.Data;
}

// GetLeafProperty @ 14a264cb0

FProperty * __thiscall FControlRigOverrideValue::GetLeafProperty(FControlRigOverrideValue *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FProperty *pFVar4;
  UObject *pUVar5;
  FFieldClass *pFVar6;
  FProperty *pFVar7;
  uint uVar8;
  FWeakObjectPtr *this_00;
  uint uVar9;
  
  iVar1 = (this->Properties).ArrayNum;
  if (iVar1 != 0) {
    uVar8 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar8 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FProperty *)(*pcVar2)();
        return pFVar4;
      }
    }
    this_00 = (FWeakObjectPtr *)
              ((this->Properties).AllocatorInstance.Data +
              (longlong)(this->Properties).ArrayNum * 0x30 + -0x30);
    pUVar5 = FWeakObjectPtr::Get(this_00);
    if (pUVar5 == (UObject *)0x0) {
      ((FFieldPath *)(this_00 + 1))->ResolvedField = (FField *)0x0;
    }
    else {
      pFVar6 = FProperty::StaticClass();
      pFVar4 = (FProperty *)FFieldPath::GetTyped((FFieldPath *)(this_00 + 1),pFVar6,(UStruct *)0x0);
      if (pFVar4 != (FProperty *)0x0) {
        iVar1 = (this->Properties).ArrayNum;
        uVar9 = iVar1 - 1;
        uVar8 = 0;
        if ((int)uVar9 < iVar1) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar4 = (FProperty *)(*pcVar2)();
            return pFVar4;
          }
        }
        if (*(int *)((this->Properties).AllocatorInstance.Data +
                    (longlong)(this->Properties).ArrayNum * 0x30 + -8) == -1) {
          pFVar7 = FProperty::GetOwnerProperty(pFVar4);
          if ((pFVar7 != (FProperty *)0x0) &&
             ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
            pFVar4 = pFVar7;
          }
        }
        else if ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) != 0) {
          return (FProperty *)pFVar4[1]._padding_;
        }
        return pFVar4;
      }
    }
  }
  return (FProperty *)0x0;
}

// GetNumProperties @ 14a266390

int __thiscall FControlRigOverrideValue::GetNumProperties(FControlRigOverrideValue *this)

{
  return (this->Properties).ArrayNum;
}

// GetPath @ 14a266f50

FString * __thiscall FControlRigOverrideValue::GetPath(FControlRigOverrideValue *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FControlRigOverrideValue::GetPath'::__l2::_dynamic_atexit_destructor_for__EmptyPath__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)((longlong)&(this->Path).field0_0x0 + 0xc) == -1) {
    this = (FControlRigOverrideValue *)&EmptyPath;
  }
  return (FString *)this;
}

// GetProperty @ 14a268470

FProperty * __thiscall
FControlRigOverrideValue::GetProperty(FControlRigOverrideValue *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FProperty *pFVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  UObject *pUVar7;
  FWeakObjectPtr *pFVar8;
  
  uVar3 = 0;
  if (param_1 < (this->Properties).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FProperty *)(*pcVar1)();
    return pFVar4;
  }
  pFVar8 = (FWeakObjectPtr *)((this->Properties).AllocatorInstance.Data + (longlong)param_1 * 0x30);
  bVar2 = FWeakObjectPtr::IsValid(pFVar8);
  if (bVar2) {
    pFVar5 = FProperty::StaticClass();
    pFVar6 = FFieldPath::GetTyped((FFieldPath *)(pFVar8 + 1),pFVar5,(UStruct *)0x0);
    if (pFVar6 != (FField *)0x0) {
      uVar3 = 0;
      if (param_1 < (this->Properties).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FProperty *)(*pcVar1)();
        return pFVar4;
      }
      pFVar8 = (FWeakObjectPtr *)
               ((this->Properties).AllocatorInstance.Data + (longlong)param_1 * 0x30);
      pUVar7 = FWeakObjectPtr::Get(pFVar8);
      if (pUVar7 != (UObject *)0x0) {
        pFVar5 = FProperty::StaticClass();
        pFVar4 = (FProperty *)FFieldPath::GetTyped((FFieldPath *)(pFVar8 + 1),pFVar5,(UStruct *)0x0)
        ;
        return pFVar4;
      }
      ((FFieldPath *)(pFVar8 + 1))->ResolvedField = (FField *)0x0;
      return (FProperty *)0x0;
    }
  }
  return (FProperty *)0x0;
}

// GetPropertyHash @ 14a2685b0

uint __thiscall FControlRigOverrideValue::GetPropertyHash(FControlRigOverrideValue *this)

{
  int iVar1;
  UObject *pUVar2;
  FFieldClass *pFVar3;
  FProperty *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FWeakObjectPtr *pFVar8;
  FWeakObjectPtr *this_00;
  uint uVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Properties).ArrayNum;
  this_00 = (FWeakObjectPtr *)(this->Properties).AllocatorInstance.Data;
  pFVar8 = this_00 + (longlong)iVar1 * 6;
  pFVar4 = (FProperty *)0x0;
  while( true ) {
    if ((this->Properties).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FControlRigOverrideValue::FPropertyInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar8) break;
    uVar6 = this_00[5].ObjectIndex;
    uVar7 = (uint)pFVar4 - uVar6 ^ uVar6 >> 0xd;
    uVar5 = (-0x61c88647 - uVar6) - uVar7 ^ uVar7 << 8;
    uVar9 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xd;
    uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 0xc;
    uVar6 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 0x10;
    uVar9 = (uVar9 - uVar6) - uVar7 ^ uVar6 >> 5;
    uVar5 = (uVar7 - uVar9) - uVar6 ^ uVar9 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
    pUVar2 = FWeakObjectPtr::Get(this_00);
    if (pUVar2 == (UObject *)0x0) {
      this_00[1].ObjectIndex = 0;
      this_00[1].ObjectSerialNumber = 0;
      pFVar4 = (FProperty *)0x0;
    }
    else {
      pFVar3 = FProperty::StaticClass();
      pFVar4 = (FProperty *)FFieldPath::GetTyped((FFieldPath *)(this_00 + 1),pFVar3,(UStruct *)0x0);
    }
    uVar7 = GetPropertyHash(pFVar4);
    uVar9 = ((uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf) - uVar7 ^ uVar7 >> 0xd;
    uVar6 = (-0x61c88647 - uVar9) - uVar7 ^ uVar9 << 8;
    uVar5 = (uVar7 - uVar6) - uVar9 ^ uVar6 >> 0xd;
    uVar7 = (uVar9 - uVar5) - uVar6 ^ uVar5 >> 0xc;
    uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 << 0x10;
    uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 3;
    uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 << 10;
    pFVar4 = (FProperty *)(ulonglong)((uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xf);
    this_00 = this_00 + 6;
  }
  return (uint)pFVar4;
}

// GetPropertyHash @ 14a268720

uint __cdecl FControlRigOverrideValue::GetPropertyHash(FProperty *param_1)

{
  ulonglong uVar1;
  UStruct *pUVar2;
  ForAnyElementType FVar3;
  UStruct *pUVar4;
  FProperty *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  FName local_res8;
  TFieldIterator<FProperty> local_38;
  
  if (param_1 != (FProperty *)0x0) {
    uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
    if ((uVar1 >> 0x11 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FString::FString(&::PropertyString,L"FBoolProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l8::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&::_TSS0);
      }
      if (::_TSS1 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&::_TSS1);
      return ::PropertyHash;
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        ::FString::FString(&::PropertyString,L"FUInt16Property");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l11::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&::_TSS2);
      }
      if (::_TSS3 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&::_TSS3);
      if (::_TSS3 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&::_TSS3);
      return ::PropertyHash;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        ::FString::FString(&::PropertyString,L"FUInt32Property");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l14::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&::_TSS4);
      }
      if (::_TSS5 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&::_TSS5);
      if (::_TSS5 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&::_TSS5);
      return ::PropertyHash;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
        ::FString::FString(&::PropertyString,L"FUInt64Property");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l17::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&::_TSS6);
      }
      if (::_TSS7 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&::_TSS7);
      if (::_TSS7 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&::_TSS7);
      return ::PropertyHash;
    }
    bVar9 = (byte)uVar1;
    if ((bVar9 >> 1 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
        ::FString::FString(&::PropertyString,L"FInt8Property");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l20::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&::_TSS8);
      }
      if (::_TSS9 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&::_TSS9);
      if (::_TSS9 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&::_TSS9);
      return ::PropertyHash;
    }
    if ((uVar1 >> 0x1f & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
        ::FString::FString(&::PropertyString,L"FInt16Property");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l23::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&::_TSS10);
      }
      if (::_TSS11 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&::_TSS11);
      if (::_TSS11 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&::_TSS11);
      return ::PropertyHash;
    }
    if ((char)bVar9 < '\0') {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
        ::FString::FString(&::PropertyString,L"FIntProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l26::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&::_TSS12);
      }
      if (::_TSS13 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&::_TSS13);
      if (::_TSS13 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&::_TSS13);
      return ::PropertyHash;
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
        ::FString::FString(&::PropertyString,L"FInt64Property");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l29::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&::_TSS14);
      }
      if (::_TSS15 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&::_TSS15);
      if (::_TSS15 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&::_TSS15);
      return ::PropertyHash;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
        ::FString::FString(&::PropertyString,L"FFloatProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l32::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&_TSS16);
      }
      if (_TSS17 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&_TSS17);
      if (_TSS17 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&_TSS17);
      return ::PropertyHash;
    }
    if ((uVar1 >> 0x20 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < _TSS18) && (_Init_thread_header(&_TSS18), _TSS18 == -1)) {
        ::FString::FString(&::PropertyString,L"FDoubleProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l35::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&_TSS18);
      }
      if (_TSS19 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&_TSS19);
      if (_TSS19 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&_TSS19);
      return ::PropertyHash;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < _TSS20) && (_Init_thread_header(&_TSS20), _TSS20 == -1)) {
        ::FString::FString(&::PropertyString,L"FNameProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l38::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&_TSS20);
      }
      if (_TSS21 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&_TSS21);
      if (_TSS21 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&_TSS21);
      return ::PropertyHash;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < _TSS22) && (_Init_thread_header(&_TSS22), _TSS22 == -1)) {
        ::FString::FString(&::PropertyString,L"FStrProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l41::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&_TSS22);
      }
      if (_TSS23 <= *piVar10) {
        return ::PropertyHash;
      }
      _Init_thread_header(&_TSS23);
      if (_TSS23 != -1) {
        return ::PropertyHash;
      }
      if (::PropertyString.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar11 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
      }
      ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
      _Init_thread_footer(&_TSS23);
      return ::PropertyHash;
    }
    if ((bVar9 >> 6 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < _TSS24) && (_Init_thread_header(&_TSS24), _TSS24 == -1)) {
        ::FString::FString(&::PropertyString,L"ByteProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l44::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&_TSS24);
      }
      iVar11 = 0;
      if ((*piVar10 < _TSS25) && (_Init_thread_header(&_TSS25), _TSS25 == -1)) {
        iVar8 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
        if (::PropertyString.Data.ArrayNum == 0) {
          iVar8 = iVar11;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
        _Init_thread_footer(&_TSS25);
      }
      if (param_1[1]._padding_ == 0) {
        return ::PropertyHash;
      }
      local_res8 = *(FName *)(param_1[1]._padding_ + 0x18);
      ::FName::ToString(&local_res8,(FString *)&local_38);
      pUVar2 = (UStruct *)L"";
      if ((int)local_38.Field != 0) {
        iVar11 = (int)local_38.Field + -1;
        pUVar2 = local_38.Struct;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)pUVar2);
      uVar6 = HashCombine(::PropertyHash,uVar6);
      if (local_38.Struct == (UStruct *)0x0) {
        return uVar6;
      }
      FMemory::Free(local_38.Struct);
      return uVar6;
    }
    if ((uVar1 >> 0x30 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < _TSS26) && (_Init_thread_header(&_TSS26), _TSS26 == -1)) {
        ::FString::FString(&::PropertyString,L"EnumProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l50::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&_TSS26);
      }
      iVar11 = 0;
      if ((*piVar10 < _TSS27) && (_Init_thread_header(&_TSS27), _TSS27 == -1)) {
        iVar8 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
        if (::PropertyString.Data.ArrayNum == 0) {
          iVar8 = iVar11;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
        _Init_thread_footer(&_TSS27);
      }
      if (param_1[1]._padding_ == 0) {
        return ::PropertyHash;
      }
      local_res8 = *(FName *)(param_1[1]._padding_ + 0x18);
      ::FName::ToString(&local_res8,(FString *)&local_38);
      pUVar2 = (UStruct *)L"";
      if ((int)local_38.Field != 0) {
        iVar11 = (int)local_38.Field + -1;
        pUVar2 = local_38.Struct;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)pUVar2);
      uVar6 = HashCombine(::PropertyHash,uVar6);
      if (local_38.Struct == (UStruct *)0x0) {
        return uVar6;
      }
      FMemory::Free(local_38.Struct);
      return uVar6;
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < _TSS28) && (_Init_thread_header(&_TSS28), _TSS28 == -1)) {
        ::FString::FString(&::PropertyString,L"ArrayProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l56::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&_TSS28);
      }
      if ((*piVar10 < _TSS29) && (_Init_thread_header(&_TSS29), _TSS29 == -1)) {
        if (::PropertyString.Data.ArrayNum == 0) {
          iVar11 = 0;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        else {
          iVar11 = ::PropertyString.Data.ArrayNum + -1;
          FVar3 = ::PropertyString.Data.AllocatorInstance;
        }
        ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar3.Data);
        _Init_thread_footer(&_TSS29);
      }
      uVar6 = GetPropertyHash((FProperty *)param_1[1]._padding_);
      uVar6 = HashCombine(::PropertyHash,uVar6);
      return uVar6;
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < _TSS30) && (_Init_thread_header(&_TSS30), _TSS30 == -1)) {
        ::FString::FString(&::PropertyString,L"ObjectProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l59::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&_TSS30);
      }
      iVar11 = 0;
      if ((*piVar10 < _TSS31) && (_Init_thread_header(&_TSS31), _TSS31 == -1)) {
        iVar8 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
        if (::PropertyString.Data.ArrayNum == 0) {
          iVar8 = iVar11;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
        _Init_thread_footer(&_TSS31);
      }
      if (param_1[1]._padding_ == 0) {
        return ::PropertyHash;
      }
      local_res8 = *(FName *)(param_1[1]._padding_ + 0x18);
      ::FName::ToString(&local_res8,(FString *)&local_38);
      pUVar2 = (UStruct *)L"";
      if ((int)local_38.Field != 0) {
        iVar11 = (int)local_38.Field + -1;
        pUVar2 = local_38.Struct;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)pUVar2);
      uVar6 = HashCombine(::PropertyHash,uVar6);
      if (local_38.Struct == (UStruct *)0x0) {
        return uVar6;
      }
      FMemory::Free(local_38.Struct);
      return uVar6;
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      piVar10 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar10 < _TSS32) && (_Init_thread_header(&_TSS32), _TSS32 == -1)) {
        ::FString::FString(&::PropertyString,L"StructProperty");
        atexit(`FControlRigOverrideValue::GetPropertyHash'::__l65::
               _dynamic_atexit_destructor_for__PropertyString__);
        _Init_thread_footer(&_TSS32);
      }
      iVar11 = 0;
      if ((*piVar10 < _TSS33) && (_Init_thread_header(&_TSS33), _TSS33 == -1)) {
        iVar8 = ::PropertyString.Data.ArrayNum + -1;
        FVar3 = ::PropertyString.Data.AllocatorInstance;
        if (::PropertyString.Data.ArrayNum == 0) {
          iVar8 = iVar11;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        ::PropertyHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
        _Init_thread_footer(&_TSS33);
      }
      pUVar2 = (UStruct *)param_1[1]._padding_;
      if (pUVar2 == (UStruct *)0x0) {
        return ::PropertyHash;
      }
      local_res8 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_res8,(FString *)&local_38);
      pUVar4 = (UStruct *)L"";
      if ((int)local_38.Field != 0) {
        iVar11 = (int)local_38.Field + -1;
        pUVar4 = local_38.Struct;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)pUVar4);
      uVar6 = HashCombine(::PropertyHash,uVar6);
      if (local_38.Struct != (UStruct *)0x0) {
        FMemory::Free(local_38.Struct);
      }
      local_38.Field = pUVar2->ChildProperties;
      local_38.InterfaceIndex = -1;
      local_38.bIncludeSuper = true;
      local_38.bIncludeDeprecated = true;
      local_38.bIncludeInterface = false;
      local_38.Struct = pUVar2;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      pFVar5 = (FProperty *)local_38.Field;
      while (pFVar5 != (FProperty *)0x0) {
        local_38.Field = (FField *)pFVar5;
        uVar7 = GetPropertyHash(pFVar5);
        uVar6 = uVar6 - uVar7 ^ uVar7 >> 0xd;
        uVar12 = (-0x61c88647 - uVar7) - uVar6 ^ uVar6 << 8;
        uVar7 = (uVar7 - uVar12) - uVar6 ^ uVar12 >> 0xd;
        uVar6 = (uVar6 - uVar7) - uVar12 ^ uVar7 >> 0xc;
        uVar12 = (uVar12 - uVar6) - uVar7 ^ uVar6 << 0x10;
        uVar7 = (uVar7 - uVar12) - uVar6 ^ uVar12 >> 5;
        uVar6 = (uVar6 - uVar7) - uVar12 ^ uVar7 >> 3;
        uVar12 = (uVar12 - uVar6) - uVar7 ^ uVar6 << 10;
        local_38.Field = (FField *)pFVar5->_padding_;
        uVar6 = (uVar7 - uVar12) - uVar6 ^ uVar12 >> 0xf;
        TFieldIterator<FProperty>::IterateToNext(&local_38);
        pFVar5 = (FProperty *)local_38.Field;
      }
      return uVar6;
    }
  }
  return 0;
}

// GetRootProperty @ 14a269fe0

FProperty * __thiscall FControlRigOverrideValue::GetRootProperty(FControlRigOverrideValue *this)

{
  FFieldPath *this_00;
  int iVar1;
  FWeakObjectPtr *this_01;
  code *pcVar2;
  bool bVar3;
  FProperty *pFVar4;
  UObject *pUVar5;
  FFieldClass *pFVar6;
  
  iVar1 = (this->Properties).ArrayNum;
  if (iVar1 == 0) {
    return (FProperty *)0x0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FProperty *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_01 = (FWeakObjectPtr *)(this->Properties).AllocatorInstance.Data;
  this_00 = (FFieldPath *)(this_01 + 1);
  pUVar5 = FWeakObjectPtr::Get(this_01);
  if (pUVar5 != (UObject *)0x0) {
    pFVar6 = FProperty::StaticClass();
    pFVar4 = (FProperty *)FFieldPath::GetTyped(this_00,pFVar6,(UStruct *)0x0);
    return pFVar4;
  }
  this_00->ResolvedField = (FField *)0x0;
  return (FProperty *)0x0;
}

// GetSubjectKey @ 14a26b9f0

FName * __thiscall FControlRigOverrideValue::GetSubjectKey(FControlRigOverrideValue *this)

{
  FName *pFVar1;
  
  pFVar1 = &InvalidName;
  if ((this->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    pFVar1 = (FName *)&this->SubjectKey;
  }
  return pFVar1;
}

// Identical @ 14a270090

bool __thiscall
FControlRigOverrideValue::Identical
          (FControlRigOverrideValue *this,FControlRigOverrideValue *param_1)

{
  bool bVar1;
  
  if (this->Hash != param_1->Hash) {
    return false;
  }
  if ((param_1->DataArray).ArrayNum == 0) {
    bVar1 = IdenticalValue(this,(void *)0x0);
    return bVar1;
  }
  bVar1 = IdenticalValue(this,(param_1->DataArray).AllocatorInstance.Data);
  return bVar1;
}

// IdenticalValue @ 14a2700d0

bool __thiscall
FControlRigOverrideValue::IdenticalValue(FControlRigOverrideValue *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  
  if ((((*(int *)((longlong)&(this->Path).field0_0x0 + 0xc) != -1) &&
       (*(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) != -1)) &&
      ((this->DataArray).ArrayNum != 0)) &&
     ((this->DataArray).AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    pFVar4 = GetLeafProperty(this);
    if (pFVar4 != (FProperty *)0x0) {
      bVar2 = IsDataValid(this,&this->DataArray,&this->DataPropertyHash);
      if ((bVar2) && (param_1 != (void *)0x0)) {
        pFVar4 = GetLeafProperty(this);
        if (pFVar4 == (FProperty *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("LeafProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigOverride.cpp"
                             ,0x419,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        if ((this->DataArray).ArrayNum == 0) {
          pFVar5 = (FScriptContainerElement *)0x0;
        }
        else {
          pFVar5 = (this->DataArray).AllocatorInstance.Data;
        }
                    /* WARNING: Could not recover jumptable at 0x00014a27019e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(pFVar4->_padding_ + 0xb8))(pFVar4,pFVar5,param_1,0);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

// IdenticalValueInSubject @ 14a2701c0

bool __thiscall
FControlRigOverrideValue::IdenticalValueInSubject(FControlRigOverrideValue *this,void *param_1)

{
  bool bVar1;
  uchar *puVar2;
  
  puVar2 = SubjectPtrToValuePtr(this,param_1,false);
  bVar1 = IdenticalValue(this,puVar2);
  return bVar1;
}

// IsDataValid @ 14a274250

bool __thiscall
FControlRigOverrideValue::IsDataValid
          (FControlRigOverrideValue *this,TArray<unsigned_char,TAlignedHeapAllocator<16>_> *param_1,
          uint *param_2)

{
  uint uVar1;
  FProperty *pFVar2;
  
  pFVar2 = GetLeafProperty(this);
  if ((pFVar2 != (FProperty *)0x0) && (param_1->ArrayNum == pFVar2->ElementSize * pFVar2->ArrayDim))
  {
    uVar1 = GetPropertyHash(this);
    return uVar1 == *param_2;
  }
  return false;
}

// IsDataValid @ 14a2742c0

bool __thiscall FControlRigOverrideValue::IsDataValid(FControlRigOverrideValue *this)

{
  bool bVar1;
  FProperty *pFVar2;
  
  pFVar2 = GetLeafProperty(this);
  if (pFVar2 != (FProperty *)0x0) {
    bVar1 = IsDataValid(this,&this->DataArray,&this->DataPropertyHash);
    return bVar1;
  }
  return false;
}

// IsValid @ 14a275670

bool __thiscall FControlRigOverrideValue::IsValid(FControlRigOverrideValue *this)

{
  bool bVar1;
  FProperty *pFVar2;
  
  if ((((*(int *)((longlong)&(this->Path).field0_0x0 + 0xc) != -1) &&
       (*(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) != -1)) &&
      ((this->DataArray).ArrayNum != 0)) &&
     ((this->DataArray).AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    pFVar2 = GetLeafProperty(this);
    if (pFVar2 != (FProperty *)0x0) {
      bVar1 = IsDataValid(this,&this->DataArray,&this->DataPropertyHash);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// Reset @ 14a289200

void __thiscall FControlRigOverrideValue::Reset(FControlRigOverrideValue *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FPropertyInfo *pFVar4;
  
  FreeDataIfRequired(this,&this->DataArray,&this->DataPropertyHash);
  if (*(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) != -1) {
    pFVar3 = (this->CachedStringValue).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->CachedStringValue).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->CachedStringValue).field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) = 0xffffffff;
  }
  piVar1 = &(this->Properties).ArrayMax;
  pFVar4 = (FPropertyInfo *)(this->Properties).AllocatorInstance.Data;
  iVar2 = (this->Properties).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FControlRigOverrideValue::FPropertyInfo,int>(pFVar4,iVar2);
    (this->Properties).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->Properties).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FControlRigOverrideValue::FPropertyInfo,int>(pFVar4,iVar2);
    (this->Properties).ArrayNum = 0;
  }
  this->Hash = 0;
  return;
}

// Serialize @ 14a28da30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FControlRigOverrideValue::Serialize(FControlRigOverrideValue *this,FArchive *param_1)

{
  TArray<FControlRigOverrideValue::FPropertyInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  TOptional<FString>_u_0 *pTVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  UObject *pUVar16;
  FFieldClass *pFVar17;
  FField *pFVar18;
  void *pvVar19;
  longlong lVar20;
  FProperty *pFVar21;
  FStructuredArchiveFromArchive *pFVar22;
  FStructuredArchiveSlot FVar23;
  undefined8 uVar24;
  FWeakObjectPtr *this_00;
  ulong64 uVar25;
  TWeakFieldPtr<FProperty> *this_01;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  undefined1 auStackY_498 [32];
  uint local_448;
  char local_444;
  uint local_440;
  uint local_43c;
  uint local_438;
  uint local_434;
  uint local_430 [2];
  TStringBuilderBase<wchar_t> local_428;
  TOptional<FString>_u_0 local_408;
  TOptional<FString>_u_0 local_3f8;
  TOptional<FString>_u_0 local_3e8;
  uint local_3d8;
  longlong local_3d0;
  TOptional<FString>_u_0 local_3c8;
  FString local_3b8;
  undefined1 local_3a8 [8];
  FFieldPath local_3a0;
  uint local_380 [6];
  FStructuredArchiveFromArchive local_368;
  FStructuredArchiveFromArchive local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_3f8._8_8_ = this;
  if ((param_1->field_0x28 & 1) != 0) {
    Reset(this);
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  TOptional<FName>::Serialize(&this->SubjectKey,param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  uVar27 = 0;
  local_448 = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_448 = (this->Properties).ArrayNum;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_448,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_448);
      }
    }
    else {
      local_448 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if (0 < (int)local_448) {
      lVar20 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar27 < (this->Properties).ArrayNum) {
          uVar14 = ~uVar27 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pFVar26 = (this->Properties).AllocatorInstance.Data + lVar20;
        (**(code **)(*(longlong *)param_1 + 0x138))(param_1,pFVar26);
        ::operator<<(param_1,(FFieldPath *)(pFVar26 + 8));
        uVar14 = 0;
        if ((int)uVar27 < (this->Properties).ArrayNum) {
          uVar14 = ~uVar27 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pFVar26 = (this->Properties).AllocatorInstance.Data + lVar20 + 0x28;
        puVar5 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar26,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar26);
          }
        }
        else {
          *(undefined4 *)pFVar26 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar27 = uVar27 + 1;
        lVar20 = lVar20 + 0x30;
      } while ((int)uVar27 < (int)local_448);
    }
  }
  else {
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_448);
      }
    }
    else {
      local_448 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    pTVar1 = &this->Properties;
    if ((int)local_448 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_448);
    }
    piVar3 = &(this->Properties).ArrayMax;
    if ((this->Properties).ArrayMax < (int)local_448) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,local_448,&pTVar1->AllocatorInstance,(this->Properties).ArrayNum,piVar3);
    }
    uVar24 = this;
    if (0 < (int)local_448) {
      do {
        local_3a8._0_4_ = 0;
        local_3a8._4_4_ = 0;
        local_3a0.ResolvedField = (FField *)0x0;
        local_3a0.ResolvedOwner.WeakPtr.ObjectIndex = 0;
        local_3a0.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
        local_3a0.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a0.Path.ArrayNum = 0;
        local_3a0.Path.ArrayMax = 0;
        local_380[0] = 0xffffffff;
        (**(code **)(*(longlong *)param_1 + 0x138))(param_1,local_3a8);
        ::operator<<(param_1,&local_3a0);
        plVar4 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_380);
          }
        }
        else {
          local_380[0] = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        pFVar26 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar26 <= (FScriptContainerElement *)local_3a8) &&
            ((FScriptContainerElement *)local_3a8 < pFVar26 + (longlong)*piVar3 * 0x30)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        iVar13 = (this->Properties).ArrayNum;
        if (iVar13 == *piVar3) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&pTVar1->AllocatorInstance,piVar3);
          (this->Properties).ArrayNum = iVar13;
        }
        (this->Properties).ArrayNum = iVar13 + 1;
        this_01 = (TWeakFieldPtr<FProperty> *)
                  ((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x30);
        TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>
                  (this_01,(TWeakFieldPtr<FProperty> *)local_3a8);
        this_01[1].Owner.WeakPtr.ObjectIndex = local_380[0];
        if (local_3a0.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a0.Path.AllocatorInstance.Data);
        }
        uVar27 = uVar27 + 1;
        uVar24 = local_3f8._8_8_;
      } while ((int)uVar27 < (int)local_448);
    }
    uVar27 = 0;
    local_428.End = (wchar_t *)0x0;
    local_428.bIsDynamic = false;
    local_428.bIsExternal = false;
    local_444 = '\x01';
    local_428.Base = (wchar_t *)0x0;
    local_428.CurPos = (wchar_t *)0x0;
    if (0 < (int)local_448) {
      local_3d0 = 0;
      local_3f8._8_8_ = (TOptional<FString>_u_0 *)0x0;
      do {
        uVar10 = local_3f8._8_8_;
        cVar8 = local_444;
        local_3d8 = ~uVar27 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar27 < *(int *)(uVar24 + 0x38)) {
          uVar14 = local_3d8;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        this_00 = (FWeakObjectPtr *)
                  ((((TOptional<FString>_u_0 *)(uVar24 + 0x30))->TypedValue).Data.AllocatorInstance.
                   Data + uVar10);
        pUVar16 = FWeakObjectPtr::Get(this_00);
        if (pUVar16 == (UObject *)0x0) {
          ((FFieldPath *)(this_00 + 1))->ResolvedField = (FField *)0x0;
LAB_14a28e0d8:
          local_428.CurPos = local_428.Base;
          break;
        }
        pFVar17 = FProperty::StaticClass();
        pFVar18 = FFieldPath::GetTyped((FFieldPath *)(this_00 + 1),pFVar17,(UStruct *)0x0);
        FVar7 = PathSeparator.Data.AllocatorInstance;
        if (pFVar18 == (FField *)0x0) goto LAB_14a28e0d8;
        if (cVar8 == '\0') {
          iVar13 = PathSeparator.Data.ArrayNum + -1;
          if (PathSeparator.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          uVar25 = (ulong64)iVar13;
          if (local_428.End < local_428.CurPos + uVar25) {
            TStringBuilderBase<wchar_t>::Extend(&local_428,uVar25);
          }
          if (iVar13 != 0) {
            pvVar19 = FGenericPlatformString::Memcpy(local_428.CurPos,FVar7.Data,uVar25 * 2);
            local_428.CurPos = (wchar_t *)((longlong)pvVar19 + uVar25 * 2);
          }
        }
        else {
          local_444 = '\0';
        }
        bVar11 = IsThisNotNull(pFVar18,"FField::GetName");
        if (bVar11) {
          ::FName::ToString(&pFVar18->NamePrivate,&local_3b8);
        }
        else {
          ::FString::FString(&local_3b8,L"None");
        }
        FVar7.Data = local_3b8.Data.AllocatorInstance.Data;
        iVar13 = local_3b8.Data.ArrayNum + -1;
        if (local_3b8.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        uVar25 = (ulong64)iVar13;
        if (local_428.End < local_428.CurPos + uVar25) {
          TStringBuilderBase<wchar_t>::Extend(&local_428,uVar25);
        }
        if (iVar13 != 0) {
          pvVar19 = FGenericPlatformString::Memcpy(local_428.CurPos,FVar7.Data,uVar25 * 2);
          local_428.CurPos = (wchar_t *)((longlong)pvVar19 + uVar25 * 2);
        }
        if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        }
        bVar11 = IsThisNotNull(pFVar18,"FField::GetName");
        if (bVar11) {
          ::FName::ToString(&pFVar18->NamePrivate,&local_408.TypedValue);
        }
        else {
          ::FString::FString(&local_408.TypedValue,L"None");
        }
        if (&local_408 != (TOptional<FString>_u_0 *)uVar24) {
          pFVar26 = (((TOptional<FString>_u_0 *)&(((FString *)uVar24)->Data).AllocatorInstance)->
                    TypedValue).Data.AllocatorInstance.Data;
          if (pFVar26 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar26);
          }
          (((TOptional<FString>_u_0 *)&(((FString *)uVar24)->Data).AllocatorInstance)->TypedValue).
          Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_408.TypedValue.Data.AllocatorInstance.Data;
          *(int *)(uVar24 + 8) = local_408.TypedValue.Data.ArrayNum;
          uVar9 = local_408.TypedValue.Data.ArrayMax;
          local_408.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          (((FString *)uVar24)->Data).ArrayMax = local_408.TypedValue.Data.ArrayMax;
          local_408._8_8_ = 0;
          if ((uVar9 == -1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x171,
                                  L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
        }
        if (local_408.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_408.TypedValue.Data.AllocatorInstance.Data);
        }
        lVar20 = local_3d0;
        uVar14 = local_3d8;
        uVar15 = 0;
        if ((int)uVar27 < *(int *)(uVar24 + 0x38)) {
          uVar15 = local_3d8;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        uVar10 = local_3f8._8_8_;
        if (*(int *)((((TOptional<FString>_u_0 *)(uVar24 + 0x30))->TypedValue).Data.
                     AllocatorInstance.Data + (longlong)(local_3f8._8_8_ + 0x28)) != -1) {
          if (((((FString *)uVar24)->Data).ArrayMax == -1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          uVar15 = 0;
          if ((int)uVar27 < *(int *)(uVar24 + 0x38)) {
            uVar15 = uVar14;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          ::FString::AppendfImpl((FString *)uVar24,L"[%d]");
        }
        local_3d0 = lVar20 + 1;
        local_3f8._8_8_ = uVar10 + 0x30;
        uVar27 = uVar27 + 1;
      } while ((int)uVar27 < (int)local_448);
    }
    if (0 < (int)((longlong)local_428.CurPos - (longlong)local_428.Base >> 1)) {
      if (local_428.End < local_428.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_428,1);
      }
      *local_428.CurPos = L'\0';
      ::FString::FString(&local_3e8.TypedValue,local_428.Base);
      if (&local_3e8 != (TOptional<FString>_u_0 *)uVar24) {
        pFVar26 = (((TOptional<FString>_u_0 *)&(((FString *)uVar24)->Data).AllocatorInstance)->
                  TypedValue).Data.AllocatorInstance.Data;
        if (pFVar26 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar26);
        }
        (((TOptional<FString>_u_0 *)&(((FString *)uVar24)->Data).AllocatorInstance)->TypedValue).
        Data.AllocatorInstance.Data =
             (FScriptContainerElement *)local_3e8.TypedValue.Data.AllocatorInstance.Data;
        *(int *)(uVar24 + 8) = local_3e8.TypedValue.Data.ArrayNum;
        uVar9 = local_3e8.TypedValue.Data.ArrayMax;
        local_3e8.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        (((FString *)uVar24)->Data).ArrayMax = local_3e8.TypedValue.Data.ArrayMax;
        local_3e8._8_8_ = 0;
        if ((uVar9 == -1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      if (local_3e8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3e8.TypedValue.Data.AllocatorInstance.Data);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_428);
    this = (FControlRigOverrideValue *)uVar24;
  }
  lVar20 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_3f8.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  if ((longlong *)plVar4[1] < (longlong *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_3f8);
    }
  }
  else {
    local_3f8.TypedValue.Data.AllocatorInstance.Data = (ForAnyElementType)*(longlong *)*plVar4;
    *plVar4 = *plVar4 + 8;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    pFVar21 = GetLeafProperty(this);
    if (pFVar21 == (FProperty *)0x0) {
      return true;
    }
    local_438 = pFVar21->ElementSize * pFVar21->ArrayDim;
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_438,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_438);
      }
    }
    else {
      local_438 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    local_434 = *(uint *)&(((TOptional<FString>_u_0 *)((longlong)this + 0x50))->TypedValue).Data.
                          AllocatorInstance.Data;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_434,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_434);
      }
    }
    else {
      local_434 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    pvVar19 = AllocateDataIfRequired
                        (this,(TArray<unsigned_char,TAlignedHeapAllocator<16>_> *)
                              &((TOptional<FString>_u_0 *)((longlong)this + 0x40))->TypedValue,
                         (uint *)((longlong)this + 0x50));
    pcVar6 = *(code **)(pFVar21->_padding_ + 0xc0);
    pFVar22 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1d8,param_1);
    FVar23 = FStructuredArchiveFromArchive::GetSlot(pFVar22);
    (*pcVar6)(pFVar21,*(undefined8 *)FVar23,pvVar19,0);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d8);
    uVar24 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    local_430[0] = (int)uVar24 - (int)lVar20;
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar20);
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_430,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_430);
      }
    }
    else {
      local_430[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar24);
    return true;
  }
  pFVar21 = GetLeafProperty(this);
  if (pFVar21 != (FProperty *)0x0) {
    local_440 = 0;
    local_43c = 0;
    iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
    if (iVar13 < 0x28) {
      local_440 = pFVar21->ElementSize * pFVar21->ArrayDim;
      local_43c = GetPropertyHash(this);
    }
    else {
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_440);
        }
      }
      else {
        local_440 = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_43c);
        }
      }
      else {
        local_43c = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
    }
    if ((pFVar21->ElementSize * pFVar21->ArrayDim == local_440) &&
       (uVar27 = GetPropertyHash(this), uVar27 == local_43c)) {
      pvVar19 = AllocateDataIfRequired
                          (this,(TArray<unsigned_char,TAlignedHeapAllocator<16>_> *)
                                &((TOptional<FString>_u_0 *)((longlong)this + 0x40))->TypedValue,
                           (uint *)((longlong)this + 0x50));
      pcVar6 = *(code **)(pFVar21->_padding_ + 0xc0);
      pFVar22 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_368,param_1);
      FVar23 = FStructuredArchiveFromArchive::GetSlot(pFVar22);
      (*pcVar6)(pFVar21,*(undefined8 *)FVar23,pvVar19);
      FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_368);
      local_3c8.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_3c8._8_8_ = 0;
      (**(code **)(pFVar21->_padding_ + 0xe0))(pFVar21,&local_3c8,pvVar19);
      pTVar2 = (TOptional<FString>_u_0 *)((longlong)this + 0x10);
      if (&local_3c8 != pTVar2) {
        pFVar26 = (pTVar2->TypedValue).Data.AllocatorInstance.Data;
        if (pFVar26 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar26);
        }
        uVar24 = local_3c8.TypedValue.Data.AllocatorInstance.Data;
        lVar20 = (longlong)local_3c8.TypedValue.Data.ArrayNum;
        piVar3 = (int *)((longlong)this + 0x1c);
        (pTVar2->TypedValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)((longlong)this + 0x18) = local_3c8.TypedValue.Data.ArrayNum;
        if (local_3c8.TypedValue.Data.ArrayNum == 0) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_3c8.TypedValue.Data.ArrayNum,0,
                     (ForAnyElementType *)&pTVar2->TypedValue,local_3c8.TypedValue.Data.ArrayNum,
                     piVar3);
          memcpy((pTVar2->TypedValue).Data.AllocatorInstance.Data,(void *)uVar24,lVar20 * 2);
        }
        if ((*piVar3 == -1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      if (local_3c8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3c8.TypedValue.Data.AllocatorInstance.Data);
        UpdateHash(this);
        return true;
      }
      goto LAB_14a28e51e;
    }
    *(undefined4 *)
     &(((TOptional<FString>_u_0 *)((longlong)this + 0x50))->TypedValue).Data.AllocatorInstance.Data
         = 0;
    *(undefined4 *)((longlong)this + 0x48) = 0;
    if (*(int *)((longlong)this + 0x4c) < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)
                       &((TOptional<FString>_u_0 *)((longlong)this + 0x40))->TypedValue,0,
                 (int *)((longlong)this + 0x4c));
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x1b8))
            (param_1,(FScriptContainerElement *)
                     ((longlong)local_3f8.TypedValue.Data.AllocatorInstance.Data + lVar20));
LAB_14a28e51e:
  UpdateHash(this);
  return true;
}

// SetFromString @ 14a292220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a292bd9) */
/* WARNING: Removing unreachable block (ram,0x00014a292c0c) */
/* WARNING: Removing unreachable block (ram,0x00014a292c0d) */
/* WARNING: Removing unreachable block (ram,0x00014a2928e6) */
/* WARNING: Removing unreachable block (ram,0x00014a292919) */
/* WARNING: Removing unreachable block (ram,0x00014a29291a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FControlRigOverrideValue::SetFromString
          (FControlRigOverrideValue *this,FString *param_1,
          TFunction<void___cdecl(wchar_t_const_*,ELogVerbosity::Type)> *param_2)

{
  int iVar1;
  uint uVar2;
  UScriptStruct *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  ForAnyElementType this_00;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  FProperty *this_01;
  FProperty *pFVar12;
  UScriptStruct *pUVar13;
  void *pvVar14;
  VectorRegister4Double *pVVar15;
  ForAnyElementType FVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  int *piVar19;
  longlong lVar20;
  undefined8 *puVar21;
  TTransform<double> *pTVar22;
  TOptional<FString> *pTVar23;
  bool bVar24;
  undefined1 auStackY_2b8 [32];
  FString local_278;
  uint local_268 [2];
  FString local_260;
  TArray<unsigned_char,TAlignedHeapAllocator<16>_> local_248;
  FString local_238;
  TArray<FString,TSizedDefaultAllocator<32>_> local_228;
  TArray<FString,TSizedDefaultAllocator<32>_> local_218;
  TArray<FString,TSizedDefaultAllocator<32>_> local_208;
  FString *local_1f8;
  int *local_1f0;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  TTransform<double> local_178;
  FString local_118;
  FOutputDevice local_108;
  int local_f8;
  undefined1 local_f4;
  double local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_178.Translation.XY.m128d_f64[0] = 0.0;
  local_1f0 = (int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc);
  local_178.Translation.XY.m128d_f64[1] = 0.0;
  pVVar15 = &local_178.Translation;
  if (*(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) != -1) {
    pVVar15 = (VectorRegister4Double *)&this->CachedStringValue;
  }
  iVar11 = (param_1->Data).ArrayNum;
  iVar1 = *(int *)((longlong)&pVVar15->XY + 8);
  local_1f8 = param_1;
  if (iVar11 == iVar1) {
    if (iVar11 < 2) {
      bVar24 = false;
    }
    else {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          (wchar_t *)
                          (((TOptional<FString>_u_0 *)&pVVar15->XY)->TypedValue).Data.
                          AllocatorInstance.Data);
      bVar24 = iVar11 != 0;
    }
  }
  else {
    bVar24 = iVar11 + iVar1 != 1;
  }
  if (!bVar24) {
    return false;
  }
  this_01 = GetLeafProperty(this);
  if (this_01 == (FProperty *)0x0) {
    return false;
  }
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_268[0] = 0;
  AllocateDataIfRequired(this,&local_248,local_268);
  local_178.Translation.ZW.m128d_f64[0] = *(double *)param_2;
  local_178.Scale3D.ZW.m128d_f64[1] = 0.0;
  if (local_178.Translation.ZW.m128d_f64[0] != 0.0) {
    puVar21 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar21 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar21)(puVar21);
  }
  FOutputDevice::FOutputDevice(&local_108);
  local_f8 = 0;
  local_108._padding_ = (longlong)&___7FControlRigOverrideValueErrorPipe__6B_;
  local_f4 = 5;
  local_e8 = local_178.Translation.ZW.m128d_f64[0];
  local_c0 = (longlong *)0x0;
  if (local_178.Translation.ZW.m128d_f64[0] != 0.0) {
    pVVar15 = &local_178.Scale3D;
    if ((VectorRegister4Double *)local_178.Scale3D.ZW.m128d_f64[1] != (VectorRegister4Double *)0x0)
    {
      pVVar15 = (VectorRegister4Double *)local_178.Scale3D.ZW.m128d_f64[1];
    }
    (**(code **)(pVVar15->XY).m128d_f64[0])();
    if (local_178.Translation.ZW.m128d_f64[0] != 0.0) {
      pVVar15 = &local_178.Scale3D;
      if ((VectorRegister4Double *)local_178.Scale3D.ZW.m128d_f64[1] != (VectorRegister4Double *)0x0
         ) {
        pVVar15 = (VectorRegister4Double *)local_178.Scale3D.ZW.m128d_f64[1];
      }
      (**(code **)((longlong)(pVVar15->XY).m128d_f64[0] + 0x10))();
    }
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar24 = FProperty::ValidateImportFlags(this_01,0,&local_108);
  if ((bVar24) && ((FScriptContainerElement *)pwVar17 != (FScriptContainerElement *)0x0)) {
    (**(code **)(this_01->_padding_ + 0xe8))(this_01,pwVar17);
  }
  if (local_f8 == 0) {
    FreeDataIfRequired(this,&this->DataArray,&this->DataPropertyHash);
    pFVar4 = (this->DataArray).AllocatorInstance.Data;
    lVar20._0_4_ = (this->DataArray).ArrayNum;
    lVar20._4_4_ = (this->DataArray).ArrayMax;
    (this->DataArray).AllocatorInstance.Data = local_248.AllocatorInstance.Data;
    (this->DataArray).ArrayNum = local_248.ArrayNum;
    (this->DataArray).ArrayMax = local_248.ArrayMax;
    uVar2 = this->DataPropertyHash;
    this->DataPropertyHash = local_268[0];
    local_268[0] = uVar2;
    local_248.AllocatorInstance.Data = pFVar4;
    local_248._8_8_ = lVar20;
    goto LAB_14a292efa;
  }
  pFVar12 = GetLeafProperty(this);
  if ((((pFVar12 != (FProperty *)0x0) &&
       (bVar24 = IsDataValid(this,&this->DataArray,&this->DataPropertyHash),
       this_00.Data = local_248.AllocatorInstance.Data, bVar24)) &&
      (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) &&
     (pFVar12 = GetLeafProperty(this), pFVar12 != (FProperty *)0x0)) {
    if ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x15 & 1) == 0) {
      if ((pFVar12->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar12->_padding_ + 0x138))(pFVar12,local_248.AllocatorInstance.Data);
      }
    }
    else {
      lVar6 = pFVar12[1]._padding_;
      (**(code **)(*(longlong *)pFVar12[1]._padding_ + 0x168))();
      lVar20 = pFVar12[1]._padding_;
      if ((*(int *)(lVar20 + 0x34) < 1) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1177,L""), bVar24)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      if ((lVar20 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("InnerProperty",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1178,L""), bVar24)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      if ((lVar6 & 1) == 0) {
        pvVar14 = *(void **)this_00.Data;
        param_1 = local_1f8;
        if (pvVar14 != (void *)0x0) {
          FMemory::Free(pvVar14);
          param_1 = local_1f8;
        }
      }
      else {
        FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                  ((FMemoryImageAllocatorBase *)this_00.Data);
        param_1 = local_1f8;
      }
    }
  }
  uVar7 = local_248._8_8_;
  pTVar23 = &this->CachedStringValue;
  iVar11 = local_248.ArrayMax;
  bVar24 = false;
  local_248._8_8_ = (ulonglong)(uint)local_248.ArrayMax << 0x20;
  if (((longlong)uVar7 < 0) && (iVar11 != 0)) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,&local_248.AllocatorInstance,0,&local_248.ArrayMax);
  }
  local_268[0] = 0;
  if ((*(uint *)(this_01->_padding_ + 0x18) >> 0x14 & 1) == 0) goto LAB_14a292f96;
  pUVar3 = (UScriptStruct *)this_01[1]._padding_;
  pUVar13 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  if (pUVar3 == pUVar13) {
    ::FString::FString(&local_238,param_1);
    bVar9 = bVar24;
    while( true ) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_238.Data.ArrayNum != 0) {
        FVar16.Data = local_238.Data.AllocatorInstance.Data;
      }
      local_1b8 = 0.0;
      dStack_1b0 = 0.0;
      bVar8 = FParse::Value((wchar_t *)FVar16.Data,L"X=",&local_1b8);
      if (bVar8) {
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_238.Data.ArrayNum != 0) {
          FVar16.Data = local_238.Data.AllocatorInstance.Data;
        }
        bVar8 = FParse::Value((wchar_t *)FVar16.Data,L"Y=",&dStack_1b0);
        if (bVar8) {
          pvVar14 = AllocateDataIfRequired(this,&this->DataArray,&this->DataPropertyHash);
          CopyValue(this,pvVar14,&local_1b8);
          if (&local_238 != (FString *)pTVar23) {
            pFVar4 = (pTVar23->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            FVar16.Data = local_238.Data.AllocatorInstance.Data;
            lVar20 = (longlong)local_238.Data.ArrayNum;
            (pTVar23->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            *(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 8) = local_238.Data.ArrayNum;
            if (local_238.Data.ArrayNum == 0) {
              *local_1f0 = 0;
              piVar19 = local_1f0;
            }
            else {
              piVar19 = (int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc);
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_238.Data.ArrayNum,0,(ForAnyElementType *)pTVar23,
                         local_238.Data.ArrayNum,piVar19);
              memcpy((pTVar23->field0_0x0).TypedValue.Data.AllocatorInstance.Data,FVar16.Data,
                     lVar20 * 2);
            }
            if ((*piVar19 == -1) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x171,
                                    L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                   ), bVar24)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
          }
          UpdateHash(this);
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          goto LAB_14a292f4c;
        }
      }
      if (bVar9) goto LAB_14a2927e2;
      local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.ArrayNum = 0;
      local_208.ArrayMax = 0;
      bVar9 = RigVMStringUtils::SplitString(&local_238,L",",&local_208);
      if ((!bVar9) || (local_208.ArrayNum != 2)) break;
      ::FString::PrintfImpl(&local_1e8,L"(X=%s,Y=%s)");
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      local_238.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
      local_238.Data.ArrayNum = local_1e8.Data.ArrayNum;
      local_238.Data.ArrayMax = local_1e8.Data.ArrayMax;
      local_1e8.Data.ArrayNum = 0;
      local_1e8.Data.ArrayMax = 0;
      local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FString,int>((FString *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
      if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
      }
      bVar9 = true;
    }
    DestructItems<FString,int>((FString *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
    if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.AllocatorInstance.Data);
    }
LAB_14a2927e2:
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  pUVar13 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  if (pUVar3 == pUVar13) {
    ::FString::FString(&local_260,param_1);
    while( true ) {
      local_1a8 = 0.0;
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_260.Data.ArrayNum != 0) {
        FVar16.Data = local_260.Data.AllocatorInstance.Data;
      }
      local_1a0 = 0.0;
      dStack_198 = 0.0;
      bVar9 = FParse::Value((wchar_t *)FVar16.Data,L"X=",&local_1a8);
      if (bVar9) {
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_260.Data.ArrayNum != 0) {
          FVar16.Data = local_260.Data.AllocatorInstance.Data;
        }
        bVar9 = FParse::Value((wchar_t *)FVar16.Data,L"Y=",&local_1a0);
        if (bVar9) {
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_260.Data.ArrayNum != 0) {
            FVar16.Data = local_260.Data.AllocatorInstance.Data;
          }
          bVar9 = FParse::Value((wchar_t *)FVar16.Data,L"Z=",&dStack_198);
          if (bVar9) {
            pvVar14 = AllocateDataIfRequired(this,&this->DataArray,&this->DataPropertyHash);
            CopyValue(this,pvVar14,&local_1a8);
            if (&local_260 != (FString *)pTVar23) {
              pFVar4 = (pTVar23->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar4 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar4);
              }
              FVar16.Data = local_260.Data.AllocatorInstance.Data;
              lVar20 = (longlong)local_260.Data.ArrayNum;
              (pTVar23->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 8) =
                   local_260.Data.ArrayNum;
              if (local_260.Data.ArrayNum == 0) {
                *local_1f0 = 0;
                piVar19 = local_1f0;
              }
              else {
                piVar19 = (int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc);
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_260.Data.ArrayNum,0,(ForAnyElementType *)pTVar23,
                           local_260.Data.ArrayNum,piVar19);
                memcpy((pTVar23->field0_0x0).TypedValue.Data.AllocatorInstance.Data,FVar16.Data,
                       lVar20 * 2);
              }
              if ((*piVar19 == -1) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x171,
                                      L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                     ), bVar24)) {
                pcVar5 = (code *)swi(3);
                uVar10 = (*pcVar5)();
                return (bool)uVar10;
              }
            }
            UpdateHash(this);
            if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_260.Data.AllocatorInstance.Data);
            }
            goto LAB_14a292f4c;
          }
        }
      }
      if (bVar24) goto LAB_14a292a88;
      local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.ArrayNum = 0;
      local_228.ArrayMax = 0;
      bVar24 = RigVMStringUtils::SplitString(&local_260,L",",&local_228);
      if ((!bVar24) || (local_228.ArrayNum != 3)) break;
      ::FString::PrintfImpl(&local_1d8,L"(X=%s,Y=%s,Z=%s)");
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      local_260.Data.AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
      local_260.Data.ArrayNum = local_1d8.Data.ArrayNum;
      local_260.Data.ArrayMax = local_1d8.Data.ArrayMax;
      local_1d8.Data.ArrayNum = 0;
      local_1d8.Data.ArrayMax = 0;
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FString,int>((FString *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
      if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.AllocatorInstance.Data);
      }
      bVar24 = true;
    }
    DestructItems<FString,int>((FString *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
LAB_14a292a88:
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
  }
  pUVar13 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  if (pUVar3 == pUVar13) {
    local_278.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar20 = (longlong)local_278.Data.ArrayNum;
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    if (local_278.Data.ArrayNum == 0) {
      local_278.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_278.Data.ArrayNum,0,(ForAnyElementType *)&local_278,
                 local_278.Data.ArrayNum,&local_278.Data.ArrayMax);
      memcpy(local_278.Data.AllocatorInstance.Data,pFVar4,lVar20 * 2);
    }
    bVar24 = false;
    while( true ) {
      local_190 = 0.0;
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_278.Data.ArrayNum != 0) {
        FVar16.Data = local_278.Data.AllocatorInstance.Data;
      }
      local_188 = 0.0;
      dStack_180 = 0.0;
      bVar9 = FParse::Value((wchar_t *)FVar16.Data,L"P=",&local_190);
      if (bVar9) {
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_278.Data.ArrayNum != 0) {
          FVar16.Data = local_278.Data.AllocatorInstance.Data;
        }
        bVar9 = FParse::Value((wchar_t *)FVar16.Data,L"Y=",&local_188);
        if (bVar9) {
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_278.Data.ArrayNum != 0) {
            FVar16.Data = local_278.Data.AllocatorInstance.Data;
          }
          bVar9 = FParse::Value((wchar_t *)FVar16.Data,L"R=",&dStack_180);
          if (bVar9) {
            pvVar14 = AllocateDataIfRequired(this,&this->DataArray,&this->DataPropertyHash);
            CopyValue(this,pvVar14,&local_190);
            if (&local_278 != (FString *)pTVar23) {
              pFVar4 = (pTVar23->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar4 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar4);
              }
              FVar16.Data = local_278.Data.AllocatorInstance.Data;
              lVar20 = (longlong)local_278.Data.ArrayNum;
              (pTVar23->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 8) =
                   local_278.Data.ArrayNum;
              if (local_278.Data.ArrayNum == 0) {
                *local_1f0 = 0;
                piVar19 = local_1f0;
              }
              else {
                piVar19 = (int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc);
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_278.Data.ArrayNum,0,(ForAnyElementType *)pTVar23,
                           local_278.Data.ArrayNum,piVar19);
                memcpy((pTVar23->field0_0x0).TypedValue.Data.AllocatorInstance.Data,FVar16.Data,
                       lVar20 * 2);
              }
              if ((*piVar19 == -1) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x171,
                                      L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                     ), bVar24)) {
                pcVar5 = (code *)swi(3);
                uVar10 = (*pcVar5)();
                return (bool)uVar10;
              }
            }
            UpdateHash(this);
            if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_278.Data.AllocatorInstance.Data);
            }
            goto LAB_14a292f4c;
          }
        }
      }
      if (bVar24) goto LAB_14a292d7b;
      local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.ArrayNum = 0;
      local_218.ArrayMax = 0;
      bVar24 = RigVMStringUtils::SplitString(&local_278,L",",&local_218);
      if ((!bVar24) || (local_218.ArrayNum != 3)) break;
      ::FString::PrintfImpl(&local_1c8,L"(P=%s,Y=%s,R=%s)");
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      local_278.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
      local_278.Data.ArrayNum = local_1c8.Data.ArrayNum;
      local_278.Data.ArrayMax = local_1c8.Data.ArrayMax;
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FString,int>((FString *)local_218.AllocatorInstance.Data,local_218.ArrayNum);
      if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.AllocatorInstance.Data);
      }
      bVar24 = true;
    }
    DestructItems<FString,int>((FString *)local_218.AllocatorInstance.Data,local_218.ArrayNum);
    if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.AllocatorInstance.Data);
    }
LAB_14a292d7b:
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
  }
  pUVar13 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  if (pUVar3 == pUVar13) {
    local_178.Rotation.ZW.m128d_f64[1] = __real_3ff0000000000000;
    local_178.Rotation.XY.m128d_f64[0] = 0.0;
    local_178.Rotation.XY.m128d_f64[1] = 0.0;
    local_178.Rotation.ZW.m128d_f64[0] = 0.0;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar24 = FParse::Value(pwVar17,L"X=",(double *)&local_178);
    if (!bVar24) goto LAB_14a292e5d;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar24 = FParse::Value(pwVar17,L"Y=",local_178.Rotation.XY.m128d_f64 + 1);
    if (!bVar24) goto LAB_14a292e5d;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar24 = FParse::Value(pwVar17,L"Z=",local_178.Rotation.ZW.m128d_f64);
    if (!bVar24) goto LAB_14a292e5d;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar24 = FParse::Value(pwVar17,L"W=",local_178.Rotation.ZW.m128d_f64 + 1);
    if (!bVar24) goto LAB_14a292e5d;
    pvVar14 = AllocateDataIfRequired(this,&this->DataArray,&this->DataPropertyHash);
    pTVar22 = &local_178;
  }
  else {
LAB_14a292e5d:
    pUVar13 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
    if (pUVar3 != pUVar13) {
LAB_14a292f96:
      if ((this->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
        if (2 < (byte)LogControlRig._0_1_) {
          GetPath(this);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        }
      }
      else if (2 < (byte)LogControlRig._0_1_) {
        ::FName::ToString((FName *)&this->SubjectKey,&local_118);
        GetPath(this);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      if (local_e8 != 0.0) {
        plVar18 = local_d8;
        if (local_c0 != (longlong *)0x0) {
          plVar18 = local_c0;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      FOutputDevice::~FOutputDevice(&local_108);
      if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.AllocatorInstance.Data);
      }
      return false;
    }
    local_b8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_b8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_b8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_b8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    bVar24 = UE::Math::TTransform<double>::InitFromString(&local_b8,param_1);
    if (!bVar24) goto LAB_14a292f96;
    pvVar14 = AllocateDataIfRequired(this,&this->DataArray,&this->DataPropertyHash);
    pTVar22 = &local_b8;
  }
  CopyValue(this,pvVar14,pTVar22);
LAB_14a292efa:
  pTVar23 = &this->CachedStringValue;
  if (param_1 != (FString *)pTVar23) {
    pFVar4 = (pTVar23->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::FString::FString((FString *)pTVar23,param_1);
    if ((*(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) == -1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           ), bVar24)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
  }
  UpdateHash(this);
LAB_14a292f4c:
  if (local_e8 != 0.0) {
    plVar18 = local_d8;
    if (local_c0 != (longlong *)0x0) {
      plVar18 = local_c0;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  FOutputDevice::~FOutputDevice(&local_108);
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  return true;
}

// SetFromSubject @ 14a293190

bool __thiscall
FControlRigOverrideValue::SetFromSubject
          (FControlRigOverrideValue *this,void *param_1,UStruct *param_2)

{
  TOptional<FString> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  undefined1 uVar6;
  FProperty *pFVar7;
  UStruct *pUVar8;
  void *pvVar9;
  uchar *puVar10;
  longlong lVar11;
  undefined8 in_stack_ffffffffffffffc8;
  uint uVar12;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  uVar12 = (uint)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (((param_2 != (UStruct *)0x0) && (pFVar7 = GetRootProperty(this), pFVar7 != (FProperty *)0x0))
     && (pUVar8 = FField::GetOwnerStruct((FField *)pFVar7), pUVar8 != param_2)) {
    return false;
  }
  pFVar7 = GetLeafProperty(this);
  if (((pFVar7 != (FProperty *)0x0) &&
      (pvVar9 = AllocateDataIfRequired(this,&this->DataArray,&this->DataPropertyHash),
      param_1 != (void *)0x0)) &&
     ((pvVar9 != (void *)0x0 &&
      (puVar10 = SubjectPtrToValuePtr(this,param_1,false), puVar10 != (uchar *)0x0)))) {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = 0;
    CopyValue(this,pvVar9,puVar10);
    (**(code **)(pFVar7->_padding_ + 0xe0))
              (pFVar7,&local_28,pvVar9,0,pvVar9,0,(ulonglong)uVar12 << 0x20,0);
    pTVar1 = &this->CachedStringValue;
    if ((TOptional<FString> *)&local_28 != pTVar1) {
      pFVar3 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      _Src.Data = local_28.Data;
      lVar11 = (longlong)(int)local_20;
      piVar2 = (int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc);
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 8) = (int)local_20;
      if ((int)local_20 == 0) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_20,0,(ForAnyElementType *)pTVar1,(int)local_20,piVar2);
        memcpy((pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data,_Src.Data,lVar11 * 2);
      }
      if ((*piVar2 == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    UpdateHash(this);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    return true;
  }
  return false;
}

// SetFromUObject @ 14a293c30

void __thiscall
FControlRigOverrideValue::SetFromUObject(FControlRigOverrideValue *this,UObject *param_1)

{
  if (param_1 != (UObject *)0x0) {
    SetFromSubject(this,param_1,*(UStruct **)&param_1->field_0x10);
    return;
  }
  return;
}

// SetPropertiesFromPath @ 14a2951b0

bool __thiscall
FControlRigOverrideValue::SetPropertiesFromPath
          (FControlRigOverrideValue *this,FString *param_1,UStruct *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  FControlRigOverrideValue *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  UStruct *local_res10;
  FString local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  undefined8 uStack_80;
  FControlRigOverrideValue *local_78;
  FString *local_70;
  FString local_68;
  FControlRigOverrideValue *local_58;
  FString *local_50;
  UStruct **local_48;
  
  if ((FControlRigOverrideValue *)param_1 != this) {
    pFVar1 = (this->Path).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::FString::FString((FString *)this,param_1);
    if ((*(int *)((longlong)&(this->Path).field0_0x0 + 0xc) == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  uVar15 = 0;
  local_50 = &local_98;
  local_48 = &local_res10;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70 = &local_a8;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  uVar16 = uVar15;
  local_res10 = param_2;
  local_78 = this;
  local_58 = this;
  do {
    bVar5 = true;
LAB_14a295280:
    while( true ) {
      iVar10 = (param_1->Data).ArrayNum;
      iVar8 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar8 = 0;
      }
      iVar14 = (int)uVar15;
      if (iVar8 <= iVar14) {
        if (((1 < local_98.Data.ArrayNum) &&
            (bVar5 = `FControlRigOverrideValue::SetPropertiesFromPath'::__l2::<lambda_1>::operator()
                               (&local_58), !bVar5)) ||
           ((1 < local_a8.Data.ArrayNum &&
            (bVar5 = `FControlRigOverrideValue::SetPropertiesFromPath'::__l2::<lambda_2>::operator()
                               (&local_78), !bVar5)))) goto LAB_14a295523;
        bVar5 = true;
        goto LAB_14a295532;
      }
      if ((((iVar10 == 0) || (iVar14 < 0)) || (iVar10 + -1 <= iVar14)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      if (*(short *)((param_1->Data).AllocatorInstance.Data + uVar16) != 0x5b) break;
      bVar5 = `FControlRigOverrideValue::SetPropertiesFromPath'::__l2::<lambda_1>::operator()
                        (&local_58);
      if (!bVar5) goto LAB_14a295523;
      bVar5 = false;
      uVar15 = (ulonglong)(iVar14 + 1);
      uVar16 = uVar16 + 2;
    }
    if (iVar14 < 0) {
code_r0x00014a295332:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    else {
      iVar10 = (param_1->Data).ArrayNum;
      iVar8 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar8 = 0;
      }
      if (iVar8 <= iVar14) goto code_r0x00014a295332;
    }
    pFVar11 = local_70;
    if (*(short *)((param_1->Data).AllocatorInstance.Data + uVar16) == 0x5d) {
      pFVar1 = (local_70->Data).AllocatorInstance.Data;
      uVar3._0_4_ = (local_70->Data).ArrayNum;
      uVar3._4_4_ = (local_70->Data).ArrayMax;
      (local_70->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      local_88 = pFVar1;
      uStack_80 = uVar3;
      if ((int)(undefined4)uVar3 < 2) {
        if (pFVar1 == (FScriptContainerElement *)0x0) goto LAB_14a295523;
        FMemory::Free(pFVar1);
        Reset(this);
        bVar5 = false;
        goto LAB_14a295532;
      }
      iVar8 = _wtoi((wchar_t *)pFVar1);
      pFVar4 = local_78;
      iVar10 = (local_78->Properties).ArrayNum;
      uVar13 = iVar10 - 1;
      uVar9 = 0;
      if ((int)uVar13 < iVar10) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      *(int *)((pFVar4->Properties).AllocatorInstance.Data +
              (longlong)(pFVar4->Properties).ArrayNum * 0x30 + -8) = iVar8;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      uVar15 = (ulonglong)(iVar14 + 1);
      uVar16 = uVar16 + 2;
      goto LAB_14a295280;
    }
    pFVar11 = ::FString::Mid(param_1,&local_68,iVar14,2);
    iVar10 = (pFVar11->Data).ArrayNum;
    if (iVar10 == PathSeparator.Data.ArrayNum) {
      if (iVar10 < 2) {
        bVar7 = true;
      }
      else {
        iVar10 = wcscmp((wchar_t *)(pFVar11->Data).AllocatorInstance.Data,
                        (wchar_t *)PathSeparator.Data.AllocatorInstance.Data);
        bVar7 = iVar10 == 0;
      }
    }
    else {
      bVar7 = PathSeparator.Data.ArrayNum + iVar10 == 1;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      pwVar12 = ::FString::operator[](param_1,iVar14);
      pFVar11 = &local_a8;
      if (bVar5) {
        pFVar11 = &local_98;
      }
      ::FString::AppendChar(pFVar11,*pwVar12);
      uVar15 = (ulonglong)(iVar14 + 1);
      uVar16 = uVar16 + 2;
      goto LAB_14a295280;
    }
    if ((bVar5) &&
       (bVar5 = `FControlRigOverrideValue::SetPropertiesFromPath'::__l2::<lambda_1>::operator()
                          (&local_58), !bVar5)) {
LAB_14a295523:
      Reset(this);
      bVar5 = false;
LAB_14a295532:
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      return bVar5;
    }
    uVar15 = (ulonglong)(iVar14 + 2);
    uVar16 = uVar16 + 4;
  } while( true );
}

// SubjectPtrToValuePtr @ 14a29b1f0

uchar * __thiscall
FControlRigOverrideValue::SubjectPtrToValuePtr
          (FControlRigOverrideValue *this,void *param_1,bool param_2)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FFieldClass *pFVar8;
  FProperty *this_00;
  FProperty *pFVar9;
  uchar *puVar10;
  FWeakObjectPtr *this_01;
  FWeakObjectPtr *pFVar11;
  undefined1 local_res8 [8];
  FScriptArrayHelper local_48;
  
  iVar2 = (this->Properties).ArrayNum;
  if ((iVar2 != 0) && (param_1 != (void *)0x0)) {
    this_01 = (FWeakObjectPtr *)(this->Properties).AllocatorInstance.Data;
    pFVar11 = this_01 + (longlong)iVar2 * 6;
    while( true ) {
      if ((this->Properties).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FControlRigOverrideValue::FPropertyInfo_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (this_01 == pFVar11) {
        return param_1;
      }
      pUVar7 = FWeakObjectPtr::Get(this_01);
      if (pUVar7 == (UObject *)0x0) break;
      pFVar8 = FProperty::StaticClass();
      this_00 = (FProperty *)FFieldPath::GetTyped((FFieldPath *)(this_01 + 1),pFVar8,(UStruct *)0x0)
      ;
      if (this_00 == (FProperty *)0x0) {
        return (uchar *)0x0;
      }
      pFVar9 = this_00;
      if (((*(uint *)(this_00->_padding_ + 0x18) >> 0x15 & 1) == 0) &&
         ((pFVar9 = FProperty::GetOwnerProperty(this_00), pFVar9 == (FProperty *)0x0 ||
          ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x15 & 1) == 0)))) {
        pFVar9 = (FProperty *)0x0;
      }
      if (this_01[5].ObjectIndex == -1) {
        if (pFVar9 == (FProperty *)0x0) {
          pFVar9 = this_00;
        }
        if ((pFVar9->ArrayDim < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          puVar10 = (uchar *)(*pcVar4)();
          return puVar10;
        }
        if ((param_1 == (uchar *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          puVar10 = (uchar *)(*pcVar4)();
          return puVar10;
        }
        param_1 = (void *)((longlong)param_1 + (longlong)pFVar9->Offset_Internal);
        this_01 = this_01 + 6;
      }
      else {
        if ((pFVar9 == (FProperty *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigOverride.cpp"
                               ,0x1b2,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          puVar10 = (uchar *)(*pcVar4)();
          return puVar10;
        }
        if ((pFVar9->ArrayDim < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          puVar10 = (uchar *)(*pcVar4)();
          return puVar10;
        }
        if ((param_1 == (uchar *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          puVar10 = (uchar *)(*pcVar4)();
          return puVar10;
        }
        iVar6 = pFVar9->Offset_Internal;
        EVar1 = (EArrayPropertyFlags)pFVar9[1]._padding_;
        local_48.ElementAlignment = (**(code **)(*(longlong *)pFVar9[1]._padding_ + 0x168))();
        local_48.InnerProperty = (FProperty *)pFVar9[1]._padding_;
        local_48.ElementSize = (local_48.InnerProperty)->ElementSize;
        local_48.field1_0x8.HeapArray = (FScriptArray *)((longlong)param_1 + (longlong)iVar6);
        local_48.ArrayFlags = EVar1;
        if ((local_48.ElementSize < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementSize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1177,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          puVar10 = (uchar *)(*pcVar4)();
          return puVar10;
        }
        if ((local_48.InnerProperty == (FProperty *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1178,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          puVar10 = (uchar *)(*pcVar4)();
          return puVar10;
        }
        if ((local_48.field1_0x8.FreezableArray)->ArrayNum <= this_01[5].ObjectIndex) {
          if (!param_2) {
            return (uchar *)0x0;
          }
          iVar6 = this_01[5].ObjectIndex + 1;
          if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((longlong)iVar6);
          }
          iVar3 = (local_48.field1_0x8.FreezableArray)->ArrayNum;
          if (iVar3 < iVar6) {
            FScriptArrayHelper::AddValues(&local_48,iVar6 - iVar3);
          }
          else if (iVar6 < iVar3) {
            FScriptArrayHelper::RemoveValues(&local_48,iVar6,iVar3 - iVar6);
          }
        }
        if ((local_48.field1_0x8.FreezableArray)->ArrayNum == 0) {
          param_1 = (uchar *)0x0;
          this_01 = this_01 + 6;
        }
        else {
          puVar10 = (uchar *)(local_48.field1_0x8.FreezableArray)->_padding_;
          if (((local_48.ArrayFlags & UsesMemoryImageAllocator) != None) &&
             (((ulonglong)puVar10 & 1) != 0)) {
            puVar10 = &(local_48.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar10 >> 0x18);
          }
          param_1 = puVar10 + (longlong)this_01[5].ObjectIndex * (longlong)local_48.ElementSize;
          this_01 = this_01 + 6;
        }
      }
    }
    this_01[1].ObjectIndex = 0;
    this_01[1].ObjectSerialNumber = 0;
  }
  return (uchar *)0x0;
}

// ToString @ 14a29c340

FString * __thiscall FControlRigOverrideValue::ToString(FControlRigOverrideValue *this)

{
  TOptional<FString> *pTVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FControlRigOverrideValue::ToString'::__l2::_dynamic_atexit_destructor_for__EmptyPath__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = (TOptional<FString> *)&EmptyPath;
  if (*(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) != -1) {
    pTVar1 = &this->CachedStringValue;
  }
  return (FString *)pTVar1;
}

// UpdateHash @ 14a2a4bd0

void __thiscall FControlRigOverrideValue::UpdateHash(FControlRigOverrideValue *this)

{
  FName FVar1;
  bool bVar2;
  uint uVar3;
  FProperty *pFVar4;
  uint uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  uVar10 = 0;
  uVar9 = 0;
  uVar3 = uVar9;
  if ((this->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    FVar1 = (this->SubjectKey).field0_0x0.TypedValue;
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    uVar3 = uVar3 + FVar1.Number;
  }
  this->Hash = uVar3;
  if ((((*(int *)((longlong)&(this->Path).field0_0x0 + 0xc) != -1) &&
       (*(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) != -1)) &&
      ((this->DataArray).ArrayNum != 0)) &&
     ((((this->DataArray).AllocatorInstance.Data != (FScriptContainerElement *)0x0 &&
       (pFVar4 = GetLeafProperty(this), pFVar4 != (FProperty *)0x0)) &&
      (bVar2 = IsDataValid(this,&this->DataArray,&this->DataPropertyHash), bVar2)))) {
    pFVar13 = (this->Properties).AllocatorInstance.Data;
    iVar8 = (this->Properties).ArrayNum;
    pFVar7 = pFVar13 + (longlong)iVar8 * 0x30;
    while( true ) {
      if ((this->Properties).ArrayNum != iVar8) {
        `TCheckedPointerIterator<FControlRigOverrideValue::FPropertyInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar7) break;
      uVar3 = ::GetTypeHash((FFieldPath *)(pFVar13 + 8));
      uVar11 = this->Hash - uVar3 ^ uVar3 >> 0xd;
      uVar5 = (-0x61c88647 - uVar11) - uVar3 ^ uVar11 << 8;
      uVar12 = (uVar3 - uVar5) - uVar11 ^ uVar5 >> 0xd;
      uVar11 = (uVar11 - uVar12) - uVar5 ^ uVar12 >> 0xc;
      uVar3 = (uVar5 - uVar11) - uVar12 ^ uVar11 << 0x10;
      uVar12 = (uVar12 - uVar3) - uVar11 ^ uVar3 >> 5;
      uVar5 = (uVar11 - uVar12) - uVar3 ^ uVar12 >> 3;
      uVar3 = (uVar3 - uVar5) - uVar12 ^ uVar5 << 10;
      uVar5 = (uVar12 - uVar3) - uVar5 ^ uVar3 >> 0xf;
      this->Hash = uVar5;
      uVar3 = *(uint *)(pFVar13 + 0x28);
      uVar12 = uVar5 - uVar3 ^ uVar3 >> 0xd;
      uVar5 = (-0x61c88647 - uVar12) - uVar3 ^ uVar12 << 8;
      uVar11 = (uVar3 - uVar5) - uVar12 ^ uVar5 >> 0xd;
      uVar12 = (uVar12 - uVar11) - uVar5 ^ uVar11 >> 0xc;
      uVar3 = (uVar5 - uVar12) - uVar11 ^ uVar12 << 0x10;
      uVar5 = (uVar11 - uVar3) - uVar12 ^ uVar3 >> 5;
      uVar11 = (uVar12 - uVar5) - uVar3 ^ uVar5 >> 3;
      uVar3 = (uVar3 - uVar11) - uVar5 ^ uVar11 << 10;
      this->Hash = (uVar5 - uVar3) - uVar11 ^ uVar3 >> 0xf;
      pFVar13 = pFVar13 + 0x30;
    }
    if (*(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 0xc) != -1) {
      iVar8 = *(int *)((longlong)&(this->CachedStringValue).field0_0x0 + 8);
      if (iVar8 == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)
                 (this->CachedStringValue).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
        uVar9 = iVar8 - 1;
      }
      uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar9,pwVar6);
      uVar10 = (ulonglong)uVar3;
    }
    iVar8 = (int)uVar10;
    uVar3 = this->Hash - iVar8 ^ (uint)(uVar10 >> 0xd);
    uVar5 = (-0x61c88647 - uVar3) - iVar8 ^ uVar3 << 8;
    uVar9 = (iVar8 - uVar5) - uVar3 ^ uVar5 >> 0xd;
    uVar3 = (uVar3 - uVar9) - uVar5 ^ uVar9 >> 0xc;
    uVar5 = (uVar5 - uVar3) - uVar9 ^ uVar3 << 0x10;
    uVar9 = (uVar9 - uVar5) - uVar3 ^ uVar5 >> 5;
    uVar3 = (uVar3 - uVar9) - uVar5 ^ uVar9 >> 3;
    uVar5 = (uVar5 - uVar3) - uVar9 ^ uVar3 << 10;
    this->Hash = (uVar9 - uVar5) - uVar3 ^ uVar5 >> 0xf;
  }
  return;
}

// operator() @ 15054bdd0

bool __thiscall
`FControlRigOverrideValue::FControlRigOverrideValue'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8574949777521770550>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8574949777521770550>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

