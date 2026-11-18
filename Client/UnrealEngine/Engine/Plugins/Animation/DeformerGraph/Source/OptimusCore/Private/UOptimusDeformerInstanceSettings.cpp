// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 10

// StaticClass @ 14e1165c0

UClass * __cdecl UOptimusDeformerInstanceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerInstanceSettings",
               &Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerInstanceSettings,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDeformerInstanceSettings>,
               InternalVTableHelperCtorCaller<UOptimusDeformerInstanceSettings>,local_res8,
               UMeshDeformerInstanceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.InnerSingleton;
}

// UOptimusDeformerInstanceSettings @ 14e159d10

UOptimusDeformerInstanceSettings * __thiscall
UOptimusDeformerInstanceSettings::UOptimusDeformerInstanceSettings
          (UOptimusDeformerInstanceSettings *this,FVTableHelper *param_1)

{
  UMeshDeformerInstanceSettings::UMeshDeformerInstanceSettings
            ((UMeshDeformerInstanceSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusDeformerInstanceSettings__6B_;
  (this->Deformer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  return this;
}

// UOptimusDeformerInstanceSettings @ 14e159d50

UOptimusDeformerInstanceSettings * __thiscall
UOptimusDeformerInstanceSettings::UOptimusDeformerInstanceSettings
          (UOptimusDeformerInstanceSettings *this,FObjectInitializer *param_1)

{
  UMeshDeformerInstanceSettings::UMeshDeformerInstanceSettings
            ((UMeshDeformerInstanceSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusDeformerInstanceSettings__6B_;
  (this->Deformer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  return this;
}

// ~UOptimusDeformerInstanceSettings @ 14e162ae0

void __thiscall
UOptimusDeformerInstanceSettings::~UOptimusDeformerInstanceSettings
          (UOptimusDeformerInstanceSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusDeformerInstanceSettings__6B_;
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshDeformerInstanceSettings::~UMeshDeformerInstanceSettings
            ((UMeshDeformerInstanceSettings *)this);
  return;
}

// operator() @ 14e168100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`UOptimusDeformerInstanceSettings::GetComponentBindings'::__l27::<lambda_1>::operator()
          (void *this,UActorComponent *param_1,UActorComponent *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  TArrayView<FName_const_,int> *pTVar13;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar14;
  byte bVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_298 [32];
  int local_268;
  uint uStack_264;
  int iStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  int local_248;
  uint uStack_244;
  int iStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  FSparseArrayAllocationInfo local_1c0;
  TArrayView<FName_const_,int> local_1a8;
  TArrayView<FName_const_,int> local_198;
  undefined1 local_188 [32];
  ForElementType<unsigned_int> local_168;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  FScriptContainerElement local_150 [8];
  ForAnyElementType local_148;
  uint local_140;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_e8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar11 = (param_1->ComponentTags).ArrayNum;
  pFVar25 = (param_1->ComponentTags).AllocatorInstance.Data;
  if (((int)uVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  local_168 = (ForElementType<unsigned_int>)0x0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = -1;
  local_154 = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  if (uVar11 == 0) goto LAB_14e1683f1;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_188,uVar11);
  uVar19 = 1;
  if (3 < uVar11) {
    uVar23 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar17 & 0x1f);
  }
  if ((local_140 != 0) && ((int)uVar19 <= (int)local_140)) goto LAB_14e1683f1;
  local_140 = uVar19;
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,0,4);
  }
  if (uVar19 != 0) {
    uVar22 = uVar19;
    if (uVar19 < 2) {
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        uVar22 = 0;
        goto LAB_14e168247;
      }
    }
    else {
LAB_14e168247:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,uVar22,4);
    }
    if (0 < (int)uVar19) {
      uVar23 = 0;
      uVar24 = (ulonglong)uVar19;
      do {
        FVar16.Data = local_150;
        if (local_148.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_148.Data;
        }
        uVar12 = (longlong)(int)uVar19 - 1U & uVar23;
        uVar23 = uVar23 + 1;
        *(undefined4 *)(FVar16.Data + uVar12 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_140 != 0) {
    local_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
    uStack_264 = 1;
    local_268 = 0;
    iStack_254 = 0;
    iStack_250 = 0;
    if (local_160 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
      if (local_168 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_168;
      }
      uVar19 = *(uint *)FVar18;
      while (uVar19 == 0) {
        iStack_250 = iStack_250 + 0x20;
        lVar17 = (longlong)local_268;
        local_268 = local_268 + 1;
        if ((int)(local_160 + -1 + (local_160 + -1 >> 0x1f & 0x1fU)) >> 5 < local_268)
        goto LAB_14e16834c;
        uVar19 = ((uint *)((longlong)FVar18 + 4))[lVar17];
      }
      uStack_264 = -uVar19 & uVar19;
      uVar23 = (ulonglong)uStack_264 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iStack_254 = (int)lVar17 + -1 + iStack_250;
      if (local_160 < iStack_254) {
LAB_14e16834c:
        iStack_254 = local_160;
      }
    }
    local_208._padding_ = CONCAT44(uStack_264,local_268);
    local_208.CurrentBitIndex = iStack_254;
    local_208.UnvisitedBitMask = 0xffffffff;
    local_208._28_4_ = uStack_24c;
    local_208.BaseBitIndex = iStack_250;
    if (iStack_254 < local_160) {
      do {
        pFVar20 = (FScriptContainerElement *)(local_188._0_8_ + (longlong)iStack_254 * 0x10);
        uVar4 = *(undefined8 *)pFVar20;
        uVar19 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar19 = local_140 - 1 & uVar19 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)(pFVar20 + 0xc) = uVar19;
        FVar16.Data = local_150;
        if (local_148.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_148.Data;
        }
        uVar23 = (longlong)(int)local_140 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)(pFVar20 + 8) = *(undefined4 *)(FVar16.Data + uVar23 * 4);
        *(int *)(FVar16.Data + uVar23 * 4) = iStack_254;
        local_208.UnvisitedBitMask = local_208.UnvisitedBitMask & ~local_208._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_208);
        iStack_254 = local_208.CurrentBitIndex;
      } while (local_208.CurrentBitIndex < (local_208.Array)->NumBits);
    }
  }
LAB_14e1683f1:
  pFVar20 = pFVar25 + (longlong)(int)uVar11 * 8;
  iVar9 = local_158;
  do {
    local_158 = iVar9;
    if (pFVar25 == pFVar20) {
      pTVar13 = TArrayView<FName_const_,int>::
                TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                          (&local_198,&param_2->ComponentTags);
      local_1a8.DataPtr = pTVar13->DataPtr;
      local_1a8.ArrayNum = pTVar13->ArrayNum;
      local_1a8._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
      local_138._0_8_ = (void *)0x0;
      local_138._8_8_ = 0;
      local_118 = (void *)0x0;
      local_110 = 0;
      local_10c = 0x80;
      local_108 = 0xffffffff;
      local_104 = 0;
      local_f8 = (ForElementType<FSetElementId>)0x0;
      local_f0 = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,&local_1a8);
      pTVar14 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Intersect
                          (this,&local_98,
                           (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_188);
      iVar9 = *(int *)&(pTVar14->Elements).field_0x8;
      iVar10 = *(int *)&(pTVar14->Elements).field_0x34;
      pTVar14 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Intersect
                          (this,&local_e8,
                           (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138);
      iVar2 = *(int *)&(pTVar14->Elements).field_0x8;
      iVar3 = *(int *)&(pTVar14->Elements).field_0x34;
      local_e8.HashSize = 0;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.Elements);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      local_f0 = 0;
      if (local_f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_138,0);
      if (local_118 != (void *)0x0) {
        FMemory::Free(local_118);
      }
      if ((void *)local_138._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_138._0_8_);
      }
      local_140 = 0;
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_188,0);
      if (local_168 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_168);
      }
      if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_188._0_8_);
      }
      return iVar9 - iVar10 < iVar2 - iVar3;
    }
    if (local_154 == 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,1,(ForAnyElementType *)local_188,(int *)(local_188 + 8),
                         (int *)(local_188 + 0xc));
      iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10),1);
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
      if (local_168 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_168;
      }
      bVar15 = (byte)iVar10 & 0x1f;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0x1f;
        bVar15 = bVar15 - 0x20;
      }
      puVar1 = (uint *)((longlong)FVar18 + (longlong)(iVar10 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << (bVar15 & 0x1f));
    }
    else {
      local_158 = *(int *)(local_188._0_8_ + (longlong)iVar9 * 0x10 + 4);
      local_154 = local_154 + -1;
      if (local_154 != 0) {
        *(undefined4 *)(local_188._0_8_ + (longlong)local_158 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_188,&local_1c0,iVar9);
    pvVar6 = local_1c0.Pointer;
    iVar9 = local_1c0.Index;
    if (local_1c0.Pointer != (longlong *)0x0) {
      *(longlong *)local_1c0.Pointer = *(longlong *)pFVar25;
      *(undefined4 *)((longlong)local_1c0.Pointer + 8) = 0xffffffff;
    }
    lVar17 = *(longlong *)local_1c0.Pointer;
    uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar17);
    uVar11 = uVar11 + (int)((ulonglong)lVar17 >> 0x20);
    if ((local_188._8_4_ - local_154 != 1) && (local_188._8_4_ != local_154)) {
      FVar16.Data = local_150;
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_148.Data;
      }
      for (iVar10 = *(int *)(FVar16.Data + (ulonglong)(local_140 - 1 & uVar11) * 4); iVar10 != -1;
          iVar10 = *(int *)(local_188._0_8_ + (longlong)iVar10 * 0x10 + 8)) {
        if (*(longlong *)(local_188._0_8_ + (longlong)iVar10 * 0x10) == *(longlong *)pvVar6) {
          if (iVar10 != -1) {
            *(longlong *)(local_188._0_8_ + (longlong)iVar10 * 0x10) = *(longlong *)pvVar6;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_188,iVar9,1);
            goto LAB_14e1687b5;
          }
          break;
        }
      }
    }
    uVar22 = local_188._8_4_ - local_154;
    uVar19 = 1;
    if (3 < uVar22) {
      uVar23 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar19 = 1 << ((byte)lVar17 & 0x1f);
    }
    if (((int)uVar22 < 1) || ((int)uVar19 <= (int)local_140)) {
      uVar11 = local_140 - 1 & uVar11;
      *(uint *)((longlong)pvVar6 + 0xc) = uVar11;
      FVar16.Data = local_150;
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_148.Data;
      }
      uVar23 = (longlong)(int)local_140 - 1U & (longlong)(int)uVar11;
      *(undefined4 *)((longlong)pvVar6 + 8) = *(undefined4 *)(FVar16.Data + uVar23 * 4);
      *(int *)(FVar16.Data + uVar23 * 4) = iVar9;
    }
    else {
      local_140 = uVar19;
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,0,4);
      }
      if (uVar19 != 0) {
        uVar11 = uVar19;
        if (uVar19 < 2) {
          if (local_148.Data != (FScriptContainerElement *)0x0) {
            uVar11 = 0;
            goto LAB_14e1685e1;
          }
        }
        else {
LAB_14e1685e1:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_148,0,uVar11,4);
        }
        if (0 < (int)uVar19) {
          uVar24 = (ulonglong)uVar19;
          uVar23 = 0;
          do {
            FVar16.Data = local_150;
            if (local_148.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_148.Data;
            }
            uVar12 = uVar23 & (longlong)(int)uVar19 - 1U;
            uVar23 = uVar23 + 1;
            *(undefined4 *)(FVar16.Data + uVar12 * 4) = 0xffffffff;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      if (local_140 != 0) {
        local_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
        uStack_244 = 1;
        local_248 = 0;
        iStack_234 = 0;
        iStack_230 = 0;
        if (local_160 != 0) {
          FVar18 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
          if (local_168 != (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_168;
          }
          uVar11 = *(uint *)FVar18;
          while (uVar11 == 0) {
            iStack_230 = iStack_230 + 0x20;
            lVar17 = (longlong)local_248;
            local_248 = local_248 + 1;
            if ((int)(local_160 + -1 + (local_160 + -1 >> 0x1f & 0x1fU)) >> 5 < local_248)
            goto LAB_14e1686dc;
            uVar11 = ((uint *)((longlong)FVar18 + 4))[lVar17];
          }
          uStack_244 = -uVar11 & uVar11;
          uVar23 = (ulonglong)uStack_244 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iStack_234 = (int)lVar17 + -1 + iStack_230;
          if (local_160 < iStack_234) {
LAB_14e1686dc:
            iStack_234 = local_160;
          }
        }
        local_1e8 = (longlong *)local_188;
        local_1e0._padding_ = CONCAT44(uStack_244,local_248);
        local_1e0.CurrentBitIndex = iStack_234;
        local_1e0.UnvisitedBitMask = 0xffffffff;
        local_1e0._28_4_ = uStack_22c;
        local_1e0.BaseBitIndex = iStack_230;
        if (iStack_234 < local_160) {
          do {
            puVar21 = (undefined8 *)((longlong)iStack_234 * 0x10 + *local_1e8);
            uVar4 = *puVar21;
            uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
            uVar11 = local_140 - 1 & uVar11 + (int)((ulonglong)uVar4 >> 0x20);
            *(uint *)((longlong)puVar21 + 0xc) = uVar11;
            FVar16.Data = local_150;
            if (local_148.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_148.Data;
            }
            uVar23 = (longlong)(int)local_140 - 1U & (longlong)(int)uVar11;
            *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(FVar16.Data + uVar23 * 4);
            *(int *)(FVar16.Data + uVar23 * 4) = iStack_234;
            local_1e0.UnvisitedBitMask = local_1e0.UnvisitedBitMask & ~local_1e0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
            iStack_234 = local_1e0.CurrentBitIndex;
          } while (local_1e0.CurrentBitIndex < (local_1e0.Array)->NumBits);
        }
      }
    }
LAB_14e1687b5:
    pFVar25 = pFVar25 + 8;
    iVar9 = local_158;
  } while( true );
}

