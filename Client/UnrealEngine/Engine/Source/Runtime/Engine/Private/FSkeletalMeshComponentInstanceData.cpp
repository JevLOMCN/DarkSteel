// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14791ba80

UScriptStruct * __cdecl FSkeletalMeshComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshComponentInstanceData,
                         (UObject *)pUVar1,L"SkeletalMeshComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshComponentInstanceData.OuterSingleton;
}

// ContainsData @ 14791bae0

bool __thiscall
FSkeletalMeshComponentInstanceData::ContainsData(FSkeletalMeshComponentInstanceData *this)

{
  return this->bUpdateAnimationInEditor != '\0' || this->bUpdateClothInEditor != '\0';
}

// ApplyToComponent @ 14791bb00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSkeletalMeshComponentInstanceData::ApplyToComponent
          (FSkeletalMeshComponentInstanceData *this,UActorComponent *param_1,
          ECacheApplyPhase param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FString *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  wchar_t *pwVar20;
  undefined1 auStackX_10 [16];
  int iStackX_20;
  undefined4 uStack_11c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  TRotator<double> aTStack_e8 [2];
  double dStack_b8;
  TQuat<double> TStack_a8;
  longlong lStack_78;
  FString FStack_70;
  FString FStack_60;
  FString FStack_50;
  
  FActorComponentInstanceData::ApplyToComponent((FActorComponentInstanceData *)this,param_1,param_2)
  ;
  if (param_1 == (UActorComponent *)0x0) {
    pFVar12 = GetTypeName<USceneComponent>(&FStack_70);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar20);
  }
  pUVar11 = USceneComponent::StaticClass();
  iVar3 = (int)pUVar11->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar11->_padding_)) {
    pFVar12 = GetTypeName<USceneComponent>(&FStack_60);
    pwVar20 = L"";
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UActorComponent>(&FStack_50,param_1);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar20 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar20,pwVar16);
  }
  if (0 < (int)this->_padding_) {
    USceneComponent::UpdateComponentToWorld((USceneComponent *)param_1,None,None);
  }
  iVar3 = (int)this->_padding_;
  plVar2 = &this->_padding_;
  iVar17 = 0;
  iVar19 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar3 != 0) {
    plVar18 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar18 = plVar2;
    }
    uVar14 = (uint)*plVar18;
    while (uVar14 == 0) {
      iVar17 = iVar17 + 1;
      iVar19 = iVar19 + 0x20;
      iVar10 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar17) goto LAB_147932e91;
      uVar14 = *(uint *)((longlong)plVar18 + (longlong)iVar17 * 4);
    }
    uVar9 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStackX_20 = (int)lVar4;
    iVar10 = iStackX_20 + -1 + iVar19;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_147932e91:
  uVar14 = (uint)this->_padding_;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_110._padding_ = CONCAT44(uVar9,iVar17);
  TStack_110.CurrentBitIndex = iVar10;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar14 >> 5;
  TStack_110._28_4_ = iVar10;
  TStack_110.BaseBitIndex = iVar19;
  uStack_f0 = CONCAT44(uStack_11c,(int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = (uint)this->_padding_;
  if (uVar14 != uVar9) {
    plVar18 = plVar2;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar18 = (longlong *)this->_padding_;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)plVar18 + (longlong)iVar17 * 4);
    while (uVar14 == 0) {
      iVar17 = iVar17 + 1;
      uVar13 = uVar13 + 0x20;
      uVar14 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar17) goto LAB_147932fa0;
      uVar14 = *(uint *)((longlong)plVar18 + (longlong)iVar17 * 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = (uVar13 - 1) + (int)lVar4;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  }
LAB_147932fa0:
  while( true ) {
    if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != (int)uStack_f0) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if ((TStack_110.CurrentBitIndex == uVar14) &&
       (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar2)) break;
    plVar15 = (longlong *)((longlong)TStack_110.CurrentBitIndex * 0x80 + this->_padding_);
    plVar18 = (longlong *)*plVar15;
    if (((plVar18 != (longlong *)0x0) && ((*(uint *)(plVar18 + 1) >> 0x1e & 1) == 0)) &&
       ((plVar18[0x1a] == 0 || ((*(uint *)(plVar18[0x1a] + 8) >> 0x1e & 1) != 0)))) {
      aTStack_e8[0].Roll = (double)plVar15[8];
      lVar4 = plVar15[7];
      plVar18[0x29] = plVar15[6];
      plVar18[0x2a] = lVar4;
      plVar18[0x2b] = (longlong)aTStack_e8[0].Roll;
      TStack_a8.X = (double)plVar15[2];
      TStack_a8.Y = (double)plVar15[3];
      TStack_a8.Z = (double)plVar15[4];
      TStack_a8.W = (double)plVar15[5];
      dStack_b8 = aTStack_e8[0].Roll;
      UE::Math::TQuat<double>::Rotator(&TStack_a8,aTStack_e8);
      plVar18[0x2c] = (longlong)aTStack_e8[0].Pitch;
      plVar18[0x2d] = (longlong)aTStack_e8[0].Yaw;
      plVar18[0x2e] = (longlong)aTStack_e8[0].Roll;
      dStack_b8 = (double)plVar15[0xc];
      uVar6 = *(undefined4 *)((longlong)plVar15 + 0x54);
      lVar4 = plVar15[0xb];
      uVar7 = *(undefined4 *)((longlong)plVar15 + 0x5c);
      *(int *)(plVar18 + 0x2f) = (int)plVar15[10];
      *(undefined4 *)((longlong)plVar18 + 0x17c) = uVar6;
      *(int *)(plVar18 + 0x30) = (int)lVar4;
      *(undefined4 *)((longlong)plVar18 + 0x184) = uVar7;
      plVar18[0x31] = (longlong)dStack_b8;
      lStack_78 = (longlong)dStack_b8;
      (**(code **)(*plVar18 + 0x508))
                (plVar18,param_1,&FAttachmentTransformRules::KeepRelativeTransform,0);
    }
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  }
  return;
}

// FSkeletalMeshComponentInstanceData @ 147929ad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSkeletalMeshComponentInstanceData * __thiscall
FSkeletalMeshComponentInstanceData::FSkeletalMeshComponentInstanceData
          (FSkeletalMeshComponentInstanceData *this,USkeletalMeshComponent *param_1)

{
  undefined1 *puVar1;
  
  FSceneComponentInstanceData::FSceneComponentInstanceData
            ((FSceneComponentInstanceData *)this,(USceneComponent *)param_1);
  this->bUpdateAnimationInEditor = '\0';
  this->bUpdateClothInEditor = '\0';
  this->_padding_ = (longlong)&___7FSkeletalMeshComponentInstanceData__6B_;
  return this;
}

