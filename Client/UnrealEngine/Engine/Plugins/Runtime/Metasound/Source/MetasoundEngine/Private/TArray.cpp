// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 10

// FindByPredicate<TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>_> @ 14b3119a0

IMetasoundUObjectRegistryEntry ** __thiscall
TArray<Metasound::IMetasoundUObjectRegistryEntry_const_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>_>
          (TArray<Metasound::IMetasoundUObjectRegistryEntry_const_*,TSizedDefaultAllocator<32>_>
           *this,TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>
                 *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  IMetasoundUObjectRegistryEntry *local_res8;
  
  pFVar3 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)this->ArrayNum * 8;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return (IMetasoundUObjectRegistryEntry **)0x0;
    }
    local_res8 = *(IMetasoundUObjectRegistryEntry **)pFVar3;
    cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
    if (cVar2 != '\0') break;
    pFVar3 = pFVar3 + 8;
  }
  return (IMetasoundUObjectRegistryEntry **)pFVar3;
}

// operator= @ 14b352b00

TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *this,
          TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x14);
    }
  }
  return this;
}

// operator= @ 14b352ba0

TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
          (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *this,
          TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<Metasound::FAudioBusAsset,Metasound::FAudioBusAsset,int>
              ((this->AllocatorInstance).Data,(FAudioBusAsset *)pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14b352c40

TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
          (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *this,
          TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<Metasound::FWaveAsset,int>
              ((FWaveAsset *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<Metasound::FWaveAsset,Metasound::FWaveAsset,int>
              ((this->AllocatorInstance).Data,(FWaveAsset *)pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14b352ce0

TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
          (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *this,
          TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<Metasound::FWaveTableBankAsset,Metasound::FWaveTableBankAsset,int>
              ((this->AllocatorInstance).Data,(FWaveTableBankAsset *)pFVar3,iVar2);
  }
  return this;
}

// InsertUninitializedImpl @ 14b3c7d30

void __thiscall
TArray<TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 14b3c7db0

void __thiscall
TArray<TTuple<FName,UMetaSoundSource::FRuntimeInput>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<FName,UMetaSoundSource::FRuntimeInput>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (200,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 200;
  memmove(_Src + (longlong)param_2 * 200,_Src,(longlong)(iVar1 - param_1) * 200);
  return;
}

// RemoveAtSwapImpl @ 14b3d4870

void __thiscall
TArray<Metasound::FGeneratorInstanceInfo,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<Metasound::FGeneratorInstanceInfo,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  pFVar2 = (this->AllocatorInstance).Data;
  _Dst = pFVar2 + (longlong)param_1 * 0x20;
  plVar3 = *(longlong **)(_Dst + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(_Dst,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x20,(longlong)iVar4 << 5);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14b3d4920

void __thiscall
TArray<FMetaSoundAsyncAssetDependencies,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMetaSoundAsyncAssetDependencies,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x30;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 0x28));
  DestructItems<FSoftObjectPath,int>(*(FSoftObjectPath **)(_Dst + 0x10),*(int *)(_Dst + 0x18));
  if (*(void **)(_Dst + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x10));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x30,(longlong)iVar2 * 0x30);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSwap @ 14b3d5400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,ulong64 *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(ulong64 *)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