// GetComponentBindingByName @ 14e1bd300

UOptimusComponentSourceBinding * __thiscall
UOptimusDeformerInstanceSettings::GetComponentBindingByName
          (UOptimusDeformerInstanceSettings *this,FName param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  UObject *pUVar4;
  UOptimusComponentSourceBinding *pUVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  pUVar4 = FWeakObjectPtr::Get(&(this->Deformer).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
LAB_14e1bd359:
    pUVar5 = (UOptimusComponentSourceBinding *)0x0;
  }
  else {
    lVar3 = *(longlong *)&pUVar4[7].field_0x10;
    plVar6 = *(longlong **)(lVar3 + 0x28);
    iVar2 = *(int *)(lVar3 + 0x30);
    plVar1 = plVar6 + iVar2;
    while( true ) {
      if (*(int *)(lVar3 + 0x30) != iVar2) {
        `TCheckedPointerIterator<UOptimusComponentSourceBinding_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar6 == plVar1) goto LAB_14e1bd359;
      pUVar5 = (UOptimusComponentSourceBinding *)*plVar6;
      if (pUVar5->BindingName == param_1) break;
      plVar6 = plVar6 + 1;
    }
  }
  return pUVar5;
}

// GetComponentBindings @ 14e1bd380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UOptimusDeformerInstanceSettings::GetComponentBindings
          (UOptimusDeformerInstanceSettings *this,UOptimusDeformer *param_1,UMeshComponent *param_2,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FName *pFVar1;
  FName FVar2;
  UMeshComponent *pUVar3;
  undefined8 uVar4;
  TObjectPtr<UClass>_u_0 TVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FIdentityFunctor FVar8;
  void *pvVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  UObject *this_00;
  UActorComponent **ppUVar14;
  TSubclassOf<UActorComponent> *this_01;
  UOptimusComponentSource *pUVar15;
  TSubclassOf<UActorComponent> TVar16;
  ulonglong uVar17;
  TObjectPtr<UClass>_u_0 *pTVar18;
  UClass *pUVar19;
  UClass *pUVar20;
  byte bVar21;
  AActor *pAVar22;
  ulonglong uVar23;
  longlong lVar24;
  ForElementType<unsigned_int> FVar25;
  uint uVar26;
  uint uVar27;
  FOptimusDeformerInstanceComponentBinding *this_02;
  UOptimusComponentSourceBindingContainer *pUVar28;
  ForAnyElementType FVar29;
  FScriptContainerElement *pFVar30;
  FOptimusDeformerInstanceComponentBinding *pFVar31;
  undefined8 *puVar32;
  ForElementType<FSetElementId> FVar33;
  ulonglong uVar34;
  uint *puVar35;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar36;
  UOptimusComponentSourceBinding *this_03;
  FName *pFVar37;
  undefined1 auStackY_468 [32];
  FIdentityFunctor local_418;
  undefined1 local_417;
  undefined1 local_416;
  undefined1 local_415 [5];
  UMeshComponent *local_410;
  ForAnyElementType local_408;
  undefined8 local_400;
  ForAnyElementType local_3f8;
  undefined8 local_3f0;
  FScriptContainerElement *local_3e8;
  AActor *local_3e0;
  uint local_3d8;
  UOptimusComponentSourceBinding *local_3d0;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *local_3c8;
  int local_3c0;
  uint uStack_3bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3b8;
  undefined4 local_3b0;
  undefined8 uStack_3ac;
  undefined4 uStack_3a4;
  int local_3a0;
  uint uStack_39c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_398;
  undefined4 local_390;
  undefined8 uStack_38c;
  undefined4 uStack_384;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_380;
  longlong *local_370;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_368;
  longlong *local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_340;
  longlong *local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_318;
  UObject *local_2f8;
  UMeshComponent *local_2f0;
  undefined8 local_2e8;
  TObjectPtr<UClass>_u_0 local_2e0;
  TObjectPtr<UClass>_u_0 local_2d8;
  TObjectPtr<UClass>_u_0 local_2d0;
  UOptimusComponentSourceBindingContainer *local_2c8;
  FScriptContainerElement *local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  FSparseArrayAllocationInfo local_2a8;
  int local_298;
  undefined1 local_294 [20];
  longlong *local_280;
  uint uStack_278;
  uint uStack_274;
  TBitArray<FDefaultBitArrayAllocator> *local_270;
  undefined4 uStack_268;
  int iStack_264;
  uint local_260;
  undefined4 uStack_25c;
  FOptimusDeformerInstanceComponentBinding *local_250;
  UObject **local_248;
  undefined1 local_240 [8];
  undefined1 local_238 [8];
  undefined1 local_230 [8];
  TPersistentObjectPtr<FSoftObjectPath> local_228;
  undefined4 local_1e4;
  undefined1 local_1d8 [32];
  ForElementType<unsigned_int> local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  FScriptContainerElement local_1a0 [8];
  ForAnyElementType local_198;
  uint local_190;
  undefined1 local_188 [32];
  uint *local_168;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  ForElementType<FSetElementId> local_148;
  int local_140;
  TSet<TTuple<FName,UActorComponent_*>,TDefaultMapHashableKeyFuncs<FName,UActorComponent_*,0>,FDefaultSetAllocator>
  local_138;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> local_e8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  pAVar22 = (AActor *)0x0;
  if (param_2 != (UMeshComponent *)0x0) {
    pAVar22 = (AActor *)param_2->_padding_;
  }
  iVar13 = (this->Bindings).ArrayNum;
  this_02 = (FOptimusDeformerInstanceComponentBinding *)(this->Bindings).AllocatorInstance.Data;
  pFVar31 = this_02 + iVar13;
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  local_3e0 = pAVar22;
  local_3c8 = param_3;
  local_2f0 = param_2;
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar13) {
      local_417 = 0;
      `TCheckedPointerIterator<FOptimusDeformerInstanceComponentBinding_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_417);
    }
    pTVar36 = local_3c8;
    if (this_02 == pFVar31) break;
    FOptimusDeformerInstanceComponentBinding::GetActorComponent
              (this_02,(TSoftObjectPtr<UActorComponent> *)&local_228,pAVar22);
    this_00 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_228);
    if ((this_00 == (UObject *)0x0) ||
       (bVar10 = UObjectBaseUtility::IsA<UActorComponent>((UObjectBaseUtility *)this_00), !bVar10))
    {
      this_00 = (UObject *)0x0;
    }
    local_248 = &local_2f8;
    local_2f8 = this_00;
    local_250 = this_02;
    TSet<TTuple<FName,UActorComponent_*>,TDefaultMapHashableKeyFuncs<FName,UActorComponent_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,UActorComponent_*_const_&>_>
              (&local_138,(TPairInitializer<FName_const_&,UActorComponent_*_const_&> *)local_294,
               (bool *)&local_250);
    if (local_228.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    this_02 = this_02 + 1;
  }
  pUVar28 = (param_1->Bindings).field0_0x0.DebugPtr;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  local_2c8 = pUVar28;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::Reset
            (local_3c8,(pUVar28->Bindings).ArrayNum);
  local_3d8 = (pUVar28->Bindings).ArrayNum;
  uVar23 = (ulonglong)(int)local_3d8;
  pFVar30 = (pUVar28->Bindings).AllocatorInstance.Data;
  local_2c0 = pFVar30 + uVar23 * 8;
  do {
    pFVar6 = local_2c0;
    local_3e8 = pFVar30;
    if ((pUVar28->Bindings).ArrayNum != (int)uVar23) {
      local_416 = 0;
      `TCheckedPointerIterator<UOptimusComponentSourceBinding_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_416);
    }
    if (pFVar30 == pFVar6) {
      local_e8.HashSize = 0;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.Elements);
      local_138.HashSize = 0;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UActorComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UActorComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138.Elements);
      return;
    }
    this_03 = *(UOptimusComponentSourceBinding **)pFVar30;
    local_410 = (UMeshComponent *)0x0;
    FVar2 = this_03->BindingName;
    local_3d0 = this_03;
    if (this_03->bIsPrimaryBinding == false) {
      uVar11 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
        FVar33 = (ForElementType<FSetElementId>)&local_138.Hash;
        if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar33 = local_138.Hash.SecondaryData;
        }
        for (iVar13 = *(int *)((longlong)FVar33 +
                              (ulonglong)(local_138.HashSize - 1U & uVar11 + FVar2.Number) * 4);
            iVar13 != -1;
            iVar13 = *(int *)(local_138.Elements._0_8_ + 0x10 + (longlong)iVar13 * 0x18)) {
          if (*(FName *)(local_138.Elements._0_8_ + (longlong)iVar13 * 0x18) == FVar2) {
            ppUVar14 = TMapBase<FName,UActorComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UActorComponent_*,0>_>
                       ::FindChecked((TMapBase<FName,UActorComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UActorComponent_*,0>_>
                                      *)&local_138,FVar2);
            pUVar3 = (UMeshComponent *)*ppUVar14;
            if (pUVar3 != (UMeshComponent *)0x0) {
              pUVar15 = UOptimusComponentSourceBinding::GetComponentSource(this_03);
              this_01 = (TSubclassOf<UActorComponent> *)
                        (**(code **)(*(longlong *)pUVar15 + 0x2c0))(pUVar15,local_238);
              pUVar19 = TSubclassOf<UActorComponent>::operator*(this_01);
              iVar13 = (int)pUVar19->_padding_;
              if ((iVar13 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar13 * 8)
                  == &pUVar19->_padding_)) {
                local_410 = pUVar3;
              }
            }
            break;
          }
        }
      }
      if ((local_410 == (UMeshComponent *)0x0) && (pFVar30 = local_3e8, local_3e0 != (AActor *)0x0))
      {
        if ((this_03->ComponentTags).ArrayNum != 0) {
          pFVar37 = (FName *)(this_03->ComponentTags).AllocatorInstance.Data;
          iVar13 = (this_03->ComponentTags).ArrayNum;
          local_188._0_8_ = 0;
          local_188._8_8_ = 0;
          local_168 = (uint *)0x0;
          pFVar1 = pFVar37 + iVar13;
          local_160 = 0;
          local_15c = 0x80;
          local_158 = 0xffffffff;
          local_154 = 0;
          local_148 = (ForElementType<FSetElementId>)0x0;
          local_140 = 0;
          while( true ) {
            pAVar22 = local_3e0;
            if ((this_03->ComponentTags).ArrayNum != iVar13) {
              local_415[0] = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_415);
            }
            FVar8 = local_418;
            if (pFVar37 == pFVar1) break;
            FVar2 = *pFVar37;
            pUVar15 = UOptimusComponentSourceBinding::GetComponentSource(this_03);
            TVar16.Class.field0_0x0 =
                 (TObjectPtr<UClass>)(**(code **)(*(longlong *)pUVar15 + 0x2c0))(pUVar15,local_230);
            AActor::GetComponentsByTag(pAVar22,&local_380,TVar16,FVar2);
            iVar12 = local_380.ArrayNum;
            uVar23 = (ulonglong)local_380.ArrayNum;
            pFVar30 = local_380.AllocatorInstance.Data + uVar23 * 8;
            FVar29.Data = local_380.AllocatorInstance.Data;
            while( true ) {
              if ((uint)uVar23 != iVar12) {
                local_418 = (FIdentityFunctor)0x0;
                `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_418);
              }
              if (FVar29.Data == pFVar30) break;
              local_2e8 = *(undefined8 *)FVar29.Data;
              TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
              Emplace<UActorComponent_*_const_&>
                        ((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                          *)local_188,(UActorComponent **)&local_2b8,(bool *)&local_2e8);
              uVar23 = (ulonglong)(uint)local_380.ArrayNum;
              FVar29.Data = FVar29.Data + 8;
            }
            if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_380.AllocatorInstance.Data);
            }
            pFVar37 = pFVar37 + 1;
          }
          uVar23 = 0;
          uVar11 = local_188._8_4_ - local_154;
          local_408.Data = (FScriptContainerElement *)0x0;
          local_400 = 0;
          if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
          }
          uVar34 = uVar23;
          if (0 < (int)uVar11) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar11,&local_408,0,(int *)((longlong)&local_400 + 4));
            uVar34 = local_400 & 0xffffffff;
          }
          local_260 = 0;
          uStack_274 = 1;
          TStack_368.CurrentBitIndex = 0;
          uStack_278 = 0;
          if (local_160 != 0) {
            puVar35 = (uint *)(local_188 + 0x10);
            if (local_168 != (uint *)0x0) {
              puVar35 = local_168;
            }
            uVar11 = *puVar35;
            uVar17 = uVar23;
            local_260 = 0;
            uStack_278 = 0;
            while (uVar11 == 0) {
              uStack_278 = (int)uVar23 + 1;
              uVar23 = (ulonglong)uStack_278;
              local_260 = (int)uVar17 + 0x20;
              uVar17 = (ulonglong)local_260;
              TStack_368.CurrentBitIndex = local_160;
              if ((int)(local_160 + -1 + (local_160 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_278)
              goto LAB_14e1bd880;
              uVar11 = puVar35[(int)uStack_278];
            }
            uStack_274 = -uVar11 & uVar11;
            uVar23 = (ulonglong)uStack_274 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            local_2b8._4_4_ = (int)lVar24;
            TStack_368.CurrentBitIndex = local_2b8._4_4_ + -1 + local_260;
            if (local_160 < TStack_368.CurrentBitIndex) {
              TStack_368.CurrentBitIndex = local_160;
            }
          }
LAB_14e1bd880:
          local_370 = (longlong *)local_188;
          uStack_25c = local_1e4;
          local_270 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
          uStack_268 = 0xffffffff;
          TStack_368._padding_ = CONCAT44(uStack_274,uStack_278);
          TStack_368.UnvisitedBitMask = 0xffffffff;
          TStack_368._28_4_ = local_1e4;
          TStack_368.BaseBitIndex = local_260;
          local_280 = local_370;
          iStack_264 = TStack_368.CurrentBitIndex;
          TStack_368.Array = local_270;
          if (TStack_368.CurrentBitIndex < local_160) {
            while( true ) {
              pFVar30 = (FScriptContainerElement *)
                        ((longlong)TStack_368.CurrentBitIndex * 0x10 + *local_370);
              iVar13 = (int)uVar34;
              if ((local_408.Data <= pFVar30) &&
                 (pFVar30 < local_408.Data + (longlong)local_400._4_4_ * 8)) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar13 = (int)local_400;
              }
              if (iVar13 == local_400._4_4_) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_408,(int *)((longlong)&local_400 + 4));
              }
              local_400 = CONCAT44(local_400._4_4_,iVar13 + 1);
              *(UActorComponent **)(local_408.Data + (longlong)iVar13 * 8) =
                   *(UActorComponent **)pFVar30;
              TStack_368.UnvisitedBitMask =
                   TStack_368.UnvisitedBitMask & ~TStack_368._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_368);
              if ((TStack_368.Array)->NumBits <= TStack_368.CurrentBitIndex) break;
              uVar34 = local_400 & 0xffffffff;
            }
          }
          this_03 = local_3d0;
          uVar11 = (local_3d0->ComponentTags).ArrayNum;
          pFVar30 = (local_3d0->ComponentTags).AllocatorInstance.Data;
          if ((int)uVar11 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L"");
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          local_1d8._0_8_ = (FScriptContainerElement *)0x0;
          local_1d8._8_8_ = 0;
          local_1b8 = (ForElementType<unsigned_int>)0x0;
          local_1b0 = 0;
          local_1ac = 0x80;
          local_1a8 = -1;
          local_1a4 = 0;
          local_198.Data = (FScriptContainerElement *)0x0;
          local_190 = 0;
          if (uVar11 != 0) {
            if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
            }
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_1d8,uVar11);
            uVar26 = 1;
            if (3 < uVar11) {
              uVar23 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
              lVar24 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              local_2b0 = (undefined4)lVar24;
              uVar26 = 1 << ((byte)lVar24 & 0x1f);
            }
            if ((local_190 == 0) || ((int)local_190 < (int)uVar26)) {
              local_190 = uVar26;
              if (local_198.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_198,0,0,4);
              }
              if (uVar26 != 0) {
                uVar27 = uVar26;
                if (uVar26 < 2) {
                  if (local_198.Data != (FScriptContainerElement *)0x0) {
                    uVar27 = 0;
                    goto LAB_14e1bdb16;
                  }
                }
                else {
LAB_14e1bdb16:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_198,0,uVar27,4);
                }
                if (0 < (int)uVar26) {
                  uVar23 = 0;
                  uVar34 = (ulonglong)uVar26;
                  do {
                    FVar29.Data = local_1a0;
                    if (local_198.Data != (FScriptContainerElement *)0x0) {
                      FVar29.Data = local_198.Data;
                    }
                    uVar17 = (longlong)(int)uVar26 - 1U & uVar23;
                    uVar23 = uVar23 + 1;
                    *(undefined4 *)(FVar29.Data + uVar17 * 4) = 0xffffffff;
                    uVar34 = uVar34 - 1;
                  } while (uVar34 != 0);
                }
              }
              if (local_190 != 0) {
                pTStack_3b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
                uStack_3bc = 1;
                uVar26 = 0;
                local_3c0 = 0;
                uStack_3ac = 0;
                if (local_1b0 != 0) {
                  FVar25 = (ForElementType<unsigned_int>)((longlong)local_1d8 + 0x10);
                  if (local_1b8 != (ForElementType<unsigned_int>)0x0) {
                    FVar25 = local_1b8;
                  }
                  uVar27 = *(uint *)FVar25;
                  local_3c0 = 0;
                  while (uVar27 == 0) {
                    uVar26 = uVar26 + 0x20;
                    lVar24 = (longlong)local_3c0;
                    local_3c0 = local_3c0 + 1;
                    uStack_3ac = (ulonglong)uVar26 << 0x20;
                    if ((int)(local_1b0 + -1 + (local_1b0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_3c0) {
                      uStack_3ac = CONCAT44(uVar26,local_1b0);
                      goto LAB_14e1bdc33;
                    }
                    uVar27 = ((uint *)((longlong)FVar25 + 4))[lVar24];
                  }
                  uStack_3bc = -uVar27 & uVar27;
                  uVar23 = (ulonglong)uStack_3bc * 2 + 1;
                  lVar24 = 0x3f;
                  if (uVar23 != 0) {
                    for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                    }
                  }
                  local_298 = (int)lVar24;
                  iVar13 = local_298 + -1 + uVar26;
                  if (local_1b0 < iVar13) {
                    iVar13 = local_1b0;
                  }
                  uStack_3ac._4_4_ = (int)((ulonglong)uStack_3ac >> 0x20);
                  uStack_3ac = CONCAT44(uStack_3ac._4_4_,iVar13);
                }
LAB_14e1bdc33:
                local_3b0 = 0xffffffff;
                local_348 = (longlong *)local_1d8;
                local_340._padding_ = CONCAT44(uStack_3bc,local_3c0);
                local_340.UnvisitedBitMask = 0xffffffff;
                local_340.CurrentBitIndex = (int)uStack_3ac;
                local_340.BaseBitIndex = uStack_3ac._4_4_;
                local_340._28_4_ = uStack_3a4;
                local_340.Array = pTStack_3b8;
                if ((int)uStack_3ac < local_1b0) {
                  do {
                    iVar13 = local_340.CurrentBitIndex;
                    puVar32 = (undefined8 *)
                              ((longlong)local_340.CurrentBitIndex * 0x10 + *local_348);
                    uVar4 = *puVar32;
                    uVar26 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
                    uVar26 = local_190 - 1 & uVar26 + (int)((ulonglong)uVar4 >> 0x20);
                    *(uint *)((longlong)puVar32 + 0xc) = uVar26;
                    FVar29.Data = local_1a0;
                    if (local_198.Data != (FScriptContainerElement *)0x0) {
                      FVar29.Data = local_198.Data;
                    }
                    lVar24 = (longlong)(int)(local_190 - 1 & uVar26);
                    *(undefined4 *)(puVar32 + 1) = *(undefined4 *)(FVar29.Data + lVar24 * 4);
                    *(int *)(FVar29.Data + lVar24 * 4) = iVar13;
                    local_340.UnvisitedBitMask =
                         local_340.UnvisitedBitMask & ~local_340._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_340);
                  } while (local_340.CurrentBitIndex < (local_340.Array)->NumBits);
                }
              }
            }
          }
          pFVar6 = pFVar30 + (longlong)(int)uVar11 * 8;
          iVar13 = local_1a8;
          for (; local_1a8 = iVar13, pFVar30 != pFVar6; pFVar30 = pFVar30 + 8) {
            if (local_1a4 == 0) {
              iVar13 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,4,1,(ForAnyElementType *)local_1d8,(int *)(local_1d8 + 8),
                                  (int *)(local_1d8 + 0xc));
              iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                 ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),1);
              FVar25 = (ForElementType<unsigned_int>)((longlong)local_1d8 + 0x10);
              if (local_1b8 != (ForElementType<unsigned_int>)0x0) {
                FVar25 = local_1b8;
              }
              bVar21 = (byte)iVar12 & 0x1f;
              if (iVar12 < 0) {
                iVar12 = iVar12 + 0x1f;
                bVar21 = bVar21 - 0x20;
              }
              puVar35 = (uint *)((longlong)FVar25 + (longlong)(iVar12 >> 5) * 4);
              *puVar35 = *puVar35 & ~(1 << (bVar21 & 0x1f));
            }
            else {
              local_1a8 = *(int *)(local_1d8._0_8_ + (longlong)iVar13 * 0x10 + 4);
              local_1a4 = local_1a4 + -1;
              if (local_1a4 != 0) {
                *(undefined4 *)(local_1d8._0_8_ + (longlong)local_1a8 * 0x10) = 0xffffffff;
              }
            }
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_1d8,&local_2a8,iVar13);
            pvVar9 = local_2a8.Pointer;
            if (local_2a8.Pointer != (longlong *)0x0) {
              *(longlong *)local_2a8.Pointer = *(longlong *)pFVar30;
              *(undefined4 *)((longlong)local_2a8.Pointer + 8) = 0xffffffff;
            }
            lVar24 = *(longlong *)local_2a8.Pointer;
            uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar24);
            uVar26 = local_1d8._8_4_ - local_1a4;
            uVar11 = uVar11 + (int)((ulonglong)lVar24 >> 0x20);
            if (uVar26 == 1) {
LAB_14e1bde8d:
              if (uVar26 < 4) goto LAB_14e1bdee9;
              uVar23 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
              lVar24 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              local_294._4_4_ = (undefined4)lVar24;
              uVar27 = 1 << ((byte)lVar24 & 0x1f);
            }
            else {
              if (uVar26 != 0) {
                FVar29.Data = local_1a0;
                if (local_198.Data != (FScriptContainerElement *)0x0) {
                  FVar29.Data = local_198.Data;
                }
                for (iVar13 = *(int *)(FVar29.Data + (ulonglong)(local_190 - 1 & uVar11) * 4);
                    iVar13 != -1; iVar13 = *(int *)(local_1d8._0_8_ + (longlong)iVar13 * 0x10 + 8))
                {
                  if (*(longlong *)(local_1d8._0_8_ + (longlong)iVar13 * 0x10) ==
                      *(longlong *)pvVar9) {
                    if (iVar13 != -1) {
                      *(longlong *)(local_1d8._0_8_ + (longlong)iVar13 * 0x10) = *(longlong *)pvVar9
                      ;
                      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::RemoveAtUninitialized
                                ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  *)local_1d8,local_2a8.Index,1);
                      goto LAB_14e1be16d;
                    }
                    break;
                  }
                }
                goto LAB_14e1bde8d;
              }
