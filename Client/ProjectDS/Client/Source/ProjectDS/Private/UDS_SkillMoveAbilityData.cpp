// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b590e80

UClass * __cdecl UDS_SkillMoveAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillMoveAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillMoveAbilityData",
               &Z_Registration_Info_UClass_UDS_SkillMoveAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_SkillMoveAbilityData,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillMoveAbilityData>,
               InternalVTableHelperCtorCaller<UDS_SkillMoveAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillMoveAbilityData.InnerSingleton;
}

// UDS_SkillMoveAbilityData @ 14b594910

UDS_SkillMoveAbilityData * __thiscall
UDS_SkillMoveAbilityData::UDS_SkillMoveAbilityData
          (UDS_SkillMoveAbilityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillMoveAbilityData__6B_;
  *(undefined8 *)&this->ServerSkillDestLocationDelegate = 0;
  *(undefined8 *)&(this->ServerSkillDestLocationDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ServerSkillDestLocationDelegate).field_0x10 = 0;
  this->SkillID = 0;
  this->TargetDistanceMax = 0;
  this->SkillType = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ChangedDestLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ChangedDestLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ChangedDestLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SkillMoveDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillMoveDataList).ArrayNum = 0;
  (this->SkillMoveDataList).ArrayMax = 0;
  this->DirectCollisionMove = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->MoveCollision = false;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->ServerSkillDestLocation = 0;
  *(undefined8 *)&(this->ServerSkillDestLocation).field_0x8 = 0;
  *(undefined8 *)&(this->ServerSkillDestLocation).field_0x20 = 0;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x28 = 0;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x34 = 0;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ServerSkillDestLocation).field_0x40 = 0;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x48 = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StopSkillDestLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StopSkillDestLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StopSkillDestLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SaveLastLocationPoint).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SaveLastLocationPoint).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StopSkillDestTime = 0.0;
  this->IsJumpSkill = false;
  (this->SaveLastLocationPoint).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_SkillMoveAbilityData @ 14b5954b0

void __thiscall UDS_SkillMoveAbilityData::~UDS_SkillMoveAbilityData(UDS_SkillMoveAbilityData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_SkillMoveAbilityData__6B_;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ServerSkillDestLocation).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ServerSkillDestLocation);
  DestructItems<FDS_AtomicSkillMoveData,int>
            ((FDS_AtomicSkillMoveData *)(this->SkillMoveDataList).AllocatorInstance.Data,
             (this->SkillMoveDataList).ArrayNum);
  pFVar2 = (this->SkillMoveDataList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ServerSkillDestLocationDelegate);
  pvVar1 = *(void **)&(this->ServerSkillDestLocationDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ServerSkillDestLocationDelegate);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5970f0

UClass * __cdecl UDS_SkillMoveAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillMoveAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillMoveAbilityData",
               &Z_Registration_Info_UClass_UDS_SkillMoveAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_SkillMoveAbilityData,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillMoveAbilityData>,
               InternalVTableHelperCtorCaller<UDS_SkillMoveAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillMoveAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_SkillMoveAbilityData @ 14b5978c0

void __cdecl UDS_SkillMoveAbilityData::StaticRegisterNativesUDS_SkillMoveAbilityData(void)

{
  return;
}

// UDS_SkillMoveAbilityData @ 14ba33560

