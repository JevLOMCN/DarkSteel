// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 60

// StaticClass @ 14dc27c40

UClass * __cdecl UChaosClothAssetInteractor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetInteractor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetInteractor",
               &Z_Registration_Info_UClass_UChaosClothAssetInteractor.InnerSingleton,
               StaticRegisterNativesUChaosClothAssetInteractor,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UChaosClothAssetInteractor>,
               InternalVTableHelperCtorCaller<UChaosClothAssetInteractor>,local_res8,
               UClothingInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetInteractor.InnerSingleton;
}

// UChaosClothAssetInteractor @ 14dc35280

UChaosClothAssetInteractor * __thiscall
UChaosClothAssetInteractor::UChaosClothAssetInteractor
          (UChaosClothAssetInteractor *this,FVTableHelper *param_1)

{
  UClothingInteractor::UClothingInteractor((UClothingInteractor *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosClothAssetInteractor__6B_;
  (this->CollectionPropertyFacades).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectionPropertyFacades).ArrayNum = 0;
  (this->CollectionPropertyFacades).ArrayMax = 0;
  return this;
}

// UChaosClothAssetInteractor @ 14dc352c0

UChaosClothAssetInteractor * __thiscall
UChaosClothAssetInteractor::UChaosClothAssetInteractor
          (UChaosClothAssetInteractor *this,FObjectInitializer *param_1)

{
  UClothingInteractor::UClothingInteractor((UClothingInteractor *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosClothAssetInteractor__6B_;
  (this->CollectionPropertyFacades).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectionPropertyFacades).ArrayNum = 0;
  (this->CollectionPropertyFacades).ArrayMax = 0;
  return this;
}

// ~UChaosClothAssetInteractor @ 14dc364f0

void __thiscall
UChaosClothAssetInteractor::~UChaosClothAssetInteractor(UChaosClothAssetInteractor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UChaosClothAssetInteractor__6B_;
  DestructItems<TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>
            ((TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1> *)
             (this->CollectionPropertyFacades).AllocatorInstance.Data,
             (this->CollectionPropertyFacades).ArrayNum);
  pFVar1 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UClothingInteractor::~UClothingInteractor((UClothingInteractor *)this);
  return;
}

// operator() @ 14dc37260

TVector<double> * __thiscall
`UChaosClothAssetInteractor::GetVectorPropertyValue'::__l8::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  longlong *plVar1;
  FCollectionPropertyConstFacade *this_00;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  TVector<float>_u_0 local_18;
  
  plVar1 = *(longlong **)this;
  if (*plVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  this_00 = (FCollectionPropertyConstFacade *)*plVar1;
  Chaos::Softs::FCollectionPropertyConstFacade::
  GetValue<UE::Math::TVector<float>,UE::Math::TVector<float>_>
            (this_00,(TVector<float> *)&local_18._s_0,param_1,&this_00->LowValueArray);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_18._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_18._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_18._s_0.Z;
  return __return_storage_ptr__;
}

// operator() @ 14dc37300

TVector2<double> * __thiscall
`UChaosClothAssetInteractor::GetWeightedFloatPropertyValue'::__l8::<lambda_1>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__,int param_1)

{
  longlong *plVar1;
  FCollectionPropertyConstFacade *this_00;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  float fVar5;
  float fVar6;
  
  plVar1 = *(longlong **)this;
  if (*plVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  this_00 = (FCollectionPropertyConstFacade *)*plVar1;
  fVar5 = Chaos::Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                    (this_00,param_1,&this_00->HighValueArray);
  fVar6 = Chaos::Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                    (this_00,param_1,&this_00->LowValueArray);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar6;
  return __return_storage_ptr__;
}

// operator() @ 14dc373a0

void __thiscall
`UChaosClothAssetInteractor::SetVectorPropertyValue'::__l10::<lambda_1>::operator()
          (void *this,FName *param_1)

{
  longlong *plVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TVector<float>_u_0 local_18;
  
  plVar1 = *(longlong **)this;
  if (*plVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pdVar2 = *(double **)((longlong)this + 8);
  local_18._s_0.Z = (float)pdVar2[2];
  local_18._s_0.Y = (float)pdVar2[1];
  local_18._s_0.X = (float)*pdVar2;
  Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)*plVar1,param_1,(TVector<float> *)&local_18._s_0);
  return;
}

// operator() @ 14dc37440

void __thiscall
`UChaosClothAssetInteractor::SetWeightedFloatPropertyValue'::__l10::<lambda_1>::operator()
          (void *this,FName *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<float>_u_0 local_res8;
  
  plVar1 = *(longlong **)this;
  if (*plVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8._s_0.Y = (float)(*(double **)((longlong)this + 8))[1];
  local_res8._s_0.X = (float)**(double **)((longlong)this + 8);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            ((FCollectionPropertyFacade *)*plVar1,param_1,(TVector2<float> *)&local_res8._s_0);
  return;
}

// operator() @ 14dc37600

void __thiscall
`UChaosClothAssetInteractor::SetVectorPropertyValue'::__l17::<lambda_2>::operator()
          (void *this,FName *param_1)

{
  longlong *plVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TVector<float>_u_0 local_18;
  
  plVar1 = *(longlong **)this;
  if (*plVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pdVar2 = *(double **)((longlong)this + 8);
  local_18._s_0.Z = (float)pdVar2[2];
  local_18._s_0.Y = (float)pdVar2[1];
  local_18._s_0.X = (float)*pdVar2;
  Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)*plVar1,param_1,(TVector<float> *)&local_18._s_0);
  return;
}

// operator() @ 14dc376a0

void __thiscall
`UChaosClothAssetInteractor::SetWeightedFloatPropertyValue'::__l17::<lambda_2>::operator()
          (void *this,FName *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<float>_u_0 local_res8;
  
  plVar1 = *(longlong **)this;
  if (*plVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8._s_0.Y = (float)(*(double **)((longlong)this + 8))[1];
  local_res8._s_0.X = (float)**(double **)((longlong)this + 8);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            ((FCollectionPropertyFacade *)*plVar1,param_1,(TVector2<float> *)&local_res8._s_0);
  return;
}

// GetAllProperties @ 14dc49670

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetInteractor::GetAllProperties
          (UChaosClothAssetInteractor *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType this_00;
  undefined1 local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  GetAllPropertyNames(this,&local_48,param_1);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  iVar5 = local_48.ArrayNum;
  if (-1 < iVar5) {
    if (0 < iVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar5 = local_48.ArrayNum;
    pFVar2 = (FName *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 8);
    this_00.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if (local_48.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if ((FName *)this_00.Data == pFVar2) break;
      pFVar4 = ::FName::ToString((FName *)this_00.Data,&local_38);
      iVar3 = __return_storage_ptr__->ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar3 + 1;
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
      *(undefined8 *)pFVar6 = 0;
      *(FScriptContainerElement **)pFVar6 = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6 + 8) = (pFVar4->Data).ArrayNum;
      *(int *)(pFVar6 + 0xc) = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      this_00.Data = this_00.Data + 8;
    }
    if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(local_48._8_8_ & 0xffffffff);
}

// GetAllPropertyNames @ 14dc497c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAssetInteractor::GetAllPropertyNames
          (UChaosClothAssetInteractor *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  uint uVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  FName *pFVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  FCollectionPropertyConstFacade *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint *puVar23;
  ForElementType<unsigned_int> FVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  TReferenceControllerBase<1> *pTVar29;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [8];
  ulonglong local_1b0;
  int local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  int local_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  undefined4 local_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  longlong local_138;
  undefined4 local_130;
  int local_12c;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> *local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined4 local_a4;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  uVar28 = 1;
  uVar26 = 1;
  uVar9 = 1;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1b0 = 1;
  local_118 = __return_storage_ptr__;
  if (param_1 == -1) {
    uVar26 = 0;
    if (0 < (this->CollectionPropertyFacades).ArrayNum) {
      local_138 = 0;
      do {
        lVar13 = local_138;
        iVar20 = (this->CollectionPropertyFacades).ArrayNum;
        uVar9 = 0;
        if ((int)uVar26 < iVar20) {
          uVar9 = ~uVar26 >> 0x1f;
        }
        if (uVar9 == 0) {
          local_1c8 = (longlong)(int)uVar26;
          local_1c0 = (longlong)iVar20;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar10;
          }
        }
        pFVar16 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
        pFVar15 = (FCollectionPropertyConstFacade *)0x0;
        pTVar29 = *(TReferenceControllerBase<1> **)(pFVar16 + lVar13 + 8);
        if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
          aVar8 = pTVar29->SharedReferenceCount;
          do {
            if (aVar8 == (atomic<int>)0x0) {
              pTVar29 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14dc498e5;
            }
            LOCK();
            aVar7 = pTVar29->SharedReferenceCount;
            bVar6 = aVar8 == aVar7;
            if (bVar6) {
              pTVar29->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
              aVar7 = aVar8;
            }
            UNLOCK();
            aVar8 = aVar7;
          } while (!bVar6);
          pFVar15 = *(FCollectionPropertyConstFacade **)(pFVar16 + lVar13);
        }
        if (pFVar15 != (FCollectionPropertyConstFacade *)0x0) {
          if (local_98._8_4_ == local_64) {
            uVar9 = ((UE::Chaos::ClothAsset::Private::Aliases._8_4_ -
                     UE::Chaos::ClothAsset::Private::Aliases._52_4_) -
                    *(int *)&(pFVar15->KeyNameIndices).field_0x34) +
                    *(int *)&(pFVar15->KeyNameIndices).field_0x8;
            if ((uint)(local_98._8_4_ - local_64) < uVar9) {
              if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
              }
              TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,uVar9);
              uVar27 = (uint)uVar28;
              if (uVar9 < 4) {
                uVar22 = uVar28 & 0xffffffff;
              }
              else {
                uVar22 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
                lVar17 = 0x3f;
                if (uVar22 != 0) {
                  for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                local_130 = (undefined4)lVar17;
                uVar22 = (ulonglong)(uVar27 << ((byte)lVar17 & 0x1f));
              }
              uVar9 = (uint)uVar22;
              if ((local_50 == 0) || ((int)local_50 < (int)uVar9)) {
                local_50 = uVar9;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_58,0,0,4);
                }
                if (uVar9 != 0) {
                  uVar21 = uVar22;
                  if (uVar9 < 2) {
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      uVar21 = 0;
                      goto LAB_14dc499d1;
                    }
                  }
                  else {
LAB_14dc499d1:
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_58,0,(int)uVar21,4);
                  }
                  if (0 < (int)uVar9) {
                    uVar21 = 0;
                    do {
                      FVar14.Data = local_60;
                      if (local_58.Data != (FScriptContainerElement *)0x0) {
                        FVar14.Data = local_58.Data;
                      }
                      uVar11 = (longlong)(int)uVar9 - 1U & uVar21;
                      uVar21 = uVar21 + 1;
                      *(undefined4 *)(FVar14.Data + uVar11 * 4) = 0xffffffff;
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                }
                if (local_50 != 0) {
                  pTStack_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                  local_1a8 = 0;
                  iStack_194 = 0;
                  iStack_190 = 0;
                  uStack_1a4 = uVar27;
                  if (local_70 != 0) {
                    FVar24 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                    if (local_78 != (ForElementType<unsigned_int>)0x0) {
                      FVar24 = local_78;
                    }
                    uVar9 = *(uint *)FVar24;
                    local_1a8 = 0;
                    while (uVar9 == 0) {
                      iStack_190 = iStack_190 + 0x20;
                      lVar17 = (longlong)local_1a8;
                      local_1a8 = local_1a8 + 1;
                      if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1a8)
                      goto LAB_14dc49af2;
                      uVar9 = ((uint *)((longlong)FVar24 + 4))[lVar17];
                    }
                    uStack_1a4 = -uVar9 & uVar9;
                    uVar28 = (ulonglong)uStack_1a4 * 2 + 1;
                    lVar17 = 0x3f;
                    if (uVar28 != 0) {
                      for (; uVar28 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                      }
                    }
                    local_12c = (int)lVar17;
                    iStack_194 = iStack_190 + -1 + local_12c;
                    if (local_70 < iStack_194) {
LAB_14dc49af2:
                      iStack_194 = local_70;
                    }
                  }
                  local_198 = 0xffffffff;
                  local_110 = (longlong *)local_98;
                  local_108._padding_ = CONCAT44(uStack_1a4,local_1a8);
                  local_108.CurrentBitIndex = iStack_194;
                  local_108.UnvisitedBitMask = 0xffffffff;
                  local_108._28_4_ = uStack_18c;
                  local_108.BaseBitIndex = iStack_190;
                  uVar28 = local_1b0;
                  iVar20 = iStack_194;
                  local_108.Array = pTStack_1a0;
                  if (iStack_194 < local_70) {
                    do {
                      puVar18 = (undefined8 *)((longlong)iVar20 * 0x10 + *local_110);
                      uVar2 = *puVar18;
                      uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
                      uVar9 = local_50 - 1 & uVar9 + (int)((ulonglong)uVar2 >> 0x20);
                      *(uint *)((longlong)puVar18 + 0xc) = uVar9;
                      FVar14.Data = local_60;
                      if (local_58.Data != (FScriptContainerElement *)0x0) {
                        FVar14.Data = local_58.Data;
                      }
                      uVar28 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar9;
                      *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(FVar14.Data + uVar28 * 4);
                      *(int *)(FVar14.Data + uVar28 * 4) = iVar20;
                      local_108.UnvisitedBitMask =
                           local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
                      lVar13 = local_138;
                      uVar28 = local_1b0;
                      iVar20 = local_108.CurrentBitIndex;
                    } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
                  }
                }
              }
            }
            for (iVar20 = 0;
                iVar20 < *(int *)&(pFVar15->KeyNameIndices).field_0x8 -
                         *(int *)&(pFVar15->KeyNameIndices).field_0x34; iVar20 = iVar20 + 1) {
              pFVar12 = Chaos::Softs::FCollectionPropertyConstFacade::GetValue<FName_const_&,FName>
                                  (pFVar15,iVar20,&pFVar15->KeyNameArray);
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                         (FName *)local_128,(bool *)pFVar12);
            }
          }
          else {
            for (iVar20 = 0;
                iVar20 < *(int *)&(pFVar15->KeyNameIndices).field_0x8 -
                         *(int *)&(pFVar15->KeyNameIndices).field_0x34; iVar20 = iVar20 + 1) {
              pFVar12 = Chaos::Softs::FCollectionPropertyConstFacade::GetValue<FName_const_&,FName>
                                  (pFVar15,iVar20,&pFVar15->KeyNameArray);
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                         (FName *)(local_128 + 4),(bool *)pFVar12);
            }
          }
        }
LAB_14dc498e5:
        uVar9 = (uint)uVar28;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29)
        ;
        local_138 = lVar13 + 0x10;
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < (this->CollectionPropertyFacades).ArrayNum);
    }
  }
  else if ((-1 < param_1) && (param_1 < (this->CollectionPropertyFacades).ArrayNum)) {
    iVar20 = (this->CollectionPropertyFacades).ArrayNum;
    uVar9 = 0;
    if (param_1 < iVar20) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (local_1c8 = (longlong)param_1, local_1c0 = (longlong)iVar20,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
    pFVar16 = (this->CollectionPropertyFacades).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    pTVar29 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
    uVar9 = uVar26;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      aVar8 = pTVar29->SharedReferenceCount;
      if (aVar8 != (atomic<int>)0x0) {
LAB_14dc49ca0:
        LOCK();
        aVar7 = pTVar29->SharedReferenceCount;
        bVar6 = aVar8 == aVar7;
        if (bVar6) {
          pTVar29->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
          aVar7 = aVar8;
        }
        aVar8 = aVar7;
        UNLOCK();
        if (!bVar6) goto code_r0x00014dc49caf;
        pFVar15 = *(FCollectionPropertyConstFacade **)pFVar16;
        if (pFVar15 == (FCollectionPropertyConstFacade *)0x0) goto LAB_14dc49cb6;
        uVar9 = *(int *)&(pFVar15->KeyNameIndices).field_0x8 -
                *(int *)&(pFVar15->KeyNameIndices).field_0x34;
        if (uVar9 <= (uint)(local_98._8_4_ - local_64)) goto LAB_14dc4a0c5;
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,uVar9);
        if (uVar9 < 4) {
          uVar22 = 1;
        }
        else {
          uVar22 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar22 = (ulonglong)(uint)(1 << ((byte)lVar13 & 0x1f));
        }
        uVar9 = (uint)uVar22;
        if ((local_50 == 0) || ((int)local_50 < (int)uVar9)) {
          local_50 = uVar9;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
          }
          if (uVar9 != 0) {
            uVar26 = uVar9;
            if (uVar9 < 2) {
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                uVar26 = 0;
                goto LAB_14dc49ef9;
              }
            }
            else {
LAB_14dc49ef9:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_58,0,uVar26,4);
            }
            if (0 < (int)uVar9) {
              uVar21 = 0;
              do {
                FVar14.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar14.Data = local_58.Data;
                }
                uVar11 = (longlong)(int)uVar9 - 1U & uVar21;
                uVar21 = uVar21 + 1;
                *(undefined4 *)(FVar14.Data + uVar11 * 4) = 0xffffffff;
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
          }
          if (local_50 != 0) {
            pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
            uStack_184 = 1;
            local_188 = 0;
            iStack_174 = 0;
            iStack_170 = 0;
            if (local_70 != 0) {
              FVar24 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FVar24 = local_78;
              }
              uVar9 = *(uint *)FVar24;
              local_188 = 0;
              iStack_170 = 0;
              while (uVar9 == 0) {
                iStack_170 = iStack_170 + 0x20;
                lVar13 = (longlong)local_188;
                local_188 = local_188 + 1;
                if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_188)
                goto LAB_14dc4a00e;
                uVar9 = ((uint *)((longlong)FVar24 + 4))[lVar13];
              }
              uStack_184 = -uVar9 & uVar9;
              uVar28 = (ulonglong)uStack_184 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iStack_174 = (int)lVar13 + -1 + iStack_170;
              if (iStack_174 <= local_70) goto LAB_14dc4a016;
LAB_14dc4a00e:
              iStack_174 = local_70;
            }
