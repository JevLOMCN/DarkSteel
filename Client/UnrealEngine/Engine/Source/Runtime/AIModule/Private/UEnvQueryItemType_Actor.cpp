// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// StaticClass @ 146f14420

UClass * __cdecl UEnvQueryItemType_Actor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Actor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_Actor",
               &Z_Registration_Info_UClass_UEnvQueryItemType_Actor.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType_Actor,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryItemType_Actor>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_Actor>,local_res8,
               UEnvQueryItemType_ActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Actor.InnerSingleton;
}

// UEnvQueryItemType_Actor @ 146f2c2d0

UEnvQueryItemType_Actor * __thiscall
UEnvQueryItemType_Actor::UEnvQueryItemType_Actor
          (UEnvQueryItemType_Actor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryItemType_Actor__6B_;
  return this;
}

// UEnvQueryItemType_Actor @ 146f2c300

UEnvQueryItemType_Actor * __thiscall
UEnvQueryItemType_Actor::UEnvQueryItemType_Actor
          (UEnvQueryItemType_Actor *this,FObjectInitializer *param_1)

{
  UEnvQueryItemType::UEnvQueryItemType((UEnvQueryItemType *)this,param_1);
  *(undefined2 *)&this->field_0x28 = 8;
  *(undefined ***)this = &___7UEnvQueryItemType_Actor__6B_;
  return this;
}

// ~UEnvQueryItemType_Actor @ 146f2ee20

void __thiscall UEnvQueryItemType_Actor::~UEnvQueryItemType_Actor(UEnvQueryItemType_Actor *this)

