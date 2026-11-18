// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 3

// StaticStruct @ 148c4aa00

UScriptStruct * __cdecl FAutomatedTestResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestResult.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UScriptStruct_FAutomatedTestResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestResult,(UObject *)pUVar1,
                         L"AutomatedTestResult");
  }
  return Z_Registration_Info_UScriptStruct_FAutomatedTestResult.OuterSingleton;
}

// ~FAutomatedTestResult @ 148c53cb0

void __thiscall FAutomatedTestResult::~FAutomatedTestResult(FAutomatedTestResult *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAutomationArtifact,int>
            ((FAutomationArtifact *)(this->Artifacts).AllocatorInstance.Data,
             (this->Artifacts).ArrayNum);
  pFVar1 = (this->Artifacts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAutomationExecutionEntry,int>
            ((FAutomationExecutionEntry *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DeviceInstance).AllocatorInstance.Data,
             (this->DeviceInstance).ArrayNum);
  pFVar1 = (this->DeviceInstance).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>((FString *)(this->Tags).AllocatorInstance.Data,(this->Tags).ArrayNum);
  pFVar1 = (this->Tags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FullTestPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Test).SharedReferenceCount.ReferenceController);
  return;
}

// AddEvent @ 148c56270

/* WARNING: Removing unreachable block (ram,0x000148c5648b) */
/* WARNING: Removing unreachable block (ram,0x000148c56499) */
/* WARNING: Removing unreachable block (ram,0x000148c564a7) */

void __thiscall
FAutomatedTestResult::AddEvent
          (FAutomatedTestResult *this,EAutomationEventType param_1,FString *param_2)

{
  int *piVar1;
  code *pcVar2;
  void *_Src;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement local_a8 [8];
  FString local_a0;
  ForAnyElementType local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  FScriptContainerElement local_50;
  FString local_48;
  void *local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_50 = (FScriptContainerElement)param_1;
  ::FString::FString(&local_48,param_2);
  local_a8[0] = local_50;
  local_28 = 0;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  uStack_20 = 0;
  ::FString::FString(&local_a0,&local_48);
  _Src = local_38;
  lVar6 = (longlong)(int)uStack_30;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = CONCAT44(local_88._4_4_,(int)uStack_30);
  if ((int)uStack_30 == 0) {
    local_88 = uStack_30 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)uStack_30,0,&local_90,(int)uStack_30,(int *)((longlong)&local_88 + 4));
    memcpy(local_90.Data,_Src,lVar6 * 2);
  }
  local_60 = 0xffffffff;
  local_70 = 0;
  local_80 = local_28;
  uStack_78 = uStack_20;
  uStack_68 = 0;
  FDateTime::UtcNow();
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar5 = (this->Entries).AllocatorInstance.Data;
  if (((pFVar5 <= local_a8) && (local_a8 < pFVar5 + (longlong)(this->Entries).ArrayMax * 0x58)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&(this->Entries).AllocatorInstance,piVar1);
  }
  (this->Entries).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Entries).AllocatorInstance.Data + (longlong)iVar4 * 0x58;
  *pFVar5 = local_a8[0];
  *(undefined8 *)(pFVar5 + 8) = 0;
  *(FScriptContainerElement **)(pFVar5 + 8) = local_a0.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 0x10) = local_a0.Data.ArrayNum;
  *(int *)(pFVar5 + 0x14) = local_a0.Data.ArrayMax;
  *(undefined8 *)(pFVar5 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x18) = local_90.Data;
  *(undefined4 *)(pFVar5 + 0x20) = (undefined4)local_88;
  *(undefined4 *)(pFVar5 + 0x24) = local_88._4_4_;
  *(undefined8 *)(pFVar5 + 0x28) = local_80;
  *(undefined8 *)(pFVar5 + 0x30) = uStack_78;
  *(undefined8 *)(pFVar5 + 0x38) = 0;
  *(undefined8 *)(pFVar5 + 0x38) = local_70;
  *(undefined4 *)(pFVar5 + 0x40) = (undefined4)uStack_68;
  *(undefined4 *)(pFVar5 + 0x44) = uStack_68._4_4_;
  *(undefined4 *)(pFVar5 + 0x48) = local_60;
  *(undefined8 *)(pFVar5 + 0x50) = local_58;
  if (param_1 == Warning) {
    this->Warnings = this->Warnings + 1;
  }
  else if (param_1 == Error) {
    this->Errors = this->Errors + 1;
  }
  return;
}