LAB_14e1bdee9:
              uVar27 = 1;
            }
            if (((int)uVar26 < 1) || ((int)uVar27 <= (int)local_190)) {
              uVar11 = local_190 - 1 & uVar11;
              *(uint *)((longlong)pvVar9 + 0xc) = uVar11;
              FVar29.Data = local_1a0;
              if (local_198.Data != (FScriptContainerElement *)0x0) {
                FVar29.Data = local_198.Data;
              }
              lVar24 = (longlong)(int)(local_190 - 1 & uVar11);
              *(undefined4 *)((longlong)pvVar9 + 8) = *(undefined4 *)(FVar29.Data + lVar24 * 4);
              *(int *)(FVar29.Data + lVar24 * 4) = local_2a8.Index;
            }
            else {
              local_190 = uVar27;
              if (local_198.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_198,0,0,4);
              }
              if (uVar27 != 0) {
                uVar11 = uVar27;
                if (uVar27 < 2) {
                  if (local_198.Data != (FScriptContainerElement *)0x0) {
                    uVar11 = 0;
                    goto LAB_14e1bdf3f;
                  }
                }
                else {
LAB_14e1bdf3f:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_198,0,uVar11,4);
                }
                if (0 < (int)uVar27) {
                  uVar34 = (ulonglong)uVar27;
                  uVar23 = 0;
                  do {
                    FVar29.Data = local_1a0;
                    if (local_198.Data != (FScriptContainerElement *)0x0) {
                      FVar29.Data = local_198.Data;
                    }
                    uVar17 = uVar23 & (longlong)(int)uVar27 - 1U;
                    uVar23 = uVar23 + 1;
                    *(undefined4 *)(FVar29.Data + uVar17 * 4) = 0xffffffff;
                    uVar34 = uVar34 - 1;
                  } while (uVar34 != 0);
                }
              }
              if (local_190 != 0) {
                pTStack_398 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
                uStack_39c = 1;
                uVar11 = 0;
                local_3a0 = 0;
                uStack_38c = 0;
                if (local_1b0 != 0) {
                  FVar25 = (ForElementType<unsigned_int>)((longlong)local_1d8 + 0x10);
                  if (local_1b8 != (ForElementType<unsigned_int>)0x0) {
                    FVar25 = local_1b8;
                  }
                  uVar26 = *(uint *)FVar25;
                  local_3a0 = 0;
                  while (uVar26 == 0) {
                    uVar11 = uVar11 + 0x20;
                    lVar24 = (longlong)local_3a0;
                    local_3a0 = local_3a0 + 1;
                    uStack_38c = (ulonglong)uVar11 << 0x20;
                    if ((int)(local_1b0 + -1 + (local_1b0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_3a0) {
                      uStack_38c = CONCAT44(uVar11,local_1b0);
                      goto LAB_14e1be063;
                    }
                    uVar26 = ((uint *)((longlong)FVar25 + 4))[lVar24];
                  }
                  uStack_39c = -uVar26 & uVar26;
                  uVar23 = (ulonglong)uStack_39c * 2 + 1;
                  lVar24 = 0x3f;
                  if (uVar23 != 0) {
                    for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                    }
                  }
                  local_294._8_4_ = (undefined4)lVar24;
                  iVar13 = local_294._8_4_ + -1 + uVar11;
                  if (local_1b0 < iVar13) {
                    iVar13 = local_1b0;
                  }
                  uStack_38c._4_4_ = (int)((ulonglong)uStack_38c >> 0x20);
                  uStack_38c = CONCAT44(uStack_38c._4_4_,iVar13);
                }
LAB_14e1be063:
                local_390 = 0xffffffff;
                local_320 = (longlong *)local_1d8;
                local_318._padding_ = CONCAT44(uStack_39c,local_3a0);
                local_318.UnvisitedBitMask = 0xffffffff;
                local_318.CurrentBitIndex = (int)uStack_38c;
                local_318.BaseBitIndex = uStack_38c._4_4_;
                local_318._28_4_ = uStack_384;
                local_318.Array = pTStack_398;
                if ((int)uStack_38c < local_1b0) {
                  do {
                    iVar13 = local_318.CurrentBitIndex;
                    puVar32 = (undefined8 *)
                              ((longlong)local_318.CurrentBitIndex * 0x10 + *local_320);
                    uVar4 = *puVar32;
                    uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
                    uVar11 = local_190 - 1 & uVar11 + (int)((ulonglong)uVar4 >> 0x20);
                    *(uint *)((longlong)puVar32 + 0xc) = uVar11;
                    FVar29.Data = local_1a0;
                    if (local_198.Data != (FScriptContainerElement *)0x0) {
                      FVar29.Data = local_198.Data;
                    }
                    lVar24 = (longlong)(int)(local_190 - 1 & uVar11);
                    *(undefined4 *)(puVar32 + 1) = *(undefined4 *)(FVar29.Data + lVar24 * 4);
                    *(int *)(FVar29.Data + lVar24 * 4) = iVar13;
                    local_318.UnvisitedBitMask =
                         local_318.UnvisitedBitMask & ~local_318._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
                  } while (local_318.CurrentBitIndex < (local_318.Array)->NumBits);
                }
              }
            }
