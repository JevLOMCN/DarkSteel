// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 8

// FClothingSimulationConfig @ 14db8f980

FClothingSimulationConfig * __thiscall
Chaos::FClothingSimulationConfig::FClothingSimulationConfig
          (FClothingSimulationConfig *this,
          TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  this->bIsLegacySingleLOD = false;
  (this->PropertyCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyCollections).ArrayNum = 0;
  (this->PropertyCollections).ArrayMax = 0;
  (this->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Properties).ArrayNum = 0;
  (this->Properties).ArrayMax = 0;
  Initialize(this,param_1);
  return this;
}

// FClothingSimulationConfig @ 14db8f9c0

FClothingSimulationConfig * __thiscall
Chaos::FClothingSimulationConfig::FClothingSimulationConfig(FClothingSimulationConfig *this)

{
  this->bIsLegacySingleLOD = false;
  (this->PropertyCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyCollections).ArrayNum = 0;
  (this->PropertyCollections).ArrayMax = 0;
  (this->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Properties).ArrayNum = 0;
  (this->Properties).ArrayMax = 0;
  return this;
}

// ~FClothingSimulationConfig @ 14db9f6c0

void __thiscall
Chaos::FClothingSimulationConfig::~FClothingSimulationConfig(FClothingSimulationConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
            ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
              *)(this->Properties).AllocatorInstance.Data,(this->Properties).ArrayNum);
  pFVar1 = (this->Properties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>
            ((TSharedPtr<FManagedArrayCollection,1> *)
             (this->PropertyCollections).AllocatorInstance.Data,(this->PropertyCollections).ArrayNum
            );
  pFVar1 = (this->PropertyCollections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetProperties @ 14dbff080

FCollectionPropertyFacade * __thiscall
Chaos::FClothingSimulationConfig::GetProperties(FClothingSimulationConfig *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FCollectionPropertyFacade *pFVar4;
  uint uVar5;
  
  iVar1 = (this->Properties).ArrayNum;
  if (this->bIsLegacySingleLOD == false) {
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FCollectionPropertyFacade *)(*pcVar2)();
        return pFVar4;
      }
    }
    return *(FCollectionPropertyFacade **)
            ((this->Properties).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCollectionPropertyFacade *)(*pcVar2)();
      return pFVar4;
    }
  }
  return *(FCollectionPropertyFacade **)(this->Properties).AllocatorInstance.Data;
}

// GetProperties @ 14dbff140

FCollectionPropertyConstFacade * __thiscall
Chaos::FClothingSimulationConfig::GetProperties(FClothingSimulationConfig *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FCollectionPropertyConstFacade *pFVar4;
  uint uVar5;
  
  iVar1 = (this->Properties).ArrayNum;
  if (this->bIsLegacySingleLOD == false) {
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FCollectionPropertyConstFacade *)(*pcVar2)();
        return pFVar4;
      }
    }
    return *(FCollectionPropertyConstFacade **)
            ((this->Properties).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCollectionPropertyConstFacade *)(*pcVar2)();
      return pFVar4;
    }
  }
  return *(FCollectionPropertyConstFacade **)(this->Properties).AllocatorInstance.Data;
}

