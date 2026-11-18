// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468dc090

UClass * __cdecl UWidgetBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBinding",
               &Z_Registration_Info_UClass_UWidgetBinding.InnerSingleton,
               StaticRegisterNativesUWidgetBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetBinding>,InternalVTableHelperCtorCaller<UWidgetBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBinding.InnerSingleton;
}

// UWidgetBinding @ 146902960

UWidgetBinding * __thiscall
UWidgetBinding::UWidgetBinding(UWidgetBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UWidgetBinding__6B_;
  return this;
}

// UWidgetBinding @ 1469029b0

UWidgetBinding * __thiscall UWidgetBinding::UWidgetBinding(UWidgetBinding *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UWidgetBinding__6B_;
  return this;
}

// ~UWidgetBinding @ 146905090

void __thiscall UWidgetBinding::~UWidgetBinding(UWidgetBinding *this)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146923610

UClass * __cdecl UWidgetBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBinding",
               &Z_Registration_Info_UClass_UWidgetBinding.InnerSingleton,
               StaticRegisterNativesUWidgetBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetBinding>,InternalVTableHelperCtorCaller<UWidgetBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBinding.InnerSingleton;
}

// GetValue @ 1469279a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UWidgetBinding::GetValue(UWidgetBinding *this)

{
  int iVar1;
  longlong lVar2;
  UWidget *pUVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UWidget *local_res8 [4];
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if (pUVar5 != (UObject *)0x0) {
    local_res8[0] = (UWidget *)0x0;
    bVar4 = FDynamicPropertyPath::GetValue<UObject_*>
                      ((FDynamicPropertyPath *)&this->field_0x30,pUVar5,(UObject **)local_res8);
    pUVar3 = local_res8[0];
    if ((bVar4) && (local_res8[0] != (UWidget *)0x0)) {
      pUVar6 = Z_Construct_UClass_UWidget_NoRegister();
      lVar2 = pUVar3->_padding_;
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        return pUVar3;
      }
    }
  }
  return (UWidget *)0x0;
}

// IsSupportedDestination @ 14692d270

bool __thiscall UWidgetBinding::IsSupportedDestination(UWidgetBinding *this,FProperty *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014692d273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2b0))();
  return (bool)uVar1;
}

// IsSupportedSource @ 14692d540

bool __thiscall UWidgetBinding::IsSupportedSource(UWidgetBinding *this,FProperty *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x10 & 1) == 0)) {
    return false;
  }
  lVar2 = param_1[1]._padding_;
  pUVar3 = Z_Construct_UClass_UWidget_NoRegister();
  if (pUVar3 != (UClass *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUWidgetBinding @ 146945c90

void __cdecl UWidgetBinding::StaticRegisterNativesUWidgetBinding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UWidgetBinding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetValue @ 146952e60

void __cdecl UWidgetBinding::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UObject *local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 1));
  if (pUVar4 != (UObject *)0x0) {
    local_res8 = (UObject *)0x0;
    bVar3 = FDynamicPropertyPath::GetValue<UObject_*>
                      ((FDynamicPropertyPath *)&param_1[1].field_0x8,pUVar4,&local_res8);
    pUVar4 = local_res8;
    if ((bVar3) && (local_res8 != (UObject *)0x0)) {
      pUVar5 = Z_Construct_UClass_UWidget_NoRegister();
      lVar2 = *(longlong *)&pUVar4->field_0x10;
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        *(UObject **)param_3 = pUVar4;
        return;
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

