// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 145

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1426fee30

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1426fee70

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// GetAttribute @ 14273aa30

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14273aa40

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetDelegateHandle @ 14273d7a0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 14273d800

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// SetAttribute @ 1427844b0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 1427844c0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// UpdateAttribute @ 142790ff0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      pTVar1 = this->Attribute;
      if (((((float)local_38._0_4_ != (pTVar1->Value).field0_0x0._s_0.R) ||
           ((float)local_38._4_4_ != (pTVar1->Value).field0_0x0._s_0.G)) ||
          (fStack_30 != (pTVar1->Value).field0_0x0._s_0.B)) ||
         (fStack_2c != (pTVar1->Value).field0_0x0._s_0.A)) {
        *(undefined2 *)&param_1->_padding_ = 0x100;
        *(ulonglong *)&(pTVar1->Value).field0_0x0 = CONCAT44(local_38._4_4_,local_38._0_4_);
        *(ulonglong *)((longlong)&(pTVar1->Value).field0_0x0 + 8) = CONCAT44(fStack_2c,fStack_30);
        return SUB82(param_1,0);
      }
      goto LAB_1427910d0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_38);
LAB_1427910d0:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1427910f0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      pTVar1 = this->Attribute;
      if (((((float)local_38._0_4_ != (pTVar1->Value).Left) || (fStack_30 != (pTVar1->Value).Right))
          || ((float)local_38._4_4_ != (pTVar1->Value).Top)) ||
         (fStack_2c != (pTVar1->Value).Bottom)) {
        *(undefined2 *)&param_1->_padding_ = 0x100;
        (pTVar1->Value).Left = (float)local_38._0_4_;
        (pTVar1->Value).Top = (float)local_38._4_4_;
        (pTVar1->Value).Right = fStack_30;
        (pTVar1->Value).Bottom = fStack_2c;
        return SUB82(param_1,0);
      }
      goto LAB_1427911d0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_38);
LAB_1427911d0:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_> @ 1427b67a0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_> @ 1427b67e0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1427b6820

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1427b6860

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// GetAttribute @ 14280d240

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetAttribute(void *this)

{
  return *(FSlateAttributeBase **)((longlong)this + 0x20);
}

// GetAttribute @ 14280d250

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14280d260

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14280d270

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetDelegateHandle @ 14280f680

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// GetDelegateHandle @ 14280f6e0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// GetDelegateHandle @ 14280f740

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 14280f7a0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// SetAttribute @ 142834d10

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::SetAttribute(void *this,FSlateAttributeBase *param_1)

{
  *(FSlateAttributeBase **)((longlong)this + 0x20) = param_1;
  return;
}

// SetAttribute @ 142834d20

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        *)param_1;
  return;
}