LAB_14e1be16d:
            iVar13 = local_1a8;
          }
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                    (&local_98,
                     (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1d8);
          AlgoImpl::
          IntroSortInternal<UActorComponent_*,int,FIdentityFunctor,TDereferenceWrapper<UActorComponent_*,_UOptimusDeformerInstanceSettings::GetComponentBindings_::__l27::<lambda_1>_>_>
                    ((UActorComponent **)local_408.Data,(int)local_400,FVar8,(<lambda_1> *)&local_98
                    );
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98.Elements);
          local_190 = 0;
          if (local_198.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_1d8,0);
          if (local_1b8 != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_1b8);
          }
          if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_1d8._0_8_);
          }
          if ((int)local_400 != 0) {
            if ((int)local_400 < 1) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            local_410 = *(UMeshComponent **)local_408.Data;
          }
          if (local_408.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.Data);
          }
          local_140 = 0;
          if (local_148 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_148);
          }
          TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_188);
          pTVar36 = local_3c8;
          pFVar30 = local_3e8;
          if (local_410 != (UMeshComponent *)0x0) goto LAB_14e1be418;
        }
        pAVar22 = local_3e0;
        local_3f8.Data = (FScriptContainerElement *)0x0;
        local_3f0 = 0;
        pUVar15 = UOptimusComponentSourceBinding::GetComponentSource(this_03);
        pTVar18 = (TObjectPtr<UClass>_u_0 *)
                  (**(code **)(*(longlong *)pUVar15 + 0x2c0))(pUVar15,local_240);
        lVar24 = local_3f0;
        uVar11 = local_3f0._4_4_;
        local_3f0 = (ulonglong)local_3f0._4_4_ << 0x20;
        if ((lVar24 < 0) && (uVar11 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_3f8,0,(int *)((longlong)&local_3f0 + 4));
        }
        TVar5 = (TObjectPtr<UClass>_u_0)pTVar18->DebugPtr;
        local_2e0 = TVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar5.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
        pUVar19 = TSubclassOf<UActorComponent>::operator*
                            ((TSubclassOf<UActorComponent> *)&local_2e0.ObjectPtr);
        pUVar20 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar19 == pUVar20) {
          local_2d8 = TVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar5.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
          }
          AActor::
          ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
                    (pAVar22,(TSubclassOf<UActorComponent>)&local_2d8,
                     (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_3f8);
        }
        else {
          local_2d0 = TVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar5.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
          }
          AActor::
          ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
                    (pAVar22,(TSubclassOf<UActorComponent>)&local_2d0,
                     (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_3f8);
        }
        if ((int)local_3f0 != 0) {
          if ((int)local_3f0 < 1) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          local_410 = *(UMeshComponent **)local_3f8.Data;
        }
        pFVar30 = local_3e8;
        if (local_3f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.Data);
          pFVar30 = local_3e8;
        }
      }
    }
    else {
      local_410 = local_2f0;
    }
