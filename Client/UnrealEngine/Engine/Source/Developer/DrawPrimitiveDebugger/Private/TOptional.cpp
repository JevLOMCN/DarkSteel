// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 12

// TOptional<int> @ 146d022c0

TOptional<int> * __thiscall TOptional<int>::TOptional<int>(TOptional<int> *this,int *param_1)

{
  this->TypedValue = *param_1;
  this->bIsSet = true;
  return this;
}

// TOptional<int> @ 146d022e0

TOptional<int> * __thiscall TOptional<int>::TOptional<int>(TOptional<int> *this)

{
  this->bIsSet = false;
  return this;
}

// TOptional<enum_EShaderPlatform> @ 146d022f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TOptional<EShaderPlatform> * __thiscall
TOptional<enum_EShaderPlatform>::TOptional<enum_EShaderPlatform>
          (void *this,EShaderPlatform *param_1)

{
  *(EShaderPlatform *)this = *param_1;
  *(undefined1 *)((longlong)this + 2) = 1;
  return this;
}

// TOptional<enum_EMaterialQualityLevel::Type> @ 146d02310

TOptional<EMaterialQualityLevel::Type> * __thiscall
TOptional<enum_EMaterialQualityLevel::Type>::TOptional<enum_EMaterialQualityLevel::Type>
          (void *this,Type *param_1)

{
  *(Type *)this = *param_1;
  *(undefined1 *)((longlong)this + 1) = 1;
  return this;
}

// operator= @ 146d05790

TOptional<float> * __thiscall
TOptional<float>::operator=(TOptional<float> *this,TOptional<float> *param_1)

{
  if (param_1 != this) {
    if (param_1->bIsSet == false) {
      if (this->bIsSet != false) {
        this->bIsSet = false;
        return this;
      }
    }
    else {
      this->TypedValue = param_1->TypedValue;
      this->bIsSet = true;
    }
  }
  return this;
}

// operator= @ 146d057c0

TOptional<FAccessibleWidgetData> * __thiscall
TOptional<FAccessibleWidgetData>::operator=
          (TOptional<FAccessibleWidgetData> *this,TOptional<FAccessibleWidgetData> *param_1)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  ITextData *pIVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined1 local_res8 [8];
  FDestructionSentinel local_28;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                   &(this->TypedValue).AccessibleSummaryText.Getter);
        pIVar2 = (this->TypedValue).AccessibleSummaryText.Value.TextData.Reference;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))();
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                   &(this->TypedValue).AccessibleText.Getter);
        pIVar2 = (this->TypedValue).AccessibleText.Value.TextData.Reference;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))();
        }
      }
      *(byte *)&this->TypedValue =
           *(byte *)&this->TypedValue ^
           (this.bCanChildrenBeAccessible ^ param_1.bCanChildrenBeAccessible) & 1;
      (this->TypedValue).AccessibleBehavior = (param_1->TypedValue).AccessibleBehavior;
      (this->TypedValue).AccessibleSummaryBehavior = (param_1->TypedValue).AccessibleSummaryBehavior
      ;
      (this->TypedValue).AccessibleText.Value.TextData.Reference = (ITextData *)0x0;
      pIVar2 = (param_1->TypedValue).AccessibleText.Value.TextData.Reference;
      (this->TypedValue).AccessibleText.Value.TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      pTVar1 = &(this->TypedValue).AccessibleText.Getter;
      (this->TypedValue).AccessibleText.Value.Flags =
           (param_1->TypedValue).AccessibleText.Value.Flags;
      (this->TypedValue).AccessibleText.bIsSet = (param_1->TypedValue).AccessibleText.bIsSet;
      *(undefined8 *)pTVar1 = 0;
      *(undefined8 *)&(this->TypedValue).AccessibleText.Getter.field_0x8 = 0;
      *(undefined4 *)&(this->TypedValue).AccessibleText.Getter.field_0x10 = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(pTVar1,&(param_1->TypedValue).AccessibleText.Getter);
      (this->TypedValue).AccessibleSummaryText.Value.TextData.Reference = (ITextData *)0x0;
      pIVar2 = (param_1->TypedValue).AccessibleSummaryText.Value.TextData.Reference;
      (this->TypedValue).AccessibleSummaryText.Value.TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      pTVar1 = &(this->TypedValue).AccessibleSummaryText.Getter;
      (this->TypedValue).AccessibleSummaryText.Value.Flags =
           (param_1->TypedValue).AccessibleSummaryText.Value.Flags;
      (this->TypedValue).AccessibleSummaryText.bIsSet =
           (param_1->TypedValue).AccessibleSummaryText.bIsSet;
      *(undefined8 *)pTVar1 = 0;
      *(undefined8 *)&(this->TypedValue).AccessibleSummaryText.Getter.field_0x8 = 0;
      *(undefined4 *)&(this->TypedValue).AccessibleSummaryText.Getter.field_0x10 = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (pTVar1,&(param_1->TypedValue).AccessibleSummaryText.Getter);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->TypedValue).AccessibleSummaryText.Getter,(FWriteAccessScope *)&local_28);
      if ((*(int *)&(this->TypedValue).AccessibleSummaryText.Getter.field_0x10 != 0) &&
         (puVar3 = *(undefined8 **)&(this->TypedValue).AccessibleSummaryText.Getter.field_0x8,
         puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->TypedValue).AccessibleSummaryText.Getter.field_0x8,0
                   ,0,0x10);
        *(undefined4 *)&(this->TypedValue).AccessibleSummaryText.Getter.field_0x10 = 0;
      }
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      }
      pvVar4 = *(void **)&(this->TypedValue).AccessibleSummaryText.Getter.field_0x8;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&(this->TypedValue).AccessibleSummaryText.Getter);
      pIVar2 = (this->TypedValue).AccessibleSummaryText.Value.TextData.Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->TypedValue).AccessibleText.Getter,(FWriteAccessScope *)&local_28);
      if ((*(int *)&(this->TypedValue).AccessibleText.Getter.field_0x10 != 0) &&
         (puVar3 = *(undefined8 **)&(this->TypedValue).AccessibleText.Getter.field_0x8,
         puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->TypedValue).AccessibleText.Getter.field_0x8,0,0,0x10
                  );
        *(undefined4 *)&(this->TypedValue).AccessibleText.Getter.field_0x10 = 0;
      }
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      }
      pvVar4 = *(void **)&(this->TypedValue).AccessibleText.Getter.field_0x8;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&(this->TypedValue).AccessibleText.Getter);
      pIVar2 = (this->TypedValue).AccessibleText.Value.TextData.Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      this->bIsSet = false;
    }
  }
  return this;
}

