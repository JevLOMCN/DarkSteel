// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestorePreAnimatedValue @ 146863da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits::RestorePreAnimatedValue
          (FPreAnimatedSkeletalAnimationAnimInstanceTraits *this,FObjectKey *param_1,bool *param_2,
          FRestoreStateParams *param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UClass *pUVar3;
  longlong *plVar4;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = param_1->ObjectIndex;
  local_res10[0].ObjectSerialNumber = param_1->ObjectSerialNumber;
  this_00 = FWeakObjectPtr::Get(local_res10);
  if (this_00 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar3);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146863e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x40))(plVar4);
      return;
    }
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8775670319571533569>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneSkeletalAnimationSystem.cpp"
                       ,0xff,"SequencerAnimationSupport");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

