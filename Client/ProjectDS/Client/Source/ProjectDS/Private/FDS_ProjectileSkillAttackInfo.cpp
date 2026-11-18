// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// FDS_ProjectileSkillAttackInfo @ 14baed150

FDS_ProjectileSkillAttackInfo * __thiscall
FDS_ProjectileSkillAttackInfo::FDS_ProjectileSkillAttackInfo
          (FDS_ProjectileSkillAttackInfo *this,FDS_ProjectileSkillAttackInfo *param_1)

{
  TArray<FDS_ProjectileInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FDS_ProjectileTargetInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  pTVar1 = &this->ProjectileInfoArray;
  this->bIsFinish_SkillAttackInfo = param_1->bIsFinish_SkillAttackInfo;
  this->bIsImpacted = param_1->bIsImpacted;
  this->SkillAttackTableID = param_1->SkillAttackTableID;
  this->SkillAttackTable = param_1->SkillAttackTable;
  this->SkillProjectileTable = param_1->SkillProjectileTable;
  dVar6 = (param_1->StartLocation).field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = (param_1->StartLocation).field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = dVar6;
  (this->StartLocation).field0_0x0._s_0.Z = (param_1->StartLocation).field0_0x0._s_0.Z;
  dVar6 = (param_1->StartDirection).field0_0x0._s_0.Y;
  (this->StartDirection).field0_0x0._s_0.X = (param_1->StartDirection).field0_0x0._s_0.X;
  (this->StartDirection).field0_0x0._s_0.Y = dVar6;
  (this->StartDirection).field0_0x0._s_0.Z = (param_1->StartDirection).field0_0x0._s_0.Z;
  this->StartHeight = param_1->StartHeight;
  this->ElapsedTime = param_1->ElapsedTime;
  piVar2 = &(this->ProjectileInfoArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ProjectileInfoArray).ArrayNum;
  pFVar5 = (param_1->ProjectileInfoArray).AllocatorInstance.Data;
  (this->ProjectileInfoArray).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0xf0);
  }
  pTVar3 = &this->TargetInfoArray;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TargetInfoArray).ArrayMax;
  iVar4 = (param_1->TargetInfoArray).ArrayNum;
  pFVar5 = (param_1->TargetInfoArray).AllocatorInstance.Data;
  (this->TargetInfoArray).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 7);
  }
  (this->CurveData).WeakPtr = (param_1->CurveData).WeakPtr;
  return this;
}

// FDS_ProjectileSkillAttackInfo @ 14baed2a0

FDS_ProjectileSkillAttackInfo * __thiscall
FDS_ProjectileSkillAttackInfo::FDS_ProjectileSkillAttackInfo(FDS_ProjectileSkillAttackInfo *this)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  this->bIsFinish_SkillAttackInfo = false;
  this->bIsImpacted = false;
  this->SkillAttackTableID = 0;
  this->SkillAttackTable = (FDS_SkillAttackTableRow *)0x0;
  this->SkillProjectileTable = (FDS_SkillProjectileTableRow *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8[0] = 0;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->StartDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  (this->ProjectileInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectileInfoArray).ArrayNum = 0;
  (this->ProjectileInfoArray).ArrayMax = 0;
  (this->TargetInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetInfoArray).ArrayNum = 0;
  (this->TargetInfoArray).ArrayMax = 0;
  this->StartHeight = 0.0;
  this->ElapsedTime = 0.0;
  (this->CurveData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CurveData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// AddTargetInfo @ 14baf1890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FDS_ProjectileSkillAttackInfo::AddTargetInfo
          (FDS_ProjectileSkillAttackInfo *this,RepeatedPtrField<server_msg::Projectile> *param_1)

{
  TArray<FDS_ProjectileTargetInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  Vector *pVVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FDS_EntityBase *this_00;
  UObject *pUVar11;
  ulonglong uVar12;
  longlong lVar13;
  Vector *pVVar14;
  MultiTargetHitPointDefaultTypeInternal *pMVar15;
  longlong lVar16;
  FDS_ProjectileSkillAttackInfo *pFVar17;
  uint uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_228 [32];
  ulong64 local_1f8;
  FWeakObjectPtr local_1f0;
  FWeakObjectPtr local_1e8;
  FWeakObjectPtr local_1e0;
  FDS_ProjectileSkillAttackInfo *local_1d8;
  FDS_EntityBase *pFStack_1d0;
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr FStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  char local_188;
  undefined7 uStack_187;
  TVector<double>_u_0 TStack_180;
  float local_168;
  FWeakObjectPtr FStack_164;
  undefined4 uStack_15c;
  FDS_ProjectileSkillAttackInfo *local_158;
  longlong *local_148;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_118;
  undefined2 local_110;
  TIterator local_108;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  local_d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar3 = *(uint *)&param_1->field_0x8;
  pTVar1 = &this->TargetInfoArray;
  local_158 = this;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar2 = &(this->TargetInfoArray).ArrayMax;
  if ((this->TargetInfoArray).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,uVar3,&pTVar1->AllocatorInstance,(this->TargetInfoArray).ArrayNum,piVar2);
  }
  fVar7 = __real_c2c80000;
  lVar16 = 0;
  pFVar17 = this;
  if (0 < (int)uVar3) {
    do {
      uVar12 = *(ulonglong *)param_1;
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulonglong *)(uVar12 + 7 + lVar16 * 8);
      }
      local_1c8.ObjectIndex = 0;
      local_1c8.ObjectSerialNumber = 0;
      local_1d8 = (FDS_ProjectileSkillAttackInfo *)0x0;
      pFStack_1d0 = (FDS_EntityBase *)0x0;
      local_1f8 = 0;
      FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_1f8);
      FStack_1c0.ObjectIndex = 0;
      FStack_1c0.ObjectSerialNumber = 0;
      local_1f8 = 0;
      FWeakObjectPtr::operator=(&FStack_1c0,(FObjectPtr)&local_1f8);
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      TStack_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      TStack_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_188 = '\0';
      dStack_1a0 = 0.0;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_198 = 0;
      uStack_190 = 0;
      TStack_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_168 = 0.0;
      FStack_164.ObjectIndex = 0;
      FStack_164.ObjectSerialNumber = 0;
      local_1f8 = 0;
      FWeakObjectPtr::operator=(&FStack_164,(FObjectPtr)&local_1f8);
      local_1f8 = *(ulong64 *)(uVar12 + 0x20);
      local_1d8 = pFVar17;
      this_00 = FDS_EntityBase::GetEntityBase(&local_1f8);
      if (this_00 != (FDS_EntityBase *)0x0) {
        (**(code **)(this_00->_padding_ + 0x150))(this_00);
        bVar8 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_1e8,(void *)0x0);
        if (!bVar8) {
          UDS_MovementCore::GetMovementCore((ulong64)&local_1e0);
          bVar8 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1e0,
                             (void *)0x0);
          if (!bVar8) {
            local_1c8 = local_1e8;
            FStack_1c0 = local_1e0;
            dStack_1a0 = *(double *)(uVar12 + 0x28);
            pFStack_1d0 = this_00;
            bVar8 = FDS_EntityBase::GetIsMultiHitCollision(this_00);
            if ((bVar8) && ((*(byte *)(uVar12 + 0x10) & 1) != 0)) {
              local_188 = '\x01';
              pMVar15 = &messages::_MultiTargetHitPoint_default_instance_;
              if (*(MultiTargetHitPointDefaultTypeInternal **)(uVar12 + 0x18) !=
                  (MultiTargetHitPointDefaultTypeInternal *)0x0) {
                pMVar15 = *(MultiTargetHitPointDefaultTypeInternal **)(uVar12 + 0x18);
              }
              pVVar4 = (pMVar15->_instance)._impl_.target_move_reference_position_;
              pVVar14 = &_Vector_default_instance_._instance;
              if (pVVar4 != (Vector *)0x0) {
                pVVar14 = pVVar4;
              }
              DS_Util::SetFVector((TVector<double> *)&TStack_180._s_0,pVVar14);
              local_168 = (pMVar15->_instance)._impl_.hit_capsule_radius_;
              local_d8.Elements._0_8_ = 0;
              local_d8.Elements._8_8_ = 0;
              local_d8.Elements._32_8_ = 0;
              local_d8.Elements._40_4_ = 0;
              local_d8.Elements._44_4_ = 0x80;
              local_d8.Elements._48_4_ = 0xffffffff;
              local_d8.Elements._52_4_ = 0;
              local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
              local_d8.HashSize = 0;
              cVar9 = (**(code **)(this_00->_padding_ + 0xf0))(this_00,&local_d8);
              if (cVar9 == '\0') {
                local_188 = '\0';
                local_168 = 0.0;
                TStack_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                TStack_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                TStack_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
              else if (local_188 == '\x01') {
                TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                ::TIterator::TIterator(&local_108,&local_d8);
                unique0x100007ff = local_108._padding_;
                auStack_140._8_8_ = local_108._padding_;
                local_118 = &local_d8;
                local_110 = 0;
                local_148 = (longlong *)local_108._padding_;
                auStack_140._0_8_ = local_108._padding_;
                local_128 = local_108._padding_;
                pTStack_120 = local_108.Set;
                uVar12 = (ulonglong)local_108._padding_ >> 0x20;
                fVar21 = fVar7;
                if ((int)((ulonglong)local_108._padding_ >> 0x20) <
                    *(int *)(local_108._padding_ + 0x18)) {
                  do {
                    local_1f0 = *(FWeakObjectPtr *)(*local_148 + 4 + (longlong)(int)uVar12 * 0x14);
                    bVar8 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                                      ((TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)&local_1f0
                                       ,(void *)0x0);
                    if (!bVar8) {
                      pUVar11 = FWeakObjectPtr::Get(&local_1f0);
                      local_108._padding_ = *(longlong *)&pUVar11[0xd].field_0x18;
                      dVar19 = *(double *)&pUVar11[0xd].field_0x8 - TStack_180._s_0.X;
                      dVar6 = *(double *)&pUVar11[0xd].field_0x10 - TStack_180._s_0.Y;
                      fVar20 = (float)SQRT(dVar6 * dVar6 + dVar19 * dVar19 +
                                           ((double)local_108._padding_ - TStack_180._s_0.Z) *
                                           ((double)local_108._padding_ - TStack_180._s_0.Z));
                      if ((fVar21 < 0.0) || (fVar20 < fVar21)) {
                        FStack_164.ObjectIndex = local_1f0.ObjectIndex;
                        FStack_164.ObjectSerialNumber = local_1f0.ObjectSerialNumber;
                        fVar21 = fVar20;
                      }
                    }
                    uStack_130 = uStack_130 & ~auStack_140._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
                    uVar12 = (ulonglong)uStack_12c;
                  } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
                  if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
                    uVar18 = *(int *)&(local_118->Elements).field_0x8 -
                             *(int *)&(local_118->Elements).field_0x34;
                    if (uVar18 < 4) {
                      iVar10 = 1;
                    }
                    else {
                      uVar12 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
                      lVar13 = 0x3f;
                      if (uVar12 != 0) {
                        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                        }
                      }
                      iVar10 = 1 << ((byte)lVar13 & 0x1f);
                    }
                    if (((0 < (int)uVar18) && (local_118->HashSize < iVar10)) ||
                       (iVar10 < local_118->HashSize)) {
                      local_118->HashSize = iVar10;
                      TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      ::Rehash(local_118);
                    }
                  }
                }
              }
              local_d8.HashSize = 0;
              if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_d8.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_d8.Elements);
            }
            else {
              local_188 = '\0';
            }
            iVar10 = (this->TargetInfoArray).ArrayNum;
            if (iVar10 == *piVar2) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x880,&pTVar1->AllocatorInstance,piVar2);
            }
            (this->TargetInfoArray).ArrayNum = iVar10 + 1;
            pFVar5 = (pTVar1->AllocatorInstance).Data;
            lVar13 = (longlong)iVar10 * 0x80;
            *(FDS_ProjectileSkillAttackInfo **)(pFVar5 + lVar13) = local_1d8;
            *(FDS_EntityBase **)(pFVar5 + lVar13 + 8) = pFStack_1d0;
            *(FWeakObjectPtr *)(pFVar5 + lVar13 + 0x10) = local_1c8;
            ((FWeakObjectPtr *)(pFVar5 + lVar13 + 0x10))[1] = FStack_1c0;
            *(double *)(pFVar5 + lVar13 + 0x20) = local_1b8;
            *(double *)(pFVar5 + lVar13 + 0x20 + 8) = dStack_1b0;
            *(double *)(pFVar5 + lVar13 + 0x30) = local_1a8;
            *(double *)(pFVar5 + lVar13 + 0x30 + 8) = dStack_1a0;
            *(undefined8 *)(pFVar5 + lVar13 + 0x40) = local_198;
            *(undefined8 *)(pFVar5 + lVar13 + 0x40 + 8) = uStack_190;
            *(ulonglong *)(pFVar5 + lVar13 + 0x50) = CONCAT71(uStack_187,local_188);
            *(double *)(pFVar5 + lVar13 + 0x50 + 8) = TStack_180._s_0.X;
            *(double *)(pFVar5 + lVar13 + 0x60) = TStack_180._s_0.Y;
            *(double *)(pFVar5 + lVar13 + 0x60 + 8) = TStack_180._s_0.Z;
            *(ulonglong *)(pFVar5 + lVar13 + 0x70) = CONCAT44(FStack_164.ObjectIndex,local_168);
            *(ulonglong *)(pFVar5 + lVar13 + 0x70 + 8) =
                 CONCAT44(uStack_15c,FStack_164.ObjectSerialNumber);
          }
        }
      }
      lVar16 = lVar16 + 1;
      pFVar17 = local_158;
    } while (lVar16 < (int)uVar3);
  }
  return;
}

