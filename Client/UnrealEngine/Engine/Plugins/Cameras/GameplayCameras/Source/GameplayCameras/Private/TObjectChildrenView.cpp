// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// Add @ 14d5461d0

void __thiscall
UE::Cameras::TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::Add
          (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *this,
          FCameraNodeEvaluator *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar8;
  ulonglong uVar9;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> local_48;
  
  bVar3 = (this->Storage).TypeIndex;
  uVar9 = (ulonglong)bVar3;
  local_48.Storage._padding_ = (longlong)param_1;
  if (uVar9 == 1) {
    if ((bVar3 != 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((1 < uVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(this);
    plVar1 = &(this->Storage)._padding_;
    *plVar1 = 0;
    (this->Storage)._padding_ = local_48.Storage._padding_;
    (this->Storage)._padding_ = local_48.Storage._padding_;
    (this->Storage)._padding_ = local_48.Storage._padding_;
    (this->Storage)._padding_ = local_48.Storage._padding_;
    *plVar1 = 0;
    *(undefined4 *)&(this->Storage)._padding_ = 0;
    *(undefined4 *)((longlong)&(this->Storage)._padding_ + 4) = 4;
    (this->Storage).TypeIndex = '\x01';
  }
  pTVar4 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(this->Storage)._padding_;
  pTVar8 = this;
  if (pTVar4 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
    pTVar8 = pTVar4;
  }
  if (pTVar8 <= &local_48) {
    pTVar8 = this;
    if (pTVar4 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
      pTVar8 = pTVar4;
    }
    if ((&local_48 <
         &(pTVar8->Storage)._padding_ + *(int *)((longlong)&(this->Storage)._padding_ + 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (int)(this->Storage)._padding_;
  piVar2 = (int *)((longlong)&(this->Storage)._padding_ + 4);
  if (iVar7 == *piVar2) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_>
                      (0x808,(ForElementType<UE::Cameras::FCameraNodeEvaluator_*> *)this,piVar2);
  }
  *(int *)&(this->Storage)._padding_ = iVar7 + 1;
  pTVar4 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(this->Storage)._padding_;
  if (pTVar4 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
    this = pTVar4;
  }
  (&(this->Storage)._padding_)[iVar7] = local_48.Storage._padding_;
  return;
}

// Add @ 14d546370

void __thiscall
UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::Add
          (TObjectChildrenView<TObjectPtr<UCameraNode>_> *this,TObjectPtr<UCameraNode> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> *pTVar4;
  UCameraNode *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> *pTVar9;
  ulonglong uVar10;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  
  bVar3 = (this->Storage).TypeIndex;
  uVar10 = (ulonglong)bVar3;
  if (uVar10 == 1) {
    if ((bVar3 != 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((1 < uVar10) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<TObjectPtr<UCameraNode>,int>,TArray<TObjectPtr<UCameraNode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(this);
    plVar1 = &(this->Storage)._padding_;
    *plVar1 = 0;
    (this->Storage)._padding_ = local_48;
    (this->Storage)._padding_ = lStack_40;
    (this->Storage)._padding_ = local_38;
    (this->Storage)._padding_ = lStack_30;
    *plVar1 = 0;
    *(undefined4 *)&(this->Storage)._padding_ = 0;
    *(undefined4 *)((longlong)&(this->Storage)._padding_ + 4) = 4;
    (this->Storage).TypeIndex = '\x01';
  }
  pTVar4 = (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)(this->Storage)._padding_;
  pTVar9 = this;
  if (pTVar4 != (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)0x0) {
    pTVar9 = pTVar4;
  }
  if (pTVar9 <= param_1) {
    pTVar9 = this;
    if (pTVar4 != (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)0x0) {
      pTVar9 = pTVar4;
    }
    if ((param_1 < &(pTVar9->Storage)._padding_ + *(int *)((longlong)&(this->Storage)._padding_ + 4)
        ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (int)(this->Storage)._padding_;
  piVar2 = (int *)((longlong)&(this->Storage)._padding_ + 4);
  if (iVar8 == *piVar2) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UCameraNode>_>_>
                      (0x808,(ForElementType<TObjectPtr<UCameraNode>_> *)this,piVar2);
  }
  *(int *)&(this->Storage)._padding_ = iVar8 + 1;
  pTVar4 = (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)(this->Storage)._padding_;
  if (pTVar4 != (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)0x0) {
    this = pTVar4;
  }
  pUVar5 = (param_1->field0_0x0).DebugPtr;
  (&(this->Storage)._padding_)[iVar8] = (longlong)pUVar5;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar5);
  }
  return;
}

// end @ 14d56ad20

/* WARNING: Removing unreachable block (ram,0x00014d56ad5e) */
/* WARNING: Removing unreachable block (ram,0x00014d56ad83) */
/* WARNING: Removing unreachable block (ram,0x00014d56ad9c) */
/* WARNING: Removing unreachable block (ram,0x00014d56adc1) */

FIterator * __thiscall
UE::Cameras::TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::end
          (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *this,
          FIterator *__return_storage_ptr__)

{
  uchar uVar1;
  
  *(TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> **)__return_storage_ptr__ = this;
  uVar1 = (this->Storage).TypeIndex;
  if (uVar1 == '\0') {
    *(int *)&__return_storage_ptr__->field_0x8 = (int)(this->Storage)._padding_;
    return __return_storage_ptr__;
  }
  if (uVar1 == '\x01') {
    *(int *)&__return_storage_ptr__->field_0x8 = (int)(this->Storage)._padding_;
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// operator[] @ 14d5935b0

/* WARNING: Removing unreachable block (ram,0x00014d5935fa) */
/* WARNING: Removing unreachable block (ram,0x00014d59361f) */
/* WARNING: Removing unreachable block (ram,0x00014d59367b) */
/* WARNING: Removing unreachable block (ram,0x00014d5936a0) */

TObjectPtr<UCameraNode> __thiscall
UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::operator[]
          (TObjectChildrenView<TObjectPtr<UCameraNode>_> *this,int param_1)

{
  uchar uVar1;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TObjectPtr<UCameraNode> TVar5;
  uint uVar6;
  UObject *pUVar7;
  undefined4 in_register_00000014;
  TObjectPtr<UCameraNode>_u_0 TVar8;
  uint in_R8D;
  
  TVar8._4_4_ = in_register_00000014;
  TVar8._0_4_ = param_1;
  uVar1 = (this->Storage).TypeIndex;
  if (uVar1 == '\0') {
    uVar6 = 0;
    if ((int)in_R8D < (int)(this->Storage)._padding_) {
      uVar6 = ~in_R8D >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5.field0_0x0 = (TObjectPtr<UCameraNode>_u_0)(*pcVar3)();
      return (TObjectPtr<UCameraNode>)TVar5.field0_0x0;
    }
    pUVar7 = *(UObject **)((this->Storage)._padding_ + (longlong)(int)in_R8D * 8);
  }
  else {
    if (uVar1 != '\x01') {
      (TVar8.DebugPtr)->_padding_ = 0;
      return (TObjectPtr<UCameraNode>)TVar8;
    }
    uVar6 = 0;
    if ((int)in_R8D < (int)(this->Storage)._padding_) {
      uVar6 = ~in_R8D >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5.field0_0x0 = (TObjectPtr<UCameraNode>_u_0)(*pcVar3)();
      return (TObjectPtr<UCameraNode>)TVar5.field0_0x0;
    }
    pTVar2 = (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)(this->Storage)._padding_;
    if (pTVar2 != (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)0x0) {
      this = pTVar2;
    }
    pUVar7 = (UObject *)(&(this->Storage)._padding_)[(int)in_R8D];
  }
  (TVar8.DebugPtr)->_padding_ = (longlong)pUVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar7);
  }
  return (TObjectPtr<UCameraNode>)TVar8.DebugPtr;
}

// TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> @ 14d5fae60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>
          (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *this,
          initializer_list<UE::Cameras::FCameraNodeEvaluator_*> *param_1)

{
  FCameraNodeEvaluator **ppFVar1;
  FCameraNodeEvaluator **_Src;
  code *pcVar2;
  bool bVar3;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar4;
  ForElementType<UE::Cameras::FCameraNodeEvaluator_*> _Dst;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStackY_98 [32];
  ForElementType<UE::Cameras::FCameraNodeEvaluator_*> local_58;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  ppFVar1 = param_1->_Last;
  _Src = param_1->_First;
  (this->Storage)._padding_ = 0;
  *(undefined4 *)&(this->Storage)._padding_ = 0;
  (this->Storage).TypeIndex = '\0';
  local_58.SecondaryData = (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0;
  iVar5 = (int)((longlong)ppFVar1 - (longlong)_Src >> 3);
  local_30 = iVar5;
  if (iVar5 == 0) {
    local_2c = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_>
              (8,8,iVar5,0,&local_58,iVar5,&local_2c);
    _Dst = (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)&local_58;
    if (local_58.SecondaryData != (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0) {
      _Dst = local_58.SecondaryData;
    }
    memcpy((void *)_Dst,_Src,(longlong)iVar5 << 3);
  }
  uVar6 = (ulonglong)(this->Storage).TypeIndex;
  if (1 < uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] !=
      Core::Private::TDestructorCaller<TArrayView<UE::Cameras::FCameraNodeEvaluator_*,int>_>::
      Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(this);
  }
  (this->Storage)._padding_ = 0;
  if (local_58.SecondaryData == (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0) {
    (this->Storage)._padding_ = local_58.InlineData._0_8_;
    (this->Storage)._padding_ = local_58.InlineData._8_8_;
    (this->Storage)._padding_ = local_58.InlineData._16_8_;
    (this->Storage)._padding_ = local_58.InlineData._24_8_;
  }
  (this->Storage)._padding_ = (longlong)local_58.SecondaryData;
  *(int *)&(this->Storage)._padding_ = local_30;
  *(int *)((longlong)&(this->Storage)._padding_ + 4) = local_2c;
  (this->Storage).TypeIndex = '\x01';
  return this;
}

// TObjectChildrenView<TObjectPtr<UCameraNode>_> @ 14d5fafb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TObjectChildrenView<TObjectPtr<UCameraNode>_> * __thiscall
UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::
TObjectChildrenView<TObjectPtr<UCameraNode>_>
          (TObjectChildrenView<TObjectPtr<UCameraNode>_> *this,
          initializer_list<TObjectPtr<UCameraNode>_> *param_1)

{
  TObjectPtr<UCameraNode> *pTVar1;
  TObjectPtr<UCameraNode> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> *pTVar5;
  ForElementType<TObjectPtr<UCameraNode>_> FVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStackY_98 [32];
  ForElementType<TObjectPtr<UCameraNode>_> local_58;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pTVar1 = param_1->_Last;
  pTVar2 = param_1->_First;
  (this->Storage)._padding_ = 0;
  *(undefined4 *)&(this->Storage)._padding_ = 0;
  (this->Storage).TypeIndex = '\0';
  local_58.SecondaryData = (ForElementType<TObjectPtr<UCameraNode>_>)0x0;
  iVar7 = (int)((longlong)pTVar1 - (longlong)pTVar2 >> 3);
  local_30 = iVar7;
  if (iVar7 == 0) {
    local_2c = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UCameraNode>_>_>
              (8,8,iVar7,0,&local_58,iVar7,&local_2c);
    FVar6 = (ForElementType<TObjectPtr<UCameraNode>_>)&local_58;
    if (local_58.SecondaryData != (ForElementType<TObjectPtr<UCameraNode>_>)0x0) {
      FVar6 = local_58.SecondaryData;
    }
    ConstructItems<TObjectPtr<UCameraNode>,TObjectPtr<UCameraNode>,int>((void *)FVar6,pTVar2,iVar7);
  }
  uVar8 = (ulonglong)(this->Storage).TypeIndex;
  if (1 < uVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<TObjectPtr<UCameraNode>,int>,TArray<TObjectPtr<UCameraNode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] !=
      Core::Private::TDestructorCaller<TArrayView<TObjectPtr<UCameraNode>,int>_>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<TObjectPtr<UCameraNode>,int>,TArray<TObjectPtr<UCameraNode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(this);
  }
  (this->Storage)._padding_ = 0;
  if (local_58.SecondaryData == (ForElementType<TObjectPtr<UCameraNode>_>)0x0) {
    (this->Storage)._padding_ = local_58.InlineData._0_8_;
    (this->Storage)._padding_ = local_58.InlineData._8_8_;
    (this->Storage)._padding_ = local_58.InlineData._16_8_;
    (this->Storage)._padding_ = local_58.InlineData._24_8_;
  }
  (this->Storage)._padding_ = (longlong)local_58.SecondaryData;
  *(int *)&(this->Storage)._padding_ = local_30;
  *(int *)((longlong)&(this->Storage)._padding_ + 4) = local_2c;
  (this->Storage).TypeIndex = '\x01';
  return this;
}

