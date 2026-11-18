// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 147e41da0

UClass * __cdecl ALevelBounds::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelBounds.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelBounds",
               &Z_Registration_Info_UClass_ALevelBounds.InnerSingleton,
               StaticRegisterNativesALevelBounds,0x2d8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<ALevelBounds>,
               InternalVTableHelperCtorCaller<ALevelBounds>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelBounds.InnerSingleton;
}

// ALevelBounds @ 147e53e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelBounds * __thiscall ALevelBounds::ALevelBounds(ALevelBounds *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->BoxComponent).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  return this;
}

// ALevelBounds @ 147e53eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelBounds * __thiscall ALevelBounds::ALevelBounds(ALevelBounds *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UBoxComponent *pUVar5;
  FName local_res8;
  TVector<double>_u_0 local_28;
  
  AActor::AActor((AActor *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,Never);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->BoxComponent).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar3 = ::FName::FName(&local_res8,L"BoxComponent0");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UBoxComponent_NoRegister();
  pUVar5 = (UBoxComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UBoxComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->BoxComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UBoxComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (this->BoxComponent).field0_0x0.DebugPtr;
  this->_padding_ = (longlong)pUVar5;
  *(undefined1 *)((longlong)&pUVar5->_padding_ + 3) = 2;
  local_28._s_0.X = DefaultLevelSize.field0_0x0._s_0.X;
  local_28._s_0.Y = DefaultLevelSize.field0_0x0._s_0.Y;
  local_28._s_0.Z = DefaultLevelSize.field0_0x0._s_0.Z;
  USceneComponent::SetRelativeScale3D
            ((USceneComponent *)(this->BoxComponent).field0_0x0.DebugPtr,
             (TVector<double> *)&local_28._s_0);
  UActorComponent::SetCanEverAffectNavigation
            ((UActorComponent *)(this->BoxComponent).field0_0x0.DebugPtr,false);
  pUVar5 = (this->BoxComponent).field0_0x0.DebugPtr;
  this->bAutoUpdateBounds = true;
  pbVar1 = (byte *)((longlong)&pUVar5->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&((this->BoxComponent).field0_0x0.DebugPtr)->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xdf;
  pbVar1 = (byte *)((longlong)&((this->BoxComponent).field0_0x0.DebugPtr)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x10;
  pUVar5 = (this->BoxComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar5->_padding_ + 0x788))(pUVar5,UCollisionProfile::NoCollision_ProfileName,1);
  pUVar5 = (this->BoxComponent).field0_0x0.DebugPtr;
  (pUVar5->BoxExtent).field0_0x0._s_0.X = 0.5;
  (pUVar5->BoxExtent).field0_0x0._s_0.Y = 0.5;
  (pUVar5->BoxExtent).field0_0x0._s_0.Z = 0.5;
  AActor::SetCanBeDamaged((AActor *)this,false);
  return this;
}

// ~ALevelBounds @ 147e57000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelBounds::~ALevelBounds(ALevelBounds *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  AActor::~AActor((AActor *)this);
  return;
}

// CalculateLevelBounds @ 147e5ebd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __cdecl
ALevelBounds::CalculateLevelBounds(TBox<double> *__return_storage_ptr__,ULevel *param_1)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TBox<double> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  char local_38;
  undefined7 uStack_37;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar10 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  if ((param_1 != (ULevel *)0x0) && (uVar11 = uVar10, 0 < (param_1->Actors).ArrayNum)) {
    do {
      iVar2 = (param_1->Actors).ArrayNum;
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < iVar2) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_78 = (longlong)(int)uVar9;
        local_70 = (longlong)iVar2;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TBox<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      plVar3 = *(longlong **)((param_1->Actors).AllocatorInstance.Data + uVar11);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar6 = (**(code **)(*plVar3 + 0x450))(plVar3), cVar6 != '\0')) {
        (**(code **)(*plVar3 + 0x670))(plVar3,&local_68,1,0);
        if (local_38 != '\0') {
          if (__return_storage_ptr__->IsValid == '\0') {
            *(double *)&(__return_storage_ptr__->Min).field0_0x0 = local_68;
            *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = dStack_60;
            *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = local_58;
            *(double *)&(__return_storage_ptr__->Max).field0_0x0 = dStack_50;
            *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = local_48;
            *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = dStack_40;
            __return_storage_ptr__->IsValid = local_38;
            __return_storage_ptr__->Pad[0] = (char)uStack_37;
            __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_37 >> 8);
            __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_37 >> 0x10);
            __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_37 >> 0x18);
            __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_37 >> 0x20);
            __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_37 >> 0x28);
            __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_37 >> 0x30);
          }
          else {
            dVar1 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
            uVar12 = SUB84(dVar1,0);
            uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (local_68 <= dVar1) {
              uVar12 = SUB84(local_68,0);
              uVar13 = (undefined4)((ulonglong)local_68 >> 0x20);
            }
            dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
            uVar14 = SUB84(dVar1,0);
            uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (dStack_60 <= dVar1) {
              uVar14 = SUB84(dStack_60,0);
              uVar15 = (undefined4)((ulonglong)dStack_60 >> 0x20);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar13,uVar12);
            dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
            uVar12 = SUB84(dVar1,0);
            uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (local_58 <= dVar1) {
              uVar12 = SUB84(local_58,0);
              uVar13 = (undefined4)((ulonglong)local_58 >> 0x20);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar15,uVar14);
            dVar1 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
            uVar14 = SUB84(dVar1,0);
            uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (dVar1 <= dStack_50) {
              uVar14 = SUB84(dStack_50,0);
              uVar15 = (undefined4)((ulonglong)dStack_50 >> 0x20);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar13,uVar12);
            dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
            uVar12 = SUB84(dVar1,0);
            uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (dVar1 <= local_48) {
              uVar12 = SUB84(local_48,0);
              uVar13 = (undefined4)((ulonglong)local_48 >> 0x20);
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar15,uVar14);
            dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
            uVar14 = SUB84(dVar1,0);
            uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (dVar1 <= dStack_40) {
              uVar14 = SUB84(dStack_40,0);
              uVar15 = (undefined4)((ulonglong)dStack_40 >> 0x20);
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar13,uVar12);
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar15,uVar14);
          }
        }
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar9 + 1) < (param_1->Actors).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetComponentsBoundingBox @ 147e67820

