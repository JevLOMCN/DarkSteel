// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 13

// FCameraNodeEvaluatorHierarchy @ 14d58cb00

FCameraNodeEvaluatorHierarchy * __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::FCameraNodeEvaluatorHierarchy
          (FCameraNodeEvaluatorHierarchy *this,FCameraNodeEvaluatorHierarchy *param_1)

{
  TMap<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>_>
  *pTVar1;
  TMap<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  
  pTVar1 = &this->TaggedRanges;
  (this->FlattenedHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &param_1->TaggedRanges;
  (this->FlattenedHierarchy).AllocatorInstance.Data =
       (param_1->FlattenedHierarchy).AllocatorInstance.Data;
  (param_1->FlattenedHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlattenedHierarchy).ArrayNum = (param_1->FlattenedHierarchy).ArrayNum;
  (this->FlattenedHierarchy).ArrayMax = (param_1->FlattenedHierarchy).ArrayMax;
  (param_1->FlattenedHierarchy).ArrayNum = 0;
  (param_1->FlattenedHierarchy).ArrayMax = 0;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->TaggedRanges).field_0x8 = 0;
  *(undefined8 *)&(this->TaggedRanges).field_0x20 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x28 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaggedRanges).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaggedRanges).field_0x34 = 0;
  *(undefined8 *)&(this->TaggedRanges).field_0x40 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->TaggedRanges).field_0x10;
    *(undefined4 *)&(this->TaggedRanges).field_0x8 =
         *(undefined4 *)&(param_1->TaggedRanges).field_0x8;
    _Src = &(param_1->TaggedRanges).field_0x10;
    *(undefined4 *)&(this->TaggedRanges).field_0xc =
         *(undefined4 *)&(param_1->TaggedRanges).field_0xc;
    *(undefined8 *)&(param_1->TaggedRanges).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->TaggedRanges).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->TaggedRanges).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->TaggedRanges).field_0x20 =
           *(undefined8 *)&(param_1->TaggedRanges).field_0x20;
      *(undefined8 *)&(param_1->TaggedRanges).field_0x20 = 0;
      *(undefined4 *)&(this->TaggedRanges).field_0x28 =
           *(undefined4 *)&(param_1->TaggedRanges).field_0x28;
      *(undefined4 *)&(this->TaggedRanges).field_0x2c =
           *(undefined4 *)&(param_1->TaggedRanges).field_0x2c;
      *(undefined8 *)&(param_1->TaggedRanges).field_0x28 = 0;
    }
    *(undefined4 *)&(this->TaggedRanges).field_0x30 =
         *(undefined4 *)&(param_1->TaggedRanges).field_0x30;
    *(undefined4 *)&(this->TaggedRanges).field_0x34 =
         *(undefined4 *)&(param_1->TaggedRanges).field_0x34;
    *(undefined4 *)&(param_1->TaggedRanges).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->TaggedRanges).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->TaggedRanges).field_0x40 == 0) {
    *(undefined4 *)&(this->TaggedRanges).field_0x38 =
         *(undefined4 *)&(param_1->TaggedRanges).field_0x38;
  }
  pvVar3 = *(void **)&(this->TaggedRanges).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->TaggedRanges).field_0x40 =
       *(undefined8 *)&(param_1->TaggedRanges).field_0x40;
  *(undefined8 *)&(param_1->TaggedRanges).field_0x40 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x48 =
       *(undefined4 *)&(param_1->TaggedRanges).field_0x48;
  *(undefined4 *)&(param_1->TaggedRanges).field_0x48 = 0;
  return this;
}

// FCameraNodeEvaluatorHierarchy @ 14d58cc50

FCameraNodeEvaluatorHierarchy * __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::FCameraNodeEvaluatorHierarchy
          (FCameraNodeEvaluatorHierarchy *this,FCameraNodeEvaluator *param_1)

