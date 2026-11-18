// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1480e6c80

UClass * __cdecl APainCausingVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APainCausingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PainCausingVolume",
               &Z_Registration_Info_UClass_APainCausingVolume.InnerSingleton,
               StaticRegisterNativesAPainCausingVolume,0x330,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APainCausingVolume>,
               InternalVTableHelperCtorCaller<APainCausingVolume>,local_res8,
               APhysicsVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APainCausingVolume.InnerSingleton;
}

// APainCausingVolume @ 1480f2ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APainCausingVolume * __thiscall
APainCausingVolume::APainCausingVolume(APainCausingVolume *this,FVTableHelper *param_1)

{
  APhysicsVolume::APhysicsVolume((APhysicsVolume *)this,param_1);
  this->_padding_ = (longlong)&___7APainCausingVolume__6B_;
  (this->DamageType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DamageInstigator).field0_0x0.DebugPtr = (AController *)0x0;
  (this->TimerHandle_PainTimer).Handle = 0;
  return this;
}

// APainCausingVolume @ 1480f2ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APainCausingVolume * __thiscall
APainCausingVolume::APainCausingVolume(APainCausingVolume *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  APhysicsVolume::APhysicsVolume((APhysicsVolume *)this,param_1);
  this->bPainCausing = 1;
  this->_padding_ = (longlong)&___7APainCausingVolume__6B_;
  (this->DamageType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DamageInstigator).field0_0x0.DebugPtr = (AController *)0x0;
  (this->TimerHandle_PainTimer).Handle = 0;
  pUVar1 = Z_Construct_UClass_UDamageType_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DamageType).Class.field0_0x0.DebugPtr = pUVar1;
  this->bEntryPain = 1;
  this->DamagePerSec = 1.0;
  this->PainInterval = 1.0;
  return this;
}

// ~APainCausingVolume @ 1480f64d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APainCausingVolume::~APainCausingVolume(APainCausingVolume *this)

{
  this->_padding_ = (longlong)&___7APainCausingVolume__6B_;
  APhysicsVolume::~APhysicsVolume((APhysicsVolume *)this);
  return;
}

// ActorEnteredVolume @ 1480fc2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APainCausingVolume::ActorEnteredVolume(APainCausingVolume *this,AActor *param_1)

{
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  FTimerHandle local_res8;
  
  APhysicsVolume::ActorEnteredVolume((APhysicsVolume *)this,param_1);
  if (((this->bPainCausing != 0) && (this->bEntryPain != 0)) && (param_1->bCanBeDamaged != '\0')) {
    (**(code **)(this->_padding_ + 0x7b0))(this,param_1);
  }
  pFVar1 = AActor::GetWorldTimerManager((AActor *)this);
  local_res8.Handle = (this->TimerHandle_PainTimer).Handle;
  pFVar2 = FTimerManager::FindTimer(pFVar1,&local_res8);
  if ((pFVar2 == (FTimerData *)0x0) || (pFVar2->Status == Paused)) {
    pFVar1 = AActor::GetWorldTimerManager((AActor *)this);
    FTimerManager::SetTimer<APainCausingVolume>
              (pFVar1,&this->TimerHandle_PainTimer,this,(pmf_b19176b9)0x1480fa628,this->PainInterval
               ,true,__real_bf800000);
  }
  return;
}

// CausePainTo @ 148101af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APainCausingVolume::CausePainTo(APainCausingVolume *this,AActor *param_1)

{
  int iVar1;
  AController *pAVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  undefined **local_18;
  UClass *local_10;
  
  if (this->DamagePerSec <= 0.0) {
    return;
  }
  pUVar6 = (this->DamageType).Class.field0_0x0.DebugPtr;
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UDamageType_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (pUVar6 = (this->DamageType).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0))
    {
      pUVar5 = Z_Construct_UClass_UDamageType_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar6->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar6 = (this->DamageType).Class.field0_0x0.DebugPtr;
          goto LAB_148101ba9;
        }
      }
      pUVar6 = (UClass *)0x0;
      goto LAB_148101ba9;
    }
  }
  pUVar6 = Z_Construct_UClass_UDamageType_NoRegister();
LAB_148101ba9:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pAVar2 = (this->DamageInstigator).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(param_1->_padding_ + 0x6b0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_18 = &___7FDamageEvent__6B_;
  local_10 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (*pcVar3)(param_1,this->PainInterval * this->DamagePerSec,&local_18,pAVar2,this);
  return;
}

// EndPlay @ 148107c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APainCausingVolume::EndPlay(APainCausingVolume *this,Type param_1)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  APhysicsVolume::EndPlay((APhysicsVolume *)this,param_1);
  this_00 = AActor::GetWorldTimerManager((AActor *)this);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->TimerHandle_PainTimer);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->TimerHandle_PainTimer).Handle);
  }
  (this->TimerHandle_PainTimer).Handle = 0;
  return;
}

// GetPrivateStaticClass @ 148118930

UClass * __cdecl APainCausingVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APainCausingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PainCausingVolume",
               &Z_Registration_Info_UClass_APainCausingVolume.InnerSingleton,
               StaticRegisterNativesAPainCausingVolume,0x330,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APainCausingVolume>,
               InternalVTableHelperCtorCaller<APainCausingVolume>,local_res8,
               APhysicsVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APainCausingVolume.InnerSingleton;
}