// ClearSkillAttackInfo @ 14baf9b10

void __thiscall
FDS_ProjectileSkillAttackInfo::ClearSkillAttackInfo(FDS_ProjectileSkillAttackInfo *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FDS_ProjectileInfo *this_00;
  FScriptContainerElement *pFVar4;
  FDS_ProjectileInfo *pFVar5;
  FScriptContainerElement *pFVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  this->bIsFinish_SkillAttackInfo = true;
  this->bIsImpacted = false;
  this->SkillAttackTableID = 0;
  this->SkillAttackTable = (FDS_SkillAttackTableRow *)0x0;
  this->SkillProjectileTable = (FDS_SkillProjectileTableRow *)0x0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar3;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->StartDirection).field0_0x0._s_0.Y = (double)uVar3;
  (this->StartDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->StartHeight = 0.0;
  this->ElapsedTime = 0.0;
  iVar2 = (this->ProjectileInfoArray).ArrayNum;
  this_00 = (FDS_ProjectileInfo *)(this->ProjectileInfoArray).AllocatorInstance.Data;
  pFVar5 = this_00 + iVar2;
  while( true ) {
    if ((this->ProjectileInfoArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_ProjectileInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (this_00 == pFVar5) break;
    FDS_ProjectileInfo::ClearProjectileInfo(this_00);
    this_00 = this_00 + 1;
  }
  iVar2 = (this->TargetInfoArray).ArrayNum;
  pFVar4 = (this->TargetInfoArray).AllocatorInstance.Data;
  pFVar6 = pFVar4 + (longlong)iVar2 * 0x80;
  while( true ) {
    if ((this->TargetInfoArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_ProjectileTargetInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar4 == pFVar6) break;
    *(undefined8 *)pFVar4 = 0;
    *(undefined8 *)(pFVar4 + 8) = 0;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    *(FWeakObjectPtr *)(pFVar4 + 0x10) = local_res10;
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
    *(FWeakObjectPtr *)(pFVar4 + 0x18) = local_res18;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    *(double *)(pFVar4 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pFVar4 + 0x28) = uVar3;
    *(double *)(pFVar4 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(pFVar4 + 0x38) = 0;
    *(undefined8 *)(pFVar4 + 0x40) = 0;
    *(undefined8 *)(pFVar4 + 0x48) = 0;
    pFVar4[0x50] = (FScriptContainerElement)0x0;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(pFVar4 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pFVar4 + 0x60) = uVar3;
    *(double *)(pFVar4 + 0x68) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)(pFVar4 + 0x70) = 0;
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
    *(FWeakObjectPtr *)(pFVar4 + 0x74) = local_res20;
    pFVar4 = pFVar4 + 0x80;
  }
  piVar1 = &(this->ProjectileInfoArray).ArrayMax;
  (this->ProjectileInfoArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,0,&(this->ProjectileInfoArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TargetInfoArray).ArrayMax;
  (this->TargetInfoArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,&(this->TargetInfoArray).AllocatorInstance,0,piVar1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->CurveData).WeakPtr = local_res8;
  return;
}

// ImpactProjectile @ 14bb11fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FDS_ProjectileSkillAttackInfo::ImpactProjectile
          (FDS_ProjectileSkillAttackInfo *this,TVector<double> *param_1,TVector<double> *param_2,
          float *param_3)

{
  int *piVar1;
  double dVar2;
  FDS_SkillProjectileTableRow *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  UDS_GameInstance *this_00;
  UClass *pUVar20;
  UDS_ProjectileManager *this_01;
  UDS_LogManager *pUVar21;
  TQuat<double> *pTVar22;
  TRotator<double> *pTVar23;
  UNiagaraSystem *pUVar24;
  UObject *pUVar25;
  FDS_ProjectileTargetInfo *this_02;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_558 [32];
  FWeakObjectPtr local_508;
  UDS_ProjectileManager *local_500;
  longlong local_4f8;
  TVector<double>_u_0 local_4f0;
  undefined8 local_4d8;
  UNiagaraComponent *local_4d0;
  longlong local_4c8;
  TVector<double> *local_4c0;
  float *local_4b8;
  double local_4b0;
  undefined1 local_4a8 [16];
  double local_498;
  double local_490;
  double dStack_488;
  double local_480;
  TVector<double>_u_0 local_478;
  TRotator<double> local_458;
  TVector<double>_u_0 local_438 [2];
  double local_408;
  FDS_ProjectileTargetInfo local_3f8;
  TQuat<double> local_378;
  TRotator<double> local_358;
  double local_330;
  TRotator<double> local_328;
  TQuat<double> local_308;
  FDS_ProjectileSkillAttackInfo *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8 [2];
  double local_2c8 [2];
  double local_2b8 [2];
  double local_2a8 [2];
  double local_298 [2];
  double local_288 [2];
  undefined1 local_278;
  undefined7 uStack_277;
  undefined8 uStack_270;
  double local_268 [2];
  double local_258 [2];
  double local_248 [2];
  double local_238 [2];
  double local_228 [2];
  double local_218 [2];
  FWeakObjectPtr local_208;
  undefined8 uStack_200;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1f8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_4c0 = param_2;
  local_4b8 = param_3;
  if ((this->SkillAttackTable == (FDS_SkillAttackTableRow *)0x0) ||
     (this->SkillProjectileTable == (FDS_SkillProjectileTableRow *)0x0)) goto LAB_14bb127e5;
  dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
  if ((this->TargetInfoArray).ArrayNum == 0) {
    FDS_ProjectileTargetInfo::FDS_ProjectileTargetInfo(&local_3f8,this);
    pFVar3 = this->SkillProjectileTable;
    dVar2 = pFVar3->ProjectileSpeed;
    local_3f8.LastTargetLocation.field0_0x0._s_0.Z =
         dVar2 * (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    dVar6 = dVar2 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    local_3f8.LastTargetLocation.field0_0x0._8_4_ = SUB84(dVar6,0);
    local_3f8.LastTargetLocation.field0_0x0._s_0.X =
         dVar2 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
    local_3f8.LastTargetLocation.field0_0x0._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_3f8.ArrivalTime = (double)pFVar3->ProjectileTime + dVar5;
    local_3f8.MoveTotalTime = (double)pFVar3->ProjectileTime;
    if (pFVar3->IsAfterType == true) {
      local_3f8.EndAfterTime = local_3f8.MoveTotalTime;
    }
    iVar18 = (this->TargetInfoArray).ArrayNum;
    piVar1 = &(this->TargetInfoArray).ArrayMax;
    if (iVar18 == *piVar1) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x880,&(this->TargetInfoArray).AllocatorInstance,piVar1);
    }
    (this->TargetInfoArray).ArrayNum = iVar18 + 1;
    pFVar19 = (this->TargetInfoArray).AllocatorInstance.Data + (longlong)iVar18 * 0x80;
    *(FDS_ProjectileSkillAttackInfo **)pFVar19 = local_3f8.ParentSkillAttackInfo;
    *(FDS_EntityBase **)(pFVar19 + 8) = local_3f8.TargetEntity;
    *(FWeakObjectPtr *)(pFVar19 + 0x10) = local_3f8.TargetEntityActor.WeakPtr;
    *(FWeakObjectPtr *)(pFVar19 + 0x18) = local_3f8.TargetMovementCore.WeakPtr;
    *(double *)(pFVar19 + 0x20) = local_3f8.LastTargetLocation.field0_0x0._s_0.X;
    *(double *)(pFVar19 + 0x28) = local_3f8.LastTargetLocation.field0_0x0._s_0.Y;
    *(double *)(pFVar19 + 0x30) = local_3f8.LastTargetLocation.field0_0x0._s_0.Z;
    *(double *)(pFVar19 + 0x38) = local_3f8.ArrivalTime;
    *(double *)(pFVar19 + 0x40) = local_3f8.MoveTotalTime;
    *(double *)(pFVar19 + 0x48) = local_3f8.EndAfterTime;
    *(undefined8 *)(pFVar19 + 0x50) = local_3f8._80_8_;
    *(double *)(pFVar19 + 0x58) = local_3f8.HitSphereLocation.field0_0x0._s_0.X;
    *(double *)(pFVar19 + 0x60) = local_3f8.HitSphereLocation.field0_0x0._s_0.Y;
    *(double *)(pFVar19 + 0x68) = local_3f8.HitSphereLocation.field0_0x0._s_0.Z;
    *(undefined8 *)(pFVar19 + 0x70) = local_3f8._112_8_;
    *(undefined8 *)(pFVar19 + 0x78) = local_3f8._120_8_;
  }
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) goto LAB_14bb127e5;
  pUVar20 = Z_Construct_UClass_UDS_ProjectileManager_NoRegister();
  this_01 = (UDS_ProjectileManager *)UDS_GameInstance::GetManager(this_00,(FName)pUVar20->_padding_)
  ;
  if (this_01 == (UDS_ProjectileManager *)0x0) {
LAB_14bb121a4:
    this_01 = (UDS_ProjectileManager *)0x0;
    local_500 = (UDS_ProjectileManager *)0x0;
  }
  else {
    local_500 = this_01;
    pUVar20 = Z_Construct_UClass_UDS_ProjectileManager_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14bb121a4;
  }
  if (this_01 != (UDS_ProjectileManager *)0x0) {
    UDS_ProjectileManager::GetProjectileEffect(this_01,&local_508.ObjectIndex);
    bVar17 = TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *)&local_508,(void *)0x0);
    if (!bVar17) {
      uVar28 = (this->TargetInfoArray).ArrayNum;
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
      }
      if ((this->ProjectileInfoArray).ArrayMax < (int)uVar28) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf0,0x10,uVar28,&(this->ProjectileInfoArray).AllocatorInstance,
                   (this->ProjectileInfoArray).ArrayNum,&(this->ProjectileInfoArray).ArrayMax);
      }
      uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar11 = __real_3e45798ee2308c3a;
      dVar6 = __real_3e45798ee0000000;
      dVar2 = __real_3ff0000000000000;
      uVar27 = 0;
      lVar26 = 0;
      local_4c8 = (longlong)(int)uVar28;
      if (0 < (int)uVar28) {
        local_4f8 = 0;
        do {
          lVar14 = local_4f8;
          local_2d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_2d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_2c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_2c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_2b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_2b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_2a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_2a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_298[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_298[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_288[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_288[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          local_268[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_268[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_258[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_258[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_248[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_248[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_238[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_238[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_228[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_228[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_218[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_218[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          local_2e8 = (FDS_ProjectileSkillAttackInfo *)0x0;
          uStack_2e0 = 0;
          local_278 = 0;
          local_208.ObjectIndex = 0;
          local_208.ObjectSerialNumber = 0;
          local_4d8 = 0;
          FWeakObjectPtr::operator=(&local_208,(FObjectPtr)&local_4d8);
          uVar28 = 0;
          if ((int)uVar27 < (this->TargetInfoArray).ArrayNum) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          local_2e8 = this;
          if ((uVar28 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_02 = (FDS_ProjectileTargetInfo *)
                    ((this->TargetInfoArray).AllocatorInstance.Data + lVar14);
          FDS_ProjectileTargetInfo::UpdateTargetLocationByMoveType(this_02);
          if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X ==
                (this_02->LastTargetLocation).field0_0x0._s_0.X) &&
              (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y ==
               (this_02->LastTargetLocation).field0_0x0._s_0.Y)) &&
             (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z ==
              (this_02->LastTargetLocation).field0_0x0._s_0.Z)) {
            pUVar21 = UDS_LogManager::GetInst();
            if (pUVar21 != (UDS_LogManager *)0x0) {
              pUVar21 = UDS_LogManager::GetInst();
              local_1f8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_1f8,"FDS_ProjectileSkillAttackInfo::ImpactProjectile",0x2f,Yes);
              UDS_LogManager::PrintLog
                        (pUVar21,1,Warning,local_1f8.Ptr,0x22f,L"Couldn\'t find target location.");
              if ((void *)local_1f8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_1f8._padding_);
              }
            }
          }
          else {
            local_2b8 = *(double (*) [2])&param_1->field0_0x0;
            local_2a8[1] = 0.0;
            local_2a8[0] = (param_1->field0_0x0)._s_0.Z;
            local_4f0._s_0.Y =
                 (this_02->LastTargetLocation).field0_0x0._s_0.Y - (param_1->field0_0x0)._s_0.Y;
            local_4f0._s_0.X =
                 (this_02->LastTargetLocation).field0_0x0._s_0.X - (param_1->field0_0x0)._s_0.X;
            local_4f0._s_0.Z =
                 (this_02->LastTargetLocation).field0_0x0._s_0.Z - (param_1->field0_0x0)._s_0.Z;
            dVar7 = local_4f0._s_0.X * local_4f0._s_0.X + local_4f0._s_0.Y * local_4f0._s_0.Y +
                    local_4f0._s_0.Z * local_4f0._s_0.Z;
            if (dVar6 < dVar7) {
              local_4b0 = dVar2 / SQRT(dVar7);
              local_4f0._s_0.X = local_4b0 * local_4f0._s_0.X;
              local_4f0._s_0.Y = local_4b0 * local_4f0._s_0.Y;
              local_4f0._s_0.Z = local_4b0 * local_4f0._s_0.Z;
            }
            UE::Math::TVector<double>::ToOrientationRotator
                      ((TVector<double> *)&local_4f0._s_0,&local_358);
            pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_358,&local_308);
            local_378.X = pTVar22->X;
            local_378.Y = pTVar22->Y;
            local_2d8[0] = pTVar22->X;
            local_2d8[1] = pTVar22->Y;
            local_378.Z = pTVar22->Z;
            local_378.W = pTVar22->W;
            local_2c8[0] = pTVar22->Z;
            local_2c8[1] = pTVar22->W;
            dVar7 = this->SkillProjectileTable->ProjectileEffectScale;
            dVar8 = dVar7 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            local_498 = dVar7 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            uVar30 = SUB84(dVar7 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
            uVar31 = (undefined4)
                     ((ulonglong)(dVar7 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y) >>
                     0x20);
            local_298[1]._0_4_ = uVar30;
            local_298[0] = dVar8;
            local_298[1]._4_4_ = uVar31;
            local_4a8._8_4_ = uVar30;
            local_4a8._0_8_ = dVar8;
            local_4a8._12_4_ = uVar31;
            local_288[1] = 0.0;
            local_288[0] = local_498;
            local_408 = local_498;
            local_330 = local_498;
            pTVar23 = UE::Math::TQuat<double>::Rotator(&local_378,&local_328);
            dVar15 = local_2b8[0];
            dVar16 = local_2b8[1];
            local_480 = local_2a8[0];
            dVar9 = pTVar23->Pitch;
            dVar10 = pTVar23->Yaw;
            dVar7 = pTVar23->Roll;
            local_408 = local_2a8[0];
            local_490 = local_2b8[0];
            dStack_488 = local_2b8[1];
            pUVar24 = (UNiagaraSystem *)FWeakObjectPtr::Get(&local_508);
            pUVar25 = (UObject *)(**(code **)(local_500->_padding_ + 0x180))(local_500);
            local_478._s_0.Z = local_330;
            local_438[0]._s_0.Z = local_408;
            local_478._8_4_ = uVar30;
            local_478._0_8_ = dVar8;
            local_478._12_4_ = uVar31;
            local_438[0]._s_0.X = dVar15;
            local_438[0]._s_0.Y = dVar16;
            local_458.Pitch = dVar9;
            local_458.Yaw = dVar10;
            local_458.Roll = dVar7;
            local_4d0 = UNiagaraFunctionLibrary::SpawnSystemAtLocation
                                  (pUVar25,pUVar24,(TVector<double> *)&local_438[0]._s_0,&local_458,
                                   (TVector<double> *)&local_478._s_0,false,true,None,true);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_4d0 != (UNiagaraComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_4d0);
            }
            FWeakObjectPtr::operator=(&local_208,(FObjectPtr)&local_4d0);
            bVar17 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *)&local_208,
                                (void *)0x0);
            if (bVar17) goto LAB_14bb127e5;
            dVar7 = this_02->MoveTotalTime;
            uVar28 = SUB84(dVar7,0) & uVar12;
            uVar29 = (uint)((ulonglong)dVar7 >> 0x20) & uVar13;
            if ((double)CONCAT44(uVar29,uVar28) < dVar11 ||
                (double)CONCAT44(uVar29,uVar28) == dVar11) {
              dVar7 = this_02->ArrivalTime - dVar5;
              this_02->MoveTotalTime = dVar7;
              if (dVar7 <= 0.0) goto LAB_14bb12780;
            }
            if ((this->SkillProjectileTable->IsAfterType == true) &&
               (uVar28 = SUB84(this_02->EndAfterTime,0) & uVar12,
               uVar29 = (uint)((ulonglong)this_02->EndAfterTime >> 0x20) & uVar13,
               (double)CONCAT44(uVar29,uVar28) < dVar11 || (double)CONCAT44(uVar29,uVar28) == dVar11
               )) {
              this_02->EndAfterTime = (double)this->SkillProjectileTable->AfterTime + dVar7;
            }
            iVar18 = (this->ProjectileInfoArray).ArrayNum;
            if (iVar18 == (this->ProjectileInfoArray).ArrayMax) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10f0,&(this->ProjectileInfoArray).AllocatorInstance,
                                  &(this->ProjectileInfoArray).ArrayMax);
            }
            (this->ProjectileInfoArray).ArrayNum = iVar18 + 1;
            pFVar19 = (this->ProjectileInfoArray).AllocatorInstance.Data + (longlong)iVar18 * 0xf0;
            *(FDS_ProjectileSkillAttackInfo **)pFVar19 = local_2e8;
            *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_2dc,uStack_2e0);
            *(double *)(pFVar19 + 0x10) = local_2d8[0];
            *(double *)(pFVar19 + 0x18) = local_2d8[1];
            *(double *)(pFVar19 + 0x20) = local_2c8[0];
            *(double *)(pFVar19 + 0x28) = local_2c8[1];
            *(double *)(pFVar19 + 0x30) = local_2b8[0];
            *(double *)(pFVar19 + 0x38) = local_2b8[1];
            *(double *)(pFVar19 + 0x40) = local_2a8[0];
            *(double *)(pFVar19 + 0x48) = local_2a8[1];
            *(double *)(pFVar19 + 0x50) = local_298[0];
            *(double *)(pFVar19 + 0x58) = local_298[1];
            *(double *)(pFVar19 + 0x60) = local_288[0];
            *(double *)(pFVar19 + 0x68) = local_288[1];
            *(ulonglong *)(pFVar19 + 0x70) = CONCAT71(uStack_277,local_278);
            *(undefined8 *)(pFVar19 + 0x78) = uStack_270;
            *(double *)(pFVar19 + 0x80) = local_268[0];
            *(double *)(pFVar19 + 0x88) = local_268[1];
            *(double *)(pFVar19 + 0x90) = local_258[0];
            *(double *)(pFVar19 + 0x98) = local_258[1];
            *(double *)(pFVar19 + 0xa0) = local_248[0];
            *(double *)(pFVar19 + 0xa8) = local_248[1];
            *(double *)(pFVar19 + 0xb0) = local_238[0];
            *(double *)(pFVar19 + 0xb8) = local_238[1];
            *(double *)(pFVar19 + 0xc0) = local_228[0];
            *(double *)(pFVar19 + 200) = local_228[1];
            *(double *)(pFVar19 + 0xd0) = local_218[0];
            *(double *)(pFVar19 + 0xd8) = local_218[1];
            *(FWeakObjectPtr *)(pFVar19 + 0xe0) = local_208;
            *(undefined8 *)(pFVar19 + 0xe8) = uStack_200;
          }
LAB_14bb12780:
          uVar27 = uVar27 + 1;
          local_4f8 = local_4f8 + 0x80;
          lVar26 = lVar26 + 1;
          param_2 = local_4c0;
        } while (lVar26 < local_4c8);
      }
      if ((this->ProjectileInfoArray).ArrayNum != 0) {
        this->bIsImpacted = true;
        dVar5 = (param_1->field0_0x0)._s_0.Y;
        (this->StartLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
        (this->StartLocation).field0_0x0._s_0.Y = dVar5;
        (this->StartLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        dVar5 = (param_2->field0_0x0)._s_0.Y;
        (this->StartDirection).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
        (this->StartDirection).field0_0x0._s_0.Y = dVar5;
        (this->StartDirection).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        this->StartHeight = *local_4b8;
        this->ElapsedTime = 0.0;
        return;
      }
    }
  }
LAB_14bb127e5:
  ClearSkillAttackInfo(this);
  return;
}

// IsValidMemberVariables @ 14bb17340

bool __thiscall
FDS_ProjectileSkillAttackInfo::IsValidMemberVariables(FDS_ProjectileSkillAttackInfo *this)

{
  if (this->SkillAttackTable != (FDS_SkillAttackTableRow *)0x0) {
    return this->SkillProjectileTable != (FDS_SkillProjectileTableRow *)0x0;
  }
  return false;
}

// ProcessSkillAttackInfo @ 14bb29600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_ProjectileSkillAttackInfo::ProcessSkillAttackInfo
          (FDS_ProjectileSkillAttackInfo *this,float *param_1)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  UDS_MovementCore *this_00;
  USceneComponent *this_01;
  uint uVar8;
  FDS_ProjectileInfo *this_02;
  FDS_ProjectileTargetInfo *pFVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_148 [32];
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (this->bIsImpacted != false) {
    if ((this->SkillAttackTable != (FDS_SkillAttackTableRow *)0x0) &&
       (this->SkillProjectileTable != (FDS_SkillProjectileTableRow *)0x0)) {
      uVar8 = 0;
      lVar10 = (longlong)(this->ProjectileInfoArray).ArrayNum;
      bVar3 = true;
      this->ElapsedTime = (double)*param_1 + this->ElapsedTime;
      uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar4 = __real_3e45798ee2308c3a;
      if (0 < lVar10) {
        lVar11 = 0;
        lVar12 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar8 < (this->ProjectileInfoArray).ArrayNum) {
            uVar13 = ~uVar8 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_02 = (FDS_ProjectileInfo *)
                    ((this->ProjectileInfoArray).AllocatorInstance.Data + lVar12);
          if (this_02->ProjectileState != Finish) {
            bVar3 = false;
            if (((int)uVar8 < 0) || ((this->TargetInfoArray).ArrayNum <= (int)uVar8)) {
LAB_14bb298be:
              FDS_ProjectileInfo::ClearProjectileInfo(this_02);
            }
            else {
              uVar13 = 0;
              if ((int)uVar8 < (this->TargetInfoArray).ArrayNum) {
                uVar13 = ~uVar8 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar9 = (FDS_ProjectileTargetInfo *)
                       ((this->TargetInfoArray).AllocatorInstance.Data + lVar11);
              if (this_02->ProjectileState == TracingTarget) {
                uVar13 = SUB84(pFVar9->MoveTotalTime,0) & uVar5;
                uVar14 = (uint)((ulonglong)pFVar9->MoveTotalTime >> 0x20) & uVar6;
                if ((double)CONCAT44(uVar14,uVar13) < dVar4 ||
                    (double)CONCAT44(uVar14,uVar13) == dVar4) goto LAB_14bb298be;
                TracingTargetByMoveType(this,this_02,pFVar9);
              }
              else if (this_02->ProjectileState == OnAfterTime) {
                dVar1 = pFVar9->EndAfterTime;
                uVar13 = SUB84(dVar1,0) & uVar5;
                uVar14 = (uint)((ulonglong)dVar1 >> 0x20) & uVar6;
                if ((double)CONCAT44(uVar14,uVar13) < dVar4 ||
                    (double)CONCAT44(uVar14,uVar13) == dVar4) goto LAB_14bb298be;
                if (this->ElapsedTime <= dVar1 && dVar1 != this->ElapsedTime) {
                  if (this_02->bUseOnAfterTimeAttach == true) {
                    bVar7 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                      (&pFVar9->TargetMovementCore,(void *)0x0);
                    if (bVar7) {
                      this_02->ProjectileState = Finish;
                    }
                    else {
                      this_00 = (UDS_MovementCore *)
                                FWeakObjectPtr::Get(&(pFVar9->TargetMovementCore).WeakPtr);
                      UDS_MovementCore::GetActorTransform(this_00,&local_b8);
                      local_118.Rotation.XY.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                      local_118.Rotation.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[0];
                      local_118.Rotation.XY.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                0x20);
                      local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                      local_118.Rotation.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[2];
                      local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                0x20);
                      local_118.Translation.XY.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                      local_118.Translation.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                      local_118.Translation.XY.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >>
                                0x20);
                      local_118.Translation.ZW.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                      local_118.Translation.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                      local_118.Translation.ZW.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >>
                                0x20);
                      local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                      local_118.Scale3D.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[0];
                      local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >>
                                0x20);
                      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                      local_118.Scale3D.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[2];
                      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >>
                                0x20);
                      UE::Math::TTransform<double>::Multiply
                                (&local_118,&this_02->OnAfterTimeRelativeTransform,&local_b8);
                      (this_02->EffectTransform).Rotation.XY.m128d_f64[0] =
                           local_118.Rotation.XY.m128d_f64[0];
                      (this_02->EffectTransform).Rotation.XY.m128d_f64[1] =
                           local_118.Rotation.XY.m128d_f64[1];
                      (this_02->EffectTransform).Rotation.ZW.m128d_f64[0] =
                           local_118.Rotation.ZW.m128d_f64[0];
                      (this_02->EffectTransform).Rotation.ZW.m128d_f64[1] =
                           local_118.Rotation.ZW.m128d_f64[1];
                      (this_02->EffectTransform).Translation.XY.m128d_f64[0] =
                           local_118.Translation.XY.m128d_f64[0];
                      (this_02->EffectTransform).Translation.XY.m128d_f64[1] =
                           local_118.Translation.XY.m128d_f64[1];
                      (this_02->EffectTransform).Translation.ZW.m128d_f64[0] =
                           local_118.Translation.ZW.m128d_f64[0];
                      (this_02->EffectTransform).Translation.ZW.m128d_f64[1] =
                           local_118.Translation.ZW.m128d_f64[1];
                      (this_02->EffectTransform).Scale3D.XY.m128d_f64[0] =
                           local_118.Scale3D.XY.m128d_f64[0];
                      (this_02->EffectTransform).Scale3D.XY.m128d_f64[1] =
                           local_118.Scale3D.XY.m128d_f64[1];
                      (this_02->EffectTransform).Scale3D.ZW.m128d_f64[0] =
                           local_118.Scale3D.ZW.m128d_f64[0];
                      (this_02->EffectTransform).Scale3D.ZW.m128d_f64[1] =
                           local_118.Scale3D.ZW.m128d_f64[1];
                      this_01 = (USceneComponent *)
                                FWeakObjectPtr::Get(&(this_02->EffectComp).WeakPtr);
                      USceneComponent::SetWorldTransform
                                (this_01,&this_02->EffectTransform,false,(FHitResult *)0x0,None);
                    }
                  }
                }
                else {
                  this_02->ProjectileState = Finish;
                }
              }
            }
          }
          uVar8 = uVar8 + 1;
          lVar12 = lVar12 + 0xf0;
          lVar11 = lVar11 + 0x80;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        if (!bVar3) {
          return;
        }
      }
    }
    ClearSkillAttackInfo(this);
  }
  return;
}

