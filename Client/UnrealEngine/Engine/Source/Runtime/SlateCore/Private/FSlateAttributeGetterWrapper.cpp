// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 80

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_> @ 142549fc0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_> @ 14254a000

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 14254a040

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 14254a080

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 14254a0c0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_> @ 14254a100

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
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

// GetAttribute @ 14257e8d0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14257e8e0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14257e8f0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14257e900

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14257e910

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 14257e920

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetDelegateHandle @ 142580a40

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// GetDelegateHandle @ 142580aa0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// GetDelegateHandle @ 142580b00

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 142580b60

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 142580bc0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 142580c20

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
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

// SetAttribute @ 142590780

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        *)param_1;
  return;
}

// SetAttribute @ 142590790

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        *)param_1;
  return;
}

// SetAttribute @ 1425907a0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 1425907b0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 1425907c0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 1425907d0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
        *)param_1;
  return;
}

// UpdateAttribute @ 1425ab160

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  int iVar2;
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
      iVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (this->Attribute->Value != iVar2) {
        this->Attribute->Value = iVar2;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_1425ab200;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1425ab200:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1425ab220

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
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
      goto LAB_1425ab300;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_38);
LAB_1425ab300:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1425ab320

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  int iVar2;
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
      iVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (this->Attribute->Value != iVar2) {
        this->Attribute->Value = iVar2;
        *(undefined2 *)&param_1->_padding_ = 0x101;
        return SUB82(param_1,0);
      }
      goto LAB_1425ab3c0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1425ab3c0:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1425ab3e0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  int iVar2;
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
      iVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (this->Attribute->Value != iVar2) {
        this->Attribute->Value = iVar2;
        *(undefined2 *)&param_1->_padding_ = 0x102;
        return SUB82(param_1,0);
      }
      goto LAB_1425ab480;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1425ab480:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1425ab4a0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  int iVar2;
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
      iVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (this->Attribute->Value != iVar2) {
        this->Attribute->Value = iVar2;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_1425ab540;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1425ab540:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1425ab560

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
  TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
  local_res8 [2];
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
      if (local_res8[0].Value.Value != (FConstructionCounter)(this->Attribute->Value).Value) {
        (this->Attribute->Value).Value = (int)local_res8[0].Value.Value;
        UE::Slate::Private::FConstructionCounter::MoveOperatorCounter =
             UE::Slate::Private::FConstructionCounter::MoveOperatorCounter + 1;
        *(undefined2 *)&param_1->_padding_ = 0x101;
        return SUB82(param_1,0);
      }
      goto LAB_1425ab60d;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1425ab60d:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_> @ 1425c0050

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_> @ 1425c0090

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1425c00d0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1425c0110

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1425c0150

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1425c0190

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1425c01d0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_> @ 1425c0210

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1425c0250

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// ~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_> @ 1425c0290

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::
~FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetAttribute @ 1425ddd80

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1425ddd90

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1425ddda0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1425dddb0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1425dddc0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1425dddd0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1425ddde0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1425dddf0

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1425dde00

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetAttribute @ 1425dde10

FSlateAttributeBase * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this)

{
  return (FSlateAttributeBase *)this->Attribute;
}

// GetDelegateHandle @ 1425e0a60

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// GetDelegateHandle @ 1425e0ac0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
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

// GetDelegateHandle @ 1425e0b20

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1425e0b80

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1425e0be0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1425e0c40

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1425e0ca0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1425e0d00

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
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

// GetDelegateHandle @ 1425e0d60

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// GetDelegateHandle @ 1425e0dc0

FDelegateHandle __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::GetDelegateHandle(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// SetAttribute @ 1425fb890

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        *)param_1;
  return;
}

// SetAttribute @ 1425fb8a0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
        *)param_1;
  return;
}

// SetAttribute @ 1425fb8b0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 1425fb8c0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 1425fb8d0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 1425fb8e0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 1425fb8f0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 1425fb900

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
        *)param_1;
  return;
}

// SetAttribute @ 1425fb910

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// SetAttribute @ 1425fb920

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::SetAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
               *this,FSlateAttributeBase *param_1)

{
  this->Attribute =
       (TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)param_1;
  return;
}

