// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 6

// ~FRevisionControlStyleManager @ 146b00d00

void __thiscall
FRevisionControlStyleManager::~FRevisionControlStyleManager(FRevisionControlStyleManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (DefaultRevisionControlStyleInstance.Object == (ISlateStyle *)0x0) {
    return;
  }
  if ((DefaultRevisionControlStyleInstance.Object == (ISlateStyle *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FSlateStyleRegistry::UnRegisterSlateStyle(DefaultRevisionControlStyleInstance.Object);
  return;
}

// Get @ 146b15f30

ISlateStyle * __cdecl FRevisionControlStyleManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSharedReferencer<1> local_10;
  
  pIVar3 = FSlateStyleRegistry::FindSlateStyle(&CurrentRevisionControlStyleName);
  if ((pIVar3 == (ISlateStyle *)0x0) &&
     (pIVar3 = DefaultRevisionControlStyleInstance.Object,
     DefaultRevisionControlStyleInstance.Object == (ISlateStyle *)0x0)) {
    pTVar4 = ::operator_new(0x4a0);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDefaultRevisionControlStyle___00_SharedPointerInternals__6B_
      ;
      FDefaultRevisionControlStyle::FDefaultRevisionControlStyle
                ((FDefaultRevisionControlStyle *)(pTVar4 + 1));
      pTVar5 = pTVar4 + 1;
      if ((pTVar5 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (ISlateStyle *)(*pcVar1)();
        return pIVar3;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    DefaultRevisionControlStyleInstance.Object = (ISlateStyle *)pTVar5;
    local_10.ReferenceController = pTVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&DefaultRevisionControlStyleInstance.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if ((DefaultRevisionControlStyleInstance.Object == (ISlateStyle *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ISlateStyle *)(*pcVar1)();
      return pIVar3;
    }
    FSlateStyleRegistry::RegisterSlateStyle(DefaultRevisionControlStyleInstance.Object);
    pIVar3 = DefaultRevisionControlStyleInstance.Object;
    if ((DefaultRevisionControlStyleInstance.Object == (ISlateStyle *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), pIVar3 = DefaultRevisionControlStyleInstance.Object, bVar2))
    {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ISlateStyle *)(*pcVar1)();
      return pIVar3;
    }
  }
  return pIVar3;
}

// GetStyleSetName @ 146b1adb0

FName __cdecl FRevisionControlStyleManager::GetStyleSetName(void)

{
  ISlateStyle *pIVar1;
  undefined8 *puVar2;
  FName in_RCX;
  
  pIVar1 = Get();
  puVar2 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1);
  *(undefined8 *)in_RCX = *puVar2;
  return in_RCX;
}

// ReloadTextures @ 146b22ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FRevisionControlStyleManager::ReloadTextures(void)

{
  FSlateApplication *pFVar1;
  
  pFVar1 = FSlateApplication::Get();
                    /* WARNING: Could not recover jumptable at 0x000146b22eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&pFVar1->field_0x60 + 0xe0))();
  return;
}

// ResetToDefaultRevisionControlStyle @ 146b230f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FRevisionControlStyleManager::ResetToDefaultRevisionControlStyle(void)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  ISlateStyle *pIVar4;
  FName local_res8 [4];
  
  if (DefaultRevisionControlStyleInstance.Object == (ISlateStyle *)0x0) {
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
  }
  else {
    if ((DefaultRevisionControlStyleInstance.Object == (ISlateStyle *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = (FName *)(**(code **)((longlong)*DefaultRevisionControlStyleInstance.Object + 8))();
    local_res8[0] = *pFVar3;
  }
  pIVar4 = FSlateStyleRegistry::FindSlateStyle(local_res8);
  if ((pIVar4 == (ISlateStyle *)0x0) && (1 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  CurrentRevisionControlStyleName = local_res8[0];
  return;
}

// SetActiveRevisionControlStyle @ 146b247b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FRevisionControlStyleManager::SetActiveRevisionControlStyle(FName param_1)

{
  ISlateStyle *pIVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pIVar1 = FSlateStyleRegistry::FindSlateStyle(local_res8);
  if ((pIVar1 == (ISlateStyle *)0x0) && (1 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  CurrentRevisionControlStyleName = local_res8[0];
  return;
}

