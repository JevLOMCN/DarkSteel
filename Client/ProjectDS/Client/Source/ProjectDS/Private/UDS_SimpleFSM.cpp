// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b58b440

UClass * __cdecl UDS_SimpleFSM::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SimpleFSM.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SimpleFSM",
               &Z_Registration_Info_UClass_UDS_SimpleFSM.InnerSingleton,
               StaticRegisterNativesUDS_SimpleFSM,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SimpleFSM>,InternalVTableHelperCtorCaller<UDS_SimpleFSM>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SimpleFSM.InnerSingleton;
}

// UDS_SimpleFSM @ 14b58df80

UDS_SimpleFSM * __thiscall UDS_SimpleFSM::UDS_SimpleFSM(UDS_SimpleFSM *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->StateDelayDelta = 0.5;
  this->DeadTimeDelta = 0.0;
  this->_padding_ = (longlong)&___7UDS_SimpleFSM__6B_;
  (this->OwnerPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_SimpleFSM @ 14b58e520

void __thiscall UDS_SimpleFSM::~UDS_SimpleFSM(UDS_SimpleFSM *this)

{
  this->_padding_ = (longlong)&___7UDS_SimpleFSM__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b58f050

UClass * __cdecl UDS_SimpleFSM::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SimpleFSM.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SimpleFSM",
               &Z_Registration_Info_UClass_UDS_SimpleFSM.InnerSingleton,
               StaticRegisterNativesUDS_SimpleFSM,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SimpleFSM>,InternalVTableHelperCtorCaller<UDS_SimpleFSM>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SimpleFSM.InnerSingleton;
}

// StaticRegisterNativesUDS_SimpleFSM @ 14b58f3b0

void __cdecl UDS_SimpleFSM::StaticRegisterNativesUDS_SimpleFSM(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_SimpleFSM_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execChangePlayerState @ 14b58fd50

void __cdecl UDS_SimpleFSM::execChangePlayerState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ESimplePlayerState local_res10 [24];
  
  local_res10[0] = Idle;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ChangePlayerState((UDS_SimpleFSM *)param_1,local_res10[0]);
  return;
}

// UDS_SimpleFSM @ 14b8ffa20

UDS_SimpleFSM * __thiscall
UDS_SimpleFSM::UDS_SimpleFSM(UDS_SimpleFSM *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->StateDelayDelta = 0.5;
  this->DeadTimeDelta = 0.0;
  this->_padding_ = (longlong)&___7UDS_SimpleFSM__6B_;
  (this->OwnerPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ChangePlayerState @ 14b8ffa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_SimpleFSM::ChangePlayerState(UDS_SimpleFSM *this,ESimplePlayerState param_1)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  longlong lVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UDS_SkillDataSet *this_01;
  UObject *pUVar6;
  UObject *pUVar7;
  undefined1 *puVar8;
  undefined1 auStack_98 [32];
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  undefined1 local_68 [72];
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this_00 = &this->OwnerPlayer;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if ((bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerMovementCore).WeakPtr), bVar3)) {
    this->PrevPlayerState = this->NowPlayerState;
    this->NowPlayerState = param_1;
    if (param_1 == Attack) {
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_70);
      bVar3 = FWeakObjectPtr::IsValid(&local_70);
      if (bVar3) {
        uVar4 = rand();
        uVar5 = (uint)((float)(uVar4 & 0x7fff) * ___real_39400180);
        uVar4 = 5;
        if ((int)uVar5 < 5) {
          uVar4 = uVar5;
        }
        this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_70);
        UDS_SkillDataSet::GetSkillSlotDataMap
                  (this_01,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                            *)local_68);
        if (local_68._8_4_ != local_68._52_4_) {
          puVar8 = local_68 + 0x38;
          if ((undefined1 *)local_68._64_8_ != (undefined1 *)0x0) {
            puVar8 = (undefined1 *)local_68._64_8_;
          }
          iVar2 = *(int *)(puVar8 + (ulonglong)(local_20 - 1U & uVar4) * 4);
          while (iVar2 != -1) {
            lVar1 = local_68._0_8_ + (longlong)iVar2 * 0x14;
            if (*(uint *)(local_68._0_8_ + (longlong)iVar2 * 0x14) == uVar4) {
              if (lVar1 != 0) {
                local_78 = *(FWeakObjectPtr *)(lVar1 + 4);
                goto LAB_14b8ffba3;
              }
              break;
            }
            iVar2 = *(int *)(lVar1 + 0xc);
          }
        }
        local_78.ObjectIndex = 0;
        local_78.ObjectSerialNumber = 0;
LAB_14b8ffba3:
        bVar3 = FWeakObjectPtr::IsValid(&local_78);
        if (bVar3) {
          pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pUVar7 = FWeakObjectPtr::Get(&local_78);
          FDS_EntityBase::TryActivateSkillAbility
                    ((FDS_EntityBase *)&pUVar6[0x29].field_0x10,*(int *)&pUVar7[2].field_0x1c);
        }
        local_20 = 0;
        if ((undefined1 *)local_68._64_8_ != (undefined1 *)0x0) {
          FMemory::Free((void *)local_68._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_68);
      }
    }
  }
  return;
}

