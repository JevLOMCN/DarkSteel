// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 13

// FEasyParticleGroupState @ 14ac8ecd0

FEasyParticleGroupState * __thiscall
FEasyParticleGroupState::FEasyParticleGroupState(FEasyParticleGroupState *this)

{
  (this->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Emitters).ArrayNum = 0;
  (this->Emitters).ArrayMax = 0;
  return this;
}

// ~FEasyParticleGroupState @ 14ac90ab0

void __thiscall FEasyParticleGroupState::~FEasyParticleGroupState(FEasyParticleGroupState *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleRootState *pFVar3;
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Emitters).AllocatorInstance.Data;
  iVar1 = (this->Emitters).ArrayNum;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    pFVar3 = *(FEasyParticleRootState **)pFVar5;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 != (FEasyParticleRootState *)0x0) {
      pFVar4 = FUIParticleFactory::m_Instance;
      if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
        this_00 = ::operator_new(0x30);
        pFVar4 = (FUIParticleFactory *)0x0;
        if (this_00 != (FUIParticleFactory *)0x0) {
          pFVar4 = FUIParticleFactory::FUIParticleFactory(this_00);
        }
      }
      FUIParticleFactory::m_Instance = pFVar4;
      FUIParticleFactory::ClearChildren(FUIParticleFactory::m_Instance,pFVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar5 = pFVar5 + 0x10;
  }
  DestructItems<TSharedPtr<FEasyParticleRootState,1>,int>
            ((TSharedPtr<FEasyParticleRootState,1> *)(this->Emitters).AllocatorInstance.Data,
             (this->Emitters).ArrayNum);
  pFVar5 = (this->Emitters).AllocatorInstance.Data;
  if (pFVar5 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar5);
  return;
}

// FirstTick @ 14ac96e20

void __thiscall
FEasyParticleGroupState::FirstTick(FEasyParticleGroupState *this,float param_1,FGeometry *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleRootState *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->FirstRootTick = false;
  iVar1 = (this->Emitters).ArrayNum;
  pFVar3 = (this->Emitters).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar3 + 8);
    this_00 = *(FEasyParticleRootState **)pFVar3;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FEasyParticleRootState *)0x0) {
      FEasyParticleRootState::FirstTick(this_00,param_1,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

// GetParticleCount @ 14ac98660

int __thiscall FEasyParticleGroupState::GetParticleCount(FEasyParticleGroupState *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleState *this_00;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Emitters).ArrayNum;
  iVar6 = 0;
  pFVar4 = (this->Emitters).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    this_00 = *(FEasyParticleState **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FEasyParticleState *)0x0) {
      iVar3 = FEasyParticleState::GetChildrenParticleCount(this_00);
      iVar6 = iVar6 + iVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  return iVar6;
}

// GetParticleCountInPool @ 14ac987c0

int __thiscall FEasyParticleGroupState::GetParticleCountInPool(FEasyParticleGroupState *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleState *this_00;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Emitters).ArrayNum;
  iVar6 = 0;
  pFVar4 = (this->Emitters).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    this_00 = *(FEasyParticleState **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FEasyParticleState *)0x0) {
      iVar3 = FEasyParticleState::GetChildrenParticleCountInPool(this_00);
      iVar6 = iVar6 + iVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  return iVar6;
}

// InitWithAsset @ 14ac9a120

void __thiscall
FEasyParticleGroupState::InitWithAsset(FEasyParticleGroupState *this,UUIParticleAsset *param_1)

