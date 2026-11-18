// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 7

// StaticClass @ 146d62d10

UClass * __cdecl UNavAreaMeta_SwitchByAgent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavAreaMeta_SwitchByAgent",
               &Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.InnerSingleton,
               StaticRegisterNativesUNavAreaMeta_SwitchByAgent,200,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavAreaMeta_SwitchByAgent>,
               InternalVTableHelperCtorCaller<UNavAreaMeta_SwitchByAgent>,local_res8,
               UNavAreaMeta::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.InnerSingleton;
}

// UNavAreaMeta_SwitchByAgent @ 146d75a10

UNavAreaMeta_SwitchByAgent * __thiscall
UNavAreaMeta_SwitchByAgent::UNavAreaMeta_SwitchByAgent
          (UNavAreaMeta_SwitchByAgent *this,FVTableHelper *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector
            ((FNavAgentSelector *)((longlong)&this->_padding_ + 4),0x7fffffff);
  this->_padding_ = (longlong)&___7UNavAreaMeta_SwitchByAgent__6B_;
  (this->Agent0Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent1Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent2Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent3Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent4Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent5Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent6Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent7Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent8Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent9Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent10Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent11Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent12Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent13Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent14Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent15Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UNavAreaMeta_SwitchByAgent @ 146d75ab0

UNavAreaMeta_SwitchByAgent * __thiscall
UNavAreaMeta_SwitchByAgent::UNavAreaMeta_SwitchByAgent
          (UNavAreaMeta_SwitchByAgent *this,FObjectInitializer *param_1)

{
  FColor FVar1;
  UClass *pUVar2;
  
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector
            ((FNavAgentSelector *)((longlong)&this->_padding_ + 4),0x7fffffff);
  this->_padding_ = 0x3f800000;
  FVar1 = FColor::Magenta;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FVar1.field0_0x0;
  this->_padding_ = (longlong)&___7UNavAreaMeta_SwitchByAgent__6B_;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 1;
  (this->Agent0Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent1Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent2Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent3Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent4Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent5Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent6Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent7Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent8Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent9Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent10Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent11Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent12Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent13Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent14Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Agent15Area).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent0Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent1Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent2Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent3Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent4Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent5Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent6Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent7Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent8Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent9Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent10Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent11Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent12Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent13Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent14Area).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UNavArea_Default::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Agent15Area).Class.field0_0x0.DebugPtr = pUVar2;
  return this;
}

// ~UNavAreaMeta_SwitchByAgent @ 146d78bf0

void __thiscall
UNavAreaMeta_SwitchByAgent::~UNavAreaMeta_SwitchByAgent(UNavAreaMeta_SwitchByAgent *this)

{
  this->_padding_ = (longlong)&___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  return;
}

// GetPrivateStaticClass @ 146da01f0

UClass * __cdecl UNavAreaMeta_SwitchByAgent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavAreaMeta_SwitchByAgent",
               &Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.InnerSingleton,
               StaticRegisterNativesUNavAreaMeta_SwitchByAgent,200,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavAreaMeta_SwitchByAgent>,
               InternalVTableHelperCtorCaller<UNavAreaMeta_SwitchByAgent>,local_res8,
               UNavAreaMeta::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.InnerSingleton;
}

// PickAreaClassForAgent @ 146dab820

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
UNavAreaMeta_SwitchByAgent::PickAreaClassForAgent
          (UNavAreaMeta_SwitchByAgent *this,AActor *param_1,FNavAgentProperties *param_2)

{
  UNavigationSystemV1 *this_00;
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  TSubclassOf<UNavAreaBase> TVar5;
  FNavAgentProperties *in_R9;
  
  pUVar3 = UNavigationSystemV1::GetPrivateStaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  this_00 = (UNavigationSystemV1 *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    iVar2 = UNavigationSystemV1::GetSupportedAgentIndex(this_00,in_R9);
    switch(iVar2) {
    case 0:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent0Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent0Area).Class.field0_0x0.DebugPtr;
      break;
    case 1:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent1Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent1Area).Class.field0_0x0.DebugPtr;
      break;
    case 2:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent2Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent2Area).Class.field0_0x0.DebugPtr;
      break;
    case 3:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent3Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent3Area).Class.field0_0x0.DebugPtr;
      break;
    case 4:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent4Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent4Area).Class.field0_0x0.DebugPtr;
      break;
    case 5:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent5Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent5Area).Class.field0_0x0.DebugPtr;
      break;
    case 6:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent6Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent6Area).Class.field0_0x0.DebugPtr;
      break;
    case 7:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent7Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent7Area).Class.field0_0x0.DebugPtr;
      break;
    case 8:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent8Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent8Area).Class.field0_0x0.DebugPtr;
      break;
    case 9:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent9Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent9Area).Class.field0_0x0.DebugPtr;
      break;
    case 10:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent10Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent10Area).Class.field0_0x0.DebugPtr;
      break;
    case 0xb:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent11Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent11Area).Class.field0_0x0.DebugPtr;
      break;
    case 0xc:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent12Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent12Area).Class.field0_0x0.DebugPtr;
      break;
    case 0xd:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent13Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent13Area).Class.field0_0x0.DebugPtr;
      break;
    case 0xe:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent14Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent14Area).Class.field0_0x0.DebugPtr;
      break;
    case 0xf:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->Agent15Area).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (this->Agent15Area).Class.field0_0x0.DebugPtr;
      break;
    default:
      goto switchD_146dab88b_default;
    }
    if ((pUVar3 != (UClass *)0x0) && (pUVar4 = UNavArea::StaticClass(), pUVar4 != (UClass *)0x0)) {
      iVar2 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar4->_padding_)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        goto LAB_146dabb08;
      }
    }
  }
switchD_146dab88b_default:
  TVar5 = FNavigationSystem::GetDefaultWalkableArea();
  pUVar3 = *(UClass **)TVar5.Class.field0_0x0;
LAB_146dabb08:
  param_1->_padding_ = (longlong)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return (TSubclassOf<UNavAreaBase>)(TObjectPtr<UClass>)param_1;
}

// StaticRegisterNativesUNavAreaMeta_SwitchByAgent @ 146dba930

void __cdecl UNavAreaMeta_SwitchByAgent::StaticRegisterNativesUNavAreaMeta_SwitchByAgent(void)

{
  return;
}