UDS_SkillMoveAbilityData * __thiscall
UDS_SkillMoveAbilityData::UDS_SkillMoveAbilityData
          (UDS_SkillMoveAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillMoveAbilityData__6B_;
  *(undefined8 *)&this->ServerSkillDestLocationDelegate = 0;
  *(undefined8 *)&(this->ServerSkillDestLocationDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ServerSkillDestLocationDelegate).field_0x10 = 0;
  this->SkillID = 0;
  this->TargetDistanceMax = 0;
  this->SkillType = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ChangedDestLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ChangedDestLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ChangedDestLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SkillMoveDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillMoveDataList).ArrayNum = 0;
  (this->SkillMoveDataList).ArrayMax = 0;
  this->DirectCollisionMove = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->MoveCollision = false;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->ServerSkillDestLocation = 0;
  *(undefined8 *)&(this->ServerSkillDestLocation).field_0x8 = 0;
  *(undefined8 *)&(this->ServerSkillDestLocation).field_0x20 = 0;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x28 = 0;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x34 = 0;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ServerSkillDestLocation).field_0x40 = 0;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x48 = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StopSkillDestLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StopSkillDestLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StopSkillDestLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SaveLastLocationPoint).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SaveLastLocationPoint).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StopSkillDestTime = 0.0;
  this->IsJumpSkill = false;
  (this->SaveLastLocationPoint).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// BuildSkillMoveDataList @ 14ba37b50

void __thiscall
UDS_SkillMoveAbilityData::BuildSkillMoveDataList
          (UDS_SkillMoveAbilityData *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *param_3)

{
  int *piVar1;
  TArray<FDS_AtomicSkillMoveData,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FDS_AtomicSkillMoveData local_a8;
  
  pTVar2 = &this->SkillMoveDataList;
  uVar7 = param_1->ArrayNum;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  piVar1 = &(this->SkillMoveDataList).ArrayMax;
  if ((this->SkillMoveDataList).ArrayMax < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar7,&pTVar2->AllocatorInstance,(this->SkillMoveDataList).ArrayNum,piVar1);
  }
  uVar11 = 0;
  uVar12 = uVar11;
  if (0 < param_1->ArrayNum) {
    do {
      local_a8.AtkAttachSocket.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.DefAttachSocket.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar10 = (uint)uVar11;
      local_a8.SkillID = 0;
      local_a8.SkillAttackID = 0;
      local_a8.MoveAngle = 0;
      local_a8.MoveAngleMin = 0;
      local_a8.MoveAngleMax = 0;
      local_a8.MoveRange = 0;
      local_a8.EmptyTargetMoveRange = 0;
      local_a8.MoveStartTime = 0.0;
      uVar7 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      local_a8.DelayMove = 0.0;
      local_a8.MoveTime = 0.0;
      local_a8.AttachHoldingTime = 0.0;
      local_a8.AtkAttachSocket.Data.ArrayNum = 0;
      local_a8.AtkAttachSocket.Data.ArrayMax = 0;
      local_a8.DefAttachSocket.Data.ArrayNum = 0;
      local_a8.DefAttachSocket.Data.ArrayMax = 0;
      local_a8.CheckTargetAbnormalAction = 0;
      local_a8.SkillMoveType = None;
      local_a8.LastSkillMove = false;
      local_a8.bIsJumpSkill = false;
      local_a8.bIsSetLocationPoint = false;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar3 = *(float *)((param_2->AllocatorInstance).Data + uVar12);
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar6 = TryCreateSkillMoveData
                        (this,*(int *)((param_1->AllocatorInstance).Data + uVar12),fVar3,param_3,
                         &local_a8);
      if (bVar6) {
        iVar8 = (this->SkillMoveDataList).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x858,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar9 = (longlong)iVar8 * 0x58;
        (this->SkillMoveDataList).ArrayNum = iVar8 + 1;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        *(int *)(pFVar4 + lVar9) = local_a8.SkillID;
        *(int *)(pFVar4 + lVar9 + 4) = local_a8.SkillAttackID;
        *(int *)(pFVar4 + lVar9 + 8) = local_a8.MoveAngle;
        *(int *)(pFVar4 + lVar9 + 0xc) = local_a8.MoveAngleMin;
        *(int *)(pFVar4 + lVar9 + 0x10) = local_a8.MoveAngleMax;
        *(int *)(pFVar4 + lVar9 + 0x14) = local_a8.MoveRange;
        *(int *)(pFVar4 + lVar9 + 0x18) = local_a8.EmptyTargetMoveRange;
        *(float *)(pFVar4 + lVar9 + 0x1c) = local_a8.MoveStartTime;
        *(float *)(pFVar4 + lVar9 + 0x20) = local_a8.DelayMove;
        *(float *)(pFVar4 + lVar9 + 0x24) = local_a8.MoveTime;
        *(float *)(pFVar4 + lVar9 + 0x28) = local_a8.AttachHoldingTime;
        *(undefined8 *)(pFVar4 + lVar9 + 0x30) = 0;
        *(FScriptContainerElement **)(pFVar4 + lVar9 + 0x30) =
             local_a8.AtkAttachSocket.Data.AllocatorInstance.Data;
        local_a8.AtkAttachSocket.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar4 + lVar9 + 0x38) = local_a8.AtkAttachSocket.Data.ArrayNum;
        *(int *)(pFVar4 + lVar9 + 0x3c) = local_a8.AtkAttachSocket.Data.ArrayMax;
        local_a8.AtkAttachSocket.Data.ArrayNum = 0;
        local_a8.AtkAttachSocket.Data.ArrayMax = 0;
        *(undefined8 *)(pFVar4 + lVar9 + 0x40) = 0;
        *(FScriptContainerElement **)(pFVar4 + lVar9 + 0x40) =
             local_a8.DefAttachSocket.Data.AllocatorInstance.Data;
        local_a8.DefAttachSocket.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar4 + lVar9 + 0x48) = local_a8.DefAttachSocket.Data.ArrayNum;
        *(int *)(pFVar4 + lVar9 + 0x4c) = local_a8.DefAttachSocket.Data.ArrayMax;
        local_a8.DefAttachSocket.Data.ArrayNum = 0;
        local_a8.DefAttachSocket.Data.ArrayMax = 0;
        *(int *)(pFVar4 + lVar9 + 0x50) = local_a8.CheckTargetAbnormalAction;
        pFVar4[lVar9 + 0x54] = (FScriptContainerElement)local_a8.SkillMoveType;
        pFVar4[lVar9 + 0x55] = (FScriptContainerElement)local_a8.LastSkillMove;
        pFVar4[lVar9 + 0x56] = (FScriptContainerElement)local_a8.bIsJumpSkill;
        pFVar4[lVar9 + 0x57] = (FScriptContainerElement)local_a8.bIsSetLocationPoint;
      }
      if (local_a8.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.DefAttachSocket.Data.AllocatorInstance.Data);
      }
      if (local_a8.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AtkAttachSocket.Data.AllocatorInstance.Data);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 4;
    } while ((int)(uVar10 + 1) < param_1->ArrayNum);
  }
  return;
}