LAB_14e1be418:
    pFVar6 = (pTVar36->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_410) &&
       ((FScriptContainerElement *)&local_410 < pFVar6 + (longlong)pTVar36->ArrayMax * 8)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar13 = pTVar36->ArrayNum;
    if (iVar13 == pTVar36->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar36->AllocatorInstance,&pTVar36->ArrayMax);
    }
    pTVar36->ArrayNum = iVar13 + 1;
    *(UMeshComponent **)((pTVar36->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_410;
    TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
    Emplace<UActorComponent_*_const_&>
              (&local_e8,(UActorComponent **)(local_294 + 0xc),(bool *)&local_410);
    uVar23 = (ulonglong)local_3d8;
    pFVar30 = pFVar30 + 8;
    pUVar28 = local_2c8;
  } while( true );
}

// GetPrivateStaticClass @ 14e1d5b30

UClass * __cdecl UOptimusDeformerInstanceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerInstanceSettings",
               &Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerInstanceSettings,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDeformerInstanceSettings>,
               InternalVTableHelperCtorCaller<UOptimusDeformerInstanceSettings>,local_res8,
               UMeshDeformerInstanceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.InnerSingleton;
}

// InitializeSettings @ 14e1ed570

void __thiscall
UOptimusDeformerInstanceSettings::InitializeSettings
          (UOptimusDeformerInstanceSettings *this,UOptimusDeformer *param_1,UMeshComponent *param_2)

