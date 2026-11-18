// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146f13df0

UClass * __cdecl UEnvQueryItemType_VectorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_VectorBase",
               &Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType_VectorBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryItemType_VectorBase>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_VectorBase>,local_res8,
               UEnvQueryItemType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.InnerSingleton;
}

// UEnvQueryItemType_VectorBase @ 146f2c450

UEnvQueryItemType_VectorBase * __thiscall
UEnvQueryItemType_VectorBase::UEnvQueryItemType_VectorBase
          (UEnvQueryItemType_VectorBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryItemType_VectorBase__6B_;
  return this;
}

// UEnvQueryItemType_VectorBase @ 146f2c480

UEnvQueryItemType_VectorBase * __thiscall
UEnvQueryItemType_VectorBase::UEnvQueryItemType_VectorBase
          (UEnvQueryItemType_VectorBase *this,FObjectInitializer *param_1)

{
  UEnvQueryItemType::UEnvQueryItemType((UEnvQueryItemType *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryItemType_VectorBase__6B_;
  return this;
}

// ~UEnvQueryItemType_VectorBase @ 146f2eea0

void __thiscall
UEnvQueryItemType_VectorBase::~UEnvQueryItemType_VectorBase(UEnvQueryItemType_VectorBase *this)

{
  *(undefined ***)this = &___7UEnvQueryItemType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddBlackboardFilters @ 146f34500

void __thiscall
UEnvQueryItemType_VectorBase::AddBlackboardFilters
          (UEnvQueryItemType_VectorBase *this,FBlackboardKeySelector *param_1,UObject *param_2)

{
  FBlackboardKeySelector::AddVectorFilter
            (param_1,param_2,*(FName *)(*(longlong *)&this->field_0x10 + 0x18));
  return;
}

// GetDescription @ 146f50d90

FString * __thiscall
UEnvQueryItemType_VectorBase::GetDescription
          (UEnvQueryItemType_VectorBase *this,FString *__return_storage_ptr__,uchar *param_1)

{
  undefined1 local_28 [32];
  
  (**(code **)(*(longlong *)this + 0x2c8))(this,local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"(X=%.0f,Y=%.0f,Z=%.0f)");
  return __return_storage_ptr__;
}

// GetItemLocation @ 146f56940

TVector<double> * __thiscall
UEnvQueryItemType_VectorBase::GetItemLocation
          (UEnvQueryItemType_VectorBase *this,TVector<double> *__return_storage_ptr__,uchar *param_1
          )

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetItemRotation @ 146f56be0

TRotator<double> * __thiscall
UEnvQueryItemType_VectorBase::GetItemRotation
          (UEnvQueryItemType_VectorBase *this,TRotator<double> *__return_storage_ptr__,
          uchar *param_1)

{
  double dVar1;
  
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  __return_storage_ptr__->Yaw = dVar1;
  __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58c70

UClass * __cdecl UEnvQueryItemType_VectorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_VectorBase",
               &Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType_VectorBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryItemType_VectorBase>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_VectorBase>,local_res8,
               UEnvQueryItemType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.InnerSingleton;
}

// StaticRegisterNativesUEnvQueryItemType_VectorBase @ 146f76e20

void __cdecl UEnvQueryItemType_VectorBase::StaticRegisterNativesUEnvQueryItemType_VectorBase(void)

{
  return;
}

// StoreInBlackboard @ 146f77430

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
UEnvQueryItemType_VectorBase::StoreInBlackboard
          (UEnvQueryItemType_VectorBase *this,FBlackboardKeySelector *param_1,
          UBlackboardComponent *param_2,uchar *param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  TVector<double>_u_0 local_38;
  
  pUVar7 = (param_1->SelectedKeyType).Class.field0_0x0.DebugPtr;
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
      pUVar7 = (param_1->SelectedKeyType).Class.field0_0x0.DebugPtr;
      goto LAB_146f77490;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146f77490:
  pUVar6 = Z_Construct_UClass_UBlackboardKeyType_Vector_NoRegister();
  if (pUVar7 == pUVar6) {
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
    bVar4 = false;
  }
  return bVar4;
}

