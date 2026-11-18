// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 3

// FUniversalObjectLocatorFragment<FActorLocatorFragment,FSoftObjectPath> @ 146c487a0

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::
FUniversalObjectLocatorFragment<FActorLocatorFragment,FSoftObjectPath>
          (FUniversalObjectLocatorFragment *this,TFragmentTypeHandle<FActorLocatorFragment> param_1,
          FSoftObjectPath *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FUniversalObjectLocatorFragment *pFVar5;
  FAllocatedPayload local_18;
  
  this->bIsInitialized = '\0';
  this->DebugHeaderSizeLog2 = '\0';
  (this->FragmentType).Handle = (uchar)param_1;
  if (param_1 == (TFragmentTypeHandle<FActorLocatorFragment>)0xff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                       ,0x17c,
                       L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FUniversalObjectLocatorFragment *)(*pcVar2)();
      return pFVar5;
    }
  }
  AllocatePayload(this,&local_18,0x20,8);
  *(undefined ***)local_18.DebugVFTablePtr =
       &___7__TFragmentPayload_UFActorLocatorFragment___UniversalObjectLocator_UE__6B_;
  FVar3 = (param_2->AssetPath).AssetName;
  *(FName *)local_18.Payload = (param_2->AssetPath).PackageName;
  *(FName *)((longlong)local_18.Payload + 8) = FVar3;
  ((FName *)((longlong)local_18.Payload + 0x10))->ComparisonIndex = 0;
  ((FName *)((longlong)local_18.Payload + 0x10))->Number = 0;
  *(FScriptContainerElement **)((longlong)local_18.Payload + 0x10) =
       (param_2->SubPathString).Data.AllocatorInstance.Data;
  (param_2->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((FName *)((longlong)local_18.Payload + 0x18))->ComparisonIndex).Value =
       (param_2->SubPathString).Data.ArrayNum;
  ((FName *)((longlong)local_18.Payload + 0x18))->Number = (param_2->SubPathString).Data.ArrayMax;
  (param_2->SubPathString).Data.ArrayNum = 0;
  (param_2->SubPathString).Data.ArrayMax = 0;
  return this;
}

// FUniversalObjectLocatorFragment<FAnimInstanceLocatorFragment,enum_EAnimInstanceLocatorFragmentType> @ 146c48850

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::
FUniversalObjectLocatorFragment<FAnimInstanceLocatorFragment,enum_EAnimInstanceLocatorFragmentType>
          (FUniversalObjectLocatorFragment *this,
          TFragmentTypeHandle<FAnimInstanceLocatorFragment> param_1,
          EAnimInstanceLocatorFragmentType *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FUniversalObjectLocatorFragment *pFVar4;
  FAllocatedPayload local_18;
  
  this->bIsInitialized = '\0';
  this->DebugHeaderSizeLog2 = '\0';
  (this->FragmentType).Handle = (uchar)param_1;
  if (param_1 == (TFragmentTypeHandle<FAnimInstanceLocatorFragment>)0xff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                       ,0x17c,
                       L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUniversalObjectLocatorFragment *)(*pcVar2)();
      return pFVar4;
    }
  }
  AllocatePayload(this,&local_18,4,4);
  *(undefined ***)local_18.DebugVFTablePtr =
       &___7__TFragmentPayload_UFAnimInstanceLocatorFragment___UniversalObjectLocator_UE__6B_;
  *(EAnimInstanceLocatorFragmentType *)local_18.Payload = *param_2;
  return this;
}

// FUniversalObjectLocatorFragment<FSubObjectLocator,FString> @ 146c488e0

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::FUniversalObjectLocatorFragment<FSubObjectLocator,FString>
          (FUniversalObjectLocatorFragment *this,TFragmentTypeHandle<FSubObjectLocator> param_1,
          FString *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FUniversalObjectLocatorFragment *pFVar4;
  FAllocatedPayload local_18;
  
  this->bIsInitialized = '\0';
  this->DebugHeaderSizeLog2 = '\0';
  (this->FragmentType).Handle = (uchar)param_1;
  if (param_1 == (TFragmentTypeHandle<FSubObjectLocator>)0xff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                       ,0x17c,
                       L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUniversalObjectLocatorFragment *)(*pcVar2)();
      return pFVar4;
    }
  }
  AllocatePayload(this,&local_18,0x10,8);
  *(undefined ***)local_18.DebugVFTablePtr =
       &___7__TFragmentPayload_UFSubObjectLocator___UniversalObjectLocator_UE__6B_;
  *(undefined8 *)local_18.Payload = 0;
  *(FScriptContainerElement **)local_18.Payload = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)local_18.Payload + 8) = (param_2->Data).ArrayNum;
  *(int *)((longlong)local_18.Payload + 0xc) = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  return this;
}

