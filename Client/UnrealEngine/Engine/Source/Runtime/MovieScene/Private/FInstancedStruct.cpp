// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// InitializeAs<FMovieSceneEasingSettings> @ 1462823c0

FMovieSceneEasingSettings * __thiscall
FInstancedStruct::InitializeAs<FMovieSceneEasingSettings>(FInstancedStruct *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FMovieSceneEasingSettings *pFVar4;
  uint uVar5;
  uint uVar6;
  
  pUVar3 = FMovieSceneEasingSettings::StaticStruct();
  if (pUVar3 == (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar4 = (FMovieSceneEasingSettings *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar6 = (uint)*(short *)((longlong)&pUVar3->_padding_ + 4);
    uVar5 = (int)pUVar3->_padding_ + -1 + uVar6 & -uVar6;
    if ((int)uVar5 < 1) {
      uVar5 = 1;
    }
    pFVar4 = FMemory::Malloc((longlong)(int)uVar5,uVar6);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
    this->StructMemory = (uchar *)pFVar4;
  }
  if (pFVar4 == (FMovieSceneEasingSettings *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneEasingSettings *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4->AutoEaseInDuration = 0;
  pFVar4->AutoEaseOutDuration = 0;
  *(undefined8 *)&pFVar4->EaseIn = 0;
  *(undefined8 *)&(pFVar4->EaseIn).field_0x8 = 0;
  pFVar4->bManualEaseIn = false;
  pFVar4->ManualEaseInDuration = 0;
  *(undefined8 *)&pFVar4->EaseOut = 0;
  *(undefined8 *)&(pFVar4->EaseOut).field_0x8 = 0;
  pFVar4->bManualEaseOut = false;
  pFVar4->ManualEaseOutDuration = 0;
  return pFVar4;
}

// InitializeAs<FTestMovieSceneStruct2> @ 146282490

FTestMovieSceneStruct2 * __thiscall
FInstancedStruct::InitializeAs<FTestMovieSceneStruct2>(FInstancedStruct *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FTestMovieSceneStruct2 *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestMovieSceneStruct2,(UObject *)pUVar4,
                         L"TestMovieSceneStruct2");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct2.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct2.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FTestMovieSceneStruct2 *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FTestMovieSceneStruct2 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FTestMovieSceneStruct2 *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->First = 0.0;
  pFVar5->Second = 0.0;
  return pFVar5;
}

// InitializeAs<FTestMovieSceneStruct> @ 146282570

FTestMovieSceneStruct * __thiscall
FInstancedStruct::InitializeAs<FTestMovieSceneStruct>(FInstancedStruct *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  UPackage *pUVar6;
  FTestMovieSceneStruct *pFVar7;
  uint uVar8;
  uint uVar9;
  
  if (Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar6 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestMovieSceneStruct,(UObject *)pUVar6,
                         L"TestMovieSceneStruct");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar7 = (FTestMovieSceneStruct *)this->StructMemory;
    pFVar1 = (pFVar7->MultipleVectors).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar7->MultipleIntegers).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    Reset(this);
    uVar9 = (uint)*(short *)((longlong)&pUVar4->_padding_ + 4);
    uVar8 = (int)pUVar4->_padding_ + -1 + uVar9 & -uVar9;
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    pFVar7 = FMemory::Malloc((longlong)(int)uVar8,uVar9);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar4;
    this->StructMemory = (uchar *)pFVar7;
  }
  if (pFVar7 == (FTestMovieSceneStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FTestMovieSceneStruct *)(*pcVar2)();
      return pFVar7;
    }
  }
  pFVar7->First = 0.0;
  pFVar7->Second = 0.0;
  *(undefined8 *)&pFVar7->Enum = 0;
  (pFVar7->Vector).field0_0x0._s_0.X = 0.0;
  (pFVar7->Vector).field0_0x0._s_0.Y = 0.0;
  (pFVar7->Vector).field0_0x0._s_0.Z = 0.0;
  (pFVar7->MultipleIntegers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar7->MultipleIntegers).ArrayNum = 0;
  (pFVar7->MultipleIntegers).ArrayMax = 0;
  (pFVar7->MultipleVectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar7->MultipleVectors).ArrayNum = 0;
  (pFVar7->MultipleVectors).ArrayMax = 0;
  pFVar7->First = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pFVar7->Second = 0.0;
  (pFVar7->Vector).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (pFVar7->Vector).field0_0x0._s_0.Y = (double)uVar3;
  (pFVar7->Vector).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return pFVar7;
}