{
  int *piVar1;
  UUIParticleEmitterAsset *pUVar2;
  int iVar3;
  TSharedPtr<FEasyParticleRootState,1> *pTVar4;
  code *pcVar5;
  float fVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  int iVar9;
  FEasyParticleRootState *pFVar10;
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulong64 uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res18 [8];
  uint local_res20;
  TSharedPtr<FEasyParticleRootState,1> local_d8;
  TSharedPtr<FEasyParticleRootState,1> local_c8;
  longlong local_b8;
  TRawPtrProxy<FEasyParticleRootState> local_b0;
  TRawPtrProxy<FEasyParticleRootState> local_a8;
  FScriptContainerElement *local_a0;
  TSharedPtr<FEasyParticleRootState,1> local_98;
  TSharedPtr<FEasyParticleRootState,1> local_88;
  undefined8 local_78;
  TReferenceControllerBase<1> *pTStack_70;
  UUIParticleEmitterAsset *local_58;
  
  if (param_1 != (UUIParticleAsset *)0x0) {
    local_res20 = (param_1->Emitters).ArrayNum;
    uVar14 = (ulonglong)(int)local_res20;
    uVar17 = 0;
    pFVar18 = (param_1->Emitters).AllocatorInstance.Data;
    lVar15 = 0;
    local_b8 = 0;
    pFVar13 = pFVar18 + uVar14 * 0x18;
    local_a0 = pFVar13;
    while( true ) {
      if ((param_1->Emitters).ArrayNum != (int)uVar14) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FUIParticleEmitterInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      uVar16 = (uint)uVar17;
      if (pFVar18 == pFVar13) break;
      pUVar2 = *(UUIParticleEmitterAsset **)(pFVar18 + 0x10);
      fVar6 = *(float *)(pFVar18 + 4);
      iVar3 = *(int *)(pFVar18 + 8);
      local_58 = pUVar2;
      if ((pUVar2 != (UUIParticleEmitterAsset *)0x0) && ((char)*(undefined4 *)pFVar18 == '\0')) {
        if ((int)uVar16 < (this->Emitters).ArrayNum) {
          if (((int)uVar16 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar13 = (this->Emitters).AllocatorInstance.Data;
          local_c8.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(pFVar13 + lVar15 + 8);
          pFVar10 = *(FEasyParticleRootState **)(pFVar13 + lVar15);
          if (local_c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_c8.Object = pFVar10;
          if (pFVar10 == (FEasyParticleRootState *)0x0) {
            pFVar10 = ::operator_new(0x420);
            if (pFVar10 == (FEasyParticleRootState *)0x0) {
              pFVar10 = (FEasyParticleRootState *)0x0;
            }
            else {
              FEasyParticleState::FEasyParticleState((FEasyParticleState *)pFVar10);
              pFVar10->FirstRootTick = false;
              *(undefined ***)pFVar10 = &___7FEasyParticleRootState__6B_;
              pFVar10->field_0x3d8 = true;
            }
            local_b0.Object = pFVar10;
            TSharedPtr<FEasyParticleRootState,1>::operator=<FEasyParticleRootState>
                      (&local_c8,&local_b0);
            pFVar11 = FUIParticleFactory::m_Instance;
            if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
              this_00 = ::operator_new(0x30);
              pFVar11 = (FUIParticleFactory *)0x0;
              if (this_00 != (FUIParticleFactory *)0x0) {
                pFVar11 = FUIParticleFactory::FUIParticleFactory(this_00);
              }
            }
            FUIParticleFactory::m_Instance = pFVar11;
            FVar7.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
            pFVar11 = FUIParticleFactory::m_Instance;
            local_98.Object = local_c8.Object;
            local_98.SharedReferenceCount.ReferenceController =
                 local_c8.SharedReferenceCount.ReferenceController;
            if (local_c8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            if (local_c8.Object != (FEasyParticleRootState *)0x0) {
              TArray<TSharedPtr<FEasyParticleRootState,1>,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<TSharedPtr<FEasyParticleRootState,1>_const_&>
                        (&pFVar11->ParticleRefArray,&local_98);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_98.SharedReferenceCount.ReferenceController);
            uVar12 = 0;
            if ((int)uVar16 < (this->Emitters).ArrayNum) {
              uVar12 = ~uVar16 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar13 = (this->Emitters).AllocatorInstance.Data;
            if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar7.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_78 = *(undefined8 *)(pFVar13 + lVar15);
            pTStack_70 = *(TReferenceControllerBase<1> **)(pFVar13 + lVar15 + 8);
            *(FEasyParticleRootState **)(pFVar13 + lVar15) = local_c8.Object;
            *(TReferenceControllerBase<1> **)(pFVar13 + lVar15 + 8) = FVar7.ReferenceController;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_70);
            pFVar10 = local_c8.Object;
            if ((local_c8.Object == (FEasyParticleRootState *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          FEasyParticleRootState::InitRoot(pFVar10,pUVar2,fVar6,iVar3);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8.SharedReferenceCount.ReferenceController);
        }
        else {
          pFVar10 = ::operator_new(0x420);
          if (pFVar10 == (FEasyParticleRootState *)0x0) {
            pFVar10 = (FEasyParticleRootState *)0x0;
          }
          else {
            FEasyParticleState::FEasyParticleState((FEasyParticleState *)pFVar10);
            *(undefined ***)pFVar10 = &___7FEasyParticleRootState__6B_;
            pFVar10->FirstRootTick = false;
            pFVar10->field_0x3d8 = true;
          }
          local_a8.Object = pFVar10;
          TSharedPtr<FEasyParticleRootState,1>::
          TSharedPtr<FEasyParticleRootState,1><FEasyParticleRootState>(&local_d8,&local_a8);
          pTVar4 = (TSharedPtr<FEasyParticleRootState,1> *)(this->Emitters).AllocatorInstance.Data;
          if (((pTVar4 <= &local_d8) && (&local_d8 < pTVar4 + (this->Emitters).ArrayMax)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (this->Emitters).ArrayNum;
          piVar1 = &(this->Emitters).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)this,piVar1);
          }
          (this->Emitters).ArrayNum = iVar9 + 1;
          pFVar13 = (this->Emitters).AllocatorInstance.Data;
          *(FEasyParticleRootState **)(pFVar13 + (longlong)iVar9 * 0x10) = local_d8.Object;
          *(TReferenceControllerBase<1> **)(pFVar13 + (longlong)iVar9 * 0x10 + 8) =
               local_d8.SharedReferenceCount.ReferenceController;
          if (local_d8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
            pFVar11 = ::operator_new(0x30);
            if (pFVar11 == (FUIParticleFactory *)0x0) {
              FUIParticleFactory::m_Instance = (FUIParticleFactory *)0x0;
            }
            else {
              FUIParticleFactory::m_Instance = FUIParticleFactory::FUIParticleFactory(pFVar11);
            }
          }
          pFVar11 = FUIParticleFactory::m_Instance;
          local_88.Object = local_d8.Object;
          local_88.SharedReferenceCount.ReferenceController =
               local_d8.SharedReferenceCount.ReferenceController;
          if (local_d8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          if (local_d8.Object != (FEasyParticleRootState *)0x0) {
            TArray<TSharedPtr<FEasyParticleRootState,1>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TSharedPtr<FEasyParticleRootState,1>_const_&>
                      (&pFVar11->ParticleRefArray,&local_88);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          if ((local_d8.Object == (FEasyParticleRootState *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FEasyParticleRootState::InitRoot(local_d8.Object,pUVar2,fVar6,iVar3);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
        }
        local_b8 = local_b8 + 1;
        uVar17 = (ulong64)(uVar16 + 1);
        lVar15 = lVar15 + 0x10;
        pFVar13 = local_a0;
      }
      pFVar18 = pFVar18 + 0x18;
      uVar14 = (ulonglong)local_res20;
    }
    iVar3 = (this->Emitters).ArrayNum;
    piVar1 = &(this->Emitters).ArrayNum;
    if (iVar3 < (int)uVar16) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,uVar16 - iVar3,(ForAnyElementType *)this,piVar1,
                         &(this->Emitters).ArrayMax);
      memset((this->Emitters).AllocatorInstance.Data + (longlong)iVar9 * 0x10,0,
             (longlong)(int)(uVar16 - iVar3) << 4);
    }
    else {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar17);
      }
      if ((int)uVar16 < iVar3) {
        uVar12 = iVar3 - uVar16;
        if (((int)(uVar12 | uVar16) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar12 != 0) {
          TArray<TSharedPtr<FEasyParticleRootState,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&this->Emitters,uVar16,uVar12);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)this,*piVar1,&(this->Emitters).ArrayMax);
        }
      }
    }
  }
  return;
}

// IsEnd @ 14ac9b4d0

bool __thiscall FEasyParticleGroupState::IsEnd(FEasyParticleGroupState *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleState *this_00;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar4 = (this->Emitters).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      return true;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    this_00 = *(FEasyParticleState **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 != (FEasyParticleState *)0x0) &&
       ((bVar3 = FEasyParticleState::IsEmitterEnd(this_00), !bVar3 ||
        (bVar3 = FEasyParticleState::IsAllChildrenEnd(this_00), !bVar3)))) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return false;
}

// OnPaint @ 14ac9b7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEasyParticleGroupState::OnPaint
          (FEasyParticleGroupState *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleRootState *pFVar3;
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FPaintArgs *local_res10;
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar5 = (this->Emitters).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  local_res10 = param_1;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    pFVar3 = *(FEasyParticleRootState **)pFVar5;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 != (FEasyParticleRootState *)0x0) {
      pFVar4 = FUIParticleFactory::m_Instance;
      if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
        this_00 = ::operator_new(0x30);
        pFVar4 = (FUIParticleFactory *)0x0;
        if (this_00 != (FUIParticleFactory *)0x0) {
          pFVar4 = FUIParticleFactory::FUIParticleFactory(this_00);
        }
      }
      FUIParticleFactory::m_Instance = pFVar4;
      FUIParticleFactory::OnRootPaint
                (FUIParticleFactory::m_Instance,pFVar3,local_res10,param_2,param_3,param_4,param_5,
                 param_6,param_7);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// Play @ 14ac9d890

bool __thiscall FEasyParticleGroupState::Play(FEasyParticleGroupState *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleRootState *this_00;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->FirstRootTick = true;
  bVar4 = false;
  iVar1 = (this->Emitters).ArrayNum;
  pFVar3 = (this->Emitters).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar3 + 8);
    this_00 = *(FEasyParticleRootState **)pFVar3;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FEasyParticleRootState *)0x0) {
      FEasyParticleRootState::ResetRoot(this_00);
      bVar4 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar3 = pFVar3 + 0x10;
  }
  return bVar4;
}