{
  int *piVar1;
  
  (this->FlattenedHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FlattenedHierarchy).ArrayMax;
  *(undefined8 *)&this->TaggedRanges = 0;
  *(undefined8 *)&(this->TaggedRanges).field_0x8 = 0;
  *piVar1 = 0;
  *(undefined8 *)&(this->TaggedRanges).field_0x20 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x28 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaggedRanges).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaggedRanges).field_0x34 = 0;
  *(undefined8 *)&(this->TaggedRanges).field_0x40 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x48 = 0;
  (this->FlattenedHierarchy).ArrayNum = 0;
  if (*piVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  Append(this,param_1);
  return this;
}

// FCameraNodeEvaluatorHierarchy @ 14d58cce0

FCameraNodeEvaluatorHierarchy * __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::FCameraNodeEvaluatorHierarchy
          (FCameraNodeEvaluatorHierarchy *this)

{
  (this->FlattenedHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlattenedHierarchy).ArrayNum = 0;
  (this->FlattenedHierarchy).ArrayMax = 0;
  *(undefined8 *)&this->TaggedRanges = 0;
  *(undefined8 *)&(this->TaggedRanges).field_0x8 = 0;
  *(undefined8 *)&(this->TaggedRanges).field_0x20 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x28 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaggedRanges).field_0x34 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TaggedRanges).field_0x40 = 0;
  *(undefined4 *)&(this->TaggedRanges).field_0x48 = 0;
  return this;
}

// AddEvaluator @ 14d5981b0

void __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::AddEvaluator
          (FCameraNodeEvaluatorHierarchy *this,FCameraNodeEvaluator *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCameraNodeEvaluator *local_res10 [3];
  
  if (param_1 != (FCameraNodeEvaluator *)0x0) {
    pFVar2 = (this->FlattenedHierarchy).AllocatorInstance.Data;
    local_res10[0] = param_1;
    if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar2 + (longlong)(this->FlattenedHierarchy).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->FlattenedHierarchy).ArrayNum;
    piVar1 = &(this->FlattenedHierarchy).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->FlattenedHierarchy).ArrayNum = iVar5 + 1;
    *(FCameraNodeEvaluator **)
     ((this->FlattenedHierarchy).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
  }
  return;
}

// Append @ 14d5991a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d599431) */
/* WARNING: Removing unreachable block (ram,0x00014d599456) */
/* WARNING: Removing unreachable block (ram,0x00014d5993af) */
/* WARNING: Removing unreachable block (ram,0x00014d5993d4) */

void __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::Append
          (FCameraNodeEvaluatorHierarchy *this,FCameraNodeEvaluator *param_1)

