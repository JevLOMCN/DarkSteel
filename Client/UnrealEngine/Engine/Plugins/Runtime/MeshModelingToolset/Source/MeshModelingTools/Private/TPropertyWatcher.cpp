// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 172

// <lambda_invoker_cdecl> @ 14cbd33a0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::
<lambda_46_>::<lambda_invoker_cdecl>(FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 != 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    return iVar2 != 0;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cbd33f0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::
TPropertyWatcher<enum_EMakeMeshPlacementType><enum_EMakeMeshPlacementType,void>'::__l1::<lambda_48_>
::<lambda_invoker_cdecl>(EMakeMeshPlacementType *param_1,EMakeMeshPlacementType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cbd3400

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::
<lambda_50_>::<lambda_invoker_cdecl>(float *param_1,float *param_2)

{
  if (*param_2 != *param_1) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cbd3420

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::
TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>'
::__l1::<lambda_52_>::<lambda_invoker_cdecl>
          (EBaseCreateFromSelectedTargetType *param_1,EBaseCreateFromSelectedTargetType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cbd3430

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::
TPropertyWatcher<enum_EConvertToPolygonsMode><enum_EConvertToPolygonsMode,void>'::__l1::<lambda_54_>
::<lambda_invoker_cdecl>(EConvertToPolygonsMode *param_1,EConvertToPolygonsMode *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cbd3440

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::
<lambda_56_>::<lambda_invoker_cdecl>(bool *param_1,bool *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cbd3450

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::<lambda_58_>
::<lambda_invoker_cdecl>(int *param_1,int *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cbd3460

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>'::__l1::
<lambda_60_>::<lambda_invoker_cdecl>(FName *param_1,FName *param_2)

{
  return *param_1 != *param_2;
}

// TPropertyWatcher<int><int,void> @ 14cbd3470

TPropertyWatcher<int> * __thiscall
FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>
          (TPropertyWatcher<int> *this,int *param_1,TFunction<void___cdecl(int_const_&)> *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).bIsSet = false;
  this->_padding_ = (longlong)&___7__TPropertyWatcher_H_FWatchablePropertySet__6B_;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_57_>__0_____0HX___TPropertyWatcher_H_FWatchablePropertySet__QEAA_AEBHV__TFunction___A6AXAEBH_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(int **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::<lambda_57_>,int>
         ::Call;
  }
  *(undefined8 *)&this->OnChanged = *(undefined8 *)param_2;
  *(undefined8 *)&(this->OnChanged).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar2 = *(undefined4 *)&param_2->field_0x14;
  uVar3 = *(undefined4 *)&param_2->field_0x18;
  uVar4 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->OnChanged).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->OnChanged).field_0x14 = uVar2;
  *(undefined4 *)&(this->OnChanged).field_0x18 = uVar3;
  *(undefined4 *)&(this->OnChanged).field_0x1c = uVar4;
  *(undefined8 *)&(this->OnChanged).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->OnChanged != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->NotEqual = 0;
  *(undefined8 *)&(this->NotEqual).field_0x28 = 0;
  *(undefined ***)&(this->NotEqual).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NAEBH0_Z_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::
       <lambda_58_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(int_const_&,int_const_&),bool,int_const_&,int_const_&>::
         Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EConvertToPolygonsMode><enum_EConvertToPolygonsMode,void> @ 14cbd3550

TPropertyWatcher<EConvertToPolygonsMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::
TPropertyWatcher<enum_EConvertToPolygonsMode><enum_EConvertToPolygonsMode,void>
          (void *this,EConvertToPolygonsMode *param_1,
          TFunction<void___cdecl(EConvertToPolygonsMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EConvertToPolygonsMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_53_>__0_____0W4EConvertToPolygonsMode__X___TPropertyWatcher_W4EConvertToPolygonsMode___FWatchablePropertySet__QEAA_AEBW4EConvertToPolygonsMode__V__TFunction___A6AXAEBW4EConvertToPolygonsMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::TPropertyWatcher<enum_EConvertToPolygonsMode><enum_EConvertToPolygonsMode,void>'::__l1::<lambda_53_>,enum_EConvertToPolygonsMode>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EConvertToPolygonsMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::
       TPropertyWatcher<enum_EConvertToPolygonsMode><enum_EConvertToPolygonsMode,void>'::__l1::
       <lambda_54_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EConvertToPolygonsMode_const_&,enum_EConvertToPolygonsMode_const_&),bool,enum_EConvertToPolygonsMode_const_&,enum_EConvertToPolygonsMode_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EMakeMeshPlacementType><enum_EMakeMeshPlacementType,void> @ 14cbd3630

TPropertyWatcher<EMakeMeshPlacementType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::
TPropertyWatcher<enum_EMakeMeshPlacementType><enum_EMakeMeshPlacementType,void>
          (void *this,EMakeMeshPlacementType *param_1,
          TFunction<void___cdecl(EMakeMeshPlacementType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EMakeMeshPlacementType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_47_>__0_____0W4EMakeMeshPlacementType__X___TPropertyWatcher_W4EMakeMeshPlacementType___FWatchablePropertySet__QEAA_AEBW4EMakeMeshPlacementType__V__TFunction___A6AXAEBW4EMakeMeshPlacementType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::TPropertyWatcher<enum_EMakeMeshPlacementType><enum_EMakeMeshPlacementType,void>'::__l1::<lambda_47_>,enum_EMakeMeshPlacementType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMakeMeshPlacementType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::
       TPropertyWatcher<enum_EMakeMeshPlacementType><enum_EMakeMeshPlacementType,void>'::__l1::
       <lambda_48_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EMakeMeshPlacementType_const_&,enum_EMakeMeshPlacementType_const_&),bool,enum_EMakeMeshPlacementType_const_&,enum_EMakeMeshPlacementType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// CheckAndUpdate @ 14cbe8640

void __thiscall
FWatchablePropertySet::TPropertyWatcher<int>::CheckAndUpdate(TPropertyWatcher<int> *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TOptional<int> *pTVar7;
  int local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar6 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_18[0] = (*pcVar2)(uVar5);
  if ((this->Cached).bIsSet != false) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->NotEqual);
    pcVar2 = *(code **)&this->NotEqual;
    plVar1 = *(longlong **)&(this->NotEqual).field_0x28;
    plVar6 = (longlong *)&(this->NotEqual).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5,&this->Cached,local_18);
    if (cVar3 == '\0') {
      return;
    }
  }
  pTVar7 = &this->Cached;
  if ((TOptional<int> *)local_18 != pTVar7) {
    pTVar7->TypedValue = local_18[0];
    (this->Cached).bIsSet = true;
  }
  if (((this->Cached).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChanged);
  plVar1 = *(longlong **)&(this->OnChanged).field_0x28;
  pcVar2 = *(code **)&this->OnChanged;
  plVar6 = (longlong *)&(this->OnChanged).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(uVar5,pTVar7);
  return;
}

// CheckAndUpdate @ 14cbe8750

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cbe8860

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// SilentUpdate @ 14cbf6880

void __thiscall
FWatchablePropertySet::TPropertyWatcher<int>::SilentUpdate(TPropertyWatcher<int> *this)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar5 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  iVar3 = (*pcVar2)(uVar4);
  if ((TOptional<int> *)local_18 != &this->Cached) {
    (this->Cached).TypedValue = iVar3;
    (this->Cached).bIsSet = true;
  }
  return;
}

// SilentUpdate @ 14cbf68e0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cbf6940

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14cc056d0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_ELocalFrameMode>::
TPropertyWatcher<enum_ELocalFrameMode><enum_ELocalFrameMode,void>'::__l1::<lambda_100_>::
<lambda_invoker_cdecl>(ELocalFrameMode *param_1,ELocalFrameMode *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc05710

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_ETrimOperation>::
TPropertyWatcher<enum_ETrimOperation><enum_ETrimOperation,void>'::__l1::<lambda_82_>::
<lambda_invoker_cdecl>(ETrimOperation *param_1,ETrimOperation *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc05720

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::
<lambda_84_>::<lambda_invoker_cdecl>(bool *param_1,bool *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc05730

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FLinearColor>::
TPropertyWatcher<FLinearColor><FLinearColor,void>'::__l1::<lambda_86_>::<lambda_invoker_cdecl>
          (FLinearColor *param_1,FLinearColor *param_2)

{
  if (((((param_2->field0_0x0)._s_0.R == (param_1->field0_0x0)._s_0.R) &&
       ((param_2->field0_0x0)._s_0.G == (param_1->field0_0x0)._s_0.G)) &&
      ((param_2->field0_0x0)._s_0.B == (param_1->field0_0x0)._s_0.B)) &&
     ((param_2->field0_0x0)._s_0.A == (param_1->field0_0x0)._s_0.A)) {
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 14cc05770

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::
<lambda_88_>::<lambda_invoker_cdecl>(float *param_1,float *param_2)

{
  if (*param_2 != *param_1) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cc05790

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_ECSGOperation>::
TPropertyWatcher<enum_ECSGOperation><enum_ECSGOperation,void>'::__l1::<lambda_90_>::
<lambda_invoker_cdecl>(ECSGOperation *param_1,ECSGOperation *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc057a0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType>::
TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType><enum_EDisplaceMeshToolDisplaceType,void>'::__l1
::<lambda_92_>::<lambda_invoker_cdecl>
          (EDisplaceMeshToolDisplaceType *param_1,EDisplaceMeshToolDisplaceType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc057b0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType>::
TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType><enum_EDisplaceMeshToolSubdivisionType,void>'
::__l1::<lambda_94_>::<lambda_invoker_cdecl>
          (EDisplaceMeshToolSubdivisionType *param_1,EDisplaceMeshToolSubdivisionType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc057c0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<double>::TPropertyWatcher<double><double,void>'::__l1::
<lambda_96_>::<lambda_invoker_cdecl>(double *param_1,double *param_2)

{
  if (*param_2 != *param_1) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cc057e0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::
<lambda_98_>::<lambda_invoker_cdecl>(FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 != 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    return iVar2 != 0;
  }
  return false;
}

// TPropertyWatcher<double><double,void> @ 14cc05a50

TPropertyWatcher<double> * __thiscall
FWatchablePropertySet::TPropertyWatcher<double>::TPropertyWatcher<double><double,void>
          (TPropertyWatcher<double> *this,double *param_1,
          TFunction<void___cdecl(double_const_&)> *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).bIsSet = false;
  this->_padding_ = (longlong)&___7__TPropertyWatcher_N_FWatchablePropertySet__6B_;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_95_>__0_____0NX___TPropertyWatcher_N_FWatchablePropertySet__QEAA_AEBNV__TFunction___A6AXAEBN_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(double **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<double>::TPropertyWatcher<double><double,void>'::__l1::<lambda_95_>,double>
         ::Call;
  }
  *(undefined8 *)&this->OnChanged = *(undefined8 *)param_2;
  *(undefined8 *)&(this->OnChanged).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar2 = *(undefined4 *)&param_2->field_0x14;
  uVar3 = *(undefined4 *)&param_2->field_0x18;
  uVar4 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->OnChanged).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->OnChanged).field_0x14 = uVar2;
  *(undefined4 *)&(this->OnChanged).field_0x18 = uVar3;
  *(undefined4 *)&(this->OnChanged).field_0x1c = uVar4;
  *(undefined8 *)&(this->OnChanged).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->OnChanged != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->NotEqual = 0;
  *(undefined8 *)&(this->NotEqual).field_0x28 = 0;
  *(undefined ***)&(this->NotEqual).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NAEBN0_Z_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<double>::TPropertyWatcher<double><double,void>'::
       __l1::<lambda_96_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double_const_&,double_const_&),bool,double_const_&,double_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<FLinearColor><FLinearColor,void> @ 14cc05b30

TPropertyWatcher<FLinearColor> * __thiscall
FWatchablePropertySet::TPropertyWatcher<FLinearColor>::
TPropertyWatcher<FLinearColor><FLinearColor,void>
          (TPropertyWatcher<FLinearColor> *this,FLinearColor *param_1,
          TFunction<void___cdecl(FLinearColor_const_&)> *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).bIsSet = false;
  this->_padding_ = (longlong)&___7__TPropertyWatcher_UFLinearColor___FWatchablePropertySet__6B_;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_85_>__0_____0UFLinearColor__X___TPropertyWatcher_UFLinearColor___FWatchablePropertySet__QEAA_AEBUFLinearColor__V__TFunction___A6AXAEBUFLinearColor___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(FLinearColor **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<FLinearColor>::TPropertyWatcher<FLinearColor><FLinearColor,void>'::__l1::<lambda_85_>,FLinearColor>
         ::Call;
  }
  *(undefined8 *)&this->OnChanged = *(undefined8 *)param_2;
  *(undefined8 *)&(this->OnChanged).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar2 = *(undefined4 *)&param_2->field_0x14;
  uVar3 = *(undefined4 *)&param_2->field_0x18;
  uVar4 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->OnChanged).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->OnChanged).field_0x14 = uVar2;
  *(undefined4 *)&(this->OnChanged).field_0x18 = uVar3;
  *(undefined4 *)&(this->OnChanged).field_0x1c = uVar4;
  *(undefined8 *)&(this->OnChanged).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->OnChanged != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->NotEqual = 0;
  *(undefined8 *)&(this->NotEqual).field_0x28 = 0;
  *(undefined ***)&(this->NotEqual).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NAEBUFLinearColor__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<FLinearColor>::
       TPropertyWatcher<FLinearColor><FLinearColor,void>'::__l1::<lambda_86_>::
       <lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(FLinearColor_const_&,FLinearColor_const_&),bool,FLinearColor_const_&,FLinearColor_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_ECSGOperation><enum_ECSGOperation,void> @ 14cc05c80

TPropertyWatcher<ECSGOperation> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ECSGOperation>::
TPropertyWatcher<enum_ECSGOperation><enum_ECSGOperation,void>
          (void *this,ECSGOperation *param_1,TFunction<void___cdecl(ECSGOperation_const_&)> *param_2
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this = &___7__TPropertyWatcher_W4ECSGOperation___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_89_>__0_____0W4ECSGOperation__X___TPropertyWatcher_W4ECSGOperation___FWatchablePropertySet__QEAA_AEBW4ECSGOperation__V__TFunction___A6AXAEBW4ECSGOperation___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_ECSGOperation>::TPropertyWatcher<enum_ECSGOperation><enum_ECSGOperation,void>'::__l1::<lambda_89_>,enum_ECSGOperation>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4ECSGOperation__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_ECSGOperation>::
       TPropertyWatcher<enum_ECSGOperation><enum_ECSGOperation,void>'::__l1::<lambda_90_>::
       <lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_ECSGOperation_const_&,enum_ECSGOperation_const_&),bool,enum_ECSGOperation_const_&,enum_ECSGOperation_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType><enum_EDisplaceMeshToolDisplaceType,void> @ 14cc05d60

TPropertyWatcher<EDisplaceMeshToolDisplaceType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType>::
TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType><enum_EDisplaceMeshToolDisplaceType,void>
          (void *this,EDisplaceMeshToolDisplaceType *param_1,
          TFunction<void___cdecl(EDisplaceMeshToolDisplaceType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EDisplaceMeshToolDisplaceType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_91_>__0_____0W4EDisplaceMeshToolDisplaceType__X___TPropertyWatcher_W4EDisplaceMeshToolDisplaceType___FWatchablePropertySet__QEAA_AEBW4EDisplaceMeshToolDisplaceType__V__TFunction___A6AXAEBW4EDisplaceMeshToolDisplaceType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType>::TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType><enum_EDisplaceMeshToolDisplaceType,void>'::__l1::<lambda_91_>,enum_EDisplaceMeshToolDisplaceType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EDisplaceMeshToolDisplaceType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType>::
       TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType><enum_EDisplaceMeshToolDisplaceType,void>'
       ::__l1::<lambda_92_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EDisplaceMeshToolDisplaceType_const_&,enum_EDisplaceMeshToolDisplaceType_const_&),bool,enum_EDisplaceMeshToolDisplaceType_const_&,enum_EDisplaceMeshToolDisplaceType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType><enum_EDisplaceMeshToolSubdivisionType,void> @ 14cc05e40

TPropertyWatcher<EDisplaceMeshToolSubdivisionType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType>::
TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType><enum_EDisplaceMeshToolSubdivisionType,void>
          (void *this,EDisplaceMeshToolSubdivisionType *param_1,
          TFunction<void___cdecl(EDisplaceMeshToolSubdivisionType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EDisplaceMeshToolSubdivisionType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_93_>__0_____0W4EDisplaceMeshToolSubdivisionType__X___TPropertyWatcher_W4EDisplaceMeshToolSubdivisionType___FWatchablePropertySet__QEAA_AEBW4EDisplaceMeshToolSubdivisionType__V__TFunction___A6AXAEBW4EDisplaceMeshToolSubdivisionType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType>::TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType><enum_EDisplaceMeshToolSubdivisionType,void>'::__l1::<lambda_93_>,enum_EDisplaceMeshToolSubdivisionType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EDisplaceMeshToolSubdivisionType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType>::
       TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType><enum_EDisplaceMeshToolSubdivisionType,void>'
       ::__l1::<lambda_94_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EDisplaceMeshToolSubdivisionType_const_&,enum_EDisplaceMeshToolSubdivisionType_const_&),bool,enum_EDisplaceMeshToolSubdivisionType_const_&,enum_EDisplaceMeshToolSubdivisionType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_ELocalFrameMode><enum_ELocalFrameMode,void> @ 14cc05f20

TPropertyWatcher<ELocalFrameMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ELocalFrameMode>::
TPropertyWatcher<enum_ELocalFrameMode><enum_ELocalFrameMode,void>
          (void *this,ELocalFrameMode *param_1,
          TFunction<void___cdecl(ELocalFrameMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this = &___7__TPropertyWatcher_W4ELocalFrameMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_99_>__0_____0W4ELocalFrameMode__X___TPropertyWatcher_W4ELocalFrameMode___FWatchablePropertySet__QEAA_AEBW4ELocalFrameMode__V__TFunction___A6AXAEBW4ELocalFrameMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_ELocalFrameMode>::TPropertyWatcher<enum_ELocalFrameMode><enum_ELocalFrameMode,void>'::__l1::<lambda_99_>,enum_ELocalFrameMode>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4ELocalFrameMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_ELocalFrameMode>::
       TPropertyWatcher<enum_ELocalFrameMode><enum_ELocalFrameMode,void>'::__l1::<lambda_100_>::
       <lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_ELocalFrameMode_const_&,enum_ELocalFrameMode_const_&),bool,enum_ELocalFrameMode_const_&,enum_ELocalFrameMode_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_ETrimOperation><enum_ETrimOperation,void> @ 14cc06000

TPropertyWatcher<ETrimOperation> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ETrimOperation>::
TPropertyWatcher<enum_ETrimOperation><enum_ETrimOperation,void>
          (void *this,ETrimOperation *param_1,
          TFunction<void___cdecl(ETrimOperation_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this = &___7__TPropertyWatcher_W4ETrimOperation___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_81_>__0_____0W4ETrimOperation__X___TPropertyWatcher_W4ETrimOperation___FWatchablePropertySet__QEAA_AEBW4ETrimOperation__V__TFunction___A6AXAEBW4ETrimOperation___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_ETrimOperation>::TPropertyWatcher<enum_ETrimOperation><enum_ETrimOperation,void>'::__l1::<lambda_81_>,enum_ETrimOperation>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4ETrimOperation__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_ETrimOperation>::
       TPropertyWatcher<enum_ETrimOperation><enum_ETrimOperation,void>'::__l1::<lambda_82_>::
       <lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_ETrimOperation_const_&,enum_ETrimOperation_const_&),bool,enum_ETrimOperation_const_&,enum_ETrimOperation_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// CheckAndUpdate @ 14cc47e40

void __thiscall
FWatchablePropertySet::TPropertyWatcher<double>::CheckAndUpdate(TPropertyWatcher<double> *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TOptional<double> *pTVar7;
  double local_18 [2];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar6 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_18[0] = (double)(*pcVar2)(uVar5);
  if ((this->Cached).bIsSet != false) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->NotEqual);
    pcVar2 = *(code **)&this->NotEqual;
    plVar1 = *(longlong **)&(this->NotEqual).field_0x28;
    plVar6 = (longlong *)&(this->NotEqual).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5,&this->Cached,local_18);
    if (cVar3 == '\0') {
      return;
    }
  }
  pTVar7 = &this->Cached;
  if ((TOptional<double> *)local_18 != pTVar7) {
    pTVar7->TypedValue = local_18[0];
    (this->Cached).bIsSet = true;
  }
  if (((this->Cached).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChanged);
  plVar1 = *(longlong **)&(this->OnChanged).field_0x28;
  pcVar2 = *(code **)&this->OnChanged;
  plVar6 = (longlong *)&(this->OnChanged).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(uVar5,pTVar7);
  return;
}

// CheckAndUpdate @ 14cc47f50

void __thiscall
FWatchablePropertySet::TPropertyWatcher<FLinearColor>::CheckAndUpdate
          (TPropertyWatcher<FLinearColor> *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TOptional<FLinearColor> *pTVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar6 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(&local_18,uVar5);
  if ((this->Cached).bIsSet != false) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->NotEqual);
    pcVar2 = *(code **)&this->NotEqual;
    plVar1 = *(longlong **)&(this->NotEqual).field_0x28;
    plVar6 = (longlong *)&(this->NotEqual).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5,&this->Cached,&local_18);
    if (cVar3 == '\0') {
      return;
    }
  }
  pTVar7 = &this->Cached;
  if ((TOptional<FLinearColor> *)&local_18 != pTVar7) {
    *(undefined8 *)&(pTVar7->TypedValue).field0_0x0 = local_18;
    *(undefined8 *)((longlong)&(this->Cached).TypedValue.field0_0x0 + 8) = uStack_10;
    (this->Cached).bIsSet = true;
  }
  if (((this->Cached).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChanged);
  plVar1 = *(longlong **)&(this->OnChanged).field_0x28;
  pcVar2 = *(code **)&this->OnChanged;
  plVar6 = (longlong *)&(this->OnChanged).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(uVar5,pTVar7);
  return;
}

// CheckAndUpdate @ 14cc48060

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ECSGOperation>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cc48170

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cc48280

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cc48390

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ELocalFrameMode>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cc484a0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ETrimOperation>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// SilentUpdate @ 14cc806d0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<double>::SilentUpdate(TPropertyWatcher<double> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double dVar5;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar4 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  dVar5 = (double)(*pcVar2)(uVar3);
  if ((TOptional<double> *)local_18 != &this->Cached) {
    (this->Cached).TypedValue = dVar5;
    (this->Cached).bIsSet = true;
  }
  return;
}

// SilentUpdate @ 14cc80730

void __thiscall
FWatchablePropertySet::TPropertyWatcher<FLinearColor>::SilentUpdate
          (TPropertyWatcher<FLinearColor> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar4 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(&local_18,uVar3);
  if ((TOptional<FLinearColor> *)&local_18 != &this->Cached) {
    *(undefined8 *)&(this->Cached).TypedValue.field0_0x0 = local_18;
    *(undefined8 *)((longlong)&(this->Cached).TypedValue.field0_0x0 + 8) = uStack_10;
    (this->Cached).bIsSet = true;
  }
  return;
}

// SilentUpdate @ 14cc807a0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ECSGOperation>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cc80800

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType>::SilentUpdate
          (void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cc80860

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType>::SilentUpdate
          (void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cc808c0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ELocalFrameMode>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cc80920

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ETrimOperation>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14cc96330

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintBrushType>::
TPropertyWatcher<enum_EMeshVertexPaintBrushType><enum_EMeshVertexPaintBrushType,void>'::__l1::
<lambda_101_>::<lambda_invoker_cdecl>
          (EMeshVertexPaintBrushType *param_1,EMeshVertexPaintBrushType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96340

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EMeshSculptFalloffType>::
TPropertyWatcher<enum_EMeshSculptFalloffType><enum_EMeshSculptFalloffType,void>'::__l1::
<lambda_103_>::<lambda_invoker_cdecl>
          (EMeshSculptFalloffType *param_1,EMeshSculptFalloffType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96350

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<TObjectPtr<UTexture2D>_>::
TPropertyWatcher<TObjectPtr<UTexture2D>_><TObjectPtr<UTexture2D>,void>'::__l1::<lambda_105_>::
<lambda_invoker_cdecl>(TObjectPtr<UTexture2D> *param_1,TObjectPtr<UTexture2D> *param_2)

{
  return (param_1->field0_0x0).DebugPtr != (param_2->field0_0x0).DebugPtr;
}

// <lambda_invoker_cdecl> @ 14cc96360

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EOffsetMeshToolOffsetType>::
TPropertyWatcher<enum_EOffsetMeshToolOffsetType><enum_EOffsetMeshToolOffsetType,void>'::__l1::
<lambda_107_>::<lambda_invoker_cdecl>
          (EOffsetMeshToolOffsetType *param_1,EOffsetMeshToolOffsetType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96370

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<double>::TPropertyWatcher<double><double,void>'::__l1::
<lambda_109_>::<lambda_invoker_cdecl>(double *param_1,double *param_2)

{
  if (*param_2 != *param_1) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cc96390

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::
<lambda_111_>::<lambda_invoker_cdecl>(FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 != 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    return iVar2 != 0;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cc963e0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EOccludedAction>::
TPropertyWatcher<enum_EOccludedAction><enum_EOccludedAction,void>'::__l1::<lambda_113_>::
<lambda_invoker_cdecl>(EOccludedAction *param_1,EOccludedAction *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc963f0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EMeshEditingMaterialModes>::
TPropertyWatcher<enum_EMeshEditingMaterialModes><enum_EMeshEditingMaterialModes,void>'::__l1::
<lambda_115_>::<lambda_invoker_cdecl>
          (EMeshEditingMaterialModes *param_1,EMeshEditingMaterialModes *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96400

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>::
TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_><TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,void>'
::__l1::<lambda_117_>::<lambda_invoker_cdecl>
          (TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  
  bVar1 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals<UMaterialInterface,bool>
                    (param_1,param_2);
  return !bVar1;
}

// <lambda_invoker_cdecl> @ 14cc96420

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FLinearColor>::
TPropertyWatcher<FLinearColor><FLinearColor,void>'::__l1::<lambda_119_>::<lambda_invoker_cdecl>
          (FLinearColor *param_1,FLinearColor *param_2)

{
  if (((((param_2->field0_0x0)._s_0.R == (param_1->field0_0x0)._s_0.R) &&
       ((param_2->field0_0x0)._s_0.G == (param_1->field0_0x0)._s_0.G)) &&
      ((param_2->field0_0x0)._s_0.B == (param_1->field0_0x0)._s_0.B)) &&
     ((param_2->field0_0x0)._s_0.A == (param_1->field0_0x0)._s_0.A)) {
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 14cc969b0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EHoleFillOpFillType>::
TPropertyWatcher<enum_EHoleFillOpFillType><enum_EHoleFillOpFillType,void>'::__l1::<lambda_73_>::
<lambda_invoker_cdecl>(EHoleFillOpFillType *param_1,EHoleFillOpFillType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc969c0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::<lambda_75_>
::<lambda_invoker_cdecl>(int *param_1,int *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc969d0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::
<lambda_77_>::<lambda_invoker_cdecl>(float *param_1,float *param_2)

{
  if (*param_2 != *param_1) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cc969f0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_ELatticeInterpolationType>::
TPropertyWatcher<enum_ELatticeInterpolationType><enum_ELatticeInterpolationType,void>'::__l1::
<lambda_79_>::<lambda_invoker_cdecl>
          (ELatticeInterpolationType *param_1,ELatticeInterpolationType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96a00

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::
<lambda_81_>::<lambda_invoker_cdecl>(bool *param_1,bool *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96a10

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EToolContextCoordinateSystem>::
TPropertyWatcher<enum_EToolContextCoordinateSystem><enum_EToolContextCoordinateSystem,void>'::__l1::
<lambda_83_>::<lambda_invoker_cdecl>
          (EToolContextCoordinateSystem *param_1,EToolContextCoordinateSystem *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96a20

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EMeshAttributePaintMaterialMode>::
TPropertyWatcher<enum_EMeshAttributePaintMaterialMode><enum_EMeshAttributePaintMaterialMode,void>'::
__l1::<lambda_85_>::<lambda_invoker_cdecl>
          (EMeshAttributePaintMaterialMode *param_1,EMeshAttributePaintMaterialMode *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96a30

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>'::__l1::
<lambda_87_>::<lambda_invoker_cdecl>(FName *param_1,FName *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96a40

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintInteractionType>::
TPropertyWatcher<enum_EMeshGroupPaintInteractionType><enum_EMeshGroupPaintInteractionType,void>'::
__l1::<lambda_89_>::<lambda_invoker_cdecl>
          (EMeshGroupPaintInteractionType *param_1,EMeshGroupPaintInteractionType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96a50

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintBrushType>::
TPropertyWatcher<enum_EMeshGroupPaintBrushType><enum_EMeshGroupPaintBrushType,void>'::__l1::
<lambda_91_>::<lambda_invoker_cdecl>
          (EMeshGroupPaintBrushType *param_1,EMeshGroupPaintBrushType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96a60

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintMaterialMode>::
TPropertyWatcher<enum_EMeshVertexPaintMaterialMode><enum_EMeshVertexPaintMaterialMode,void>'::__l1::
<lambda_93_>::<lambda_invoker_cdecl>
          (EMeshVertexPaintMaterialMode *param_1,EMeshVertexPaintMaterialMode *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96a70

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintInteractionType>::
TPropertyWatcher<enum_EMeshVertexPaintInteractionType><enum_EMeshVertexPaintInteractionType,void>'::
__l1::<lambda_95_>::<lambda_invoker_cdecl>
          (EMeshVertexPaintInteractionType *param_1,EMeshVertexPaintInteractionType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cc96a80

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FModelingToolsColorChannelFilter>::
TPropertyWatcher<FModelingToolsColorChannelFilter><FModelingToolsColorChannelFilter,void>'::__l1::
<lambda_97_>::<lambda_invoker_cdecl>
          (FModelingToolsColorChannelFilter *param_1,FModelingToolsColorChannelFilter *param_2)

{
  if ((((param_1->bRed == param_2->bRed) && (param_1->bGreen == param_2->bGreen)) &&
      (param_1->bBlue == param_2->bBlue)) && (param_1->bAlpha == param_2->bAlpha)) {
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 14cc96ab0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType>::
TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType><enum_EMeshVertexPaintSecondaryActionType,void>'
::__l1::<lambda_99_>::<lambda_invoker_cdecl>
          (EMeshVertexPaintSecondaryActionType *param_1,EMeshVertexPaintSecondaryActionType *param_2
          )

{
  return *param_1 != *param_2;
}

// TPropertyWatcher<TObjectPtr<UTexture2D>_><TObjectPtr<UTexture2D>,void> @ 14cc96b50

TPropertyWatcher<TObjectPtr<UTexture2D>_> * __thiscall
FWatchablePropertySet::TPropertyWatcher<TObjectPtr<UTexture2D>_>::
TPropertyWatcher<TObjectPtr<UTexture2D>_><TObjectPtr<UTexture2D>,void>
          (TPropertyWatcher<TObjectPtr<UTexture2D>_> *this,TObjectPtr<UTexture2D> *param_1,
          TFunction<void___cdecl(TObjectPtr<UTexture2D>_const_&)> *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).bIsSet = false;
  this->_padding_ =
       (longlong)&___7__TPropertyWatcher_U__TObjectPtr_VUTexture2D_____FWatchablePropertySet__6B_;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_104_>__0_____0U__TObjectPtr_VUTexture2D____X___TPropertyWatcher_U__TObjectPtr_VUTexture2D_____FWatchablePropertySet__QEAA_AEBU__TObjectPtr_VUTexture2D____V__TFunction___A6AXAEBU__TObjectPtr_VUTexture2D_____Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(TObjectPtr<UTexture2D> **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<TObjectPtr<UTexture2D>_>::TPropertyWatcher<TObjectPtr<UTexture2D>_><TObjectPtr<UTexture2D>,void>'::__l1::<lambda_104_>,TObjectPtr<UTexture2D>_>
         ::Call;
  }
  *(undefined8 *)&this->OnChanged = *(undefined8 *)param_2;
  *(undefined8 *)&(this->OnChanged).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar2 = *(undefined4 *)&param_2->field_0x14;
  uVar3 = *(undefined4 *)&param_2->field_0x18;
  uVar4 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->OnChanged).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->OnChanged).field_0x14 = uVar2;
  *(undefined4 *)&(this->OnChanged).field_0x18 = uVar3;
  *(undefined4 *)&(this->OnChanged).field_0x1c = uVar4;
  *(undefined8 *)&(this->OnChanged).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->OnChanged != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->NotEqual = 0;
  *(undefined8 *)&(this->NotEqual).field_0x28 = 0;
  *(undefined ***)&(this->NotEqual).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TObjectPtr_VUTexture2D____0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<TObjectPtr<UTexture2D>_>::
       TPropertyWatcher<TObjectPtr<UTexture2D>_><TObjectPtr<UTexture2D>,void>'::__l1::<lambda_105_>
       ::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(TObjectPtr<UTexture2D>_const_&,TObjectPtr<UTexture2D>_const_&),bool,TObjectPtr<UTexture2D>_const_&,TObjectPtr<UTexture2D>_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_><TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,void> @ 14cc96c30

TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> * __thiscall
FWatchablePropertySet::TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>::
TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_><TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,void>
          (TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *this,
          TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *param_1,
          TFunction<void___cdecl(TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_&)>
          *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).bIsSet = false;
  this->_padding_ =
       (longlong)
       &
       ___7__TPropertyWatcher_U__TWeakObjectPtr_VUMaterialInterface__UFWeakObjectPtr_____FWatchablePropertySet__6B_
  ;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_116_>__0_____0U__TWeakObjectPtr_VUMaterialInterface__UFWeakObjectPtr____X___TPropertyWatcher_U__TWeakObjectPtr_VUMaterialInterface__UFWeakObjectPtr_____FWatchablePropertySet__QEAA_AEBU__TWeakObjectPtr_VUMaterialInterface__UFWeakObjectPtr____V__TFunction___A6AXAEBU__TWeakObjectPtr_VUMaterialInterface__UFWeakObjectPtr_____Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>::TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_><TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,void>'::__l1::<lambda_116_>,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>
         ::Call;
  }
  *(undefined8 *)&this->OnChanged = *(undefined8 *)param_2;
  *(undefined8 *)&(this->OnChanged).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar2 = *(undefined4 *)&param_2->field_0x14;
  uVar3 = *(undefined4 *)&param_2->field_0x18;
  uVar4 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->OnChanged).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->OnChanged).field_0x14 = uVar2;
  *(undefined4 *)&(this->OnChanged).field_0x18 = uVar3;
  *(undefined4 *)&(this->OnChanged).field_0x1c = uVar4;
  *(undefined8 *)&(this->OnChanged).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->OnChanged != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->NotEqual = 0;
  *(undefined8 *)&(this->NotEqual).field_0x28 = 0;
  *(undefined ***)&(this->NotEqual).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TWeakObjectPtr_VUMaterialInterface__UFWeakObjectPtr____0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>
       ::
       TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_><TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,void>'
       ::__l1::<lambda_117_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_&,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_&),bool,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_&,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<FModelingToolsColorChannelFilter><FModelingToolsColorChannelFilter,void> @ 14cc96d10

TPropertyWatcher<FModelingToolsColorChannelFilter> * __thiscall
FWatchablePropertySet::TPropertyWatcher<FModelingToolsColorChannelFilter>::
TPropertyWatcher<FModelingToolsColorChannelFilter><FModelingToolsColorChannelFilter,void>
          (TPropertyWatcher<FModelingToolsColorChannelFilter> *this,
          FModelingToolsColorChannelFilter *param_1,
          TFunction<void___cdecl(FModelingToolsColorChannelFilter_const_&)> *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).bIsSet = false;
  this->_padding_ =
       (longlong)
       &___7__TPropertyWatcher_UFModelingToolsColorChannelFilter___FWatchablePropertySet__6B_;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_96_>__0_____0UFModelingToolsColorChannelFilter__X___TPropertyWatcher_UFModelingToolsColorChannelFilter___FWatchablePropertySet__QEAA_AEBUFModelingToolsColorChannelFilter__V__TFunction___A6AXAEBUFModelingToolsColorChannelFilter___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(FModelingToolsColorChannelFilter **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<FModelingToolsColorChannelFilter>::TPropertyWatcher<FModelingToolsColorChannelFilter><FModelingToolsColorChannelFilter,void>'::__l1::<lambda_96_>,FModelingToolsColorChannelFilter>
         ::Call;
  }
  *(undefined8 *)&this->OnChanged = *(undefined8 *)param_2;
  *(undefined8 *)&(this->OnChanged).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar2 = *(undefined4 *)&param_2->field_0x14;
  uVar3 = *(undefined4 *)&param_2->field_0x18;
  uVar4 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->OnChanged).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->OnChanged).field_0x14 = uVar2;
  *(undefined4 *)&(this->OnChanged).field_0x18 = uVar3;
  *(undefined4 *)&(this->OnChanged).field_0x1c = uVar4;
  *(undefined8 *)&(this->OnChanged).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->OnChanged != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->NotEqual = 0;
  *(undefined8 *)&(this->NotEqual).field_0x28 = 0;
  *(undefined ***)&(this->NotEqual).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFModelingToolsColorChannelFilter__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<FModelingToolsColorChannelFilter>::
       TPropertyWatcher<FModelingToolsColorChannelFilter><FModelingToolsColorChannelFilter,void>'::
       __l1::<lambda_97_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(FModelingToolsColorChannelFilter_const_&,FModelingToolsColorChannelFilter_const_&),bool,FModelingToolsColorChannelFilter_const_&,FModelingToolsColorChannelFilter_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EHoleFillOpFillType><enum_EHoleFillOpFillType,void> @ 14cc96df0

TPropertyWatcher<EHoleFillOpFillType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EHoleFillOpFillType>::
TPropertyWatcher<enum_EHoleFillOpFillType><enum_EHoleFillOpFillType,void>
          (void *this,EHoleFillOpFillType *param_1,
          TFunction<void___cdecl(EHoleFillOpFillType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this = &___7__TPropertyWatcher_W4EHoleFillOpFillType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_72_>__0_____0W4EHoleFillOpFillType__X___TPropertyWatcher_W4EHoleFillOpFillType___FWatchablePropertySet__QEAA_AEBW4EHoleFillOpFillType__V__TFunction___A6AXAEBW4EHoleFillOpFillType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EHoleFillOpFillType>::TPropertyWatcher<enum_EHoleFillOpFillType><enum_EHoleFillOpFillType,void>'::__l1::<lambda_72_>,enum_EHoleFillOpFillType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EHoleFillOpFillType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EHoleFillOpFillType>::
       TPropertyWatcher<enum_EHoleFillOpFillType><enum_EHoleFillOpFillType,void>'::__l1::
       <lambda_73_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EHoleFillOpFillType_const_&,enum_EHoleFillOpFillType_const_&),bool,enum_EHoleFillOpFillType_const_&,enum_EHoleFillOpFillType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_ELatticeInterpolationType><enum_ELatticeInterpolationType,void> @ 14cc96ed0

TPropertyWatcher<ELatticeInterpolationType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ELatticeInterpolationType>::
TPropertyWatcher<enum_ELatticeInterpolationType><enum_ELatticeInterpolationType,void>
          (void *this,ELatticeInterpolationType *param_1,
          TFunction<void___cdecl(ELatticeInterpolationType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4ELatticeInterpolationType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_78_>__0_____0W4ELatticeInterpolationType__X___TPropertyWatcher_W4ELatticeInterpolationType___FWatchablePropertySet__QEAA_AEBW4ELatticeInterpolationType__V__TFunction___A6AXAEBW4ELatticeInterpolationType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_ELatticeInterpolationType>::TPropertyWatcher<enum_ELatticeInterpolationType><enum_ELatticeInterpolationType,void>'::__l1::<lambda_78_>,enum_ELatticeInterpolationType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4ELatticeInterpolationType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_ELatticeInterpolationType>::
       TPropertyWatcher<enum_ELatticeInterpolationType><enum_ELatticeInterpolationType,void>'::__l1
       ::<lambda_79_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_ELatticeInterpolationType_const_&,enum_ELatticeInterpolationType_const_&),bool,enum_ELatticeInterpolationType_const_&,enum_ELatticeInterpolationType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EMeshAttributePaintMaterialMode><enum_EMeshAttributePaintMaterialMode,void> @ 14cc96fb0

TPropertyWatcher<EMeshAttributePaintMaterialMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshAttributePaintMaterialMode>::
TPropertyWatcher<enum_EMeshAttributePaintMaterialMode><enum_EMeshAttributePaintMaterialMode,void>
          (void *this,EMeshAttributePaintMaterialMode *param_1,
          TFunction<void___cdecl(EMeshAttributePaintMaterialMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EMeshAttributePaintMaterialMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_84_>__0_____0W4EMeshAttributePaintMaterialMode__X___TPropertyWatcher_W4EMeshAttributePaintMaterialMode___FWatchablePropertySet__QEAA_AEBW4EMeshAttributePaintMaterialMode__V__TFunction___A6AXAEBW4EMeshAttributePaintMaterialMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EMeshAttributePaintMaterialMode>::TPropertyWatcher<enum_EMeshAttributePaintMaterialMode><enum_EMeshAttributePaintMaterialMode,void>'::__l1::<lambda_84_>,enum_EMeshAttributePaintMaterialMode>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMeshAttributePaintMaterialMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EMeshAttributePaintMaterialMode>::
       TPropertyWatcher<enum_EMeshAttributePaintMaterialMode><enum_EMeshAttributePaintMaterialMode,void>'
       ::__l1::<lambda_85_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EMeshAttributePaintMaterialMode_const_&,enum_EMeshAttributePaintMaterialMode_const_&),bool,enum_EMeshAttributePaintMaterialMode_const_&,enum_EMeshAttributePaintMaterialMode_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EMeshEditingMaterialModes><enum_EMeshEditingMaterialModes,void> @ 14cc97090

TPropertyWatcher<EMeshEditingMaterialModes> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshEditingMaterialModes>::
TPropertyWatcher<enum_EMeshEditingMaterialModes><enum_EMeshEditingMaterialModes,void>
          (void *this,EMeshEditingMaterialModes *param_1,
          TFunction<void___cdecl(EMeshEditingMaterialModes_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EMeshEditingMaterialModes___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_114_>__0_____0W4EMeshEditingMaterialModes__X___TPropertyWatcher_W4EMeshEditingMaterialModes___FWatchablePropertySet__QEAA_AEBW4EMeshEditingMaterialModes__V__TFunction___A6AXAEBW4EMeshEditingMaterialModes___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EMeshEditingMaterialModes>::TPropertyWatcher<enum_EMeshEditingMaterialModes><enum_EMeshEditingMaterialModes,void>'::__l1::<lambda_114_>,enum_EMeshEditingMaterialModes>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMeshEditingMaterialModes__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EMeshEditingMaterialModes>::
       TPropertyWatcher<enum_EMeshEditingMaterialModes><enum_EMeshEditingMaterialModes,void>'::__l1
       ::<lambda_115_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EMeshEditingMaterialModes_const_&,enum_EMeshEditingMaterialModes_const_&),bool,enum_EMeshEditingMaterialModes_const_&,enum_EMeshEditingMaterialModes_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EMeshGroupPaintBrushType><enum_EMeshGroupPaintBrushType,void> @ 14cc97170

TPropertyWatcher<EMeshGroupPaintBrushType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintBrushType>::
TPropertyWatcher<enum_EMeshGroupPaintBrushType><enum_EMeshGroupPaintBrushType,void>
          (void *this,EMeshGroupPaintBrushType *param_1,
          TFunction<void___cdecl(EMeshGroupPaintBrushType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EMeshGroupPaintBrushType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_90_>__0_____0W4EMeshGroupPaintBrushType__X___TPropertyWatcher_W4EMeshGroupPaintBrushType___FWatchablePropertySet__QEAA_AEBW4EMeshGroupPaintBrushType__V__TFunction___A6AXAEBW4EMeshGroupPaintBrushType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintBrushType>::TPropertyWatcher<enum_EMeshGroupPaintBrushType><enum_EMeshGroupPaintBrushType,void>'::__l1::<lambda_90_>,enum_EMeshGroupPaintBrushType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMeshGroupPaintBrushType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintBrushType>::
       TPropertyWatcher<enum_EMeshGroupPaintBrushType><enum_EMeshGroupPaintBrushType,void>'::__l1::
       <lambda_91_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EMeshGroupPaintBrushType_const_&,enum_EMeshGroupPaintBrushType_const_&),bool,enum_EMeshGroupPaintBrushType_const_&,enum_EMeshGroupPaintBrushType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EMeshGroupPaintInteractionType><enum_EMeshGroupPaintInteractionType,void> @ 14cc97250

TPropertyWatcher<EMeshGroupPaintInteractionType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintInteractionType>::
TPropertyWatcher<enum_EMeshGroupPaintInteractionType><enum_EMeshGroupPaintInteractionType,void>
          (void *this,EMeshGroupPaintInteractionType *param_1,
          TFunction<void___cdecl(EMeshGroupPaintInteractionType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EMeshGroupPaintInteractionType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_88_>__0_____0W4EMeshGroupPaintInteractionType__X___TPropertyWatcher_W4EMeshGroupPaintInteractionType___FWatchablePropertySet__QEAA_AEBW4EMeshGroupPaintInteractionType__V__TFunction___A6AXAEBW4EMeshGroupPaintInteractionType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintInteractionType>::TPropertyWatcher<enum_EMeshGroupPaintInteractionType><enum_EMeshGroupPaintInteractionType,void>'::__l1::<lambda_88_>,enum_EMeshGroupPaintInteractionType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMeshGroupPaintInteractionType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintInteractionType>::
       TPropertyWatcher<enum_EMeshGroupPaintInteractionType><enum_EMeshGroupPaintInteractionType,void>'
       ::__l1::<lambda_89_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EMeshGroupPaintInteractionType_const_&,enum_EMeshGroupPaintInteractionType_const_&),bool,enum_EMeshGroupPaintInteractionType_const_&,enum_EMeshGroupPaintInteractionType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EMeshSculptFalloffType><enum_EMeshSculptFalloffType,void> @ 14cc97330

TPropertyWatcher<EMeshSculptFalloffType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshSculptFalloffType>::
TPropertyWatcher<enum_EMeshSculptFalloffType><enum_EMeshSculptFalloffType,void>
          (void *this,EMeshSculptFalloffType *param_1,
          TFunction<void___cdecl(EMeshSculptFalloffType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EMeshSculptFalloffType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_102_>__0_____0W4EMeshSculptFalloffType__X___TPropertyWatcher_W4EMeshSculptFalloffType___FWatchablePropertySet__QEAA_AEBW4EMeshSculptFalloffType__V__TFunction___A6AXAEBW4EMeshSculptFalloffType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EMeshSculptFalloffType>::TPropertyWatcher<enum_EMeshSculptFalloffType><enum_EMeshSculptFalloffType,void>'::__l1::<lambda_102_>,enum_EMeshSculptFalloffType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMeshSculptFalloffType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EMeshSculptFalloffType>::
       TPropertyWatcher<enum_EMeshSculptFalloffType><enum_EMeshSculptFalloffType,void>'::__l1::
       <lambda_103_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EMeshSculptFalloffType_const_&,enum_EMeshSculptFalloffType_const_&),bool,enum_EMeshSculptFalloffType_const_&,enum_EMeshSculptFalloffType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EMeshVertexPaintBrushType><enum_EMeshVertexPaintBrushType,void> @ 14cc97410

TPropertyWatcher<EMeshVertexPaintBrushType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintBrushType>::
TPropertyWatcher<enum_EMeshVertexPaintBrushType><enum_EMeshVertexPaintBrushType,void>
          (void *this,EMeshVertexPaintBrushType *param_1,
          TFunction<void___cdecl(EMeshVertexPaintBrushType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EMeshVertexPaintBrushType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_100_>__0_____0W4EMeshVertexPaintBrushType__X___TPropertyWatcher_W4EMeshVertexPaintBrushType___FWatchablePropertySet__QEAA_AEBW4EMeshVertexPaintBrushType__V__TFunction___A6AXAEBW4EMeshVertexPaintBrushType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintBrushType>::TPropertyWatcher<enum_EMeshVertexPaintBrushType><enum_EMeshVertexPaintBrushType,void>'::__l1::<lambda_100_>,enum_EMeshVertexPaintBrushType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMeshVertexPaintBrushType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintBrushType>::
       TPropertyWatcher<enum_EMeshVertexPaintBrushType><enum_EMeshVertexPaintBrushType,void>'::__l1
       ::<lambda_101_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EMeshVertexPaintBrushType_const_&,enum_EMeshVertexPaintBrushType_const_&),bool,enum_EMeshVertexPaintBrushType_const_&,enum_EMeshVertexPaintBrushType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EMeshVertexPaintInteractionType><enum_EMeshVertexPaintInteractionType,void> @ 14cc974f0

TPropertyWatcher<EMeshVertexPaintInteractionType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintInteractionType>::
TPropertyWatcher<enum_EMeshVertexPaintInteractionType><enum_EMeshVertexPaintInteractionType,void>
          (void *this,EMeshVertexPaintInteractionType *param_1,
          TFunction<void___cdecl(EMeshVertexPaintInteractionType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EMeshVertexPaintInteractionType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_94_>__0_____0W4EMeshVertexPaintInteractionType__X___TPropertyWatcher_W4EMeshVertexPaintInteractionType___FWatchablePropertySet__QEAA_AEBW4EMeshVertexPaintInteractionType__V__TFunction___A6AXAEBW4EMeshVertexPaintInteractionType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintInteractionType>::TPropertyWatcher<enum_EMeshVertexPaintInteractionType><enum_EMeshVertexPaintInteractionType,void>'::__l1::<lambda_94_>,enum_EMeshVertexPaintInteractionType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMeshVertexPaintInteractionType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintInteractionType>::
       TPropertyWatcher<enum_EMeshVertexPaintInteractionType><enum_EMeshVertexPaintInteractionType,void>'
       ::__l1::<lambda_95_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EMeshVertexPaintInteractionType_const_&,enum_EMeshVertexPaintInteractionType_const_&),bool,enum_EMeshVertexPaintInteractionType_const_&,enum_EMeshVertexPaintInteractionType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EMeshVertexPaintMaterialMode><enum_EMeshVertexPaintMaterialMode,void> @ 14cc975d0

TPropertyWatcher<EMeshVertexPaintMaterialMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintMaterialMode>::
TPropertyWatcher<enum_EMeshVertexPaintMaterialMode><enum_EMeshVertexPaintMaterialMode,void>
          (void *this,EMeshVertexPaintMaterialMode *param_1,
          TFunction<void___cdecl(EMeshVertexPaintMaterialMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EMeshVertexPaintMaterialMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_92_>__0_____0W4EMeshVertexPaintMaterialMode__X___TPropertyWatcher_W4EMeshVertexPaintMaterialMode___FWatchablePropertySet__QEAA_AEBW4EMeshVertexPaintMaterialMode__V__TFunction___A6AXAEBW4EMeshVertexPaintMaterialMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintMaterialMode>::TPropertyWatcher<enum_EMeshVertexPaintMaterialMode><enum_EMeshVertexPaintMaterialMode,void>'::__l1::<lambda_92_>,enum_EMeshVertexPaintMaterialMode>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMeshVertexPaintMaterialMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintMaterialMode>::
       TPropertyWatcher<enum_EMeshVertexPaintMaterialMode><enum_EMeshVertexPaintMaterialMode,void>'
       ::__l1::<lambda_93_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EMeshVertexPaintMaterialMode_const_&,enum_EMeshVertexPaintMaterialMode_const_&),bool,enum_EMeshVertexPaintMaterialMode_const_&,enum_EMeshVertexPaintMaterialMode_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType><enum_EMeshVertexPaintSecondaryActionType,void> @ 14cc976b0

TPropertyWatcher<EMeshVertexPaintSecondaryActionType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType>::
TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType><enum_EMeshVertexPaintSecondaryActionType,void>
          (void *this,EMeshVertexPaintSecondaryActionType *param_1,
          TFunction<void___cdecl(EMeshVertexPaintSecondaryActionType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EMeshVertexPaintSecondaryActionType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_98_>__0_____0W4EMeshVertexPaintSecondaryActionType__X___TPropertyWatcher_W4EMeshVertexPaintSecondaryActionType___FWatchablePropertySet__QEAA_AEBW4EMeshVertexPaintSecondaryActionType__V__TFunction___A6AXAEBW4EMeshVertexPaintSecondaryActionType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType>::TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType><enum_EMeshVertexPaintSecondaryActionType,void>'::__l1::<lambda_98_>,enum_EMeshVertexPaintSecondaryActionType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMeshVertexPaintSecondaryActionType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType>::
       TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType><enum_EMeshVertexPaintSecondaryActionType,void>'
       ::__l1::<lambda_99_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EMeshVertexPaintSecondaryActionType_const_&,enum_EMeshVertexPaintSecondaryActionType_const_&),bool,enum_EMeshVertexPaintSecondaryActionType_const_&,enum_EMeshVertexPaintSecondaryActionType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EOccludedAction><enum_EOccludedAction,void> @ 14cc97790

TPropertyWatcher<EOccludedAction> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EOccludedAction>::
TPropertyWatcher<enum_EOccludedAction><enum_EOccludedAction,void>
          (void *this,EOccludedAction *param_1,
          TFunction<void___cdecl(EOccludedAction_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this = &___7__TPropertyWatcher_W4EOccludedAction___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_112_>__0_____0W4EOccludedAction__X___TPropertyWatcher_W4EOccludedAction___FWatchablePropertySet__QEAA_AEBW4EOccludedAction__V__TFunction___A6AXAEBW4EOccludedAction___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EOccludedAction>::TPropertyWatcher<enum_EOccludedAction><enum_EOccludedAction,void>'::__l1::<lambda_112_>,enum_EOccludedAction>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EOccludedAction__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EOccludedAction>::
       TPropertyWatcher<enum_EOccludedAction><enum_EOccludedAction,void>'::__l1::<lambda_113_>::
       <lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EOccludedAction_const_&,enum_EOccludedAction_const_&),bool,enum_EOccludedAction_const_&,enum_EOccludedAction_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EOffsetMeshToolOffsetType><enum_EOffsetMeshToolOffsetType,void> @ 14cc97870

TPropertyWatcher<EOffsetMeshToolOffsetType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EOffsetMeshToolOffsetType>::
TPropertyWatcher<enum_EOffsetMeshToolOffsetType><enum_EOffsetMeshToolOffsetType,void>
          (void *this,EOffsetMeshToolOffsetType *param_1,
          TFunction<void___cdecl(EOffsetMeshToolOffsetType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EOffsetMeshToolOffsetType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_106_>__0_____0W4EOffsetMeshToolOffsetType__X___TPropertyWatcher_W4EOffsetMeshToolOffsetType___FWatchablePropertySet__QEAA_AEBW4EOffsetMeshToolOffsetType__V__TFunction___A6AXAEBW4EOffsetMeshToolOffsetType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EOffsetMeshToolOffsetType>::TPropertyWatcher<enum_EOffsetMeshToolOffsetType><enum_EOffsetMeshToolOffsetType,void>'::__l1::<lambda_106_>,enum_EOffsetMeshToolOffsetType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EOffsetMeshToolOffsetType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EOffsetMeshToolOffsetType>::
       TPropertyWatcher<enum_EOffsetMeshToolOffsetType><enum_EOffsetMeshToolOffsetType,void>'::__l1
       ::<lambda_107_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EOffsetMeshToolOffsetType_const_&,enum_EOffsetMeshToolOffsetType_const_&),bool,enum_EOffsetMeshToolOffsetType_const_&,enum_EOffsetMeshToolOffsetType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EToolContextCoordinateSystem><enum_EToolContextCoordinateSystem,void> @ 14cc97950

TPropertyWatcher<EToolContextCoordinateSystem> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EToolContextCoordinateSystem>::
TPropertyWatcher<enum_EToolContextCoordinateSystem><enum_EToolContextCoordinateSystem,void>
          (void *this,EToolContextCoordinateSystem *param_1,
          TFunction<void___cdecl(EToolContextCoordinateSystem_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EToolContextCoordinateSystem___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_82_>__0_____0W4EToolContextCoordinateSystem__X___TPropertyWatcher_W4EToolContextCoordinateSystem___FWatchablePropertySet__QEAA_AEBW4EToolContextCoordinateSystem__V__TFunction___A6AXAEBW4EToolContextCoordinateSystem___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EToolContextCoordinateSystem>::TPropertyWatcher<enum_EToolContextCoordinateSystem><enum_EToolContextCoordinateSystem,void>'::__l1::<lambda_82_>,enum_EToolContextCoordinateSystem>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EToolContextCoordinateSystem__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EToolContextCoordinateSystem>::
       TPropertyWatcher<enum_EToolContextCoordinateSystem><enum_EToolContextCoordinateSystem,void>'
       ::__l1::<lambda_83_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EToolContextCoordinateSystem_const_&,enum_EToolContextCoordinateSystem_const_&),bool,enum_EToolContextCoordinateSystem_const_&,enum_EToolContextCoordinateSystem_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// CheckAndUpdate @ 14ccec0d0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<TObjectPtr<UTexture2D>_>::CheckAndUpdate
          (TPropertyWatcher<TObjectPtr<UTexture2D>_> *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TOptional<TObjectPtr<UTexture2D>_> *pTVar7;
  TObjectPtr<UTexture2D>_u_0 local_18 [2];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar6 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(local_18,uVar5);
  if ((this->Cached).bIsSet != false) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->NotEqual);
    pcVar2 = *(code **)&this->NotEqual;
    plVar1 = *(longlong **)&(this->NotEqual).field_0x28;
    plVar6 = (longlong *)&(this->NotEqual).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5,&this->Cached,local_18);
    if (cVar3 == '\0') {
      return;
    }
  }
  pTVar7 = &this->Cached;
  if (local_18 != (TObjectPtr<UTexture2D>_u_0 *)pTVar7) {
    (pTVar7->TypedValue).field0_0x0.DebugPtr = (UTexture2D *)local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0].DebugPtr != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0].DebugPtr);
    }
    (this->Cached).bIsSet = true;
  }
  if (((this->Cached).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChanged);
  plVar1 = *(longlong **)&(this->OnChanged).field_0x28;
  pcVar2 = *(code **)&this->OnChanged;
  plVar6 = (longlong *)&(this->OnChanged).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(uVar5,pTVar7);
  return;
}

// CheckAndUpdate @ 14ccec200

void __thiscall
FWatchablePropertySet::TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>::
CheckAndUpdate(TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TOptional<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *pTVar7;
  FWeakObjectPtr local_18 [2];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar6 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(local_18,uVar5);
  if ((this->Cached).bIsSet != false) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->NotEqual);
    pcVar2 = *(code **)&this->NotEqual;
    plVar1 = *(longlong **)&(this->NotEqual).field_0x28;
    plVar6 = (longlong *)&(this->NotEqual).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5,&this->Cached,local_18);
    if (cVar3 == '\0') {
      return;
    }
  }
  pTVar7 = &this->Cached;
  if ((TOptional<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *)local_18 != pTVar7) {
    (pTVar7->TypedValue).WeakPtr = local_18[0];
    (this->Cached).bIsSet = true;
  }
  if (((this->Cached).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChanged);
  plVar1 = *(longlong **)&(this->OnChanged).field_0x28;
  pcVar2 = *(code **)&this->OnChanged;
  plVar6 = (longlong *)&(this->OnChanged).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(uVar5,pTVar7);
  return;
}

// CheckAndUpdate @ 14ccec310

void __thiscall
FWatchablePropertySet::TPropertyWatcher<FModelingToolsColorChannelFilter>::CheckAndUpdate
          (TPropertyWatcher<FModelingToolsColorChannelFilter> *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TOptional<FModelingToolsColorChannelFilter> *pTVar7;
  FModelingToolsColorChannelFilter local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar6 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_18[0] = (FModelingToolsColorChannelFilter)(*pcVar2)(uVar5);
  if ((this->Cached).bIsSet != false) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->NotEqual);
    pcVar2 = *(code **)&this->NotEqual;
    plVar1 = *(longlong **)&(this->NotEqual).field_0x28;
    plVar6 = (longlong *)&(this->NotEqual).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5,&this->Cached,local_18);
    if (cVar3 == '\0') {
      return;
    }
  }
  pTVar7 = &this->Cached;
  if ((TOptional<FModelingToolsColorChannelFilter> *)local_18 != pTVar7) {
    pTVar7->TypedValue = local_18[0];
    (this->Cached).bIsSet = true;
  }
  if (((this->Cached).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChanged);
  plVar1 = *(longlong **)&(this->OnChanged).field_0x28;
  pcVar2 = *(code **)&this->OnChanged;
  plVar6 = (longlong *)&(this->OnChanged).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(uVar5,pTVar7);
  return;
}

// CheckAndUpdate @ 14ccec420

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EHoleFillOpFillType>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14ccec530

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ELatticeInterpolationType>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14ccec640

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshAttributePaintMaterialMode>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14ccec750

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshEditingMaterialModes>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14ccec860

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintBrushType>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14ccec970

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintInteractionType>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cceca80

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshSculptFalloffType>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14ccecb90

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintBrushType>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14ccecca0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintInteractionType>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14ccecdb0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintMaterialMode>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14ccecec0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14ccecfd0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EOccludedAction>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cced0e0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EOffsetMeshToolOffsetType>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cced1f0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EToolContextCoordinateSystem>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// SilentUpdate @ 14cd2e000

void __thiscall
FWatchablePropertySet::TPropertyWatcher<TObjectPtr<UTexture2D>_>::SilentUpdate
          (TPropertyWatcher<TObjectPtr<UTexture2D>_> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  TObjectPtr<UTexture2D>_u_0 local_18 [2];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar4 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  if (local_18 != (TObjectPtr<UTexture2D>_u_0 *)&this->Cached) {
    (this->Cached).TypedValue.field0_0x0.DebugPtr = (UTexture2D *)local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0].DebugPtr != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0].DebugPtr);
    }
    (this->Cached).bIsSet = true;
  }
  return;
}

// SilentUpdate @ 14cd2e080

void __thiscall
FWatchablePropertySet::TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>::
SilentUpdate(TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FWeakObjectPtr local_18 [2];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar4 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  if ((TOptional<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *)local_18 != &this->Cached) {
    (this->Cached).TypedValue.WeakPtr = local_18[0];
    (this->Cached).bIsSet = true;
  }
  return;
}

// SilentUpdate @ 14cd2e0f0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<FModelingToolsColorChannelFilter>::SilentUpdate
          (TPropertyWatcher<FModelingToolsColorChannelFilter> *this)

{
  longlong *plVar1;
  code *pcVar2;
  FModelingToolsColorChannelFilter FVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar5 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  FVar3 = (FModelingToolsColorChannelFilter)(*pcVar2)(uVar4);
  if ((TOptional<FModelingToolsColorChannelFilter> *)local_18 != &this->Cached) {
    (this->Cached).TypedValue = FVar3;
    (this->Cached).bIsSet = true;
  }
  return;
}

// SilentUpdate @ 14cd2e150

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EHoleFillOpFillType>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e1b0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ELatticeInterpolationType>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e210

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshAttributePaintMaterialMode>::SilentUpdate
          (void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e270

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshEditingMaterialModes>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e2d0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintBrushType>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e330

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintInteractionType>::SilentUpdate
          (void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e390

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshSculptFalloffType>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e3f0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintBrushType>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e450

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintInteractionType>::SilentUpdate
          (void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e4b0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintMaterialMode>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e510

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType>::SilentUpdate
          (void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e570

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EOccludedAction>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e5d0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EOffsetMeshToolOffsetType>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd2e630

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EToolContextCoordinateSystem>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14cd44780

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::
TPropertyWatcher<enum_ESmoothMeshToolSmoothType><enum_ESmoothMeshToolSmoothType,void>'::__l1::
<lambda_46_>::<lambda_invoker_cdecl>
          (ESmoothMeshToolSmoothType *param_1,ESmoothMeshToolSmoothType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd44790

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::
<lambda_48_>::<lambda_invoker_cdecl>(float *param_1,float *param_2)

{
  if (*param_2 != *param_1) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cd447b0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<double>::TPropertyWatcher<double><double,void>'::__l1::
<lambda_50_>::<lambda_invoker_cdecl>(double *param_1,double *param_2)

{
  if (*param_2 != *param_1) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cd447d0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::<lambda_52_>
::<lambda_invoker_cdecl>(int *param_1,int *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd447e0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::
<lambda_54_>::<lambda_invoker_cdecl>(bool *param_1,bool *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd447f0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::
TPropertyWatcher<enum_EPolyEditExtrudeDirection><enum_EPolyEditExtrudeDirection,void>'::__l1::
<lambda_56_>::<lambda_invoker_cdecl>
          (EPolyEditExtrudeDirection *param_1,EPolyEditExtrudeDirection *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd44800

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::
TPropertyWatcher<enum_EPolyEditExtrudeModeOptions><enum_EPolyEditExtrudeModeOptions,void>'::__l1::
<lambda_58_>::<lambda_invoker_cdecl>
          (EPolyEditExtrudeModeOptions *param_1,EPolyEditExtrudeModeOptions *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd44810

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::
TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode><enum_EPolyEditExtrudeDistanceMode,void>'::__l1::
<lambda_60_>::<lambda_invoker_cdecl>
          (EPolyEditExtrudeDistanceMode *param_1,EPolyEditExtrudeDistanceMode *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd44820

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::
TPropertyWatcher<enum_EPolyEditOffsetModeOptions><enum_EPolyEditOffsetModeOptions,void>'::__l1::
<lambda_62_>::<lambda_invoker_cdecl>
          (EPolyEditOffsetModeOptions *param_1,EPolyEditOffsetModeOptions *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd44830

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::
TPropertyWatcher<enum_EPolyEditPushPullModeOptions><enum_EPolyEditPushPullModeOptions,void>'::__l1::
<lambda_64_>::<lambda_invoker_cdecl>
          (EPolyEditPushPullModeOptions *param_1,EPolyEditPushPullModeOptions *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd44840

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::
TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode><enum_EPolyEditExtrudeEdgeDirectionMode,void>'
::__l1::<lambda_66_>::<lambda_invoker_cdecl>
          (EPolyEditExtrudeEdgeDirectionMode *param_1,EPolyEditExtrudeEdgeDirectionMode *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd44850

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::
TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode><enum_EPolyEditExtrudeEdgeDistanceMode,void>'
::__l1::<lambda_68_>::<lambda_invoker_cdecl>
          (EPolyEditExtrudeEdgeDistanceMode *param_1,EPolyEditExtrudeEdgeDistanceMode *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd44860

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::
<lambda_70_>::<lambda_invoker_cdecl>(FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 != 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    return iVar2 != 0;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cd448b0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::
TPropertyWatcher<UE::Math::TVector<double>_><UE::Math::TVector<double>,void>'::__l1::<lambda_72_>::
<lambda_invoker_cdecl>(TVector<double> *param_1,TVector<double> *param_2)

{
  if ((((param_2->field0_0x0)._s_0.X == (param_1->field0_0x0)._s_0.X) &&
      ((param_2->field0_0x0)._s_0.Y == (param_1->field0_0x0)._s_0.Y)) &&
     ((param_2->field0_0x0)._s_0.Z == (param_1->field0_0x0)._s_0.Z)) {
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 14cd448e0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::
TPropertyWatcher<enum_EUVProjectionToolInitializationMode><enum_EUVProjectionToolInitializationMode,void>'
::__l1::<lambda_74_>::<lambda_invoker_cdecl>
          (EUVProjectionToolInitializationMode *param_1,EUVProjectionToolInitializationMode *param_2
          )

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cd448f0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::
TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode><enum_EWeldMeshEdgesAttributeUIMode,void>'::__l1
::<lambda_76_>::<lambda_invoker_cdecl>
          (EWeldMeshEdgesAttributeUIMode *param_1,EWeldMeshEdgesAttributeUIMode *param_2)

{
  return *param_1 != *param_2;
}

// TPropertyWatcher<UE::Math::TVector<double>_><UE::Math::TVector<double>,void> @ 14cd44900

TPropertyWatcher<UE::Math::TVector<double>_> * __thiscall
FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::
TPropertyWatcher<UE::Math::TVector<double>_><UE::Math::TVector<double>,void>
          (TPropertyWatcher<UE::Math::TVector<double>_> *this,TVector<double> *param_1,
          TFunction<void___cdecl(UE::Math::TVector<double>_const_&)> *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).bIsSet = false;
  this->_padding_ =
       (longlong)&___7__TPropertyWatcher_U__TVector_N_Math_UE___FWatchablePropertySet__6B_;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_71_>__0_____0U__TVector_N_Math_UE__X___TPropertyWatcher_U__TVector_N_Math_UE___FWatchablePropertySet__QEAA_AEBU__TVector_N_Math_UE__V__TFunction___A6AXAEBU__TVector_N_Math_UE___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(TVector<double> **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::TPropertyWatcher<UE::Math::TVector<double>_><UE::Math::TVector<double>,void>'::__l1::<lambda_71_>,UE::Math::TVector<double>_>
         ::Call;
  }
  *(undefined8 *)&this->OnChanged = *(undefined8 *)param_2;
  *(undefined8 *)&(this->OnChanged).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar2 = *(undefined4 *)&param_2->field_0x14;
  uVar3 = *(undefined4 *)&param_2->field_0x18;
  uVar4 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->OnChanged).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->OnChanged).field_0x14 = uVar2;
  *(undefined4 *)&(this->OnChanged).field_0x18 = uVar3;
  *(undefined4 *)&(this->OnChanged).field_0x1c = uVar4;
  *(undefined8 *)&(this->OnChanged).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->OnChanged != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->NotEqual = 0;
  *(undefined8 *)&(this->NotEqual).field_0x28 = 0;
  *(undefined ***)&(this->NotEqual).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::
       TPropertyWatcher<UE::Math::TVector<double>_><UE::Math::TVector<double>,void>'::__l1::
       <lambda_72_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EPolyEditExtrudeDirection><enum_EPolyEditExtrudeDirection,void> @ 14cd449e0

TPropertyWatcher<EPolyEditExtrudeDirection> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::
TPropertyWatcher<enum_EPolyEditExtrudeDirection><enum_EPolyEditExtrudeDirection,void>
          (void *this,EPolyEditExtrudeDirection *param_1,
          TFunction<void___cdecl(EPolyEditExtrudeDirection_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EPolyEditExtrudeDirection___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_55_>__0_____0W4EPolyEditExtrudeDirection__X___TPropertyWatcher_W4EPolyEditExtrudeDirection___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeDirection__V__TFunction___A6AXAEBW4EPolyEditExtrudeDirection___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::TPropertyWatcher<enum_EPolyEditExtrudeDirection><enum_EPolyEditExtrudeDirection,void>'::__l1::<lambda_55_>,enum_EPolyEditExtrudeDirection>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditExtrudeDirection__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::
       TPropertyWatcher<enum_EPolyEditExtrudeDirection><enum_EPolyEditExtrudeDirection,void>'::__l1
       ::<lambda_56_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EPolyEditExtrudeDirection_const_&,enum_EPolyEditExtrudeDirection_const_&),bool,enum_EPolyEditExtrudeDirection_const_&,enum_EPolyEditExtrudeDirection_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode><enum_EPolyEditExtrudeDistanceMode,void> @ 14cd44ac0

TPropertyWatcher<EPolyEditExtrudeDistanceMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::
TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode><enum_EPolyEditExtrudeDistanceMode,void>
          (void *this,EPolyEditExtrudeDistanceMode *param_1,
          TFunction<void___cdecl(EPolyEditExtrudeDistanceMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EPolyEditExtrudeDistanceMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_59_>__0_____0W4EPolyEditExtrudeDistanceMode__X___TPropertyWatcher_W4EPolyEditExtrudeDistanceMode___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeDistanceMode__V__TFunction___A6AXAEBW4EPolyEditExtrudeDistanceMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode><enum_EPolyEditExtrudeDistanceMode,void>'::__l1::<lambda_59_>,enum_EPolyEditExtrudeDistanceMode>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditExtrudeDistanceMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::
       TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode><enum_EPolyEditExtrudeDistanceMode,void>'
       ::__l1::<lambda_60_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EPolyEditExtrudeDistanceMode_const_&,enum_EPolyEditExtrudeDistanceMode_const_&),bool,enum_EPolyEditExtrudeDistanceMode_const_&,enum_EPolyEditExtrudeDistanceMode_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode><enum_EPolyEditExtrudeEdgeDirectionMode,void> @ 14cd44ba0

TPropertyWatcher<EPolyEditExtrudeEdgeDirectionMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::
TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode><enum_EPolyEditExtrudeEdgeDirectionMode,void>
          (void *this,EPolyEditExtrudeEdgeDirectionMode *param_1,
          TFunction<void___cdecl(EPolyEditExtrudeEdgeDirectionMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EPolyEditExtrudeEdgeDirectionMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_65_>__0_____0W4EPolyEditExtrudeEdgeDirectionMode__X___TPropertyWatcher_W4EPolyEditExtrudeEdgeDirectionMode___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeEdgeDirectionMode__V__TFunction___A6AXAEBW4EPolyEditExtrudeEdgeDirectionMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode><enum_EPolyEditExtrudeEdgeDirectionMode,void>'::__l1::<lambda_65_>,enum_EPolyEditExtrudeEdgeDirectionMode>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditExtrudeEdgeDirectionMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::
       TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode><enum_EPolyEditExtrudeEdgeDirectionMode,void>'
       ::__l1::<lambda_66_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EPolyEditExtrudeEdgeDirectionMode_const_&,enum_EPolyEditExtrudeEdgeDirectionMode_const_&),bool,enum_EPolyEditExtrudeEdgeDirectionMode_const_&,enum_EPolyEditExtrudeEdgeDirectionMode_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode><enum_EPolyEditExtrudeEdgeDistanceMode,void> @ 14cd44c80

TPropertyWatcher<EPolyEditExtrudeEdgeDistanceMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::
TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode><enum_EPolyEditExtrudeEdgeDistanceMode,void>
          (void *this,EPolyEditExtrudeEdgeDistanceMode *param_1,
          TFunction<void___cdecl(EPolyEditExtrudeEdgeDistanceMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EPolyEditExtrudeEdgeDistanceMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_67_>__0_____0W4EPolyEditExtrudeEdgeDistanceMode__X___TPropertyWatcher_W4EPolyEditExtrudeEdgeDistanceMode___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeEdgeDistanceMode__V__TFunction___A6AXAEBW4EPolyEditExtrudeEdgeDistanceMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode><enum_EPolyEditExtrudeEdgeDistanceMode,void>'::__l1::<lambda_67_>,enum_EPolyEditExtrudeEdgeDistanceMode>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditExtrudeEdgeDistanceMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::
       TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode><enum_EPolyEditExtrudeEdgeDistanceMode,void>'
       ::__l1::<lambda_68_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EPolyEditExtrudeEdgeDistanceMode_const_&,enum_EPolyEditExtrudeEdgeDistanceMode_const_&),bool,enum_EPolyEditExtrudeEdgeDistanceMode_const_&,enum_EPolyEditExtrudeEdgeDistanceMode_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EPolyEditExtrudeModeOptions><enum_EPolyEditExtrudeModeOptions,void> @ 14cd44d60

TPropertyWatcher<EPolyEditExtrudeModeOptions> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::
TPropertyWatcher<enum_EPolyEditExtrudeModeOptions><enum_EPolyEditExtrudeModeOptions,void>
          (void *this,EPolyEditExtrudeModeOptions *param_1,
          TFunction<void___cdecl(EPolyEditExtrudeModeOptions_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EPolyEditExtrudeModeOptions___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_57_>__0_____0W4EPolyEditExtrudeModeOptions__X___TPropertyWatcher_W4EPolyEditExtrudeModeOptions___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeModeOptions__V__TFunction___A6AXAEBW4EPolyEditExtrudeModeOptions___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions><enum_EPolyEditExtrudeModeOptions,void>'::__l1::<lambda_57_>,enum_EPolyEditExtrudeModeOptions>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditExtrudeModeOptions__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::
       TPropertyWatcher<enum_EPolyEditExtrudeModeOptions><enum_EPolyEditExtrudeModeOptions,void>'::
       __l1::<lambda_58_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EPolyEditExtrudeModeOptions_const_&,enum_EPolyEditExtrudeModeOptions_const_&),bool,enum_EPolyEditExtrudeModeOptions_const_&,enum_EPolyEditExtrudeModeOptions_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EPolyEditOffsetModeOptions><enum_EPolyEditOffsetModeOptions,void> @ 14cd44e40

TPropertyWatcher<EPolyEditOffsetModeOptions> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::
TPropertyWatcher<enum_EPolyEditOffsetModeOptions><enum_EPolyEditOffsetModeOptions,void>
          (void *this,EPolyEditOffsetModeOptions *param_1,
          TFunction<void___cdecl(EPolyEditOffsetModeOptions_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EPolyEditOffsetModeOptions___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_61_>__0_____0W4EPolyEditOffsetModeOptions__X___TPropertyWatcher_W4EPolyEditOffsetModeOptions___FWatchablePropertySet__QEAA_AEBW4EPolyEditOffsetModeOptions__V__TFunction___A6AXAEBW4EPolyEditOffsetModeOptions___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::TPropertyWatcher<enum_EPolyEditOffsetModeOptions><enum_EPolyEditOffsetModeOptions,void>'::__l1::<lambda_61_>,enum_EPolyEditOffsetModeOptions>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditOffsetModeOptions__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::
       TPropertyWatcher<enum_EPolyEditOffsetModeOptions><enum_EPolyEditOffsetModeOptions,void>'::
       __l1::<lambda_62_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EPolyEditOffsetModeOptions_const_&,enum_EPolyEditOffsetModeOptions_const_&),bool,enum_EPolyEditOffsetModeOptions_const_&,enum_EPolyEditOffsetModeOptions_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EPolyEditPushPullModeOptions><enum_EPolyEditPushPullModeOptions,void> @ 14cd44f20

TPropertyWatcher<EPolyEditPushPullModeOptions> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::
TPropertyWatcher<enum_EPolyEditPushPullModeOptions><enum_EPolyEditPushPullModeOptions,void>
          (void *this,EPolyEditPushPullModeOptions *param_1,
          TFunction<void___cdecl(EPolyEditPushPullModeOptions_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EPolyEditPushPullModeOptions___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_63_>__0_____0W4EPolyEditPushPullModeOptions__X___TPropertyWatcher_W4EPolyEditPushPullModeOptions___FWatchablePropertySet__QEAA_AEBW4EPolyEditPushPullModeOptions__V__TFunction___A6AXAEBW4EPolyEditPushPullModeOptions___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::TPropertyWatcher<enum_EPolyEditPushPullModeOptions><enum_EPolyEditPushPullModeOptions,void>'::__l1::<lambda_63_>,enum_EPolyEditPushPullModeOptions>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditPushPullModeOptions__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::
       TPropertyWatcher<enum_EPolyEditPushPullModeOptions><enum_EPolyEditPushPullModeOptions,void>'
       ::__l1::<lambda_64_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EPolyEditPushPullModeOptions_const_&,enum_EPolyEditPushPullModeOptions_const_&),bool,enum_EPolyEditPushPullModeOptions_const_&,enum_EPolyEditPushPullModeOptions_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_ESmoothMeshToolSmoothType><enum_ESmoothMeshToolSmoothType,void> @ 14cd45000

TPropertyWatcher<ESmoothMeshToolSmoothType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::
TPropertyWatcher<enum_ESmoothMeshToolSmoothType><enum_ESmoothMeshToolSmoothType,void>
          (void *this,ESmoothMeshToolSmoothType *param_1,
          TFunction<void___cdecl(ESmoothMeshToolSmoothType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4ESmoothMeshToolSmoothType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_45_>__0_____0W4ESmoothMeshToolSmoothType__X___TPropertyWatcher_W4ESmoothMeshToolSmoothType___FWatchablePropertySet__QEAA_AEBW4ESmoothMeshToolSmoothType__V__TFunction___A6AXAEBW4ESmoothMeshToolSmoothType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::TPropertyWatcher<enum_ESmoothMeshToolSmoothType><enum_ESmoothMeshToolSmoothType,void>'::__l1::<lambda_45_>,enum_ESmoothMeshToolSmoothType>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4ESmoothMeshToolSmoothType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::
       TPropertyWatcher<enum_ESmoothMeshToolSmoothType><enum_ESmoothMeshToolSmoothType,void>'::__l1
       ::<lambda_46_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_ESmoothMeshToolSmoothType_const_&,enum_ESmoothMeshToolSmoothType_const_&),bool,enum_ESmoothMeshToolSmoothType_const_&,enum_ESmoothMeshToolSmoothType_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EUVProjectionToolInitializationMode><enum_EUVProjectionToolInitializationMode,void> @ 14cd450e0

TPropertyWatcher<EUVProjectionToolInitializationMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::
TPropertyWatcher<enum_EUVProjectionToolInitializationMode><enum_EUVProjectionToolInitializationMode,void>
          (void *this,EUVProjectionToolInitializationMode *param_1,
          TFunction<void___cdecl(EUVProjectionToolInitializationMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EUVProjectionToolInitializationMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_73_>__0_____0W4EUVProjectionToolInitializationMode__X___TPropertyWatcher_W4EUVProjectionToolInitializationMode___FWatchablePropertySet__QEAA_AEBW4EUVProjectionToolInitializationMode__V__TFunction___A6AXAEBW4EUVProjectionToolInitializationMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::TPropertyWatcher<enum_EUVProjectionToolInitializationMode><enum_EUVProjectionToolInitializationMode,void>'::__l1::<lambda_73_>,enum_EUVProjectionToolInitializationMode>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EUVProjectionToolInitializationMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::
       TPropertyWatcher<enum_EUVProjectionToolInitializationMode><enum_EUVProjectionToolInitializationMode,void>'
       ::__l1::<lambda_74_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EUVProjectionToolInitializationMode_const_&,enum_EUVProjectionToolInitializationMode_const_&),bool,enum_EUVProjectionToolInitializationMode_const_&,enum_EUVProjectionToolInitializationMode_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode><enum_EWeldMeshEdgesAttributeUIMode,void> @ 14cd451c0

TPropertyWatcher<EWeldMeshEdgesAttributeUIMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::
TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode><enum_EWeldMeshEdgesAttributeUIMode,void>
          (void *this,EWeldMeshEdgesAttributeUIMode *param_1,
          TFunction<void___cdecl(EWeldMeshEdgesAttributeUIMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 9) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EWeldMeshEdgesAttributeUIMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_75_>__0_____0W4EWeldMeshEdgesAttributeUIMode__X___TPropertyWatcher_W4EWeldMeshEdgesAttributeUIMode___FWatchablePropertySet__QEAA_AEBW4EWeldMeshEdgesAttributeUIMode__V__TFunction___A6AXAEBW4EWeldMeshEdgesAttributeUIMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode><enum_EWeldMeshEdgesAttributeUIMode,void>'::__l1::<lambda_75_>,enum_EWeldMeshEdgesAttributeUIMode>
         ::Call;
  }
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)((longlong)this + 0x54) = uVar1;
  *(undefined4 *)((longlong)this + 0x58) = uVar2;
  *(undefined4 *)((longlong)this + 0x5c) = uVar3;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x80) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EWeldMeshEdgesAttributeUIMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::
       TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode><enum_EWeldMeshEdgesAttributeUIMode,void>'
       ::__l1::<lambda_76_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EWeldMeshEdgesAttributeUIMode_const_&,enum_EWeldMeshEdgesAttributeUIMode_const_&),bool,enum_EWeldMeshEdgesAttributeUIMode_const_&,enum_EWeldMeshEdgesAttributeUIMode_const_&>
         ::Call;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// CheckAndUpdate @ 14cd63cd0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::CheckAndUpdate
          (TPropertyWatcher<UE::Math::TVector<double>_> *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TOptional<UE::Math::TVector<double>_> *pTVar7;
  double local_28;
  double dStack_20;
  double local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar6 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(&local_28,uVar5);
  if ((this->Cached).bIsSet != false) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->NotEqual);
    pcVar2 = *(code **)&this->NotEqual;
    plVar1 = *(longlong **)&(this->NotEqual).field_0x28;
    plVar6 = (longlong *)&(this->NotEqual).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5,&this->Cached,&local_28);
    if (cVar3 == '\0') {
      return;
    }
  }
  pTVar7 = &this->Cached;
  if ((TOptional<UE::Math::TVector<double>_> *)&local_28 != pTVar7) {
    (pTVar7->TypedValue).field0_0x0._s_0.X = local_28;
    (this->Cached).TypedValue.field0_0x0._s_0.Y = dStack_20;
    (this->Cached).TypedValue.field0_0x0._s_0.Z = local_18;
    (this->Cached).bIsSet = true;
  }
  if (((this->Cached).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChanged);
  pcVar2 = *(code **)&this->OnChanged;
  plVar1 = *(longlong **)&(this->OnChanged).field_0x28;
  plVar6 = (longlong *)&(this->OnChanged).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(uVar5,pTVar7);
  return;
}

// CheckAndUpdate @ 14cd63df0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cd63f00

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cd64010

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cd64120

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cd64230

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cd64340

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cd64450

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cd64560

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::CheckAndUpdate(void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cd64670

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 0xc) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined4 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  if ((*(char *)((longlong)this + 0xc) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// CheckAndUpdate @ 14cd64780

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::CheckAndUpdate
          (void *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar5 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x38);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_18[0] = (*pcVar1)(uVar4);
  if (*(char *)((longlong)this + 9) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x70));
    pcVar1 = *(code **)((longlong)this + 0x70);
    plVar5 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,(longlong)this + 8,local_18);
    if (cVar2 == '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)((longlong)this + 8);
  if (local_18 != puVar6) {
    *puVar6 = local_18[0];
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  if ((*(char *)((longlong)this + 9) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
  pcVar1 = *(code **)((longlong)this + 0x40);
  plVar5 = (longlong *)((longlong)this + 0x50);
  if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,puVar6);
  return;
}

// SilentUpdate @ 14cd7fb20

void __thiscall
FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::SilentUpdate
          (TPropertyWatcher<UE::Math::TVector<double>_> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double local_28;
  double dStack_20;
  double local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar4 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(&local_28,uVar3);
  if ((TOptional<UE::Math::TVector<double>_> *)&local_28 != &this->Cached) {
    (this->Cached).TypedValue.field0_0x0._s_0.X = local_28;
    (this->Cached).TypedValue.field0_0x0._s_0.Y = dStack_20;
    (this->Cached).TypedValue.field0_0x0._s_0.Z = local_18;
    (this->Cached).bIsSet = true;
  }
  return;
}

// SilentUpdate @ 14cd7fb90

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cd7fbf0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cd7fc50

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::SilentUpdate
          (void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cd7fcb0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::SilentUpdate
          (void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cd7fd10

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cd7fd70

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cd7fdd0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cd7fe30

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::SilentUpdate(void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

// SilentUpdate @ 14cd7fe90

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::SilentUpdate
          (void *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined4 *)((longlong)this + 8)) {
    *(undefined4 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 0xc) = 1;
  }
  return;
}

// SilentUpdate @ 14cd7fef0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::SilentUpdate
          (void *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar4 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x38);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  if (local_18 != (undefined1 *)((longlong)this + 8)) {
    *(undefined1 *)((longlong)this + 8) = uVar2;
    *(undefined1 *)((longlong)this + 9) = 1;
  }
  return;
}