// SetAttribute @ 142834d30

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 142834d40

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// UpdateAttribute @ 142838430

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::UpdateAttribute(void *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)((longlong)this + 0x10);
      }
      cVar1 = (**(code **)(*plVar2 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (**(char **)((longlong)this + 0x20) != cVar1) {
        **(char **)((longlong)this + 0x20) = cVar1;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_1428384d3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1428384d3:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142838500

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      bVar2 = (bool)(**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (this->Attribute->Value != bVar2) {
        this->Attribute->Value = bVar2;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_1428385a3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1428385a3:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1428385d0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,local_38);
  if ((*(int *)&(this->Getter).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) {
LAB_14283865e:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 == '\0') goto LAB_14283865e;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,local_38);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    fVar3 = (float)(**(code **)(*plVar2 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
    if (fVar3 != this->Attribute->Value) {
      this->Attribute->Value = fVar3;
      *(undefined2 *)&param_1->_padding_ = 0x100;
      goto LAB_14283866d;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_14283866d:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142838690

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  bool bVar1;
  TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar2;
  char cVar3;
  FUpdateAttributeResult FVar4;
  longlong *plVar5;
  TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  local_28;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
  FVar4 = SUB82(param_1,0);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar5 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar5 + 0x60))(plVar5,&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      pTVar2 = this->Attribute;
      bVar1 = (pTVar2->Value).bIsSet;
      if ((bVar1 != local_28.Value.bIsSet) ||
         ((bVar1 != false && (local_28.Value.TypedValue != (pTVar2->Value).TypedValue)))) {
        if (&local_28 != pTVar2) {
          if (local_28.Value.bIsSet != false) {
            (pTVar2->Value).TypedValue = local_28.Value.TypedValue;
            (pTVar2->Value).bIsSet = true;
            *(undefined2 *)&param_1->_padding_ = 0x100;
            return FVar4;
          }
          if (bVar1 != false) {
            (pTVar2->Value).bIsSet = false;
          }
        }
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return FVar4;
      }
      goto LAB_14283878b;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14283878b:
  *(undefined2 *)&param_1->_padding_ = 0;
  return FVar4;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 142848d60

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 142848da0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 142848de0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 142848e20

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 142848e60

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// GetAttribute @ 142874f80

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 142874f90

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 142874fa0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 142874fb0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 142874fc0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(void *this)

{
  return *(FSlateAttributeBase **)((longlong)this + 0x20);
}

// GetDelegateHandle @ 142876300

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 142876360

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1428763c0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 142876420

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 142876480

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// SetAttribute @ 1428957f0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 142895800

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 142895810

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 142895820

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 142895830

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(void *this,FSlateAttributeBase *param_1)

{
  *(FSlateAttributeBase **)((longlong)this + 0x20) = param_1;
  return;
}

// UpdateAttribute @ 14289eba0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  TVector2<double>_u_0 *pTVar3;
  char cVar4;
  longlong *plVar5;
  TVector2<double>_u_0 local_48;
  char local_38;
  FReadAccessScope local_30;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_30);
  puVar1 = &(this->Getter).field_0x8;
  if ((*(int *)&(this->Getter).field_0x10 == 0) ||
     (plVar5 = *(longlong **)puVar1, plVar5 == (longlong *)0x0)) {
LAB_14289ebf0:
    bVar2 = false;
  }
  else {
    cVar4 = (**(code **)(*plVar5 + 0x38))();
    if (cVar4 == '\0') goto LAB_14289ebf0;
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_30);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)puVar1;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    pTVar3 = (TVector2<double>_u_0 *)this->Attribute;
    bVar2 = *(bool *)&(&pTVar3->_s_0)[1].X;
    if ((bVar2 != (bool)local_38) ||
       ((bVar2 != false &&
        ((local_48._s_0.X !=
          (((TOptional<UE::Math::TVector2<double>_> *)&(pTVar3->_s_0).X)->TypedValue).field0_0x0.
          _s_0.X || (local_48._s_0.Y != (pTVar3->_s_0).Y)))))) {
      if (&local_48 != pTVar3) {
        if (local_38 != '\0') {
          *(undefined2 *)&param_1->_padding_ = 0x101;
          (((TOptional<UE::Math::TVector2<double>_> *)&(pTVar3->_s_0).X)->TypedValue).field0_0x0.
          _s_0.X = local_48._s_0.X;
          (pTVar3->_s_0).Y = local_48._s_0.Y;
          *(bool *)&(&pTVar3->_s_0)[1].X = true;
          goto LAB_14289eca7;
        }
        if (bVar2 != false) {
          *(bool *)&(&pTVar3->_s_0)[1].X = false;
        }
      }
      *(undefined2 *)&param_1->_padding_ = 0x101;
      goto LAB_14289eca7;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_14289eca7:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 14289ecd0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  FReadAccessScope local_58;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_58);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->Getter).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar4 + 0x38))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_58);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    pTVar1 = this->Attribute;
    if (((local_38 != (pTVar1->Value).field0_0x0._s_0.X) ||
        (dStack_30 != (pTVar1->Value).field0_0x0._s_0.Y)) ||
       ((local_28 != (pTVar1->Value).field0_0x0._s_0.Z ||
        (dStack_20 != (pTVar1->Value).field0_0x0._s_0.W)))) {
      (pTVar1->Value).field0_0x0._s_0.X = local_38;
      (pTVar1->Value).field0_0x0._s_0.Y = dStack_30;
      *(undefined2 *)&param_1->_padding_ = 0x100;
      (pTVar1->Value).field0_0x0._s_0.Z = local_28;
      (pTVar1->Value).field0_0x0._s_0.W = dStack_20;
      goto LAB_14289edd2;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_14289edd2:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 14289edf0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      pTVar1 = this->Attribute;
      if (((((float)local_38._0_4_ != (pTVar1->Value).field0_0x0._s_0.R) ||
           ((float)local_38._4_4_ != (pTVar1->Value).field0_0x0._s_0.G)) ||
          (fStack_30 != (pTVar1->Value).field0_0x0._s_0.B)) ||
         (fStack_2c != (pTVar1->Value).field0_0x0._s_0.A)) {
        *(undefined2 *)&param_1->_padding_ = 0x102;
        *(ulonglong *)&(pTVar1->Value).field0_0x0 = CONCAT44(local_38._4_4_,local_38._0_4_);
        *(ulonglong *)((longlong)&(pTVar1->Value).field0_0x0 + 8) = CONCAT44(fStack_2c,fStack_30);
        return SUB82(param_1,0);
      }
      goto LAB_14289eed0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_38);
