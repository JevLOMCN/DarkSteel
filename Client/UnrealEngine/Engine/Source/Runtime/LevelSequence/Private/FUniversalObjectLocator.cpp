// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 3

// AddFragment<FActorLocatorFragment,FSoftObjectPath> @ 146c494c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUniversalObjectLocator::AddFragment<FActorLocatorFragment,FSoftObjectPath>
          (FUniversalObjectLocator *this,FSoftObjectPath *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  FAllocatedPayload local_48;
  FUniversalObjectLocatorFragment local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38.FragmentType.Handle = (uchar)FActorLocatorFragment::FragmentType;
  local_38.DebugHeaderSizeLog2 = '\0';
  local_38.bIsInitialized = '\0';
  if (FActorLocatorFragment::FragmentType == (TFragmentTypeHandle<FActorLocatorFragment>)0xff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                       ,0x17c,
                       L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUniversalObjectLocatorFragment::AllocatePayload(&local_38,&local_48,0x20,8);
  *(undefined ***)local_48.DebugVFTablePtr =
       &___7__TFragmentPayload_UFActorLocatorFragment___UniversalObjectLocator_UE__6B_;
  FVar2 = (param_1->AssetPath).AssetName;
  *(FName *)local_48.Payload = (param_1->AssetPath).PackageName;
  *(FName *)((longlong)local_48.Payload + 8) = FVar2;
  ((FName *)((longlong)local_48.Payload + 0x10))->ComparisonIndex = 0;
  ((FName *)((longlong)local_48.Payload + 0x10))->Number = 0;
  *(FScriptContainerElement **)((longlong)local_48.Payload + 0x10) =
       (param_1->SubPathString).Data.AllocatorInstance.Data;
  (param_1->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((FName *)((longlong)local_48.Payload + 0x18))->ComparisonIndex).Value =
       (param_1->SubPathString).Data.ArrayNum;
  ((FName *)((longlong)local_48.Payload + 0x18))->Number = (param_1->SubPathString).Data.ArrayMax;
  (param_1->SubPathString).Data.ArrayNum = 0;
  (param_1->SubPathString).Data.ArrayMax = 0;
  AddFragment(this,&local_38);
  FUniversalObjectLocatorFragment::~FUniversalObjectLocatorFragment(&local_38);
  return;
}

// AddFragment<FAnimInstanceLocatorFragment,enum_EAnimInstanceLocatorFragmentType> @ 146c495b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUniversalObjectLocator::
AddFragment<FAnimInstanceLocatorFragment,enum_EAnimInstanceLocatorFragmentType>
          (FUniversalObjectLocator *this,EAnimInstanceLocatorFragmentType *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_68 [32];
  FAllocatedPayload local_48;
  FUniversalObjectLocatorFragment local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38.FragmentType.Handle = (uchar)FAnimInstanceLocatorFragment::FragmentType;
  local_38.DebugHeaderSizeLog2 = '\0';
  local_38.bIsInitialized = '\0';
  if (FAnimInstanceLocatorFragment::FragmentType ==
      (TFragmentTypeHandle<FAnimInstanceLocatorFragment>)0xff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                       ,0x17c,
                       L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUniversalObjectLocatorFragment::AllocatePayload(&local_38,&local_48,4,4);
  *(undefined ***)local_48.DebugVFTablePtr =
       &___7__TFragmentPayload_UFAnimInstanceLocatorFragment___UniversalObjectLocator_UE__6B_;
  *(EAnimInstanceLocatorFragmentType *)local_48.Payload = *param_1;
  AddFragment(this,&local_38);
  FUniversalObjectLocatorFragment::~FUniversalObjectLocatorFragment(&local_38);
  return;
}

// AddFragment<FSubObjectLocator,FString> @ 146c49670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUniversalObjectLocator::AddFragment<FSubObjectLocator,FString>
          (FUniversalObjectLocator *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_68 [32];
  FAllocatedPayload local_48;
  FUniversalObjectLocatorFragment local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38.FragmentType.Handle = (uchar)FSubObjectLocator::FragmentType;
  local_38.DebugHeaderSizeLog2 = '\0';
  local_38.bIsInitialized = '\0';
  if (FSubObjectLocator::FragmentType == (TFragmentTypeHandle<FSubObjectLocator>)0xff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                       ,0x17c,
                       L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUniversalObjectLocatorFragment::AllocatePayload(&local_38,&local_48,0x10,8);
  *(undefined ***)local_48.DebugVFTablePtr =
       &___7__TFragmentPayload_UFSubObjectLocator___UniversalObjectLocator_UE__6B_;
  *(undefined8 *)local_48.Payload = 0;
  *(FScriptContainerElement **)local_48.Payload = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)local_48.Payload + 8) = (param_1->Data).ArrayNum;
  *(int *)((longlong)local_48.Payload + 0xc) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  AddFragment(this,&local_38);
  FUniversalObjectLocatorFragment::~FUniversalObjectLocatorFragment(&local_38);
  return;
}

