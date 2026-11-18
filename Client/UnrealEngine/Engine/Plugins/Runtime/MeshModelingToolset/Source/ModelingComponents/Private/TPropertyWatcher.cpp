// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 36

// <lambda_invoker_cdecl> @ 14ca42420

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::
<lambda_39_>::<lambda_invoker_cdecl>(FString *param_1,FString *param_2)

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

// <lambda_invoker_cdecl> @ 14ca42470

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::
TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>'
::__l1::<lambda_41_>::<lambda_invoker_cdecl>
          (EBaseCreateFromSelectedTargetType *param_1,EBaseCreateFromSelectedTargetType *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14ca42480

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>'::__l1::
<lambda_43_>::<lambda_invoker_cdecl>(FName *param_1,FName *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14ca42490

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::
<lambda_45_>::<lambda_invoker_cdecl>(bool *param_1,bool *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14ca424a0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::
<lambda_47_>::<lambda_invoker_cdecl>(float *param_1,float *param_2)

{
  if (*param_2 != *param_1) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14ca424c0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FColor>::TPropertyWatcher<FColor><FColor,void>'::__l1::
<lambda_49_>::<lambda_invoker_cdecl>(FColor *param_1,FColor *param_2)

{
  return (param_1->field0_0x0).Bits != (param_2->field0_0x0).Bits;
}

// TPropertyWatcher<float><float,void> @ 14ca42540

TPropertyWatcher<float> * __thiscall
FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>
          (TPropertyWatcher<float> *this,float *param_1,
          TFunction<void___cdecl(float_const_&)> *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).bIsSet = false;
  this->_padding_ = (longlong)&___7__TPropertyWatcher_M_FWatchablePropertySet__6B_;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_46_>__0_____0MX___TPropertyWatcher_M_FWatchablePropertySet__QEAA_AEBMV__TFunction___A6AXAEBM_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(float **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::<lambda_46_>,float>
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
       &___7__TFunction_OwnedObject_P6A_NAEBM0_Z_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::
       <lambda_47_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(float_const_&,float_const_&),bool,float_const_&,float_const_&>
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

// TPropertyWatcher<FColor><FColor,void> @ 14ca42620

TPropertyWatcher<FColor> * __thiscall
FWatchablePropertySet::TPropertyWatcher<FColor>::TPropertyWatcher<FColor><FColor,void>
          (TPropertyWatcher<FColor> *this,FColor *param_1,
          TFunction<void___cdecl(FColor_const_&)> *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).bIsSet = false;
  this->_padding_ = (longlong)&___7__TPropertyWatcher_UFColor___FWatchablePropertySet__6B_;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_48_>__0_____0UFColor__X___TPropertyWatcher_UFColor___FWatchablePropertySet__QEAA_AEBUFColor__V__TFunction___A6AXAEBUFColor___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(FColor **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<FColor>::TPropertyWatcher<FColor><FColor,void>'::__l1::<lambda_48_>,FColor>
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
       &___7__TFunction_OwnedObject_P6A_NAEBUFColor__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<FColor>::TPropertyWatcher<FColor><FColor,void>'::
       __l1::<lambda_49_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(FColor_const_&,FColor_const_&),bool,FColor_const_&,FColor_const_&>
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

// TPropertyWatcher<FName><FName,void> @ 14ca42700

TPropertyWatcher<FName> * __thiscall
FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>
          (TPropertyWatcher<FName> *this,FName *param_1,
          TFunction<void___cdecl(FName_const_&)> *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->Cached).field0_0x0.TypedValue.Number = 0;
  this->_padding_ = (longlong)&___7__TPropertyWatcher_VFName___FWatchablePropertySet__6B_;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_42_>__0_____0VFName__X___TPropertyWatcher_VFName___FWatchablePropertySet__QEAA_AEBVFName__V__TFunction___A6AXAEBVFName___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(FName **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>'::__l1::<lambda_42_>,FName>
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
       &___7__TFunction_OwnedObject_P6A_NAEBVFName__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>'::__l1::
       <lambda_43_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(FName_const_&,FName_const_&),bool,FName_const_&,FName_const_&>
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

// TPropertyWatcher<FString><FString,void> @ 14ca427e0

TPropertyWatcher<FString> * __thiscall
FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>
          (TPropertyWatcher<FString> *this,FString *param_1,
          TFunction<void___cdecl(FString_const_&)> *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  *(undefined4 *)((longlong)&(this->Cached).field0_0x0 + 0xc) = 0xffffffff;
  (this->Cached).field0_0x0.TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__TPropertyWatcher_VFString___FWatchablePropertySet__6B_;
  *(undefined4 *)((longlong)&(this->Cached).field0_0x0 + 8) = 0;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_38_>__0_____0VFString__X___TPropertyWatcher_VFString___FWatchablePropertySet__QEAA_AEBVFString__V__TFunction___A6AXAEBVFString___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(FString **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::<lambda_38_>,FString>
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
       &___7__TFunction_OwnedObject_P6A_NAEBVFString__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::
       __l1::<lambda_39_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(FString_const_&,FString_const_&),bool,FString_const_&,FString_const_&>
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

// TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void> @ 14ca428d0

TPropertyWatcher<EBaseCreateFromSelectedTargetType> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::
TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>
          (void *this,EBaseCreateFromSelectedTargetType *param_1,
          TFunction<void___cdecl(EBaseCreateFromSelectedTargetType_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4EBaseCreateFromSelectedTargetType___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_40_>__0_____0W4EBaseCreateFromSelectedTargetType__X___TPropertyWatcher_W4EBaseCreateFromSelectedTargetType___FWatchablePropertySet__QEAA_AEBW4EBaseCreateFromSelectedTargetType__V__TFunction___A6AXAEBW4EBaseCreateFromSelectedTargetType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>'::__l1::<lambda_40_>,enum_EBaseCreateFromSelectedTargetType>
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
       ___7__TFunction_OwnedObject_P6A_NAEBW4EBaseCreateFromSelectedTargetType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::
       TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>'
       ::__l1::<lambda_41_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_EBaseCreateFromSelectedTargetType_const_&,enum_EBaseCreateFromSelectedTargetType_const_&),bool,enum_EBaseCreateFromSelectedTargetType_const_&,enum_EBaseCreateFromSelectedTargetType_const_&>
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

// TPropertyWatcher<bool><bool,void> @ 14ca429b0

TPropertyWatcher<bool> * __thiscall
FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>
          (TPropertyWatcher<bool> *this,bool *param_1,TFunction<void___cdecl(bool_const_&)> *param_2
          )

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  (this->Cached).bIsSet = false;
  this->_padding_ = (longlong)&___7__TPropertyWatcher__N_FWatchablePropertySet__6B_;
  *(undefined8 *)&this->GetValue = 0;
  *(undefined8 *)&(this->GetValue).field_0x28 = 0;
  *(undefined ***)&(this->GetValue).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_44_>__0_____0_NX___TPropertyWatcher__N_FWatchablePropertySet__QEAA_AEB_NV__TFunction___A6AXAEB_N_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetValue).field_0x18;
  *(bool **)puVar1 = param_1;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetValue =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_44_>,bool>
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
       &___7__TFunction_OwnedObject_P6A_NAEB_N0_Z_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->NotEqual).field_0x18;
  *(code **)puVar1 =
       `FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::
       <lambda_45_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NotEqual =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(bool_const_&,bool_const_&),bool,bool_const_&,bool_const_&>
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

// CheckAndUpdate @ 14ca7ddb0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<float>::CheckAndUpdate(TPropertyWatcher<float> *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TOptional<float> *pTVar7;
  float local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar6 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_18[0] = (float)(*pcVar2)(uVar5);
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
  if ((TOptional<float> *)local_18 != pTVar7) {
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

// CheckAndUpdate @ 14ca7dec0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<FColor>::CheckAndUpdate(TPropertyWatcher<FColor> *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TOptional<FColor> *pTVar7;
  FColor_u_0 local_18 [4];
  
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
  if (local_18 != (FColor_u_0 *)pTVar7) {
    (pTVar7->TypedValue).field0_0x0 = local_18[0];
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

// CheckAndUpdate @ 14ca7dfd0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<FName>::CheckAndUpdate(TPropertyWatcher<FName> *this)

{
  TOptional<FName> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TOptional<FName>_u_0 local_18 [2];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar2 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar3 = *(code **)&this->GetValue;
  plVar7 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar7 = plVar2;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(local_18,uVar6);
  pTVar1 = &this->Cached;
  if ((this->Cached).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->NotEqual);
    pcVar3 = *(code **)&this->NotEqual;
    plVar2 = *(longlong **)&(this->NotEqual).field_0x28;
    plVar7 = (longlong *)&(this->NotEqual).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar4 = (*pcVar3)(uVar6,pTVar1,local_18);
    if (cVar4 == '\0') {
      return;
    }
  }
  if (((local_18 != &pTVar1->field0_0x0) &&
      ((pTVar1->field0_0x0).TypedValue = (FName)local_18[0],
      local_18[0].TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((pTVar1->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChanged);
  plVar2 = *(longlong **)&(this->OnChanged).field_0x28;
  pcVar3 = *(code **)&this->OnChanged;
  plVar7 = (longlong *)&(this->OnChanged).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar7 = plVar2;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(uVar6,pTVar1);
  return;
}

// CheckAndUpdate @ 14ca7e100

void __thiscall
FWatchablePropertySet::TPropertyWatcher<FString>::CheckAndUpdate(TPropertyWatcher<FString> *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  void *_Src;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  TOptional<FString> *pTVar9;
  void *local_28;
  int local_20;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar2 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar3 = *(code **)&this->GetValue;
  plVar8 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar8 = plVar2;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar3)(&local_28,uVar7);
  if (*(int *)((longlong)&(this->Cached).field0_0x0 + 0xc) != -1) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->NotEqual);
    pcVar3 = *(code **)&this->NotEqual;
    plVar2 = *(longlong **)&(this->NotEqual).field_0x28;
    plVar8 = (longlong *)&(this->NotEqual).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar8 = plVar2;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    cVar5 = (*pcVar3)(uVar7,&this->Cached,&local_28);
    if (cVar5 == '\0') goto LAB_14ca7e2aa;
  }
  pTVar9 = &this->Cached;
  if ((TOptional<FString> *)&local_28 != pTVar9) {
    pFVar4 = (pTVar9->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    _Src = local_28;
    piVar1 = (int *)((longlong)&(this->Cached).field0_0x0 + 0xc);
    (pTVar9->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&(this->Cached).field0_0x0 + 8) = local_20;
    if (local_20 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_20,0,(ForAnyElementType *)pTVar9,local_20,piVar1);
      memcpy((pTVar9->field0_0x0).TypedValue.Data.AllocatorInstance.Data,_Src,(longlong)local_20 * 2
            );
    }
    if ((*piVar1 == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((*(int *)((longlong)&(this->Cached).field0_0x0 + 0xc) == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChanged);
  plVar2 = *(longlong **)&(this->OnChanged).field_0x28;
  pcVar3 = *(code **)&this->OnChanged;
  plVar8 = (longlong *)&(this->OnChanged).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar8 = plVar2;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar3)(uVar7,&this->Cached);
LAB_14ca7e2aa:
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// CheckAndUpdate @ 14ca7e2e0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::CheckAndUpdate
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

// CheckAndUpdate @ 14ca7e3f0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<bool>::CheckAndUpdate(TPropertyWatcher<bool> *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TOptional<bool> *pTVar7;
  bool local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar6 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_18[0] = (bool)(*pcVar2)(uVar5);
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
  if ((TOptional<bool> *)local_18 != pTVar7) {
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

// SilentUpdate @ 14caa67a0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<float>::SilentUpdate(TPropertyWatcher<float> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar4 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  fVar5 = (float)(*pcVar2)(uVar3);
  if ((TOptional<float> *)local_18 != &this->Cached) {
    (this->Cached).TypedValue = fVar5;
    (this->Cached).bIsSet = true;
  }
  return;
}

// SilentUpdate @ 14caa6800

void __thiscall
FWatchablePropertySet::TPropertyWatcher<FColor>::SilentUpdate(TPropertyWatcher<FColor> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FColor_u_0 local_18 [4];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar4 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  if (local_18 != (FColor_u_0 *)&this->Cached) {
    (this->Cached).TypedValue.field0_0x0 = local_18[0];
    (this->Cached).bIsSet = true;
  }
  return;
}

// SilentUpdate @ 14caa6870

void __thiscall
FWatchablePropertySet::TPropertyWatcher<FName>::SilentUpdate(TPropertyWatcher<FName> *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TOptional<FName>_u_0 local_18 [2];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar5 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(local_18,uVar4);
  if ((local_18 != &(this->Cached).field0_0x0) &&
     ((this->Cached).field0_0x0.TypedValue = (FName)local_18[0],
     local_18[0].TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x171,
                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SilentUpdate @ 14caa6900

void __thiscall
FWatchablePropertySet::TPropertyWatcher<FString>::SilentUpdate(TPropertyWatcher<FString> *this)

{
  longlong *plVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TOptional<FString> *pTVar8;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar7 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar7 = plVar1;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(&local_18,uVar6);
  pTVar8 = &this->Cached;
  if ((TOptional<FString> *)&local_18 != pTVar8) {
    pFVar3 = (pTVar8->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar8->field0_0x0).TypedValue.Data.AllocatorInstance.Data = local_18.Data;
    *(undefined4 *)((longlong)&(this->Cached).field0_0x0 + 8) = (undefined4)local_10;
    iVar4 = local_10._4_4_;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&(this->Cached).field0_0x0 + 0xc) = local_10._4_4_;
    local_10 = 0;
    if ((iVar4 == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// SilentUpdate @ 14caa69d0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::SilentUpdate
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

// SilentUpdate @ 14caa6a30

void __thiscall
FWatchablePropertySet::TPropertyWatcher<bool>::SilentUpdate(TPropertyWatcher<bool> *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValue);
  plVar1 = *(longlong **)&(this->GetValue).field_0x28;
  pcVar2 = *(code **)&this->GetValue;
  plVar5 = (longlong *)&(this->GetValue).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  bVar3 = (bool)(*pcVar2)(uVar4);
  if ((TOptional<bool> *)local_18 != &this->Cached) {
    (this->Cached).TypedValue = bVar3;
    (this->Cached).bIsSet = true;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14cab0c80

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::
<lambda_60_>::<lambda_invoker_cdecl>(bool *param_1,bool *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cab0c90

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode>::
TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode><enum_ESpaceCurveControlPointTransformMode,void>'
::__l1::<lambda_62_>::<lambda_invoker_cdecl>
          (ESpaceCurveControlPointTransformMode *param_1,
          ESpaceCurveControlPointTransformMode *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cab0ca0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode>::
TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode><enum_ESpaceCurveControlPointOriginMode,void>'
::__l1::<lambda_64_>::<lambda_invoker_cdecl>
          (ESpaceCurveControlPointOriginMode *param_1,ESpaceCurveControlPointOriginMode *param_2)

{
  return *param_1 != *param_2;
}

// <lambda_invoker_cdecl> @ 14cab0cb0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::
<lambda_66_>::<lambda_invoker_cdecl>(float *param_1,float *param_2)

{
  if (*param_2 != *param_1) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14cab0cd0

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<FColor>::TPropertyWatcher<FColor><FColor,void>'::__l1::
<lambda_68_>::<lambda_invoker_cdecl>(FColor *param_1,FColor *param_2)

{
  return (param_1->field0_0x0).Bits != (param_2->field0_0x0).Bits;
}

// TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode><enum_ESpaceCurveControlPointOriginMode,void> @ 14cab0ff0

TPropertyWatcher<ESpaceCurveControlPointOriginMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode>::
TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode><enum_ESpaceCurveControlPointOriginMode,void>
          (void *this,ESpaceCurveControlPointOriginMode *param_1,
          TFunction<void___cdecl(ESpaceCurveControlPointOriginMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4ESpaceCurveControlPointOriginMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_63_>__0_____0W4ESpaceCurveControlPointOriginMode__X___TPropertyWatcher_W4ESpaceCurveControlPointOriginMode___FWatchablePropertySet__QEAA_AEBW4ESpaceCurveControlPointOriginMode__V__TFunction___A6AXAEBW4ESpaceCurveControlPointOriginMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode>::TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode><enum_ESpaceCurveControlPointOriginMode,void>'::__l1::<lambda_63_>,enum_ESpaceCurveControlPointOriginMode>
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
       ___7__TFunction_OwnedObject_P6A_NAEBW4ESpaceCurveControlPointOriginMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode>::
       TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode><enum_ESpaceCurveControlPointOriginMode,void>'
       ::__l1::<lambda_64_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_ESpaceCurveControlPointOriginMode_const_&,enum_ESpaceCurveControlPointOriginMode_const_&),bool,enum_ESpaceCurveControlPointOriginMode_const_&,enum_ESpaceCurveControlPointOriginMode_const_&>
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

// TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode><enum_ESpaceCurveControlPointTransformMode,void> @ 14cab10d0

TPropertyWatcher<ESpaceCurveControlPointTransformMode> * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode>::
TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode><enum_ESpaceCurveControlPointTransformMode,void>
          (void *this,ESpaceCurveControlPointTransformMode *param_1,
          TFunction<void___cdecl(ESpaceCurveControlPointTransformMode_const_&)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)((longlong)this + 0xc) = 0;
  *(undefined ***)this =
       &___7__TPropertyWatcher_W4ESpaceCurveControlPointTransformMode___FWatchablePropertySet__6B_;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)((longlong)this + 0x20) =
       &
       ___7__TFunction_OwnedObject_V<lambda_61_>__0_____0W4ESpaceCurveControlPointTransformMode__X___TPropertyWatcher_W4ESpaceCurveControlPointTransformMode___FWatchablePropertySet__QEAA_AEBW4ESpaceCurveControlPointTransformMode__V__TFunction___A6AXAEBW4ESpaceCurveControlPointTransformMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x28) = param_1;
  if ((undefined8 *)((longlong)this + 0x28) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode>::TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode><enum_ESpaceCurveControlPointTransformMode,void>'::__l1::<lambda_61_>,enum_ESpaceCurveControlPointTransformMode>
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
       ___7__TFunction_OwnedObject_P6A_NAEBW4ESpaceCurveControlPointTransformMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x88) =
       `FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode>::
       TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode><enum_ESpaceCurveControlPointTransformMode,void>'
       ::__l1::<lambda_62_>::<lambda_invoker_cdecl>;
  if ((undefined8 *)((longlong)this + 0x88) != (undefined8 *)0x0) {
    *(code **)((longlong)this + 0x70) =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(enum_ESpaceCurveControlPointTransformMode_const_&,enum_ESpaceCurveControlPointTransformMode_const_&),bool,enum_ESpaceCurveControlPointTransformMode_const_&,enum_ESpaceCurveControlPointTransformMode_const_&>
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

// CheckAndUpdate @ 14caf3860

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode>::CheckAndUpdate
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

// CheckAndUpdate @ 14caf3970

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode>::CheckAndUpdate
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

// SilentUpdate @ 14cb3c1c0

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode>::SilentUpdate
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

// SilentUpdate @ 14cb3c220

void __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode>::SilentUpdate
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

// <lambda_invoker_cdecl> @ 14cb59640

bool __cdecl
`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::
<lambda_55_>::<lambda_invoker_cdecl>(bool *param_1,bool *param_2)

{
  return *param_1 != *param_2;
}