// UpdateAttribute @ 142603610

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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
LAB_14260369e:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 == '\0') goto LAB_14260369e;
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
      goto LAB_1426036ad;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_1426036ad:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1426036d0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  FSlateBrush *pFVar2;
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
      pFVar2 = (FSlateBrush *)(**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (this->Attribute->Value != pFVar2) {
        this->Attribute->Value = pFVar2;
        *(undefined2 *)&param_1->_padding_ = 0x102;
        return SUB82(param_1,0);
      }
      goto LAB_142603773;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142603773:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1426037a0

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  FSlateBrush *pFVar2;
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
      pFVar2 = (FSlateBrush *)(**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (this->Attribute->Value != pFVar2) {
        this->Attribute->Value = pFVar2;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_142603843;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142603843:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142603870

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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
LAB_1426038c0:
    bVar2 = false;
  }
  else {
    cVar4 = (**(code **)(*plVar5 + 0x38))();
    if (cVar4 == '\0') goto LAB_1426038c0;
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
          *(undefined2 *)&param_1->_padding_ = 0x100;
          (((TOptional<UE::Math::TVector2<double>_> *)&(pTVar3->_s_0).X)->TypedValue).field0_0x0.
          _s_0.X = local_48._s_0.X;
          (pTVar3->_s_0).Y = local_48._s_0.Y;
          *(bool *)&(&pTVar3->_s_0)[1].X = true;
          goto LAB_142603977;
        }
        if (bVar2 != false) {
          *(bool *)&(&pTVar3->_s_0)[1].X = false;
        }
      }
      *(undefined2 *)&param_1->_padding_ = 0x100;
      goto LAB_142603977;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_142603977:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 1426039a0

/* WARNING: Type propagation algorithm not settling */

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar3;
  float afVar4 [2];
  float afVar5 [2];
  TVector2<float>_u_0 TVar6;
  char cVar7;
  longlong *plVar8;
  FReadAccessScope local_58;
  TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_58);
  puVar1 = &(this->Getter).field_0x8;
  if ((*(int *)&(this->Getter).field_0x10 == 0) ||
     (plVar8 = *(longlong **)puVar1, plVar8 == (longlong *)0x0)) {
LAB_1426039ef:
    bVar2 = false;
  }
  else {
    cVar7 = (**(code **)(*plVar8 + 0x38))();
    if (cVar7 == '\0') goto LAB_1426039ef;
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_58);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)puVar1;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,&local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    pTVar3 = this->Attribute;
    bVar2 = (pTVar3->Value).bIsSet;
    if (bVar2 != local_40.Value.bIsSet) {
LAB_142603ad5:
      if (&local_40 != pTVar3) {
        if (local_40.Value.bIsSet != false) {
          afVar4[1] = local_40.Value.TypedValue.M.M[0][1];
          afVar4[0] = local_40.Value.TypedValue.M.M[0][0];
          afVar5[1] = local_40.Value.TypedValue.M.M[1][1];
          afVar5[0] = local_40.Value.TypedValue.M.M[1][0];
          *(undefined2 *)&param_1->_padding_ = 0x100;
          (pTVar3->Value).TypedValue.M.M[0] = afVar4;
          (pTVar3->Value).TypedValue.M.M[1] = afVar5;
          TVar6._s_0.Y = local_40.Value.TypedValue.Trans.field0_0x0._s_0.Y;
          TVar6._s_0.X = local_40.Value.TypedValue.Trans.field0_0x0._s_0.X;
          (pTVar3->Value).TypedValue.Trans.field0_0x0 = TVar6;
          (pTVar3->Value).bIsSet = true;
          goto LAB_142603b17;
        }
        if ((pTVar3->Value).bIsSet != false) {
          (pTVar3->Value).bIsSet = false;
        }
      }
      *(undefined2 *)&param_1->_padding_ = 0x100;
      goto LAB_142603b17;
    }
    if (bVar2 != false) {
      if ((((__real_38d1b717 <
             (float)((uint)((pTVar3->Value).TypedValue.M.M[0][0] -
                           local_40.Value.TypedValue.M.M[0][0]) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
           (__real_38d1b717 <
            (float)((uint)((pTVar3->Value).TypedValue.M.M[0][1] -
                          local_40.Value.TypedValue.M.M[0][1]) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
          (__real_38d1b717 <
           (float)((uint)((pTVar3->Value).TypedValue.M.M[1][0] - local_40.Value.TypedValue.M.M[1][0]
                         ) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         (((__real_38d1b717 <
            (float)((uint)((pTVar3->Value).TypedValue.M.M[1][1] -
                          local_40.Value.TypedValue.M.M[1][1]) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) ||
           (local_40.Value.TypedValue.Trans.field0_0x0._s_0.X !=
            (pTVar3->Value).TypedValue.Trans.field0_0x0._s_0.X)) ||
          (local_40.Value.TypedValue.Trans.field0_0x0._s_0.Y !=
           (pTVar3->Value).TypedValue.Trans.field0_0x0._s_0.Y)))) goto LAB_142603ad5;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_142603b17:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142603b40

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
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
      goto LAB_142603c06;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
LAB_142603c06:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142603c30

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  char cVar1;
  longlong *plVar2;
  TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  local_res8 [8];
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
      if ((EVisibility)(this->Attribute->Value).Value.Value != local_res8[0].Value.Value.Value) {
        (this->Attribute->Value).Value.Value = (uchar)local_res8[0].Value.Value.Value;
        *(undefined2 *)&param_1->_padding_ = 0x100;
        return SUB82(param_1,0);
      }
      goto LAB_142603cd8;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142603cd8:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142603d00

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
                  *this,SWidget *param_1)

{
  undefined1 *puVar1;
  ESlateColorStylingMode EVar2;
  TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
  *pTVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  bool local_38;
  EStyleColor EStack_37;
  undefined2 uStack_36;
  FReadAccessScope local_30;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)local_48);
  puVar1 = &(this->Getter).field_0x8;
  if ((*(int *)&(this->Getter).field_0x10 == 0) ||
     (plVar6 = *(longlong **)puVar1, plVar6 == (longlong *)0x0)) {
LAB_142603d50:
    bVar4 = false;
  }
  else {
    cVar5 = (**(code **)(*plVar6 + 0x38))();
    if (cVar5 == '\0') goto LAB_142603d50;
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_48);
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_30);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)puVar1;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    pTVar3 = this->Attribute;
    if (((((float)local_48._0_4_ != (pTVar3->Value).SpecifiedColor.field0_0x0._s_0.R) ||
         ((float)local_48._4_4_ != (pTVar3->Value).SpecifiedColor.field0_0x0._s_0.G)) ||
        (fStack_40 != (pTVar3->Value).SpecifiedColor.field0_0x0._s_0.B)) ||
       (((fStack_3c != (pTVar3->Value).SpecifiedColor.field0_0x0._s_0.A ||
         (EVar2 = (pTVar3->Value).ColorUseRule, (bool)EVar2 != local_38)) ||
        ((EVar2 == UseColor_ColorTable && ((pTVar3->Value).ColorTableId != EStack_37)))))) {
      *(undefined2 *)&param_1->_padding_ = 0x102;
      *(ulonglong *)&(pTVar3->Value).SpecifiedColor.field0_0x0 =
           CONCAT44(local_48._4_4_,local_48._0_4_);
      *(ulonglong *)((longlong)&(pTVar3->Value).SpecifiedColor.field0_0x0 + 8) =
           CONCAT44(fStack_3c,fStack_40);
      (pTVar3->Value).ColorUseRule = local_38;
      (pTVar3->Value).ColorTableId = EStack_37;
      *(undefined2 *)&(pTVar3->Value).field_0x12 = uStack_36;
      goto LAB_142603e0a;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_142603e0a:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142603e30

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
                  *this,SWidget *param_1)

{
  undefined1 *puVar1;
  ESlateColorStylingMode EVar2;
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *pTVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  bool local_38;
  EStyleColor EStack_37;
  undefined2 uStack_36;
  FReadAccessScope local_30;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)local_48);
  puVar1 = &(this->Getter).field_0x8;
  if ((*(int *)&(this->Getter).field_0x10 == 0) ||
     (plVar6 = *(longlong **)puVar1, plVar6 == (longlong *)0x0)) {
LAB_142603e80:
    bVar4 = false;
  }
  else {
    cVar5 = (**(code **)(*plVar6 + 0x38))();
    if (cVar5 == '\0') goto LAB_142603e80;
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_48);
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_30);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)puVar1;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    pTVar3 = this->Attribute;
    if (((((float)local_48._0_4_ != (pTVar3->Value).SpecifiedColor.field0_0x0._s_0.R) ||
         ((float)local_48._4_4_ != (pTVar3->Value).SpecifiedColor.field0_0x0._s_0.G)) ||
        (fStack_40 != (pTVar3->Value).SpecifiedColor.field0_0x0._s_0.B)) ||
       (((fStack_3c != (pTVar3->Value).SpecifiedColor.field0_0x0._s_0.A ||
         (EVar2 = (pTVar3->Value).ColorUseRule, (bool)EVar2 != local_38)) ||
        ((EVar2 == UseColor_ColorTable && ((pTVar3->Value).ColorTableId != EStack_37)))))) {
      *(undefined2 *)&param_1->_padding_ = 0x100;
      *(ulonglong *)&(pTVar3->Value).SpecifiedColor.field0_0x0 =
           CONCAT44(local_48._4_4_,local_48._0_4_);
      *(ulonglong *)((longlong)&(pTVar3->Value).SpecifiedColor.field0_0x0 + 8) =
           CONCAT44(fStack_3c,fStack_40);
      (pTVar3->Value).ColorUseRule = local_38;
      (pTVar3->Value).ColorTableId = EStack_37;
      *(undefined2 *)&(pTVar3->Value).field_0x12 = uStack_36;
      goto LAB_142603f3a;
    }
  }
  *(undefined2 *)&param_1->_padding_ = 0;
LAB_142603f3a:
  return SUB82(param_1,0);
}

// UpdateAttribute @ 142603f60

FUpdateAttributeResult __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::UpdateAttribute(FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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
      goto LAB_142604003;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142604003:
  *(undefined2 *)&param_1->_padding_ = 0;
  return SUB82(param_1,0);
}

