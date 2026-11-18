// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147676e30

UClass * __cdecl UCameraLensEffectInterfaceClassSupportLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraLensEffectInterfaceClassSupportLibrary",
               &Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.
                InnerSingleton,StaticRegisterNativesUCameraLensEffectInterfaceClassSupportLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraLensEffectInterfaceClassSupportLibrary>,
               InternalVTableHelperCtorCaller<UCameraLensEffectInterfaceClassSupportLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.InnerSingleton;
}

// UCameraLensEffectInterfaceClassSupportLibrary @ 147688d70

UCameraLensEffectInterfaceClassSupportLibrary * __thiscall
UCameraLensEffectInterfaceClassSupportLibrary::UCameraLensEffectInterfaceClassSupportLibrary
          (UCameraLensEffectInterfaceClassSupportLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraLensEffectInterfaceClassSupportLibrary__6B_;
  return this;
}

// UCameraLensEffectInterfaceClassSupportLibrary @ 147688da0

UCameraLensEffectInterfaceClassSupportLibrary * __thiscall
UCameraLensEffectInterfaceClassSupportLibrary::UCameraLensEffectInterfaceClassSupportLibrary
          (UCameraLensEffectInterfaceClassSupportLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraLensEffectInterfaceClassSupportLibrary__6B_;
  return this;
}

// ~UCameraLensEffectInterfaceClassSupportLibrary @ 14768aab0

void __thiscall
UCameraLensEffectInterfaceClassSupportLibrary::~UCameraLensEffectInterfaceClassSupportLibrary
          (UCameraLensEffectInterfaceClassSupportLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetInterfaceClass @ 1476b1510

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSubclassOf<AActor> __cdecl
UCameraLensEffectInterfaceClassSupportLibrary::GetInterfaceClass
          (FCameraLensInterfaceClassSupport *param_1)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  longlong lVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName *pFVar10;
  FString *pFVar11;
  FMessageLog *this;
  wchar_t *pwVar12;
  longlong *in_RDX;
  FName local_res10;
  FText local_88;
  FString local_78;
  TSharedRef<FTokenizedMessage,1> local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  lVar6 = *in_RDX;
  if ((lVar6 != 0) && (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar6 = *in_RDX, lVar6 != 0)) {
      pUVar4 = Z_Construct_UClass_AActor_NoRegister();
      if (pUVar4 == (UClass *)0x0) {
LAB_1476b15a1:
        pUVar4 = (UClass *)0x0;
      }
      else {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar6 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1476b15a1;
        pUVar4 = (UClass *)*in_RDX;
      }
      pUVar5 = UCameraLensEffectInterface::StaticClass();
      bVar3 = UClass::ImplementsInterface(pUVar4,pUVar5);
      if (bVar3) {
        pUVar4 = (UClass *)*in_RDX;
        (param_1->Class).Class.field0_0x0.DebugPtr = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          return (TSubclassOf<AActor>)(TObjectPtr<UClass>)param_1;
        }
        if (pUVar4 == (UClass *)0x0) {
          return (TSubclassOf<AActor>)(TObjectPtr<UClass>)param_1;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar4);
        return (TSubclassOf<AActor>)(TObjectPtr<UClass>)param_1;
      }
    }
  }
  lVar6 = *in_RDX;
  if ((lVar6 == 0) || (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 == (UClass *)0x0))
  goto LAB_1476b1787;
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((!bVar3) || (lVar6 = *in_RDX, lVar6 == 0)) goto LAB_1476b1787;
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar4 == (UClass *)0x0) {
LAB_1476b165e:
    lVar6 = 0;
  }
  else {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1476b165e;
    lVar6 = *in_RDX;
  }
  local_res10 = *(FName *)(lVar6 + 0x18);
  ::FName::ToString(&local_res10,&local_78);
  pFVar7 = FText::FromString(&local_58,&local_78);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_68,L"CameraLensEffectInterfaceClassSupportLibrary",
                      L"GetInterfaceClass_ClassSetWithoutInterface",
                      L"{0} found within wrapper passed to UCameraLensEffectInterfaceClassSupportLibrary::GetInterfaceClass, but does not implement CameraLensEffectInterface!"
                     );
  pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
  FText::Format<FText>(&local_88,pFVar9,pFVar7);
  if (local_68.Object != (FTokenizedMessage *)0x0) {
    (**(code **)((local_68.Object)->_padding_ + 0x10))();
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar10 = ::FName::FName(&local_res10,
                           L"CameraLensEffectInterfaceClassSupportLibraryxxGetInterfaceClass_ClassSetWithoutInterface"
                          );
  FVar2 = *pFVar10;
  pFVar11 = FText::ToString(&local_88);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage(pwVar12,Error,FVar2);
  ::FName::FName(&local_res10,"PIE");
  this = FMessageLog::FMessageLog(&local_38,&local_res10);
  FMessageLog::Error(this,&local_68,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  FMessageLog::~FMessageLog(&local_38);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
LAB_1476b1787:
  (param_1->Class).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return (TSubclassOf<AActor>)(TObjectPtr<UClass>)param_1;
}

// GetPrivateStaticClass @ 1476b4530

UClass * __cdecl UCameraLensEffectInterfaceClassSupportLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraLensEffectInterfaceClassSupportLibrary",
               &Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.
                InnerSingleton,StaticRegisterNativesUCameraLensEffectInterfaceClassSupportLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraLensEffectInterfaceClassSupportLibrary>,
               InternalVTableHelperCtorCaller<UCameraLensEffectInterfaceClassSupportLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.InnerSingleton;
}

