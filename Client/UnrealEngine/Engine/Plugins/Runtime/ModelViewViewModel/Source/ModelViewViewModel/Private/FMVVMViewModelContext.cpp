// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 7

// StaticStruct @ 14a738b30

UScriptStruct * __cdecl FMVVMViewModelContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewModelContext.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMViewModelContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewModelContext,(UObject *)pUVar1,
                         L"MVVMViewModelContext");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMViewModelContext.OuterSingleton;
}

// FMVVMViewModelContext @ 14a73f450

FMVVMViewModelContext * __thiscall
FMVVMViewModelContext::FMVVMViewModelContext
          (FMVVMViewModelContext *this,FMVVMViewModelContext *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = (param_1->ContextClass).Class.field0_0x0.DebugPtr;
  (this->ContextClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ContextName = param_1->ContextName;
  return this;
}

// operator== @ 14a740b50

bool __thiscall
FMVVMViewModelContext::operator==(FMVVMViewModelContext *this,FMVVMViewModelContext *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  if (param_1->ContextName == this->ContextName) {
    pUVar2 = (this->ContextClass).Class.field0_0x0.DebugPtr;
    pUVar6 = (UClass *)0x0;
    pUVar5 = pUVar6;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar4 = UMVVMViewModelBase::StaticClass(), pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar5 = (this->ContextClass).Class.field0_0x0.DebugPtr;
      }
    }
    pUVar2 = (param_1->ContextClass).Class.field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar4 = UMVVMViewModelBase::StaticClass(), pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = (param_1->ContextClass).Class.field0_0x0.DebugPtr;
      }
    }
    if (pUVar5 == pUVar6) {
      return true;
    }
  }
  return false;
}

// IsCompatibleWith @ 14a759720

bool __thiscall
FMVVMViewModelContext::IsCompatibleWith(FMVVMViewModelContext *this,FMVVMViewModelContext *param_1)

{
  bool bVar1;
  
  if (param_1->ContextName == this->ContextName) {
    bVar1 = IsCompatibleWith(this,&param_1->ContextClass);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsCompatibleWith @ 14a759750

bool __thiscall
FMVVMViewModelContext::IsCompatibleWith
          (FMVVMViewModelContext *this,TSubclassOf<UMVVMViewModelBase> *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return false;
  }
  pUVar3 = UMVVMViewModelBase::StaticClass();
  if (pUVar3 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar3->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return false;
  }
  if ((param_1->Class).field0_0x0.DebugPtr == (UClass *)0x0) {
    return false;
  }
  pUVar5 = (this->ContextClass).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return false;
  }
  pUVar3 = UMVVMViewModelBase::StaticClass();
  if (pUVar3 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar3->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return false;
  }
  pUVar5 = (this->ContextClass).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return false;
  }
  pUVar3 = UMVVMViewModelBase::StaticClass();
  if (pUVar3 != (UClass *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar5 = (this->ContextClass).Class.field0_0x0.DebugPtr;
      goto LAB_14a759834;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a759834:
  pUVar3 = (param_1->Class).field0_0x0.DebugPtr;
  if ((pUVar3 != (UClass *)0x0) &&
     (pUVar4 = UMVVMViewModelBase::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pUVar3 = (param_1->Class).field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsCompatibleWith @ 14a7598c0

bool __thiscall
FMVVMViewModelContext::IsCompatibleWith(FMVVMViewModelContext *this,UMVVMViewModelBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  
  pUVar2 = (this->ContextClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar5 = UMVVMViewModelBase::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) &&
          (pUVar2 = (this->ContextClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) &&
         (param_1 != (UMVVMViewModelBase *)0x0)) {
        lVar3 = param_1->_padding_;
        pUVar5 = UMVVMViewModelBase::StaticClass();
        if (pUVar5 != (UClass *)0x0) {
          iVar1 = (int)pUVar5->_padding_;
          if (((int)pUVar2->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) &&
             (pUVar2 = (this->ContextClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
            iVar1 = (int)pUVar2->_padding_;
            if ((*(int *)(lVar3 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar2->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// IsValid @ 14a759f00

bool __thiscall FMVVMViewModelContext::IsValid(FMVVMViewModelContext *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if ((this->ContextName != (FName)0x0) &&
     (pUVar2 = (this->ContextClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
    pUVar4 = UMVVMViewModelBase::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((this->ContextClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        return true;
      }
    }
  }
  return false;
}