TBox<double> * __thiscall
ALevelBounds::GetComponentsBoundingBox
          (ALevelBounds *this,TBox<double> *__return_storage_ptr__,bool param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TBox<double> *pTVar8;
  double dVar9;
  double dVar10;
  FString local_78 [7];
  
  if (this->_padding_ == 0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,local_78,(UObject *)0x0);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelBounds.cpp"
                       ,0x3d,L"LevelBounds actor with null root component: %s");
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TBox<double> *)(*pcVar2)();
      return pTVar8;
    }
  }
  lVar1 = this->_padding_;
  dVar4 = *(double *)(lVar1 + 0x210);
  dVar5 = *(double *)(lVar1 + 0x218);
  dVar6 = *(double *)(lVar1 + 0x220);
  dVar3 = *(double *)(lVar1 + 0x240) * __real_3fe0000000000000;
  dVar9 = *(double *)(lVar1 + 0x230) * __real_3fe0000000000000;
  dVar10 = *(double *)(lVar1 + 0x238) * __real_3fe0000000000000;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar4 - dVar9;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar5 - dVar10;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar9 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar10 + dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar3 + dVar6;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147e693d0

UClass * __cdecl ALevelBounds::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelBounds.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelBounds",
               &Z_Registration_Info_UClass_ALevelBounds.InnerSingleton,
               StaticRegisterNativesALevelBounds,0x2d8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<ALevelBounds>,
               InternalVTableHelperCtorCaller<ALevelBounds>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelBounds.InnerSingleton;
}

// GetStatId @ 147e6a6a0

TStatId __thiscall ALevelBounds::GetStatId(ALevelBounds *this)

{
  TStatIdData *in_RDX;
  
  in_RDX->Name = (TAtomic<FMinimalName>)&TStatId::TStatId_NAME_None;
  return (TStatId)in_RDX;
}

// IsLevelBoundsRelevant @ 147e6e090

bool __thiscall ALevelBounds::IsLevelBoundsRelevant(ALevelBounds *this)

{
  return false;
}

// PostLoad @ 147e71da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelBounds::PostLoad(ALevelBounds *this)

{
  bool bVar1;
  ULevel *pUVar2;
  ALevelBounds *local_res10 [3];
  
  AActor::PostLoad((AActor *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar1) && (pUVar2 = AActor::GetLevel((AActor *)this), pUVar2 != (ULevel *)0x0)) {
    local_res10[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ALevelBounds *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(pUVar2->LevelBoundsActor).WeakPtr,(FObjectPtr)local_res10);
  }
  return;
}

// StaticRegisterNativesALevelBounds @ 147e82170

void __cdecl ALevelBounds::StaticRegisterNativesALevelBounds(void)

{
  return;
}

// Tick @ 147e823e0

void __thiscall ALevelBounds::Tick(ALevelBounds *this,float param_1)

{
  return;
}

// Tick`adjustor{704}' @ 147e823ec

/* [thunk]:public: virtual void __cdecl ALevelBounds::Tick`adjustor{704}' (float) __ptr64 */

void __thiscall ALevelBounds::Tick_adjustor_704__(ALevelBounds *this,float param_1)

{
  Tick((ALevelBounds *)&this[-1]._padding_,param_1);
  return;
}