// TracingTargetByMoveType @ 14bb3a080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FDS_ProjectileSkillAttackInfo::TracingTargetByMoveType
          (FDS_ProjectileSkillAttackInfo *this,FDS_ProjectileInfo *param_1,
          FDS_ProjectileTargetInfo *param_2)

{
  EDS_ProjectileMoveType EVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  bool bVar6;
  TQuat<double> *pTVar7;
  USceneComponent *this_00;
  UDS_MovementCore *this_01;
  TTransform<double> *pTVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_1b8 [32];
  TVector<double>_u_0 local_188;
  TRotator<double> local_170;
  TQuat<double> local_148;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  dVar10 = __real_3ff0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  EVar1 = this->SkillProjectileTable->ProjectileMoveType;
  if (EVar1 == TargetMove) {
    dVar9 = this->ElapsedTime / param_2->MoveTotalTime;
    if (__real_3ff0000000000000 <= dVar9) {
      dVar9 = __real_3ff0000000000000;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    FDS_ProjectileTargetInfo::UpdateTargetLocationByMoveType(param_2);
    local_170.Roll = (param_1->EffectTransform).Translation.ZW.m128d_f64[0];
    dVar4 = ((param_2->LastTargetLocation).field0_0x0._s_0.X -
            (this->StartLocation).field0_0x0._s_0.X) * dVar9 +
            (this->StartLocation).field0_0x0._s_0.X;
    local_148.Z = ((param_2->LastTargetLocation).field0_0x0._s_0.Z -
                  (this->StartLocation).field0_0x0._s_0.Z) * dVar9 +
                  (this->StartLocation).field0_0x0._s_0.Z;
    dVar9 = ((param_2->LastTargetLocation).field0_0x0._s_0.Y -
            (this->StartLocation).field0_0x0._s_0.Y) * dVar9 +
            (this->StartLocation).field0_0x0._s_0.Y;
    local_188._s_0.X = dVar4 - (param_1->EffectTransform).Translation.XY.m128d_f64[0];
    local_188._s_0.Y = dVar9 - (param_1->EffectTransform).Translation.XY.m128d_f64[1];
    auVar3._8_4_ = SUB84(dVar9,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])(param_1->EffectTransform).Translation.XY.m128d_f64 = auVar3;
    (param_1->EffectTransform).Translation.ZW.m128d_f64[0] = local_148.Z;
    (param_1->EffectTransform).Translation.ZW.m128d_f64[1] = 0.0;
    local_188._s_0.Z = local_148.Z - local_170.Roll;
    dVar9 = local_188._s_0.Y * local_188._s_0.Y + local_188._s_0.X * local_188._s_0.X +
            local_188._s_0.Z * local_188._s_0.Z;
    if (__real_3e45798ee0000000 < dVar9) {
      dVar10 = dVar10 / SQRT(dVar9);
      local_188._s_0.X = local_188._s_0.X * dVar10;
      local_188._s_0.Z = local_188._s_0.Z * dVar10;
LAB_14bb3a2f2:
      local_188._s_0.Y = local_188._s_0.Y * dVar10;
    }
  }
  else {
    if (EVar1 == TargetCurve) {
      TracingTarget_TargetCurve(this,param_1,param_2);
      goto LAB_14bb3a35e;
    }
    if (EVar1 != DirectTargetMove) {
      if (EVar1 == ZoneCurve) {
        TracingTarget_ZoneCurve(this,param_1,param_2);
      }
      goto LAB_14bb3a35e;
    }
    dVar9 = this->ElapsedTime / param_2->MoveTotalTime;
    if (__real_3ff0000000000000 <= dVar9) {
      dVar9 = __real_3ff0000000000000;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    local_170.Roll = (param_1->EffectTransform).Translation.ZW.m128d_f64[0];
    dVar5 = ((param_2->LastTargetLocation).field0_0x0._s_0.X -
            (this->StartLocation).field0_0x0._s_0.X) * dVar9 +
            (this->StartLocation).field0_0x0._s_0.X;
    dVar4 = ((param_2->LastTargetLocation).field0_0x0._s_0.Z -
            (this->StartLocation).field0_0x0._s_0.Z) * dVar9 +
            (this->StartLocation).field0_0x0._s_0.Z;
    dVar9 = ((param_2->LastTargetLocation).field0_0x0._s_0.Y -
            (this->StartLocation).field0_0x0._s_0.Y) * dVar9 +
            (this->StartLocation).field0_0x0._s_0.Y;
    local_188._s_0.X = dVar5 - (param_1->EffectTransform).Translation.XY.m128d_f64[0];
    local_188._s_0.Y = dVar9 - (param_1->EffectTransform).Translation.XY.m128d_f64[1];
    auVar2._8_4_ = SUB84(dVar9,0);
    auVar2._0_8_ = dVar5;
    auVar2._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])(param_1->EffectTransform).Translation.XY.m128d_f64 = auVar2;
    (param_1->EffectTransform).Translation.ZW.m128d_f64[0] = dVar4;
    (param_1->EffectTransform).Translation.ZW.m128d_f64[1] = 0.0;
    local_188._s_0.Z = dVar4 - local_170.Roll;
    dVar9 = local_188._s_0.X * local_188._s_0.X + local_188._s_0.Y * local_188._s_0.Y +
            local_188._s_0.Z * local_188._s_0.Z;
    if (__real_3e45798ee0000000 < dVar9) {
      dVar10 = dVar10 / SQRT(dVar9);
      local_188._s_0.X = local_188._s_0.X * dVar10;
      local_188._s_0.Z = local_188._s_0.Z * dVar10;
      goto LAB_14bb3a2f2;
    }
  }
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_188._s_0,&local_170);
  pTVar7 = UE::Math::TRotator<double>::Quaternion(&local_170,&local_148);
  dVar10 = pTVar7->Y;
  dVar9 = pTVar7->Z;
  dVar4 = pTVar7->W;
  (param_1->EffectTransform).Rotation.XY.m128d_f64[0] = pTVar7->X;
  (param_1->EffectTransform).Rotation.XY.m128d_f64[1] = dVar10;
  (param_1->EffectTransform).Rotation.ZW.m128d_f64[0] = dVar9;
  (param_1->EffectTransform).Rotation.ZW.m128d_f64[1] = dVar4;
  bVar6 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&param_1->EffectComp,(void *)0x0);
  if (!bVar6) {
    this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(param_1->EffectComp).WeakPtr);
    USceneComponent::SetWorldTransform
              (this_00,&param_1->EffectTransform,false,(FHitResult *)0x0,None);
  }
