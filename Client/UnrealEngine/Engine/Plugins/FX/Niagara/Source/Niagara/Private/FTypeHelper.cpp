// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 20

// operator() @ 148f84670

void __thiscall
`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetGetterFunction'::__l8::
<lambda_1>::operator()(void *this,FNiagaraLWCConverter *param_1,void *param_2)

{
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_28 = 0.0;
  dStack_20 = 0.0;
  local_18 = 0.0;
  dStack_10 = 0.0;
  (**(code **)(**(longlong **)this + 0x260))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),&local_28);
  *(float *)param_2 = (float)local_28;
  *(float *)((longlong)param_2 + 4) = (float)dStack_20;
  *(float *)((longlong)param_2 + 8) = (float)local_18;
  *(float *)((longlong)param_2 + 0xc) = (float)dStack_10;
  return;
}

// operator() @ 148f84700

void __thiscall
`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetGetterFunction'::__l8::
<lambda_1>::operator()(void *this,FNiagaraLWCConverter *param_1,void *param_2)

{
  double local_28;
  double dStack_20;
  double local_18;
  
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (**(code **)(**(longlong **)this + 0x260))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),&local_28);
  *(float *)param_2 = (float)local_28;
  *(float *)((longlong)param_2 + 4) = (float)dStack_20;
  *(float *)((longlong)param_2 + 8) = (float)local_18;
  return;
}

// operator() @ 148f84770

void __thiscall
`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetGetterFunction'::__l8::<lambda_1>::
operator()(void *this,FNiagaraLWCConverter *param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FColor_u_0 local_res8 [8];
  
  local_res8[0] = FColor::Black.field0_0x0;
  (**(code **)(**(longlong **)this + 0x260))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),local_res8);
  fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
  fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
  fVar3 = (float)(local_res8[0].Bits >> 0x18) * __real_3b808081;
  *(float *)param_2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
  *(float *)((longlong)param_2 + 4) = fVar1;
  *(float *)((longlong)param_2 + 8) = fVar2;
  *(float *)((longlong)param_2 + 0xc) = fVar3;
  return;
}

// operator() @ 148f847f0

void __thiscall
`NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetGetterFunction'::__l8::<lambda_1>
::operator()(void *this,FNiagaraLWCConverter *param_1,void *param_2)

{
  undefined4 uVar1;
  FNiagaraPosition *pFVar2;
  FNiagaraPosition local_58;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (**(code **)(**(longlong **)this + 0x260))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),&local_48);
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  pFVar2 = FNiagaraLWCConverter::ConvertWorldToSimulationPosition
                     (param_1,&local_58,(TVector<double> *)&local_28._s_0);
  uVar1 = *(undefined4 *)&pFVar2->field_0x8;
  *(undefined8 *)param_2 = *(undefined8 *)pFVar2;
  *(undefined4 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// GetCopyFunction @ 148fb2ed0

TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction
          (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *__return_storage_ptr__,
          FProperty *param_1,void *param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (FProperty *)0x0) &&
     ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0)) {
    param_1 = (FProperty *)param_1[1]._padding_;
  }
  uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 >> 0x12 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0x1f & 1) == 0) {
          if ((char)uVar1 < '\0') {
            *(void **)&__return_storage_ptr__->field_0x18 = param_2;
            *(undefined ***)&__return_storage_ptr__->field_0x10 =
                 &
                 ___7__TFunction_OwnedObject_V<lambda_5>__BI___GetCopyFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
            ;
            if (__return_storage_ptr__ !=
                (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *)0xffffffffffffffe8)
            {
              *(code **)__return_storage_ptr__ =
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l24::<lambda_5>,void,FNiagaraLWCConverter_const_&,void_*>
                   ::Call;
            }
          }
        }
        else {
          *(void **)&__return_storage_ptr__->field_0x18 = param_2;
          *(undefined ***)&__return_storage_ptr__->field_0x10 =
               &
               ___7__TFunction_OwnedObject_V<lambda_4>__BE___GetCopyFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
          ;
          if (__return_storage_ptr__ !=
              (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *)0xffffffffffffffe8) {
            *(code **)__return_storage_ptr__ =
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l20::<lambda_4>,void,FNiagaraLWCConverter_const_&,void_*>
                 ::Call;
            return __return_storage_ptr__;
          }
        }
      }
      else {
        *(void **)&__return_storage_ptr__->field_0x18 = param_2;
        *(undefined ***)&__return_storage_ptr__->field_0x10 =
             &
             ___7__TFunction_OwnedObject_V<lambda_3>__BA___GetCopyFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
        ;
        if (__return_storage_ptr__ !=
            (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *)0xffffffffffffffe8) {
          *(code **)__return_storage_ptr__ =
               UE::Core::Private::Function::
               TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l16::<lambda_3>,void,FNiagaraLWCConverter_const_&,void_*>
               ::Call;
          return __return_storage_ptr__;
        }
      }
    }
    else {
      *(void **)&__return_storage_ptr__->field_0x18 = param_2;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &
           ___7__TFunction_OwnedObject_V<lambda_2>__M___GetCopyFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      if (__return_storage_ptr__ !=
          (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *)0xffffffffffffffe8) {
        *(code **)__return_storage_ptr__ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l12::<lambda_2>,void,FNiagaraLWCConverter_const_&,void_*>
             ::Call;
        return __return_storage_ptr__;
      }
    }
  }
  else {
    *(void **)&__return_storage_ptr__->field_0x18 = param_2;
    *(undefined ***)&__return_storage_ptr__->field_0x10 =
         &
         ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    if (__return_storage_ptr__ !=
        (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *)0xffffffffffffffe8) {
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
           ::Call;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetCopyFunction @ 148fb2ff0

TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction
          (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *__return_storage_ptr__,
          FProperty *param_1,void *param_2)

{
  if (param_1 != (FProperty *)0x0) {
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 8 & 1) != 0) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__4__GetCopyFunction___FTypeHelper_M_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(void **)&__return_storage_ptr__->field_0x18 = param_2;
      if (&__return_storage_ptr__->field_0x18 == (undefined1 *)0x0) {
        return __return_storage_ptr__;
      }
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction'::__l5::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
           ::Call;
      return __return_storage_ptr__;
    }
    if ((param_1 != (FProperty *)0x0) &&
       ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x100000000) != 0)) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &
           ___7__TFunction_OwnedObject_V<lambda_2>__8__GetCopyFunction___FTypeHelper_M_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(void **)&__return_storage_ptr__->field_0x18 = param_2;
      if (&__return_storage_ptr__->field_0x18 == (undefined1 *)0x0) {
        return __return_storage_ptr__;
      }
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction'::__l9::<lambda_2>,void,FNiagaraLWCConverter_const_&,void_*>
           ::Call;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  return __return_storage_ptr__;
}