LAB_14289eed0:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 14289eef0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  int iVar1;
  TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  bool bVar5;
  FUpdateAttributeResult FVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  FVar6 = SUB82(param_1,0);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(this->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar7 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    FVar8.Data = local_38.Value.AllocatorInstance.Data;
    pTVar2 = this->Attribute;
    iVar1 = (pTVar2->Value).ArrayNum;
    if ((iVar1 != local_38.Value.ArrayNum) ||
       (bVar5 = CompareItems<FLinearColor,int>
                          ((FLinearColor *)(pTVar2->Value).AllocatorInstance.Data,
                           (FLinearColor *)local_38.Value.AllocatorInstance.Data,iVar1), !bVar5)) {
      if (pTVar2 != &local_38) {
        pFVar3 = (pTVar2->Value).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
          FVar8.Data = local_38.Value.AllocatorInstance.Data;
        }
        (pTVar2->Value).AllocatorInstance.Data = FVar8.Data;
        local_38.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar2->Value).ArrayNum = local_38.Value.ArrayNum;
        (pTVar2->Value).ArrayMax = local_38.Value.ArrayMax;
        FVar8.Data = (FScriptContainerElement *)0x0;
        local_38.Value.ArrayNum = 0;
        local_38.Value.ArrayMax = 0;
      }
      *(undefined2 *)&param_1->_padding_ = 0x102;
      if (FVar8.Data == (FScriptContainerElement *)0x0) {
        return FVar6;
      }
      FMemory::Free(FVar8.Data);
      return FVar6;
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
  return FVar6;
}

