// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// StaticStruct @ 14defe050

UScriptStruct * __cdecl FIKRetargetOpSettingsBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase,(UObject *)pUVar1,
                         L"IKRetargetOpSettingsBase");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton;
}

// PostLoad @ 14defe090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FIKRetargetOpSettingsBase::PostLoad(FIKRetargetOpSettingsBase *this,Type param_1)

{
  return;
}

// ~FIKRetargetOpSettingsBase @ 14df1bb40

void __thiscall
FIKRetargetOpSettingsBase::~FIKRetargetOpSettingsBase(FIKRetargetOpSettingsBase *this)

{
  UObject *pUVar1;
  
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar1 = (this->Controller).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Controller).Object = (UObject *)0x0;
  }
  return;
}

// operator= @ 14df1da40

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetOpSettingsBase::operator=
          (FIKRetargetOpSettingsBase *this,FIKRetargetOpSettingsBase *param_1)

{
  UObjectBase *this_00;
  UObjectBase *pUVar1;
  
  this->LODThreshold = param_1->LODThreshold;
  this->bDebugDraw = param_1->bDebugDraw;
  this_00 = (UObjectBase *)(param_1->Controller).Object;
  pUVar1 = (UObjectBase *)(this->Controller).Object;
  if (this_00 == (UObjectBase *)0x0) {
    if (pUVar1 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
      (this->Controller).Object = (UObject *)0x0;
    }
  }
  else if (pUVar1 != this_00) {
    if (pUVar1 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
    }
    UObjectBase::AddRef(this_00);
    (this->Controller).Object = (UObject *)this_00;
    return this;
  }
  return this;
}

// CopySettingsAtRuntime @ 14df2dcc0

void __thiscall
FIKRetargetOpSettingsBase::CopySettingsAtRuntime
          (FIKRetargetOpSettingsBase *this,FIKRetargetOpSettingsBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Retargeter\\IKRetargetOps.h"
                     ,0x3b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CreateControllerIfNeeded @ 14df2e8a0

UIKRetargetOpControllerBase * __thiscall
FIKRetargetOpSettingsBase::CreateControllerIfNeeded
          (FIKRetargetOpSettingsBase *this,UObject *param_1)

{
  TStrongObjectPtr<UIKRetargetOpControllerBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UIKRetargetOpControllerBase *this_00;
  UIKRetargetOpControllerBase *pUVar7;
  longlong local_28 [2];
  
  pTVar1 = &this->Controller;
  if ((this->Controller).Object == (UObject *)0x0) {
    pUVar5 = (UClass *)(**(code **)(this->_padding_ + 0x18))();
    if ((pUVar5 != (UClass *)0x0) &&
       (pUVar6 = UIKRetargetOpControllerBase::StaticClass(), pUVar6 != (UClass *)0x0)) {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        this_00 = NewObject<UIKRetargetOpControllerBase>
                            (param_1,pUVar5,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        pUVar7 = (UIKRetargetOpControllerBase *)0x0;
        if (this_00 != (UIKRetargetOpControllerBase *)0x0) {
          UObjectBase::AddRef((UObjectBase *)this_00);
          pUVar7 = this_00;
        }
        if (pTVar1 == (TStrongObjectPtr<UIKRetargetOpControllerBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                       *)local_28) {
          if (pUVar7 != (UIKRetargetOpControllerBase *)0x0) {
            UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar7);
          }
        }
        else {
          if (pTVar1->Object != (UObject *)0x0) {
            UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
          }
          pTVar1->Object = (UObject *)pUVar7;
        }
        if ((pTVar1->Object == (UObject *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                               ,0x67,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar7 = (UIKRetargetOpControllerBase *)(*pcVar3)();
          return pUVar7;
        }
        *(FIKRetargetOpSettingsBase **)(pTVar1->Object + 1) = this;
        goto LAB_14df2e9e9;
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3592057878959095832>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetOps.cpp"
                       ,0x18,
                       "ClassType && ClassType->IsChildOf(UIKRetargetOpControllerBase::StaticClass())"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UIKRetargetOpControllerBase *)(*pcVar3)();
      return pUVar7;
    }
  }
LAB_14df2e9e9:
  return (UIKRetargetOpControllerBase *)pTVar1->Object;
}

// GetController @ 14df37bf0

UIKRetargetOpControllerBase * __thiscall
FIKRetargetOpSettingsBase::GetController(FIKRetargetOpSettingsBase *this,UObject *param_1)

{
  TStrongObjectPtr<UIKRetargetOpControllerBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UIKRetargetOpControllerBase *this_00;
  UIKRetargetOpControllerBase *pUVar7;
  longlong local_28 [2];
  
  pTVar1 = &this->Controller;
  if ((this->Controller).Object == (UObject *)0x0) {
    pUVar5 = (UClass *)(**(code **)(this->_padding_ + 0x18))();
    if ((pUVar5 != (UClass *)0x0) &&
       (pUVar6 = UIKRetargetOpControllerBase::StaticClass(), pUVar6 != (UClass *)0x0)) {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        this_00 = NewObject<UIKRetargetOpControllerBase>
                            (param_1,pUVar5,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        pUVar7 = (UIKRetargetOpControllerBase *)0x0;
        if (this_00 != (UIKRetargetOpControllerBase *)0x0) {
          UObjectBase::AddRef((UObjectBase *)this_00);
          pUVar7 = this_00;
        }
        if (pTVar1 == (TStrongObjectPtr<UIKRetargetOpControllerBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                       *)local_28) {
          if (pUVar7 != (UIKRetargetOpControllerBase *)0x0) {
            UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar7);
          }
        }
        else {
          if (pTVar1->Object != (UObject *)0x0) {
            UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
          }
          pTVar1->Object = (UObject *)pUVar7;
        }
        if ((pTVar1->Object == (UObject *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                               ,0x67,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar7 = (UIKRetargetOpControllerBase *)(*pcVar3)();
          return pUVar7;
        }
        *(FIKRetargetOpSettingsBase **)(pTVar1->Object + 1) = this;
        goto LAB_14df37d39;
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3592057878959095832>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetOps.cpp"
                       ,0x18,
                       "ClassType && ClassType->IsChildOf(UIKRetargetOpControllerBase::StaticClass())"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UIKRetargetOpControllerBase *)(*pcVar3)();
      return pUVar7;
    }
  }
LAB_14df37d39:
  return (UIKRetargetOpControllerBase *)pTVar1->Object;
}

// GetControllerType @ 14df37dc0

UClass * __thiscall FIKRetargetOpSettingsBase::GetControllerType(FIKRetargetOpSettingsBase *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetOpControllerBase",
               &Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton,
               UIKRetargetOpControllerBase::StaticRegisterNativesUIKRetargetOpControllerBase,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetOpControllerBase>,
               InternalVTableHelperCtorCaller<UIKRetargetOpControllerBase>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetOpControllerBase.InnerSingleton;
}

