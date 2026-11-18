// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147494720

UScriptStruct * __cdecl FAnimationPotentialTransition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimationPotentialTransition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimationPotentialTransition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimationPotentialTransition,(UObject *)pUVar1,
                         L"AnimationPotentialTransition");
  }
  return Z_Registration_Info_UScriptStruct_FAnimationPotentialTransition.OuterSingleton;
}

// FAnimationPotentialTransition @ 1474b2b20

FAnimationPotentialTransition * __thiscall
FAnimationPotentialTransition::FAnimationPotentialTransition(FAnimationPotentialTransition *this)

{
  this->TargetState = -1;
  this->CrossfadeTimeAdjustment = 0.0;
  this->TransitionRule = (FBakedStateExitTransition *)0x0;
  (this->SourceTransitionIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->SourceTransitionIndices).ArrayNum = 0;
  (this->SourceTransitionIndices).ArrayMax = 3;
  return this;
}

// Clear @ 1474c4520

void __thiscall FAnimationPotentialTransition::Clear(FAnimationPotentialTransition *this)

{
  int *piVar1;
  
  this->TargetState = -1;
  this->CrossfadeTimeAdjustment = 0.0;
  this->TransitionRule = (FBakedStateExitTransition *)0x0;
  piVar1 = &(this->SourceTransitionIndices).ArrayMax;
  (this->SourceTransitionIndices).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,0,&(this->SourceTransitionIndices).AllocatorInstance,0,piVar1);
  }
  return;
}

// IsValid @ 1474ea320

bool __thiscall FAnimationPotentialTransition::IsValid(FAnimationPotentialTransition *this)

{
  if (((this->TargetState != -1) && (this->TransitionRule != (FBakedStateExitTransition *)0x0)) &&
     (this->TransitionRule->TransitionIndex != -1)) {
    return true;
  }
  return false;
}

