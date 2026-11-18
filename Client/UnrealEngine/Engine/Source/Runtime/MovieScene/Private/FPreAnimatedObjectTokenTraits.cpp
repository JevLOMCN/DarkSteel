// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// RestorePreAnimatedValue @ 1461cf850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::FPreAnimatedObjectTokenTraits::RestorePreAnimatedValue
          (TTuple<FObjectKey,FMovieSceneAnimTypeID> *param_1,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *param_2,FRestoreStateParams *param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  
  local_res8.ObjectIndex = *(int *)param_1;
  local_res8.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar3 = FWeakObjectPtr::Get(&local_res8);
  if (pUVar3 != (UObject *)0x0) {
    if (!param_2->bIsValid) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (!param_2->bInline) {
      param_2 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(param_2->Data).Pad;
    }
    (**(code **)(*(longlong *)(param_2->Data).Pad + 8))(param_2,pUVar3,param_3);
  }
  return;
}