LAB_14bb3a35e:
  if (param_2->MoveTotalTime < this->ElapsedTime || param_2->MoveTotalTime == this->ElapsedTime) {
    if (this->SkillProjectileTable->IsAfterType == true) {
      if (param_1->ProjectileState != OnAfterTime) {
        bVar6 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          (&param_2->TargetMovementCore,(void *)0x0);
        if ((!bVar6) &&
           ((EVar1 = this->SkillProjectileTable->ProjectileMoveType, EVar1 == TargetMove ||
            (EVar1 == TargetCurve)))) {
          param_1->bUseOnAfterTimeAttach = true;
          this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(param_2->TargetMovementCore).WeakPtr);
          UDS_MovementCore::GetActorTransform(this_01,&local_128);
          pTVar8 = UE::Math::TTransform<double>::GetRelativeTransform
                             (&param_1->EffectTransform,&local_c8,&local_128);
          dVar10 = (pTVar8->Rotation).XY.m128d_f64[1];
          (param_1->OnAfterTimeRelativeTransform).Rotation.XY.m128d_f64[0] =
               (pTVar8->Rotation).XY.m128d_f64[0];
          (param_1->OnAfterTimeRelativeTransform).Rotation.XY.m128d_f64[1] = dVar10;
          dVar10 = (pTVar8->Rotation).ZW.m128d_f64[1];
          (param_1->OnAfterTimeRelativeTransform).Rotation.ZW.m128d_f64[0] =
               (pTVar8->Rotation).ZW.m128d_f64[0];
          (param_1->OnAfterTimeRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar10;
          dVar10 = (pTVar8->Translation).XY.m128d_f64[1];
          (param_1->OnAfterTimeRelativeTransform).Translation.XY.m128d_f64[0] =
               (pTVar8->Translation).XY.m128d_f64[0];
          (param_1->OnAfterTimeRelativeTransform).Translation.XY.m128d_f64[1] = dVar10;
          dVar10 = (pTVar8->Translation).ZW.m128d_f64[1];
          (param_1->OnAfterTimeRelativeTransform).Translation.ZW.m128d_f64[0] =
               (pTVar8->Translation).ZW.m128d_f64[0];
          (param_1->OnAfterTimeRelativeTransform).Translation.ZW.m128d_f64[1] = dVar10;
          dVar10 = (pTVar8->Scale3D).XY.m128d_f64[1];
          (param_1->OnAfterTimeRelativeTransform).Scale3D.XY.m128d_f64[0] =
               (pTVar8->Scale3D).XY.m128d_f64[0];
          (param_1->OnAfterTimeRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar10;
          dVar10 = (pTVar8->Scale3D).ZW.m128d_f64[1];
          (param_1->OnAfterTimeRelativeTransform).Scale3D.ZW.m128d_f64[0] =
               (pTVar8->Scale3D).ZW.m128d_f64[0];
          (param_1->OnAfterTimeRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
        }
      }
      param_1->ProjectileState = OnAfterTime;
    }
    else {
      param_1->ProjectileState = Finish;
    }
  }
  return;
}

// TracingTarget_DirectTargetMove @ 14bb3a470

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
FDS_ProjectileSkillAttackInfo::TracingTarget_DirectTargetMove
          (FDS_ProjectileSkillAttackInfo *this,FDS_ProjectileInfo *param_1,
          FDS_ProjectileTargetInfo *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  bool bVar4;
  TQuat<double> *pTVar5;
  USceneComponent *this_00;
  double dVar6;
  double dVar7;
  TVector<double>_u_0 local_88;
  TRotator<double> local_70;
  TQuat<double> local_58 [2];
  
  dVar7 = __real_3ff0000000000000;
  dVar6 = this->ElapsedTime / param_2->MoveTotalTime;
  if (__real_3ff0000000000000 <= dVar6) {
    dVar6 = __real_3ff0000000000000;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  local_70.Roll = (param_1->EffectTransform).Translation.ZW.m128d_f64[0];
  dVar3 = ((param_2->LastTargetLocation).field0_0x0._s_0.X - (this->StartLocation).field0_0x0._s_0.X
          ) * dVar6 + (this->StartLocation).field0_0x0._s_0.X;
  dVar2 = ((param_2->LastTargetLocation).field0_0x0._s_0.Z - (this->StartLocation).field0_0x0._s_0.Z
          ) * dVar6 + (this->StartLocation).field0_0x0._s_0.Z;
  dVar6 = ((param_2->LastTargetLocation).field0_0x0._s_0.Y - (this->StartLocation).field0_0x0._s_0.Y
          ) * dVar6 + (this->StartLocation).field0_0x0._s_0.Y;
  local_88._s_0.X = dVar3 - (param_1->EffectTransform).Translation.XY.m128d_f64[0];
  local_88._s_0.Y = dVar6 - (param_1->EffectTransform).Translation.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = dVar3;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1->EffectTransform).Translation.XY.m128d_f64 = auVar1;
  (param_1->EffectTransform).Translation.ZW.m128d_f64[0] = dVar2;
  (param_1->EffectTransform).Translation.ZW.m128d_f64[1] = 0.0;
  local_88._s_0.Z = dVar2 - local_70.Roll;
  dVar6 = local_88._s_0.Y * local_88._s_0.Y + local_88._s_0.X * local_88._s_0.X +
          local_88._s_0.Z * local_88._s_0.Z;
  if (__real_3e45798ee0000000 < dVar6) {
    dVar7 = dVar7 / SQRT(dVar6);
    local_88._s_0.X = local_88._s_0.X * dVar7;
    local_88._s_0.Y = local_88._s_0.Y * dVar7;
    local_88._s_0.Z = local_88._s_0.Z * dVar7;
  }
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_88._s_0,&local_70);
  pTVar5 = UE::Math::TRotator<double>::Quaternion(&local_70,local_58);
  dVar6 = pTVar5->Y;
  dVar7 = pTVar5->Z;
  dVar2 = pTVar5->W;
  (param_1->EffectTransform).Rotation.XY.m128d_f64[0] = pTVar5->X;
  (param_1->EffectTransform).Rotation.XY.m128d_f64[1] = dVar6;
  (param_1->EffectTransform).Rotation.ZW.m128d_f64[0] = dVar7;
  (param_1->EffectTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  bVar4 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&param_1->EffectComp,(void *)0x0);
  if (!bVar4) {
    this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(param_1->EffectComp).WeakPtr);
    USceneComponent::SetWorldTransform
              (this_00,&param_1->EffectTransform,false,(FHitResult *)0x0,None);
  }
  return;
}