LAB_14dc4a016:
            local_178 = 0xffffffff;
            local_168 = (TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                         *)local_98;
            TStack_160._padding_ = CONCAT44(uStack_184,local_188);
            TStack_160.CurrentBitIndex = iStack_174;
            TStack_160.UnvisitedBitMask = 0xffffffff;
            TStack_160._28_4_ = uStack_16c;
            TStack_160.BaseBitIndex = iStack_170;
            uVar28 = local_1b0;
            iVar20 = iStack_174;
            TStack_160.Array = pTStack_180;
            if (iStack_174 < local_70) {
              do {
                puVar18 = (undefined8 *)((longlong)iVar20 * 0x10 + *(longlong *)local_168);
                uVar2 = *puVar18;
                uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
                uVar9 = local_50 - 1 & uVar9 + (int)((ulonglong)uVar2 >> 0x20);
                *(uint *)((longlong)puVar18 + 0xc) = uVar9;
                FVar14.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar14.Data = local_58.Data;
                }
                uVar28 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar9;
                *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(FVar14.Data + uVar28 * 4);
                *(int *)(FVar14.Data + uVar28 * 4) = iVar20;
                TStack_160.UnvisitedBitMask =
                     TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
                uVar28 = local_1b0;
                iVar20 = TStack_160.CurrentBitIndex;
              } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
            }
          }
        }
