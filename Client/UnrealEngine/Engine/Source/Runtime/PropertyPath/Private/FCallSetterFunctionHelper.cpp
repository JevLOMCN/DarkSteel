// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// CallSetterFunction @ 14448cbe0

bool __cdecl
PropertyPathHelpersInternal::FCallSetterFunctionHelper<int,UObject>::CallSetterFunction
          (UObject *param_1,UFunction *param_2,int *param_3)

{
  FFieldClass *pFVar1;
  FProperty *pFVar2;
  FFieldClass *pFVar3;
  FUObjectItem *pFVar4;
  FProperty *pFVar5;
  bool bVar6;
  
  if (((param_2->NumParms == '\x01') &&
      (pFVar2 = UFunction::GetReturnProperty(param_2), pFVar2 == (FProperty *)0x0)) &&
     (pFVar2 = GetFirstParamProperty(param_2), pFVar2 != (FProperty *)0x0)) {
    pFVar5 = pFVar2;
    if ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x1000000000000) != 0) {
      pFVar5 = (FProperty *)pFVar2[1]._padding_;
    }
    pFVar1 = (FFieldClass *)pFVar5->_padding_;
    pFVar3 = FIntProperty::StaticClass();
    if (pFVar1 == pFVar3) {
      if ((*(byte *)(pFVar2->_padding_ + 0x18) & 0x40) == 0) {
        bVar6 = pFVar2->ElementSize == 4;
      }
      else {
        bVar6 = pFVar2->ElementSize == 1;
      }
      if ((bVar6) &&
         (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc),
         ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
        return true;
      }
    }
  }
  return false;
}

// CallSetterFunction @ 14448ccd0

bool __cdecl
PropertyPathHelpersInternal::FCallSetterFunctionHelper<float,UObject>::CallSetterFunction
          (UObject *param_1,UFunction *param_2,float *param_3)

{
  FFieldClass *pFVar1;
  FProperty *pFVar2;
  FFieldClass *pFVar3;
  FUObjectItem *pFVar4;
  bool bVar5;
  
  if ((((param_2->NumParms == '\x01') &&
       (pFVar2 = UFunction::GetReturnProperty(param_2), pFVar2 == (FProperty *)0x0)) &&
      (pFVar2 = GetFirstParamProperty(param_2), pFVar2 != (FProperty *)0x0)) &&
     (pFVar1 = (FFieldClass *)pFVar2->_padding_, pFVar3 = FFloatProperty::StaticClass(),
     pFVar1 == pFVar3)) {
    if ((*(byte *)(pFVar2->_padding_ + 0x18) & 0x40) == 0) {
      bVar5 = pFVar2->ElementSize == 4;
    }
    else {
      bVar5 = pFVar2->ElementSize == 1;
    }
    if ((bVar5) &&
       (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc),
       ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
      return true;
    }
  }
  return false;
}

// CallSetterFunction @ 14448cda0

bool __cdecl
PropertyPathHelpersInternal::FCallSetterFunctionHelper<TObjectPtr<UPropertyPathTestObject>,UObject>
::CallSetterFunction
          (UObject *param_1,UFunction *param_2,TObjectPtr<UPropertyPathTestObject> *param_3)

{
  ulonglong uVar1;
  FProperty *pFVar2;
  FUObjectItem *pFVar3;
  bool bVar4;
  
  if (param_2->NumParms == '\x01') {
    pFVar2 = UFunction::GetReturnProperty(param_2);
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = GetFirstParamProperty(param_2);
      if ((pFVar2 != (FProperty *)0x0) &&
         (uVar1 = *(ulonglong *)(pFVar2->_padding_ + 0x18), (uVar1 >> 0x10 & 1) != 0)) {
        if ((uVar1 & 0x40) == 0) {
          bVar4 = pFVar2->ElementSize == 8;
        }
        else {
          bVar4 = pFVar2->ElementSize == 1;
        }
        if (bVar4) {
          pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
          if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
            return true;
          }
        }
      }
    }
  }
  return false;
}

// CallSetterFunction @ 14448ce60

bool __cdecl
PropertyPathHelpersInternal::FCallSetterFunctionHelper<FPropertyPathTestStruct,UObject>::
CallSetterFunction(UObject *param_1,UFunction *param_2,FPropertyPathTestStruct *param_3)

