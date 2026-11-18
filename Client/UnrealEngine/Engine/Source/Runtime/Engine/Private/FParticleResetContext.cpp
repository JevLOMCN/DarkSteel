// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FParticleResetContext @ 1481601b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FParticleResetContext::~FParticleResetContext(FParticleResetContext *this)

{
  ForElementType<UParticleSystem_*> FVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  ForElementType<UParticleSystem_*> FVar7;
  longlong lVar8;
  TObjectIterator<UParticleSystemComponent> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UParticleSystemComponent::StaticClass();
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  do {
    do {
      TObjectIterator<UParticleSystemComponent>::Advance(&local_28);
      lVar8 = (longlong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        }
        FVar1 = (this->SystemsToReset).AllocatorInstance.SecondaryData;
        if (FVar1 != (ForElementType<UParticleSystem_*>)0x0) {
          FMemory::Free((void *)FVar1);
        }
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = *(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar8 * 8);
      if ((lVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PSC",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                             ,0x157d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->SystemsToReset).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<UParticleSystem_*>)this;
      if (FVar1 != (ForElementType<UParticleSystem_*>)0x0) {
        FVar7 = FVar1;
      }
      FVar1 = (ForElementType<UParticleSystem_*>)
              ((longlong)FVar7 + (longlong)(this->SystemsToReset).ArrayNum * 8);
    } while (FVar7 == FVar1);
    do {
      if (*(longlong *)(lVar8 + 0x550) == 0) {
        bVar3 = *(longlong *)FVar7 == 0;
      }
      else {
        bVar3 = *(longlong *)(lVar8 + 0x550) == *(longlong *)FVar7;
      }
      if (bVar3) {
        *(byte *)(lVar8 + 0x578) = *(byte *)(lVar8 + 0x578) | 0x40;
        break;
      }
      FVar7 = (ForElementType<UParticleSystem_*>)((longlong)FVar7 + 8);
    } while (FVar7 != FVar1);
  } while( true );
}

// AddTemplate @ 148165dc0

void __thiscall
FParticleResetContext::AddTemplate(FParticleResetContext *this,UParticleEmitter *param_1)

{
  int *piVar1;
  ForElementType<UParticleSystem_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  ForElementType<UParticleSystem_*> FVar7;
  UObject *local_18 [2];
  
  if ((param_1 == (UParticleEmitter *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Emitter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x1572,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar6 = UParticleSystem::StaticClass();
  local_18[0] = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
  if ((local_18[0] == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Template",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x1574,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar2 = (this->SystemsToReset).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<UParticleSystem_*>)this;
  if (FVar2 != (ForElementType<UParticleSystem_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= local_18) {
    FVar7 = (ForElementType<UParticleSystem_*>)this;
    if (FVar2 != (ForElementType<UParticleSystem_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((local_18 < (UObject **)((longlong)FVar7 + (longlong)(this->SystemsToReset).ArrayMax * 8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->SystemsToReset).ArrayNum;
  piVar1 = &(this->SystemsToReset).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UParticleSystem_*>_>
                      (0x808,(ForElementType<UParticleSystem_*> *)this,piVar1);
  }
  (this->SystemsToReset).ArrayNum = iVar5 + 1;
  FVar2 = (this->SystemsToReset).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UParticleSystem_*>)0x0) {
    this = (FParticleResetContext *)FVar2;
  }
  *(UObject **)((longlong)this + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// AddTemplate @ 148165f30

void __thiscall
FParticleResetContext::AddTemplate(FParticleResetContext *this,UParticleModule *param_1)

{
  int *piVar1;
  ForElementType<UParticleSystem_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  ForElementType<UParticleSystem_*> FVar7;
  UObject *local_18 [2];
  
  if ((param_1 == (UParticleModule *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Module",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x156a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar6 = UParticleSystem::StaticClass();
  local_18[0] = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
  if ((local_18[0] == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Template",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x156c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar2 = (this->SystemsToReset).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<UParticleSystem_*>)this;
  if (FVar2 != (ForElementType<UParticleSystem_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= local_18) {
    FVar7 = (ForElementType<UParticleSystem_*>)this;
    if (FVar2 != (ForElementType<UParticleSystem_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((local_18 < (UObject **)((longlong)FVar7 + (longlong)(this->SystemsToReset).ArrayMax * 8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->SystemsToReset).ArrayNum;
  piVar1 = &(this->SystemsToReset).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UParticleSystem_*>_>
                      (0x808,(ForElementType<UParticleSystem_*> *)this,piVar1);
  }
  (this->SystemsToReset).ArrayNum = iVar5 + 1;
  FVar2 = (this->SystemsToReset).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UParticleSystem_*>)0x0) {
    this = (FParticleResetContext *)FVar2;
  }
  *(UObject **)((longlong)this + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// AddTemplate @ 1481660a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleResetContext::AddTemplate(FParticleResetContext *this,UParticleSystem *param_1)

{
  code *pcVar1;
  bool bVar2;
  UParticleSystem *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 == (UParticleSystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Template",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                       ,0x1564,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UParticleSystem_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<UParticleSystem_*_const_&>(&this->SystemsToReset,local_res10);
  return;
}