LAB_14dc4a0c5:
        uVar9 = (uint)uVar28;
        for (iVar20 = 0;
            iVar20 < *(int *)&(pFVar15->KeyNameIndices).field_0x8 -
                     *(int *)&(pFVar15->KeyNameIndices).field_0x34; iVar20 = iVar20 + 1) {
          pFVar12 = Chaos::Softs::FCollectionPropertyConstFacade::GetValue<FName_const_&,FName>
                              (pFVar15,iVar20,&pFVar15->KeyNameArray);
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                     (FName *)local_120,(bool *)pFVar12);
        }
        goto LAB_14dc49cb6;
      }
LAB_14dc49cb3:
      pTVar29 = (TReferenceControllerBase<1> *)0x0;
    }
LAB_14dc49cb6:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  iVar20 = 0;
  uVar28 = 0;
  TStack_160.BaseBitIndex = 0;
  iVar25 = UE::Chaos::ClothAsset::Private::Aliases._40_4_;
  if (iVar25 != 0) {
    puVar23 = (uint *)&UE::Chaos::ClothAsset::Private::Aliases.field_0x10;
    if (UE::Chaos::ClothAsset::Private::Aliases._32_8_ != 0) {
      puVar23 = (uint *)UE::Chaos::ClothAsset::Private::Aliases._32_8_;
    }
    uVar26 = *puVar23;
    while (uVar26 == 0) {
      lVar13 = (longlong)iVar20;
      TStack_160.BaseBitIndex = TStack_160.BaseBitIndex + 0x20;
      iVar20 = iVar20 + 1;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) {
        uVar28 = UE::Chaos::ClothAsset::Private::Aliases._40_8_ & 0xffffffff;
        goto LAB_14dc49d3d;
      }
      uVar26 = puVar23[lVar13 + 1];
    }
    uVar9 = -uVar26 & uVar26;
    uVar28 = (ulonglong)uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar26 = (int)lVar13 + -1 + TStack_160.BaseBitIndex;
    uVar28 = (ulonglong)uVar26;
    if (iVar25 < (int)uVar26) {
      uVar28 = UE::Chaos::ClothAsset::Private::Aliases._40_8_ & 0xffffffff;
    }
  }
LAB_14dc49d3d:
  local_168 = &UE::Chaos::ClothAsset::Private::Aliases;
  TStack_160._padding_ = CONCAT44(uVar9,iVar20);
  TStack_160.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&UE::Chaos::ClothAsset::Private::Aliases.field_0x10;
  TStack_e0.CurrentBitIndex = (int)uVar28;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  uVar9 = TStack_160.UnvisitedBitMask;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160._28_4_ = local_a4;
  local_e8 = &UE::Chaos::ClothAsset::Private::Aliases;
  TStack_e0._padding_ = TStack_160._padding_;
  TStack_e0.BaseBitIndex = TStack_160.BaseBitIndex;
  TStack_e0._28_4_ = local_a4;
  TStack_e0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&UE::Chaos::ClothAsset::Private::Aliases.field_0x10;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_160.CurrentBitIndex = TStack_e0.CurrentBitIndex;
  if (TStack_e0.CurrentBitIndex < iVar25) {
    do {
      pTVar5 = local_e8;
      lVar17 = (longlong)(int)uVar28 * 0x20;
      lVar13 = *(longlong *)local_e8;
      plVar19 = *(longlong **)(lVar13 + 8 + lVar17);
      iVar20 = *(int *)(lVar13 + 0x10 + lVar17);
      plVar1 = plVar19 + iVar20;
      while( true ) {
        if (*(int *)(lVar13 + 0x10 + lVar17) != iVar20) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b8);
        }
        if (plVar19 == plVar1) break;
        lVar3 = *plVar19;
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
        if (local_98._8_4_ == local_64) {
LAB_14dc4a125:
          plVar19 = plVar19 + 1;
        }
        else {
          FVar14.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_58.Data;
          }
          iVar25 = *(int *)(FVar14.Data +
                           (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar3 >> 0x20) + uVar9) * 4);
          if (iVar25 == -1) goto LAB_14dc4a125;
          do {
            if (*(longlong *)(local_98._0_8_ + (longlong)iVar25 * 0x10) == lVar3) {
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                         (FName *)(local_120 + 4),(bool *)(*(longlong *)pTVar5 + lVar17));
              goto LAB_14dc4a125;
            }
            iVar25 = *(int *)(local_98._0_8_ + (longlong)iVar25 * 0x10 + 8);
          } while (iVar25 != -1);
          plVar19 = plVar19 + 1;
        }
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      uVar28 = (ulonglong)(uint)TStack_e0.CurrentBitIndex;
      uVar9 = TStack_160.UnvisitedBitMask;
    } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
  }
  TStack_160.UnvisitedBitMask = uVar9;
  pTVar10 = local_118;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,local_118);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return pTVar10;
code_r0x00014dc49caf:
  if (aVar8 == (atomic<int>)0x0) goto LAB_14dc49cb3;
  goto LAB_14dc49ca0;
}

// GetFloatPropertyValue @ 14dc4c320

float __thiscall
UChaosClothAssetInteractor::GetFloatPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  float fVar7;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_res8;
  float local_res20 [2];
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_38;
  code *local_28;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_20;
  
  if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar5 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    local_res20[0] = param_3;
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    pFVar1 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
    local_38.Object = (FCollectionPropertyFacade *)0x0;
    local_38.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_2 * 0x10 + 8);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc4c3fa;
        }
        LOCK();
        aVar6 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_38.Object = *(FCollectionPropertyFacade **)(pFVar1 + (longlong)param_2 * 0x10);
      }
    }
LAB_14dc4c3fa:
    if (local_38.Object != (FCollectionPropertyFacade *)0x0) {
      local_res8 = &local_38;
      local_20 = &local_res8;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::GetFloatPropertyValue'::__l8::<lambda_1>,float,int>
                 ::Call;
      param_3 = UE::Chaos::ClothAsset::Private::GetValueWithAlias<float>
                          (&local_38,param_1,local_res20,
                           (TFunctionRef<float___cdecl(int)> *)&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return param_3;
}

// GetHighFloatPropertyValue @ 14dc4c4e0

float __thiscall
UChaosClothAssetInteractor::GetHighFloatPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  float fVar7;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_res8;
  float local_res20 [2];
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_38;
  code *local_28;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_20;
  
  if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar5 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    local_res20[0] = param_3;
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    pFVar1 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
    local_38.Object = (FCollectionPropertyFacade *)0x0;
    local_38.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_2 * 0x10 + 8);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc4c5ba;
        }
        LOCK();
        aVar6 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_38.Object = *(FCollectionPropertyFacade **)(pFVar1 + (longlong)param_2 * 0x10);
      }
    }
LAB_14dc4c5ba:
    if (local_38.Object != (FCollectionPropertyFacade *)0x0) {
      local_res8 = &local_38;
      local_20 = &local_res8;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::GetHighFloatPropertyValue'::__l8::<lambda_1>,float,int>
                 ::Call;
      param_3 = UE::Chaos::ClothAsset::Private::GetValueWithAlias<float>
                          (&local_38,param_1,local_res20,
                           (TFunctionRef<float___cdecl(int)> *)&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return param_3;
}

// GetIntPropertyValue @ 14dc4c710

int __thiscall
UChaosClothAssetInteractor::GetIntPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,int param_3)

{
  FName FVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  int iVar5;
  atomic<int> aVar6;
  uint uVar7;
  int *piVar8;
  FName *pFVar9;
  longlong lVar10;
  FName FVar11;
  FName *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res18 [8];
  FCollectionPropertyConstFacade *local_28;
  TReferenceControllerBase<1> *local_20;
  
  if (param_2 < 0) {
    return param_3;
  }
  if ((this->CollectionPropertyFacades).ArrayNum <= param_2) {
    return param_3;
  }
  uVar7 = 0;
  if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar13 = (this->CollectionPropertyFacades).AllocatorInstance.Data + (longlong)param_2 * 0x10;
  local_28 = (FCollectionPropertyConstFacade *)0x0;
  local_20 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = local_20->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14dc4c7e4;
      }
      LOCK();
      aVar6 = local_20->SharedReferenceCount;
      bVar4 = aVar3 == aVar6;
      if (bVar4) {
        local_20->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar4);
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      local_28 = *(FCollectionPropertyConstFacade **)pFVar13;
    }
  }
