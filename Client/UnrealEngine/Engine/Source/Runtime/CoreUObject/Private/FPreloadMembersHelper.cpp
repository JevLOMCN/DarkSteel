// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// PreloadExternalNativeDependencies @ 141eaffb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPreloadMembersHelper::PreloadExternalNativeDependencies(UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObjectBaseUtility *this;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  UClass *pUVar7;
  FLinkerLoad *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_f8 [32];
  undefined1 local_b8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_b0;
  FReferenceFinder local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  FReferenceFinder::FReferenceFinder(&local_98,&local_b0,(UObject *)0x0,false,true,true,true);
  FReferenceFinder::FindReferences(&local_98,param_1,(UObject *)0x0,(FProperty *)0x0);
  iVar5 = local_b0.ArrayNum;
  uVar9 = (ulonglong)local_b0.ArrayNum;
  pFVar1 = local_b0.AllocatorInstance.Data + uVar9 * 8;
  FVar10.Data = local_b0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar5) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8)
      ;
    }
    if (FVar10.Data == pFVar1) break;
    this = *(UObjectBaseUtility **)FVar10.Data;
    if (this == (UObjectBaseUtility *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                         ,0x234,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((*(uint *)&this->field_0x8 >> 10 & 1) != 0) {
      pUVar7 = Z_Construct_UClass_UClass_NoRegister();
      lVar3 = *(longlong *)&this->field_0x10;
      iVar2 = (int)pUVar7->_padding_;
      if (((*(int *)(lVar3 + 0x38) < iVar2) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
           &pUVar7->_padding_)) && ((*(uint *)(lVar3 + 0xd4) >> 0x12 & 1) == 0)) {
        pFVar8 = UObjectBaseUtility::GetLinker(this);
        if (pFVar8 != (FLinkerLoad *)0x0) {
          FLinkerLoad::Preload((FLinkerLoad *)&pFVar8->_padding_,(UObject *)this);
          PreloadExternalNativeDependencies((UObject *)this);
        }
      }
    }
    uVar9 = local_b0._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 8;
  }
  FReferenceFinder::~FReferenceFinder(&local_98);
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return;
}

// PreloadMembers @ 141eb0130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPreloadMembersHelper::PreloadMembers(UObject *param_1)

{
  UObjectBase *this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLinkerLoad *pFVar4;
  uint uVar5;
  undefined1 auStackY_e8 [32];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_a8;
  FReferenceFinder local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  FReferenceFinder::FReferenceFinder(&local_98,&local_a8,param_1,false,true,true,true);
  FReferenceFinder::FindReferences(&local_98,param_1,(UObject *)0x0,(FProperty *)0x0);
  for (uVar5 = 0; -1 < (int)uVar5; uVar5 = uVar5 + 1) {
    if (local_a8.ArrayNum <= (int)uVar5) break;
    uVar3 = 0;
    if ((int)uVar5 < local_a8.ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this = *(UObjectBase **)(local_a8.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
    if ((this->ObjectFlags >> 0x15 & 1) == 0) {
      if (GEventDrivenLoaderEnabled != false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GEventDrivenLoaderEnabled || !(1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                           ,0x220,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar4 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
      if (pFVar4 != (FLinkerLoad *)0x0) {
        UE::FRecursiveMutex::Lock(&pFVar4->Mutex);
        UObjectBase::AtomicallySetFlags(this,RF_NeedLoad);
        FLinkerLoad::Preload((FLinkerLoad *)&pFVar4->_padding_,(UObject *)this);
        PreloadMembers((UObject *)this);
        UE::FRecursiveMutex::Unlock(&pFVar4->Mutex);
      }
    }
  }
  FReferenceFinder::~FReferenceFinder(&local_98);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// PreloadObject @ 141eb0300

void __cdecl FPreloadMembersHelper::PreloadObject(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinkerLoad *pFVar3;
  
  if ((param_1 != (UObject *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x15 & 1) == 0)) {
    if ((GEventDrivenLoaderEnabled) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GEventDrivenLoaderEnabled || !(1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                           ,0x24b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1);
    if (pFVar3 != (FLinkerLoad *)0x0) {
      UE::FRecursiveMutex::Lock(&pFVar3->Mutex);
      UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_NeedLoad);
      FLinkerLoad::Preload((FLinkerLoad *)&pFVar3->_padding_,param_1);
      UE::FRecursiveMutex::Unlock(&pFVar3->Mutex);
    }
  }
  return;
}