{
  uchar uVar1;
  FCameraNodeEvaluator *pFVar2;
  FScriptContainerElement *pFVar3;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar12;
  bool bVar13;
  undefined1 auStackY_e8 [32];
  ForAnyElementType local_98;
  undefined8 local_90;
  FCameraNodeEvaluator *local_88;
  longlong local_80;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *local_78;
  uint local_70;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> local_68;
  ulonglong local_30;
  
  if (param_1 != (FCameraNodeEvaluator *)0x0) {
    local_30 = __security_cookie.value ^ (ulonglong)auStackY_e8;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_98,(int *)((longlong)&local_90 + 4));
    iVar8 = iVar6 + 1;
    local_90 = CONCAT44(local_90._4_4_,iVar8);
    *(FCameraNodeEvaluator **)(local_98.Data + (longlong)iVar6 * 8) = param_1;
    bVar13 = iVar8 == 0;
    if (!bVar13) {
LAB_14d59922e:
      if (bVar13 || iVar8 < 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (int)local_90;
      }
      iVar6 = iVar8 + -1;
      pFVar2 = *(FCameraNodeEvaluator **)(local_98.Data + (longlong)iVar6 * 8);
      iVar7 = (iVar8 - iVar6) + -1;
      if (iVar7 != 0) {
        memmove(local_98.Data + (longlong)iVar6 * 8,local_98.Data + (longlong)iVar6 * 8 + 8,
                (longlong)iVar7 << 3);
        iVar8 = (int)local_90;
      }
      local_90 = CONCAT44(local_90._4_4_,iVar8 + -1);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&local_98,iVar8 + -1,(int *)((longlong)&local_90 + 4));
      pFVar3 = (this->FlattenedHierarchy).AllocatorInstance.Data;
      local_88 = pFVar2;
      if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           pFVar3 + (longlong)(this->FlattenedHierarchy).ArrayMax * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->FlattenedHierarchy).ArrayNum;
      if (iVar8 == (this->FlattenedHierarchy).ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->FlattenedHierarchy).ArrayMax);
      }
      (this->FlattenedHierarchy).ArrayNum = iVar8 + 1;
      *(FCameraNodeEvaluator **)
       ((this->FlattenedHierarchy).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_88;
      FCameraNodeEvaluator::GetChildren(local_88,&local_68);
      std::rbegin<UE::Cameras::TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>_>
                ((FReverseIterator *)&local_78,&local_68);
LAB_14d599370:
      do {
        pTVar12 = local_78;
        if ((local_78 == &local_68) && (local_70 == 0xffffffff)) goto LAB_14d599556;
        lVar10 = (longlong)(int)local_70;
        uVar1 = (local_78->Storage).TypeIndex;
        if (uVar1 == '\0') {
          uVar9 = 0;
          if ((int)local_70 < (int)(local_78->Storage)._padding_) {
            uVar9 = ~local_70 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_80 = *(longlong *)((pTVar12->Storage)._padding_ + lVar10 * 8);
        }
        else {
          if (uVar1 != '\x01') {
            local_70 = local_70 - 1;
            local_80 = 0;
            goto LAB_14d599370;
          }
          uVar9 = 0;
          if ((int)local_70 < (int)(local_78->Storage)._padding_) {
            uVar9 = ~local_70 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar4 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
                   (pTVar12->Storage)._padding_;
          if (pTVar4 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
            pTVar12 = pTVar4;
          }
          local_80 = (&(pTVar12->Storage)._padding_)[lVar10];
        }
        if (local_80 != 0) {
          if (((local_98.Data <= (FScriptContainerElement *)&local_80) &&
              ((FScriptContainerElement *)&local_80 < local_98.Data + (longlong)local_90._4_4_ * 8))
             && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (int)local_90;
          if ((int)local_90 == local_90._4_4_) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_98,(int *)((longlong)&local_90 + 4));
          }
          local_90 = CONCAT44(local_90._4_4_,iVar8 + 1);
          *(longlong *)(local_98.Data + (longlong)iVar8 * 8) = local_80;
        }
        local_70 = local_70 - 1;
      } while( true );
    }
LAB_14d5995b4:
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
  }
  return;
LAB_14d599556:
  uVar11 = (ulonglong)local_68.Storage.TypeIndex;
  if ((1 < local_68.Storage.TypeIndex) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar11])(&local_68);
  bVar13 = false;
  iVar8 = (int)local_90;
  if ((int)local_90 == 0) goto LAB_14d5995b4;
  goto LAB_14d59922e;
}

// AppendTagged @ 14d5995f0

void __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::AppendTagged
          (FCameraNodeEvaluatorHierarchy *this,FName param_1,FCameraNodeEvaluator *param_2)

{
  longlong lVar1;
  TKeyInitializer<FName_const_&> local_res8;
  FName local_res10 [2];
  FName *local_res20;
  
  local_res20 = local_res10;
  local_res10[0] = param_1;
  TSet<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>,FDefaultSetAllocator>
              *)&this->TaggedRanges,&local_res8,(bool *)&local_res20);
  lVar1 = *(longlong *)&this->TaggedRanges + (longlong)(int)local_res8.Key * 0x18;
  *(int *)(lVar1 + 8) = (this->FlattenedHierarchy).ArrayNum;
  Append(this,param_2);
  *(int *)(lVar1 + 0xc) = (this->FlattenedHierarchy).ArrayNum;
  return;
}

