// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// UNavAreaBase @ 1472f1eb0

UNavAreaBase * __thiscall UNavAreaBase::UNavAreaBase(UNavAreaBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavAreaBase__6B_;
  return this;
}

// ~UNavAreaBase @ 1472f23d0

void __thiscall UNavAreaBase::~UNavAreaBase(UNavAreaBase *this)

{
  this->_padding_ = (longlong)&___7UNavAreaBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3dc0

UClass * __cdecl UNavAreaBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavAreaBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavAreaBase",
               &Z_Registration_Info_UClass_UNavAreaBase.InnerSingleton,
               StaticRegisterNativesUNavAreaBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavAreaBase>,
               InternalVTableHelperCtorCaller<UNavAreaBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavAreaBase.InnerSingleton;
}

// StaticRegisterNativesUNavAreaBase @ 1472f4490

void __cdecl UNavAreaBase::StaticRegisterNativesUNavAreaBase(void)

{
  return;
}

// UNavAreaBase @ 14737ca60

UNavAreaBase * __thiscall UNavAreaBase::UNavAreaBase(UNavAreaBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsMetaArea = '\0';
  this->_padding_ = (longlong)&___7UNavAreaBase__6B_;
  return this;
}

// PickAreaClassForAgent @ 1473aafe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSubclassOf<UNavAreaBase> __thiscall
UNavAreaBase::PickAreaClassForAgent(UNavAreaBase *this,AActor *param_1,FNavAgentProperties *param_2)

{
  UObject *pUVar1;
  char cVar2;
  FName local_res8;
  FString local_18;
  
  if ((2 < (byte)LogNavigation._0_1_) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x2b8))(), cVar2 != '\0')) {
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pUVar1 = (UObject *)this->_padding_;
  param_1->_padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TSubclassOf<UNavAreaBase>)(TObjectPtr<UClass>)param_1;
}

// PickAreaClassForAgent @ 1473ab090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSubclassOf<UNavAreaBase> __cdecl
UNavAreaBase::PickAreaClassForAgent
          (TSubclassOf<UNavAreaBase> param_1,AActor *param_2,FNavAgentProperties *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  TSubclassOf<UNavAreaBase> TVar7;
  undefined8 *puVar8;
  UObject *pUVar9;
  undefined1 local_res8 [8];
  
  lVar2 = param_2->_padding_;
  if (lVar2 != 0) {
    pUVar6 = Z_Construct_UClass_UNavAreaBase_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (lVar2 = param_2->_padding_, lVar2 != 0)) {
        pUVar6 = Z_Construct_UClass_UNavAreaBase_NoRegister();
        if (pUVar6 == (UClass *)0x0) {
LAB_1473ab12f:
          pUVar6 = (UClass *)0x0;
        }
        else {
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1473ab12f;
          pUVar6 = (UClass *)param_2->_padding_;
        }
        if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar6);
        }
        pUVar9 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar6 = Z_Construct_UClass_UNavAreaBase_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x1181,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            TVar7.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
            return (TSubclassOf<UNavAreaBase>)TVar7.Class.field0_0x0;
          }
        }
        cVar5 = (**(code **)(*(longlong *)pUVar9 + 0x2b8))(pUVar9);
        if (cVar5 != '\0') {
          puVar8 = (undefined8 *)
                   (**(code **)(*(longlong *)pUVar9 + 0x2c0))(pUVar9,local_res8,param_3);
          pUVar9 = (UObject *)*puVar8;
          goto LAB_1473ab1d8;
        }
      }
    }
  }
  pUVar9 = (UObject *)param_2->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
LAB_1473ab1d8:
  *(UObject **)param_1.Class.field0_0x0 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  return (TSubclassOf<UNavAreaBase>)(TSubclassOf<UNavAreaBase>)param_1.Class.field0_0x0;
}