// UpdateAttribute @ 14289f040

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(void *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)((longlong)this + 0x10);
      }
      cVar1 = (**(code **)(*plVar2 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (**(char **)((longlong)this + 0x20) != cVar1) {
        **(char **)((longlong)this + 0x20) = cVar1;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_14289f0e3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_14289f0e3:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1428bb5c0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1428bb600

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1428bb640

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1428bb680

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1428bb6c0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1428bb700

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1428bb740

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1428bb780

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1428bb7c0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// GetAttribute @ 14293bce0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14293bcf0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14293bd00

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14293bd10

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14293bd20

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14293bd30

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14293bd40

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(void *this)

{
  return *(FSlateAttributeBase **)((longlong)this + 0x20);
}

// GetAttribute @ 14293bd50

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(void *this)

{
  return *(FSlateAttributeBase **)((longlong)this + 0x20);
}

// GetAttribute @ 14293bd60

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetDelegateHandle @ 14293f650

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 14293f6b0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 14293f710

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 14293f770

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 14293f7d0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 14293f830

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 14293f890

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 14293f8f0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 14293f950

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// SetAttribute @ 14298e5b0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 14298e5c0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 14298e5d0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 14298e5e0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 14298e5f0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 14298e600

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 14298e610

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(void *this,FSlateAttributeBase *param_1)

{
  *(FSlateAttributeBase **)((longlong)this + 0x20) = param_1;
  return;
}

// SetAttribute @ 14298e620

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(void *this,FSlateAttributeBase *param_1)

{
  *(FSlateAttributeBase **)((longlong)this + 0x20) = param_1;
  return;
}

// SetAttribute @ 14298e630

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// UpdateAttribute @ 1429ae3a0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,local_38);
  if ((*(int *)&(this->Getter).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) {
LAB_1429ae42e:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 == '\0') goto LAB_1429ae42e;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,local_38);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    fVar3 = (float)(**(code **)(*plVar2 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
    if (fVar3 != this->Attribute->Value) {
      this->Attribute->Value = fVar3;
      *(undefined2 *)&param_1->_padding_ = 0x101;
      goto LAB_1429ae43d;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_1429ae43d:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1429ae460

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,local_38);
  if ((*(int *)&(this->Getter).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) {
LAB_1429ae4ee:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 == '\0') goto LAB_1429ae4ee;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,local_38);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    fVar3 = (float)(**(code **)(*plVar2 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
    if (fVar3 != this->Attribute->Value) {
      this->Attribute->Value = fVar3;
      *(undefined2 *)&param_1->_padding_ = 0x102;
      goto LAB_1429ae4fd;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_1429ae4fd:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1429ae520

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  bool bVar1;
  TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar2;
  char cVar3;
  FUpdateAttributeResult FVar4;
  longlong *plVar5;
  TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  local_28;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
  FVar4 = SUB82(param_1,0);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar5 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar5 + 0x60))(plVar5,&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      pTVar2 = this->Attribute;
      bVar1 = (pTVar2->Value).bIsSet;
      if ((bVar1 != local_28.Value.bIsSet) ||
         ((bVar1 != false && ((pTVar2->Value).TypedValue != local_28.Value.TypedValue)))) {
        if (&local_28 != pTVar2) {
          if (local_28.Value.bIsSet != false) {
            (pTVar2->Value).TypedValue = local_28.Value.TypedValue;
            (pTVar2->Value).bIsSet = true;
            *(undefined2 *)&param_1->_padding_ = 0x100;
            return FVar4;
          }
          if (bVar1 != false) {
            (pTVar2->Value).bIsSet = false;
          }
        }
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return FVar4;
      }
      goto LAB_1429ae61a;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_1429ae61a:
  *(undefined2 *)&param_1->_padding_ = 0;
  return FVar4;
}

// UpdateAttribute @ 1429ae640

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar1;
  char cVar2;
  longlong *plVar3;
  double local_38;
  FMRSWRecursiveAccessDetector *pFStack_30;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      pTVar1 = this->Attribute;
      if ((local_38 != (pTVar1->Value).field0_0x0._s_0.X) ||
         ((double)pFStack_30 != (pTVar1->Value).field0_0x0._s_0.Y)) {
        *(undefined2 *)&param_1->_padding_ = 0x102;
        (pTVar1->Value).field0_0x0._s_0.X = local_38;
        (pTVar1->Value).field0_0x0._s_0.Y = (double)pFStack_30;
        return SUB82(param_1,0);
      }
      goto LAB_1429ae706;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
LAB_1429ae706:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1429ae730

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      pTVar1 = this->Attribute;
      if (((((float)local_38._0_4_ != (pTVar1->Value).Left) || (fStack_30 != (pTVar1->Value).Right))
          || ((float)local_38._4_4_ != (pTVar1->Value).Top)) ||
         (fStack_2c != (pTVar1->Value).Bottom)) {
        *(undefined2 *)&param_1->_padding_ = 0x101;
        (pTVar1->Value).Left = (float)local_38._0_4_;
        (pTVar1->Value).Top = (float)local_38._4_4_;
        (pTVar1->Value).Right = fStack_30;
        (pTVar1->Value).Bottom = fStack_2c;
        return SUB82(param_1,0);
      }
      goto LAB_1429ae810;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_38);
LAB_1429ae810:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1429ae830

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
  FOptionalSize local_res8 [2];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (local_res8[0].Size != (this->Attribute->Value).Size) {
        (this->Attribute->Value).Size = local_res8[0].Size;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_1429ae8dc;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1429ae8dc:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1429ae900

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_1429ae9a0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1429ae9a0:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1429ae9c0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_1429aea60;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1429aea60:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1429aea80

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      bVar2 = (bool)(**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (this->Attribute->Value != bVar2) {
        this->Attribute->Value = bVar2;
        *(undefined2 *)&param_1->_padding_ = 0x102;
        return SUB82(param_1,0);
      }
      goto LAB_1429aeb23;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1429aeb23:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_> @ 1429bdcd0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1429bdd10

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1429bdd50

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_> @ 1429bdd90

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
           *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1429bddd0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1429bde10

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1429bde50

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1429bde90

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// GetAttribute @ 1429e8dd0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1429e8de0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1429e8df0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1429e8e00

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1429e8e10

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(void *this)

{
  return *(FSlateAttributeBase **)((longlong)this + 0x20);
}

// GetAttribute @ 1429e8e20

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(void *this)

{
  return *(FSlateAttributeBase **)((longlong)this + 0x20);
}

// GetAttribute @ 1429e8e30

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(void *this)

{
  return *(FSlateAttributeBase **)((longlong)this + 0x20);
}

// GetAttribute @ 1429e8e40

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(void *this)

{
  return *(FSlateAttributeBase **)((longlong)this + 0x20);
}

// GetDelegateHandle @ 1429eb1b0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// GetDelegateHandle @ 1429eb210

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1429eb270

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1429eb2d0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
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

// GetDelegateHandle @ 1429eb330

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1429eb390

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1429eb3f0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1429eb450

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// SetAttribute @ 142a074a0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        *)param_1;
  return;
}

// SetAttribute @ 142a074b0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 142a074c0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 142a074d0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
        *)param_1;
  return;
}

// SetAttribute @ 142a074e0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(void *this,FSlateAttributeBase *param_1)

{
  *(FSlateAttributeBase **)((longlong)this + 0x20) = param_1;
  return;
}

// SetAttribute @ 142a074f0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(void *this,FSlateAttributeBase *param_1)

{
  *(FSlateAttributeBase **)((longlong)this + 0x20) = param_1;
  return;
}

// SetAttribute @ 142a07500

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(void *this,FSlateAttributeBase *param_1)

{
  *(FSlateAttributeBase **)((longlong)this + 0x20) = param_1;
  return;
}

// SetAttribute @ 142a07510

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(void *this,FSlateAttributeBase *param_1)

{
  *(FSlateAttributeBase **)((longlong)this + 0x20) = param_1;
  return;
}

// UpdateAttribute @ 142a11d90

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  *pTVar1;
  char cVar2;
  longlong *plVar3;
  double local_38;
  FMRSWRecursiveAccessDetector *pFStack_30;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      pTVar1 = this->Attribute;
      if ((local_38 != (pTVar1->Value).field0_0x0._s_0.X) ||
         ((double)pFStack_30 != (pTVar1->Value).field0_0x0._s_0.Y)) {
        *(undefined2 *)&param_1->_padding_ = 0x100;
        (pTVar1->Value).field0_0x0._s_0.X = local_38;
        (pTVar1->Value).field0_0x0._s_0.Y = (double)pFStack_30;
        return SUB82(param_1,0);
      }
      goto LAB_142a11e56;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
LAB_142a11e56:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142a11e80

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar1;
  char cVar2;
  longlong *plVar3;
  double local_38;
  FMRSWRecursiveAccessDetector *pFStack_30;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      pTVar1 = this->Attribute;
      if ((local_38 != (pTVar1->Value).field0_0x0._s_0.X) ||
         ((double)pFStack_30 != (pTVar1->Value).field0_0x0._s_0.Y)) {
        *(undefined2 *)&param_1->_padding_ = 0x101;
        (pTVar1->Value).field0_0x0._s_0.X = local_38;
        (pTVar1->Value).field0_0x0._s_0.Y = (double)pFStack_30;
        return SUB82(param_1,0);
      }
      goto LAB_142a11f46;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
LAB_142a11f46:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142a11f70

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  FSlateFontInfo *this_00;
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  FReadAccessScope local_98;
  FSlateFontInfo local_78;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_98);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar3 + 0x38))(), cVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_98);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    this_00 = &this->Attribute->Value;
    bVar2 = FSlateFontInfo::IsIdenticalTo(this_00,&local_78);
    if (!bVar2) {
      FSlateFontInfo::operator=(this_00,&local_78);
      *(undefined2 *)&param_1->_padding_ = 0x100;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.CompositeFont.SharedReferenceCount.ReferenceController);
      goto LAB_142a12060;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_142a12060:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142a12080

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  bool bVar2;
  FUpdateAttributeResult FVar3;
  longlong *plVar4;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
  FVar3 = SUB82(param_1,0);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->Getter).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar4 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    bVar2 = FText::IdenticalTo(&this->Attribute->Value,(FText *)&local_38,
                               LexicalCompareInvariants|DeepCompare);
    if (!bVar2) {
      FText::operator=(&this->Attribute->Value,(FText *)&local_38);
      *(undefined2 *)&param_1->_padding_ = 0x100;
      if ((ITextData *)local_38.DestructionSentinel._0_8_ == (ITextData *)0x0) {
        return FVar3;
      }
      (**(code **)((longlong)*(ITextData *)local_38.DestructionSentinel._0_8_ + 0x10))();
      return FVar3;
    }
    if ((ITextData *)local_38.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38.DestructionSentinel._0_8_ + 0x10))();
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
  return FVar3;
}

