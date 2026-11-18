// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 28

// OnBuild @ 14d537310

void __thiscall
UE::Cameras::FCameraNodeEvaluator::OnBuild
          (FCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  return;
}

// OnInitialize @ 14d537320

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::OnInitialize
          (FCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  return;
}

// OnTeardown @ 14d537330

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::OnTeardown
          (FCameraNodeEvaluator *this,FCameraNodeEvaluatorTeardownParams *param_1)

{
  return;
}

// OnAddReferencedObjects @ 14d537340

void __thiscall
UE::Cameras::FCameraNodeEvaluator::OnAddReferencedObjects
          (FCameraNodeEvaluator *this,FReferenceCollector *param_1)

{
  return;
}

// OnGetChildren @ 14d537350

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FCameraNodeEvaluator::OnGetChildren
          (FCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  (__return_storage_ptr__->Storage)._padding_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// OnUpdateParameters @ 14d537370

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::OnUpdateParameters
          (FCameraNodeEvaluator *this,FCameraBlendedParameterUpdateParams *param_1,
          FCameraBlendedParameterUpdateResult *param_2)

{
  return;
}

// OnRun @ 14d537380

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::OnRun
          (FCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  return;
}

// OnExecuteOperation @ 14d537390

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::OnExecuteOperation
          (FCameraNodeEvaluator *this,FCameraOperationParams *param_1,FCameraOperation *param_2)

{
  return;
}

// OnSerialize @ 14d5373a0

void __thiscall
UE::Cameras::FCameraNodeEvaluator::OnSerialize
          (FCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,FArchive *param_2
          )

{
  return;
}

// OnBuildDebugBlocks @ 14d5373b0

void __thiscall
UE::Cameras::FCameraNodeEvaluator::OnBuildDebugBlocks
          (FCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  return;
}

// ~FCameraNodeEvaluator @ 14d5448e0

void __thiscall UE::Cameras::FCameraNodeEvaluator::~FCameraNodeEvaluator(FCameraNodeEvaluator *this)

{
  return;
}

// AddNodeEvaluatorFlags @ 14d5474f0

void __thiscall
UE::Cameras::FCameraNodeEvaluator::AddNodeEvaluatorFlags
          (FCameraNodeEvaluator *this,ECameraNodeEvaluatorFlags param_1)

{
  this->PrivateFlags = this->PrivateFlags | param_1;
  return;
}

// AddReferencedObjects @ 14d547a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d547af4) */
/* WARNING: Removing unreachable block (ram,0x00014d547b19) */
/* WARNING: Removing unreachable block (ram,0x00014d547b8b) */
/* WARNING: Removing unreachable block (ram,0x00014d547bb0) */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::AddReferencedObjects
          (FCameraNodeEvaluator *this,FReferenceCollector *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar4;
  FCameraNodeEvaluator *this_00;
  uint uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *local_58;
  uint local_50;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((this->PrivateCameraNode).field0_0x0.DebugPtr != (UCameraNode *)0x0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->PrivateCameraNode,0,0);
  }
  (**(code **)(this->_padding_ + 0x30))(this,param_1);
  (**(code **)(this->_padding_ + 0x38))(this,&local_48);
  uVar5 = 0;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::end(&local_48,(FIterator *)&local_58);
  do {
    if ((&local_48 == local_58) && (uVar5 == local_50)) {
      if ((1 < local_48.Storage.TypeIndex) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_48.Storage.TypeIndex])(&local_48);
      return;
    }
    if (local_48.Storage.TypeIndex == 0) {
      uVar3 = 0;
      if ((int)uVar5 < (int)local_48.Storage._padding_) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_60 = (longlong)(int)local_48.Storage._padding_;
        local_68 = (longlong)(int)uVar5;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_00 = *(FCameraNodeEvaluator **)(local_48.Storage._padding_ + (longlong)(int)uVar5 * 8);
LAB_14d547c0a:
      if (this_00 != (FCameraNodeEvaluator *)0x0) {
        AddReferencedObjects(this_00,param_1);
      }
    }
    else if (local_48.Storage.TypeIndex == 1) {
      uVar3 = 0;
      if ((int)uVar5 < (int)local_48.Storage._padding_) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_60 = (longlong)(int)local_48.Storage._padding_;
        local_68 = (longlong)(int)uVar5;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pTVar4 = &local_48;
      if ((TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)local_48.Storage._padding_ !=
          (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
        pTVar4 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
                 local_48.Storage._padding_;
      }
      this_00 = (FCameraNodeEvaluator *)(&(pTVar4->Storage)._padding_)[(int)uVar5];
      goto LAB_14d547c0a;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

// Build @ 14d5497c0

void __thiscall
UE::Cameras::FCameraNodeEvaluator::Build
          (FCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5497c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))();
  return;
}

// BuildDebugBlocks @ 14d54c110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d54c248) */
/* WARNING: Removing unreachable block (ram,0x00014d54c26d) */
/* WARNING: Removing unreachable block (ram,0x00014d54c2e2) */
/* WARNING: Removing unreachable block (ram,0x00014d54c307) */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::BuildDebugBlocks
          (FCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  int iVar1;
  ECameraDebugBlockBuildVisitFlags EVar2;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FCameraNodeEvaluatorDebugBlock *pFVar7;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar8;
  FCameraNodeEvaluator *this_01;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [8];
  UCameraNode *local_80;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *local_78;
  uint local_70;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar7 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x38,8);
  local_80 = (this->PrivateCameraNode).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)local_80);
  }
  pFVar7 = FCameraNodeEvaluatorDebugBlock::FCameraNodeEvaluatorDebugBlock
                     (pFVar7,(TObjectPtr<UCameraNode_const_>)&local_80);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)pFVar7);
  FCameraDebugBlockBuilder::OnStartChildDebugBlock(param_2,(FCameraDebugBlock *)pFVar7);
  iVar1 = (param_2->CurrentHierarchy).ArrayNum;
  (**(code **)(this->_padding_ + 0x60))(this,param_1,param_2);
  if (iVar1 != (param_2->CurrentHierarchy).ArrayNum) {
    local_88[0] = 0;
    bVar4 = `UE::Cameras::FCameraNodeEvaluator::BuildDebugBlocks'::__l4::<lambda_1>::operator()
                      (local_88);
    if ((!bVar4) && (uVar5 = (param_2->CurrentHierarchy).ArrayNum - iVar1, 0 < (int)uVar5)) {
      uVar9 = (ulonglong)uVar5;
      do {
        FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  EVar2 = param_2->VisitFlags;
  FCameraDebugBlockBuilder::ResetVisitFlags(param_2);
  if ((EVar2 & SkipChildren) == None) {
    (**(code **)(this->_padding_ + 0x38))(this,&local_68);
    TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::end(&local_68,(FIterator *)&local_78);
    for (uVar5 = 0; (&local_68 != local_78 || (uVar5 != local_70)); uVar5 = uVar5 + 1) {
      if (local_68.Storage.TypeIndex == 0) {
        uVar6 = 0;
        if ((int)uVar5 < (int)local_68.Storage._padding_) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_90 = (longlong)(int)local_68.Storage._padding_;
          local_98 = (longlong)(int)uVar5;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        this_01 = *(FCameraNodeEvaluator **)(local_68.Storage._padding_ + (longlong)(int)uVar5 * 8);
LAB_14d54c361:
        if (this_01 != (FCameraNodeEvaluator *)0x0) {
          BuildDebugBlocks(this_01,param_1,param_2);
        }
      }
      else if (local_68.Storage.TypeIndex == 1) {
        uVar6 = 0;
        if ((int)uVar5 < (int)local_68.Storage._padding_) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_90 = (longlong)(int)local_68.Storage._padding_;
          local_98 = (longlong)(int)uVar5;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pTVar8 = &local_68;
        if ((TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)local_68.Storage._padding_
            != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
          pTVar8 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
                   local_68.Storage._padding_;
        }
        this_01 = (FCameraNodeEvaluator *)(&(pTVar8->Storage)._padding_)[(int)uVar5];
        goto LAB_14d54c361;
      }
    }
    if ((1 < local_68.Storage.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_68.Storage.TypeIndex])(&local_68);
  }
  FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
  return;
}

// ExecuteOperation @ 14d553700

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::ExecuteOperation
          (FCameraNodeEvaluator *this,FCameraOperationParams *param_1,FCameraOperation *param_2)

{
  UCameraNode *pUVar1;
  
  pUVar1 = (this->PrivateCameraNode).field0_0x0.DebugPtr;
  if ((pUVar1 != (UCameraNode *)0x0) && (pUVar1->bIsEnabled == false)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d553712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x50))();
  return;
}

// GetChildren @ 14d556700

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FCameraNodeEvaluator::GetChildren
          (FCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x38))();
  return __return_storage_ptr__;
}

// GetTypeID @ 14d558d40

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraNodeEvaluator::GetTypeID(FCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// Initialize @ 14d559670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d559706) */
/* WARNING: Removing unreachable block (ram,0x00014d55972b) */
/* WARNING: Removing unreachable block (ram,0x00014d55979d) */
/* WARNING: Removing unreachable block (ram,0x00014d5597c2) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::Initialize
          (FCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar4;
  FCameraNodeEvaluator *this_00;
  uint uVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *local_68;
  uint local_60;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1->Hierarchy != (FCameraNodeEvaluatorHierarchy *)0x0) {
    FCameraNodeEvaluatorHierarchy::AddEvaluator(param_1->Hierarchy,this);
  }
  (**(code **)(this->_padding_ + 0x20))(this,param_1,param_2);
  (**(code **)(this->_padding_ + 0x38))(this,&local_58);
  uVar5 = 0;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::end(&local_58,(FIterator *)&local_68);
  do {
    if ((&local_58 == local_68) && (uVar5 == local_60)) {
      if ((1 < local_58.Storage.TypeIndex) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_58.Storage.TypeIndex])(&local_58);
      return;
    }
    if (local_58.Storage.TypeIndex == 0) {
      uVar3 = 0;
      if ((int)uVar5 < (int)local_58.Storage._padding_) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_70 = (longlong)(int)local_58.Storage._padding_;
        local_78 = (longlong)(int)uVar5;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_00 = *(FCameraNodeEvaluator **)(local_58.Storage._padding_ + (longlong)(int)uVar5 * 8);
LAB_14d55981c:
      if (this_00 != (FCameraNodeEvaluator *)0x0) {
        Initialize(this_00,param_1,param_2);
      }
    }
    else if (local_58.Storage.TypeIndex == 1) {
      uVar3 = 0;
      if ((int)uVar5 < (int)local_58.Storage._padding_) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_70 = (longlong)(int)local_58.Storage._padding_;
        local_78 = (longlong)(int)uVar5;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pTVar4 = &local_58;
      if ((TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)local_58.Storage._padding_ !=
          (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
        pTVar4 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
                 local_58.Storage._padding_;
      }
      this_00 = (FCameraNodeEvaluator *)(&(pTVar4->Storage)._padding_)[(int)uVar5];
      goto LAB_14d55981c;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

// IsKindOf @ 14d55a510

bool __thiscall
UE::Cameras::FCameraNodeEvaluator::IsKindOf(FCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  return (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID == PrivateTypeID;
}

// Run @ 14d5622b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::Run
          (FCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  UCameraNode *pUVar1;
  TVector<double>_u_0 local_28;
  
  pUVar1 = (this->PrivateCameraNode).field0_0x0.DebugPtr;
  if ((pUVar1 == (UCameraNode *)0x0) || (pUVar1->bIsEnabled != false)) {
    (**(code **)(this->_padding_ + 0x48))();
    if (this->bAutoCameraPoseMovementTrail != false) {
      local_28._s_0.X = (param_2->CameraPose).Location.field0_0x0._s_0.X;
      local_28._s_0.Y = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
      local_28._s_0.Z = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
      FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
                (param_2,(TVector<double> *)&local_28._s_0);
    }
  }
  return;
}

// Serialize @ 14d562b50

void __thiscall
UE::Cameras::FCameraNodeEvaluator::Serialize
          (FCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,FArchive *param_2
          )

{
                    /* WARNING: Could not recover jumptable at 0x00014d562b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x58))();
  return;
}

// SetNodeEvaluatorFlags @ 14d564b70

void __thiscall
UE::Cameras::FCameraNodeEvaluator::SetNodeEvaluatorFlags
          (FCameraNodeEvaluator *this,ECameraNodeEvaluatorFlags param_1)

{
  this->PrivateFlags = param_1;
  return;
}

// SetPrivateCameraNode @ 14d564e50

void __thiscall
UE::Cameras::FCameraNodeEvaluator::SetPrivateCameraNode
          (FCameraNodeEvaluator *this,TObjectPtr<UCameraNode_const_> param_1)

{
  if (!GC::GIsIncrementalReachabilityPending) {
                    /* WARNING: Load size is inaccurate */
    (this->PrivateCameraNode).field0_0x0 = *param_1.field0_0x0;
    return;
  }
  if (*(UObject **)param_1.field0_0x0 != (UObject *)0x0) {
    GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
                    /* WARNING: Load size is inaccurate */
    (this->PrivateCameraNode).field0_0x0 = *param_1.field0_0x0;
    return;
  }
  (this->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  return;
}

// Teardown @ 14d568640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d5686c4) */
/* WARNING: Removing unreachable block (ram,0x00014d5686e9) */
/* WARNING: Removing unreachable block (ram,0x00014d56875b) */
/* WARNING: Removing unreachable block (ram,0x00014d568780) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::Teardown
          (FCameraNodeEvaluator *this,FCameraNodeEvaluatorTeardownParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar4;
  FCameraNodeEvaluator *this_00;
  uint uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *local_58;
  uint local_50;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  (**(code **)(this->_padding_ + 0x28))();
  (**(code **)(this->_padding_ + 0x38))(this,&local_48);
  uVar5 = 0;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::end(&local_48,(FIterator *)&local_58);
  do {
    if ((&local_48 == local_58) && (uVar5 == local_50)) {
      if ((1 < local_48.Storage.TypeIndex) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_48.Storage.TypeIndex])(&local_48);
      return;
    }
    if (local_48.Storage.TypeIndex == 0) {
      uVar3 = 0;
      if ((int)uVar5 < (int)local_48.Storage._padding_) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_60 = (longlong)(int)local_48.Storage._padding_;
        local_68 = (longlong)(int)uVar5;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_00 = *(FCameraNodeEvaluator **)(local_48.Storage._padding_ + (longlong)(int)uVar5 * 8);
LAB_14d5687da:
      if (this_00 != (FCameraNodeEvaluator *)0x0) {
        Teardown(this_00,param_1);
      }
    }
    else if (local_48.Storage.TypeIndex == 1) {
      uVar3 = 0;
      if ((int)uVar5 < (int)local_48.Storage._padding_) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_60 = (longlong)(int)local_48.Storage._padding_;
        local_68 = (longlong)(int)uVar5;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pTVar4 = &local_48;
      if ((TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)local_48.Storage._padding_ !=
          (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
        pTVar4 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
                 local_48.Storage._padding_;
      }
      this_00 = (FCameraNodeEvaluator *)(&(pTVar4->Storage)._padding_)[(int)uVar5];
      goto LAB_14d5687da;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

// UpdateParameters @ 14d56a3a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluator::UpdateParameters
          (FCameraNodeEvaluator *this,FCameraBlendedParameterUpdateParams *param_1,
          FCameraBlendedParameterUpdateResult *param_2)

{
  UCameraNode *pUVar1;
  
  pUVar1 = (this->PrivateCameraNode).field0_0x0.DebugPtr;
  if ((pUVar1 != (UCameraNode *)0x0) && (pUVar1->bIsEnabled == false)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d56a3b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// GetCameraNodeAs<UCollisionPushCameraNode> @ 14d5f0e20

UCollisionPushCameraNode * __thiscall
UE::Cameras::FCameraNodeEvaluator::GetCameraNodeAs<UCollisionPushCameraNode>
          (FCameraNodeEvaluator *this)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((this->PrivateCameraNode).field0_0x0.DebugPtr != (UCameraNode *)0x0) {
    pUVar2 = UCollisionPushCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->PrivateCameraNode,pUVar2);
    if (bVar1) {
      return (UCollisionPushCameraNode *)(this->PrivateCameraNode).field0_0x0.DebugPtr;
    }
  }
  return (UCollisionPushCameraNode *)0x0;
}

// operator() @ 150580e90

bool __thiscall
`UE::Cameras::FCameraNodeEvaluator::BuildDebugBlocks'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7330225176618991886>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7330225176618991886>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

