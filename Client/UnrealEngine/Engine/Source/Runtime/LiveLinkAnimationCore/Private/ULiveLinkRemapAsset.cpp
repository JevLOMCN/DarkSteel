// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkAnimationCore
// Functions: 19

// StaticClass @ 14cfc1d30

UClass * __cdecl ULiveLinkRemapAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkRemapAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkAnimationCore",L"LiveLinkRemapAsset",
               &Z_Registration_Info_UClass_ULiveLinkRemapAsset.InnerSingleton,
               StaticRegisterNativesULiveLinkRemapAsset,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkRemapAsset>,
               InternalVTableHelperCtorCaller<ULiveLinkRemapAsset>,local_res8,
               ULiveLinkRetargetAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkRemapAsset.InnerSingleton;
}

// ULiveLinkRemapAsset @ 14cfc28a0

ULiveLinkRemapAsset * __thiscall
ULiveLinkRemapAsset::ULiveLinkRemapAsset(ULiveLinkRemapAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkRemapAsset__6B_;
  *(undefined8 *)&this->BoneNameMap = 0;
  *(undefined8 *)&(this->BoneNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoneNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneNameMap).field_0x34 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x48 = 0;
  *(undefined8 *)&this->CurveNameMap = 0;
  *(undefined8 *)&(this->CurveNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurveNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurveNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurveNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveNameMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurveNameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurveNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurveNameMap).field_0x48 = 0;
  return this;
}

// ULiveLinkRemapAsset @ 14cfc2930

ULiveLinkRemapAsset * __thiscall
ULiveLinkRemapAsset::ULiveLinkRemapAsset(ULiveLinkRemapAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkRemapAsset__6B_;
  *(undefined8 *)&this->BoneNameMap = 0;
  *(undefined8 *)&(this->BoneNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoneNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneNameMap).field_0x34 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneNameMap).field_0x48 = 0;
  *(undefined8 *)&this->CurveNameMap = 0;
  *(undefined8 *)&(this->CurveNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurveNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurveNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurveNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveNameMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurveNameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurveNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurveNameMap).field_0x48 = 0;
  return this;
}

// ~ULiveLinkRemapAsset @ 14cfc2a40

