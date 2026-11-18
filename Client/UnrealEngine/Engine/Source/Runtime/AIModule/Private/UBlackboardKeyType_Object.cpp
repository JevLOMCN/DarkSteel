// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 16

// StaticClass @ 146eb05e0

UClass * __cdecl UBlackboardKeyType_Object::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Object.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Object",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Object.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Object,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Object>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Object>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Object.InnerSingleton;
}

// UBlackboardKeyType_Object @ 146ecc060

UBlackboardKeyType_Object * __thiscall
UBlackboardKeyType_Object::UBlackboardKeyType_Object
          (UBlackboardKeyType_Object *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Object__6B_;
  (this->BaseClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultValue).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UBlackboardKeyType_Object @ 146ecc0a0

UBlackboardKeyType_Object * __thiscall
UBlackboardKeyType_Object::UBlackboardKeyType_Object
          (UBlackboardKeyType_Object *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  UClass *pUVar2;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Object__6B_;
  (this->BaseClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultValue).field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined2 *)&this->_padding_ = 8;
  pUVar2 = Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->BaseClass).field0_0x0.DebugPtr = pUVar2;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~UBlackboardKeyType_Object @ 146ecde30

void __thiscall
UBlackboardKeyType_Object::~UBlackboardKeyType_Object(UBlackboardKeyType_Object *this)

{
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CompareValues @ 146ed7850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBlackboardKeyType_Object::CompareValues
          (UBlackboardKeyType_Object *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  UObject *pUVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  pUVar1 = (UObject *)0x0;
  if (param_2 != (uchar *)0x0) {
    local_res18[0] = *(FWeakObjectPtr *)param_2;
    pUVar1 = FWeakObjectPtr::Get(local_res18);
  }
  if (param_4 != (uchar *)0x0) {
    param_4 = *(uchar **)param_4;
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_4);
    return (Type)(pUVar1 != pUVar2);
  }
  return (Type)(pUVar1 != (UObject *)0x0);
}

// DescribeSelf @ 146edd4d0

