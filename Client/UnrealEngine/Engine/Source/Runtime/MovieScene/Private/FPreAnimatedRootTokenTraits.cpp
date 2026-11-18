// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// RestorePreAnimatedValue @ 1461cf8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::FPreAnimatedRootTokenTraits::RestorePreAnimatedValue
          (FMovieSceneAnimTypeID param_1,
          TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *param_2,FRestoreStateParams *param_3
          )

{
  code *pcVar1;
  bool bVar2;
  
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
    param_2 = *(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)(param_2->Data).Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001461cf938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_2->Data).Pad + 8))(param_2,param_3);
  return;
}