// Stop @ 14aca0470

void __thiscall FEasyParticleGroupState::Stop(FEasyParticleGroupState *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleRootState *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar3 = (this->Emitters).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar3 + 8);
    this_00 = *(FEasyParticleRootState **)pFVar3;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FEasyParticleRootState *)0x0) {
      FEasyParticleRootState::ResetRoot(this_00);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

// StopEmit @ 14aca0770

void __thiscall FEasyParticleGroupState::StopEmit(FEasyParticleGroupState *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar4 = (this->Emitters).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    lVar3 = *(longlong *)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x3d9) = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// Tick @ 14aca0980

void __thiscall
FEasyParticleGroupState::Tick(FEasyParticleGroupState *this,float param_1,FGeometry *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleRootState *pFVar3;
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar5 = (this->Emitters).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) {
        return;
      }
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
      pFVar3 = *(FEasyParticleRootState **)pFVar5;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 != (FEasyParticleRootState *)0x0) break;
LAB_14aca0a37:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pFVar5 = pFVar5 + 0x10;
    }
    pFVar4 = FUIParticleFactory::m_Instance;
    if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
      this_00 = ::operator_new(0x30);
      pFVar4 = (FUIParticleFactory *)0x0;
      if (this_00 != (FUIParticleFactory *)0x0) {
        pFVar4 = FUIParticleFactory::FUIParticleFactory(this_00);
      }
    }
    FUIParticleFactory::m_Instance = pFVar4;
    if (UUIParticleUtility::Multi_Thread != false) {
      FUIParticleFactory::ParallelTick(FUIParticleFactory::m_Instance,pFVar3,param_1,param_2);
      goto LAB_14aca0a37;
    }
    FUIParticleFactory::Tick(FUIParticleFactory::m_Instance,pFVar3,param_1,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar5 = pFVar5 + 0x10;
  } while( true );
}

// TrySpawnParticle @ 14aca2090

void __thiscall
FEasyParticleGroupState::TrySpawnParticle(FEasyParticleGroupState *this,FGeometry *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleState *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar3 = (this->Emitters).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar3 + 8);
    this_00 = *(FEasyParticleState **)pFVar3;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FEasyParticleState *)0x0) {
      FEasyParticleState::TrySpawnParticle(this_00,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