// operator= @ 146d059f0

TOptional<FMargin> * __thiscall
TOptional<FMargin>::operator=(TOptional<FMargin> *this,TOptional<FMargin> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 != this) {
    if (param_1->bIsSet == false) {
      if (this->bIsSet != false) {
        this->bIsSet = false;
        return this;
      }
    }
    else {
      fVar1 = (param_1->TypedValue).Top;
      fVar2 = (param_1->TypedValue).Right;
      fVar3 = (param_1->TypedValue).Bottom;
      (this->TypedValue).Left = (param_1->TypedValue).Left;
      (this->TypedValue).Top = fVar1;
      (this->TypedValue).Right = fVar2;
      (this->TypedValue).Bottom = fVar3;
      this->bIsSet = true;
    }
  }
  return this;
}

// operator= @ 146d05a20

TOptional<TTransform2<float>_> * __thiscall
TOptional<TTransform2<float>_>::operator=
          (TOptional<TTransform2<float>_> *this,TOptional<TTransform2<float>_> *param_1)

{
  float afVar1 [2];
  
  if (param_1 != this) {
    if (param_1->bIsSet == false) {
      if (this->bIsSet != false) {
        this->bIsSet = false;
        return this;
      }
    }
    else {
      afVar1 = (param_1->TypedValue).M.M[1];
      (this->TypedValue).M.M[0] = (param_1->TypedValue).M.M[0];
      (this->TypedValue).M.M[1] = afVar1;
      (this->TypedValue).Trans.field0_0x0 = (param_1->TypedValue).Trans.field0_0x0;
      this->bIsSet = true;
    }
  }
  return this;
}

// operator= @ 146d05a60

TOptional<EMouseCursor::Type> * __thiscall
TOptional<enum_EMouseCursor::Type>::operator=(void *this,TOptional<EMouseCursor::Type> *param_1)

{
  if (param_1 != this) {
    if (param_1->bIsSet == false) {
      if (*(char *)((longlong)this + 4) != '\0') {
        *(undefined1 *)((longlong)this + 4) = 0;
        return this;
      }
    }
    else {
      *(Type *)this = param_1->TypedValue;
      *(undefined1 *)((longlong)this + 4) = 1;
    }
  }
  return this;
}

// Get @ 146d1af90

int * __thiscall TOptional<int>::Get(TOptional<int> *this,int *param_1)

{
  if (this->bIsSet == false) {
    this = (TOptional<int> *)param_1;
  }
  return &this->TypedValue;
}

// GetValue @ 146d226e0

int * __thiscall TOptional<int>::GetValue(TOptional<int> *this)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar3 = (int *)(*pcVar1)();
      return piVar3;
    }
  }
  return &this->TypedValue;
}

// IsSet @ 146d24860

bool __thiscall TOptional<int>::IsSet(TOptional<int> *this)

{
  return this->bIsSet;
}