{
  TArray<FOptimusDeformerInstanceComponentBinding,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UOptimusComponentSourceBindingContainer *pUVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  FScriptContainerElement *_Dst;
  ulonglong uVar11;
  FName FVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FName local_res10;
  UMeshComponent *local_res18;
  undefined8 local_res20;
  UOptimusDeformer *local_78;
  FName local_70;
  FName local_68;
  FString local_60 [2];
  
  local_res18 = param_2;
  local_78 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UOptimusDeformer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Deformer).WeakPtr,(FObjectPtr)&local_78);
  pTVar1 = &this->Bindings;
  iVar8 = (this->Bindings).ArrayNum;
  piVar2 = &(this->Bindings).ArrayNum;
  uVar9 = (((param_1->Bindings).field0_0x0.DebugPtr)->Bindings).ArrayNum;
  if (iVar8 < (int)uVar9) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,uVar9 - iVar8,&pTVar1->AllocatorInstance,piVar2,
                       &(this->Bindings).ArrayMax);
    DefaultConstructItems<FOptimusDeformerInstanceComponentBinding,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10,uVar9 - iVar8);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar8) {
      uVar13 = iVar8 - uVar9;
      if (((int)(uVar13 | uVar9) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar13 != 0) {
        _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
        iVar8 = (*piVar2 - uVar9) - uVar13;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar13 * 0x10,(longlong)iVar8 << 4);
        }
        *piVar2 = *piVar2 - uVar13;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,&pTVar1->AllocatorInstance,*piVar2,&(this->Bindings).ArrayMax);
      }
    }
  }
  uVar11 = 0;
  uVar14 = uVar11;
  uVar15 = uVar11;
  if (0 < (this->Bindings).ArrayNum) {
    do {
      pUVar3 = (param_1->Bindings).field0_0x0.DebugPtr;
      uVar13 = (uint)uVar11;
      uVar9 = 0;
      if ((int)uVar13 < (pUVar3->Bindings).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = 0;
      if ((int)uVar13 < *piVar2) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      uVar4 = *(undefined8 *)
               (*(longlong *)((pUVar3->Bindings).AllocatorInstance.Data + uVar14) + 0x28);
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)((pTVar1->AllocatorInstance).Data + uVar15) = uVar4;
      if (uVar13 == 0) {
        if (local_res18 == (UMeshComponent *)0x0) {
          local_res20 = 0;
          FVar12.ComparisonIndex.Value = 0;
          FVar12.Number = 0;
        }
        else {
          local_res10 = (FName)local_res18->_padding_;
          ::FName::ToString(&local_res10,local_60);
          bVar6 = ::FString::RemoveFromEnd(local_60,L"_GEN_VARIABLE",0xd,IgnoreCase);
          FVar12 = local_res10;
          if (bVar6) {
            iVar8 = (int)local_60[0].Data._8_8_ + -1;
            if ((int)local_60[0].Data._8_8_ == 0) {
              iVar8 = 0;
            }
            pFVar10 = ::FName::FName(&local_68,iVar8,
                                     (wchar_t *)local_60[0].Data.AllocatorInstance.Data,FNAME_Add);
            FVar12 = *pFVar10;
          }
          local_70 = FVar12;
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
        }
        if ((*piVar2 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FName *)((pTVar1->AllocatorInstance).Data + uVar15 + 8) = FVar12;
      }
      uVar11 = (ulonglong)(uVar13 + 1);
      uVar14 = uVar14 + 8;
      uVar15 = uVar15 + 0x10;
    } while ((int)(uVar13 + 1) < (this->Bindings).ArrayNum);
  }
  return;
}

// StaticRegisterNativesUOptimusDeformerInstanceSettings @ 14e2259a0

void __cdecl
UOptimusDeformerInstanceSettings::StaticRegisterNativesUOptimusDeformerInstanceSettings(void)

{
  return;
}

