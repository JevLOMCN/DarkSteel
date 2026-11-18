// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 147673950

UClass * __cdecl UBlueprintInstancedStructLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintInstancedStructLibrary",
               &Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintInstancedStructLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintInstancedStructLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintInstancedStructLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.InnerSingleton;
}

// UBlueprintInstancedStructLibrary @ 147688810

UBlueprintInstancedStructLibrary * __thiscall
UBlueprintInstancedStructLibrary::UBlueprintInstancedStructLibrary
          (UBlueprintInstancedStructLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintInstancedStructLibrary__6B_;
  return this;
}

// UBlueprintInstancedStructLibrary @ 147688840

UBlueprintInstancedStructLibrary * __thiscall
UBlueprintInstancedStructLibrary::UBlueprintInstancedStructLibrary
          (UBlueprintInstancedStructLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintInstancedStructLibrary__6B_;
  return this;
}

// ~UBlueprintInstancedStructLibrary @ 14768a900

void __thiscall
UBlueprintInstancedStructLibrary::~UBlueprintInstancedStructLibrary
          (UBlueprintInstancedStructLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetInstancedStructValue @ 1476b14d0

void __cdecl
UBlueprintInstancedStructLibrary::GetInstancedStructValue
          (EStructUtilsResult *param_1,FInstancedStruct *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintInstancedStructLibrary.cpp"
                     ,0x1c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 1476b4000

UClass * __cdecl UBlueprintInstancedStructLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintInstancedStructLibrary",
               &Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintInstancedStructLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintInstancedStructLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintInstancedStructLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.InnerSingleton;
}

// MakeInstancedStruct @ 1476bc5b0

FInstancedStruct * __cdecl
UBlueprintInstancedStructLibrary::MakeInstancedStruct
          (FInstancedStruct *__return_storage_ptr__,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstancedStruct *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintInstancedStructLibrary.cpp"
                     ,0xf,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstancedStruct *)(*pcVar1)();
    return pFVar3;
  }
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetInstancedStructValue @ 1476c7fe0

void __cdecl
UBlueprintInstancedStructLibrary::SetInstancedStructValue(FInstancedStruct *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintInstancedStructLibrary.cpp"
                     ,0x16,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StaticRegisterNativesUBlueprintInstancedStructLibrary @ 1476ca260

void __cdecl
UBlueprintInstancedStructLibrary::StaticRegisterNativesUBlueprintInstancedStructLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintInstancedStructLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEqualEqual_InstancedStruct @ 1476d00c0

void __cdecl
UBlueprintInstancedStructLibrary::execEqualEqual_InstancedStruct
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FInstancedStruct *pFVar3;
  FInstancedStruct *this;
  FInstancedStruct local_28;
  FInstancedStruct local_18;
  
  FInstancedStruct::FInstancedStruct(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    this = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FInstancedStruct::FInstancedStruct(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar3 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FInstancedStruct::Identical(this,pFVar3,0);
  *(bool *)param_3 = bVar2;
  FInstancedStruct::Reset(&local_28);
  FInstancedStruct::Reset(&local_18);
  return;
}

// execGetInstancedStructValue @ 1476d08b0

void __cdecl
UBlueprintInstancedStructLibrary::execGetInstancedStructValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FInstancedStruct *pFVar3;
  FProperty *pFVar4;
  uchar *puVar5;
  UScriptStruct *pUVar6;
  UScriptStruct *this;
  code *pcVar7;
  bool bVar8;
  FText *pFVar9;
  uchar *puVar10;
  FInstancedStruct *pFVar11;
  uchar local_res10 [8];
  undefined1 local_res20 [8];
  FInstancedStruct local_68;
  FText local_58;
  FBlueprintExceptionInfo local_48;
  
  local_res10[0] = '\0';
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  FInstancedStruct::FInstancedStruct(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar3 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pFVar11 = &local_68;
  if (pFVar3 != (FInstancedStruct *)0x0) {
    pFVar11 = pFVar3;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar4 = param_2->MostRecentProperty;
  if ((pFVar4 == (FProperty *)0x0) || ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    *puVar10 = '\x01';
  }
  else {
    puVar5 = param_2->MostRecentPropertyAddress;
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    *puVar10 = '\x01';
    if (puVar5 != (uchar *)0x0) {
      if (((pFVar11->StructMemory != (uchar *)0x0) &&
          (pUVar6 = (pFVar11->ScriptStruct).field0_0x0.DebugPtr, pUVar6 != (UScriptStruct *)0x0)) &&
         (this = (UScriptStruct *)pFVar4[1]._padding_, this != (UScriptStruct *)0x0)) {
        iVar2 = (int)this->_padding_;
        if (((int)pUVar6->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
            &this->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          UScriptStruct::CopyScriptStruct(this,puVar5,pFVar11->StructMemory,1);
          *puVar10 = '\0';
        }
      }
      goto LAB_1476d0b11;
    }
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UBlueprintInstancedStructLibrary",
                      L"InstancedStruct_GetInvalidValueWarning",
                      L"Failed to resolve the Value for Get Instanced Struct Value");
  local_48.EventType = AbortExecution;
  local_48.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar9->TextData).Reference;
  if (local_48.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_48.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_48.Description.field0_0x0.TypedValue.TextData.Reference,local_res20);
  }
  local_48.Description.field0_0x0.TypedValue.Flags = pFVar9->Flags;
  if (local_48.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_48);
  if (local_48.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_48.Description.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
LAB_1476d0b11:
  FInstancedStruct::Reset(&local_68);
  return;
}

// execIsInstancedStructValid @ 1476d1160

void __cdecl
UBlueprintInstancedStructLibrary::execIsInstancedStructValid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FInstancedStruct *pFVar3;
  FInstancedStruct local_18;
  
  FInstancedStruct::FInstancedStruct(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar3 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar3->StructMemory == (uchar *)0x0) ||
     ((pFVar3->ScriptStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)param_3 = uVar2;
  FInstancedStruct::Reset(&local_18);
  return;
}

// execIsValid_InstancedStruct @ 1476d1440

void __cdecl
UBlueprintInstancedStructLibrary::execIsValid_InstancedStruct
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FInstancedStruct *pFVar3;
  FInstancedStruct local_18;
  
  FInstancedStruct::FInstancedStruct(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar3 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar3->StructMemory == (uchar *)0x0) ||
     ((pFVar3->ScriptStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  FInstancedStruct::Reset(&local_18);
  return;
}

// execMakeInstancedStruct @ 1476d1500

void __cdecl
UBlueprintInstancedStructLibrary::execMakeInstancedStruct
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 local_res10 [8];
  FText local_38;
  FBlueprintExceptionInfo local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
      FInstancedStruct::InitializeAs
                (param_3,(UScriptStruct *)pFVar1[1]._padding_,param_2->MostRecentPropertyAddress);
      return;
    }
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UBlueprintInstancedStructLibrary",
                      L"InstancedStruct_MakeInvalidValueWarning",
                      L"Failed to resolve the Value for Make Instanced Struct");
  local_28.EventType = AbortExecution;
  local_28.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar4->TextData).Reference;
  if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_28.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
  }
  local_28.Description.field0_0x0.TypedValue.Flags = pFVar4->Flags;
  if ((local_28.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_28);
  FInstancedStruct::Reset(param_3);
  if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
  return;
}