LAB_14dc4c7e4:
  if (local_28 != (FCollectionPropertyConstFacade *)0x0) {
    piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&local_28->KeyNameIndices,param_1);
    if ((piVar8 == (int *)0x0) || (iVar5 = *piVar8, iVar5 == -1)) {
      uVar7 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      if (UE::Chaos::ClothAsset::Private::Aliases._8_4_ !=
          UE::Chaos::ClothAsset::Private::Aliases._52_4_) {
        lVar10 = 0x155377fe8;
        if (UE::Chaos::ClothAsset::Private::Aliases._64_8_ != 0) {
          lVar10 = UE::Chaos::ClothAsset::Private::Aliases._64_8_;
        }
        uVar7 = *(uint *)(lVar10 + (ulonglong)
                                   (UE::Chaos::ClothAsset::Private::Aliases._72_4_ - 1 &
                                   param_1.Number + uVar7) * 4);
        while (uVar7 != 0xffffffff) {
          pFVar9 = (FName *)((longlong)(int)uVar7 * 0x20 +
                            UE::Chaos::ClothAsset::Private::Aliases._0_8_);
          if (*pFVar9 == param_1) {
            pFVar12 = pFVar9 + 1;
            if (pFVar9 == (FName *)0x0) {
              pFVar12 = (FName *)0x0;
            }
            if (pFVar12 != (FName *)0x0) {
              FVar11 = *pFVar12;
              uVar7 = pFVar12[1].ComparisonIndex.Value;
              FVar1 = (FName)((longlong)FVar11 + (longlong)(int)uVar7 * 8);
              goto LAB_14dc4c8f5;
            }
            break;
          }
          uVar7 = pFVar9[3].ComparisonIndex.Value;
        }
      }
    }
    else {
      if ((local_28 == (FCollectionPropertyConstFacade *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      param_3 = Chaos::Softs::FCollectionPropertyConstFacade::
                GetValue<int,UE::Math::TVector<float>_>(local_28,iVar5,&local_28->LowValueArray);
    }
  }
LAB_14dc4c9b3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return param_3;
LAB_14dc4c8f5:
  if (pFVar12[1].ComparisonIndex.Value != uVar7) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res18);
  }
  if (FVar11 == FVar1) goto LAB_14dc4c9b3;
  if ((local_28 == (FCollectionPropertyConstFacade *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&local_28->KeyNameIndices,*(FName *)FVar11);
  if ((piVar8 != (int *)0x0) && (iVar5 = *piVar8, iVar5 != -1)) goto LAB_14dc4c963;
  FVar11 = (FName)((longlong)FVar11 + 8);
  goto LAB_14dc4c8f5;
LAB_14dc4c963:
  if ((local_28 == (FCollectionPropertyConstFacade *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  param_3 = Chaos::Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (local_28,iVar5,&local_28->LowValueArray);
  goto LAB_14dc4c9b3;
}

// GetLowFloatPropertyValue @ 14dc4cbe0

float __thiscall
UChaosClothAssetInteractor::GetLowFloatPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  float fVar7;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_res8;
  float local_res20 [2];
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_38;
  code *local_28;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_20;
  
  if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar5 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    local_res20[0] = param_3;
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    pFVar1 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
    local_38.Object = (FCollectionPropertyFacade *)0x0;
    local_38.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_2 * 0x10 + 8);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc4ccba;
        }
        LOCK();
        aVar6 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_38.Object = *(FCollectionPropertyFacade **)(pFVar1 + (longlong)param_2 * 0x10);
      }
    }
LAB_14dc4ccba:
    if (local_38.Object != (FCollectionPropertyFacade *)0x0) {
      local_res8 = &local_38;
      local_20 = &local_res8;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::GetLowFloatPropertyValue'::__l8::<lambda_1>,float,int>
                 ::Call;
      param_3 = UE::Chaos::ClothAsset::Private::GetValueWithAlias<float>
                          (&local_38,param_1,local_res20,
                           (TFunctionRef<float___cdecl(int)> *)&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return param_3;
}

// GetPrivateStaticClass @ 14dc4e290

UClass * __cdecl UChaosClothAssetInteractor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetInteractor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetInteractor",
               &Z_Registration_Info_UClass_UChaosClothAssetInteractor.InnerSingleton,
               StaticRegisterNativesUChaosClothAssetInteractor,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UChaosClothAssetInteractor>,
               InternalVTableHelperCtorCaller<UChaosClothAssetInteractor>,local_res8,
               UClothingInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetInteractor.InnerSingleton;
}

// GetStringPropertyValue @ 14dc4fc30

FString * __thiscall
UChaosClothAssetInteractor::GetStringPropertyValue
          (UChaosClothAssetInteractor *this,FString *__return_storage_ptr__,FName param_1,
          int param_2,FString *param_3)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  uint uVar4;
  atomic<int> aVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_res8;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_28;
  code *local_18;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_10;
  
  if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar4 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar1)();
      return pFVar6;
    }
    local_28.Object = (FCollectionPropertyFacade *)0x0;
    pFVar7 = (this->CollectionPropertyFacades).AllocatorInstance.Data + (longlong)param_2 * 0x10;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc4fcfe;
        }
        LOCK();
        aVar5 = (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar3 = aVar2 == aVar5;
        if (bVar3) {
          (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar3);
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_28.Object = *(FCollectionPropertyFacade **)pFVar7;
      }
    }
LAB_14dc4fcfe:
    if (local_28.Object != (FCollectionPropertyFacade *)0x0) {
      local_res8 = &local_28;
      local_10 = &local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::GetStringPropertyValue'::__l8::<lambda_1>,FString,int>
                 ::Call;
      UE::Chaos::ClothAsset::Private::GetValueWithAlias<FString>
                (__return_storage_ptr__,&local_28,param_1,param_3,
                 (TFunctionRef<FString___cdecl(int)> *)&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  ::FString::FString(__return_storage_ptr__,param_3);
  return __return_storage_ptr__;
}

// GetVectorPropertyValue @ 14dc50390

TVector<double> * __thiscall
UChaosClothAssetInteractor::GetVectorPropertyValue
          (UChaosClothAssetInteractor *this,TVector<double> *__return_storage_ptr__,FName param_1,
          int param_2,TVector<double> *param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  TVector<double> *pTVar8;
  FScriptContainerElement *pFVar9;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_res8;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_28;
  code *local_18;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_10;
  
  if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar6 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar2)();
      return pTVar8;
    }
    local_28.Object = (FCollectionPropertyFacade *)0x0;
    pFVar9 = (this->CollectionPropertyFacades).AllocatorInstance.Data + (longlong)param_2 * 0x10;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar9 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc5045e;
        }
        LOCK();
        aVar7 = (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar5 = aVar4 == aVar7;
        if (bVar5) {
          (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar4 + 1);
          aVar7 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar7;
      } while (!bVar5);
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_28.Object = *(FCollectionPropertyFacade **)pFVar9;
      }
    }
LAB_14dc5045e:
    if (local_28.Object != (FCollectionPropertyFacade *)0x0) {
      local_res8 = &local_28;
      local_10 = &local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::GetVectorPropertyValue'::__l8::<lambda_1>,UE::Math::TVector<double>,int>
                 ::Call;
      UE::Chaos::ClothAsset::Private::GetValueWithAlias<UE::Math::TVector<double>_>
                (__return_storage_ptr__,&local_28,param_1,param_3,
                 (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetWeightedFloatPropertyValue @ 14dc51020

TVector2<double> * __thiscall
UChaosClothAssetInteractor::GetWeightedFloatPropertyValue
          (UChaosClothAssetInteractor *this,TVector2<double> *__return_storage_ptr__,FName param_1,
          int param_2,TVector2<double> *param_3)

{
  code *pcVar1;
  double dVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  TVector2<double> *pTVar7;
  FScriptContainerElement *pFVar8;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_res8;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_28;
  code *local_18;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_10;
  
  if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar5 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar1)();
      return pTVar7;
    }
    local_28.Object = (FCollectionPropertyFacade *)0x0;
    pFVar8 = (this->CollectionPropertyFacades).AllocatorInstance.Data + (longlong)param_2 * 0x10;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc510ee;
        }
        LOCK();
        aVar6 = (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_28.Object = *(FCollectionPropertyFacade **)pFVar8;
      }
    }
LAB_14dc510ee:
    if (local_28.Object != (FCollectionPropertyFacade *)0x0) {
      local_res8 = &local_28;
      local_10 = &local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::GetWeightedFloatPropertyValue'::__l8::<lambda_1>,UE::Math::TVector2<double>,int>
                 ::Call;
      UE::Chaos::ClothAsset::Private::GetValueWithAlias<UE::Math::TVector2<double>_>
                (__return_storage_ptr__,&local_28,param_1,param_3,
                 (TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *)&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  return __return_storage_ptr__;
}

// ResetProperties @ 14dc55fb0

void __thiscall UChaosClothAssetInteractor::ResetProperties(UChaosClothAssetInteractor *this)

{
  int *piVar1;
  int iVar2;
  TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1> *pTVar3;
  
  iVar2 = (this->CollectionPropertyFacades).ArrayNum;
  piVar1 = &(this->CollectionPropertyFacades).ArrayMax;
  pTVar3 = (TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1> *)
           (this->CollectionPropertyFacades).AllocatorInstance.Data;
  if (-1 < (this->CollectionPropertyFacades).ArrayMax) {
    DestructItems<TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>(pTVar3,iVar2);
    (this->CollectionPropertyFacades).ArrayNum = 0;
    return;
  }
  DestructItems<TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>(pTVar3,iVar2);
  (this->CollectionPropertyFacades).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CollectionPropertyFacades).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetFloatPropertyValue @ 14dc57c00

void __thiscall
UChaosClothAssetInteractor::SetFloatPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_88;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_78;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_68;
  float local_60;
  code *local_58;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_50;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_48;
  float local_40;
  code *local_38;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_30;
  
  if (param_2 == -1) {
    uVar7 = 0;
    uVar9 = uVar7;
    if (0 < (this->CollectionPropertyFacades).ArrayNum) {
      do {
        uVar8 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar8 < (this->CollectionPropertyFacades).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
        local_88.Object = (FCollectionPropertyFacade *)0x0;
        local_88.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar1 + uVar9 + 8);
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar3 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_14dc57ce8;
            }
            LOCK();
            aVar6 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar4 = aVar3 == aVar6;
            if (bVar4) {
              (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar3 + 1);
              aVar6 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar6;
          } while (!bVar4);
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_88.Object = *(FCollectionPropertyFacade **)(pFVar1 + uVar9);
          }
        }
LAB_14dc57ce8:
        if (local_88.Object != (FCollectionPropertyFacade *)0x0) {
          local_68 = &local_88;
          local_50 = &local_68;
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UChaosClothAssetInteractor::SetFloatPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
                     ::Call;
          local_60 = param_3;
          UE::Chaos::ClothAsset::Private::SetValueWithAlias
                    (&local_88,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_58);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        uVar7 = (ulonglong)(uVar8 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar8 + 1) < (this->CollectionPropertyFacades).ArrayNum);
    }
  }
  else if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar5 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
    local_78.Object = (FCollectionPropertyFacade *)0x0;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_2 * 0x10 + 8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc57ded;
        }
        LOCK();
        aVar6 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_78.Object = *(FCollectionPropertyFacade **)(pFVar1 + (longlong)param_2 * 0x10);
      }
    }