void __thiscall ULiveLinkRemapAsset::~ULiveLinkRemapAsset(ULiveLinkRemapAsset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkRemapAsset__6B_;
  *(undefined4 *)&(this->CurveNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveNameMap);
  *(undefined4 *)&(this->BoneNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneNameMap);
  this->_padding_ = (longlong)&___7ULiveLinkRetargetAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14cfc2e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ULiveLinkRemapAsset::BeginDestroy(ULiveLinkRemapAsset *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(ULiveLinkRemapAsset **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// BuildPoseAndCurveFromBaseData @ 14cfc34d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ULiveLinkRemapAsset::BuildPoseAndCurveFromBaseData
          (ULiveLinkRemapAsset *this,float param_1,FLiveLinkBaseStaticData *param_2,
          FLiveLinkBaseFrameData *param_3,FCompactPose *param_4,FBlendedCurve *param_5)

{
  float fVar1;
  undefined8 uVar2;
  code *pcVar3;
  FLiveLinkBaseFrameData *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UFunction *pUVar11;
  UClass *pUVar12;
  ulonglong uVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  FName *pFVar18;
  undefined1 *puVar19;
  ForElementType<unsigned_int> FVar20;
  undefined1 *puVar21;
  uint uVar22;
  FName *pFVar23;
  longlong lVar24;
  FName *pFVar25;
  FScriptContainerElement *pFVar26;
  ForElementType<FName> FVar27;
  undefined1 auStackY_218 [32];
  undefined1 local_1c8 [8];
  ForElementType<FName> local_1c0;
  undefined8 local_1b8;
  FName local_1b0;
  uint local_1a8;
  undefined1 local_1a4 [12];
  FLiveLinkBaseFrameData *local_198;
  uint local_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_188;
  undefined4 local_180;
  uint uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  longlong local_170;
  FName local_168;
  TPairInitializer<FName_const_&,FName_const_&> local_160;
  FScriptContainerElement *local_150;
  FName *local_148;
  ULiveLinkRemapAsset *local_140;
  FBlendedCurve *local_138;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FScriptContainerElement *local_108;
  FName *local_100;
  undefined1 local_f8 [32];
  ForElementType<unsigned_int> local_d8;
  uint local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  FScriptContainerElement local_c0 [8];
  ForAnyElementType local_b8;
  uint local_b0;
  undefined1 local_a8 [32];
  undefined1 *local_88;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pFVar18 = (FName *)0x0;
  uVar8 = (param_2->PropertyNames).ArrayNum;
  local_138 = param_5;
  local_1c0.Data = (FName *)0x0;
  local_1b8 = 0;
  local_1a4._4_8_ = param_2;
  local_198 = param_3;
  local_140 = this;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  pFVar25 = pFVar18;
  if (0 < (int)uVar8) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<FName>_>
              (8,4,uVar8,&local_1c0,0,(int *)((longlong)&local_1b8 + 4));
    pFVar25 = (FName *)(local_1b8 & 0xffffffff);
  }
  local_1a8 = (param_2->PropertyNames).ArrayNum;
  uVar16 = (ulonglong)(int)local_1a8;
  pFVar26 = (param_2->PropertyNames).AllocatorInstance.Data;
  local_150 = pFVar26 + uVar16 * 8;
  FVar27.Data = local_1c0.Data;
LAB_14cfc3584:
  pFVar5 = local_150;
  iVar9 = (int)pFVar25;
  if ((param_2->PropertyNames).ArrayNum != (int)uVar16) {
    local_1c8[0] = 0;
    `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_1c8);
  }
  if (pFVar26 != pFVar5) {
    lVar24 = *(longlong *)pFVar26;
    uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar24);
    if (*(int *)&(this->CurveNameMap).field_0x8 != *(int *)&(this->CurveNameMap).field_0x34) {
      puVar19 = *(undefined1 **)&(this->CurveNameMap).field_0x40;
      puVar21 = &(this->CurveNameMap).field_0x38;
      if (puVar19 != (undefined1 *)0x0) {
        puVar21 = puVar19;
      }
      iVar10 = *(int *)(puVar21 +
                       (ulonglong)
                       (*(int *)&(this->CurveNameMap).field_0x48 - 1U &
                       uVar8 + (int)((ulonglong)lVar24 >> 0x20)) * 4);
      if (iVar10 != -1) {
        do {
          lVar14 = *(longlong *)&this->CurveNameMap + (longlong)iVar10 * 0x18;
          if (*(longlong *)(*(longlong *)&this->CurveNameMap + (longlong)iVar10 * 0x18) == lVar24) {
            pFVar23 = (FName *)(lVar14 + 8);
            if (lVar14 == 0) {
              pFVar23 = pFVar18;
            }
            if (pFVar23 != (FName *)0x0) {
              if (((FVar27.Data <= pFVar23) && (pFVar23 < FVar27.Data + local_1b8._4_4_)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (iVar9 == local_1b8._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FName>_>
                                  (0x408,&local_1c0,(int *)((longlong)&local_1b8 + 4));
                FVar27.Data = local_1c0.Data;
              }
              pFVar26 = pFVar26 + 8;
              pFVar25 = (FName *)(ulonglong)(iVar9 + 1U);
              FVar27.Data[iVar9] = *pFVar23;
              uVar16 = (ulonglong)local_1a8;
              local_1b8 = CONCAT44(local_1b8._4_4_,iVar9 + 1U);
              goto LAB_14cfc3584;
            }
            break;
          }
          iVar10 = *(int *)(lVar14 + 0x10);
        } while (iVar10 != -1);
      }
    }
    lVar24 = *(longlong *)pFVar26;
    pUVar11 = UObject::FindFunctionChecked
                        ((UObject *)this,NAME_ULiveLinkRemapAsset_GetRemappedCurveName);
    pUVar12 = UField::GetOwnerClass((UField *)pUVar11);
    if ((pUVar12->ClassFlags & CLASS_Native) == CLASS_None) {
      local_168.ComparisonIndex.Value = 0;
      local_168.Number = 0;
      local_170 = lVar24;
      (**(code **)(this->_padding_ + 0x260))(this,pUVar11,&local_170);
      local_1b0 = local_168;
    }
    else {
      (**(code **)(this->_padding_ + 0x2d0))(this,&local_1b0,lVar24);
    }
    if (((FVar27.Data <= &local_1b0) && (&local_1b0 < FVar27.Data + local_1b8._4_4_)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar9 == local_1b8._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FName>_>
                        (0x408,&local_1c0,(int *)((longlong)&local_1b8 + 4));
      FVar27.Data = local_1c0.Data;
    }
    pFVar25 = (FName *)(ulonglong)(iVar9 + 1U);
    FVar27.Data[iVar9] = local_1b0;
    local_100 = &local_1b0;
    local_1b8 = CONCAT44(local_1b8._4_4_,iVar9 + 1U);
    local_108 = pFVar26;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)&this->CurveNameMap,&local_160,(bool *)&local_108);
    uVar16 = (ulonglong)local_1a8;
    pFVar26 = pFVar26 + 8;
    param_2 = (FLiveLinkBaseStaticData *)local_1a4._4_8_;
    goto LAB_14cfc3584;
  }
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (ForElementType<unsigned_int>)0x0;
  uVar8 = (local_198->PropertyValues).ArrayNum;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = -1;
  local_c4 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  if (uVar8 == 0) goto LAB_14cfc3a7b;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar8);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_f8,uVar8);
  if (uVar8 < 4) {
    uVar8 = 1;
  }
  else {
    uVar16 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_160.Key._4_4_ = (undefined4)lVar24;
    uVar8 = 1 << ((byte)lVar24 & 0x1f);
  }
  if ((local_b0 == 0) || ((int)local_b0 < (int)uVar8)) {
    local_b0 = uVar8;
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,4);
    }
    if (uVar8 != 0) {
      uVar22 = uVar8;
      if (uVar8 < 2) {
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          uVar22 = 0;
          goto LAB_14cfc38d8;
        }
      }
      else {
LAB_14cfc38d8:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,uVar22,4);
      }
      if (0 < (int)uVar8) {
        uVar16 = (ulonglong)uVar8;
        pFVar25 = pFVar18;
        do {
          FVar17.Data = local_c0;
          if (local_b8.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_b8.Data;
          }
          uVar13 = (ulonglong)pFVar25 & (longlong)(int)uVar8 - 1U;
          pFVar25 = (FName *)((longlong)&(pFVar25->ComparisonIndex).Value + 1);
          *(undefined4 *)(FVar17.Data + uVar13 * 4) = 0xffffffff;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    if (local_b0 != 0) {
      pTStack_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
      local_190 = 0;
      uStack_18c = 1;
      uStack_17c = 0;
      uStack_178 = 0;
      if (local_d0 != 0) {
        FVar20 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
        if (local_d8 != (ForElementType<unsigned_int>)0x0) {
          FVar20 = local_d8;
        }
        uVar8 = *(uint *)FVar20;
        pFVar25 = pFVar18;
        while (uVar8 == 0) {
          uStack_178 = (int)pFVar25 + 0x20;
          pFVar25 = (FName *)(ulonglong)uStack_178;
          iVar10 = (int)pFVar18;
          local_190 = iVar10 + 1;
          pFVar18 = (FName *)(ulonglong)local_190;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_190)
          goto LAB_14cfc39ce;
          uVar8 = ((uint *)((longlong)FVar20 + 4))[iVar10];
        }
        uStack_18c = -uVar8 & uVar8;
        uVar16 = (ulonglong)uStack_18c * 2 + 1;
        lVar24 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_160.Value._0_4_ = (int)lVar24;
        uStack_17c = (uStack_178 - 1) + (int)local_160.Value;
        pFVar18 = (FName *)(ulonglong)uStack_17c;
        if ((int)uStack_17c <= (int)local_d0) goto LAB_14cfc39d5;
LAB_14cfc39ce:
        pFVar18 = (FName *)(ulonglong)local_d0;
        uStack_17c = local_d0;
      }
LAB_14cfc39d5:
      local_180 = 0xffffffff;
      local_130 = (longlong *)local_f8;
      local_128._padding_ = CONCAT44(uStack_18c,local_190);
      local_128.CurrentBitIndex = uStack_17c;
      local_128.UnvisitedBitMask = 0xffffffff;
      local_128._28_4_ = uStack_174;
      local_128.BaseBitIndex = uStack_178;
      local_128.Array = pTStack_188;
      if ((int)pFVar18 < (int)local_d0) {
        do {
          lVar24 = *local_130;
          lVar14 = (longlong)(int)pFVar18;
          uVar2 = *(undefined8 *)(lVar24 + lVar14 * 0x14);
          uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
          uVar8 = local_b0 - 1 & uVar8 + (int)((ulonglong)uVar2 >> 0x20);
          *(uint *)(lVar24 + 0x10 + lVar14 * 0x14) = uVar8;
          FVar17.Data = local_c0;
          if (local_b8.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_b8.Data;
          }
          uVar16 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar8;
          *(undefined4 *)(lVar24 + 0xc + lVar14 * 0x14) = *(undefined4 *)(FVar17.Data + uVar16 * 4);
          *(int *)(FVar17.Data + uVar16 * 4) = (int)pFVar18;
          local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
          pFVar18 = (FName *)(ulonglong)(uint)local_128.CurrentBitIndex;
          param_2 = (FLiveLinkBaseStaticData *)local_1a4._4_8_;
        } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
      }
    }
  }
LAB_14cfc3a7b:
  pFVar4 = local_198;
  uVar2 = local_1a4._4_8_;
  uVar16 = 0;
  iVar10 = (param_2->PropertyNames).ArrayNum;
  if ((iVar10 == (local_198->PropertyValues).ArrayNum) && (uVar13 = uVar16, 0 < iVar10)) {
    do {
      uVar22 = (uint)uVar16;
      uVar8 = 0;
      if ((int)uVar22 < (pFVar4->PropertyValues).ArrayNum) {
        uVar8 = ~uVar22 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)((pFVar4->PropertyValues).AllocatorInstance.Data + uVar13);
      iVar10 = _finite((double)fVar1);
      if (iVar10 != 0) {
        uVar8 = 0;
        if ((int)uVar22 < iVar9) {
          uVar8 = ~uVar22 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_148 = FVar27.Data + (int)uVar22;
        TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
        Emplace<TKeyInitializer<FName_const_&>_>
                  ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                    *)local_f8,(TKeyInitializer<FName_const_&> *)local_1a4,(bool *)&local_148);
        *(float *)(local_f8._0_8_ + (longlong)(int)local_1a4._0_4_ * 0x14 + 8) = fVar1;
      }
      uVar16 = (ulonglong)(uVar22 + 1);
      uVar13 = uVar13 + 4;
      this = local_140;
    } while ((int)(uVar22 + 1) < ((TArray<FName,TSizedDefaultAllocator<32>_> *)uVar2)->ArrayNum);
  }
  pUVar11 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ULiveLinkRemapAsset_RemapCurveElements);
  pUVar12 = UField::GetOwnerClass((UField *)pUVar11);
  uVar8 = local_b0;
  if ((pUVar12->ClassFlags & CLASS_Native) != CLASS_None) {
    (**(code **)(this->_padding_ + 0x2c8))(this,local_f8);
    goto LAB_14cfc3f5f;
  }
  lVar24 = (longlong)(int)local_b0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_60 = 0;
  if (1 < local_b0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,local_b0,4);
  }
  FVar17.Data = local_c0;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FVar17.Data = local_b8.Data;
  }
  FVar15.Data = local_70;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FVar15.Data = local_68.Data;
  }
  if (uVar8 != 0) {
    memcpy(FVar15.Data,FVar17.Data,lVar24 << 2);
  }
  local_60 = uVar8;
  uVar6 = local_f8._8_4_;
  lVar24 = (longlong)(int)local_f8._8_4_;
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_a8,local_f8._8_4_);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,uVar6,(ForAnyElementType *)local_a8,(int *)(local_a8 + 8),
             (int *)(local_a8 + 0xc));
  local_78 = local_c8;
  local_74 = local_c4;
  local_80 = 0;
  uVar8 = local_d0 + 0x1f & 0xffffffe0;
  if (((int)local_7c < (int)uVar8) || (0x80 < (int)local_7c)) {
    local_7c = 0x80;
    if (0x80 < (int)uVar8) {
      local_7c = uVar8;
    }
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  local_80 = local_d0;
  if (local_d0 != 0) {
    FVar20 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
    if (local_d8 != (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_d8;
    }
    puVar19 = local_a8 + 0x10;
    if (local_88 != (undefined1 *)0x0) {
      puVar19 = local_88;
    }
    memcpy(puVar19,(void *)FVar20,(ulonglong)(local_d0 + 0x1f >> 5) << 2);
  }
  if (uVar6 != 0) {
    memcpy((void *)local_a8._0_8_,(void *)local_f8._0_8_,lVar24 * 0x14);
  }
  (**(code **)(this->_padding_ + 0x260))(this);
  uVar8 = local_60;
  lVar24 = (longlong)(int)local_60;
  uVar22 = local_60;
  if (local_60 < 2) {
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      uVar22 = 0;
      goto LAB_14cfc3d8d;
    }
  }
  else {
LAB_14cfc3d8d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,uVar22,4);
  }
  FVar17.Data = local_70;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FVar17.Data = local_68.Data;
  }
  FVar15.Data = local_c0;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FVar15.Data = local_b8.Data;
  }
  if (uVar8 != 0) {
    memcpy(FVar15.Data,FVar17.Data,lVar24 << 2);
  }
  local_b0 = uVar8;
  uVar6 = local_a8._8_4_;
  lVar24 = (longlong)(int)local_a8._8_4_;
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_f8,local_a8._8_4_);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,uVar6,(ForAnyElementType *)local_f8,(int *)(local_f8 + 8),
             (int *)(local_f8 + 0xc));
  local_c8 = local_78;
  local_c4 = local_74;
  local_d0 = 0;
  uVar8 = local_80 + 0x1f & 0xffffffe0;
  if (((int)local_cc < (int)uVar8) || (0x80 < (int)local_cc)) {
    local_cc = 0x80;
    if (0x80 < (int)uVar8) {
      local_cc = uVar8;
    }
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  local_d0 = local_80;
  if (local_80 != 0) {
    puVar19 = local_a8 + 0x10;
    if (local_88 != (undefined1 *)0x0) {
      puVar19 = local_88;
    }
    FVar20 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
    if (local_d8 != (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_d8;
    }
    memcpy((void *)FVar20,puVar19,(ulonglong)(local_80 + 0x1f >> 5) << 2);
  }
  if (uVar6 != 0) {
    memcpy((void *)local_f8._0_8_,(void *)local_a8._0_8_,lVar24 * 0x14);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  iVar9 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar9 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (undefined1 *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
LAB_14cfc3f5f:
  ULiveLinkRetargetAsset::BuildCurveData
            ((ULiveLinkRetargetAsset *)this,
             (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
             local_f8,param_4,local_138);
  local_b0 = 0;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_f8,0);
  if (local_d8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return;
}

// BuildPoseFromAnimationData @ 14cfc41e0

void __thiscall
ULiveLinkRemapAsset::BuildPoseFromAnimationData
          (ULiveLinkRemapAsset *this,float param_1,FLiveLinkSkeletonStaticData *param_2,
          FLiveLinkAnimationFrameData *param_3,FCompactPose *param_4)

{
  undefined8 *puVar1;
  FName FVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  ushort *puVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  UFunction *this_00;
  UClass *pUVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  FName *pFVar17;
  ushort *puVar18;
  ForElementType<FName> FVar19;
  FName *pFVar20;
  FName *pFVar21;
  uint uVar22;
  FName *pFVar23;
  FName *pFVar24;
  longlong lVar25;
  undefined1 local_f8 [8];
  ForElementType<FName> local_f0;
  undefined8 local_e8;
  FName local_e0;
  uint local_d8;
  FName local_d0;
  FName local_c8;
  TPairInitializer<FName_const_&,FName_const_&> local_c0;
  longlong lStack_b0;
  FName local_a8;
  FName *local_a0;
  FName *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pFVar21 = (FName *)0x0;
  uVar9 = (param_2->BoneNames).ArrayNum;
  local_f0.Data = (FName *)0x0;
  local_e8 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  pFVar20 = pFVar21;
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<FName>_>
              (8,4,uVar9,&local_f0,0,(int *)((longlong)&local_e8 + 4));
    pFVar20 = (FName *)(local_e8 & 0xffffffff);
  }
  local_d8 = (param_2->BoneNames).ArrayNum;
  uVar14 = (ulonglong)(int)local_d8;
  pFVar24 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
  local_c0.Value = pFVar24 + uVar14;
  FVar19.Data = local_f0.Data;
  pFVar23 = local_c0.Value;
LAB_14cfc4271:
  do {
    iVar11 = (int)pFVar20;
    if ((param_2->BoneNames).ArrayNum != (int)uVar14) {
      local_f8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f8);
    }
    if (pFVar24 == pFVar23) {
      if (0 < iVar11) {
        lVar25 = 0;
        pFVar20 = pFVar21;
        do {
          uVar22 = (uint)pFVar20;
          uVar9 = 0;
          if ((int)uVar22 < iVar11) {
            uVar9 = ~uVar22 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_a8 = *(FName *)((longlong)&((FVar19.Data)->ComparisonIndex).Value + lVar25);
          uVar9 = 0;
          if ((int)uVar22 < (param_3->Transforms).ArrayNum) {
            uVar9 = ~uVar22 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar4 = (param_3->Transforms).AllocatorInstance.Data;
          local_c0.Value = *(FName **)(pFVar4 + (longlong)&(pFVar21->ComparisonIndex).Value);
          lStack_b0 = *(longlong *)(pFVar4 + (longlong)&(pFVar21->ComparisonIndex).Value + 8);
          local_88 = *(undefined8 *)(pFVar4 + (longlong)&pFVar21[2].ComparisonIndex.Value);
          uStack_80 = *(undefined8 *)(pFVar4 + (longlong)&pFVar21[2].ComparisonIndex.Value + 8);
          local_78 = *(undefined8 *)(pFVar4 + (longlong)&pFVar21[4].ComparisonIndex.Value);
          uStack_70 = *(undefined8 *)(pFVar4 + (longlong)&pFVar21[4].ComparisonIndex.Value + 8);
          local_68 = *(undefined8 *)(pFVar4 + (longlong)&pFVar21[6].ComparisonIndex.Value);
          uStack_60 = *(undefined8 *)(pFVar4 + (longlong)&pFVar21[6].ComparisonIndex.Value + 8);
          local_58 = *(undefined8 *)(pFVar4 + (longlong)&pFVar21[8].ComparisonIndex.Value);
          uStack_50 = *(undefined8 *)(pFVar4 + (longlong)&pFVar21[8].ComparisonIndex.Value + 8);
          local_48 = *(undefined8 *)(pFVar4 + (longlong)&pFVar21[10].ComparisonIndex.Value);
          uStack_40 = *(undefined8 *)(pFVar4 + (longlong)&pFVar21[10].ComparisonIndex.Value + 8);
          uVar9 = FBoneContainer::GetPoseBoneIndexForBoneName
                            (*(FBoneContainer **)&param_4->field_0x10,&local_a8);
          if (uVar9 != 0xffffffff) {
            puVar5 = (ushort *)**(undefined8 **)&param_4->field_0x10;
            for (puVar18 = puVar5;
                puVar18 != puVar5 + *(int *)(*(undefined8 **)&param_4->field_0x10 + 1);
                puVar18 = puVar18 + 1) {
              if (*puVar18 == uVar9) {
                uVar9 = (uint)((longlong)puVar18 - (longlong)puVar5 >> 1);
                if (uVar9 != 0xffffffff) {
                  uVar12 = 0;
                  if ((int)uVar9 < *(int *)&param_4->field_0x8) {
                    uVar12 = ~uVar9 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar6 = *(longlong *)param_4;
                  lVar15 = (longlong)(int)uVar9 * 0x60;
                  *(longlong *)(lVar15 + lVar6) = (longlong)local_c0.Value;
                  ((longlong *)(lVar15 + lVar6))[1] = lStack_b0;
                  puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar6);
                  *puVar1 = local_88;
                  puVar1[1] = uStack_80;
                  puVar1 = (undefined8 *)(lVar15 + 0x20 + lVar6);
                  *puVar1 = local_78;
                  puVar1[1] = uStack_70;
                  puVar1 = (undefined8 *)(lVar15 + 0x30 + lVar6);
                  *puVar1 = local_68;
                  puVar1[1] = uStack_60;
                  puVar1 = (undefined8 *)(lVar15 + 0x40 + lVar6);
                  *puVar1 = local_58;
                  puVar1[1] = uStack_50;
                  puVar1 = (undefined8 *)(lVar15 + 0x50 + lVar6);
                  *puVar1 = local_48;
                  puVar1[1] = uStack_40;
                }
                break;
              }
            }
          }
          pFVar20 = (FName *)(ulonglong)(uVar22 + 1);
          lVar25 = lVar25 + 8;
          pFVar21 = pFVar21 + 0xc;
        } while ((int)(uVar22 + 1) < iVar11);
      }
      return;
    }
    FVar2 = *pFVar24;
    uVar9 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if (*(int *)&(this->BoneNameMap).field_0x8 != *(int *)&(this->BoneNameMap).field_0x34) {
      puVar3 = *(undefined1 **)&(this->BoneNameMap).field_0x40;
      puVar16 = &(this->BoneNameMap).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar16 = puVar3;
      }
      iVar10 = *(int *)(puVar16 +
                       (ulonglong)
                       (*(int *)&(this->BoneNameMap).field_0x48 - 1U & uVar9 + FVar2.Number) * 4);
      if (iVar10 != -1) {
        do {
          lVar25 = *(longlong *)&this->BoneNameMap + (longlong)iVar10 * 0x18;
          if (*(FName *)(*(longlong *)&this->BoneNameMap + (longlong)iVar10 * 0x18) == FVar2) {
            pFVar17 = (FName *)(lVar25 + 8);
            if (lVar25 == 0) {
              pFVar17 = pFVar21;
            }
            if (pFVar17 != (FName *)0x0) {
              if (((FVar19.Data <= pFVar17) && (pFVar17 < FVar19.Data + local_e8._4_4_)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (iVar11 == local_e8._4_4_) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FName>_>
                                   (0x408,&local_f0,(int *)((longlong)&local_e8 + 4));
                FVar19.Data = local_f0.Data;
              }
              pFVar24 = pFVar24 + 1;
              pFVar20 = (FName *)(ulonglong)(iVar11 + 1U);
              FVar19.Data[iVar11] = *pFVar17;
              uVar14 = (ulonglong)local_d8;
              local_e8 = CONCAT44(local_e8._4_4_,iVar11 + 1U);
              goto LAB_14cfc4271;
            }
            break;
          }
          iVar10 = *(int *)(lVar25 + 0x10);
        } while (iVar10 != -1);
      }
    }
    FVar2 = *pFVar24;
    this_00 = UObject::FindFunctionChecked
                        ((UObject *)this,NAME_ULiveLinkRemapAsset_GetRemappedBoneName);
    pUVar13 = UField::GetOwnerClass((UField *)this_00);
    if ((pUVar13->ClassFlags & CLASS_Native) == CLASS_None) {
      local_c8.ComparisonIndex.Value = 0;
      local_c8.Number = 0;
      local_d0 = FVar2;
      (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_d0);
      local_e0 = local_c8;
    }
    else {
      (**(code **)(this->_padding_ + 0x2d8))(this,&local_e0,FVar2);
    }
    if (((FVar19.Data <= &local_e0) && (&local_e0 < FVar19.Data + local_e8._4_4_)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (iVar11 == local_e8._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FName>_>
                         (0x408,&local_f0,(int *)((longlong)&local_e8 + 4));
      FVar19.Data = local_f0.Data;
    }
    pFVar20 = (FName *)(ulonglong)(iVar11 + 1U);
    FVar19.Data[iVar11] = local_e0;
    local_98 = &local_e0;
    local_e8 = CONCAT44(local_e8._4_4_,iVar11 + 1U);
    local_a0 = pFVar24;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)&this->BoneNameMap,&local_c0,(bool *)&local_a0);
    uVar14 = (ulonglong)local_d8;
    pFVar24 = pFVar24 + 1;
    pFVar23 = local_c0.Value;
  } while( true );
}

// GetPrivateStaticClass @ 14cfc4f80

UClass * __cdecl ULiveLinkRemapAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkRemapAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkAnimationCore",L"LiveLinkRemapAsset",
               &Z_Registration_Info_UClass_ULiveLinkRemapAsset.InnerSingleton,
               StaticRegisterNativesULiveLinkRemapAsset,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkRemapAsset>,
               InternalVTableHelperCtorCaller<ULiveLinkRemapAsset>,local_res8,
               ULiveLinkRetargetAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkRemapAsset.InnerSingleton;
}

// GetRemappedBoneName @ 14cfc50f0

FName __thiscall ULiveLinkRemapAsset::GetRemappedBoneName(ULiveLinkRemapAsset *this,FName param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ULiveLinkRemapAsset_GetRemappedBoneName);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_10 = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_18);
    *(undefined8 *)param_1 = local_10;
  }
  else {
    (**(code **)(this->_padding_ + 0x2d8))(this,param_1);
  }
  return param_1;
}

// GetRemappedBoneName_Implementation @ 14cfc5190

FName __thiscall
ULiveLinkRemapAsset::GetRemappedBoneName_Implementation(ULiveLinkRemapAsset *this,FName param_1)

{
  undefined8 in_R8;
  
  *(undefined8 *)param_1 = in_R8;
  return param_1;
}

// GetRemappedCurveName @ 14cfc51a0

FName __thiscall ULiveLinkRemapAsset::GetRemappedCurveName(ULiveLinkRemapAsset *this,FName param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ULiveLinkRemapAsset_GetRemappedCurveName);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_10 = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_18);
    *(undefined8 *)param_1 = local_10;
  }
  else {
    (**(code **)(this->_padding_ + 0x2d0))(this,param_1);
  }
  return param_1;
}

// GetRemappedCurveName_Implementation @ 14cfc5240

FName __thiscall
ULiveLinkRemapAsset::GetRemappedCurveName_Implementation(ULiveLinkRemapAsset *this,FName param_1)

{
  undefined8 in_R8;
  
  *(undefined8 *)param_1 = in_R8;
  return param_1;
}

// OnBlueprintClassCompiled @ 14cfc5550

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
ULiveLinkRemapAsset::OnBlueprintClassCompiled(ULiveLinkRemapAsset *this,UBlueprint *param_1)

{
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this->BoneNameMap);
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this->CurveNameMap);
  return;
}

// RemapCurveElements @ 14cfc5780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ULiveLinkRemapAsset::RemapCurveElements
          (ULiveLinkRemapAsset *this,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_1)

{
  int iVar1;
  UFunction *this_00;
  UClass *pUVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ULiveLinkRemapAsset_RemapCurveElements);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_4c = 0x80;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_38 = (void *)0x0;
    local_30 = 0;
    local_48 = 0xffffffff;
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
              ((TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *
               )local_78,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00);
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
              (param_1,(TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                        *)local_78);
    local_30 = 0;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    iVar1 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_44 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2c8))(this);
  }
  return;
}

// RemapCurveElements_Implementation @ 14cfc58f0

void __thiscall
ULiveLinkRemapAsset::RemapCurveElements_Implementation
          (ULiveLinkRemapAsset *this,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_1)

{
  return;
}

// StaticRegisterNativesULiveLinkRemapAsset @ 14cfc5a30

void __cdecl ULiveLinkRemapAsset::StaticRegisterNativesULiveLinkRemapAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ULiveLinkRemapAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetRemappedBoneName @ 14cfc5e10

void __cdecl
ULiveLinkRemapAsset::execGetRemappedBoneName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_res10,local_res8)
  ;
  *(undefined8 *)param_3 = *puVar2;
  return;
}

// execGetRemappedCurveName @ 14cfc5eb0

void __cdecl
ULiveLinkRemapAsset::execGetRemappedCurveName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,local_res10,local_res8)
  ;
  *(undefined8 *)param_3 = *puVar2;
  return;
}

// execRemapCurveElements @ 14cfc5f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULiveLinkRemapAsset::execRemapCurveElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_a8 [32];
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_68.MaxBits = 0x80;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