// ClearServerSkillDestLocation @ 14ba39ff0

void __thiscall
UDS_SkillMoveAbilityData::ClearServerSkillDestLocation(UDS_SkillMoveAbilityData *this)

{
  undefined1 *puVar1;
  TMap<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->ServerSkillDestLocation;
  bVar3 = 1 < *(int *)&(this->ServerSkillDestLocation).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ServerSkillDestLocation).field_0xc;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x34 = 0;
  iVar2 = *(int *)&(this->ServerSkillDestLocation).field_0x2c;
  *(undefined4 *)&(this->ServerSkillDestLocation).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ServerSkillDestLocation).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ServerSkillDestLocation).field_0x10,0
              );
  }
  if (bVar3) {
    *(undefined4 *)&(this->ServerSkillDestLocation).field_0x48 = 1;
    TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// GetFirstSkillMoveData @ 14ba4b6f0

FDS_AtomicSkillMoveData * __thiscall
UDS_SkillMoveAbilityData::GetFirstSkillMoveData(UDS_SkillMoveAbilityData *this)

{
  if (0 < (this->SkillMoveDataList).ArrayNum) {
    return (FDS_AtomicSkillMoveData *)(this->SkillMoveDataList).AllocatorInstance.Data;
  }
  return (FDS_AtomicSkillMoveData *)0x0;
}

// GetServerSkillDestLocation @ 14ba4ee20

TVector<double> * __thiscall
UDS_SkillMoveAbilityData::GetServerSkillDestLocation
          (UDS_SkillMoveAbilityData *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  double *pdVar6;
  undefined1 *puVar7;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (*(int *)&(this->ServerSkillDestLocation).field_0x8 !=
      *(int *)&(this->ServerSkillDestLocation).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ServerSkillDestLocation).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ServerSkillDestLocation).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ServerSkillDestLocation).field_0x48 - 1U & param_1) *
                              4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->ServerSkillDestLocation + (longlong)iVar5 * 0x28;
        if (*(int *)(*(longlong *)&this->ServerSkillDestLocation + (longlong)iVar5 * 0x28) ==
            param_1) {
          pdVar6 = (double *)(lVar1 + 8);
          if (lVar1 == 0) {
            pdVar6 = (double *)0x0;
          }
          if (pdVar6 != (double *)0x0) {
            dVar3 = pdVar6[1];
            dVar2 = pdVar6[2];
            (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar6;
            (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
            (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// InitSkillMoveData @ 14ba56900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_SkillMoveAbilityData::InitSkillMoveData
          (UDS_SkillMoveAbilityData *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *pUVar5;
  FDS_SkillTableRow *pFVar6;
  FDS_SkillActLevelTableRow *pFVar7;
  UDS_LogManager *pUVar8;
  uint uVar9;
  void *pvVar10;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_3c8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_res10 = param_1.WeakPtr;
  (**(code **)(this->_padding_ + 0x2c8))();
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    return false;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  pFVar6 = FDS_SkillTableRow::Get((longlong)*(int *)&pUVar5[2].field_0x1c,true);
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  pFVar7 = FDS_SkillActLevelTableRow::Get((longlong)*(int *)&pUVar5[2].field_0x24,true);
  if (pFVar6 == (FDS_SkillTableRow *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar8 = UDS_LogManager::GetInst();
    FWeakObjectPtr::Get(&local_res10);
    local_388._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_388,"UDS_SkillMoveAbilityData::ValidateTableData",0x2b,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Warning,local_388.Ptr,0x5a,L"skillTableRow is nullptr. skillID : %d");
    pvVar10 = (void *)local_388._padding_;
  }
  else if (pFVar7 == (FDS_SkillActLevelTableRow *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar8 = UDS_LogManager::GetInst();
    FWeakObjectPtr::Get(&local_res10);
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_SkillMoveAbilityData::ValidateTableData",0x2b,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Warning,local_268.Ptr,0x60,
               L"skillActLevelTableRow is nullptr. skillActLevelID : %d");
    pvVar10 = (void *)local_268._padding_;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    this->SkillID = *(int *)&pUVar5[2].field_0x1c;
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    this->IsJumpSkill = (bool)pUVar5[9].field_0x6;
    this->TargetDistanceMax = (int)pFVar6->TargetDistanceMax;
    this->SkillType = (uint)pFVar6->SkillType;
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    FWeakObjectPtr::Get(&local_res10);
    if (*(int *)&pUVar5[3].field_0x20 == 0) {
      return false;
    }
    if (*(int *)&pUVar5[3].field_0x20 == (pFVar7->LinkStartTime).ArrayNum) {
      BuildSkillMoveDataList
                (this,(TArray<int,TSizedDefaultAllocator<32>_> *)&pUVar5[3].field_0x18,
                 &pFVar7->LinkStartTime,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_res10
                );
      iVar1 = (this->SkillMoveDataList).ArrayNum;
      if (iVar1 != 0) {
        uVar9 = 0;
        if ((int)(iVar1 - 1U) < iVar1) {
          uVar9 = ~(iVar1 - 1U) >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        (this->SkillMoveDataList).AllocatorInstance.Data
        [(longlong)(this->SkillMoveDataList).ArrayNum * 0x58 + -3] = (FScriptContainerElement)0x1;
      }
      return true;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_SkillMoveAbilityData::ValidateAttackLinkData",0x30,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Warning,local_148.Ptr,0x72,L"attackLink count mismatch. skillID : %d");
    pvVar10 = (void *)local_148._padding_;
  }
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  return false;
}

// InitializeBasicInfo @ 14ba59bd0

void __thiscall
UDS_SkillMoveAbilityData::InitializeBasicInfo
          (UDS_SkillMoveAbilityData *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *param_1,
          FDS_SkillTableRow *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  this->SkillID = *(int *)&pUVar1[2].field_0x1c;
  pUVar1 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  this->IsJumpSkill = (bool)pUVar1[9].field_0x6;
  this->TargetDistanceMax = (int)param_2->TargetDistanceMax;
  this->SkillType = (uint)param_2->SkillType;
  return;
}

// MarkLastSkillMove @ 14ba5e260

void __thiscall UDS_SkillMoveAbilityData::MarkLastSkillMove(UDS_SkillMoveAbilityData *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->SkillMoveDataList).ArrayNum;
  if (iVar1 != 0) {
    uVar4 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar4 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (this->SkillMoveDataList).AllocatorInstance.Data
    [(longlong)(this->SkillMoveDataList).ArrayNum * 0x58 + -3] = (FScriptContainerElement)0x1;
  }
  return;
}

// ResetData @ 14ba69490

void __thiscall UDS_SkillMoveAbilityData::ResetData(UDS_SkillMoveAbilityData *this)

{
  int *piVar1;
  undefined8 uVar2;
  
  this->SkillID = 0;
  this->TargetDistanceMax = 0;
  DestructItems<FDS_AtomicSkillMoveData,int>
            ((FDS_AtomicSkillMoveData *)(this->SkillMoveDataList).AllocatorInstance.Data,
             (this->SkillMoveDataList).ArrayNum);
  piVar1 = &(this->SkillMoveDataList).ArrayMax;
  (this->SkillMoveDataList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,&(this->SkillMoveDataList).AllocatorInstance,0,piVar1);
  }
  this->MoveCollision = false;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ChangedDestLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ChangedDestLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->ChangedDestLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Y = (double)uVar2;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StopSkillDestLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StopSkillDestLocation).field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StopSkillDestTime = 0.0;
  (this->StopSkillDestLocation).field0_0x0._s_0.Z = (double)uVar2;
  return;
}

// ResetServerSkillDestLocation @ 14ba69750

void __thiscall
UDS_SkillMoveAbilityData::ResetServerSkillDestLocation(UDS_SkillMoveAbilityData *this,int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  TVector<double> *pTVar6;
  undefined1 *puVar7;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (*(int *)&(this->ServerSkillDestLocation).field_0x8 !=
      *(int *)&(this->ServerSkillDestLocation).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ServerSkillDestLocation).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ServerSkillDestLocation).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ServerSkillDestLocation).field_0x48 - 1U & param_1) *
                              4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->ServerSkillDestLocation;
      while (*(int *)(lVar1 + (longlong)iVar5 * 0x28) != param_1) {
        iVar5 = *(int *)(lVar1 + 0x20 + (longlong)iVar5 * 0x28);
        if (iVar5 == -1) {
          return;
        }
      }
      pTVar6 = TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
               ::FindChecked((TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                              *)&this->ServerSkillDestLocation,param_1);
      (pTVar6->field0_0x0)._s_0.X = (double)uVar2;
      (pTVar6->field0_0x0)._s_0.Y = (double)uVar3;
      (pTVar6->field0_0x0)._s_0.Z = (double)uVar4;
    }
  }
  return;
}