// execNotEqual_InstancedStruct @ 1476d2b80

void __cdecl
UBlueprintInstancedStructLibrary::execNotEqual_InstancedStruct
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FInstancedStruct *pFVar3;
  FInstancedStruct *this;
  FInstancedStruct local_28;
  FInstancedStruct local_18;
  
  FInstancedStruct::FInstancedStruct(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    this = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FInstancedStruct::FInstancedStruct(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar3 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FInstancedStruct::Identical(this,pFVar3,0);
  *(bool *)param_3 = !bVar2;
  FInstancedStruct::Reset(&local_28);
  FInstancedStruct::Reset(&local_18);
  return;
}

// execReset @ 1476d3380

void __cdecl
UBlueprintInstancedStructLibrary::execReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInstancedStruct *this;
  UScriptStruct *local_res10;
  FInstancedStruct local_18;
  
  FInstancedStruct::FInstancedStruct(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UScriptStruct *)0x0;
  this = &local_18;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    this = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedStruct::InitializeAs(this,local_res10,(uchar *)0x0);
  FInstancedStruct::Reset(&local_18);
  return;
}

// execSetInstancedStructValue @ 1476d3c40

void __cdecl
UBlueprintInstancedStructLibrary::execSetInstancedStructValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FInstancedStruct *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FInstancedStruct *this;
  undefined1 local_res10 [8];
  FInstancedStruct local_58;
  FText local_48;
  FBlueprintExceptionInfo local_38;
  
  FInstancedStruct::FInstancedStruct(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar1 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_58;
  if (pFVar1 != (FInstancedStruct *)0x0) {
    this = pFVar1;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = param_2->MostRecentProperty;
  if ((pFVar2 == (FProperty *)0x0) || ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
      FInstancedStruct::InitializeAs
                (this,(UScriptStruct *)pFVar2[1]._padding_,param_2->MostRecentPropertyAddress);
      goto LAB_1476d3e01;
    }
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UBlueprintInstancedStructLibrary",
                      L"InstancedStruct_SetInvalidValueWarning",
                      L"Failed to resolve the Value for Set Instanced Struct Value");
  local_38.EventType = AbortExecution;
  local_38.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar5->TextData).Reference;
  if (local_38.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_38.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_38.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
  }
  local_38.Description.field0_0x0.TypedValue.Flags = pFVar5->Flags;
  if (local_38.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_38);
  FInstancedStruct::Reset(this);
  if (local_38.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_38.Description.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
LAB_1476d3e01:
  FInstancedStruct::Reset(&local_58);
  return;
}