{
  bool bVar1;
  FProperty *pFVar2;
  FUObjectItem *pFVar3;
  
  if ((((param_2->NumParms == '\x01') &&
       (pFVar2 = UFunction::GetReturnProperty(param_2), pFVar2 == (FProperty *)0x0)) &&
      (pFVar2 = GetFirstParamProperty(param_2), pFVar2 != (FProperty *)0x0)) &&
     (bVar1 = IsConcreteTypeCompatibleWithReflectedType<FPropertyPathTestStruct>(pFVar2), bVar1)) {
    if ((*(byte *)(pFVar2->_padding_ + 0x18) & 0x40) == 0) {
      bVar1 = pFVar2->ElementSize == 0x60;
    }
    else {
      bVar1 = pFVar2->ElementSize == 1;
    }
    if ((bVar1) &&
       (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc),
       ((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
      return true;
    }
  }
  return false;
}

// CallSetterFunction @ 14448cf20

bool __cdecl
PropertyPathHelpersInternal::
FCallSetterFunctionHelper<PropertyPathHelpersInternal::FPropertyStructView,UObject>::
CallSetterFunction(UObject *param_1,UFunction *param_2,FPropertyStructView *param_3)

{
  FProperty *pFVar1;
  FUObjectItem *pFVar2;
  int iVar3;
  
  if (param_2->NumParms == '\x01') {
    pFVar1 = UFunction::GetReturnProperty(param_2);
    if (pFVar1 == (FProperty *)0x0) {
      pFVar1 = GetFirstParamProperty(param_2);
      if ((pFVar1 != (FProperty *)0x0) &&
         (iVar3 = (int)*(short *)((longlong)&param_3->ScriptStruct->_padding_ + 4),
         pFVar1->ElementSize == (iVar3 + -1 + (int)param_3->ScriptStruct->_padding_ & -iVar3))) {
        pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
        if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3->Memory);
          return true;
        }
      }
    }
  }
  return false;
}

// CallSetterFunction @ 14448cfd0

bool __cdecl
PropertyPathHelpersInternal::FCallSetterFunctionHelper<FString,UObject>::CallSetterFunction
          (UObject *param_1,UFunction *param_2,FString *param_3)

{
  FFieldClass *pFVar1;
  FProperty *pFVar2;
  FFieldClass *pFVar3;
  FUObjectItem *pFVar4;
  bool bVar5;
  
  if ((((param_2->NumParms == '\x01') &&
       (pFVar2 = UFunction::GetReturnProperty(param_2), pFVar2 == (FProperty *)0x0)) &&
      (pFVar2 = GetFirstParamProperty(param_2), pFVar2 != (FProperty *)0x0)) &&
     (pFVar1 = (FFieldClass *)pFVar2->_padding_, pFVar3 = FStrProperty::StaticClass(),
     pFVar1 == pFVar3)) {
    if ((*(byte *)(pFVar2->_padding_ + 0x18) & 0x40) == 0) {
      bVar5 = pFVar2->ElementSize == 0x10;
    }
    else {
      bVar5 = pFVar2->ElementSize == 1;
    }
    if ((bVar5) &&
       (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc),
       ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
      return true;
    }
  }
  return false;
}

// CallSetterFunction @ 14448d0a0

bool __cdecl
PropertyPathHelpersInternal::FCallSetterFunctionHelper<enum_EPropertyPathTestEnum,UObject>::
CallSetterFunction(UObject *param_1,UFunction *param_2,EPropertyPathTestEnum *param_3)

{
  ulonglong uVar1;
  FFieldClass *pFVar2;
  FProperty *pFVar3;
  FFieldClass *pFVar4;
  FUObjectItem *pFVar5;
  FProperty *pFVar6;
  bool bVar7;
  
  if (param_2->NumParms != '\x01') {
    return false;
  }
  pFVar3 = UFunction::GetReturnProperty(param_2);
  if (pFVar3 != (FProperty *)0x0) {
    return false;
  }
  pFVar3 = GetFirstParamProperty(param_2);
  if (pFVar3 == (FProperty *)0x0) {
    return false;
  }
  uVar1 = *(ulonglong *)(pFVar3->_padding_ + 0x18);
  if ((uVar1 >> 0x30 & 1) == 0) {
    pFVar6 = pFVar3;
    if ((uVar1 >> 0x11 & 1) != 0) {
      bVar7 = *(char *)((longlong)&pFVar3[1]._padding_ + 3) != -1;
      goto LAB_14448d11a;
    }
  }
  else {
    pFVar6 = (FProperty *)pFVar3[1]._padding_;
  }
  pFVar2 = (FFieldClass *)pFVar6->_padding_;
  pFVar4 = FByteProperty::StaticClass();
  bVar7 = pFVar2 == pFVar4;
LAB_14448d11a:
  if (bVar7) {
    if ((*(byte *)(pFVar3->_padding_ + 0x18) & 0x40) == 0) {
      bVar7 = pFVar3->ElementSize == 4;
    }
    else {
      bVar7 = pFVar3->ElementSize == 1;
    }
    if ((bVar7) &&
       (pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc),
       ((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
      return true;
    }
  }
  return false;
}

// CallSetterFunction @ 14448d1a0

bool __cdecl
PropertyPathHelpersInternal::FCallSetterFunctionHelper<bool,UObject>::CallSetterFunction
          (UObject *param_1,UFunction *param_2,bool *param_3)

{
  FFieldClass *pFVar1;
  FProperty *pFVar2;
  FFieldClass *pFVar3;
  FUObjectItem *pFVar4;
  
  if ((((param_2->NumParms == '\x01') &&
       (pFVar2 = UFunction::GetReturnProperty(param_2), pFVar2 == (FProperty *)0x0)) &&
      (pFVar2 = GetFirstParamProperty(param_2), pFVar2 != (FProperty *)0x0)) &&
     (((pFVar1 = (FFieldClass *)pFVar2->_padding_, pFVar3 = FBoolProperty::StaticClass(),
       pFVar1 == pFVar3 && (pFVar2->ElementSize == 1)) &&
      (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc),
      ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)))) {
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
    return true;
  }
  return false;
}

