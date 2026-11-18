// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 7

// CallGetterFunction @ 14448bad0

bool __cdecl
PropertyPathHelpersInternal::FCallGetterFunctionHelper<int,UObject>::CallGetterFunction
          (UObject *param_1,UFunction *param_2,int *param_3)

{
  FFieldClass *pFVar1;
  FFieldObjectUnion FVar2;
  FFieldClass *pFVar3;
  FUObjectItem *pFVar4;
  FFieldObjectUnion FVar5;
  bool bVar6;
  TFieldIterator<FProperty> local_38;
  
  if (param_2->NumParms == '\x01') {
    local_38.Field = (FField *)param_2->_padding_;
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    local_38.Struct = (UStruct *)param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    FVar2.Field = local_38.Field;
    while (FVar2 != (FFieldObjectUnion)0x0) {
      if ((char)*(FFieldClass **)((longlong)FVar2 + 0x38) < '\0') {
        if (((ulonglong)*(FFieldClass **)((longlong)FVar2 + 0x38) & 0x500) == 0) {
          return false;
        }
        FVar5 = FVar2;
        if ((((*(FFieldClass **)((longlong)FVar2 + 8))->CastFlags & CASTCLASS_FEnumProperty) !=
             CASTCLASS_None) && (FVar2.Field != (FField *)0x0)) {
          FVar5 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar2.Unknown + 0x70))->Field;
        }
        pFVar1 = (FVar5.Field)->ClassPrivate;
        local_38.Field = FVar2.Field;
        pFVar3 = FIntProperty::StaticClass();
        if (pFVar1 != pFVar3) {
          return false;
        }
        if (((byte)(char)(FVar2.Field)->ClassPrivate->CastFlags >> 6 & 1) == 0) {
          bVar6 = *(int *)(FVar2.Unknown + 0x34) == 4;
        }
        else {
          bVar6 = *(int *)(FVar2.Unknown + 0x34) == 1;
        }
        if (!bVar6) {
          return false;
        }
        pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
        if (((ulonglong)((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
          return false;
        }
        (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
        return true;
      }
      local_38.Field = (FVar2.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      FVar2.Field = local_38.Field;
    }
  }
  return false;
}

// CallGetterFunction @ 14448bc10

bool __cdecl
PropertyPathHelpersInternal::FCallGetterFunctionHelper<float,UObject>::CallGetterFunction
          (UObject *param_1,UFunction *param_2,float *param_3)

{
  FFieldClass *pFVar1;
  FField *pFVar2;
  FFieldClass *pFVar3;
  FUObjectItem *pFVar4;
  bool bVar5;
  TFieldIterator<FProperty> local_28;
  
  if (param_2->NumParms == '\x01') {
    local_28.Field = (FField *)param_2->_padding_;
    local_28.InterfaceIndex = -1;
    local_28.bIncludeSuper = true;
    local_28.bIncludeDeprecated = true;
    local_28.bIncludeInterface = false;
    local_28.Struct = (UStruct *)param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar2 = local_28.Field;
    while (pFVar2 != (FField *)0x0) {
      if ((char)pFVar2[1].ClassPrivate < '\0') {
        if (((ulonglong)pFVar2[1].ClassPrivate & 0x500) == 0) {
          return false;
        }
        pFVar1 = pFVar2->ClassPrivate;
        local_28.Field = pFVar2;
        pFVar3 = FFloatProperty::StaticClass();
        if (pFVar1 != pFVar3) {
          return false;
        }
        if (((byte)(char)pFVar2->ClassPrivate->CastFlags >> 6 & 1) == 0) {
          bVar5 = *(int *)((longlong)&pFVar2[1]._padding_ + 4) == 4;
        }
        else {
          bVar5 = *(int *)((longlong)&pFVar2[1]._padding_ + 4) == 1;
        }
        if (!bVar5) {
          return false;
        }
        pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
        if (((ulonglong)((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
          return false;
        }
        (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
        return true;
      }
      local_28.Field = pFVar2->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_28);
      pFVar2 = local_28.Field;
    }
  }
  return false;
}

// CallGetterFunction @ 14448bd30

bool __cdecl
PropertyPathHelpersInternal::FCallGetterFunctionHelper<TObjectPtr<UPropertyPathTestObject>,UObject>
::CallGetterFunction
          (UObject *param_1,UFunction *param_2,TObjectPtr<UPropertyPathTestObject> *param_3)

{
  EClassCastFlags EVar1;
  FUObjectItem *pFVar2;
  bool bVar3;
  TFieldIterator<FProperty> local_28;
  
  if (param_2->NumParms == '\x01') {
    local_28.Field = (FField *)param_2->_padding_;
    local_28.InterfaceIndex = -1;
    local_28.bIncludeSuper = true;
    local_28.bIncludeDeprecated = true;
    local_28.bIncludeInterface = false;
    local_28.Struct = (UStruct *)param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    while (local_28.Field != (FField *)0x0) {
      if ((char)local_28.Field[1].ClassPrivate < '\0') {
        if (((ulonglong)local_28.Field[1].ClassPrivate & 0x500) == 0) {
          return false;
        }
        EVar1 = (local_28.Field)->ClassPrivate->CastFlags;
        if ((EVar1 >> 0x10 & 1) == 0) {
          return false;
        }
        if ((EVar1 >> 6 & 1) == 0) {
          bVar3 = *(int *)((longlong)&local_28.Field[1]._padding_ + 4) == 8;
        }
        else {
          bVar3 = *(int *)((longlong)&local_28.Field[1]._padding_ + 4) == 1;
        }
        if (!bVar3) {
          return false;
        }
        pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
        if (((ulonglong)((pFVar2->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
          return false;
        }
        (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
        return true;
      }
      local_28.Field = (local_28.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_28);
    }
  }
  return false;
}

// CallGetterFunction @ 14448be40

bool __cdecl
PropertyPathHelpersInternal::FCallGetterFunctionHelper<FPropertyPathTestStruct,UObject>::
CallGetterFunction(UObject *param_1,UFunction *param_2,FPropertyPathTestStruct *param_3)

{
  UScriptStruct *pUVar1;
  FField *pFVar2;
  UPackage *pUVar3;
  FUObjectItem *pFVar4;
  bool bVar5;
  TFieldIterator<FProperty> local_28;
  
  if (param_2->NumParms == '\x01') {
    local_28.Field = (FField *)param_2->_padding_;
    local_28.InterfaceIndex = -1;
    local_28.bIncludeSuper = true;
    local_28.bIncludeDeprecated = true;
    local_28.bIncludeInterface = false;
    local_28.Struct = (UStruct *)param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar2 = local_28.Field;
    while (pFVar2 != (FField *)0x0) {
      if ((char)pFVar2[1].ClassPrivate < '\0') {
        if (((ulonglong)pFVar2[1].ClassPrivate & 0x500) == 0) {
          return false;
        }
        if (((uint)(int)pFVar2->ClassPrivate->CastFlags >> 0x14 & 1) == 0) {
          return false;
        }
        if (pFVar2 == (FField *)0x0) {
          return false;
        }
        local_28.Field = pFVar2;
        if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar3 = Z_Construct_UPackage__Script_PropertyPath();
          Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar3,
                               L"PropertyPathTestStruct");
        }
        pUVar1 = (UScriptStruct *)pFVar2[2].Owner.Container.Field;
        if (pUVar1 == (UScriptStruct *)0x0) {
          bVar5 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
                  (UScriptStruct *)0x0;
        }
        else {
          bVar5 = pUVar1 == Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton
          ;
        }
        if (!bVar5) {
          return false;
        }
        if (((byte)(char)pFVar2->ClassPrivate->CastFlags >> 6 & 1) == 0) {
          bVar5 = *(int *)((longlong)&pFVar2[1]._padding_ + 4) == 0x60;
        }
        else {
          bVar5 = *(int *)((longlong)&pFVar2[1]._padding_ + 4) == 1;
        }
        if (!bVar5) {
          return false;
        }
        pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
        if (((ulonglong)((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
          return false;
        }
        (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
        return true;
      }
      local_28.Field = pFVar2->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_28);
      pFVar2 = local_28.Field;
    }
  }
  return false;
}

// CallGetterFunction @ 14448bfb0

bool __cdecl
PropertyPathHelpersInternal::
FCallGetterFunctionHelper<TEnumAsByte<enum_EPropertyPathTestEnum>,UObject>::CallGetterFunction
          (UObject *param_1,UFunction *param_2,TEnumAsByte<EPropertyPathTestEnum> *param_3)

{
  EClassCastFlags EVar1;
  FFieldClass *pFVar2;
  FFieldObjectUnion FVar3;
  FFieldClass *pFVar4;
  FUObjectItem *pFVar5;
  FFieldObjectUnion FVar6;
  bool bVar7;
  TFieldIterator<FProperty> local_38;
  
  if (param_2->NumParms == '\x01') {
    local_38.Field = (FField *)param_2->_padding_;
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    local_38.Struct = (UStruct *)param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    FVar3.Field = local_38.Field;
    while (FVar3 != (FFieldObjectUnion)0x0) {
      if ((char)*(FFieldClass **)((longlong)FVar3 + 0x38) < '\0') {
        if (((ulonglong)*(FFieldClass **)((longlong)FVar3 + 0x38) & 0x500) == 0) {
          return false;
        }
        EVar1 = (*(FFieldClass **)((longlong)FVar3 + 8))->CastFlags;
        local_38.Field = FVar3.Field;
        if (((EVar1 >> 0x30 & 1) == 0) || (FVar3.Field == (FField *)0x0)) {
          FVar6 = FVar3;
          if (((EVar1 >> 0x11 & 1) != 0) && (FVar3.Field != (FField *)0x0)) {
            bVar7 = *(char *)(FVar3.Unknown + 0x73) != -1;
            goto LAB_14448c089;
          }
        }
        else {
          FVar6.Field = ((FFieldObjectUnion *)(FVar3.Unknown + 0x70))->Field;
        }
        pFVar2 = (FVar6.Field)->ClassPrivate;
        pFVar4 = FByteProperty::StaticClass();
        bVar7 = pFVar2 == pFVar4;
LAB_14448c089:
        if (!bVar7) {
          return false;
        }
        if (*(int *)(FVar3.Unknown + 0x34) != 1) {
          return false;
        }
        pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
        if (((ulonglong)((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
          return false;
        }
        (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
        return true;
      }
      local_38.Field = (FVar3.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      FVar3.Field = local_38.Field;
    }
  }
  return false;
}

// CallGetterFunction @ 14448c110

bool __cdecl
PropertyPathHelpersInternal::FCallGetterFunctionHelper<FString,UObject>::CallGetterFunction
          (UObject *param_1,UFunction *param_2,FString *param_3)

{
  FFieldClass *pFVar1;
  FField *pFVar2;
  FFieldClass *pFVar3;
  FUObjectItem *pFVar4;
  bool bVar5;
  TFieldIterator<FProperty> local_28;
  
  if (param_2->NumParms == '\x01') {
    local_28.Field = (FField *)param_2->_padding_;
    local_28.InterfaceIndex = -1;
    local_28.bIncludeSuper = true;
    local_28.bIncludeDeprecated = true;
    local_28.bIncludeInterface = false;
    local_28.Struct = (UStruct *)param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar2 = local_28.Field;
    while (pFVar2 != (FField *)0x0) {
      if ((char)pFVar2[1].ClassPrivate < '\0') {
        if (((ulonglong)pFVar2[1].ClassPrivate & 0x500) == 0) {
          return false;
        }
        pFVar1 = pFVar2->ClassPrivate;
        local_28.Field = pFVar2;
        pFVar3 = FStrProperty::StaticClass();
        if (pFVar1 != pFVar3) {
          return false;
        }
        if (((byte)(char)pFVar2->ClassPrivate->CastFlags >> 6 & 1) == 0) {
          bVar5 = *(int *)((longlong)&pFVar2[1]._padding_ + 4) == 0x10;
        }
        else {
          bVar5 = *(int *)((longlong)&pFVar2[1]._padding_ + 4) == 1;
        }
        if (!bVar5) {
          return false;
        }
        pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
        if (((ulonglong)((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
          return false;
        }
        (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
        return true;
      }
      local_28.Field = pFVar2->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_28);
      pFVar2 = local_28.Field;
    }
  }
  return false;
}

// CallGetterFunction @ 14448c230

bool __cdecl
PropertyPathHelpersInternal::FCallGetterFunctionHelper<bool,UObject>::CallGetterFunction
          (UObject *param_1,UFunction *param_2,bool *param_3)

{
  FFieldClass *pFVar1;
  FField *pFVar2;
  FFieldClass *pFVar3;
  FUObjectItem *pFVar4;
  TFieldIterator<FProperty> local_28;
  
  if (param_2->NumParms == '\x01') {
    local_28.Field = (FField *)param_2->_padding_;
    local_28.InterfaceIndex = -1;
    local_28.bIncludeSuper = true;
    local_28.bIncludeDeprecated = true;
    local_28.bIncludeInterface = false;
    local_28.Struct = (UStruct *)param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar2 = local_28.Field;
    while (pFVar2 != (FField *)0x0) {
      if ((char)pFVar2[1].ClassPrivate < '\0') {
        if (((ulonglong)pFVar2[1].ClassPrivate & 0x500) == 0) {
          return false;
        }
        pFVar1 = pFVar2->ClassPrivate;
        local_28.Field = pFVar2;
        pFVar3 = FBoolProperty::StaticClass();
        if (pFVar1 != pFVar3) {
          return false;
        }
        if (*(int *)((longlong)&pFVar2[1]._padding_ + 4) != 1) {
          return false;
        }
        pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
        if (((ulonglong)((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
          return false;
        }
        (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
        return true;
      }
      local_28.Field = pFVar2->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_28);
      pFVar2 = local_28.Field;
    }
  }
  return false;
}

