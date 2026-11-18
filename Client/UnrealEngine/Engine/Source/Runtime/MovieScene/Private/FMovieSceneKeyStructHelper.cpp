// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// Add @ 1462044b0

void __thiscall
FMovieSceneKeyStructHelper::Add
          (FMovieSceneKeyStructHelper *this,FMovieSceneChannelValueHelper *param_1)

{
  undefined1 *puVar1;
  FMovieSceneKeyStructHelper *pFVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  FMovieSceneChannelValueHelper *pFVar11;
  
  if ((this->UnifiedKeyTime).bIsSet == false) {
    if (!(param_1->Impl).bIsValid) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar11 = param_1;
    if (!(param_1->Impl).bInline) {
      pFVar11 = *(FMovieSceneChannelValueHelper **)(param_1->Impl).Data.Pad;
    }
    if ((pFVar11->Impl).Data.Pad[0x10] != '\0') {
      if (!(param_1->Impl).bIsValid) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar11 = param_1;
      if (!(param_1->Impl).bInline) {
        pFVar11 = *(FMovieSceneChannelValueHelper **)(param_1->Impl).Data.Pad;
      }
      if ((pFVar11->Impl).Data.Pad[0x10] == '\0') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar2 = (FMovieSceneKeyStructHelper *)((pFVar11->Impl).Data.Pad + 0xc);
      if (pFVar2 != this) {
        (this->UnifiedKeyTime).TypedValue.Value = (pFVar2->UnifiedKeyTime).TypedValue.Value;
        (this->UnifiedKeyTime).bIsSet = true;
      }
    }
  }
  pFVar4 = (this->Helpers).AllocatorInstance.Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)(this->Helpers).ArrayMax * 0x48)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar10 = (this->Helpers).ArrayNum;
  piVar3 = &(this->Helpers).ArrayMax;
  if (iVar10 == *piVar3) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x848,&(this->Helpers).AllocatorInstance,piVar3);
  }
  (this->Helpers).ArrayNum = iVar10 + 1;
  pFVar5 = (this->Helpers).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar10 * 0x48;
  bVar9 = (byte)pFVar5[(longlong)iVar10 * 0x48 + 0x40] & 0xfe;
  pFVar4[0x40] = (FScriptContainerElement)(bVar9 | 2);
  if ((param_1->Impl).bIsValid) {
    pFVar4[0x40] = (FScriptContainerElement)(bVar9 | 3);
    (param_1->Impl).bIsValid = false;
    pFVar4[0x40] = (FScriptContainerElement)
                   ((byte)pFVar4[0x40] ^ ((param_1->Impl).field_0x40 ^ (byte)pFVar4[0x40]) & 2);
    uVar7 = *(undefined8 *)((param_1->Impl).Data.Pad + 8);
    *(undefined8 *)pFVar4 = *(undefined8 *)(param_1->Impl).Data.Pad;
    *(undefined8 *)(pFVar4 + 8) = uVar7;
    uVar7 = *(undefined8 *)((param_1->Impl).Data.Pad + 0x18);
    *(undefined8 *)(pFVar4 + 0x10) = *(undefined8 *)((param_1->Impl).Data.Pad + 0x10);
    *(undefined8 *)(pFVar4 + 0x18) = uVar7;
    uVar7 = *(undefined8 *)((param_1->Impl).Data.Pad + 0x28);
    *(undefined8 *)(pFVar4 + 0x20) = *(undefined8 *)((param_1->Impl).Data.Pad + 0x20);
    *(undefined8 *)(pFVar4 + 0x28) = uVar7;
    uVar7 = *(undefined8 *)((param_1->Impl).Data.Pad + 0x38);
    *(undefined8 *)(pFVar4 + 0x30) = *(undefined8 *)((param_1->Impl).Data.Pad + 0x30);
    *(undefined8 *)(pFVar4 + 0x38) = uVar7;
  }
  return;
}

// Apply @ 1462082c0

void __thiscall
FMovieSceneKeyStructHelper::Apply(FMovieSceneKeyStructHelper *this,FFrameNumber param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Helpers).ArrayNum;
  pFVar6 = (this->Helpers).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Helpers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneChannelValueHelper,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (((byte)pFVar6[0x40] & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar5 = pFVar6;
    if (((byte)pFVar6[0x40] & 2) == 0) {
      pFVar5 = *(FScriptContainerElement **)pFVar6;
    }
    (**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5,param_1.Value);
    pFVar6 = pFVar6 + 0x48;
  }
  return;
}

// GetUnifiedKeyTime @ 14621dc70

TOptional<FFrameNumber> __thiscall
FMovieSceneKeyStructHelper::GetUnifiedKeyTime(FMovieSceneKeyStructHelper *this)

{
  bool bVar1;
  TOptional<FFrameNumber> in_RDX;
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  bVar1 = (this->UnifiedKeyTime).bIsSet;
  *(bool *)((longlong)in_RDX + 4) = bVar1;
  if (bVar1 != false) {
    *(int *)in_RDX = (this->UnifiedKeyTime).TypedValue.Value;
  }
  return in_RDX;
}

// SetStartingValues @ 1462357f0

void __thiscall FMovieSceneKeyStructHelper::SetStartingValues(FMovieSceneKeyStructHelper *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if ((this->UnifiedKeyTime).bIsSet != false) {
    pFVar5 = (this->Helpers).AllocatorInstance.Data;
    iVar2 = (this->Helpers).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 0x48;
    while( true ) {
      if ((this->Helpers).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMovieSceneChannelValueHelper,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      if ((((byte)pFVar5[0x40] & 1) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = pFVar5;
      if (((byte)pFVar5[0x40] & 2) == 0) {
        pFVar6 = *(FScriptContainerElement **)pFVar5;
      }
      pcVar3 = *(code **)(*(longlong *)pFVar6 + 8);
      if (((this->UnifiedKeyTime).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*pcVar3)(pFVar6,(this->UnifiedKeyTime).TypedValue.Value);
      pFVar5 = pFVar5 + 0x48;
    }
  }
  return;
}

