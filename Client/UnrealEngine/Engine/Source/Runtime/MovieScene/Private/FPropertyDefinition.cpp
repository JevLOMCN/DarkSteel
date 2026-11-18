// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// SetupInitialValueProcessor @ 146154620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyDefinition::SetupInitialValueProcessor(FPropertyDefinition *this)

{
  code *pcVar1;
  bool bVar2;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar3;
  undefined1 auStack_d8 [32];
  IInitialValueProcessor *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> local_a8;
  FEntityComponentFilter local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->InitialValueType).Value != 0xffff) {
    pTVar3 = &this->Handler;
    if ((!(this->Handler).bIsValid) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (!(this->Handler).bInline) {
      pTVar3 = *(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)(pTVar3->Data).Pad;
    }
    (**(code **)(*(longlong *)(pTVar3->Data).Pad + 0x58))(pTVar3,&local_b8,this);
    if (local_b8 != (IInitialValueProcessor *)0x0) {
      local_98.AllMask.Bits.MaxBits = 0x180;
      local_98.AllMask.Bits.NumBits = 0;
      local_98.NoneMask.Bits.NumBits = 0;
      local_98.NoneMask.Bits.MaxBits = 0x180;
      local_98.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ComplexMasks.ArrayNum = 0;
      local_98.ComplexMasks.ArrayMax = 0;
      if ((local_b8 == (IInitialValueProcessor *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)((longlong)*local_b8 + 0x10))(local_b8,&local_98);
      local_a8.Object = local_b8;
      local_a8.SharedReferenceCount.ReferenceController = pTStack_b0;
      pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
      local_b8 = (IInitialValueProcessor *)0x0;
      UMovieSceneInitialValueSystem::RegisterProcessor
                ((FComponentTypeID)(this->InitialValueType).Value,&local_a8,&local_98);
      if (local_98.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.ComplexMasks.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  }
  return;
}