// SetChangedDestLocation @ 14ba6a910

void __thiscall
UDS_SkillMoveAbilityData::SetChangedDestLocation
          (UDS_SkillMoveAbilityData *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->ChangedDestLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->ChangedDestLocation).field0_0x0._s_0.Y = dVar1;
  (this->ChangedDestLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetIsCollision @ 14ba71860

void __thiscall
UDS_SkillMoveAbilityData::SetIsCollision(UDS_SkillMoveAbilityData *this,bool param_1)

{
  this->MoveCollision = param_1;
  return;
}

// SetIsDirectCollision @ 14ba71870

void __thiscall
UDS_SkillMoveAbilityData::SetIsDirectCollision(UDS_SkillMoveAbilityData *this,bool param_1)

{
  this->DirectCollisionMove = param_1;
  return;
}

// SetStopSkillInfo @ 14ba74e30

void __thiscall
UDS_SkillMoveAbilityData::SetStopSkillInfo
          (UDS_SkillMoveAbilityData *this,TVector<double> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->StopSkillDestLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->StopSkillDestLocation).field0_0x0._s_0.Y = dVar2;
  (this->StopSkillDestLocation).field0_0x0._s_0.Z = dVar1;
  this->StopSkillDestTime = param_2;
  return;
}

// TryCreateSkillMoveData @ 14ba76e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_SkillMoveAbilityData::TryCreateSkillMoveData
          (UDS_SkillMoveAbilityData *this,int param_1,float param_2,
          TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *param_3,FDS_AtomicSkillMoveData *param_4)

