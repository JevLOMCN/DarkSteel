// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ClearSkillInfo @ 14baf9d20

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

void __thiscall FDS_ProjectileSkillInfo::ClearSkillInfo(FDS_ProjectileSkillInfo *this)

{
  TMap<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
  *this_00;
  undefined1 *puVar1;
  TArray<FDS_ProjectileSkillAttackInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  FDS_ProjectileSkillAttackInfo *this_01;
  FDS_ProjectileSkillAttackInfo *pFVar8;
  uint uVar9;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  this->bIsFinish_SkillInfo = true;
  this->ShooterEntityID = 0;
  this->ShooterEntity = (FDS_EntityBase *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this_00 = &this->PendingSkillAttackInfoMap;
  (this->ShooterMovementCore).WeakPtr = local_res8;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
              *)this_00);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar7 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      FDS_ProjectileSkillAttackInfo::ClearSkillAttackInfo
                ((FDS_ProjectileSkillAttackInfo *)(*local_68 + 8 + (longlong)(int)uVar7 * 0x90));
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar7 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar9 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar6 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_38->HashSize < iVar6)) || (iVar6 < local_38->HashSize)) {
        local_38->HashSize = iVar6;
        TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  bVar4 = 1 < *(int *)&(this->PendingSkillAttackInfoMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_ProjectileSkillAttackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FDS_ProjectileSkillAttackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->PendingSkillAttackInfoMap).field_0x8);
  puVar1 = &(this->PendingSkillAttackInfoMap).field_0xc;
  *(undefined4 *)&(this->PendingSkillAttackInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PendingSkillAttackInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingSkillAttackInfoMap).field_0x34 = 0;
  iVar6 = *(int *)&(this->PendingSkillAttackInfoMap).field_0x2c;
  *(undefined4 *)&(this->PendingSkillAttackInfoMap).field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->PendingSkillAttackInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingSkillAttackInfoMap).field_0x10
               ,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->PendingSkillAttackInfoMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  iVar6 = (this->ActiveSkillAttackInfoList).ArrayNum;
  pTVar2 = &this->ActiveSkillAttackInfoList;
  this_01 = (FDS_ProjectileSkillAttackInfo *)(pTVar2->AllocatorInstance).Data;
  pFVar8 = this_01 + iVar6;
  while( true ) {
    if ((this->ActiveSkillAttackInfoList).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FDS_ProjectileSkillAttackInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_01 == pFVar8) break;
    FDS_ProjectileSkillAttackInfo::ClearSkillAttackInfo(this_01);
    this_01 = this_01 + 1;
  }
  DestructItems<FDS_ProjectileSkillAttackInfo,int>
            ((FDS_ProjectileSkillAttackInfo *)(pTVar2->AllocatorInstance).Data,
             (this->ActiveSkillAttackInfoList).ArrayNum);
  piVar3 = &(this->ActiveSkillAttackInfoList).ArrayMax;
  (this->ActiveSkillAttackInfoList).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,&pTVar2->AllocatorInstance,0,piVar3);
  }
  return;
}

// IsValidMemberVariables @ 14bb17360

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

bool __thiscall FDS_ProjectileSkillInfo::IsValidMemberVariables(FDS_ProjectileSkillInfo *this)

{
  bool bVar1;
  
  if (this->ShooterEntity != (FDS_EntityBase *)0x0) {
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      (&this->ShooterMovementCore,(void *)0x0);
    return !bVar1;
  }
  return false;
}

// ProcessSkillInfo @ 14bb29960

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
FDS_ProjectileSkillInfo::ProcessSkillInfo(FDS_ProjectileSkillInfo *this,float *param_1)

{
  int *piVar1;
  TMap<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FDS_ProjectileSkillAttackInfo *this_00;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *_Dst;
  uint uVar9;
  longlong lVar10;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  uVar9 = (this->ActiveSkillAttackInfoList).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 7;
    do {
      if ((int)uVar9 < (this->ActiveSkillAttackInfoList).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar9 < (this->ActiveSkillAttackInfoList).ArrayNum) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (FDS_ProjectileSkillAttackInfo *)
                  ((this->ActiveSkillAttackInfoList).AllocatorInstance.Data + lVar10);
        if (this_00->bIsFinish_SkillAttackInfo == true) {
          uVar5 = 0;
          if ((int)uVar9 < (this->ActiveSkillAttackInfoList).ArrayNum) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = (this->ActiveSkillAttackInfoList).AllocatorInstance.Data + lVar10;
          if (*(void **)(_Dst + 0x68) != (void *)0x0) {
            FMemory::Free(*(void **)(_Dst + 0x68));
          }
          if (*(void **)(_Dst + 0x58) != (void *)0x0) {
            FMemory::Free(*(void **)(_Dst + 0x58));
          }
          iVar6 = (this->ActiveSkillAttackInfoList).ArrayNum + ~uVar9;
          if (iVar6 != 0) {
            memmove(_Dst,_Dst + 0x80,(longlong)iVar6 << 7);
          }
          piVar1 = &(this->ActiveSkillAttackInfoList).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,&(this->ActiveSkillAttackInfoList).AllocatorInstance,
                     (this->ActiveSkillAttackInfoList).ArrayNum,
                     &(this->ActiveSkillAttackInfoList).ArrayMax);
        }
        else {
          FDS_ProjectileSkillAttackInfo::ProcessSkillAttackInfo(this_00,param_1);
        }
      }
      lVar10 = lVar10 + -0x80;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  pTVar2 = &this->PendingSkillAttackInfoMap;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
              *)pTVar2);
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar7 = local_98._24_8_ >> 0x20;
  uVar9 = local_98._28_4_;
  local_38 = (TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
              *)pTVar2;
  if ((int)uVar9 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      if (*(char *)(*local_68 + 8 + (longlong)(int)uVar7 * 0x90) == '\x01') {
        TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,uVar9);
        local_30 = '\x01';
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar7 = (ulonglong)uStack_4c;
      uVar9 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar9 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar6 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_38->HashSize < iVar6)) || (iVar6 < local_38->HashSize)) {
        local_38->HashSize = iVar6;
        TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  if ((*(int *)&(this->PendingSkillAttackInfoMap).field_0x8 ==
       *(int *)&(this->PendingSkillAttackInfoMap).field_0x34) &&
     ((this->ActiveSkillAttackInfoList).ArrayNum == 0)) {
    ClearSkillInfo(this);
  }
  return;
}

