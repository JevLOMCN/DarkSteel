// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// FCameraNodeHierarchy @ 14d58cd20

FCameraNodeHierarchy * __thiscall
UE::Cameras::FCameraNodeHierarchy::FCameraNodeHierarchy
          (FCameraNodeHierarchy *this,UBaseCameraObject *param_1)

{
  UCameraNode *pUVar1;
  
  pUVar1 = (UCameraNode *)0x0;
  (this->FlattenedHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlattenedHierarchy).ArrayNum = 0;
  (this->FlattenedHierarchy).ArrayMax = 0;
  if (param_1 != (UBaseCameraObject *)0x0) {
    pUVar1 = (UCameraNode *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  }
  Build(this,pUVar1);
  return this;
}

// FCameraNodeHierarchy @ 14d58cd60

FCameraNodeHierarchy * __thiscall
UE::Cameras::FCameraNodeHierarchy::FCameraNodeHierarchy(FCameraNodeHierarchy *this)

{
  (this->FlattenedHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlattenedHierarchy).ArrayNum = 0;
  (this->FlattenedHierarchy).ArrayMax = 0;
  return this;
}

// Build @ 14d59ac30

void __thiscall
UE::Cameras::FCameraNodeHierarchy::Build(FCameraNodeHierarchy *this,UBaseCameraObject *param_1)

{
  UCameraNode *pUVar1;
  
  if (param_1 != (UBaseCameraObject *)0x0) {
    pUVar1 = (UCameraNode *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1);
    Build(this,pUVar1);
    return;
  }
  Build(this,(UCameraNode *)0x0);
  return;
}

// Build @ 14d59ac80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::FCameraNodeHierarchy::Build(FCameraNodeHierarchy *this,UCameraNode *param_1)

{
  int *piVar1;
  UCameraNode *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> *this_00;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  UCameraNode *local_98;
  longlong local_90;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> *local_88;
  int local_80;
  longlong local_78;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  piVar1 = &(this->FlattenedHierarchy).ArrayMax;
  (this->FlattenedHierarchy).ArrayNum = 0;
  if ((this->FlattenedHierarchy).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (param_1 != (UCameraNode *)0x0) {
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_a8,(int *)((longlong)&local_a0 + 4));
    local_a0 = CONCAT44(local_a0._4_4_,iVar6 + 1);
    *(UCameraNode **)(local_a8.Data + (longlong)iVar6 * 8) = param_1;
    iVar6 = iVar6 + 1;
    while (iVar6 != 0) {
      if (iVar6 < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (int)local_a0;
      }
      iVar8 = iVar6 + -1;
      pUVar2 = *(UCameraNode **)(local_a8.Data + (longlong)iVar8 * 8);
      iVar7 = (iVar6 - iVar8) + -1;
      if (iVar7 != 0) {
        memmove(local_a8.Data + (longlong)iVar8 * 8,local_a8.Data + (longlong)iVar8 * 8 + 8,
                (longlong)iVar7 << 3);
        iVar6 = (int)local_a0;
      }
      local_a0 = CONCAT44(local_a0._4_4_,iVar6 + -1);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&local_a8,iVar6 + -1,(int *)((longlong)&local_a0 + 4));
      pFVar3 = (this->FlattenedHierarchy).AllocatorInstance.Data;
      local_98 = pUVar2;
      if (((pFVar3 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->FlattenedHierarchy).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->FlattenedHierarchy).ArrayNum = iVar6 + 1;
      *(UCameraNode **)((this->FlattenedHierarchy).AllocatorInstance.Data + (longlong)iVar6 * 8) =
           local_98;
      UCameraNode::GetChildren(local_98,&local_70);
      std::rbegin<UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>_>
                ((FReverseIterator *)&local_88,&local_70);
      this_00 = local_88;
      while ((iVar6 = local_80, this_00 != &local_70 || (local_80 != -1))) {
        TObjectChildrenView<TObjectPtr<UCameraNode>_>::operator[](this_00,(int)&local_78);
        local_90 = local_78;
        if (local_78 != 0) {
          if (((local_a8.Data <= (FScriptContainerElement *)&local_90) &&
              ((FScriptContainerElement *)&local_90 < local_a8.Data + (longlong)local_a0._4_4_ * 8))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (int)local_a0;
          if ((int)local_a0 == local_a0._4_4_) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_a8,(int *)((longlong)&local_a0 + 4));
          }
          local_a0 = CONCAT44(local_a0._4_4_,iVar8 + 1);
          *(longlong *)(local_a8.Data + (longlong)iVar8 * 8) = local_90;
        }
        local_80 = iVar6 + -1;
      }
      uVar9 = (ulonglong)local_70.Storage.TypeIndex;
      if ((1 < local_70.Storage.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<TObjectPtr<UCameraNode>,int>,TArray<TObjectPtr<UCameraNode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(&local_70);
      iVar6 = (int)local_a0;
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  return;
}

// GetFlattenedHierarchy @ 14d5a8410

TArrayView<UCameraNode_*_const,int> * __thiscall
UE::Cameras::FCameraNodeHierarchy::GetFlattenedHierarchy
          (FCameraNodeHierarchy *this,TArrayView<UCameraNode_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UCameraNode_*_const,int> *pTVar4;
  
  iVar1 = (this->FlattenedHierarchy).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (UCameraNode **)(this->FlattenedHierarchy).AllocatorInstance.Data;
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
    pTVar4 = (TArrayView<UCameraNode_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// Num @ 14d5b6e40

int __thiscall UE::Cameras::FCameraNodeHierarchy::Num(FCameraNodeHierarchy *this)

{
  return (this->FlattenedHierarchy).ArrayNum;
}

// Reset @ 14d5cbd60

void __thiscall UE::Cameras::FCameraNodeHierarchy::Reset(FCameraNodeHierarchy *this)

{
  (this->FlattenedHierarchy).ArrayNum = 0;
  if ((this->FlattenedHierarchy).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->FlattenedHierarchy).ArrayMax);
  }
  return;
}