// GetCopyFunction @ 148fb3090

TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetCopyFunction
          (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *__return_storage_ptr__,
          FProperty *param_1,void *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar3 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar3 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
    }
    if (bVar3) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_U__TVector2_M_Math_UE___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(void **)&__return_storage_ptr__->field_0x18 = param_2;
      if (&__return_storage_ptr__->field_0x18 == (undefined1 *)0x0) {
        return __return_storage_ptr__;
      }
      pcVar2 = UE::Core::Private::Function::
               TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
               ::Call;
      goto LAB_148fb3108;
    }
  }
  pcVar2 = (code *)0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
LAB_148fb3108:
  *(code **)__return_storage_ptr__ = pcVar2;
  return __return_storage_ptr__;
}

// GetCopyFunction @ 148fb3130

TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetCopyFunction
          (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *__return_storage_ptr__,
          FProperty *param_1,void *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar3 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar3 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
    }
    if (bVar3) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_U__TVector4_M_Math_UE___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(void **)&__return_storage_ptr__->field_0x18 = param_2;
      if (&__return_storage_ptr__->field_0x18 == (undefined1 *)0x0) {
        return __return_storage_ptr__;
      }
      pcVar2 = UE::Core::Private::Function::
               TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
               ::Call;
      goto LAB_148fb31a8;
    }
  }
  pcVar2 = (code *)0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
LAB_148fb31a8:
  *(code **)__return_storage_ptr__ = pcVar2;
  return __return_storage_ptr__;
}

// GetCopyFunction @ 148fb31d0

TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetCopyFunction
          (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *__return_storage_ptr__,
          FProperty *param_1,void *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar3 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar3 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
    }
    if (bVar3) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_U__TVector_M_Math_UE___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(void **)&__return_storage_ptr__->field_0x18 = param_2;
      if (&__return_storage_ptr__->field_0x18 == (undefined1 *)0x0) {
        return __return_storage_ptr__;
      }
      pcVar2 = UE::Core::Private::Function::
               TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
               ::Call;
      goto LAB_148fb3248;
    }
  }
  pcVar2 = (code *)0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
LAB_148fb3248:
  *(code **)__return_storage_ptr__ = pcVar2;
  return __return_storage_ptr__;
}

// GetCopyFunction @ 148fb3270

TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction
          (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *__return_storage_ptr__,
          FProperty *param_1,void *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TBaseStructure<FColor>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar3 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar3 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
    }
    if (bVar3) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_UFLinearColor___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(void **)&__return_storage_ptr__->field_0x18 = param_2;
      if (&__return_storage_ptr__->field_0x18 == (undefined1 *)0x0) {
        return __return_storage_ptr__;
      }
      pcVar2 = UE::Core::Private::Function::
               TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
               ::Call;
      goto LAB_148fb3336;
    }
    pUVar1 = TBaseStructure<FLinearColor>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar3 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar3 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
    }
    if (bVar3) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &
           ___7__TFunction_OwnedObject_V<lambda_2>__M___GetCopyFunction___FTypeHelper_UFLinearColor___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(void **)&__return_storage_ptr__->field_0x18 = param_2;
      if (&__return_storage_ptr__->field_0x18 == (undefined1 *)0x0) {
        return __return_storage_ptr__;
      }
      pcVar2 = UE::Core::Private::Function::
               TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction'::__l12::<lambda_2>,void,FNiagaraLWCConverter_const_&,void_*>
               ::Call;
      goto LAB_148fb3336;
    }
  }
  pcVar2 = (code *)0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
LAB_148fb3336:
  *(code **)__return_storage_ptr__ = pcVar2;
  return __return_storage_ptr__;
}

// GetCopyFunction @ 148fb3360

TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetCopyFunction
          (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *__return_storage_ptr__,
          FProperty *param_1,void *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar3 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar3 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
    }
    if (bVar3) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_UFNiagaraPosition___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(void **)&__return_storage_ptr__->field_0x18 = param_2;
      if (&__return_storage_ptr__->field_0x18 == (undefined1 *)0x0) {
        return __return_storage_ptr__;
      }
      pcVar2 = UE::Core::Private::Function::
               TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
               ::Call;
      goto LAB_148fb33d8;
    }
  }
  pcVar2 = (code *)0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
LAB_148fb33d8:
  *(code **)__return_storage_ptr__ = pcVar2;
  return __return_storage_ptr__;
}

// GetCopyFunction @ 148fb3400

TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetCopyFunction
          (TFunction<void___cdecl(FNiagaraLWCConverter_const_&,void_*)> *__return_storage_ptr__,
          FProperty *param_1,void *param_2)

{
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x11 & 1) == 0)) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  }
  else {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined ***)&__return_storage_ptr__->field_0x10 =
         &
         ___7__TFunction_OwnedObject_V<lambda_1>__4__GetCopyFunction___FTypeHelper__N_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    *(void **)&__return_storage_ptr__->field_0x18 = param_2;
    *(FProperty **)&__return_storage_ptr__->field_0x20 = param_1;
    if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetCopyFunction'::__l5::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
           ::Call;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetTypeDef @ 148fba200

FNiagaraTypeDefinition * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetTypeDef
          (FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0);
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::IntDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::IntDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::IntDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::IntDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::IntDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::IntDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetTypeDef @ 148fba280

FNiagaraTypeDefinition * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetTypeDef
          (FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0);
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::FloatDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::FloatDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::FloatDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::FloatDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::FloatDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::FloatDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetTypeDef @ 148fba300

FNiagaraTypeDefinition * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetTypeDef
          (FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0)
    ;
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::Vec2Def.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::Vec2Def.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::Vec2Def.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::Vec2Def.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::Vec2Def.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::Vec2Def.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetTypeDef @ 148fba380

FNiagaraTypeDefinition * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetTypeDef
          (FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0)
    ;
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::Vec4Def.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::Vec4Def.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::Vec4Def.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::Vec4Def.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::Vec4Def.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::Vec4Def.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetTypeDef @ 148fba400

FNiagaraTypeDefinition * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetTypeDef
          (FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0)
    ;
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::Vec3Def.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::Vec3Def.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::Vec3Def.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::Vec3Def.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::Vec3Def.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::Vec3Def.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetTypeDef @ 148fba480

FNiagaraTypeDefinition * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetTypeDef
          (FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0);
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::ColorDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::ColorDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::ColorDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::ColorDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::ColorDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::ColorDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetTypeDef @ 148fba500

FNiagaraTypeDefinition * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetTypeDef
          (FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0);
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::PositionDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::PositionDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::PositionDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::PositionDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::PositionDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::PositionDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// GetTypeDef @ 148fba580

FNiagaraTypeDefinition * __cdecl
NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetTypeDef
          (FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0)
    ;
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::BoolDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::BoolDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::BoolDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::BoolDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::BoolDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::BoolDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