LAB_14dc57ded:
    if (local_78.Object != (FCollectionPropertyFacade *)0x0) {
      local_48 = &local_78;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::SetFloatPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
                 ::Call;
      local_40 = param_3;
      UE::Chaos::ClothAsset::Private::SetValueWithAlias
                (&local_78,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetHighFloatPropertyValue @ 14dc57ea0

void __thiscall
UChaosClothAssetInteractor::SetHighFloatPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_88;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_78;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_68;
  float local_60;
  code *local_58;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_50;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_48;
  float local_40;
  code *local_38;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_30;
  
  if (param_2 == -1) {
    uVar7 = 0;
    uVar9 = uVar7;
    if (0 < (this->CollectionPropertyFacades).ArrayNum) {
      do {
        uVar8 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar8 < (this->CollectionPropertyFacades).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
        local_88.Object = (FCollectionPropertyFacade *)0x0;
        local_88.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar1 + uVar9 + 8);
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar3 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_14dc57f88;
            }
            LOCK();
            aVar6 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar4 = aVar3 == aVar6;
            if (bVar4) {
              (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar3 + 1);
              aVar6 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar6;
          } while (!bVar4);
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_88.Object = *(FCollectionPropertyFacade **)(pFVar1 + uVar9);
          }
        }
LAB_14dc57f88:
        if (local_88.Object != (FCollectionPropertyFacade *)0x0) {
          local_68 = &local_88;
          local_50 = &local_68;
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UChaosClothAssetInteractor::SetHighFloatPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
                     ::Call;
          local_60 = param_3;
          UE::Chaos::ClothAsset::Private::SetValueWithAlias
                    (&local_88,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_58);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        uVar7 = (ulonglong)(uVar8 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar8 + 1) < (this->CollectionPropertyFacades).ArrayNum);
    }
  }
  else if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar5 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
    local_78.Object = (FCollectionPropertyFacade *)0x0;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_2 * 0x10 + 8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc5808d;
        }
        LOCK();
        aVar6 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_78.Object = *(FCollectionPropertyFacade **)(pFVar1 + (longlong)param_2 * 0x10);
      }
    }
LAB_14dc5808d:
    if (local_78.Object != (FCollectionPropertyFacade *)0x0) {
      local_48 = &local_78;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::SetHighFloatPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
                 ::Call;
      local_40 = param_3;
      UE::Chaos::ClothAsset::Private::SetValueWithAlias
                (&local_78,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetIntPropertyValue @ 14dc58100

void __thiscall
UChaosClothAssetInteractor::SetIntPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,int param_3)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  uint uVar4;
  atomic<int> aVar5;
  ulonglong uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_88;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_78;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_68;
  int local_60;
  code *local_58;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_50;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_48;
  int local_40;
  code *local_38;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_30;
  
  if (param_2 == -1) {
    uVar6 = 0;
    uVar9 = uVar6;
    if (0 < (this->CollectionPropertyFacades).ArrayNum) {
      do {
        uVar7 = (uint)uVar6;
        uVar4 = 0;
        if ((int)uVar7 < (this->CollectionPropertyFacades).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
        local_88.Object = (FCollectionPropertyFacade *)0x0;
        local_88.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar8 + uVar9 + 8);
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar2 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_14dc581de;
            }
            LOCK();
            aVar5 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar3 = aVar2 == aVar5;
            if (bVar3) {
              (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar2 + 1);
              aVar5 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar5;
          } while (!bVar3);
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_88.Object = *(FCollectionPropertyFacade **)(pFVar8 + uVar9);
          }
        }
LAB_14dc581de:
        if (local_88.Object != (FCollectionPropertyFacade *)0x0) {
          local_68 = &local_88;
          local_50 = &local_68;
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UChaosClothAssetInteractor::SetIntPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
                     ::Call;
          local_60 = param_3;
          UE::Chaos::ClothAsset::Private::SetValueWithAlias
                    (&local_88,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_58);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        uVar6 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar7 + 1) < (this->CollectionPropertyFacades).ArrayNum);
    }
  }
  else if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar4 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_78.Object = (FCollectionPropertyFacade *)0x0;
    pFVar8 = (this->CollectionPropertyFacades).AllocatorInstance.Data + (longlong)param_2 * 0x10;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc582e7;
        }
        LOCK();
        aVar5 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar3 = aVar2 == aVar5;
        if (bVar3) {
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar3);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_78.Object = *(FCollectionPropertyFacade **)pFVar8;
      }
    }
LAB_14dc582e7:
    if (local_78.Object != (FCollectionPropertyFacade *)0x0) {
      local_48 = &local_78;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::SetIntPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
                 ::Call;
      local_40 = param_3;
      UE::Chaos::ClothAsset::Private::SetValueWithAlias
                (&local_78,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetLowFloatPropertyValue @ 14dc58350

void __thiscall
UChaosClothAssetInteractor::SetLowFloatPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_88;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_78;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_68;
  float local_60;
  code *local_58;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_50;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_48;
  float local_40;
  code *local_38;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_30;
  
  if (param_2 == -1) {
    uVar7 = 0;
    uVar9 = uVar7;
    if (0 < (this->CollectionPropertyFacades).ArrayNum) {
      do {
        uVar8 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar8 < (this->CollectionPropertyFacades).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
        local_88.Object = (FCollectionPropertyFacade *)0x0;
        local_88.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar1 + uVar9 + 8);
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar3 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_14dc58438;
            }
            LOCK();
            aVar6 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar4 = aVar3 == aVar6;
            if (bVar4) {
              (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar3 + 1);
              aVar6 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar6;
          } while (!bVar4);
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_88.Object = *(FCollectionPropertyFacade **)(pFVar1 + uVar9);
          }
        }
LAB_14dc58438:
        if (local_88.Object != (FCollectionPropertyFacade *)0x0) {
          local_68 = &local_88;
          local_50 = &local_68;
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UChaosClothAssetInteractor::SetLowFloatPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
                     ::Call;
          local_60 = param_3;
          UE::Chaos::ClothAsset::Private::SetValueWithAlias
                    (&local_88,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_58);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        uVar7 = (ulonglong)(uVar8 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar8 + 1) < (this->CollectionPropertyFacades).ArrayNum);
    }
  }
  else if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar5 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
    local_78.Object = (FCollectionPropertyFacade *)0x0;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_2 * 0x10 + 8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc5853d;
        }
        LOCK();
        aVar6 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_78.Object = *(FCollectionPropertyFacade **)(pFVar1 + (longlong)param_2 * 0x10);
      }
    }
LAB_14dc5853d:
    if (local_78.Object != (FCollectionPropertyFacade *)0x0) {
      local_48 = &local_78;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::SetLowFloatPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
                 ::Call;
      local_40 = param_3;
      UE::Chaos::ClothAsset::Private::SetValueWithAlias
                (&local_78,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetProperties @ 14dc59140

void __thiscall
UChaosClothAssetInteractor::SetProperties
          (UChaosClothAssetInteractor *this,
          TArray<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TArray<TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this_00 = &this->CollectionPropertyFacades;
  TArray<TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_>::Reset
            (this_00,param_1->ArrayNum);
  iVar2 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    iVar4 = (this->CollectionPropertyFacades).ArrayNum;
    piVar1 = &(this->CollectionPropertyFacades).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this_00->AllocatorInstance,piVar1);
    }
    (this->CollectionPropertyFacades).ArrayNum = iVar4 + 1;
    pFVar5 = (this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar5 = *(undefined8 *)pFVar6;
    lVar3 = *(longlong *)(pFVar6 + 8);
    *(longlong *)(pFVar5 + 8) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// SetStringPropertyValue @ 14dc59740

void __thiscall
UChaosClothAssetInteractor::SetStringPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,FString *param_3)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  uint uVar4;
  atomic<int> aVar5;
  ulonglong uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_88;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_78;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_68;
  FString *local_60;
  code *local_58;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_50;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_48;
  FString *local_40;
  code *local_38;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_30;
  
  if (param_2 == -1) {
    uVar6 = 0;
    uVar9 = uVar6;
    if (0 < (this->CollectionPropertyFacades).ArrayNum) {
      do {
        uVar7 = (uint)uVar6;
        uVar4 = 0;
        if ((int)uVar7 < (this->CollectionPropertyFacades).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
        local_88.Object = (FCollectionPropertyFacade *)0x0;
        local_88.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar8 + uVar9 + 8);
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar2 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_14dc5981e;
            }
            LOCK();
            aVar5 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar3 = aVar2 == aVar5;
            if (bVar3) {
              (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar2 + 1);
              aVar5 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar5;
          } while (!bVar3);
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_88.Object = *(FCollectionPropertyFacade **)(pFVar8 + uVar9);
          }
        }
LAB_14dc5981e:
        if (local_88.Object != (FCollectionPropertyFacade *)0x0) {
          local_68 = &local_88;
          local_50 = &local_68;
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UChaosClothAssetInteractor::SetStringPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
                     ::Call;
          local_60 = param_3;
          UE::Chaos::ClothAsset::Private::SetValueWithAlias
                    (&local_88,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_58);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        uVar6 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar7 + 1) < (this->CollectionPropertyFacades).ArrayNum);
    }
  }
  else if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar4 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_78.Object = (FCollectionPropertyFacade *)0x0;
    pFVar8 = (this->CollectionPropertyFacades).AllocatorInstance.Data + (longlong)param_2 * 0x10;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc59927;
        }
        LOCK();
        aVar5 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar3 = aVar2 == aVar5;
        if (bVar3) {
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar3);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_78.Object = *(FCollectionPropertyFacade **)pFVar8;
      }
    }