// PainTimer @ 148124a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APainCausingVolume::PainTimer(APainCausingVolume *this)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  APainCausingVolume *pAVar5;
  FTimerManager *this_00;
  FTimerData *pFVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (this->bPainCausing != 0) {
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    uVar11 = 0;
    local_60 = 0;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_c8 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    AActor::GetOverlappingActors
              ((AActor *)this,
               (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)local_88,
               (TSubclassOf<AActor>)&local_c8);
    uVar13 = local_60;
    uStack_f4 = 1;
    uStack_e4 = uVar11;
    iStack_f8 = 0;
    if (local_60 != 0) {
      puVar10 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar10 = local_68;
      }
      uVar12 = *puVar10;
      uVar11 = 0;
      while (uVar12 == 0) {
        lVar8 = (longlong)iStack_f8;
        uVar11 = uVar11 + 0x20;
        iStack_f8 = iStack_f8 + 1;
        uStack_e4 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
        goto LAB_148124b51;
        uVar12 = (puVar10 + 1)[lVar8];
      }
      uStack_f4 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_f4 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_d0 = (int)lVar8;
      uStack_e4 = local_d0 + -1 + uVar11;
      if ((int)local_60 < (int)uStack_e4) {
        uStack_e4 = local_60;
      }
    }
LAB_148124b51:
    local_100 = (longlong *)local_88;
    local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uVar12 = local_60 & 0xffffffe0;
    iStack_d8 = local_88._8_4_ - local_54;
    uStack_e8 = 0xffffffff;
    TStack_b8.CurrentBitIndex = uStack_e4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
    iVar9 = (int)local_60 >> 5;
    TStack_b8._28_4_ = uStack_e4;
    TStack_b8.BaseBitIndex = uVar11;
    uStack_98 = CONCAT44(uStack_d4,iStack_d8);
    bVar7 = (byte)local_60;
    local_e0 = uVar11;
    uStack_dc = uStack_e4;
    local_c0 = local_100;
    TStack_b8.Array = local_f0;
    if (((int)local_60 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar13 != local_60) {
      puVar10 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar10 = local_68;
      }
      uVar11 = -1 << (bVar7 & 0x1f) & puVar10[iVar9];
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar9;
        uVar12 = uVar12 + 0x20;
        iVar9 = iVar9 + 1;
        uVar13 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_148124c5d;
        uVar11 = (puVar10 + 1)[lVar8];
      }
      uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar13 = (int)lVar8 + -1 + uVar12;
      if ((int)local_60 < (int)uVar13) {
        uVar13 = local_60;
      }
    }
LAB_148124c5d:
    while( true ) {
      plVar2 = local_c0;
      if ((int)local_c0[1] - *(int *)((longlong)local_c0 + 0x34) != (int)uStack_98) {
        `TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (((TStack_b8.CurrentBitIndex == uVar13) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar2 == (longlong *)local_88)) break;
      plVar2 = *(longlong **)(*plVar2 + (longlong)TStack_b8.CurrentBitIndex * 0x10);
      if (((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) &&
         (((*(byte *)((longlong)plVar2 + 0x5a) & 4) != 0 &&
          (pAVar5 = (APainCausingVolume *)(**(code **)(*plVar2 + 0x510))(plVar2), pAVar5 == this))))
      {
        (**(code **)(this->_padding_ + 0x7b0))(this);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    if (local_88._8_4_ == local_54) {
      this_00 = AActor::GetWorldTimerManager((AActor *)this);
      pFVar6 = FTimerManager::FindTimer(this_00,&this->TimerHandle_PainTimer);
      if (pFVar6 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (this_00,(FTimerHandle)(this->TimerHandle_PainTimer).Handle);
      }
      (this->TimerHandle_PainTimer).Handle = 0;
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    iVar9 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_54 = 0;
    local_60 = 0;
    local_58 = 0xffffffff;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (uint *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  return;
}

// PostInitializeComponents @ 148126370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APainCausingVolume::PostInitializeComponents(APainCausingVolume *this)

{
  APhysicsVolume::PostInitializeComponents((APhysicsVolume *)this);
  *(uint *)&this->field_0x31c =
       (*(int *)&this->field_0x308 * 2 ^ *(uint *)&this->field_0x31c) & 2 ^
       *(uint *)&this->field_0x31c;
  return;
}

// Reset @ 14812a4a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APainCausingVolume::Reset(APainCausingVolume *this)

{
  *(uint *)&this->field_0x308 =
       (this->BACKUP_bPainCausing ^ ZPULL(*(undefined4 *)&this->field_0x308,0,1)) & 1 ^
       *(undefined4 *)&this->field_0x308;
                    /* WARNING: Could not recover jumptable at 0x00014812a4be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x710))();
  return;
}

// StaticRegisterNativesAPainCausingVolume @ 148137d70

void __cdecl APainCausingVolume::StaticRegisterNativesAPainCausingVolume(void)

{
  return;
}