// IsInterfaceClassValid @ 1476bab10

void __cdecl
UCameraLensEffectInterfaceClassSupportLibrary::IsInterfaceClassValid
          (FCameraLensInterfaceClassSupport *param_1,EInterfaceValidResult *param_2)

{
  TObjectPtr<UClass>_u_0 local_res10 [3];
  
  GetInterfaceClass((FCameraLensInterfaceClassSupport *)&local_res10[0].ObjectPtr);
  if (local_res10[0].DebugPtr != (UClass *)0x0) {
    Z_Construct_UClass_AActor_NoRegister();
  }
  *param_2 = Invalid;
  return;
}

// IsInterfaceValid @ 1476bab50

void __cdecl
UCameraLensEffectInterfaceClassSupportLibrary::IsInterfaceValid
          (TScriptInterface<ICameraLensEffectInterface> *param_1,EInterfaceValidResult *param_2)

{
  *param_2 = Invalid;
  return;
}

// SetInterfaceClass @ 1476c83a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCameraLensEffectInterfaceClassSupportLibrary::SetInterfaceClass
          (TSubclassOf<AActor> param_1,FCameraLensInterfaceClassSupport *param_2,
          EInterfaceValidResult *param_3)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName *pFVar10;
  FString *pFVar11;
  FMessageLog *this;
  wchar_t *pwVar12;
  FName local_res8;
  FString local_88;
  FText local_78;
  TSharedRef<FTokenizedMessage,1> local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 != 0)) {
      pUVar5 = Z_Construct_UClass_AActor_NoRegister();
      if (pUVar5 == (UClass *)0x0) {
LAB_1476c843a:
        pUVar5 = (UClass *)0x0;
      }
      else {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_1476c843a;
        pUVar5 = *(UClass **)param_1.Class.field0_0x0;
      }
      pUVar6 = UCameraLensEffectInterface::StaticClass();
      bVar4 = UClass::ImplementsInterface(pUVar5,pUVar6);
      if (bVar4) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
        }
        (param_2->Class).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
        *param_3 = Valid;
        return;
      }
    }
  }
  *param_3 = Invalid;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
      local_res8 = *(FName *)(*(longlong *)param_1.Class.field0_0x0 + 0x18);
      ::FName::ToString(&local_res8,&local_88);
      goto LAB_1476c852c;
    }
  }
  ::FString::FString(&local_88,L"None");
LAB_1476c852c:
  pFVar7 = FText::FromString(&local_58,&local_88);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_68,L"CameraLensEffectInterfaceClassSupportLibrary",
                      L"SetInterfaceClass_ClassSetWithoutInterface",
                      L"{0} passed to UCameraLensEffectInterfaceClassSupportLibrary::SetInterfaceClass, but does not implement CameraLensEffectInterface!"
                     );
  pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
  FText::Format<FText>(&local_78,pFVar9,pFVar7);
  if (local_68.Object != (FTokenizedMessage *)0x0) {
    (**(code **)((local_68.Object)->_padding_ + 0x10))();
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar10 = ::FName::FName(&local_res8,
                           L"CameraLensEffectInterfaceClassSupportLibraryxxSetInterfaceClass_ClassSetWithoutInterface"
                          );
  FVar3 = *pFVar10;
  pFVar11 = FText::ToString(&local_78);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage(pwVar12,Error,FVar3);
  ::FName::FName(&local_res8,"PIE");
  this = FMessageLog::FMessageLog(&local_38,&local_res8);
  FMessageLog::Error(this,&local_68,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  FMessageLog::~FMessageLog(&local_38);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return;
}

// StaticRegisterNativesUCameraLensEffectInterfaceClassSupportLibrary @ 1476ca3c0

void __cdecl
UCameraLensEffectInterfaceClassSupportLibrary::
StaticRegisterNativesUCameraLensEffectInterfaceClassSupportLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetInterfaceClass @ 1476d0b40

void __cdecl
UCameraLensEffectInterfaceClassSupportLibrary::execGetInterfaceClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TSubclassOf<AActor> TVar2;
  undefined8 local_res10;
  FCameraLensInterfaceClassSupport local_res18;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar2 = GetInterfaceClass(&local_res18);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (*(UObject **)TVar2.Class.field0_0x0 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(*(UObject **)TVar2.Class.field0_0x0);
      *(undefined8 *)param_3 = *(undefined8 *)TVar2.Class.field0_0x0;
      return;
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  *(undefined8 *)param_3 = *(undefined8 *)TVar2.Class.field0_0x0;
  return;
}

// execIsInterfaceClassValid @ 1476d1220

void __cdecl
UCameraLensEffectInterfaceClassSupportLibrary::execIsInterfaceClassValid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [8];
  undefined8 local_res20;
  TObjectPtr<UClass>_u_0 local_28 [2];
  
  local_res20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetInterfaceClass((FCameraLensInterfaceClassSupport *)&local_28[0].ObjectPtr);
  if (local_28[0].DebugPtr != (UClass *)0x0) {
    Z_Construct_UClass_AActor_NoRegister();
  }
  *puVar2 = '\x01';
  return;
}