// UpdateAttribute @ 142a12190

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_142a12230;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142a12230:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142a12250

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(void *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)((longlong)this + 0x10);
      }
      cVar1 = (**(code **)(*plVar2 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (**(char **)((longlong)this + 0x20) != cVar1) {
        **(char **)((longlong)this + 0x20) = cVar1;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_142a122f3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142a122f3:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142a12320

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(void *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)((longlong)this + 0x10);
      }
      cVar1 = (**(code **)(*plVar2 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (**(char **)((longlong)this + 0x20) != cVar1) {
        **(char **)((longlong)this + 0x20) = cVar1;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_142a123c3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142a123c3:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142a123f0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_142a12490;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142a12490:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 142a18700

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// GetAttribute @ 142a28820

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(void *this)

{
  return *(FSlateAttributeBase **)((longlong)this + 0x20);
}

// GetDelegateHandle @ 142a28f60

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// SetAttribute @ 142a35ea0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(void *this,FSlateAttributeBase *param_1)

{
  *(FSlateAttributeBase **)((longlong)this + 0x20) = param_1;
  return;
}

// UpdateAttribute @ 142a37e30

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(void *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)((longlong)this + 0x10);
      }
      cVar1 = (**(code **)(*plVar2 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (**(char **)((longlong)this + 0x20) != cVar1) {
        **(char **)((longlong)this + 0x20) = cVar1;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_142a37ed3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142a37ed3:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

