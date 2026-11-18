// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 1

// SetTrackImplementation<FMovieSceneNiagaraCacheSectionTemplate> @ 14ea223b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ea2252e) */
/* WARNING: Removing unreachable block (ram,0x00014ea22536) */
/* WARNING: Removing unreachable block (ram,0x00014ea2253c) */
/* WARNING: Removing unreachable block (ram,0x00014ea2254f) */

void __thiscall
FMovieSceneEvaluationTrack::SetTrackImplementation<FMovieSceneNiagaraCacheSectionTemplate>
          (FMovieSceneEvaluationTrack *this,FMovieSceneNiagaraCacheSectionTemplate *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined *****pppppuVar3;
  byte bVar4;
  FMovieSceneTrackImplementationPtr *pFVar5;
  undefined *****pppppuVar6;
  FMovieSceneTrackImplementationPtr *pFVar7;
  undefined1 auStack_68 [32];
  undefined ****local_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined8 local_38;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_18 = local_18 | 3;
  uStack_40 = (undefined1)param_1->_padding_;
  local_48 = (undefined ****)&___7FMovieSceneNiagaraCacheSectionTemplate__6B_;
  local_38 = (param_1->CacheSections).AllocatorInstance.Data;
  (param_1->CacheSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iStack_30 = (param_1->CacheSections).ArrayNum;
  iStack_2c = (param_1->CacheSections).ArrayMax;
  (param_1->CacheSections).ArrayNum = 0;
  (param_1->CacheSections).ArrayMax = 0;
  if (((local_18 & 1) == 0) &&
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
  pppppuVar6 = &local_48;
  if ((local_18 & 2) == 0) {
    pppppuVar6 = (undefined *****)local_48;
  }
  if (((local_18 & 1) == 0) &&
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
  pppppuVar3 = &local_48;
  if ((local_18 & 2) == 0) {
    pppppuVar3 = (undefined *****)local_48;
  }
  if ((pppppuVar6 != pppppuVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar4 = (this->TrackTemplate).field_0x30;
  pFVar7 = &this->TrackTemplate;
  if ((bVar4 & 1) != 0) {
    pFVar5 = pFVar7;
    if ((bVar4 & 2) == 0) {
      pFVar5 = *(FMovieSceneTrackImplementationPtr **)pFVar7;
    }
    (this->TrackTemplate).field_0x30 = bVar4 & 0xfe;
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,0);
    if (((this->TrackTemplate).field_0x30 & 2) == 0) {
      FMemory::Free(*(void **)pFVar7);
    }
  }
  if ((local_18 & 1) != 0) {
    local_18 = local_18 & 0xfe;
    bVar4 = (this->TrackTemplate).field_0x30 | 1;
    *(undefined *****)pFVar7 = local_48;
    *(ulonglong *)&(this->TrackTemplate).field_0x8 = CONCAT71(uStack_3f,uStack_40);
    (this->TrackTemplate).field_0x30 = (bVar4 ^ local_18) & 2 ^ bVar4;
    *(undefined4 *)&(this->TrackTemplate).field_0x10 = (undefined4)local_38;
    *(undefined4 *)&(this->TrackTemplate).field_0x14 = local_38._4_4_;
    *(int *)&(this->TrackTemplate).field_0x18 = iStack_30;
    *(int *)&(this->TrackTemplate).field_0x1c = iStack_2c;
    *(undefined4 *)&(this->TrackTemplate).field_0x20 = local_28;
    *(undefined4 *)&(this->TrackTemplate).field_0x24 = uStack_24;
    *(undefined4 *)&(this->TrackTemplate).field_0x28 = uStack_20;
    *(undefined4 *)&(this->TrackTemplate).field_0x2c = uStack_1c;
  }
  if ((((this->TrackTemplate).field_0x30 & 1) == 0) &&
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
  if (((this->TrackTemplate).field_0x30 & 2) == 0) {
    pFVar7 = *(FMovieSceneTrackImplementationPtr **)pFVar7;
  }
  (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7);
  return;
}

