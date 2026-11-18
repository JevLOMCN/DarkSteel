// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// operator= @ 14d5921a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<int,UE::Cameras::IPriorityQueueEntry_*> * __thiscall
TVariant<int,UE::Cameras::IPriorityQueueEntry_*>::operator=
          (TVariant<int,UE::Cameras::IPriorityQueueEntry_*> *this,
          TVariant<int,UE::Cameras::IPriorityQueueEntry_*> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TVariant<int,UE::Cameras::IPriorityQueueEntry_*> *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  byte bStack_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 != this) {
    bStack_20 = param_1->TypeIndex;
    uVar4 = (ulonglong)bStack_20;
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVariant<int,UE::Cameras::IPriorityQueueEntry_*> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<int,UE::Cameras::IPriorityQueueEntry*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar4])(&local_28,param_1);
    this->_padding_ = local_28;
    *(ulonglong *)&this->TypeIndex = CONCAT71(uStack_1f,bStack_20);
  }
  return this;
}

// operator= @ 14d592250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue> *
__thiscall
TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>::
operator=(TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
          *this,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
                *param_1)

{
  code *pcVar1;
  bool bVar2;
  TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
  *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  byte bStack_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 != this) {
    bStack_20 = param_1->TypeIndex;
    uVar4 = (ulonglong)bStack_20;
    if (1 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar4])(&local_38,param_1);
    this->_padding_ = local_38;
    this->_padding_ = lStack_30;
    this->_padding_ = local_28;
    *(ulonglong *)&this->TypeIndex = CONCAT71(uStack_1f,bStack_20);
  }
  return this;
}

// Set<TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 14d6542f0

void __thiscall
TVariant<TArrayView<UE::Cameras::FCameraNodeEvaluator_*,int>,TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
::
Set<TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TVariant<TArrayView<UE::Cameras::FCameraNodeEvaluator_*,int>,TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
           *this,TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->TypeIndex;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(this);
  this->_padding_ = 0;
  if ((param_1->AllocatorInstance).SecondaryData ==
      (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0) {
    memmove(this,param_1,0x20);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)(param_1->AllocatorInstance).SecondaryData;
  (param_1->AllocatorInstance).SecondaryData =
       (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0;
  *(int *)&this->_padding_ = param_1->ArrayNum;
  *(int *)((longlong)&this->_padding_ + 4) = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 4;
  this->TypeIndex = '\x01';
  return;
}