{
  float fVar1;
  double dVar2;
  int iVar3;
  FDS_SkillAttackTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar4 = FDS_SkillAttackTableRow::Get((longlong)param_1,true);
  if (pFVar4 == (FDS_SkillAttackTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_SkillMoveAbilityData::TryCreateSkillMoveData",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_158.Ptr,0x9a,
                 L"skillAttackTable is nullptr. skillAttackID : %d");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
        return false;
      }
    }
  }
  else if ((pFVar4->SkillMoveType != None) || (pFVar4->IsSetLocationPoint != false)) {
    pUVar6 = FWeakObjectPtr::Get(&param_3->WeakPtr);
    fVar1 = *(float *)&pUVar6[7].field_0x4;
    param_4->SkillAttackID = param_1;
    param_4->SkillMoveType = pFVar4->SkillMoveType;
    param_4->MoveRange = (int)pFVar4->MoveRange;
    dVar2 = pFVar4->EmptyTargetMoveRange;
    param_4->MoveStartTime = fVar1 * param_2;
    param_4->EmptyTargetMoveRange = (int)dVar2;
    param_4->DelayMove = (param_2 + pFVar4->DelayMove) * fVar1;
    param_4->MoveTime = fVar1 * pFVar4->MoveTime;
    param_4->MoveAngleMin = pFVar4->MoveAngleMin;
    param_4->MoveAngleMax = pFVar4->MoveAngleMax;
    param_4->AttachHoldingTime = pFVar4->AttachHoldingTime;
    ::FString::operator=(&param_4->AtkAttachSocket,&pFVar4->AtkAttachSocket);
    ::FString::operator=(&param_4->DefAttachSocket,&pFVar4->DefAttachSocket);
    param_4->CheckTargetAbnormalAction = pFVar4->CheckTargetAbnormalAction;
    pUVar6 = FWeakObjectPtr::Get(&param_3->WeakPtr);
    param_4->bIsJumpSkill = (bool)pUVar6[9].field_0x6;
    param_4->bIsSetLocationPoint = pFVar4->IsSetLocationPoint;
    iVar3 = param_4->MoveAngleMin;
    if (iVar3 != param_4->MoveAngleMax) {
      pUVar6 = FWeakObjectPtr::Get(&param_3->WeakPtr);
      if (*(int *)(pUVar6 + 0xd) != *(int *)&pUVar6[0xe].field_0x4) {
        puVar8 = *(undefined1 **)&pUVar6[0xe].field_0x10;
        if (*(undefined1 **)&pUVar6[0xe].field_0x10 == (undefined1 *)0x0) {
          puVar8 = &pUVar6[0xe].field_0x8;
        }
        iVar3 = *(int *)(puVar8 + (ulonglong)(*(int *)&pUVar6[0xe].field_0x18 - 1U & param_1) * 4);
        if (iVar3 != -1) {
          do {
            if (*(int *)(*(longlong *)&pUVar6[0xc].field_0x20 + (longlong)iVar3 * 0x10) == param_1)
            {
              piVar7 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                       ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                      *)&pUVar6[0xc].field_0x20,param_1);
              iVar3 = *piVar7;
              goto LAB_14ba77025;
            }
            iVar3 = *(int *)(*(longlong *)&pUVar6[0xc].field_0x20 + 8 + (longlong)iVar3 * 0x10);
          } while (iVar3 != -1);
        }
      }
      iVar3 = 0;
    }
