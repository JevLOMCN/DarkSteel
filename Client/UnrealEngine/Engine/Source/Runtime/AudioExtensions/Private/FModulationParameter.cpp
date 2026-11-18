// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 12

// <lambda_invoker_cdecl> @ 14452c2d0

void __cdecl
`Audio::FModulationParameter::GetDefaultMixFunction'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (float *param_1,float param_2)

{
  *param_1 = param_2 * *param_1;
  return;
}

// <lambda_invoker_cdecl> @ 14452c2e0

void __cdecl
`Audio::FModulationParameter::GetDefaultNormalizedConversionFunction'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(float *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14452c2f0

void __cdecl
`Audio::FModulationParameter::GetDefaultUnitConversionFunction'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(float *param_1)

{
  return;
}

// FModulationParameter @ 14452f3a0

FModulationParameter * __thiscall
Audio::FModulationParameter::FModulationParameter
          (FModulationParameter *this,FModulationParameter *param_1)

{
  undefined8 uVar1;
  
  this->ParameterName = param_1->ParameterName;
  this->DefaultValue = param_1->DefaultValue;
  this->MinValue = param_1->MinValue;
  this->MaxValue = param_1->MaxValue;
  this->bRequiresConversion = param_1->bRequiresConversion;
  this->TypeHash = 0xffffffff;
  *(undefined8 *)&this->MixFunction = *(undefined8 *)&param_1->MixFunction;
  *(undefined8 *)&(this->MixFunction).field_0x28 = *(undefined8 *)&(param_1->MixFunction).field_0x28
  ;
  *(undefined8 *)&(param_1->MixFunction).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_1->MixFunction).field_0x18;
  *(undefined8 *)&(this->MixFunction).field_0x10 = *(undefined8 *)&(param_1->MixFunction).field_0x10
  ;
  *(undefined8 *)&(this->MixFunction).field_0x18 = uVar1;
  *(undefined8 *)&(this->MixFunction).field_0x20 = *(undefined8 *)&(param_1->MixFunction).field_0x20
  ;
  if (*(longlong *)&this->MixFunction != 0) {
    *(undefined8 *)&param_1->MixFunction = 0;
  }
  *(undefined8 *)&this->UnitFunction = *(undefined8 *)&param_1->UnitFunction;
  *(undefined8 *)&(this->UnitFunction).field_0x28 =
       *(undefined8 *)&(param_1->UnitFunction).field_0x28;
  *(undefined8 *)&(param_1->UnitFunction).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_1->UnitFunction).field_0x18;
  *(undefined8 *)&(this->UnitFunction).field_0x10 =
       *(undefined8 *)&(param_1->UnitFunction).field_0x10;
  *(undefined8 *)&(this->UnitFunction).field_0x18 = uVar1;
  *(undefined8 *)&(this->UnitFunction).field_0x20 =
       *(undefined8 *)&(param_1->UnitFunction).field_0x20;
  if (*(longlong *)&this->UnitFunction != 0) {
    *(undefined8 *)&param_1->UnitFunction = 0;
  }
  *(undefined8 *)&this->NormalizedFunction = *(undefined8 *)&param_1->NormalizedFunction;
  *(undefined8 *)&(this->NormalizedFunction).field_0x28 =
       *(undefined8 *)&(param_1->NormalizedFunction).field_0x28;
  *(undefined8 *)&(param_1->NormalizedFunction).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_1->NormalizedFunction).field_0x18;
  *(undefined8 *)&(this->NormalizedFunction).field_0x10 =
       *(undefined8 *)&(param_1->NormalizedFunction).field_0x10;
  *(undefined8 *)&(this->NormalizedFunction).field_0x18 = uVar1;
  *(undefined8 *)&(this->NormalizedFunction).field_0x20 =
       *(undefined8 *)&(param_1->NormalizedFunction).field_0x20;
  if (*(longlong *)&this->NormalizedFunction != 0) {
    *(undefined8 *)&param_1->NormalizedFunction = 0;
  }
  return this;
}

// FModulationParameter @ 14452f490

FModulationParameter * __thiscall
Audio::FModulationParameter::FModulationParameter
          (FModulationParameter *this,FModulationParameter *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  this->ParameterName = param_1->ParameterName;
  this->DefaultValue = param_1->DefaultValue;
  this->MinValue = param_1->MinValue;
  this->MaxValue = param_1->MaxValue;
  this->bRequiresConversion = param_1->bRequiresConversion;
  this->TypeHash = 0xffffffff;
  lVar1 = *(longlong *)&param_1->MixFunction;
  *(undefined8 *)&(this->MixFunction).field_0x28 = 0;
  *(longlong *)&this->MixFunction = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->MixFunction).field_0x28;
    puVar3 = (undefined8 *)&(param_1->MixFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  lVar1 = *(longlong *)&param_1->UnitFunction;
  *(longlong *)&this->UnitFunction = lVar1;
  *(undefined8 *)&(this->UnitFunction).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->UnitFunction).field_0x28;
    puVar3 = (undefined8 *)&(param_1->UnitFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  lVar1 = *(longlong *)&param_1->NormalizedFunction;
  *(longlong *)&this->NormalizedFunction = lVar1;
  *(undefined8 *)&(this->NormalizedFunction).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->NormalizedFunction).field_0x28;
    puVar3 = (undefined8 *)&(param_1->NormalizedFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  return this;
}

// FModulationParameter @ 14452f570

FModulationParameter * __thiscall
Audio::FModulationParameter::FModulationParameter(FModulationParameter *this)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  pvVar3 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  this->DefaultValue = 1.0;
  this->MinValue = 0.0;
  this->MaxValue = 1.0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar5 * 8);
  this->bRequiresConversion = false;
  this->TypeHash = 0xffffffff;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      DefaultMixFunction._40_8_ = 0;
      DefaultMixFunction._16_8_ =
           &___7__TFunction_OwnedObject_P6AXAEAMM_Z_0A__0A__Function_Private_Core_UE__6B_;
      DefaultMixFunction._24_8_ =
           `Audio::FModulationParameter::GetDefaultMixFunction'::__l2::<lambda_1>::
           <lambda_invoker_cdecl>;
      DefaultMixFunction._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<void_(__cdecl*)(float_&,float),void,float_&,float>::Call;
      atexit(`Audio::FModulationParameter::GetDefaultMixFunction'::__l2::
             _dynamic_atexit_destructor_for__DefaultMixFunction__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar2 = DefaultMixFunction._0_8_;
  *(undefined8 *)&this->MixFunction = DefaultMixFunction._0_8_;
  *(undefined8 *)&(this->MixFunction).field_0x28 = 0;
  if (uVar2 != 0) {
    puVar4 = (undefined8 *)&DefaultMixFunction.field_0x10;
    if (DefaultMixFunction._40_8_ != 0) {
      puVar4 = (undefined8 *)DefaultMixFunction._40_8_;
    }
    (**(code **)*puVar4)();
  }
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConversionFunction._40_8_ = 0;
      ConversionFunction._24_8_ =
           `Audio::FModulationParameter::GetDefaultUnitConversionFunction'::__l2::<lambda_1>::
           <lambda_invoker_cdecl>;
      ConversionFunction._16_8_ =
           &___7__TFunction_OwnedObject_P6AXAEAM_Z_0A__0A__Function_Private_Core_UE__6B_;
      ConversionFunction._0_8_ =
           UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(float_&),void,float_&>::
           Call;
      atexit(`Audio::FModulationParameter::GetDefaultUnitConversionFunction'::__l2::
             _dynamic_atexit_destructor_for__ConversionFunction__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar2 = ConversionFunction._0_8_;
  *(undefined8 *)&this->UnitFunction = ConversionFunction._0_8_;
  *(undefined8 *)&(this->UnitFunction).field_0x28 = 0;
  if (uVar2 != 0) {
    puVar4 = (undefined8 *)&ConversionFunction.field_0x10;
    if (ConversionFunction._40_8_ != 0) {
      puVar4 = (undefined8 *)ConversionFunction._40_8_;
    }
    (**(code **)*puVar4)();
  }
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConversionFunction._40_8_ = 0;
      ConversionFunction._24_8_ =
           `Audio::FModulationParameter::GetDefaultNormalizedConversionFunction'::__l2::<lambda_1>::
           <lambda_invoker_cdecl>;
      ConversionFunction._16_8_ =
           &___7__TFunction_OwnedObject_P6AXAEAM_Z_0A__0A__Function_Private_Core_UE__6B_;
      ConversionFunction._0_8_ =
           UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(float_&),void,float_&>::
           Call;
      atexit(`Audio::FModulationParameter::GetDefaultNormalizedConversionFunction'::__l2::
             _dynamic_atexit_destructor_for__ConversionFunction__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar2 = ConversionFunction._0_8_;
  *(undefined8 *)&this->NormalizedFunction = ConversionFunction._0_8_;
  *(undefined8 *)&(this->NormalizedFunction).field_0x28 = 0;
  if (uVar2 != 0) {
    puVar4 = (undefined8 *)&ConversionFunction.field_0x10;
    if (ConversionFunction._40_8_ != 0) {
      puVar4 = (undefined8 *)ConversionFunction._40_8_;
    }
    (**(code **)*puVar4)();
  }
  return this;
}

// ~FModulationParameter @ 144530770

void __thiscall Audio::FModulationParameter::~FModulationParameter(FModulationParameter *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->NormalizedFunction != 0) {
    plVar1 = *(longlong **)&(this->NormalizedFunction).field_0x28;
    plVar2 = (longlong *)&(this->NormalizedFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UnitFunction != 0) {
    plVar1 = *(longlong **)&(this->UnitFunction).field_0x28;
    plVar2 = (longlong *)&(this->UnitFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->MixFunction != 0) {
    plVar1 = *(longlong **)&(this->MixFunction).field_0x28;
    plVar2 = (longlong *)&(this->MixFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001445307d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// operator= @ 144531050

FModulationParameter * __thiscall
Audio::FModulationParameter::operator=(FModulationParameter *this,FModulationParameter *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  this->ParameterName = param_1->ParameterName;
  this->DefaultValue = param_1->DefaultValue;
  this->MinValue = param_1->MinValue;
  this->MaxValue = param_1->MaxValue;
  this->bRequiresConversion = param_1->bRequiresConversion;
  uVar1 = *(undefined8 *)&(param_1->MixFunction).field_0x8;
  uVar2 = *(undefined8 *)&this->MixFunction;
  uVar3 = *(undefined8 *)&(this->MixFunction).field_0x8;
  uVar4 = *(undefined8 *)&(this->MixFunction).field_0x10;
  uVar5 = *(undefined8 *)&(this->MixFunction).field_0x18;
  uVar6 = *(undefined8 *)&(this->MixFunction).field_0x20;
  uVar7 = *(undefined8 *)&(this->MixFunction).field_0x28;
  *(undefined8 *)&this->MixFunction = *(undefined8 *)&param_1->MixFunction;
  *(undefined8 *)&(this->MixFunction).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->MixFunction).field_0x18;
  *(undefined8 *)&(this->MixFunction).field_0x10 = *(undefined8 *)&(param_1->MixFunction).field_0x10
  ;
  *(undefined8 *)&(this->MixFunction).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->MixFunction).field_0x28;
  *(undefined8 *)&(this->MixFunction).field_0x20 = *(undefined8 *)&(param_1->MixFunction).field_0x20
  ;
  *(undefined8 *)&(this->MixFunction).field_0x28 = uVar1;
  *(undefined8 *)&param_1->MixFunction = uVar2;
  *(undefined8 *)&(param_1->MixFunction).field_0x8 = uVar3;
  *(undefined8 *)&(param_1->MixFunction).field_0x10 = uVar4;
  *(undefined8 *)&(param_1->MixFunction).field_0x18 = uVar5;
  *(undefined8 *)&(param_1->MixFunction).field_0x20 = uVar6;
  *(undefined8 *)&(param_1->MixFunction).field_0x28 = uVar7;
  uVar1 = *(undefined8 *)&(param_1->UnitFunction).field_0x8;
  uVar2 = *(undefined8 *)&this->UnitFunction;
  uVar3 = *(undefined8 *)&(this->UnitFunction).field_0x8;
  uVar4 = *(undefined8 *)&(this->UnitFunction).field_0x10;
  uVar5 = *(undefined8 *)&(this->UnitFunction).field_0x18;
  uVar6 = *(undefined8 *)&(this->UnitFunction).field_0x20;
  uVar7 = *(undefined8 *)&(this->UnitFunction).field_0x28;
  *(undefined8 *)&this->UnitFunction = *(undefined8 *)&param_1->UnitFunction;
  *(undefined8 *)&(this->UnitFunction).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->UnitFunction).field_0x18;
  *(undefined8 *)&(this->UnitFunction).field_0x10 =
       *(undefined8 *)&(param_1->UnitFunction).field_0x10;
  *(undefined8 *)&(this->UnitFunction).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->UnitFunction).field_0x28;
  *(undefined8 *)&(this->UnitFunction).field_0x20 =
       *(undefined8 *)&(param_1->UnitFunction).field_0x20;
  *(undefined8 *)&(this->UnitFunction).field_0x28 = uVar1;
  *(undefined8 *)&param_1->UnitFunction = uVar2;
  *(undefined8 *)&(param_1->UnitFunction).field_0x8 = uVar3;
  *(undefined8 *)&(param_1->UnitFunction).field_0x10 = uVar4;
  *(undefined8 *)&(param_1->UnitFunction).field_0x18 = uVar5;
  *(undefined8 *)&(param_1->UnitFunction).field_0x20 = uVar6;
  *(undefined8 *)&(param_1->UnitFunction).field_0x28 = uVar7;
  uVar1 = *(undefined8 *)&(param_1->NormalizedFunction).field_0x8;
  uVar2 = *(undefined8 *)&this->NormalizedFunction;
  uVar3 = *(undefined8 *)&(this->NormalizedFunction).field_0x8;
  uVar4 = *(undefined8 *)&(this->NormalizedFunction).field_0x10;
  uVar5 = *(undefined8 *)&(this->NormalizedFunction).field_0x18;
  uVar6 = *(undefined8 *)&(this->NormalizedFunction).field_0x20;
  uVar7 = *(undefined8 *)&(this->NormalizedFunction).field_0x28;
  *(undefined8 *)&this->NormalizedFunction = *(undefined8 *)&param_1->NormalizedFunction;
  *(undefined8 *)&(this->NormalizedFunction).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->NormalizedFunction).field_0x18;
  *(undefined8 *)&(this->NormalizedFunction).field_0x10 =
       *(undefined8 *)&(param_1->NormalizedFunction).field_0x10;
  *(undefined8 *)&(this->NormalizedFunction).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->NormalizedFunction).field_0x28;
  *(undefined8 *)&(this->NormalizedFunction).field_0x20 =
       *(undefined8 *)&(param_1->NormalizedFunction).field_0x20;
  *(undefined8 *)&(this->NormalizedFunction).field_0x28 = uVar1;
  *(undefined8 *)&param_1->NormalizedFunction = uVar2;
  *(undefined8 *)&(param_1->NormalizedFunction).field_0x8 = uVar3;
  *(undefined8 *)&(param_1->NormalizedFunction).field_0x10 = uVar4;
  *(undefined8 *)&(param_1->NormalizedFunction).field_0x18 = uVar5;
  *(undefined8 *)&(param_1->NormalizedFunction).field_0x20 = uVar6;
  *(undefined8 *)&(param_1->NormalizedFunction).field_0x28 = uVar7;
  return this;
}

// operator= @ 144531130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FModulationParameter * __thiscall
Audio::FModulationParameter::operator=(FModulationParameter *this,FModulationParameter *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->ParameterName = param_1->ParameterName;
  this->DefaultValue = param_1->DefaultValue;
  this->MinValue = param_1->MinValue;
  this->MaxValue = param_1->MaxValue;
  this->bRequiresConversion = param_1->bRequiresConversion;
  local_48 = *(longlong *)&param_1->MixFunction;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar1 = *(undefined8 **)&(param_1->MixFunction).field_0x28;
    puVar10 = (undefined8 *)&(param_1->MixFunction).field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar10 = puVar1;
    }
    (**(code **)*puVar10)(puVar10,&local_38);
  }
  lVar8 = *(longlong *)&this->MixFunction;
  uVar9 = *(undefined8 *)&(this->MixFunction).field_0x8;
  uVar2 = *(undefined4 *)&(this->MixFunction).field_0x10;
  uVar3 = *(undefined4 *)&(this->MixFunction).field_0x14;
  uVar4 = *(undefined4 *)&(this->MixFunction).field_0x18;
  uVar5 = *(undefined4 *)&(this->MixFunction).field_0x1c;
  uVar6 = *(undefined8 *)&(this->MixFunction).field_0x20;
  plVar7 = *(longlong **)&(this->MixFunction).field_0x28;
  *(longlong *)&this->MixFunction = local_48;
  *(undefined8 *)&(this->MixFunction).field_0x8 = uStack_40;
  *(undefined4 *)&(this->MixFunction).field_0x10 = (undefined4)local_38;
  *(undefined4 *)&(this->MixFunction).field_0x14 = local_38._4_4_;
  *(undefined4 *)&(this->MixFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->MixFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->MixFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->MixFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->MixFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->MixFunction).field_0x2c = uStack_20._4_4_;
  local_38._0_4_ = uVar2;
  local_38._4_4_ = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar6;
  uStack_20 = plVar7;
  local_48 = lVar8;
  uStack_40 = uVar9;
  if (lVar8 != 0) {
    plVar11 = &local_38;
    if (plVar7 != (longlong *)0x0) {
      plVar11 = plVar7;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  TFunction<void___cdecl(float_&)>::operator=(&this->UnitFunction,&param_1->UnitFunction);
  TFunction<void___cdecl(float_&)>::operator=
            (&this->NormalizedFunction,&param_1->NormalizedFunction);
  return this;
}

// GetDefaultMixFunction @ 144534400

TFunction<void___cdecl(float_&,float)> * __cdecl
Audio::FModulationParameter::GetDefaultMixFunction(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Audio::FModulationParameter::GetDefaultMixFunction'::__l2::
             _dynamic_atexit_destructor_for__DefaultMixFunction__);
      _Init_thread_footer(&::_TSS0);
      return &DefaultMixFunction;
    }
  }
  return &DefaultMixFunction;
}

// GetDefaultNormalizedConversionFunction @ 144534490

TFunction<void___cdecl(float_&)> * __cdecl
Audio::FModulationParameter::GetDefaultNormalizedConversionFunction(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Audio::FModulationParameter::GetDefaultNormalizedConversionFunction'::__l2::
             _dynamic_atexit_destructor_for__ConversionFunction__);
      _Init_thread_footer(&::_TSS0);
      return &ConversionFunction;
    }
  }
  return &ConversionFunction;
}

// GetDefaultUnitConversionFunction @ 144534540

TFunction<void___cdecl(float_&)> * __cdecl
Audio::FModulationParameter::GetDefaultUnitConversionFunction(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Audio::FModulationParameter::GetDefaultUnitConversionFunction'::__l2::
             _dynamic_atexit_destructor_for__ConversionFunction__);
      _Init_thread_footer(&::_TSS0);
      return &ConversionFunction;
    }
  }
  return &ConversionFunction;
}