// execIsInterfaceValid @ 1476d1330

void __cdecl
UCameraLensEffectInterfaceClassSupportLibrary::execIsInterfaceValid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [24];
  undefined8 local_18;
  undefined8 uStack_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18 = 0;
  uStack_10 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar2 = '\x01';
  return;
}

// execSetInterfaceClass @ 1476d3e30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCameraLensEffectInterfaceClassSupportLibrary::execSetInterfaceClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  FName FVar4;
  UClass *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  FName *pFVar12;
  FString *pFVar13;
  FMessageLog *this;
  wchar_t *pwVar14;
  uchar *puVar15;
  uchar *puVar16;
  uchar local_res10 [16];
  uchar local_res20 [8];
  FName local_b8;
  UClass *local_b0;
  FString local_a8;
  FText local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FTextFormat local_68;
  FMessageLog local_58;
  
  local_b0 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar15 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar16 = local_res20;
  if (puVar15 != (uchar *)0x0) {
    puVar16 = puVar15;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_b0;
  puVar15 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_b0 != (UClass *)0x0) goto LAB_1476d3f51;
LAB_1476d3fe9:
    *puVar15 = '\x01';
    if (pUVar5 == (UClass *)0x0) {
      return;
    }
  }
  else {
    if (local_b0 == (UClass *)0x0) goto LAB_1476d3fe9;
    UE::GC::MarkAsReachable((UObject *)local_b0);
LAB_1476d3f51:
    pUVar7 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar7 == (UClass *)0x0) goto LAB_1476d3fe9;
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1476d3fe9;
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    pUVar7 = (UClass *)0x0;
    if (pUVar8 != (UClass *)0x0) {
      iVar2 = (int)pUVar8->_padding_;
      if (((int)pUVar5->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        pUVar7 = pUVar5;
      }
    }
    pUVar8 = UCameraLensEffectInterface::StaticClass();
    bVar6 = UClass::ImplementsInterface(pUVar7,pUVar8);
    if (bVar6) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      *(UClass **)puVar16 = pUVar5;
      *puVar15 = '\0';
      return;
    }
    *puVar15 = '\x01';
  }
  pUVar7 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  iVar2 = (int)pUVar7->_padding_;
  if (((int)pUVar5->_padding_ < iVar2) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_))
  {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar7 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar7 != (UClass *)0x0) {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      local_b8 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_b8,&local_a8);
      goto LAB_1476d4080;
    }
  }
  ::FString::FString(&local_a8,L"None");
LAB_1476d4080:
  pFVar9 = FText::FromString(&local_78,&local_a8);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_88,L"CameraLensEffectInterfaceClassSupportLibrary",
                       L"SetInterfaceClass_ClassSetWithoutInterface",
                       L"{0} passed to UCameraLensEffectInterfaceClassSupportLibrary::SetInterfaceClass, but does not implement CameraLensEffectInterface!"
                      );
  pFVar11 = FTextFormat::FTextFormat(&local_68,pFVar10,Default);
  FText::Format<FText>(&local_98,pFVar11,pFVar9);
  if (local_88.Object != (FTokenizedMessage *)0x0) {
    (**(code **)((local_88.Object)->_padding_ + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar12 = ::FName::FName(&local_b8,
                           L"CameraLensEffectInterfaceClassSupportLibraryxxSetInterfaceClass_ClassSetWithoutInterface"
                          );
  FVar4 = *pFVar12;
  pFVar13 = FText::ToString(&local_98);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage(pwVar14,Error,FVar4);
  ::FName::FName(&local_b8,"PIE");
  this = FMessageLog::FMessageLog(&local_58,&local_b8);
  FMessageLog::Error(this,&local_88,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  FMessageLog::~FMessageLog(&local_58);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return;
}