LAB_14ba77025:
    param_4->MoveAngle = iVar3;
    return true;
  }
  return false;
}

// UpdateServerSkillDestLocation @ 14ba80bc0

void __thiscall
UDS_SkillMoveAbilityData::UpdateServerSkillDestLocation
          (UDS_SkillMoveAbilityData *this,int param_1,TVector<double> *param_2)

{
  double dVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  TVector<double> *pTVar5;
  int local_res10 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  FReadAccessScope local_28;
  
  local_res10[0] = param_1;
  pTVar5 = TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                       *)&this->ServerSkillDestLocation,param_1,local_res10);
  iVar4 = local_res10[0];
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (pTVar5->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (pTVar5->field0_0x0)._s_0.Y = dVar3;
  (pTVar5->field0_0x0)._s_0.Z = dVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ServerSkillDestLocationDelegate,&local_28);
  if ((*(int *)&(this->ServerSkillDestLocationDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->ServerSkillDestLocationDelegate).field_0x8,
     plVar2 != (longlong *)0x0)) {
    local_48 = *(undefined4 *)&param_2->field0_0x0;
    uStack_44 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uStack_40 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uStack_3c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    local_38 = (param_2->field0_0x0)._s_0.Z;
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar4,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ValidateAttackLinkData @ 14ba83270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_SkillMoveAbilityData::ValidateAttackLinkData
          (UDS_SkillMoveAbilityData *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1->ArrayNum != 0) {
    if (param_1->ArrayNum == param_2->ArrayNum) {
      return true;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SkillMoveAbilityData::ValidateAttackLinkData",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x72,L"attackLink count mismatch. skillID : %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// ValidateSkillData @ 14ba83360

bool __thiscall
UDS_SkillMoveAbilityData::ValidateSkillData
          (UDS_SkillMoveAbilityData *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  return bVar1;
}

// ValidateTableData @ 14ba83370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_SkillMoveAbilityData::ValidateTableData
          (UDS_SkillMoveAbilityData *this,FDS_SkillTableRow *param_1,
          FDS_SkillActLevelTableRow *param_2,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *param_3)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  uint uVar2;
  wchar_t *pwVar3;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == (FDS_SkillTableRow *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar1 = UDS_LogManager::GetInst();
    FWeakObjectPtr::Get(&param_3->WeakPtr);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SkillMoveAbilityData::ValidateTableData",0x2b,Yes);
    pwVar3 = L"skillTableRow is nullptr. skillID : %d";
    uVar2 = 0x5a;
  }
  else {
    if (param_2 != (FDS_SkillActLevelTableRow *)0x0) {
      return true;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar1 = UDS_LogManager::GetInst();
    FWeakObjectPtr::Get(&param_3->WeakPtr);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SkillMoveAbilityData::ValidateTableData",0x2b,Yes);
    pwVar3 = L"skillActLevelTableRow is nullptr. skillActLevelID : %d";
    uVar2 = 0x60;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar2,pwVar3);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