// Initialize @ 14dc02890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothingSimulationConfig::Initialize
          (FClothingSimulationConfig *this,
          TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TSharedPtr<FManagedArrayCollection,1>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FCollectionPropertyConstFacade *this_01;
  code *pcVar3;
  FManagedArrayCollection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  FCollectionPropertyMutableFacade *pFVar9;
  FCollectionPropertyConstFacade *this_02;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TArray<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,TSizedDefaultAllocator<32>_>
  *this_03;
  FManagedArrayCollection *pFVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TSharedPtr<FManagedArrayCollection,1> *pTVar17;
  longlong local_res8;
  FScriptContainerElement local_78 [8];
  TSharedPtr<FManagedArrayCollection,1> local_70 [3];
  
  uVar12 = param_1->ArrayNum;
  this_00 = &this->PropertyCollections;
  iVar10 = (this->PropertyCollections).ArrayNum;
  piVar1 = &(this->PropertyCollections).ArrayNum;
  if (iVar10 < (int)uVar12) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar12 - iVar10,&this_00->AllocatorInstance,piVar1,
                       &(this->PropertyCollections).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10,0,
           (longlong)(int)(uVar12 - iVar10) << 4);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar10) {
      uVar14 = iVar10 - uVar12;
      if (((int)(uVar14 | uVar12) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar14 != 0) {
        TArray<TSharedPtr<FManagedArrayCollection,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar12,uVar14);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,&(this->PropertyCollections).ArrayMax)
        ;
      }
    }
  }
  uVar12 = param_1->ArrayNum;
  this_03 = &this->Properties;
  iVar10 = (this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayNum;
  if (iVar10 < (int)uVar12) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar12 - iVar10,&this_03->AllocatorInstance,piVar1,
                       &(this->Properties).ArrayMax);
    memset((this_03->AllocatorInstance).Data + (longlong)iVar7 * 8,0,
           (longlong)(int)(uVar12 - iVar10) << 3);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar10) {
      uVar14 = iVar10 - uVar12;
      if (((int)(uVar14 | uVar12) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar14 != 0) {
        TArray<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_03,uVar12,uVar14);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this_03->AllocatorInstance,*piVar1,&(this->Properties).ArrayMax);
      }
    }
  }
  pTVar5 = _UNK_150651568;
  pFVar4 = ___xmm_00000000000000000000000000000010;
  iVar10 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar10) {
    lVar15 = 0;
    local_res8 = 0;
    do {
      uVar11 = ~uVar12 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar12 < iVar10) {
        uVar14 = uVar11;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = (param_1->AllocatorInstance).Data + local_res8;
      uVar14 = 0;
      if ((int)uVar12 < (this->PropertyCollections).ArrayNum) {
        uVar14 = uVar11;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar17 = (TSharedPtr<FManagedArrayCollection,1> *)
                ((this_00->AllocatorInstance).Data + local_res8);
      uVar14 = 0;
      if ((int)uVar12 < (this->Properties).ArrayNum) {
        uVar14 = uVar11;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this_03->AllocatorInstance).Data + lVar15 * 8;
      if ((pTVar17->Object == (FManagedArrayCollection *)0x0) || (*(longlong *)pFVar2 == 0)) {
        pTVar8 = ::operator_new(0xc0);
        if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          pFVar13 = (FManagedArrayCollection *)&DAT_00000010;
          local_70[0].Object = pFVar4;
          local_70[0].SharedReferenceCount.ReferenceController = pTVar5;
        }
        else {
          pTVar8->SharedReferenceCount = (atomic<int>)0x1;
          pTVar8->WeakReferenceCount = (atomic<int>)0x1;
          pTVar8->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFManagedArrayCollection___00_SharedPointerInternals__6B_
          ;
          FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)(pTVar8 + 1));
          pFVar13 = (FManagedArrayCollection *)(pTVar8 + 1);
          if ((pFVar13 == (FManagedArrayCollection *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
          local_70[0].SharedReferenceCount.ReferenceController = pTVar8;
          local_70[0].Object = pFVar13;
        }
        if (pTVar17 != local_70) {
          pTVar17->Object = pFVar13;
          local_70[0].Object = (FManagedArrayCollection *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&pTVar17->SharedReferenceCount,&local_70[0].SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70[0].SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        pFVar9 = ::operator_new(0x118);
        if (pFVar9 == (FCollectionPropertyMutableFacade *)0x0) {
          this_02 = (FCollectionPropertyConstFacade *)0x0;
        }
        else {
          this_02 = (FCollectionPropertyConstFacade *)
                    Softs::FCollectionPropertyMutableFacade::FCollectionPropertyMutableFacade
                              (pFVar9,pTVar17);
        }
        if (pFVar2 == local_78) {
          if (this_02 != (FCollectionPropertyConstFacade *)0x0) {
            Softs::FCollectionPropertyConstFacade::~FCollectionPropertyConstFacade(this_02);
            goto LAB_14dc02ca5;
          }
        }
        else {
          this_01 = *(FCollectionPropertyConstFacade **)pFVar2;
          *(FCollectionPropertyConstFacade **)pFVar2 = this_02;
          if (this_01 != (FCollectionPropertyConstFacade *)0x0) {
            Softs::FCollectionPropertyConstFacade::~FCollectionPropertyConstFacade(this_01);
            this_02 = this_01;
LAB_14dc02ca5:
            ::operator_delete(this_02,0x118);
          }
        }
      }
      pFVar9 = *(FCollectionPropertyMutableFacade **)pFVar2;
      if ((*(longlong *)pFVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      Softs::FCollectionPropertyMutableFacade::Copy(pFVar9,*(FManagedArrayCollection **)pFVar16);
      local_res8 = local_res8 + 0x10;
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 1;
      iVar10 = param_1->ArrayNum;
    } while ((int)uVar12 < iVar10);
  }
  return;
}

// Initialize @ 14dc02d60

void __thiscall
Chaos::FClothingSimulationConfig::Initialize
          (FClothingSimulationConfig *this,UChaosClothConfig *param_1,
          UChaosClothSharedSimConfig *param_2,bool param_3)

{
  int *piVar1;
  TArray<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  EClothMassMode EVar4;
  EChaosSoftsSimulationSpace EVar5;
  FScriptContainerElement *pFVar6;
  FCollectionPropertyFacade *pFVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TSharedRef<FManagedArrayCollection,1> *pTVar13;
  FCollectionPropertyMutableFacade *this_00;
  FCollectionPropertyMutableFacade *pFVar14;
  FString *pFVar15;
  TSharedPtr<FManagedArrayCollection,1> *pTVar16;
  TVector<float> *pTVar17;
  TVector<float> *pTVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  FCollectionPropertyMutableFacade *local_2e8;
  FManagedArrayCollection *local_2e0;
  TReferenceControllerBase<1> *local_2d8;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  TVector<float>_u_0 local_250;
  TVector<float>_u_0 local_244;
  TVector<float>_u_0 local_238;
  TVector<float>_u_0 local_22c;
  TVector<float>_u_0 local_220;
  TVector<float>_u_0 local_214;
  TVector<float>_u_0 local_208;
  TVector<float>_u_0 local_1fc;
  TVector<float>_u_0 local_1f0;
  TVector<float>_u_0 local_1e4;
  TVector<float>_u_0 local_1d8;
  TVector<float>_u_0 local_1cc;
  TVector<float>_u_0 local_1c0;
  TVector<float>_u_0 local_1b4;
  TVector<float>_u_0 local_1a8;
  TVector<float>_u_0 local_19c;
  TVector<float>_u_0 local_190;
  TVector<float>_u_0 local_184;
  TVector<float>_u_0 local_178;
  TVector<float>_u_0 local_16c;
  TVector<float>_u_0 local_160;
  TVector<float>_u_0 local_154;
  TVector<float>_u_0 local_148;
  TVector<float>_u_0 local_13c;
  TVector<float>_u_0 local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  TSharedRef<FManagedArrayCollection,1> local_80;
  FString local_70 [3];
  
  piVar1 = &(this->PropertyCollections).ArrayMax;
  pTVar16 = (TSharedPtr<FManagedArrayCollection,1> *)
            (this->PropertyCollections).AllocatorInstance.Data;
  iVar11 = (this->PropertyCollections).ArrayNum;
  if ((this->PropertyCollections).ArrayMax < 1) {
    DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>(pTVar16,iVar11);
    (this->PropertyCollections).ArrayNum = 0;
    if (*piVar1 != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,&(this->PropertyCollections).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>(pTVar16,iVar11);
    (this->PropertyCollections).ArrayNum = 0;
  }
  pFVar14 = (FCollectionPropertyMutableFacade *)0x0;
  pFVar6 = (this->Properties).AllocatorInstance.Data;
  pTVar2 = &this->Properties;
  piVar3 = &(this->Properties).ArrayMax;
  iVar11 = (this->Properties).ArrayNum;
  if ((this->Properties).ArrayMax < 1) {
    DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
              ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                *)pFVar6,iVar11);
    (this->Properties).ArrayNum = 0;
    if (*piVar3 != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,&pTVar2->AllocatorInstance,0,piVar3);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
              ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                *)pFVar6,iVar11);
    (this->Properties).ArrayNum = 0;
  }
  this->bIsLegacySingleLOD = true;
  pTVar13 = MakeShared<FManagedArrayCollection,1>(&local_80);
  local_2e0 = pTVar13->Object;
  local_2d8 = (pTVar13->SharedReferenceCount).ReferenceController;
  if (local_2d8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2d8->SharedReferenceCount = (atomic<int>)((int)local_2d8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = (this->PropertyCollections).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_2e0) &&
      ((FScriptContainerElement *)&local_2e0 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar11 = (this->PropertyCollections).ArrayNum;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->PropertyCollections).AllocatorInstance,piVar1);
  }
  pFVar6 = (this->PropertyCollections).AllocatorInstance.Data;
  (this->PropertyCollections).ArrayNum = iVar11 + 1;
  pTVar16 = (TSharedPtr<FManagedArrayCollection,1> *)(pFVar6 + (longlong)iVar11 * 0x10);
  pTVar16->Object = local_2e0;
  (pTVar16->SharedReferenceCount).ReferenceController = local_2d8;
  local_2d8 = (TReferenceControllerBase<1> *)0x0;
  local_2e0 = (FManagedArrayCollection *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  this_00 = ::operator_new(0x118);
  if (this_00 != (FCollectionPropertyMutableFacade *)0x0) {
    pFVar14 = Softs::FCollectionPropertyMutableFacade::FCollectionPropertyMutableFacade
                        (this_00,pTVar16);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  local_2e8 = pFVar14;
  if (((pFVar6 <= (FScriptContainerElement *)&local_2e8) &&
      ((FScriptContainerElement *)&local_2e8 < pFVar6 + (longlong)*piVar3 * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar11 = (this->Properties).ArrayNum;
  if (iVar11 == *piVar3) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar3);
  }
  lVar19 = (longlong)iVar11;
  (this->Properties).ArrayNum = iVar11 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8) = local_2e8;
  local_2e8 = (FCollectionPropertyMutableFacade *)0x0;
  Softs::FCollectionPropertyMutableFacade::DefineSchema
            (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8));
  if (param_2 != (UChaosClothSharedSimConfig *)0x0) {
    pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (pFVar14,&FClothingSimulationSolver::NumIterationsName,
                        Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<int>
              ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_2->IterationCount,
               &param_2->IterationCount);
    pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (pFVar14,&FClothingSimulationSolver::MaxNumIterationsName,
                        Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<int>
              ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_2->MaxIterationCount,
               &param_2->MaxIterationCount);
    pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (pFVar14,&FClothingSimulationSolver::NumSubstepsName,
                        Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<int>
              ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_2->SubdivisionCount,
               &param_2->SubdivisionCount);
  }
  if (param_1 == (UChaosClothConfig *)0x0) goto LAB_14dc04736;
  EVar4 = param_1->MassMode;
  if (EVar4 == UniformMass) {
    fVar21 = param_1->UniformMass;
  }
  else if (EVar4 == TotalMass) {
    fVar21 = param_1->TotalMass;
  }
  else {
    fVar21 = param_1->Density;
  }
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::MassModeName,Intrinsic|Legacy|Enabled);
  fVar20 = (float)EVar4;
  local_190._s_0.X = fVar20;
  local_190._s_0.Y = fVar20;
  local_190._s_0.Z = fVar20;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x18,
             (TVector<float> *)&local_190._s_0);
  local_184._s_0.X = fVar20;
  local_184._s_0.Y = fVar20;
  local_184._s_0.Z = fVar20;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x28,
             (TVector<float> *)&local_184._s_0);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::MassValueName,Intrinsic|Legacy|Enabled);
  local_16c._s_0.X = fVar21;
  local_16c._s_0.Y = fVar21;
  local_16c._s_0.Z = fVar21;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x18,
             (TVector<float> *)&local_16c._s_0);
  local_160._s_0.X = fVar21;
  local_160._s_0.Y = fVar21;
  local_160._s_0.Z = fVar21;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x28,
             (TVector<float> *)&local_160._s_0);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::MinPerParticleMassName,
                      Intrinsic|Legacy|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->MinPerParticleMass,
             &param_1->MinPerParticleMass);
  if ((0.0 < (param_1->EdgeStiffnessWeighted).Low) || (0.0 < (param_1->EdgeStiffnessWeighted).High))
  {
    iVar12 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                        &Softs::FPBDEdgeSpringConstraints::EdgeSpringStiffnessName,
                        Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar12,
               &(param_1->EdgeStiffnessWeighted).Low,&(param_1->EdgeStiffnessWeighted).High);
    pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
    ::FString::FString(&local_2c0,L"EdgeStiffness");
    pFVar15 = TArrayView<FString,int>::operator[]
                        ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
    iVar11 = (pFVar15->Data).ArrayNum;
    if (iVar11 == local_2c0.Data.ArrayNum) {
      if (1 < iVar11) {
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                            (wchar_t *)local_2c0.Data.AllocatorInstance.Data);
        bVar10 = iVar11 == 0;
        goto LAB_14dc03251;
      }
    }
    else {
      bVar10 = iVar11 + local_2c0.Data.ArrayNum == 1;
LAB_14dc03251:
      if (!bVar10) {
        pFVar15 = TArrayView<FString,int>::operator[]
                            ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
        FVar9.Data = local_2c0.Data.AllocatorInstance.Data;
        if (pFVar15 != &local_2c0) {
          piVar1 = &(pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = local_2c0.Data.ArrayNum;
          if ((local_2c0.Data.ArrayNum == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_2c0.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar15,
                       local_2c0.Data.ArrayNum,piVar1);
            if (local_2c0.Data.ArrayNum != 0) {
              memcpy((pFVar15->Data).AllocatorInstance.Data,FVar9.Data,
                     (longlong)local_2c0.Data.ArrayNum * 2);
            }
          }
        }
        Softs::FCollectionPropertyFacade::EnableFlags(pFVar7,iVar12,StringDirty,true);
      }
    }
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
  }
  if (((0.0 < (param_1->BendingStiffnessWeighted).Low) ||
      (0.0 < (param_1->BendingStiffnessWeighted).High)) ||
     ((param_1->bUseBendingElements != false &&
      ((0.0 < (param_1->BucklingStiffnessWeighted).Low ||
       (0.0 < (param_1->BucklingStiffnessWeighted).High)))))) {
    if (param_1->bUseBendingElements == false) {
      iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                         (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                          &Softs::FPBDBendingSpringConstraints::BendingSpringStiffnessName,
                          Legacy|Animatable|Enabled);
      Softs::FCollectionPropertyFacade::SetWeightedValue<float>
                (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar11,
                 &(param_1->BendingStiffnessWeighted).Low,&(param_1->BendingStiffnessWeighted).High)
      ;
      pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
      ::FString::FString(&local_f0,L"BendingStiffness");
      Softs::FCollectionPropertyFacade::SetStringValue(pFVar7,iVar11,&local_f0);
      local_100.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
    }
    else {
      iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                         (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                          &Softs::FPBDBendingConstraints::BendingElementStiffnessName,
                          Legacy|Animatable|Enabled);
      Softs::FCollectionPropertyFacade::SetWeightedValue<float>
                (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar11,
                 &(param_1->BendingStiffnessWeighted).Low,&(param_1->BendingStiffnessWeighted).High)
      ;
      pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
      ::FString::FString(&local_120,L"BendingStiffness");
      Softs::FCollectionPropertyFacade::SetStringValue(pFVar7,iVar11,&local_120);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
      iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                         (pFVar14,&Softs::FPBDBendingConstraints::BucklingRatioName,
                          Legacy|Animatable|Enabled);
      Softs::FCollectionPropertyFacade::SetWeightedValue<float>
                ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->BucklingRatio,
                 &param_1->BucklingRatio);
      iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                         (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                          &Softs::FPBDBendingConstraints::BucklingStiffnessName,
                          Legacy|Animatable|Enabled);
      Softs::FCollectionPropertyFacade::SetWeightedValue<float>
                (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar11,
                 &(param_1->BucklingStiffnessWeighted).Low,
                 &(param_1->BucklingStiffnessWeighted).High);
      pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
      ::FString::FString(&local_110,L"BucklingStiffness");
      Softs::FCollectionPropertyFacade::SetStringValue(pFVar7,iVar11,&local_110);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                         (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                          &Softs::FPBDBendingConstraints::RestAngleTypeName,Legacy|Enabled);
      pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
      local_154._s_0.X = 1.0;
      local_154._s_0.Y = 1.0;
      local_154._s_0.Z = 1.0;
      Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                (pFVar7,iVar11,(TArrayView<UE::Math::TVector<float>,int> *)&pFVar7->field_0x18,
                 (TVector<float> *)&local_154._s_0);
      local_148._s_0.X = 1.0;
      local_148._s_0.Y = 1.0;
      local_148._s_0.Z = 1.0;
      Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                (pFVar7,iVar11,(TArrayView<UE::Math::TVector<float>,int> *)&pFVar7->field_0x28,
                 (TVector<float> *)&local_148._s_0);
      iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                         (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                          &Softs::FPBDBendingConstraints::FlatnessRatioName,Legacy|Enabled);
      Softs::FCollectionPropertyFacade::SetWeightedValue<float>
                (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar11,
                 &(param_1->FlatnessRatio).Low,&(param_1->FlatnessRatio).High);
      pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
      ::FString::FString(&local_100,L"FlatnessRatio");
      Softs::FCollectionPropertyFacade::SetStringValue(pFVar7,iVar11,&local_100);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  if ((0.0 < (param_1->AreaStiffnessWeighted).Low) || (0.0 < (param_1->AreaStiffnessWeighted).High))
  {
    iVar12 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                        &Softs::FPBDAreaSpringConstraints::AreaSpringStiffnessName,
                        Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar12,
               &(param_1->AreaStiffnessWeighted).Low,&(param_1->AreaStiffnessWeighted).High);
    pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
    ::FString::FString(&local_2d0,L"AreaStiffness");
    pFVar15 = TArrayView<FString,int>::operator[]
                        ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
    iVar11 = (pFVar15->Data).ArrayNum;
    if (iVar11 == local_2d0.Data.ArrayNum) {
      if (1 < iVar11) {
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                            (wchar_t *)local_2d0.Data.AllocatorInstance.Data);
        bVar10 = iVar11 == 0;
        goto LAB_14dc035d4;
      }
    }
    else {
      bVar10 = iVar11 + local_2d0.Data.ArrayNum == 1;
LAB_14dc035d4:
      if (!bVar10) {
        pFVar15 = TArrayView<FString,int>::operator[]
                            ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
        FVar9.Data = local_2d0.Data.AllocatorInstance.Data;
        if (pFVar15 != &local_2d0) {
          piVar1 = &(pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = local_2d0.Data.ArrayNum;
          if ((local_2d0.Data.ArrayNum == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_2d0.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar15,
                       local_2d0.Data.ArrayNum,piVar1);
            if (local_2d0.Data.ArrayNum != 0) {
              memcpy((pFVar15->Data).AllocatorInstance.Data,FVar9.Data,
                     (longlong)local_2d0.Data.ArrayNum * 2);
            }
          }
        }
        Softs::FCollectionPropertyFacade::EnableFlags(pFVar7,iVar12,StringDirty,true);
      }
    }
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
  }
  if ((0.0 < (param_1->TetherStiffness).Low) || (0.0 < (param_1->TetherStiffness).High)) {
    pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (pFVar14,&FClothingSimulationCloth::UseGeodesicTethersName,Legacy|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<bool>
              ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->bUseGeodesicDistance,
               &param_1->bUseGeodesicDistance);
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                        &Softs::FPBDLongRangeConstraints::TetherStiffnessName,
                        Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar11,
               &(param_1->TetherStiffness).Low,&(param_1->TetherStiffness).High);
    pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
    ::FString::FString(&local_e0,L"TetherStiffness");
    Softs::FCollectionPropertyFacade::SetStringValue(pFVar7,iVar11,&local_e0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                        &Softs::FPBDLongRangeConstraints::TetherScaleName,Legacy|Animatable|Enabled)
    ;
    Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar11,
               &(param_1->TetherScale).Low,&(param_1->TetherScale).High);
    pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
    ::FString::FString(&local_d0,L"TetherScale");
    Softs::FCollectionPropertyFacade::SetStringValue(pFVar7,iVar11,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  if ((0.0 < (param_1->AnimDriveStiffness).Low) || (0.0 < (param_1->AnimDriveStiffness).High)) {
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                        &Softs::FPBDAnimDriveConstraint::AnimDriveStiffnessName,
                        Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar11,
               &(param_1->AnimDriveStiffness).Low,&(param_1->AnimDriveStiffness).High);
    pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
    ::FString::FString(&local_c0,L"AnimDriveStiffness");
    Softs::FCollectionPropertyFacade::SetStringValue(pFVar7,iVar11,&local_c0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                        &Softs::FPBDAnimDriveConstraint::AnimDriveDampingName,
                        Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar11,
               &(param_1->AnimDriveDamping).Low,&(param_1->AnimDriveDamping).High);
    pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
    ::FString::FString(&local_b0,L"AnimDriveDamping");
    Softs::FCollectionPropertyFacade::SetStringValue(pFVar7,iVar11,&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::GravityScaleName,Legacy|Animatable|Enabled)
  ;
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->GravityScale,
             &param_1->GravityScale);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::UseGravityOverrideName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<bool>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->bUseGravityOverride,
             &param_1->bUseGravityOverride);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  local_250._s_0.X = (float)(param_1->Gravity).field0_0x0._s_0.X;
  local_250._s_0.Y = (float)(param_1->Gravity).field0_0x0._s_0.Y;
  local_250._s_0.Z = (float)(param_1->Gravity).field0_0x0._s_0.Z;
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::GravityOverrideName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,(TVector<float> *)&local_250._s_0,
             (TVector<float> *)&local_250._s_0);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  EVar5 = param_1->VelocityScaleSpace;
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::VelocityScaleSpaceName,
                      Legacy|Animatable|Enabled);
  fVar21 = (float)EVar5;
  local_13c._s_0.X = fVar21;
  local_13c._s_0.Y = fVar21;
  local_13c._s_0.Z = fVar21;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x18,
             (TVector<float> *)&local_13c._s_0);
  local_130._s_0.X = fVar21;
  local_130._s_0.Y = fVar21;
  local_130._s_0.Z = fVar21;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x28,
             (TVector<float> *)&local_130._s_0);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  local_244._s_0.X = (float)(param_1->LinearVelocityScale).field0_0x0._s_0.X;
  local_244._s_0.Y = (float)(param_1->LinearVelocityScale).field0_0x0._s_0.Y;
  local_244._s_0.Z = (float)(param_1->LinearVelocityScale).field0_0x0._s_0.Z;
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::LinearVelocityScaleName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,(TVector<float> *)&local_244._s_0,
             (TVector<float> *)&local_244._s_0);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::AngularVelocityScaleName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->AngularVelocityScale,
             &param_1->AngularVelocityScale);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::FictitiousAngularScaleName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->FictitiousAngularScale,
             &param_1->FictitiousAngularScale);
  pTVar17 = &DefaultLinearClamp;
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  pTVar18 = &param_1->MaxLinearVelocity;
  if (param_1->bEnableLinearVelocityClamping == false) {
    pTVar18 = &DefaultLinearClamp;
  }
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::MaxLinearVelocityName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,pTVar18,pTVar18);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  if (param_1->bEnableLinearAccelerationClamping != false) {
    pTVar17 = &param_1->MaxLinearAcceleration;
  }
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::MaxLinearAccelerationName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,pTVar17,pTVar17);
  fVar21 = __real_7f7fffff;
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  local_220._s_0.X = __real_7f7fffff;
  if (param_1->bEnableAngularVelocityClamping != false) {
    local_220._s_0.X = param_1->MaxAngularVelocity;
  }
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::MaxAngularVelocityName,
                      Legacy|Animatable|Enabled);
  local_22c._s_0.X = local_220._s_0.X;
  local_22c._s_0.Y = local_220._s_0.X;
  local_22c._s_0.Z = local_220._s_0.X;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x18,
             (TVector<float> *)&local_22c._s_0);
  local_220._s_0.Y = local_220._s_0.X;
  local_220._s_0.Z = local_220._s_0.X;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x28,
             (TVector<float> *)&local_220._s_0);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  if (param_1->bEnableAngularAccelerationClamping != false) {
    fVar21 = param_1->MaxAngularAcceleration;
  }
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::MaxAngularAccelerationName,
                      Legacy|Animatable|Enabled);
  local_214._s_0.X = fVar21;
  local_214._s_0.Y = fVar21;
  local_214._s_0.Z = fVar21;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x18,
             (TVector<float> *)&local_214._s_0);
  local_208._s_0.X = fVar21;
  local_208._s_0.Y = fVar21;
  local_208._s_0.Z = fVar21;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x28,
             (TVector<float> *)&local_208._s_0);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::UsePointBasedWindModelName,Legacy|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<bool>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->bUsePointBasedWindModel,
             &param_1->bUsePointBasedWindModel);
  iVar12 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                      &Softs::FVelocityAndPressureField::DragName,Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar12,&(param_1->Drag).Low,
             &(param_1->Drag).High);
  pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
  ::FString::FString(&local_2b0,L"Drag");
  pFVar15 = TArrayView<FString,int>::operator[]
                      ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
  iVar11 = (pFVar15->Data).ArrayNum;
  if (iVar11 == local_2b0.Data.ArrayNum) {
    if (1 < iVar11) {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                          (wchar_t *)local_2b0.Data.AllocatorInstance.Data);
      bVar10 = iVar11 == 0;
      goto LAB_14dc03c63;
    }
  }
  else {
    bVar10 = iVar11 + local_2b0.Data.ArrayNum == 1;
LAB_14dc03c63:
    if (!bVar10) {
      pFVar15 = TArrayView<FString,int>::operator[]
                          ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
      FVar9.Data = local_2b0.Data.AllocatorInstance.Data;
      if (pFVar15 != &local_2b0) {
        piVar1 = &(pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = local_2b0.Data.ArrayNum;
        if ((local_2b0.Data.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_2b0.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar15,
                     local_2b0.Data.ArrayNum,piVar1);
          if (local_2b0.Data.ArrayNum != 0) {
            memcpy((pFVar15->Data).AllocatorInstance.Data,FVar9.Data,
                   (longlong)local_2b0.Data.ArrayNum * 2);
          }
        }
      }
      Softs::FCollectionPropertyFacade::EnableFlags(pFVar7,iVar12,StringDirty,true);
    }
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (param_1->bEnableOuterDrag != false) {
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                        &Softs::FVelocityAndPressureField::OuterDragName,Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar11,&(param_1->OuterDrag).Low
               ,&(param_1->OuterDrag).High);
    pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
    ::FString::FString(&local_a0,L"OuterDrag");
    Softs::FCollectionPropertyFacade::SetStringValue(pFVar7,iVar11,&local_a0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  iVar12 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                      &Softs::FVelocityAndPressureField::LiftName,Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar12,&(param_1->Lift).Low,
             &(param_1->Lift).High);
  pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
  ::FString::FString(&local_2a0,L"Lift");
  pFVar15 = TArrayView<FString,int>::operator[]
                      ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
  iVar11 = (pFVar15->Data).ArrayNum;
  if (iVar11 == local_2a0.Data.ArrayNum) {
    if (1 < iVar11) {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                          (wchar_t *)local_2a0.Data.AllocatorInstance.Data);
      bVar10 = iVar11 == 0;
      goto LAB_14dc03ded;
    }
  }
  else {
    bVar10 = iVar11 + local_2a0.Data.ArrayNum == 1;
LAB_14dc03ded:
    if (!bVar10) {
      pFVar15 = TArrayView<FString,int>::operator[]
                          ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
      FVar9.Data = local_2a0.Data.AllocatorInstance.Data;
      if (pFVar15 != &local_2a0) {
        piVar1 = &(pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = local_2a0.Data.ArrayNum;
        if ((local_2a0.Data.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_2a0.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar15,
                     local_2a0.Data.ArrayNum,piVar1);
          if (local_2a0.Data.ArrayNum != 0) {
            memcpy((pFVar15->Data).AllocatorInstance.Data,FVar9.Data,
                   (longlong)local_2a0.Data.ArrayNum * 2);
          }
        }
      }
      Softs::FCollectionPropertyFacade::EnableFlags(pFVar7,iVar12,StringDirty,true);
    }
  }
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  if (param_1->bEnableOuterLift != false) {
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                        &Softs::FVelocityAndPressureField::OuterLiftName,Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar11,&(param_1->OuterLift).Low
               ,&(param_1->OuterLift).High);
    pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
    ::FString::FString(&local_90,L"OuterLift");
    Softs::FCollectionPropertyFacade::SetStringValue(pFVar7,iVar11,&local_90);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&Softs::FVelocityAndPressureField::FluidDensityName,
                      Legacy|Animatable|Enabled);
  local_1fc._s_0.X = 1.225;
  local_1fc._s_0.Y = 1.225;
  local_1fc._s_0.Z = 1.225;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x18,
             (TVector<float> *)&local_1fc._s_0);
  local_1f0._s_0.X = 1.225;
  local_1f0._s_0.Y = 1.225;
  local_1f0._s_0.Z = 1.225;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x28,
             (TVector<float> *)&local_1f0._s_0);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  local_238._0_8_ = 0;
  local_238._s_0.Z = 0.0;
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&Softs::FVelocityAndPressureField::WindVelocityName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,(TVector<float> *)&local_238._s_0,
             (TVector<float> *)&local_238);
  iVar12 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                      &Softs::FVelocityAndPressureField::PressureName,Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            (*(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8),iVar12,&(param_1->Pressure).Low,
             &(param_1->Pressure).High);
  pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
  ::FString::FString(&local_290,L"Pressure");
  pFVar15 = TArrayView<FString,int>::operator[]
                      ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
  iVar11 = (pFVar15->Data).ArrayNum;
  if (iVar11 == local_290.Data.ArrayNum) {
    if (1 < iVar11) {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                          (wchar_t *)local_290.Data.AllocatorInstance.Data);
      bVar10 = iVar11 == 0;
      goto LAB_14dc04014;
    }
  }
  else {
    bVar10 = iVar11 + local_290.Data.ArrayNum == 1;
LAB_14dc04014:
    if (!bVar10) {
      pFVar15 = TArrayView<FString,int>::operator[]
                          ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
      FVar9.Data = local_290.Data.AllocatorInstance.Data;
      if (pFVar15 != &local_290) {
        piVar1 = &(pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = local_290.Data.ArrayNum;
        if ((local_290.Data.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_290.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar15,
                     local_290.Data.ArrayNum,piVar1);
          if (local_290.Data.ArrayNum != 0) {
            memcpy((pFVar15->Data).AllocatorInstance.Data,FVar9.Data,
                   (longlong)local_290.Data.ArrayNum * 2);
          }
        }
      }
      Softs::FCollectionPropertyFacade::EnableFlags(pFVar7,iVar12,StringDirty,true);
    }
  }
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::DampingCoefficientName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->DampingCoefficient,
             &param_1->DampingCoefficient);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::LocalDampingCoefficientName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->LocalDampingCoefficient,
             &param_1->LocalDampingCoefficient);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::CollisionThicknessName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->CollisionThickness,
             &param_1->CollisionThickness);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::FrictionCoefficientName,
                      Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->FrictionCoefficient,
             &param_1->FrictionCoefficient);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&FClothingSimulationCloth::UseCCDName,Legacy|Animatable|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<bool>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->bUseCCD,&param_1->bUseCCD);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&Softs::FPBDCollisionSpringConstraints::UseSelfCollisionsName,
                      Legacy|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<bool>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->bUseSelfCollisions,
             &param_1->bUseSelfCollisions);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&Softs::FPBDCollisionSpringConstraints::SelfCollisionThicknessName,
                      Legacy|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->SelfCollisionThickness,
             &param_1->SelfCollisionThickness);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&Softs::FPBDTriangleMeshCollisions::UseSelfIntersectionsName,
                      Legacy|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<bool>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->bUseSelfIntersections,
             &param_1->bUseSelfIntersections);
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&Softs::FPBDCollisionSpringConstraints::SelfCollisionFrictionName,
                      Legacy|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<float>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->SelfCollisionFriction,
             &param_1->SelfCollisionFriction);
  if (param_1->bUseSelfCollisionSpheres != false) {
    pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (pFVar14,&Softs::FPBDSelfCollisionSphereConstraints::
                                 SelfCollisionSphereRadiusName,Legacy|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->SelfCollisionSphereRadius,
               &param_1->SelfCollisionSphereRadius);
    pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
    iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                       (pFVar14,&Softs::FPBDSelfCollisionSphereConstraints::
                                 SelfCollisionSphereStiffnessName,Legacy|Animatable|Enabled);
    Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->SelfCollisionSphereStiffness,
               &param_1->SelfCollisionSphereStiffness);
    pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
    pFVar15 = ::FName::ToString(&Softs::FPBDSelfCollisionSphereConstraints::
                                 SelfCollisionSphereSetNameName,local_70);
    Softs::FCollectionPropertyMutableFacade::AddStringValue
              (pFVar14,&Softs::FPBDSelfCollisionSphereConstraints::SelfCollisionSphereSetNameName,
               pFVar15,Legacy|Enabled);
    if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
    }
  }
  iVar12 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                      &Softs::FPBDSphericalConstraint::MaxDistanceName,Legacy|Animatable|Enabled);
  pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
  local_1b4._0_8_ = 0;
  local_1b4._s_0.Z = 0.0;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            (pFVar7,iVar12,(TArrayView<UE::Math::TVector<float>,int> *)&pFVar7->field_0x18,
             (TVector<float> *)&local_1b4._s_0);
  local_1e4._s_0.X = 1.0;
  local_1e4._s_0.Y = 1.0;
  local_1e4._s_0.Z = 1.0;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            (pFVar7,iVar12,(TArrayView<UE::Math::TVector<float>,int> *)&pFVar7->field_0x28,
             (TVector<float> *)&local_1e4._s_0);
  pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
  ::FString::FString(&local_280,L"MaxDistance");
  pFVar15 = TArrayView<FString,int>::operator[]
                      ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
  iVar11 = (pFVar15->Data).ArrayNum;
  if (iVar11 == local_280.Data.ArrayNum) {
    if (1 < iVar11) {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                          (wchar_t *)local_280.Data.AllocatorInstance.Data);
      bVar10 = iVar11 == 0;
      goto LAB_14dc043b4;
    }
  }
  else {
    bVar10 = iVar11 + local_280.Data.ArrayNum == 1;
LAB_14dc043b4:
    if (!bVar10) {
      pFVar15 = TArrayView<FString,int>::operator[]
                          ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
      FVar9.Data = local_280.Data.AllocatorInstance.Data;
      if (pFVar15 != &local_280) {
        piVar1 = &(pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = local_280.Data.ArrayNum;
        if ((local_280.Data.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_280.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar15,
                     local_280.Data.ArrayNum,piVar1);
          if (local_280.Data.ArrayNum != 0) {
            memcpy((pFVar15->Data).AllocatorInstance.Data,FVar9.Data,
                   (longlong)local_280.Data.ArrayNum * 2);
          }
        }
      }
      Softs::FCollectionPropertyFacade::EnableFlags(pFVar7,iVar12,StringDirty,true);
    }
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  iVar12 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                      &Softs::FPBDSphericalBackstopConstraint::BackstopDistanceName,
                      Legacy|Animatable|Enabled);
  pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
  local_1d8._0_8_ = 0;
  local_1d8._s_0.Z = 0.0;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            (pFVar7,iVar12,(TArrayView<UE::Math::TVector<float>,int> *)&pFVar7->field_0x18,
             (TVector<float> *)&local_1d8._s_0);
  local_1cc._s_0.X = 1.0;
  local_1cc._s_0.Y = 1.0;
  local_1cc._s_0.Z = 1.0;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            (pFVar7,iVar12,(TArrayView<UE::Math::TVector<float>,int> *)&pFVar7->field_0x28,
             (TVector<float> *)&local_1cc._s_0);
  pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
  ::FString::FString(&local_270,L"BackstopDistance");
  pFVar15 = TArrayView<FString,int>::operator[]
                      ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
  iVar11 = (pFVar15->Data).ArrayNum;
  if (iVar11 == local_270.Data.ArrayNum) {
    if (1 < iVar11) {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                          (wchar_t *)local_270.Data.AllocatorInstance.Data);
      bVar10 = iVar11 == 0;
      goto LAB_14dc04506;
    }
  }
  else {
    bVar10 = iVar11 + local_270.Data.ArrayNum == 1;
LAB_14dc04506:
    if (!bVar10) {
      pFVar15 = TArrayView<FString,int>::operator[]
                          ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
      FVar9.Data = local_270.Data.AllocatorInstance.Data;
      if (pFVar15 != &local_270) {
        piVar1 = &(pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = local_270.Data.ArrayNum;
        if ((local_270.Data.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_270.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar15,
                     local_270.Data.ArrayNum,piVar1);
          if (local_270.Data.ArrayNum != 0) {
            memcpy((pFVar15->Data).AllocatorInstance.Data,FVar9.Data,
                   (longlong)local_270.Data.ArrayNum * 2);
          }
        }
      }
      Softs::FCollectionPropertyFacade::EnableFlags(pFVar7,iVar12,StringDirty,true);
    }
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  iVar12 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (*(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8),
                      &Softs::FPBDSphericalBackstopConstraint::BackstopRadiusName,
                      Legacy|Animatable|Enabled);
  pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
  local_1c0._0_8_ = 0;
  local_1c0._s_0.Z = 0.0;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            (pFVar7,iVar12,(TArrayView<UE::Math::TVector<float>,int> *)&pFVar7->field_0x18,
             (TVector<float> *)&local_1c0._s_0);
  local_178._s_0.X = 1.0;
  local_178._s_0.Y = 1.0;
  local_178._s_0.Z = 1.0;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            (pFVar7,iVar12,(TArrayView<UE::Math::TVector<float>,int> *)&pFVar7->field_0x28,
             (TVector<float> *)&local_178._s_0);
  pFVar7 = *(FCollectionPropertyFacade **)(pFVar6 + lVar19 * 8);
  ::FString::FString(&local_260,L"BackstopRadius");
  pFVar15 = TArrayView<FString,int>::operator[]
                      ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
  iVar11 = (pFVar15->Data).ArrayNum;
  if (iVar11 == local_260.Data.ArrayNum) {
    if (1 < iVar11) {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                          (wchar_t *)local_260.Data.AllocatorInstance.Data);
      bVar10 = iVar11 == 0;
      goto LAB_14dc04667;
    }
  }
  else {
    bVar10 = iVar11 + local_260.Data.ArrayNum == 1;
LAB_14dc04667:
    if (!bVar10) {
      pFVar15 = TArrayView<FString,int>::operator[]
                          ((TArrayView<FString,int> *)&pFVar7->field_0x38,iVar12);
      FVar9.Data = local_260.Data.AllocatorInstance.Data;
      if (pFVar15 != &local_260) {
        piVar1 = &(pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = local_260.Data.ArrayNum;
        if ((local_260.Data.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_260.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar15,
                     local_260.Data.ArrayNum,piVar1);
          if (local_260.Data.ArrayNum != 0) {
            memcpy((pFVar15->Data).AllocatorInstance.Data,FVar9.Data,
                   (longlong)local_260.Data.ArrayNum * 2);
          }
        }
      }
      Softs::FCollectionPropertyFacade::EnableFlags(pFVar7,iVar12,StringDirty,true);
    }
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&Softs::FPBDSphericalBackstopConstraint::UseLegacyBackstopName,
                      Legacy|Enabled);
  Softs::FCollectionPropertyFacade::SetWeightedValue<bool>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,&param_1->bUseLegacyBackstop,
             &param_1->bUseLegacyBackstop);
LAB_14dc04736:
  pFVar14 = *(FCollectionPropertyMutableFacade **)(pFVar6 + lVar19 * 8);
  iVar11 = Softs::FCollectionPropertyMutableFacade::AddProperty
                     (pFVar14,&UseLegacyConfigName,Legacy|Enabled);
  fVar21 = (float)param_3;
  local_1a8._s_0.X = fVar21;
  local_1a8._s_0.Y = fVar21;
  local_1a8._s_0.Z = fVar21;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x18,
             (TVector<float> *)&local_1a8._s_0);
  local_19c._s_0.X = fVar21;
  local_19c._s_0.Y = fVar21;
  local_19c._s_0.Z = fVar21;
  Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)pFVar14,iVar11,
             (TArrayView<UE::Math::TVector<float>,int> *)&pFVar14->field_0x28,
             (TVector<float> *)&local_19c._s_0);
  return;
}

// operator() @ 15058aaa0

bool __thiscall
`Chaos::FClothingSimulationConfig::GetProperties'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7860359849027043271>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7860359849027043271>,
                       &`public:___cdecl_`public:_class_Chaos::Softs::FCollectionPropertyFacade&___ptr64___cdecl_Chaos::FClothingSimulationConfig::GetProperties(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

