// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// operator= @ 146f304f0

FRepDataPath * __thiscall
FGameplayDebuggerCategory_AI::FRepDataPath::operator=(FRepDataPath *this,FRepDataPath *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    DestructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>
              ((FPoly *)(this->PathCorridor).AllocatorInstance.Data,(this->PathCorridor).ArrayNum);
    pFVar2 = (this->PathCorridor).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->PathCorridor).AllocatorInstance.Data = (param_1->PathCorridor).AllocatorInstance.Data;
    (param_1->PathCorridor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PathCorridor).ArrayNum = (param_1->PathCorridor).ArrayNum;
    (this->PathCorridor).ArrayMax = (param_1->PathCorridor).ArrayMax;
    (param_1->PathCorridor).ArrayNum = 0;
    (param_1->PathCorridor).ArrayMax = 0;
  }
  pTVar3 = &param_1->PathPoints;
  pTVar1 = &this->PathPoints;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PathPoints).ArrayNum = (param_1->PathPoints).ArrayNum;
    (this->PathPoints).ArrayMax = (param_1->PathPoints).ArrayMax;
    (param_1->PathPoints).ArrayNum = 0;
    (param_1->PathPoints).ArrayMax = 0;
  }
  return this;
}

// Serialize @ 146f73870

void __thiscall
FGameplayDebuggerCategory_AI::FRepDataPath::Serialize(FRepDataPath *this,FArchive *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res8 [2];
  
  local_res8[0] = (this->PathCorridor).ArrayNum;
  piVar1 = &(this->PathCorridor).ArrayNum;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar10 = local_res8[0];
  if ((param_1->field_0x28 & 1) != 0) {
    iVar9 = *piVar1;
    if (iVar9 < (int)local_res8[0]) {
      iVar9 = local_res8[0] - iVar9;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,iVar9,(ForAnyElementType *)this,piVar1,
                         &(this->PathCorridor).ArrayMax);
      DefaultConstructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>
                ((this->PathCorridor).AllocatorInstance.Data + (longlong)iVar6 * 0x18,iVar9);
    }
    else {
      if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
      }
      if ((int)local_res8[0] < iVar9) {
        uVar8 = iVar9 - local_res8[0];
        if (((int)(local_res8[0] | uVar8) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar8 != 0) {
          TArray<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl(&this->PathCorridor,uVar10,uVar8);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(ForAnyElementType *)this,*piVar1,&(this->PathCorridor).ArrayMax);
        }
      }
    }
  }
  uVar10 = 0;
  if (0 < (int)local_res8[0]) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
                (param_1,(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                         ((this->PathCorridor).AllocatorInstance.Data + lVar11));
      uVar8 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (this->PathCorridor).AllocatorInstance.Data + lVar11 + 0x10;
      puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar7,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar7);
        }
      }
      else {
        *(undefined4 *)pFVar7 = *puVar3;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x18;
    } while ((int)uVar10 < (int)local_res8[0]);
  }
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->PathPoints);
  return;
}