FString * __thiscall
UBlackboardKeyType_Object::DescribeSelf
          (UBlackboardKeyType_Object *this,FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  pUVar1 = (this->BaseClass).field0_0x0.DebugPtr;
  if (pUVar1 == (UClass *)0x0) {
    ::FString::FString(&local_18,L"None");
  }
  else {
    local_res8[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res8,&local_18);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FString::FString(__return_storage_ptr__,(wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DescribeValue @ 146ede1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBlackboardKeyType_Object::DescribeValue
          (UBlackboardKeyType_Object *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  UObject *pUVar1;
  ForAnyElementType FVar2;
  FName local_res10 [3];
  FString local_18;
  
  if (param_2 != (uchar *)0x0) {
    local_res10[0] = *(FName *)param_2;
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_res10);
    if (pUVar1 != (UObject *)0x0) {
      local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
      local_res10[0].Number = *(uint *)&pUVar1->field_0x1c;
      ::FName::ToString(local_res10,&local_18);
      goto LAB_146ede220;
    }
  }
  ::FString::FString(&local_18,L"None");
LAB_146ede220:
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FString::FString(__return_storage_ptr__,(wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLocation @ 146ee6060

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
UBlackboardKeyType_Object::GetLocation
          (UBlackboardKeyType_Object *this,UBlackboardComponent *param_1,uchar *param_2,
          TVector<double> *param_3)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18 [2];
  double local_28;
  double dStack_20;
  double local_18;
  
  if (param_2 != (uchar *)0x0) {
    local_res18[0] = *(FWeakObjectPtr *)param_2;
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        lVar2 = *(longlong *)(pUVar3 + 0xb);
        if (lVar2 == 0) {
          local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          local_28 = *(double *)(lVar2 + 0x210);
          dStack_20 = *(double *)(lVar2 + 0x218);
          local_18 = *(double *)(lVar2 + 0x220);
        }
        (param_3->field0_0x0)._s_0.X = local_28;
        (param_3->field0_0x0)._s_0.Y = dStack_20;
        (param_3->field0_0x0)._s_0.Z = local_18;
        return true;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 146eea300

UClass * __cdecl UBlackboardKeyType_Object::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Object.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Object",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Object.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Object,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Object>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Object>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Object.InnerSingleton;
}

// GetRotation @ 146eea7d0

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
UBlackboardKeyType_Object::GetRotation
          (UBlackboardKeyType_Object *this,UBlackboardComponent *param_1,uchar *param_2,
          TRotator<double> *param_3)

{
  longlong *plVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  double *pdVar9;
  longlong extraout_RAX;
  longlong lVar10;
  TRotator<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  FWeakObjectPtr local_res18 [2];
  longlong local_48;
  TRotator<double> local_40;
  TQuat<double> local_28;
  
  if (param_2 != (uchar *)0x0) {
    local_res18[0] = *(FWeakObjectPtr *)param_2;
    pUVar7 = FWeakObjectPtr::Get(local_res18);
    if (pUVar7 != (UObject *)0x0) {
      pUVar8 = Z_Construct_UClass_AActor_NoRegister();
      iVar6 = (int)pUVar8->_padding_;
      if ((iVar6 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
          &pUVar8->_padding_)) {
        lVar10 = *(longlong *)(pUVar7 + 0xb);
        if (lVar10 == 0) {
          local_40.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          local_40.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          local_40.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        }
        else {
          local_28.X._0_4_ = *(undefined4 *)(lVar10 + 0x1f0);
          local_28.X._4_4_ = *(undefined4 *)(lVar10 + 500);
          local_28.Y._0_4_ = *(undefined4 *)(lVar10 + 0x1f8);
          local_28.Y._4_4_ = *(undefined4 *)(lVar10 + 0x1fc);
          local_28.Z._0_4_ = *(undefined4 *)(lVar10 + 0x200);
          local_28.Z._4_4_ = *(undefined4 *)(lVar10 + 0x204);
          local_28.W._0_4_ = *(undefined4 *)(lVar10 + 0x208);
          local_28.W._4_4_ = *(undefined4 *)(lVar10 + 0x20c);
          plVar1 = (longlong *)(lVar10 + 0x1e0);
          if (*plVar1 == 0) {
            pdVar9 = ::operator_new(0x40);
            dVar5 = UE::Math::TQuat<double>::Identity.Y;
            if (pdVar9 == (double *)0x0) {
              pdVar9 = (double *)0x0;
            }
            else {
              *pdVar9 = UE::Math::TQuat<double>::Identity.X;
              pdVar9[1] = dVar5;
              dVar5 = UE::Math::TQuat<double>::Identity.W;
              pdVar9[2] = UE::Math::TQuat<double>::Identity.Z;
              pdVar9[3] = dVar5;
              dVar5 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
              pdVar9[4] = UE::Math::TRotator<double>::ZeroRotator.Pitch;
              pdVar9[5] = dVar5;
              pdVar9[6] = UE::Math::TRotator<double>::ZeroRotator.Roll;
            }
            if (plVar1 != &local_48) {
              pvVar2 = (void *)*plVar1;
              *plVar1 = (longlong)pdVar9;
              pdVar9 = (double *)0x0;
              ::operator_delete(pvVar2,0x40);
            }
            ::operator_delete(pdVar9,0x40);
            iVar6 = (int)pdVar9;
            lVar10 = extraout_RAX;
          }
          pdVar9 = (double *)*plVar1;
          lVar13 = -(ulonglong)(pdVar9[3] != (double)CONCAT44(local_28.W._4_4_,local_28.W._0_4_));
          lVar14 = -(ulonglong)(pdVar9[1] != (double)CONCAT44(local_28.Y._4_4_,local_28.Y._0_4_));
          auVar3._8_4_ = (int)lVar13;
          auVar3._0_8_ = -(ulonglong)
                          (pdVar9[2] != (double)CONCAT44(local_28.Z._4_4_,local_28.Z._0_4_));
          auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
          uVar12 = movmskpd(iVar6,auVar3);
          auVar4._8_4_ = (int)lVar14;
          auVar4._0_8_ = -(ulonglong)
                          (*pdVar9 != (double)CONCAT44(local_28.X._4_4_,local_28.X._0_4_));
          auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
          iVar6 = movmskpd((int)lVar10,auVar4);
          if ((uVar12 & 0x3fffffff) != 0 || iVar6 != 0) {
            *(undefined4 *)pdVar9 = local_28.X._0_4_;
            *(undefined4 *)((longlong)pdVar9 + 4) = local_28.X._4_4_;
            *(undefined4 *)(pdVar9 + 1) = local_28.Y._0_4_;
            *(undefined4 *)((longlong)pdVar9 + 0xc) = local_28.Y._4_4_;
            pdVar9[2] = (double)CONCAT44(local_28.Z._4_4_,local_28.Z._0_4_);
            pdVar9[3] = (double)CONCAT44(local_28.W._4_4_,local_28.W._0_4_);
            pTVar11 = UE::Math::TQuat<double>::Rotator(&local_28,&local_40);
            dVar5 = pTVar11->Yaw;
            pdVar9[4] = pTVar11->Pitch;
            pdVar9[5] = dVar5;
            pdVar9[6] = pTVar11->Roll;
          }
          local_40.Pitch = pdVar9[4];
          local_40.Yaw = pdVar9[5];
          local_40.Roll = pdVar9[6];
        }
        param_3->Pitch = local_40.Pitch;
        param_3->Yaw = local_40.Yaw;
        param_3->Roll = local_40.Roll;
        return true;
      }
    }
  }
  return false;
}

// GetValue @ 146eefe00

UObject * __cdecl
UBlackboardKeyType_Object::GetValue(UBlackboardKeyType_Object *param_1,uchar *param_2)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res10 [3];
  
  if (param_2 == (uchar *)0x0) {
    return (UObject *)0x0;
  }
  local_res10[0] = *(FWeakObjectPtr *)param_2;
  pUVar1 = FWeakObjectPtr::Get(local_res10);
  return pUVar1;
}

// InitializeMemory @ 146ef30f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardKeyType_Object::InitializeMemory
          (UBlackboardKeyType_Object *this,UBlackboardComponent *param_1,uchar *param_2)

{
  SetValue(this,param_2,(this->DefaultValue).field0_0x0.DebugPtr);
  return;
}

// IsAllowedByFilter @ 146ef3760

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UBlackboardKeyType_Object::IsAllowedByFilter
          (UBlackboardKeyType_Object *this,UBlackboardKeyType *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UBlackboardKeyType *pUVar5;
  void *local_18 [2];
  
  pUVar5 = (UBlackboardKeyType *)0x0;
  if (param_1 != (UBlackboardKeyType *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_146ef37a6;
  }
  param_1 = pUVar5;
LAB_146ef37a6:
  if ((2 < (byte)LogBlackboard._0_1_) && ((this->BaseClass).field0_0x0.DebugPtr == (UClass *)0x0)) {
    if (param_1 != (UBlackboardKeyType *)0x0) {
      pUVar5 = (UBlackboardKeyType *)&DAT_00000001;
      (**(code **)(param_1->_padding_ + 0x2c8))(param_1,local_18);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlackboard);
    if ((pUVar5 != (UBlackboardKeyType *)0x0) && (local_18[0] != (void *)0x0)) {
      FMemory::Free(local_18[0]);
    }
  }
  if (param_1 != (UBlackboardKeyType *)0x0) {
    pUVar4 = (UClass *)param_1[1]._padding_;
    pUVar2 = (this->BaseClass).field0_0x0.DebugPtr;
    if (pUVar4 == pUVar2) {
      return true;
    }
    if ((pUVar2 != (UClass *)0x0) && (pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// SetValue @ 146f000a0

bool __cdecl
UBlackboardKeyType_Object::SetValue
          (UBlackboardKeyType_Object *param_1,uchar *param_2,UObject *param_3)

{
  bool bVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10,false,true);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2,false,true);
  if (bVar1 == bVar2) {
    bVar1 = FWeakObjectPtr::IsStale(&local_res10,false,true);
    bVar2 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)param_2,false,true);
    if (bVar1 == bVar2) {
      bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)param_2,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
      if (bVar1) {
        *(FWeakObjectPtr *)param_2 = local_res10;
        return false;
      }
    }
  }
  *(FWeakObjectPtr *)param_2 = local_res10;
  return true;
}

// StaticRegisterNativesUBlackboardKeyType_Object @ 146f01060

void __cdecl UBlackboardKeyType_Object::StaticRegisterNativesUBlackboardKeyType_Object(void)

{
  return;
}

// TestBasicOperation @ 146f01310

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
UBlackboardKeyType_Object::TestBasicOperation
          (UBlackboardKeyType_Object *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3
          )

{
  bool bVar1;
  FWeakObjectPtr local_res18 [2];
  
  if (param_2 == (uchar *)0x0) {
    return false;
  }
  local_res18[0] = *(FWeakObjectPtr *)param_2;
  if (param_3 == Set) {
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    return bVar1;
  }
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  return !bVar1;
}

