// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146f14220

UClass * __cdecl UEnvQueryItemType_ActorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_ActorBase",
               &Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType_ActorBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryItemType_ActorBase>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_ActorBase>,local_res8,
               UEnvQueryItemType_VectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.InnerSingleton;
}

// UEnvQueryItemType_ActorBase @ 146f2c330

UEnvQueryItemType_ActorBase * __thiscall
UEnvQueryItemType_ActorBase::UEnvQueryItemType_ActorBase
          (UEnvQueryItemType_ActorBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryItemType_ActorBase__6B_;
  return this;
}

// UEnvQueryItemType_ActorBase @ 146f2c360

UEnvQueryItemType_ActorBase * __thiscall
UEnvQueryItemType_ActorBase::UEnvQueryItemType_ActorBase
          (UEnvQueryItemType_ActorBase *this,FObjectInitializer *param_1)

{
  UEnvQueryItemType::UEnvQueryItemType((UEnvQueryItemType *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryItemType_ActorBase__6B_;
  return this;
}

// ~UEnvQueryItemType_ActorBase @ 146f2ee40

void __thiscall
UEnvQueryItemType_ActorBase::~UEnvQueryItemType_ActorBase(UEnvQueryItemType_ActorBase *this)

{
  *(undefined ***)this = &___7UEnvQueryItemType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddBlackboardFilters @ 146f34480

void __thiscall
UEnvQueryItemType_ActorBase::AddBlackboardFilters
          (UEnvQueryItemType_ActorBase *this,FBlackboardKeySelector *param_1,UObject *param_2)

{
  UClass *local_res8;
  
  FBlackboardKeySelector::AddVectorFilter
            (param_1,param_2,*(FName *)(*(longlong *)&this->field_0x10 + 0x18));
  local_res8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FBlackboardKeySelector::AddObjectFilter
            (param_1,param_2,*(FName *)(*(longlong *)&this->field_0x10 + 0x18),
             (TSubclassOf<UObject>)&local_res8);
  return;
}

// GetActor @ 146f4f810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
UEnvQueryItemType_ActorBase::GetActor(UEnvQueryItemType_ActorBase *this,uchar *param_1)

{
  return (AActor *)0x0;
}

// GetDescription @ 146f50cd0

FString * __thiscall
UEnvQueryItemType_ActorBase::GetDescription
          (UEnvQueryItemType_ActorBase *this,FString *__return_storage_ptr__,uchar *param_1)

{
  longlong lVar1;
  FName local_res8 [4];
  
  lVar1 = (**(code **)(*(longlong *)this + 0x2d8))(this,param_1);
  if (lVar1 == 0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  local_res8[0] = *(FName *)(lVar1 + 0x18);
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58a30

UClass * __cdecl UEnvQueryItemType_ActorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_ActorBase",
               &Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType_ActorBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryItemType_ActorBase>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_ActorBase>,local_res8,
               UEnvQueryItemType_VectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.InnerSingleton;
}

// StaticRegisterNativesUEnvQueryItemType_ActorBase @ 146f76df0

void __cdecl UEnvQueryItemType_ActorBase::StaticRegisterNativesUEnvQueryItemType_ActorBase(void)

{
  return;
}

// StoreInBlackboard @ 146f77250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UEnvQueryItemType_ActorBase::StoreInBlackboard
          (UEnvQueryItemType_ActorBase *this,FBlackboardKeySelector *param_1,
          UBlackboardComponent *param_2,uchar *param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  TVector<double>_u_0 local_38;
  
  pUVar7 = (param_1->SelectedKeyType).Class.field0_0x0.DebugPtr;
  pUVar10 = (UClass *)0x0;
  pUVar8 = pUVar10;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UBlackboardKeyType_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar8 = (param_1->SelectedKeyType).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar7 = Z_Construct_UClass_UBlackboardKeyType_Vector_NoRegister();
  if (pUVar8 == pUVar7) {
    (**(code **)(*(longlong *)this + 0x2c8))(this,&local_58,param_3);
    uVar2 = param_1->SelectedKeyID;
    if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_38._0_4_ = local_58;
    local_38._4_4_ = uStack_54;
    local_38._8_4_ = uStack_50;
    local_38._12_4_ = uStack_4c;
    local_38._s_0.Z = local_48;
    UBlackboardComponent::SetValue<UBlackboardKeyType_Vector>
              (param_2,(FKey)(ushort)uVar2,(TVector<double> *)&local_38._s_0);
    bVar4 = true;
  }
  else {
    pUVar7 = (param_1->SelectedKeyType).Class.field0_0x0.DebugPtr;
    if ((pUVar7 != (UClass *)0x0) &&
       (pUVar8 = Z_Construct_UClass_UBlackboardKeyType_NoRegister(), pUVar8 != (UClass *)0x0)) {
      iVar1 = (int)pUVar8->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar10 = (param_1->SelectedKeyType).Class.field0_0x0.DebugPtr;
      }
    }
    pUVar7 = Z_Construct_UClass_UBlackboardKeyType_Object_NoRegister();
    if (pUVar10 == pUVar7) {
      pUVar9 = (UObject *)(**(code **)(*(longlong *)this + 0x2d8))(this,param_3);
      uVar2 = param_1->SelectedKeyID;
      if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      UBlackboardComponent::SetValue<UBlackboardKeyType_Object>(param_2,(FKey)(ushort)uVar2,pUVar9);
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}