LAB_14dc59927:
    if (local_78.Object != (FCollectionPropertyFacade *)0x0) {
      local_48 = &local_78;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::SetStringPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
                 ::Call;
      local_40 = param_3;
      UE::Chaos::ClothAsset::Private::SetValueWithAlias
                (&local_78,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetVectorPropertyValue @ 14dc59c40

void __thiscall
UChaosClothAssetInteractor::SetVectorPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,TVector<double> *param_3)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  uint uVar4;
  atomic<int> aVar5;
  ulonglong uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_88;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_78;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_68;
  TVector<double> *local_60;
  code *local_58;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_50;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_48;
  TVector<double> *local_40;
  code *local_38;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_30;
  
  if (param_2 == -1) {
    uVar6 = 0;
    uVar9 = uVar6;
    if (0 < (this->CollectionPropertyFacades).ArrayNum) {
      do {
        uVar7 = (uint)uVar6;
        uVar4 = 0;
        if ((int)uVar7 < (this->CollectionPropertyFacades).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
        local_88.Object = (FCollectionPropertyFacade *)0x0;
        local_88.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar8 + uVar9 + 8);
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar2 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_14dc59d1e;
            }
            LOCK();
            aVar5 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar3 = aVar2 == aVar5;
            if (bVar3) {
              (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar2 + 1);
              aVar5 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar5;
          } while (!bVar3);
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_88.Object = *(FCollectionPropertyFacade **)(pFVar8 + uVar9);
          }
        }
LAB_14dc59d1e:
        if (local_88.Object != (FCollectionPropertyFacade *)0x0) {
          local_68 = &local_88;
          local_50 = &local_68;
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UChaosClothAssetInteractor::SetVectorPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
                     ::Call;
          local_60 = param_3;
          UE::Chaos::ClothAsset::Private::SetValueWithAlias
                    (&local_88,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_58);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        uVar6 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar7 + 1) < (this->CollectionPropertyFacades).ArrayNum);
    }
  }
  else if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar4 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_78.Object = (FCollectionPropertyFacade *)0x0;
    pFVar8 = (this->CollectionPropertyFacades).AllocatorInstance.Data + (longlong)param_2 * 0x10;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc59e27;
        }
        LOCK();
        aVar5 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar3 = aVar2 == aVar5;
        if (bVar3) {
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar3);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_78.Object = *(FCollectionPropertyFacade **)pFVar8;
      }
    }
LAB_14dc59e27:
    if (local_78.Object != (FCollectionPropertyFacade *)0x0) {
      local_48 = &local_78;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::SetVectorPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
                 ::Call;
      local_40 = param_3;
      UE::Chaos::ClothAsset::Private::SetValueWithAlias
                (&local_78,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetWeightedFloatPropertyValue @ 14dc59e90

void __thiscall
UChaosClothAssetInteractor::SetWeightedFloatPropertyValue
          (UChaosClothAssetInteractor *this,FName param_1,int param_2,TVector2<double> *param_3)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  uint uVar4;
  atomic<int> aVar5;
  ulonglong uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_88;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_78;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_68;
  TVector2<double> *local_60;
  code *local_58;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_50;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_48;
  TVector2<double> *local_40;
  code *local_38;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_30;
  
  if (param_2 == -1) {
    uVar6 = 0;
    uVar9 = uVar6;
    if (0 < (this->CollectionPropertyFacades).ArrayNum) {
      do {
        uVar7 = (uint)uVar6;
        uVar4 = 0;
        if ((int)uVar7 < (this->CollectionPropertyFacades).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
        local_88.Object = (FCollectionPropertyFacade *)0x0;
        local_88.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar8 + uVar9 + 8);
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar2 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_14dc59f6e;
            }
            LOCK();
            aVar5 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar3 = aVar2 == aVar5;
            if (bVar3) {
              (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar2 + 1);
              aVar5 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar5;
          } while (!bVar3);
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_88.Object = *(FCollectionPropertyFacade **)(pFVar8 + uVar9);
          }
        }
LAB_14dc59f6e:
        if (local_88.Object != (FCollectionPropertyFacade *)0x0) {
          local_68 = &local_88;
          local_50 = &local_68;
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UChaosClothAssetInteractor::SetWeightedFloatPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
                     ::Call;
          local_60 = param_3;
          UE::Chaos::ClothAsset::Private::SetValueWithAlias
                    (&local_88,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_58);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        uVar6 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar7 + 1) < (this->CollectionPropertyFacades).ArrayNum);
    }
  }
  else if ((-1 < param_2) && (param_2 < (this->CollectionPropertyFacades).ArrayNum)) {
    uVar4 = 0;
    if (param_2 < (this->CollectionPropertyFacades).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_78.Object = (FCollectionPropertyFacade *)0x0;
    pFVar8 = (this->CollectionPropertyFacades).AllocatorInstance.Data + (longlong)param_2 * 0x10;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc5a077;
        }
        LOCK();
        aVar5 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar3 = aVar2 == aVar5;
        if (bVar3) {
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar3);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_78.Object = *(FCollectionPropertyFacade **)pFVar8;
      }
    }
LAB_14dc5a077:
    if (local_78.Object != (FCollectionPropertyFacade *)0x0) {
      local_48 = &local_78;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::SetWeightedFloatPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
                 ::Call;
      local_40 = param_3;
      UE::Chaos::ClothAsset::Private::SetValueWithAlias
                (&local_78,param_1,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// StaticRegisterNativesUChaosClothAssetInteractor @ 14dc5a790

void __cdecl UChaosClothAssetInteractor::StaticRegisterNativesUChaosClothAssetInteractor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1e;
  local_18.DataPtr = Z_Construct_UClass_UChaosClothAssetInteractor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAllProperties @ 14dc61420

void __cdecl
UChaosClothAssetInteractor::execGetAllProperties(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *pFVar1;
  FProperty *pFVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType this;
  undefined1 local_res10 [8];
  int local_res20 [2];
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAllPropertyNames((UChaosClothAssetInteractor *)param_1,&local_48,local_res20[0]);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar5 = local_48.ArrayNum;
  if (-1 < iVar5) {
    if (0 < iVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,&local_58,0,(int *)((longlong)&local_50 + 4));
    }
    iVar5 = local_48.ArrayNum;
    pFVar1 = (FName *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 8);
    this.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if (local_48.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if ((FName *)this.Data == pFVar1) break;
      pFVar4 = ::FName::ToString((FName *)this.Data,&local_38);
      iVar3 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar3 + 1);
      pFVar6 = local_58.Data + (longlong)iVar3 * 0x10;
      *(undefined8 *)pFVar6 = 0;
      *(FScriptContainerElement **)pFVar6 = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6 + 8) = (pFVar4->Data).ArrayNum;
      *(int *)(pFVar6 + 0xc) = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      this.Data = this.Data + 8;
    }
    if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (param_3 != &local_58) {
      DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
      if (*(void **)param_3 != (void *)0x0) {
        FMemory::Free(*(void **)param_3);
      }
      *(FScriptContainerElement **)param_3 = local_58.Data;
      *(int *)((longlong)param_3 + 8) = (int)local_50;
      *(int *)((longlong)param_3 + 0xc) = local_50._4_4_;
      local_50 = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
    }
    DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(local_48._8_8_ & 0xffffffff);
}

// execGetAllPropertyNames @ 14dc61610

void __cdecl
UChaosClothAssetInteractor::execGetAllPropertyNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetAllPropertyNames((UChaosClothAssetInteractor *)param_1,&local_18,local_res10[0]);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetFloatPropertyValue @ 14dc619b0

void __cdecl
UChaosClothAssetInteractor::execGetFloatPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetFloatPropertyValue
                    ((UChaosClothAssetInteractor *)param_1,local_res20,local_res18[0],local_res10[0]
                    );
  *(float *)param_3 = fVar2;
  return;
}

// execGetFloatValue @ 14dc61ad0

void __cdecl
UChaosClothAssetInteractor::execGetFloatValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  float fVar5;
  float local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  wchar_t *local_38;
  undefined8 local_30;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res18[0];
  fVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_res20,iVar4,local_38,FNAME_Add);
  fVar5 = GetFloatPropertyValue((UChaosClothAssetInteractor *)param_1,*pFVar3,iVar2,fVar5);
  *(float *)param_3 = fVar5;
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetHighFloatPropertyValue @ 14dc61c30

void __cdecl
UChaosClothAssetInteractor::execGetHighFloatPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetHighFloatPropertyValue
                    ((UChaosClothAssetInteractor *)param_1,local_res20,local_res18[0],local_res10[0]
                    );
  *(float *)param_3 = fVar2;
  return;
}

// execGetHighFloatValue @ 14dc61d50

void __cdecl
UChaosClothAssetInteractor::execGetHighFloatValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  float fVar5;
  float local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  wchar_t *local_38;
  undefined8 local_30;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res18[0];
  fVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_res20,iVar4,local_38,FNAME_Add);
  fVar5 = GetHighFloatPropertyValue((UChaosClothAssetInteractor *)param_1,*pFVar3,iVar2,fVar5);
  *(float *)param_3 = fVar5;
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetIntPropertyValue @ 14dc61eb0

void __cdecl
UChaosClothAssetInteractor::execGetIntPropertyValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = GetIntPropertyValue((UChaosClothAssetInteractor *)param_1,local_res20,local_res18[0],
                              local_res10[0]);
  *(int *)param_3 = iVar2;
  return;
}

// execGetIntValue @ 14dc61fc0

void __cdecl
UChaosClothAssetInteractor::execGetIntValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  FName *pFVar4;
  int iVar5;
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  wchar_t *local_38;
  undefined8 local_30;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res18[0];
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar5 = 0;
  }
  pFVar4 = ::FName::FName(&local_res20,iVar5,local_38,FNAME_Add);
  iVar3 = GetIntPropertyValue((UChaosClothAssetInteractor *)param_1,*pFVar4,iVar2,iVar3);
  *(int *)param_3 = iVar3;
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetLowFloatPropertyValue @ 14dc62110

void __cdecl
UChaosClothAssetInteractor::execGetLowFloatPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetLowFloatPropertyValue
                    ((UChaosClothAssetInteractor *)param_1,local_res20,local_res18[0],local_res10[0]
                    );
  *(float *)param_3 = fVar2;
  return;
}

// execGetLowFloatValue @ 14dc62230

void __cdecl
UChaosClothAssetInteractor::execGetLowFloatValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  float fVar5;
  float local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  wchar_t *local_38;
  undefined8 local_30;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res18[0];
  fVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_res20,iVar4,local_38,FNAME_Add);
  fVar5 = GetLowFloatPropertyValue((UChaosClothAssetInteractor *)param_1,*pFVar3,iVar2,fVar5);
  *(float *)param_3 = fVar5;
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetStringPropertyValue @ 14dc62450

void __cdecl
UChaosClothAssetInteractor::execGetStringPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res10 [2];
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetStringPropertyValue
                     ((UChaosClothAssetInteractor *)param_1,&local_28,local_res18[0],local_res10[0],
                      &local_38);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStringValue @ 14dc625d0

void __cdecl
UChaosClothAssetInteractor::execGetStringValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int local_res10 [2];
  FName local_res18;
  FString local_48;
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_res18,iVar4,local_38,FNAME_Add);
  GetStringPropertyValue((UChaosClothAssetInteractor *)param_1,&local_48,*pFVar3,iVar2,&local_28);
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetVectorPropertyValue @ 14dc627e0

void __cdecl
UChaosClothAssetInteractor::execGetVectorPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  int local_res10 [2];
  FName local_res18 [2];
  double local_78;
  double dStack_70;
  double local_68;
  TVector<double>_u_0 local_58;
  TVector<double> local_38;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_58._s_0.X = local_78;
  local_58._s_0.Y = dStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58._s_0.Z = local_68;
  pTVar3 = GetVectorPropertyValue
                     ((UChaosClothAssetInteractor *)param_1,&local_38,local_res18[0],local_res10[0],
                      (TVector<double> *)&local_58._s_0);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execGetVectorValue @ 14dc62940

void __cdecl
UChaosClothAssetInteractor::execGetVectorValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int local_res10 [2];
  double local_res18;
  FName local_res20;
  wchar_t *local_78;
  undefined8 local_70;
  TVector<double>_u_0 local_68;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_30;
  
  local_78 = (wchar_t *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68._s_0.X = local_48;
  local_68._s_0.Y = dStack_40;
  iVar4 = (int)local_70 + -1;
  if ((int)local_70 == 0) {
    iVar4 = 0;
  }
  local_res18 = local_38;
  pFVar3 = ::FName::FName(&local_res20,iVar4,local_78,FNAME_Add);
  local_68._s_0.Z = local_res18;
  GetVectorPropertyValue
            ((UChaosClothAssetInteractor *)param_1,(TVector<double> *)&local_30._s_0,*pFVar3,iVar2,
             (TVector<double> *)&local_68._s_0);
  *(double *)param_3 = local_30._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_30._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_30._s_0.Z;
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execGetWeightedFloatPropertyValue @ 14dc62af0

void __cdecl
UChaosClothAssetInteractor::execGetWeightedFloatPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector2<double> *pTVar3;
  int local_res10 [2];
  FName local_res18 [2];
  double local_48;
  double dStack_40;
  TVector2<double>_u_0 local_38;
  TVector2<double> local_28;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_38._s_0.X = local_48;
  local_38._s_0.Y = dStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetWeightedFloatPropertyValue
                     ((UChaosClothAssetInteractor *)param_1,&local_28,local_res18[0],local_res10[0],
                      (TVector2<double> *)&local_38._s_0);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  return;
}

// execGetWeightedFloatValue @ 14dc62c30

void __cdecl
UChaosClothAssetInteractor::execGetWeightedFloatValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int local_res10 [2];
  FName local_res18 [2];
  wchar_t *local_58;
  undefined8 local_50;
  double local_48;
  double dStack_40;
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28;
  
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38._s_0.X = local_48;
  local_38._s_0.Y = dStack_40;
  iVar4 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(local_res18,iVar4,local_58,FNAME_Add);
  GetWeightedFloatPropertyValue
            ((UChaosClothAssetInteractor *)param_1,(TVector2<double> *)&local_28._s_0,*pFVar3,iVar2,
             (TVector2<double> *)&local_38._s_0);
  *(double *)param_3 = local_28._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_28._s_0.Y;
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execSetFloatPropertyValue @ 14dc63740

void __cdecl
UChaosClothAssetInteractor::execSetFloatPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  int local_res20 [2];
  FName local_18 [2];
  
  local_18[0].ComparisonIndex.Value = 0;
  local_18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetFloatPropertyValue
            ((UChaosClothAssetInteractor *)param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}

// execSetFloatValue @ 14dc63860