// InitFSM @ 14b90b940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_SimpleFSM::InitFSM(UDS_SimpleFSM *this,TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr *pFVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  undefined1 local_res8 [8];
  
  (this->OwnerPlayer).WeakPtr = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerPlayer).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerPlayer).WeakPtr);
    pFVar3 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x78))
                       (&pUVar2[0x29].field_0x10,local_res8);
    (this->OwnerMovementCore).WeakPtr = *pFVar3;
    bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerMovementCore).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->OwnerPlayer).WeakPtr);
      TVar4 = FDS_EntityBase::GetCharStateData((FDS_EntityBase *)&pUVar2[0x29].field_0x10);
                    /* WARNING: Load size is inaccurate */
      (this->CharStateData).WeakPtr = *TVar4.WeakPtr;
      this->NowPlayerState = Idle;
    }
  }
  return;
}

// OnDeadEvent @ 14b90bfe0

void __thiscall UDS_SimpleFSM::OnDeadEvent(UDS_SimpleFSM *this,DiedResponse *param_1)

{
  this->StateDelayDelta = 0.0;
  return;
}

// TickFSM @ 14b90c5a0

void __thiscall UDS_SimpleFSM::TickFSM(UDS_SimpleFSM *this,float param_1)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  UDS_MovementCore *pUVar4;
  TVector<double> *pTVar5;
  UObject *pUVar6;
  UDS_CharStateData *this_00;
  double dVar7;
  double dVar8;
  bool local_res8 [8];
  TVector<double> local_38 [2];
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerPlayer).WeakPtr);
  if ((bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerMovementCore).WeakPtr), bVar3)) {
    bVar3 = UDS_GameInstance::IsAutoPlayer();
    if (bVar3) {
      pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
      pTVar5 = UDS_MovementCore::GetActorLocation(pUVar4,local_38);
      dVar8 = (pTVar5->field0_0x0)._s_0.Y - (this->OriginLocation).field0_0x0._s_0.Y;
      dVar7 = (pTVar5->field0_0x0)._s_0.X - (this->OriginLocation).field0_0x0._s_0.X;
      dVar2 = (pTVar5->field0_0x0)._s_0.Z - (this->OriginLocation).field0_0x0._s_0.Z;
      if (__real_4177d78400000000 < dVar8 * dVar8 + dVar7 * dVar7 + dVar2 * dVar2) {
        pUVar6 = FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
        (**(code **)(*(longlong *)pUVar6 + 0x358))(pUVar6,&this->OriginLocation);
      }
      this->StateDelayDelta = param_1 + this->StateDelayDelta;
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      local_res8[0] = false;
      local_res8[1] = false;
      local_res8[2] = true;
      local_res8[3] = false;
      local_res8[4] = false;
      local_res8[5] = false;
      local_res8[6] = false;
      local_res8[7] = false;
      bVar3 = UDS_CharStateData::HasCharState(this_00,(EDS_CharState *)local_res8);
      fVar1 = this->StateDelayDelta;
      if (bVar3) {
        if (this->DeadTimeDelta <= fVar1 && fVar1 != this->DeadTimeDelta) {
          local_res8[0] = bVar3;
          FDS_WarpService::RequestResurrectWarp(local_res8);
        }
      }
      else if (__real_3f000000 < fVar1) {
        this->StateDelayDelta = 0.0;
        ChangePlayerState(this,Attack);
      }
    }
    else {
      pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
      pTVar5 = UDS_MovementCore::GetActorLocation(pUVar4,local_38);
      dVar2 = (pTVar5->field0_0x0)._s_0.Y;
      (this->OriginLocation).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
      (this->OriginLocation).field0_0x0._s_0.Y = dVar2;
      (this->OriginLocation).field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
    }
  }
  return;
}

