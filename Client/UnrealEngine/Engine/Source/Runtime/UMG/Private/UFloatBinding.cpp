// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468df520

UClass * __cdecl UFloatBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"FloatBinding",
               &Z_Registration_Info_UClass_UFloatBinding.InnerSingleton,
               StaticRegisterNativesUFloatBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFloatBinding>,InternalVTableHelperCtorCaller<UFloatBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatBinding.InnerSingleton;
}

// UFloatBinding @ 146901140

UFloatBinding * __thiscall UFloatBinding::UFloatBinding(UFloatBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UFloatBinding__6B_;
  return this;
}

// UFloatBinding @ 146901190

UFloatBinding * __thiscall UFloatBinding::UFloatBinding(UFloatBinding *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UFloatBinding__6B_;
  return this;
}

// ~UFloatBinding @ 1469048c0

void __thiscall UFloatBinding::~UFloatBinding(UFloatBinding *this)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146921ff0

UClass * __cdecl UFloatBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"FloatBinding",
               &Z_Registration_Info_UClass_UFloatBinding.InnerSingleton,
               StaticRegisterNativesUFloatBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFloatBinding>,InternalVTableHelperCtorCaller<UFloatBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatBinding.InnerSingleton;
}

// GetValue @ 146927710

float __thiscall UFloatBinding::GetValue(UFloatBinding *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  undefined1 *this_00;
  float fVar7;
  float local_res8 [2];
  double local_res10;
  FProperty *local_res18;
  FPropertyPathResolver local_38;
  double *local_30;
  FProperty **local_28;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if (pUVar3 != (UObject *)0x0) {
    this_00 = &this->field_0x30;
    local_res8[0] = 0.0;
    bVar2 = FCachedPropertyPath::Resolve((FCachedPropertyPath *)this_00,pUVar3);
    if (bVar2) {
      local_res10 = 0.0;
      bVar2 = FDynamicPropertyPath::GetValue<float>
                        ((FDynamicPropertyPath *)this_00,pUVar3,local_res8);
      if (bVar2) {
        return local_res8[0];
      }
      bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this_00);
      if (bVar2) {
        pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this_00);
        if (pUVar3 != pUVar4) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InContainer == InPropertyPath.GetCachedContainer()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                             ,0x18b,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            fVar7 = (float)(*pcVar1)();
            return fVar7;
          }
        }
        bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this_00);
        if (!bVar2) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InPropertyPath.IsResolved()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                             ,0x18c,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            fVar7 = (float)(*pcVar1)();
            return fVar7;
          }
        }
        pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this_00);
        if (pUVar5 == (UFunction *)0x0) {
          pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this_00);
          bVar2 = false;
          if (pvVar6 != (void *)0x0) {
            bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<double>::GetValue
                              ((FCachedPropertyPath *)this_00,&local_res10,&local_res18);
          }
        }
        else {
          pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this_00);
          bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<double,UObject>::
                  CallGetterFunction(pUVar3,pUVar5,&local_res10);
        }
      }
      else {
        local_38 = (FPropertyPathResolver)
                   &___7__FInternalGetterResolver_N_PropertyPathHelpersInternal__6B_;
        local_30 = &local_res10;
        local_28 = &local_res18;
        bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                          (pUVar3,(FCachedPropertyPath *)this_00,&local_38);
      }
      if (bVar2 != false) {
        return (float)local_res10;
      }
    }
  }
  return 0.0;
}

// IsSupportedDestination @ 14692d050

bool __thiscall UFloatBinding::IsSupportedDestination(UFloatBinding *this,FProperty *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014692d053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2b0))();
  return (bool)uVar1;
}

// IsSupportedSource @ 14692d3f0

bool __thiscall UFloatBinding::IsSupportedSource(UFloatBinding *this,FProperty *param_1)

{
  FFieldClass *pFVar1;
  FFieldClass *pFVar2;
  
  pFVar1 = (FFieldClass *)param_1->_padding_;
  pFVar2 = FFloatProperty::StaticClass();
  if (pFVar1 != pFVar2) {
    pFVar1 = (FFieldClass *)param_1->_padding_;
    pFVar2 = FDoubleProperty::StaticClass();
    if (pFVar1 != pFVar2) {
      return false;
    }
  }
  return true;
}

// StaticRegisterNativesUFloatBinding @ 146945870

void __cdecl UFloatBinding::StaticRegisterNativesUFloatBinding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UFloatBinding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetValue @ 146952b20

void __cdecl UFloatBinding::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  void *pvVar6;
  undefined1 *this;
  float local_res8 [2];
  double local_res10;
  FProperty *local_res18 [2];
  FPropertyPathResolver local_48;
  double *local_40;
  FProperty **local_38;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 1));
  if (pUVar3 != (UObject *)0x0) {
    this = &param_1[1].field_0x8;
    local_res8[0] = 0.0;
    bVar2 = FCachedPropertyPath::Resolve((FCachedPropertyPath *)this,pUVar3);
    if (bVar2) {
      local_res10 = 0.0;
      bVar2 = FDynamicPropertyPath::GetValue<float>((FDynamicPropertyPath *)this,pUVar3,local_res8);
      if (bVar2) {
        *(float *)param_3 = local_res8[0];
        return;
      }
      bVar2 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this);
      if (bVar2) {
        pUVar4 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this);
        if (pUVar3 != pUVar4) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InContainer == InPropertyPath.GetCachedContainer()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                             ,0x18b,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        bVar2 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this);
        if (!bVar2) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InPropertyPath.IsResolved()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                             ,0x18c,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
        if (pUVar5 == (UFunction *)0x0) {
          pvVar6 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this);
          bVar2 = false;
          if (pvVar6 != (void *)0x0) {
            bVar2 = PropertyPathHelpersInternal::FGetValueFastHelper<double>::GetValue
                              ((FCachedPropertyPath *)this,&local_res10,local_res18);
          }
        }
        else {
          pUVar5 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this);
          bVar2 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<double,UObject>::
                  CallGetterFunction(pUVar3,pUVar5,&local_res10);
        }
      }
      else {
        local_48 = (FPropertyPathResolver)
                   &___7__FInternalGetterResolver_N_PropertyPathHelpersInternal__6B_;
        local_40 = &local_res10;
        local_38 = local_res18;
        bVar2 = PropertyPathHelpersInternal::ResolvePropertyPath
                          (pUVar3,(FCachedPropertyPath *)this,&local_48);
      }
      if (bVar2 != false) {
        *(float *)param_3 = (float)local_res10;
        return;
      }
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