// TracingTarget_TargetCurve @ 14bb3a610

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
FDS_ProjectileSkillAttackInfo::TracingTarget_TargetCurve
          (FDS_ProjectileSkillAttackInfo *this,FDS_ProjectileInfo *param_1,
          FDS_ProjectileTargetInfo *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  UCurveFloat *this_00;
  TQuat<double> *pTVar9;
  USceneComponent *this_01;
  float fVar10;
  double dVar11;
  double dVar12;
  TVector<double>_u_0 local_e8;
  TQuat<double> local_c8;
  TRotator<double> local_a8 [6];
  
  dVar12 = __real_3ff0000000000000;
  dVar11 = this->ElapsedTime / param_2->MoveTotalTime;
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  FDS_ProjectileTargetInfo::UpdateTargetLocationByMoveType(param_2);
  local_a8[0].Roll = (param_1->EffectTransform).Translation.ZW.m128d_f64[0];
  dVar6 = (param_1->EffectTransform).Translation.XY.m128d_f64[0];
  dVar7 = (param_1->EffectTransform).Translation.XY.m128d_f64[1];
  dVar5 = ((param_2->LastTargetLocation).field0_0x0._s_0.Z - (this->StartLocation).field0_0x0._s_0.Z
          ) * dVar11 + (this->StartLocation).field0_0x0._s_0.Z;
  dVar4 = ((param_2->LastTargetLocation).field0_0x0._s_0.X - (this->StartLocation).field0_0x0._s_0.X
          ) * dVar11 + (this->StartLocation).field0_0x0._s_0.X;
  dVar11 = ((param_2->LastTargetLocation).field0_0x0._s_0.Y -
           (this->StartLocation).field0_0x0._s_0.Y) * dVar11 +
           (this->StartLocation).field0_0x0._s_0.Y;
  local_c8.Z = dVar5;
  bVar8 = TWeakObjectPtr<UCurveFloat,FWeakObjectPtr>::UEOpEquals(&this->CurveData,(void *)0x0);
  if ((!bVar8) && (fVar10 = this->SkillProjectileTable->ProjectileCurveTime, 0.0 < fVar10)) {
    dVar3 = this->ElapsedTime / (double)fVar10;
    if (dVar12 <= dVar3) {
      dVar3 = dVar12;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    this_00 = (UCurveFloat *)FWeakObjectPtr::Get(&(this->CurveData).WeakPtr);
    iVar1 = this->SkillProjectileTable->ProjectileHeight;
    fVar10 = UCurveFloat::GetFloatValue(this_00,(float)dVar3);
    dVar5 = (double)(fVar10 * (float)iVar1) + dVar5;
    local_c8.Z = dVar5;
  }
  local_e8._s_0.X = dVar4 - dVar6;
  auVar2._8_4_ = SUB84(dVar11,0);
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1->EffectTransform).Translation.XY.m128d_f64 = auVar2;
  (param_1->EffectTransform).Translation.ZW.m128d_f64[0] = local_c8.Z;
  (param_1->EffectTransform).Translation.ZW.m128d_f64[1] = 0.0;
  local_e8._s_0.Z = dVar5 - local_a8[0].Roll;
  local_e8._s_0.Y = dVar11 - dVar7;
  dVar11 = local_e8._s_0.Y * local_e8._s_0.Y + local_e8._s_0.X * local_e8._s_0.X +
           local_e8._s_0.Z * local_e8._s_0.Z;
  if (__real_3e45798ee0000000 < dVar11) {
    dVar12 = dVar12 / SQRT(dVar11);
    local_e8._s_0.X = local_e8._s_0.X * dVar12;
    local_e8._s_0.Y = local_e8._s_0.Y * dVar12;
    local_e8._s_0.Z = local_e8._s_0.Z * dVar12;
  }
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_e8._s_0,local_a8);
  pTVar9 = UE::Math::TRotator<double>::Quaternion(local_a8,&local_c8);
  dVar11 = pTVar9->Y;
  dVar12 = pTVar9->Z;
  dVar5 = pTVar9->W;
  (param_1->EffectTransform).Rotation.XY.m128d_f64[0] = pTVar9->X;
  (param_1->EffectTransform).Rotation.XY.m128d_f64[1] = dVar11;
  (param_1->EffectTransform).Rotation.ZW.m128d_f64[0] = dVar12;
  (param_1->EffectTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  bVar8 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&param_1->EffectComp,(void *)0x0);
  if (!bVar8) {
    this_01 = (USceneComponent *)FWeakObjectPtr::Get(&(param_1->EffectComp).WeakPtr);
    USceneComponent::SetWorldTransform
              (this_01,&param_1->EffectTransform,false,(FHitResult *)0x0,None);
  }
  return;
}

