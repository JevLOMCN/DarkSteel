// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// StaticStruct @ 1461e5460

UScriptStruct * __cdecl FMovieSceneBindingReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneBindingReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingReference,(UObject *)pUVar1,
                         L"MovieSceneBindingReference");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneBindingReference.OuterSingleton;
}

// operator= @ 146200400

FMovieSceneBindingReference * __thiscall
FMovieSceneBindingReference::operator=
          (FMovieSceneBindingReference *this,FMovieSceneBindingReference *param_1)

{
  FUniversalObjectLocator *pFVar1;
  FUniversalObjectLocator *pFVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = (param_1->ID).B;
  uVar6 = (param_1->ID).C;
  uVar7 = (param_1->ID).D;
  pFVar1 = &param_1->Locator;
  pFVar2 = &this->Locator;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar5;
  (this->ID).C = uVar6;
  (this->ID).D = uVar7;
  if (pFVar2 != pFVar1) {
    DestructItems<FUniversalObjectLocatorFragment,int>
              ((FUniversalObjectLocatorFragment *)(pFVar2->Fragments).AllocatorInstance.Data,
               (this->Locator).Fragments.ArrayNum);
    pFVar3 = (pFVar2->Fragments).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Fragments).AllocatorInstance.Data = (pFVar1->Fragments).AllocatorInstance.Data;
    (pFVar1->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Locator).Fragments.ArrayNum = (param_1->Locator).Fragments.ArrayNum;
    (this->Locator).Fragments.ArrayMax = (param_1->Locator).Fragments.ArrayMax;
    (param_1->Locator).Fragments.ArrayNum = 0;
    (param_1->Locator).Fragments.ArrayMax = 0;
  }
  this->ResolveFlags = param_1->ResolveFlags;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (UObject *)(param_1->CustomBinding).field0_0x0.DebugPtr, pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  (this->CustomBinding).field0_0x0 = (param_1->CustomBinding).field0_0x0;
  return this;
}

// InitializeLocatorResolveFlags @ 146220d30

void __thiscall
FMovieSceneBindingReference::InitializeLocatorResolveFlags(FMovieSceneBindingReference *this)

{
  EFragmentTypeFlags EVar1;
  
  EVar1 = FUniversalObjectLocator::GetDefaultFlags(&this->Locator);
  if ((EVar1 & (LoadedByDefault|CanBeLoaded)) == (LoadedByDefault|CanBeLoaded)) {
    this->ResolveFlags = this->ResolveFlags | Load;
  }
  return;
}

