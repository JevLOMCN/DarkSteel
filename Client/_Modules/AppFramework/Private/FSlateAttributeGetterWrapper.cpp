// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 10

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 142f37530

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
            (&this->Getter);
  return;
}

// GetAttribute @ 142fcfc10

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetDelegateHandle @ 142fd2470

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                    *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *in_RDX;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 == (longlong *)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
    uVar3 = *puVar2;
  }
  *in_RDX = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// SetAttribute @ 14300cdb0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// UpdateAttribute @ 1430152e0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  FUpdateAttributeResult FVar4;
  int iVar5;
  longlong *plVar6;
  ForAnyElementType FVar7;
  TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  FVar4 = SUB82(param_1,0);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(this->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    FVar7.Data = local_38.Value.AllocatorInstance.Data;
    pTVar1 = this->Attribute;
    iVar5 = (pTVar1->Value).ArrayNum;
    if ((iVar5 != local_38.Value.ArrayNum) ||
       ((iVar5 != 0 &&
        (iVar5 = memcmp((pTVar1->Value).AllocatorInstance.Data,local_38.Value.AllocatorInstance.Data
                        ,(longlong)iVar5 << 2), iVar5 != 0)))) {
      if (pTVar1 != &local_38) {
        pFVar2 = (pTVar1->Value).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
          FVar7.Data = local_38.Value.AllocatorInstance.Data;
        }
        (pTVar1->Value).AllocatorInstance.Data = FVar7.Data;
        local_38.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar1->Value).ArrayNum = local_38.Value.ArrayNum;
        (pTVar1->Value).ArrayMax = local_38.Value.ArrayMax;
        FVar7.Data = (FScriptContainerElement *)0x0;
        local_38.Value.ArrayNum = 0;
        local_38.Value.ArrayMax = 0;
      }
      *(undefined2 *)&param_1->_padding_ = 0x102;
      if (FVar7.Data == (FScriptContainerElement *)0x0) {
        return FVar4;
      }
      FMemory::Free(FVar7.Data);
      return FVar4;
    }
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
  return FVar4;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 14301adf0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// GetAttribute @ 143033030

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(void *this)

{
  return *(FSlateAttributeBase **)((longlong)this + 0x20);
}

// GetDelegateHandle @ 143034240

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(void *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *in_RDX;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) == 0) ||
     (plVar1 = *(longlong **)((longlong)this + 0x10), plVar1 == (longlong *)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
    uVar3 = *puVar2;
  }
  *in_RDX = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// SetAttribute @ 14303e570

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(void *this,FSlateAttributeBase *param_1)

{
  *(FSlateAttributeBase **)((longlong)this + 0x20) = param_1;
  return;
}

// UpdateAttribute @ 14303f800

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(void *this,SWidget *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      iVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (**(int **)((longlong)this + 0x20) != iVar2) {
        **(int **)((longlong)this + 0x20) = iVar2;
        *(undefined2 *)&param_1->_padding_ = 0x102;
        return SUB82(param_1,0);
      }
      goto LAB_14303f8a0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_14303f8a0:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