// TracingTarget_TargetMove @ 14bb3a8d0

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
FDS_ProjectileSkillAttackInfo::TracingTarget_TargetMove
          (FDS_ProjectileSkillAttackInfo *this,FDS_ProjectileInfo *param_1,
          FDS_ProjectileTargetInfo *param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  TQuat<double> *pTVar3;
  USceneComponent *this_00;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_88;
  TRotator<double> local_70;
  TQuat<double> local_58 [2];
  
  dVar5 = __real_3ff0000000000000;
  dVar4 = this->ElapsedTime / param_2->MoveTotalTime;
  if (__real_3ff0000000000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  FDS_ProjectileTargetInfo::UpdateTargetLocationByMoveType(param_2);
  local_70.Roll = (param_1->EffectTransform).Translation.ZW.m128d_f64[0];
  dVar6 = ((param_2->LastTargetLocation).field0_0x0._s_0.X - (this->StartLocation).field0_0x0._s_0.X
          ) * dVar4 + (this->StartLocation).field0_0x0._s_0.X;
  local_58[0].Z =
       ((param_2->LastTargetLocation).field0_0x0._s_0.Z - (this->StartLocation).field0_0x0._s_0.Z) *
       dVar4 + (this->StartLocation).field0_0x0._s_0.Z;
  dVar4 = ((param_2->LastTargetLocation).field0_0x0._s_0.Y - (this->StartLocation).field0_0x0._s_0.Y
          ) * dVar4 + (this->StartLocation).field0_0x0._s_0.Y;
  local_88._s_0.X = dVar6 - (param_1->EffectTransform).Translation.XY.m128d_f64[0];
  local_88._s_0.Y = dVar4 - (param_1->EffectTransform).Translation.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar6;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_1->EffectTransform).Translation.XY.m128d_f64 = auVar1;
  (param_1->EffectTransform).Translation.ZW.m128d_f64[0] = local_58[0].Z;
  (param_1->EffectTransform).Translation.ZW.m128d_f64[1] = 0.0;
  local_88._s_0.Z = local_58[0].Z - local_70.Roll;
  dVar4 = local_88._s_0.Y * local_88._s_0.Y + local_88._s_0.X * local_88._s_0.X +
          local_88._s_0.Z * local_88._s_0.Z;
  if (__real_3e45798ee0000000 < dVar4) {
    dVar5 = dVar5 / SQRT(dVar4);
    local_88._s_0.X = local_88._s_0.X * dVar5;
    local_88._s_0.Y = local_88._s_0.Y * dVar5;
    local_88._s_0.Z = local_88._s_0.Z * dVar5;
  }
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_88._s_0,&local_70);
  pTVar3 = UE::Math::TRotator<double>::Quaternion(&local_70,local_58);
  dVar4 = pTVar3->Y;
  dVar5 = pTVar3->Z;
  dVar6 = pTVar3->W;
  (param_1->EffectTransform).Rotation.XY.m128d_f64[0] = pTVar3->X;
  (param_1->EffectTransform).Rotation.XY.m128d_f64[1] = dVar4;
  (param_1->EffectTransform).Rotation.ZW.m128d_f64[0] = dVar5;
  (param_1->EffectTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  bVar2 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&param_1->EffectComp,(void *)0x0);
  if (!bVar2) {
    this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(param_1->EffectComp).WeakPtr);
    USceneComponent::SetWorldTransform
              (this_00,&param_1->EffectTransform,false,(FHitResult *)0x0,None);
  }
  return;
}