void __cdecl
UChaosClothAssetInteractor::execSetFloatValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int iVar3;
  FName *pFVar4;
  int iVar5;
  float local_res10 [2];
  int local_res20 [2];
  FName local_38;
  wchar_t *local_30;
  undefined8 local_28;
  
  local_30 = (wchar_t *)0x0;
  local_28 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res20[0];
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = (int)local_28 + -1;
  if ((int)local_28 == 0) {
    iVar5 = 0;
  }
  pFVar4 = ::FName::FName(&local_38,iVar5,local_30,FNAME_Add);
  SetFloatPropertyValue((UChaosClothAssetInteractor *)param_1,*pFVar4,iVar3,fVar2);
  if (local_30 != (wchar_t *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// execSetHighFloatPropertyValue @ 14dc639c0

void __cdecl
UChaosClothAssetInteractor::execSetHighFloatPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  int local_res20 [2];
  FName local_18 [2];
  
  local_18[0].ComparisonIndex.Value = 0;
  local_18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetHighFloatPropertyValue
            ((UChaosClothAssetInteractor *)param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}

// execSetHighFloatValue @ 14dc63ae0

void __cdecl
UChaosClothAssetInteractor::execSetHighFloatValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int iVar3;
  FName *pFVar4;
  int iVar5;
  float local_res10 [2];
  int local_res20 [2];
  FName local_38;
  wchar_t *local_30;
  undefined8 local_28;
  
  local_30 = (wchar_t *)0x0;
  local_28 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res20[0];
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = (int)local_28 + -1;
  if ((int)local_28 == 0) {
    iVar5 = 0;
  }
  pFVar4 = ::FName::FName(&local_38,iVar5,local_30,FNAME_Add);
  SetHighFloatPropertyValue((UChaosClothAssetInteractor *)param_1,*pFVar4,iVar3,fVar2);
  if (local_30 != (wchar_t *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// execSetIntPropertyValue @ 14dc63c40

void __cdecl
UChaosClothAssetInteractor::execSetIntPropertyValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res20 [2];
  FName local_18 [2];
  
  local_18[0].ComparisonIndex.Value = 0;
  local_18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIntPropertyValue((UChaosClothAssetInteractor *)param_1,local_18[0],local_res20[0],
                      local_res10[0]);
  return;
}

// execSetIntValue @ 14dc63d60

void __cdecl
UChaosClothAssetInteractor::execSetIntValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  FName *pFVar4;
  int iVar5;
  int local_res10 [4];
  int local_res20 [2];
  FName local_38;
  wchar_t *local_30;
  undefined8 local_28;
  
  local_30 = (wchar_t *)0x0;
  local_28 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res20[0];
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = (int)local_28 + -1;
  if ((int)local_28 == 0) {
    iVar5 = 0;
  }
  pFVar4 = ::FName::FName(&local_38,iVar5,local_30,FNAME_Add);
  SetIntPropertyValue((UChaosClothAssetInteractor *)param_1,*pFVar4,iVar3,iVar2);
  if (local_30 != (wchar_t *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// execSetLowFloatPropertyValue @ 14dc63eb0

void __cdecl
UChaosClothAssetInteractor::execSetLowFloatPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  int local_res20 [2];
  FName local_18 [2];
  
  local_18[0].ComparisonIndex.Value = 0;
  local_18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLowFloatPropertyValue
            ((UChaosClothAssetInteractor *)param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}

// execSetLowFloatValue @ 14dc63fd0

void __cdecl
UChaosClothAssetInteractor::execSetLowFloatValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int iVar3;
  FName *pFVar4;
  int iVar5;
  float local_res10 [2];
  int local_res20 [2];
  FName local_38;
  wchar_t *local_30;
  undefined8 local_28;
  
  local_30 = (wchar_t *)0x0;
  local_28 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res20[0];
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = (int)local_28 + -1;
  if ((int)local_28 == 0) {
    iVar5 = 0;
  }
  pFVar4 = ::FName::FName(&local_38,iVar5,local_30,FNAME_Add);
  SetLowFloatPropertyValue((UChaosClothAssetInteractor *)param_1,*pFVar4,iVar3,fVar2);
  if (local_30 != (wchar_t *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// execSetStringPropertyValue @ 14dc64310

void __cdecl
UChaosClothAssetInteractor::execSetStringPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  atomic<int> aVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint local_res10 [2];
  FName local_res20;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_98;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_88;
  void *local_78;
  undefined8 local_70;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_68;
  void **local_60;
  code *local_58;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_50;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_48;
  void **local_40;
  code *local_38;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_30;
  
  uVar9 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FVar5 = local_res20;
  lVar11 = (longlong)(int)local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0xffffffff) {
    uVar12 = uVar9;
    if (0 < *(int *)&param_1[1].field_0x10) {
      do {
        uVar10 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)&param_1[1].field_0x10) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar11 = *(longlong *)&param_1[1].field_0x8;
        local_98.Object = (FCollectionPropertyFacade *)0x0;
        local_98.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar11 + 8 + uVar9);
        if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar4 = (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_14dc644c8;
            }
            LOCK();
            aVar8 = (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar6 = aVar4 == aVar8;
            if (bVar6) {
              (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar4 + 1);
              aVar8 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar8;
          } while (!bVar6);
          if (local_98.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_98.Object = *(FCollectionPropertyFacade **)(lVar11 + uVar9);
          }
        }
LAB_14dc644c8:
        if (local_98.Object != (FCollectionPropertyFacade *)0x0) {
          local_68 = &local_98;
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UChaosClothAssetInteractor::SetStringPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
                     ::Call;
          local_60 = &local_78;
          local_50 = &local_68;
          UE::Chaos::ClothAsset::Private::SetValueWithAlias
                    (&local_98,FVar5,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_58);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        uVar9 = uVar9 + 0x10;
        uVar12 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < *(int *)&param_1[1].field_0x10);
    }
  }
  else if ((-1 < (int)local_res10[0]) && ((int)local_res10[0] < *(int *)&param_1[1].field_0x10)) {
    uVar7 = 0;
    if ((int)local_res10[0] < *(int *)&param_1[1].field_0x10) {
      uVar7 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_88.Object = (FCollectionPropertyFacade *)0x0;
    plVar13 = (longlong *)(lVar11 * 0x10 + *(longlong *)&param_1[1].field_0x8);
    local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar13[1];
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc645c7;
        }
        LOCK();
        aVar8 = (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar6 = aVar4 == aVar8;
        if (bVar6) {
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar4 + 1);
          aVar8 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar8;
      } while (!bVar6);
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_88.Object = (FCollectionPropertyFacade *)*plVar13;
      }
    }
LAB_14dc645c7:
    if (local_88.Object != (FCollectionPropertyFacade *)0x0) {
      local_48 = &local_88;
      local_40 = &local_78;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::SetStringPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
                 ::Call;
      UE::Chaos::ClothAsset::Private::SetValueWithAlias
                (&local_88,FVar5,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execSetStringValue @ 14dc64660

void __cdecl
UChaosClothAssetInteractor::execSetStringValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int local_res10 [2];
  FName local_res20;
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = (int)local_20 + -1;
  if ((int)local_20 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_res20,iVar4,local_28,FNAME_Add);
  SetStringPropertyValue((UChaosClothAssetInteractor *)param_1,*pFVar3,iVar2,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetVectorPropertyValue @ 14dc64940

void __cdecl
UChaosClothAssetInteractor::execSetVectorPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  atomic<int> aVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint local_res10 [2];
  FName local_res20;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_c8;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_b8;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_a8;
  undefined8 *local_a0;
  code *local_98;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_90;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_88;
  undefined8 *local_80;
  code *local_78;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FVar5 = local_res20;
  lVar11 = (longlong)(int)local_res10[0];
  local_48 = local_68;
  uStack_40 = uStack_60;
  local_38 = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0xffffffff) {
    uVar12 = uVar9;
    if (0 < *(int *)&param_1[1].field_0x10) {
      do {
        uVar10 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)&param_1[1].field_0x10) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar11 = *(longlong *)&param_1[1].field_0x8;
        local_c8.Object = (FCollectionPropertyFacade *)0x0;
        local_c8.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar11 + 8 + uVar9);
        if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar4 = (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_14dc64af8;
            }
            LOCK();
            aVar8 = (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar6 = aVar4 == aVar8;
            if (bVar6) {
              (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar4 + 1);
              aVar8 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar8;
          } while (!bVar6);
          if (local_c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_c8.Object = *(FCollectionPropertyFacade **)(lVar11 + uVar9);
          }
        }
LAB_14dc64af8:
        if (local_c8.Object != (FCollectionPropertyFacade *)0x0) {
          local_a8 = &local_c8;
          local_98 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UChaosClothAssetInteractor::SetVectorPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
                     ::Call;
          local_a0 = &local_48;
          local_90 = &local_a8;
          UE::Chaos::ClothAsset::Private::SetValueWithAlias
                    (&local_c8,FVar5,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_98);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
        uVar9 = uVar9 + 0x10;
        uVar12 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < *(int *)&param_1[1].field_0x10);
    }
  }
  else if ((-1 < (int)local_res10[0]) && ((int)local_res10[0] < *(int *)&param_1[1].field_0x10)) {
    uVar7 = 0;
    if ((int)local_res10[0] < *(int *)&param_1[1].field_0x10) {
      uVar7 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_b8.Object = (FCollectionPropertyFacade *)0x0;
    plVar13 = (longlong *)(lVar11 * 0x10 + *(longlong *)&param_1[1].field_0x8);
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar13[1];
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc64bf7;
        }
        LOCK();
        aVar8 = (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar6 = aVar4 == aVar8;
        if (bVar6) {
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar4 + 1);
          aVar8 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar8;
      } while (!bVar6);
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_b8.Object = (FCollectionPropertyFacade *)*plVar13;
      }
    }
LAB_14dc64bf7:
    if (local_b8.Object != (FCollectionPropertyFacade *)0x0) {
      local_88 = &local_b8;
      local_80 = &local_48;
      local_70 = &local_88;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::SetVectorPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
                 ::Call;
      UE::Chaos::ClothAsset::Private::SetValueWithAlias
                (&local_b8,FVar5,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// execSetVectorValue @ 14dc64c60

void __cdecl
UChaosClothAssetInteractor::execSetVectorValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int local_res10 [2];
  FName local_68;
  wchar_t *local_60;
  undefined8 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  TVector<double>_u_0 local_28;
  
  local_60 = (wchar_t *)0x0;
  local_58 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_40;
  dStack_48 = dStack_38;
  iVar4 = (int)local_58 + -1;
  if ((int)local_58 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_68,iVar4,local_60,FNAME_Add);
  local_28._s_0.X = local_50;
  local_28._s_0.Y = dStack_48;
  local_28._s_0.Z = local_30;
  SetVectorPropertyValue
            ((UChaosClothAssetInteractor *)param_1,*pFVar3,iVar2,(TVector<double> *)&local_28._s_0);
  if (local_60 != (wchar_t *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// execSetWeightedFloatPropertyValue @ 14dc64df0

void __cdecl
UChaosClothAssetInteractor::execSetWeightedFloatPropertyValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  atomic<int> aVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint local_res10 [2];
  FName local_res20;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_a8;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_78;
  undefined8 *local_70;
  code *local_68;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *local_48;
  undefined8 *local_40;
  code *local_38;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **local_30;
  
  uVar9 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FVar5 = local_res20;
  lVar11 = (longlong)(int)local_res10[0];
  local_58 = local_88;
  uStack_50 = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0xffffffff) {
    uVar12 = uVar9;
    if (0 < *(int *)&param_1[1].field_0x10) {
      do {
        uVar10 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)&param_1[1].field_0x10) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar11 = *(longlong *)&param_1[1].field_0x8;
        local_a8.Object = (FCollectionPropertyFacade *)0x0;
        local_a8.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar11 + 8 + uVar9);
        if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar4 = (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              goto LAB_14dc64f98;
            }
            LOCK();
            aVar8 = (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar6 = aVar4 == aVar8;
            if (bVar6) {
              (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar4 + 1);
              aVar8 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar8;
          } while (!bVar6);
          if (local_a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            local_a8.Object = *(FCollectionPropertyFacade **)(lVar11 + uVar9);
          }
        }
LAB_14dc64f98:
        if (local_a8.Object != (FCollectionPropertyFacade *)0x0) {
          local_78 = &local_a8;
          local_68 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UChaosClothAssetInteractor::SetWeightedFloatPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
                     ::Call;
          local_70 = &local_58;
          local_60 = &local_78;
          UE::Chaos::ClothAsset::Private::SetValueWithAlias
                    (&local_a8,FVar5,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_68);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        uVar9 = uVar9 + 0x10;
        uVar12 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < *(int *)&param_1[1].field_0x10);
    }
  }
  else if ((-1 < (int)local_res10[0]) && ((int)local_res10[0] < *(int *)&param_1[1].field_0x10)) {
    uVar7 = 0;
    if ((int)local_res10[0] < *(int *)&param_1[1].field_0x10) {
      uVar7 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_98.Object = (FCollectionPropertyFacade *)0x0;
    plVar13 = (longlong *)(lVar11 * 0x10 + *(longlong *)&param_1[1].field_0x8);
    local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar13[1];
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14dc65097;
        }
        LOCK();
        aVar8 = (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar6 = aVar4 == aVar8;
        if (bVar6) {
          (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar4 + 1);
          aVar8 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar8;
      } while (!bVar6);
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_98.Object = (FCollectionPropertyFacade *)*plVar13;
      }
    }
LAB_14dc65097:
    if (local_98.Object != (FCollectionPropertyFacade *)0x0) {
      local_48 = &local_98;
      local_40 = &local_58;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UChaosClothAssetInteractor::SetWeightedFloatPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
                 ::Call;
      UE::Chaos::ClothAsset::Private::SetValueWithAlias
                (&local_98,FVar5,(TFunctionRef<void___cdecl(FName_const_&)> *)&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  return;
}

// execSetWeightedFloatValue @ 14dc65100

void __cdecl
UChaosClothAssetInteractor::execSetWeightedFloatValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int local_res10 [2];
  FName local_res20;
  wchar_t *local_48;
  undefined8 local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_38;
  dStack_20 = dStack_30;
  iVar4 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_res20,iVar4,local_48,FNAME_Add);
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  SetWeightedFloatPropertyValue
            ((UChaosClothAssetInteractor *)param_1,*pFVar3,iVar2,(TVector2<double> *)&local_18._s_0)
  ;
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