{
  *(undefined ***)this = &___7UEnvQueryItemType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddEditorSelectedActors @ 146f34590

void __cdecl UEnvQueryItemType_Actor::AddEditorSelectedActors(FEnvQueryContextData *param_1)

{
  return;
}

// GetActor @ 146f4f7e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UEnvQueryItemType_Actor::GetActor(UEnvQueryItemType_Actor *this,uchar *param_1)

{
  AActor *pAVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = *(FWeakObjectPtr *)param_1;
  pAVar1 = (AActor *)FWeakObjectPtr::Get(local_res10);
  return pAVar1;
}

// GetItemLocation @ 146f56870

TVector<double> * __thiscall
UEnvQueryItemType_Actor::GetItemLocation
          (UEnvQueryItemType_Actor *this,TVector<double> *__return_storage_ptr__,uchar *param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  double local_28;
  double dStack_20;
  double local_18;
  
  local_res10[0] = *(FWeakObjectPtr *)param_1;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  if (pUVar2 == (UObject *)0x0) {
    local_28 = FAISystem::InvalidLocation.field0_0x0._s_0.X;
    dStack_20 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
    local_18 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  }
  else {
    lVar1 = *(longlong *)(pUVar2 + 0xb);
    if (lVar1 == 0) {
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_28 = *(double *)(lVar1 + 0x210);
      dStack_20 = *(double *)(lVar1 + 0x218);
      local_18 = *(double *)(lVar1 + 0x220);
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetItemRotation @ 146f56a90

TRotator<double> * __thiscall
UEnvQueryItemType_Actor::GetItemRotation
          (UEnvQueryItemType_Actor *this,TRotator<double> *__return_storage_ptr__,uchar *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  UObject *pUVar4;
  FPayload *pFVar5;
  TRotator<double> *pTVar6;
  int iVar7;
  FRotationConversionCache *this_00;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  FWeakObjectPtr local_res10 [3];
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_res10[0] = *(FWeakObjectPtr *)param_1;
  pTVar6 = __return_storage_ptr__;
  pUVar4 = FWeakObjectPtr::Get(local_res10);
  uVar8 = SUB84(pTVar6,0);
  if (pUVar4 == (UObject *)0x0) {
    local_48.Pitch = FAISystem::InvalidRotation.Pitch;
    local_48.Yaw = FAISystem::InvalidRotation.Yaw;
    local_48.Roll = FAISystem::InvalidRotation.Roll;
  }
  else {
    lVar10 = *(longlong *)(pUVar4 + 0xb);
    if (lVar10 == 0) {
      local_48.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_48.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_48.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    else {
      local_28.X = *(double *)(lVar10 + 0x1f0);
      local_28.Y = *(double *)(lVar10 + 0x1f8);
      local_28.Z = *(double *)(lVar10 + 0x200);
      local_28.W = *(double *)(lVar10 + 0x208);
      this_00 = (FRotationConversionCache *)(lVar10 + 0x1e0);
      pFVar5 = FRotationConversionCache::GetOrCreatePayload(this_00);
      lVar10 = -(ulonglong)((pFVar5->CachedQuat).W != local_28.W);
      auVar1._8_4_ = (int)lVar10;
      auVar1._0_8_ = -(ulonglong)((pFVar5->CachedQuat).Z != local_28.Z);
      auVar1._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
      uVar9 = movmskpd(uVar8,auVar1);
      lVar10 = -(ulonglong)(local_28.Y != (pFVar5->CachedQuat).Y);
      auVar2._8_4_ = (int)lVar10;
      auVar2._0_8_ = -(ulonglong)(local_28.X != (pFVar5->CachedQuat).X);
      auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
      iVar7 = movmskpd((int)this_00,auVar2);
      if ((uVar9 & 0x3fffffff) != 0 || iVar7 != 0) {
        (pFVar5->CachedQuat).X = local_28.X;
        (pFVar5->CachedQuat).Y = local_28.Y;
        (pFVar5->CachedQuat).Z = local_28.Z;
        (pFVar5->CachedQuat).W = local_28.W;
        pTVar6 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
        dVar3 = pTVar6->Yaw;
        (pFVar5->CachedRotator).Pitch = pTVar6->Pitch;
        (pFVar5->CachedRotator).Yaw = dVar3;
        (pFVar5->CachedRotator).Roll = pTVar6->Roll;
      }
      local_48.Pitch = (pFVar5->CachedRotator).Pitch;
      local_48.Yaw = (pFVar5->CachedRotator).Yaw;
      local_48.Roll = (pFVar5->CachedRotator).Roll;
    }
  }
  __return_storage_ptr__->Pitch = local_48.Pitch;
  __return_storage_ptr__->Yaw = local_48.Yaw;
  __return_storage_ptr__->Roll = local_48.Roll;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58970

UClass * __cdecl UEnvQueryItemType_Actor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Actor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_Actor",
               &Z_Registration_Info_UClass_UEnvQueryItemType_Actor.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType_Actor,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryItemType_Actor>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_Actor>,local_res8,
               UEnvQueryItemType_ActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Actor.InnerSingleton;
}

// GetValue @ 146f5aac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl UEnvQueryItemType_Actor::GetValue(uchar *param_1)

{
  AActor *pAVar1;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = *(FWeakObjectPtr *)param_1;
  pAVar1 = (AActor *)FWeakObjectPtr::Get(local_res8);
  return pAVar1;
}

// SetContextHelper @ 146f73b90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UEnvQueryItemType_Actor::SetContextHelper
          (FEnvQueryContextData *param_1,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  FWeakObjectPtr *pFVar10;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  pUVar5 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (param_1->ValueType).Class.field0_0x0.DebugPtr = pUVar5;
  param_1->NumValues = param_2->ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_1->RawData,param_2->ArrayNum << 3,Default);
  if (((longlong)(param_1->RawData).ArrayNum != (longlong)param_2->ArrayNum * 8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContextData.RawData.Num() == sizeof(FWeakObjectPtr) * MultipleActors.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Items\\EnvQueryItemType_Actor.cpp"
                         ,0x51,L"Failed to allocate the appropriate amount of memory"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  pFVar10 = (FWeakObjectPtr *)(param_1->RawData).AllocatorInstance.Data;
  uVar9 = uVar7;
  if (0 < iVar6) {
    do {
      uVar8 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar1 = *(UObject **)((param_2->AllocatorInstance).Data + uVar9);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      uVar7 = (ulonglong)(uVar8 + 1);
      *pFVar10 = local_res8;
      iVar6 = param_2->ArrayNum;
      pFVar10 = pFVar10 + 1;
      uVar9 = uVar9 + 8;
    } while ((int)(uVar8 + 1) < iVar6);
  }
  return;
}

// SetContextHelper @ 146f73d00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UEnvQueryItemType_Actor::SetContextHelper
          (FEnvQueryContextData *param_1,TArray<AActor_const_*,TSizedDefaultAllocator<32>_> *param_2
          )

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  FWeakObjectPtr *pFVar10;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  pUVar5 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (param_1->ValueType).Class.field0_0x0.DebugPtr = pUVar5;
  param_1->NumValues = param_2->ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_1->RawData,param_2->ArrayNum << 3,Default);
  if (((longlong)(param_1->RawData).ArrayNum != (longlong)param_2->ArrayNum * 8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContextData.RawData.Num() == sizeof(FWeakObjectPtr) * MultipleActors.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Items\\EnvQueryItemType_Actor.cpp"
                         ,0x41,L"Failed to allocate the appropriate amount of memory"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  pFVar10 = (FWeakObjectPtr *)(param_1->RawData).AllocatorInstance.Data;
  uVar9 = uVar7;
  if (0 < iVar6) {
    do {
      uVar8 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar1 = *(UObject **)((param_2->AllocatorInstance).Data + uVar9);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      uVar7 = (ulonglong)(uVar8 + 1);
      *pFVar10 = local_res8;
      iVar6 = param_2->ArrayNum;
      pFVar10 = pFVar10 + 1;
      uVar9 = uVar9 + 8;
    } while ((int)(uVar8 + 1) < iVar6);
  }
  return;
}

// SetContextHelper @ 146f73e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UEnvQueryItemType_Actor::SetContextHelper(FEnvQueryContextData *param_1,AActor *param_2)

{
  UClass *pUVar1;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  pUVar1 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (param_1->ValueType).Class.field0_0x0.DebugPtr = pUVar1;
  param_1->NumValues = 1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_1->RawData,8,Default);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  *(FWeakObjectPtr *)(param_1->RawData).AllocatorInstance.Data = local_res8;
  return;
}

// SetValue @ 146f75730

void __cdecl UEnvQueryItemType_Actor::SetValue(uchar *param_1,FWeakObjectPtr *param_2)

{
  *(FWeakObjectPtr *)param_1 = *param_2;
  return;
}

// StaticRegisterNativesUEnvQueryItemType_Actor @ 146f76de0

void __cdecl UEnvQueryItemType_Actor::StaticRegisterNativesUEnvQueryItemType_Actor(void)

{
  return;
}