// TracingTarget_ZoneCurve @ 14bb3aa90

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
FDS_ProjectileSkillAttackInfo::TracingTarget_ZoneCurve
          (FDS_ProjectileSkillAttackInfo *this,FDS_ProjectileInfo *param_1,
          FDS_ProjectileTargetInfo *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  UCurveFloat *this_00;
  TQuat<double> *pTVar9;
  USceneComponent *this_01;
  float fVar10;
  double dVar11;
  double dVar12;
  TVector<double>_u_0 local_e8;
  TQuat<double> local_c8;
  TRotator<double> local_a8 [6];
  
  dVar12 = __real_3ff0000000000000;
  dVar11 = this->ElapsedTime / param_2->MoveTotalTime;
  local_a8[0].Roll = (param_1->EffectTransform).Translation.ZW.m128d_f64[0];
  dVar6 = (param_1->EffectTransform).Translation.XY.m128d_f64[0];
  dVar7 = (param_1->EffectTransform).Translation.XY.m128d_f64[1];
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  dVar5 = ((param_2->LastTargetLocation).field0_0x0._s_0.Z - (this->StartLocation).field0_0x0._s_0.Z
          ) * dVar11 + (this->StartLocation).field0_0x0._s_0.Z;
  dVar4 = ((param_2->LastTargetLocation).field0_0x0._s_0.X - (this->StartLocation).field0_0x0._s_0.X
          ) * dVar11 + (this->StartLocation).field0_0x0._s_0.X;
  dVar11 = ((param_2->LastTargetLocation).field0_0x0._s_0.Y -
           (this->StartLocation).field0_0x0._s_0.Y) * dVar11 +
           (this->StartLocation).field0_0x0._s_0.Y;
  local_c8.Z = dVar5;
  bVar8 = TWeakObjectPtr<UCurveFloat,FWeakObjectPtr>::UEOpEquals(&this->CurveData,(void *)0x0);
  if ((!bVar8) && (fVar10 = this->SkillProjectileTable->ProjectileCurveTime, 0.0 < fVar10)) {
    dVar3 = this->ElapsedTime / (double)fVar10;
    if (dVar12 <= dVar3) {
      dVar3 = dVar12;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    this_00 = (UCurveFloat *)FWeakObjectPtr::Get(&(this->CurveData).WeakPtr);
    iVar1 = this->SkillProjectileTable->ProjectileHeight;
    fVar10 = UCurveFloat::GetFloatValue(this_00,(float)dVar3);
    dVar5 = (double)(fVar10 * (float)iVar1) + dVar5;
    local_c8.Z = dVar5;
  }
  local_e8._s_0.X = dVar4 - dVar6;
  auVar2._8_4_ = SUB84(dVar11,0);
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1->EffectTransform).Translation.XY.m128d_f64 = auVar2;
  (param_1->EffectTransform).Translation.ZW.m128d_f64[0] = local_c8.Z;
  (param_1->EffectTransform).Translation.ZW.m128d_f64[1] = 0.0;
  local_e8._s_0.Z = dVar5 - local_a8[0].Roll;
  local_e8._s_0.Y = dVar11 - dVar7;
  dVar11 = local_e8._s_0.Y * local_e8._s_0.Y + local_e8._s_0.X * local_e8._s_0.X +
           local_e8._s_0.Z * local_e8._s_0.Z;
  if (__real_3e45798ee0000000 < dVar11) {
    dVar12 = dVar12 / SQRT(dVar11);
    local_e8._s_0.X = local_e8._s_0.X * dVar12;
    local_e8._s_0.Y = local_e8._s_0.Y * dVar12;
    local_e8._s_0.Z = local_e8._s_0.Z * dVar12;
  }
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_e8._s_0,local_a8);
  pTVar9 = UE::Math::TRotator<double>::Quaternion(local_a8,&local_c8);
  dVar11 = pTVar9->Y;
  dVar6 = pTVar9->Z;
  dVar7 = pTVar9->W;
  (param_1->EffectTransform).Rotation.XY.m128d_f64[0] = pTVar9->X;
  (param_1->EffectTransform).Rotation.XY.m128d_f64[1] = dVar11;
  (param_1->EffectTransform).Rotation.ZW.m128d_f64[0] = dVar6;
  (param_1->EffectTransform).Rotation.ZW.m128d_f64[1] = dVar7;
  bVar8 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&param_1->EffectComp,(void *)0x0);
  if (!bVar8) {
    this_01 = (USceneComponent *)FWeakObjectPtr::Get(&(param_1->EffectComp).WeakPtr);
    USceneComponent::SetWorldTransform
              (this_01,&param_1->EffectTransform,false,(FHitResult *)0x0,None);
  }
  return;
}