// Build @ 14d59abd0

void __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::Build
          (FCameraNodeEvaluatorHierarchy *this,FCameraNodeEvaluator *param_1)

{
  (this->FlattenedHierarchy).ArrayNum = 0;
  if ((this->FlattenedHierarchy).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->FlattenedHierarchy).ArrayMax);
  }
  Append(this,param_1);
  return;
}

// CallExecuteOperation @ 14d59bca0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::CallExecuteOperation
          (FCameraNodeEvaluatorHierarchy *this,FCameraOperationParams *param_1,
          FCameraOperation *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->FlattenedHierarchy).AllocatorInstance.Data;
  iVar2 = (this->FlattenedHierarchy).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->FlattenedHierarchy).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(FCameraNodeEvaluator **)pFVar3)->PrivateFlags & SupportsOperations) != None) {
      FCameraNodeEvaluator::ExecuteOperation(*(FCameraNodeEvaluator **)pFVar3,param_1,param_2);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// CallSerialize @ 14d59bd20

void __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::CallSerialize
          (FCameraNodeEvaluatorHierarchy *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->FlattenedHierarchy).AllocatorInstance.Data;
  iVar2 = (this->FlattenedHierarchy).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->FlattenedHierarchy).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(FCameraNodeEvaluator **)pFVar3)->PrivateFlags & NeedsSerialize) != None) {
      FCameraNodeEvaluator::Serialize(*(FCameraNodeEvaluator **)pFVar3,param_1,param_2);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// CallUpdateParameters @ 14d59bda0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::CallUpdateParameters
          (FCameraNodeEvaluatorHierarchy *this,FCameraBlendedParameterUpdateParams *param_1,
          FCameraBlendedParameterUpdateResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->FlattenedHierarchy).AllocatorInstance.Data;
  iVar2 = (this->FlattenedHierarchy).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->FlattenedHierarchy).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(FCameraNodeEvaluator **)pFVar3)->PrivateFlags & NeedsParameterUpdate) != None) {
      FCameraNodeEvaluator::UpdateParameters(*(FCameraNodeEvaluator **)pFVar3,param_1,param_2);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetFlattenedHierarchy @ 14d5a8260

TArrayView<UE::Cameras::FCameraNodeEvaluator_*_const,int> * __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::GetFlattenedHierarchy
          (FCameraNodeEvaluatorHierarchy *this,
          TArrayView<UE::Cameras::FCameraNodeEvaluator_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Cameras::FCameraNodeEvaluator_*_const,int> *pTVar4;
  
  iVar1 = (this->FlattenedHierarchy).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FCameraNodeEvaluator **)(this->FlattenedHierarchy).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::Cameras::FCameraNodeEvaluator_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetFlattenedHierarchy @ 14d5a82d0

void __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::GetFlattenedHierarchy
          (FCameraNodeEvaluatorHierarchy *this,ECameraNodeEvaluatorFlags param_1,
          TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  pFVar7 = (this->FlattenedHierarchy).AllocatorInstance.Data;
  iVar1 = (this->FlattenedHierarchy).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->FlattenedHierarchy).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar3) break;
    local_28[0] = *(longlong *)pFVar7;
    if ((*(ECameraNodeEvaluatorFlags *)(local_28[0] + 0x18) & param_1) == param_1) {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
    }
    pFVar7 = pFVar7 + 8;
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// Reset @ 14d5cbd20

void __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::Reset(FCameraNodeEvaluatorHierarchy *this)

{
  (this->FlattenedHierarchy).ArrayNum = 0;
  if ((this->FlattenedHierarchy).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->FlattenedHierarchy).ArrayMax);
  }
  return;
}

