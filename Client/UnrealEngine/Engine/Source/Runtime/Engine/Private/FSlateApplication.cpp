// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetUserFromControllerId @ 147ec7450

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FSlateUser,1> * __thiscall
FSlateApplication::GetUserFromControllerId
          (FSlateApplication *this,TSharedPtr<FSlateUser,1> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateUser *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TSharedPtr<FSlateUser,1> *pTVar8;
  
  uVar6 = GetUserIndexForController(this,param_1);
  if (((int)uVar6 < 0) || ((this->Users).ArrayNum <= (int)uVar6)) {
    __return_storage_ptr__->Object = (FSlateUser *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar7 = 0;
    if ((int)uVar6 < (this->Users).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FSlateUser,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
    pFVar1 = (this->Users).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)(int)uVar6 * 0x10 + 8);
    pFVar3 = *(FSlateUser **)(pFVar1 + (longlong)(int)uVar6 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar3;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetInputInterface @ 148383160

/* WARNING: Enum "Type": Some values do not have unique names */

IInputInterface * __thiscall FSlateApplication::GetInputInterface(FSlateApplication *this)

{
  code *pcVar1;
  bool bVar2;
  IInputInterface *pIVar3;
  
  if (FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IInputInterface *)(*pcVar1)();
      return pIVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001483831a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar3 = (IInputInterface *)
           (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0xe0))();
  return pIVar3;
}

