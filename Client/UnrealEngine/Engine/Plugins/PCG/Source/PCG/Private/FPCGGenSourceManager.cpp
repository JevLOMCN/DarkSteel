// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// FPCGGenSourceManager @ 149f310d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGenSourceManager * __thiscall
FPCGGenSourceManager::FPCGGenSourceManager(FPCGGenSourceManager *this,UWorld *param_1)

{
  *(undefined8 *)&this->RegisteredNamedGenSources = 0;
  *(undefined8 *)&(this->RegisteredNamedGenSources).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredNamedGenSources).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredNamedGenSources).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredNamedGenSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredNamedGenSources).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredNamedGenSources).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredNamedGenSources).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredNamedGenSources).field_0x48 = 0;
  *(undefined8 *)&(this->RegisteredGenSources).Elements = 0;
  *(undefined8 *)&(this->RegisteredGenSources).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredGenSources).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredGenSources).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredGenSources).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredGenSources).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredGenSources).Elements.field_0x30 = 0xffffffff;
  (this->RegisteredGenSources).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredGenSources).HashSize = 0;
  (this->WorldPartitionGenSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldPartitionGenSources).ArrayNum = 0;
  (this->WorldPartitionGenSources).ArrayMax = 0;
  this->bLoggedWorldPartitionGenSourceWarning = false;
  this->bDirty = false;
  this->World = param_1;
  return this;
}

// ~FPCGGenSourceManager @ 149f34340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGenSourceManager::~FPCGGenSourceManager(FPCGGenSourceManager *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FGameModeEvents::GameModePostLoginEvent,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FGameModeEvents::GameModeLogoutEvent,this);
  pFVar1 = (this->WorldPartitionGenSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->RegisteredGenSources).HashSize = 0;
  FVar2 = (this->RegisteredGenSources).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TScriptInterface<IPCGGenSourceBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TScriptInterface<IPCGGenSourceBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RegisteredGenSources).Elements);
  *(undefined4 *)&(this->RegisteredNamedGenSources).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RegisteredNamedGenSources).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddReferencedObjects @ 149f3bb30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGGenSourceManager::AddReferencedObjects(FPCGGenSourceManager *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  FPCGGenSourceManager *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  uint local_140;
  undefined4 uStack_10c;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FPCGGenSourceManager *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar12 = 0;
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->WorldPartitionGenSources).AllocatorInstance.Data,
             (this->WorldPartitionGenSources).ArrayNum,0,0);
  iVar9 = *(int *)&(this->RegisteredGenSources).Elements.field_0x28;
  puVar1 = &(this->RegisteredGenSources).Elements.field_0x10;
  local_140 = 1;
  iVar14 = 0;
  iVar11 = 0;
  uVar6 = 1;
  iVar7 = iVar14;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->RegisteredGenSources).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar6 = *puVar15;
    iVar14 = 0;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) {
        iVar11 = *(int *)&(this->RegisteredGenSources).Elements.field_0x28;
        uVar6 = 1;
        iVar7 = iVar9;
        goto LAB_149f3bc18;
      }
      uVar6 = puVar15[lVar8 + 1];
    }
    iVar11 = *(int *)&(this->RegisteredGenSources).Elements.field_0x28;
    uVar6 = -uVar6 & uVar6;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iVar7 = iVar14 + -1 + local_res20;
    if (iVar11 < iVar7) {
      iVar7 = iVar9;
    }
  }
LAB_149f3bc18:
  uVar10 = *(uint *)&(this->RegisteredGenSources).Elements.field_0x28;
  uVar16 = uVar10 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uVar6,iVar12);
  TStack_c0.CurrentBitIndex = iVar7;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar10 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = iVar14;
  uStack_a0 = CONCAT44(uStack_10c,
                       *(int *)&(this->RegisteredGenSources).Elements.field_0x8 -
                       *(int *)&(this->RegisteredGenSources).Elements.field_0x34);
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar11 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(this->RegisteredGenSources).Elements.field_0x28;
  if (uVar10 != uVar6) {
    puVar13 = *(undefined1 **)&(this->RegisteredGenSources).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar9;
      uVar16 = uVar16 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_149f3bd40;
      uVar10 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_149f3bd40:
  while( true ) {
    if (*(int *)&(this->RegisteredGenSources).Elements.field_0x8 -
        *(int *)&(this->RegisteredGenSources).Elements.field_0x34 != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TScriptInterface<IPCGGenSourceBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c0.CurrentBitIndex == uVar10) &&
       (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(param_1->_padding_ + 0x88))
              (param_1,*(longlong *)&(this->RegisteredGenSources).Elements +
                       (longlong)TStack_c0.CurrentBitIndex * 0x18,0,0);
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  iVar11 = 0;
  iVar9 = *(int *)&(this->RegisteredNamedGenSources).field_0x28;
  puVar1 = &(this->RegisteredNamedGenSources).field_0x10;
  iVar14 = 0;
  iVar12 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->RegisteredNamedGenSources).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar6 = *puVar15;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      iVar12 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_149f3be31;
      uVar6 = puVar15[lVar8 + 1];
    }
    local_140 = -uVar6 & uVar6;
    uVar2 = (ulonglong)local_140 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar12 = iVar14 + -1 + (int)lVar8;
    if (iVar9 < iVar12) {
      iVar12 = iVar9;
    }
  }
LAB_149f3be31:
  uVar6 = *(uint *)&(this->RegisteredNamedGenSources).field_0x28;
  uVar10 = uVar6 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(local_140,iVar11);
  TStack_90.CurrentBitIndex = iVar12;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar6 >> 5;
  TStack_90._28_4_ = iVar7;
  TStack_90.BaseBitIndex = iVar14;
  uStack_70 = CONCAT44(uStack_cc,
                       *(int *)&(this->RegisteredNamedGenSources).field_0x8 -
                       *(int *)&(this->RegisteredNamedGenSources).field_0x34);
  local_98 = this;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar6 < 0) || (iVar9 < (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar16 = *(uint *)&(this->RegisteredNamedGenSources).field_0x28;
  if (uVar6 != uVar16) {
    puVar13 = *(undefined1 **)&(this->RegisteredNamedGenSources).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar6 = -1 << ((byte)uVar6 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar11;
      uVar10 = uVar10 + 0x20;
      iVar11 = iVar11 + 1;
      uVar6 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_149f3bf30;
      uVar6 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar6 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar16 < (int)uVar6) {
      uVar6 = uVar16;
    }
  }
LAB_149f3bf30:
  while( true ) {
    pFVar4 = local_98;
    if (*(int *)&(local_98->RegisteredNamedGenSources).field_0x8 -
        *(int *)&(local_98->RegisteredNamedGenSources).field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_90.CurrentBitIndex == uVar6) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar4 == this))
    break;
    (**(code **)(param_1->_padding_ + 0x88))
              (param_1,*(longlong *)&pFVar4->RegisteredNamedGenSources + 8 +
                       (longlong)TStack_90.CurrentBitIndex * 0x20,0,0);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// GatherWorldPartitionGenSources @ 149f46660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGGenSourceManager::GatherWorldPartitionGenSources
          (FPCGGenSourceManager *this,
          TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  double dVar3;
  TScriptInterface<IPCGGenSourceBase> *pTVar4;
  longlong *plVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  UObject *local_res8;
  IPCGGenSourceBase *local_res18;
  double local_78;
  double local_70;
  double local_68;
  char local_60;
  double local_58;
  double local_50;
  double local_48;
  char local_40;
  
  dVar3 = __real_3f1a36e2e0000000;
  pFVar7 = (this->WorldPartitionGenSources).AllocatorInstance.Data;
  iVar2 = (this->WorldPartitionGenSources).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  do {
    if ((this->WorldPartitionGenSources).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGGenSourceWPStreamingSource>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    pUVar6 = *(UObject **)pFVar7;
    if (pUVar6 == (UObject *)0x0) {
LAB_149f46779:
      local_res8 = pUVar6;
      TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>::
      Emplace<IPCGGenSourceBase_*>(param_1,&local_res18,(bool *)&local_res8);
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      if (*(FName **)&pUVar6[1].field_0x8 == (FName *)0x0) {
LAB_149f46775:
        pUVar6 = pUVar6 + 1;
        goto LAB_149f46779;
      }
      pTVar4 = TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
               ::Find((TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
                       *)this,**(FName **)&pUVar6[1].field_0x8);
      if (pTVar4 == (TScriptInterface<IPCGGenSourceBase> *)0x0) goto LAB_149f46775;
      (**(code **)(*(longlong *)(pUVar6 + 1) + 0x18))(pUVar6 + 1,&local_58);
      if (*(longlong *)pTVar4 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&pTVar4->field_0x8;
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_78);
      if (((local_40 == '\0') || (local_60 == '\0')) ||
         (dVar3 <= (local_78 - local_58) * (local_78 - local_58) +
                   (local_70 - local_50) * (local_70 - local_50) +
                   (local_68 - local_48) * (local_68 - local_48))) goto LAB_149f46775;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// GetAllGenSources @ 149f47240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> * __thiscall
FPCGGenSourceManager::GetAllGenSources
          (FPCGGenSourceManager *this,
          TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,APCGWorldActor *param_1)

{
  ForElementType<FSetElementId> FVar1;
  UObject *pUVar2;
  code *pcVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  TSet<TScriptInterface<IPCGGenSourceBase>,DefaultKeyFuncs<TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
  *pTVar6;
  FPCGGenSourceManager *pFVar7;
  bool bVar8;
  ulonglong uVar9;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *pTVar10;
  TScriptInterface<IPCGGenSourceBase> *pTVar11;
  ForElementType<FSetElementId> FVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  FScriptContainerElement *local_res10;
  undefined1 local_res20 [8];
  uint local_1f8;
  undefined1 local_1f4 [4];
  ulonglong local_1f0;
  int local_1e8;
  uint uStack_1e4;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TSet<TScriptInterface<IPCGGenSourceBase>,DefaultKeyFuncs<TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
  *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined8 local_188;
  undefined1 local_180 [8];
  undefined8 local_178;
  undefined8 local_170;
  UObject *local_168;
  TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator> *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  FPCGGenSourceManager *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TSet<TScriptInterface<IPCGGenSourceBase>,DefaultKeyFuncs<TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FPCGGenSourceManager *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  char local_90;
  double local_88;
  double local_80;
  double local_78;
  char local_70;
  undefined4 local_4c;
  
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId56,"FPCGGenSourceManager::GetAllGenSources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGGenSourceManager.cpp"
               ,0x38);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId56);
  }
  if (this->bDirty != false) {
    UpdatePerTickGenSources(this,param_1);
    this->bDirty = false;
  }
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_1f0 = CONCAT44(local_1f0._4_4_,1);
  uVar17 = ((*(int *)&(this->RegisteredNamedGenSources).field_0x8 -
            *(int *)&(this->RegisteredGenSources).Elements.field_0x34) -
           *(int *)&(this->RegisteredNamedGenSources).field_0x34) +
           *(int *)&(this->RegisteredGenSources).Elements.field_0x8;
  if (uVar17 == 0) goto LAB_149f47576;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar17);
  uVar26 = (uint)local_1f0;
  if (3 < uVar17) {
    uVar15 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_198 = (undefined4)lVar16;
    uVar26 = (uint)local_1f0 << ((byte)lVar16 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar26 <= __return_storage_ptr__->HashSize))
  goto LAB_149f47576;
  __return_storage_ptr__->HashSize = uVar26;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar26 != 0) {
    uVar17 = uVar26;
    if (uVar26 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar17 = 0;
        goto LAB_149f473ac;
      }
    }
    else {
LAB_149f473ac:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar17,4);
    }
    if (0 < (int)uVar26) {
      uVar21 = (ulonglong)uVar26;
      uVar15 = 0;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        uVar9 = uVar15 & (longlong)(int)uVar26 - 1U;
        uVar15 = uVar15 + 1;
        *(undefined4 *)((longlong)FVar12 + uVar9 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    iVar18 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
    puStack_1e0 = &(__return_storage_ptr__->Elements).field_0x10;
    local_1e8 = 0;
    uStack_1e4 = (uint)local_1f0;
    iStack_1d4 = 0;
    iStack_1d0 = 0;
    if (iVar18 != 0) {
      puVar23 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puStack_1e0;
      }
      uVar17 = *puVar23;
      while (uVar17 == 0) {
        iStack_1d0 = iStack_1d0 + 0x20;
        lVar16 = (longlong)local_1e8;
        local_1e8 = local_1e8 + 1;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1e8) goto LAB_149f474ae;
        uVar17 = puVar23[lVar16 + 1];
      }
      uStack_1e4 = -uVar17 & uVar17;
      uVar15 = (ulonglong)uStack_1e4 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_194 = (int)lVar16;
      iStack_1d4 = iStack_1d0 + -1 + local_194;
      if (iVar18 < iStack_1d4) {
LAB_149f474ae:
        iStack_1d4 = iVar18;
      }
    }
    local_1d8 = 0xffffffff;
    local_158._padding_ = CONCAT44(uStack_1e4,local_1e8);
    local_158.CurrentBitIndex = iStack_1d4;
    local_158.UnvisitedBitMask = 0xffffffff;
    local_158._28_4_ = uStack_1cc;
    local_158.BaseBitIndex = iStack_1d0;
    local_160 = __return_storage_ptr__;
    local_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_1e0;
    iVar18 = iStack_1d4;
    if (iStack_1d4 < *(int *)&(__return_storage_ptr__->Elements).field_0x28) {
      do {
        lVar16 = *(longlong *)&local_160->Elements;
        lVar24 = (longlong)iVar18;
        uVar15 = *(ulonglong *)(lVar16 + lVar24 * 0x10);
        uVar17 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        uVar17 = (uVar17 >> 0x10 ^ uVar17) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)(lVar16 + 0xc + lVar24 * 0x10) = uVar17;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(lVar16 + 8 + lVar24 * 0x10) = *(undefined4 *)((longlong)FVar12 + uVar15 * 4)
        ;
        *(int *)((longlong)FVar12 + uVar15 * 4) = iVar18;
        local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
        iVar18 = local_158.CurrentBitIndex;
      } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
    }
  }
LAB_149f47576:
  iVar18 = *(int *)&(this->RegisteredGenSources).Elements.field_0x28;
  local_1b8 = &(this->RegisteredGenSources).Elements.field_0x10;
  local_1c8 = &this->RegisteredGenSources;
  iStack_1c0 = 0;
  local_1a8 = 0;
  iVar19 = 0;
  uStack_1bc = (uint)local_1f0;
  iStack_1ac = iStack_1c0;
  if (iVar18 != 0) {
    puVar23 = *(uint **)&(this->RegisteredGenSources).Elements.field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)local_1b8;
    }
    uVar17 = *puVar23;
    local_1a8 = 0;
    iStack_1c0 = 0;
    while (uVar17 == 0) {
      lVar16 = (longlong)iStack_1c0;
      local_1a8 = local_1a8 + 0x20;
      iStack_1c0 = iStack_1c0 + 1;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c0) {
        iVar19 = *(int *)&(this->RegisteredGenSources).Elements.field_0x28;
        iStack_1ac = iVar18;
        goto LAB_149f47605;
      }
      uVar17 = puVar23[lVar16 + 1];
    }
    iVar19 = *(int *)&(this->RegisteredGenSources).Elements.field_0x28;
    uStack_1bc = -uVar17 & uVar17;
    uVar15 = (ulonglong)uStack_1bc * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_190 = (int)lVar16;
    iStack_1ac = local_190 + -1 + local_1a8;
    if (iVar19 < iStack_1ac) {
      iStack_1ac = iVar18;
    }
  }
LAB_149f47605:
  uStack_1a4 = local_4c;
  iStack_1a0 = *(int *)&(this->RegisteredGenSources).Elements.field_0x8 -
               *(int *)&(this->RegisteredGenSources).Elements.field_0x34;
  local_1f8 = *(uint *)&(this->RegisteredGenSources).Elements.field_0x28;
  TStack_100._padding_ = CONCAT44(uStack_1bc,iStack_1c0);
  uVar17 = local_1f8 & 0xffffffe0;
  uStack_1b0 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_1ac;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)local_1f8 >> 5;
  TStack_100._28_4_ = local_4c;
  TStack_100.BaseBitIndex = local_1a8;
  uStack_e0 = CONCAT44(uStack_19c,iStack_1a0);
  local_108 = local_1c8;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1b8;
  if ((((int)local_1f8 < 0) || (iVar19 < (int)local_1f8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>
               *)(*pcVar3)();
    return pTVar10;
  }
  uVar26 = *(uint *)&(this->RegisteredGenSources).Elements.field_0x28;
  if (local_1f8 != uVar26) {
    puVar22 = *(undefined1 **)&(this->RegisteredGenSources).Elements.field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->RegisteredGenSources).Elements.field_0x10;
    }
    uVar25 = -1 << ((byte)local_1f8 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar18 * 4);
    while (uVar25 == 0) {
      lVar16 = (longlong)iVar18;
      uVar17 = uVar17 + 0x20;
      iVar18 = iVar18 + 1;
      local_1f8 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_149f47724;
      uVar25 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_18c = (int)lVar16;
    local_1f8 = local_18c + -1 + uVar17;
    if ((int)uVar26 < (int)local_1f8) {
      local_1f8 = uVar26;
    }
  }
LAB_149f47724:
  while( true ) {
    pTVar6 = local_108;
    iVar18 = 0;
    if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
        (int)uStack_e0) {
      local_res10 = (FScriptContainerElement *)((ulonglong)local_res10 & 0xffffffffffffff00);
      `TSparseArray<TSparseSetElement<TScriptInterface<IPCGGenSourceBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    lVar16 = (longlong)TStack_100.CurrentBitIndex;
    if (((TStack_100.CurrentBitIndex == local_1f8) &&
        (TStack_100.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredGenSources).Elements.field_0x10))
       && (pTVar6 == &this->RegisteredGenSources)) break;
    lVar24 = *(longlong *)&pTVar6->Elements;
    pUVar2 = *(UObject **)(lVar24 + lVar16 * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_178 = *(undefined8 *)(lVar24 + 8 + lVar16 * 0x18);
    if (pUVar2 == (UObject *)0x0) {
      local_178 = 0;
    }
    TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>::
    Emplace<IPCGGenSourceBase_*>
              (__return_storage_ptr__,(IPCGGenSourceBase **)&local_188,(bool *)&local_178);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  iVar19 = *(int *)&(this->RegisteredNamedGenSources).field_0x28;
  local_128 = &(this->RegisteredNamedGenSources).field_0x10;
  iVar14 = 0;
  iStack_11c = iVar18;
  local_118 = iVar18;
  if (iVar19 != 0) {
    puVar23 = *(uint **)&(this->RegisteredNamedGenSources).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)local_128;
    }
    uVar17 = *puVar23;
    while (uVar17 == 0) {
      lVar16 = (longlong)iVar18;
      local_118 = local_118 + 0x20;
      iVar18 = iVar18 + 1;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) {
        iVar14 = *(int *)&(this->RegisteredNamedGenSources).field_0x28;
        iStack_11c = iVar19;
        goto LAB_149f47857;
      }
      uVar17 = puVar23[lVar16 + 1];
    }
    iVar14 = *(int *)&(this->RegisteredNamedGenSources).field_0x28;
    local_1f0 = (ulonglong)(-uVar17 & uVar17);
    uVar15 = local_1f0 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_188._4_4_ = (int)lVar16;
    iStack_11c = local_118 + -1 + local_188._4_4_;
    if (iVar14 < iStack_11c) {
      iStack_11c = iVar19;
    }
  }
LAB_149f47857:
  uVar17 = *(uint *)&(this->RegisteredNamedGenSources).field_0x28;
  uStack_12c = (undefined4)local_1f0;
  uVar26 = uVar17 & 0xffffffe0;
  iStack_114 = iStack_1ac;
  iStack_110 = *(int *)&(this->RegisteredNamedGenSources).field_0x8 -
               *(int *)&(this->RegisteredNamedGenSources).field_0x34;
  uStack_120 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_12c,iVar18);
  TStack_d0.CurrentBitIndex = iStack_11c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar17 >> 5;
  TStack_d0._28_4_ = iStack_1ac;
  TStack_d0.BaseBitIndex = local_118;
  uStack_b0 = CONCAT44(uStack_10c,iStack_110);
  local_138 = this;
  iStack_130 = iVar18;
  local_d8 = this;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128;
  if ((((int)uVar17 < 0) || (iVar14 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>
               *)(*pcVar3)();
    return pTVar10;
  }
  uVar25 = *(uint *)&(this->RegisteredNamedGenSources).field_0x28;
  if (uVar17 != uVar25) {
    puVar22 = *(undefined1 **)&(this->RegisteredNamedGenSources).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->RegisteredNamedGenSources).field_0x10;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
    while (uVar17 == 0) {
      lVar16 = (longlong)iVar19;
      uVar26 = uVar26 + 0x20;
      iVar19 = iVar19 + 1;
      uVar17 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_149f4795c;
      uVar17 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar17 = (uVar26 - 1) + (int)lVar16;
    if ((int)uVar25 < (int)uVar17) {
      uVar17 = uVar25;
    }
  }
LAB_149f4795c:
  while( true ) {
    pFVar7 = local_d8;
    if (*(int *)&(local_d8->RegisteredNamedGenSources).field_0x8 -
        *(int *)&(local_d8->RegisteredNamedGenSources).field_0x34 != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    dVar4 = __real_3f1a36e2e0000000;
    if (((TStack_d0.CurrentBitIndex == uVar17) &&
        (TStack_d0.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredNamedGenSources).field_0x10)) &&
       (pFVar7 == this)) break;
    lVar16 = *(longlong *)&pFVar7->RegisteredNamedGenSources;
    if (*(longlong *)((longlong)TStack_d0.CurrentBitIndex * 0x20 + 8 + lVar16) == 0) {
      local_170 = 0;
    }
    else {
      local_170 = *(undefined8 *)((longlong)TStack_d0.CurrentBitIndex * 0x20 + 0x10 + lVar16);
    }
    TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>::
    Emplace<IPCGGenSourceBase_*>
              (__return_storage_ptr__,(IPCGGenSourceBase **)local_180,(bool *)&local_170);
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  pFVar20 = (this->WorldPartitionGenSources).AllocatorInstance.Data;
  iVar18 = (this->WorldPartitionGenSources).ArrayNum;
  local_res10 = pFVar20 + (longlong)iVar18 * 8;
  do {
    pFVar5 = local_res10;
    if ((this->WorldPartitionGenSources).ArrayNum != iVar18) {
      `TCheckedPointerIterator<TObjectPtr<UPCGGenSourceWPStreamingSource>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_1f4);
    }
    if (pFVar20 == pFVar5) {
      if (bVar27) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return __return_storage_ptr__;
    }
    pUVar2 = *(UObject **)pFVar20;
    if (pUVar2 == (UObject *)0x0) {
LAB_149f47aee:
      local_168 = (UObject *)0x0;
LAB_149f47af0:
      TSet<IPCGGenSourceBase_*,DefaultKeyFuncs<IPCGGenSourceBase_*,0>,FDefaultSetAllocator>::
      Emplace<IPCGGenSourceBase_*>
                (__return_storage_ptr__,(IPCGGenSourceBase **)(local_180 + 4),(bool *)&local_168);
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      if ((*(FName **)&pUVar2[1].field_0x8 == (FName *)0x0) ||
         (pTVar11 = TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
                    ::Find((TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
                            *)this,**(FName **)&pUVar2[1].field_0x8),
         pTVar11 == (TScriptInterface<IPCGGenSourceBase> *)0x0)) {
LAB_149f47ae8:
        local_168 = pUVar2 + 1;
        goto LAB_149f47af0;
      }
      (**(code **)(*(longlong *)(pUVar2 + 1) + 0x18))(pUVar2 + 1,&local_88);
      if (*(longlong *)pTVar11 == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = *(longlong **)&pTVar11->field_0x8;
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_a8);
      if ((local_70 == '\0') || (local_90 == '\0')) goto LAB_149f47ae8;
      if (dVar4 <= (local_a0 - local_80) * (local_a0 - local_80) +
                   (local_a8 - local_88) * (local_a8 - local_88) +
                   (local_98 - local_78) * (local_98 - local_78)) {
        if (pUVar2 == (UObject *)0x0) goto LAB_149f47aee;
        goto LAB_149f47ae8;
      }
    }
    pFVar20 = pFVar20 + 8;
  } while( true );
}

// RegisterGenSource @ 149f59ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGGenSourceManager::RegisterGenSource
          (FPCGGenSourceManager *this,IPCGGenSourceBase *param_1,FName param_2)

{
  int iVar1;
  UActorComponent *this_00;
  UClass *pUVar2;
  UWorld *pUVar3;
  UObject *this_01;
  TScriptInterface<IPCGGenSourceBase> *pTVar4;
  TPairInitializer<FName_const_&,TScriptInterface<IPCGGenSourceBase>_const_&> local_res10;
  UObject *local_28;
  void *local_20;
  TScriptInterface<IPCGGenSourceBase> **local_18;
  UObject **local_10;
  
  local_res10.Value = (TScriptInterface<IPCGGenSourceBase> *)param_2;
  if (param_1 == (IPCGGenSourceBase *)0x0) {
LAB_149f59f25:
    this_01 = (UObject *)0x0;
  }
  else {
    this_00 = (UActorComponent *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UActorComponent *)0x0) {
      pUVar2 = UPCGGenSourceComponent::StaticClass();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        pUVar3 = this_00->WorldPrivate;
        if (pUVar3 == (UWorld *)0x0) {
          pUVar3 = UActorComponent::GetWorld_Uncached(this_00);
        }
        if (pUVar3 != this->World) {
          return false;
        }
      }
    }
    this_01 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_01 == (UObject *)0x0) goto LAB_149f59f25;
  }
  local_28 = this_01;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_01 == (UObject *)0x0)) {
    if (this_01 == (UObject *)0x0) {
      local_20 = (void *)0x0;
      goto LAB_149f59f62;
    }
  }
  else {
    UE::GC::MarkAsReachable(this_01);
  }
  pUVar2 = Z_Construct_UClass_UPCGGenSourceBase_NoRegister();
  local_20 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar2);
LAB_149f59f62:
  local_res10.Key = (FName *)0x0;
  if ((FName)local_res10.Value == (FName)0x0) {
    TSet<TScriptInterface<IPCGGenSourceBase>,DefaultKeyFuncs<TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
    ::Emplace<TScriptInterface<IPCGGenSourceBase>_const_&>
              (&this->RegisteredGenSources,(TScriptInterface<IPCGGenSourceBase> *)&local_res10,
               (bool *)&local_28);
    return (int)local_res10.Key != -1;
  }
  pTVar4 = TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
           ::Find((TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
                   *)this,(FName)local_res10.Value);
  if (pTVar4 != (TScriptInterface<IPCGGenSourceBase> *)0x0) {
    return false;
  }
  local_18 = &local_res10.Value;
  local_10 = &local_28;
  TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TScriptInterface<IPCGGenSourceBase>_const_&>_>
            ((TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_18);
  return true;
}

// UnregisterGenSource @ 149f6c5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGGenSourceManager::UnregisterGenSource(FPCGGenSourceManager *this,IPCGGenSourceBase *param_1)

{
  FName FVar1;
  int iVar2;
  UActorComponent *this_00;
  UClass *pUVar3;
  UWorld *pUVar4;
  UObject *this_01;
  UObject *pUVar5;
  FName *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  UObject *pUVar9;
  UObject *local_28;
  UObject *local_20;
  UObject *local_18;
  UObject *local_10;
  
  pUVar9 = (UObject *)0x0;
  if (param_1 == (IPCGGenSourceBase *)0x0) {
LAB_149f6c62d:
    this_01 = pUVar9;
  }
  else {
    this_00 = (UActorComponent *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UActorComponent *)0x0) {
      pUVar3 = UPCGGenSourceComponent::StaticClass();
      iVar2 = (int)pUVar3->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar3->_padding_)) {
        pUVar4 = this_00->WorldPrivate;
        if (pUVar4 == (UWorld *)0x0) {
          pUVar4 = UActorComponent::GetWorld_Uncached(this_00);
        }
        if (pUVar4 != this->World) {
          return false;
        }
      }
    }
    this_01 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_01 == (UObject *)0x0) goto LAB_149f6c62d;
  }
  local_18 = this_01;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_01 == (UObject *)0x0)) {
    pUVar5 = pUVar9;
    if (this_01 == (UObject *)0x0) goto LAB_149f6c678;
  }
  else {
    UE::GC::MarkAsReachable(this_01);
  }
  pUVar3 = Z_Construct_UClass_UPCGGenSourceBase_NoRegister();
  pUVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar3);
LAB_149f6c678:
  local_10 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_01 == (UObject *)0x0)) {
    if (this_01 == (UObject *)0x0) {
      pUVar5 = pUVar9;
    }
  }
  else {
    UE::GC::MarkAsReachable(this_01);
  }
  local_28 = this_01;
  local_20 = pUVar5;
  if (*(int *)&(this->RegisteredGenSources).Elements.field_0x8 !=
      *(int *)&(this->RegisteredGenSources).Elements.field_0x34) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(this_01);
    }
    uVar7 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    iVar2 = TSet<TScriptInterface<IPCGGenSourceBase>,DefaultKeyFuncs<TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
            ::RemoveImpl<TScriptInterface<IPCGGenSourceBase_const_>_>
                      (&this->RegisteredGenSources,uVar7 >> 0x10 ^ uVar7,
                       (TScriptInterface<IPCGGenSourceBase_const_> *)&local_28);
    if (0 < iVar2) {
      return true;
    }
  }
  pFVar6 = TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
           ::FindKey((TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
                      *)this,(TScriptInterface<IPCGGenSourceBase> *)&local_18);
  if (pFVar6 == (FName *)0x0) {
    return false;
  }
  FVar1 = *pFVar6;
  if (*(int *)&(this->RegisteredNamedGenSources).field_0x8 !=
      *(int *)&(this->RegisteredNamedGenSources).field_0x34) {
    uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    puVar8 = *(undefined1 **)&(this->RegisteredNamedGenSources).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->RegisteredNamedGenSources).field_0x38;
    }
    iVar2 = *(int *)(puVar8 + ((longlong)*(int *)&(this->RegisteredNamedGenSources).field_0x48 - 1U
                              & (longlong)(int)(uVar7 + FVar1.Number)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)((longlong)iVar2 * 0x20 + *(longlong *)&this->RegisteredNamedGenSources) ==
            FVar1) {
          TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
                           *)this,iVar2);
          return true;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 +
                        *(longlong *)&this->RegisteredNamedGenSources);
      } while (iVar2 != -1);
      return false;
    }
    return false;
  }
  return false;
}

// UnregisterGenSource @ 149f6c7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGGenSourceManager::UnregisterGenSource(FPCGGenSourceManager *this,FName param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (*(int *)&(this->RegisteredNamedGenSources).field_0x8 !=
      *(int *)&(this->RegisteredNamedGenSources).field_0x34) {
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    puVar2 = *(undefined1 **)&(this->RegisteredNamedGenSources).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->RegisteredNamedGenSources).field_0x38;
    }
    iVar3 = *(int *)(puVar2 + ((longlong)*(int *)&(this->RegisteredNamedGenSources).field_0x48 - 1U
                              & (longlong)(int)(param_1.Number + uVar1)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&this->RegisteredNamedGenSources) ==
            param_1) {
          TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
                           *)this,iVar3);
          return true;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 +
                        *(longlong *)&this->RegisteredNamedGenSources);
      } while (iVar3 != -1);
      return false;
    }
  }
  return false;
}

// UpdatePerTickGenSources @ 149f6c9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FPCGGenSourceManager::UpdatePerTickGenSources(FPCGGenSourceManager *this,APCGWorldActor *param_1)

{
  uint *puVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  UObject *pUVar12;
  ulonglong uVar13;
  TScriptInterface<IPCGGenSourceBase> *pTVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ForAnyElementType FVar21;
  ForElementType<unsigned_int> FVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  int iVar29;
  undefined1 auStackY_268 [32];
  int local_230;
  uint uStack_22c;
  int iStack_21c;
  int iStack_218;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_210;
  longlong *local_1f8;
  undefined1 auStack_1f0 [16];
  uint uStack_1e0;
  int iStack_1dc;
  longlong local_1d8;
  TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
  *pTStack_1d0;
  FPCGGenSourceManager *local_1c8;
  char local_1c0;
  char cStack_1bf;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  undefined4 local_18c;
  int local_188;
  UObject *local_180;
  UObject *local_178;
  APCGWorldActor *local_170;
  FWeakObjectPtr local_168;
  FSparseArrayAllocationInfo local_160;
  undefined1 local_150 [32];
  longlong local_130;
  TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
  *pTStack_128;
  undefined1 local_118 [128];
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.AllocationFlags.NumBits = 0;
  local_98.AllocationFlags.MaxBits = 0x80;
  local_98.FirstFreeIndex = -1;
  local_98.NumFreeIndices = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_170 = param_1;
  bVar7 = PCGHelpers::IsListenServer(this->World);
  if ((bVar7) || (bVar7 = PCGHelpers::IsDedicatedServer(this->World), bVar7)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  pTVar5 = PCGGenSourceManager::CVarServerRuntimeGenerationMode.Ref;
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    lVar24 = 4;
    if (!bVar8) goto LAB_149f6caa6;
  }
  lVar24 = 0;
LAB_149f6caa6:
  iVar29 = 1;
  iVar20 = *(int *)((longlong)pTVar5->ShadowedValue + lVar24);
  if ((param_1->bTreatPlayerControllersAsGenerationSources != false) && ((!bVar7 || (0 < iVar20))))
  {
    UWorld::GetPlayerControllerIterator(this->World,&local_210);
LAB_149f6cae2:
    do {
      iVar10 = local_210.Index;
      pTVar6 = local_210.Container;
      param_1 = local_170;
      if ((local_210.Index < 0) || ((local_210.Container)->ArrayNum <= local_210.Index)) break;
      uVar18 = 0;
      if (local_210.Index < (local_210.Container)->ArrayNum) {
        uVar18 = (uint)~local_210.Index >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar6->AllocatorInstance).Data + (longlong)iVar10 * 8));
      if ((pUVar12 != (UObject *)0x0) &&
         (((!bVar7 || (iVar20 != 1)) ||
          (cVar9 = (**(code **)(*(longlong *)pUVar12 + 0x7f0))(pUVar12), cVar9 != '\0')))) {
        if (local_98.NumFreeIndices == 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,1,(ForAnyElementType *)&local_98,&local_98.Data.ArrayNum,
                              &local_98.Data.ArrayMax);
          iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             (&local_98.AllocationFlags,1);
          FVar22 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
          if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar17 = (byte)iVar11 & 0x1f;
          if (iVar11 < 0) {
            iVar11 = iVar11 + 0x1f;
            bVar17 = bVar17 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar22 + (longlong)(iVar11 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar17 & 0x1f));
          iVar11 = local_98.FirstFreeIndex;
        }
        else {
          local_98.NumFreeIndices = local_98.NumFreeIndices + -1;
          iVar11 = *(int *)(local_98.Data.AllocatorInstance.Data +
                           (longlong)local_98.FirstFreeIndex * 0x10 + 4);
          iVar10 = local_98.FirstFreeIndex;
          if (local_98.NumFreeIndices != 0) {
            *(undefined4 *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar11 * 0x10) =
                 0xffffffff;
          }
        }
        local_98.FirstFreeIndex = iVar11;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_98,&local_160,iVar10);
        if (local_160.Pointer != (ulonglong *)0x0) {
          *(UObject **)local_160.Pointer = pUVar12;
          *(undefined4 *)((longlong)local_160.Pointer + 8) = 0xffffffff;
        }
        uVar23 = *(ulonglong *)local_160.Pointer;
        uVar28 = local_98.Data.ArrayNum - local_98.NumFreeIndices;
        uVar18 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
        uVar19 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        uVar19 = uVar19 >> 0x10 ^ uVar19;
        uVar18 = 1;
        if (uVar28 == 1) {
LAB_149f6ccf7:
          if (3 < uVar28) {
            uVar23 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
            lVar24 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            local_18c = (undefined4)lVar24;
            uVar18 = 1 << ((byte)lVar24 & 0x1f);
          }
        }
        else if (uVar28 != 0) {
          FVar21.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar21.Data = local_58.Data;
          }
          for (iVar10 = *(int *)(FVar21.Data + (ulonglong)(local_50 - 1 & uVar19) * 4); iVar10 != -1
              ; iVar10 = *(int *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8
                                 )) {
            if (*(ulonglong *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar10 * 0x10) ==
                uVar23) {
              if (iVar10 != -1) {
                *(ulonglong *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar10 * 0x10) =
                     uVar23;
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized(&local_98,local_160.Index,1);
                goto LAB_149f6cfd5;
              }
              break;
            }
          }
          goto LAB_149f6ccf7;
        }
        if (((int)uVar28 < 1) || ((int)uVar18 <= (int)local_50)) {
          uVar19 = local_50 - 1 & uVar19;
          *(uint *)((longlong)local_160.Pointer + 0xc) = uVar19;
          FVar21.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar21.Data = local_58.Data;
          }
          lVar24 = (longlong)(int)(local_50 - 1 & uVar19);
          *(undefined4 *)((longlong)local_160.Pointer + 8) =
               *(undefined4 *)(FVar21.Data + lVar24 * 4);
          *(int *)(FVar21.Data + lVar24 * 4) = local_160.Index;
        }
        else {
          local_50 = uVar18;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
          }
          if (uVar18 != 0) {
            uVar19 = uVar18;
            if (uVar18 < 2) {
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                uVar19 = 0;
                goto LAB_149f6cd96;
              }
            }
            else {
LAB_149f6cd96:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_58,0,uVar19,4);
            }
            if (0 < (int)uVar18) {
              uVar23 = 0;
              uVar26 = (ulonglong)uVar18;
              do {
                FVar21.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar21.Data = local_58.Data;
                }
                uVar13 = (longlong)(int)uVar18 - 1U & uVar23;
                uVar23 = uVar23 + 1;
                *(undefined4 *)(FVar21.Data + uVar13 * 4) = 0xffffffff;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
          }
          if (local_50 != 0) {
            local_1b0.Array = &local_98.AllocationFlags;
            uStack_22c = 1;
            local_230 = 0;
            iStack_21c = 0;
            iStack_218 = 0;
            if (local_98.AllocationFlags.NumBits != 0) {
              FVar22 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
              if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar22 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar18 = *(uint *)FVar22;
              iStack_218 = 0;
              local_230 = 0;
              while (uVar18 == 0) {
                iStack_218 = iStack_218 + 0x20;
                lVar24 = (longlong)local_230;
                local_230 = local_230 + 1;
                if ((int)(local_98.AllocationFlags.NumBits + -1 +
                         (local_98.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_230)
                {
                  iStack_21c = local_98.AllocationFlags.NumBits;
                  goto LAB_149f6ceb6;
                }
                uVar18 = *(uint *)((uchar *)((longlong)FVar22 + 4) + lVar24 * 4);
              }
              uStack_22c = ~(uVar18 - 1) & uVar18;
              uVar23 = (ulonglong)uStack_22c * 2 + 1;
              lVar24 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              local_188 = (int)lVar24;
              iStack_21c = iStack_218 + -1 + local_188;
              if (local_98.AllocationFlags.NumBits < iStack_21c) {
                iStack_21c = local_98.AllocationFlags.NumBits;
              }
            }
LAB_149f6ceb6:
            local_1b8 = &local_98;
            local_1b0._padding_ = CONCAT44(uStack_22c,local_230);
            local_1b0.UnvisitedBitMask = 0xffffffff;
            local_1b0.CurrentBitIndex = iStack_21c;
            local_1b0.BaseBitIndex = iStack_218;
            if (iStack_21c < local_98.AllocationFlags.NumBits) {
              do {
                pFVar27 = (local_1b8->Data).AllocatorInstance.Data +
                          (longlong)local_1b0.CurrentBitIndex * 0x10;
                uVar18 = ((uint)(*(ulonglong *)pFVar27 >> 0x14) & 0xffff ^
                         (uint)(*(ulonglong *)pFVar27 >> 4)) * -0x7a143595;
                uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
                uVar18 = (uVar18 >> 0x10 ^ uVar18) & local_50 - 1;
                *(uint *)(pFVar27 + 0xc) = uVar18;
                FVar21.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar21.Data = local_58.Data;
                }
                lVar24 = (longlong)(int)(local_50 - 1 & uVar18);
                *(undefined4 *)(pFVar27 + 8) = *(undefined4 *)(FVar21.Data + lVar24 * 4);
                *(int *)(FVar21.Data + lVar24 * 4) = local_1b0.CurrentBitIndex;
                local_1b0.UnvisitedBitMask = local_1b0.UnvisitedBitMask & ~local_1b0._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
              } while (local_1b0.CurrentBitIndex < (local_1b0.Array)->NumBits);
            }
          }
        }
LAB_149f6cfd5:
        FVar2.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
        FVar2.Number = *(uint *)&pUVar12->field_0x1c;
        pTVar14 = TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
                  ::Find((TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
                          *)this,FVar2);
        if (pTVar14 == (TScriptInterface<IPCGGenSourceBase> *)0x0) {
          pUVar16 = GetTransientPackageAsObject();
          FObjectInitializer::AssertIfInConstructor
                    (pUVar16,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar15 = UPCGGenSourcePlayer::StaticClass();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_118,pUVar15);
          local_118._8_8_ = pUVar16;
          pUVar16 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
          if (local_118._64_8_ != 0) {
            plVar25 = (longlong *)(local_118 + 0x50);
            if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
              plVar25 = (longlong *)local_118._104_8_;
            }
            (**(code **)(*plVar25 + 0x10))(plVar25);
          }
          local_178 = pUVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar12);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar16[1].field_0x8,(FObjectPtr)&local_178);
          if (pUVar16 == (UObject *)0x0) {
            pUVar16 = (UObject *)0x0;
          }
          else {
            pUVar16 = pUVar16 + 1;
          }
          FVar3.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
          FVar3.Number = *(uint *)&pUVar12->field_0x1c;
          RegisterGenSource(this,(IPCGGenSourceBase *)pUVar16,FVar3);
        }
        else if (((*(longlong *)pTVar14 != 0) &&
                 (*(longlong **)&pTVar14->field_0x8 != (longlong *)0x0)) &&
                (lVar24 = (**(code **)(**(longlong **)&pTVar14->field_0x8 + 8))(), lVar24 != 0)) {
          pUVar15 = UPCGGenSourcePlayer::StaticClass();
          iVar10 = (int)pUVar15->_padding_;
          if ((iVar10 <= *(int *)(*(longlong *)(lVar24 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) + (longlong)iVar10 * 8) ==
              &pUVar15->_padding_)) {
            local_180 = pUVar12;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar12);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar24 + 0x30),(FObjectPtr)&local_180);
            local_210.Index = local_210.Index + 1;
            goto LAB_149f6cae2;
          }
        }
      }
      local_210.Index = local_210.Index + 1;
    } while( true );
  }
  TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_150,
             (TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
              *)this);
  stack0xfffffffffffffe18 = local_150._16_16_;
  local_1f8 = (longlong *)local_150._0_8_;
  auStack_1f0._0_8_ = local_150._8_8_;
  local_1c0 = '\0';
  cStack_1bf = '\0';
  local_1d8 = local_130;
  pTStack_1d0 = pTStack_128;
  iVar20 = local_150._28_4_;
  local_1c8 = this;
  if (iVar20 < *(int *)(local_150._16_8_ + 0x18)) {
    do {
      if (((*(longlong *)((longlong)iVar20 * 0x20 + 8 + *local_1f8) == 0) ||
          (plVar25 = *(longlong **)((longlong)iVar20 * 0x20 + 0x10 + *local_1f8),
          plVar25 == (longlong *)0x0)) || (lVar24 = (**(code **)(*plVar25 + 8))(), lVar24 == 0)) {
LAB_149f6d1e2:
        lVar24 = 0;
      }
      else {
        pUVar15 = UPCGGenSourcePlayer::StaticClass();
        iVar10 = (int)pUVar15->_padding_;
        if ((*(int *)(*(longlong *)(lVar24 + 0x10) + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar15->_padding_)) goto LAB_149f6d1e2;
      }
      local_168 = *(FWeakObjectPtr *)(lVar24 + 0x30);
      pUVar12 = FWeakObjectPtr::Get(&local_168);
      uVar18 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar12 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      if (local_98.Data.ArrayNum != local_98.NumFreeIndices) {
        FVar21.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar21.Data = local_58.Data;
        }
        for (iVar10 = *(int *)(FVar21.Data +
                              (ulonglong)(local_50 - 1 & (uVar18 >> 0x10 ^ uVar18)) * 4);
            iVar10 != -1;
            iVar10 = *(int *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8)) {
          if (*(UObject **)(local_98.Data.AllocatorInstance.Data + (longlong)iVar10 * 0x10) ==
              pUVar12) goto LAB_149f6d288;
        }
      }
      TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_1d0,iVar20);
      local_1c0 = '\x01';
LAB_149f6d288:
      uStack_1e0 = uStack_1e0 & ~auStack_1f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1f0);
      iVar20 = iStack_1dc;
    } while (iStack_1dc < *(int *)(auStack_1f0._8_8_ + 0x18));
    if ((local_1c0 != '\0') && (cStack_1bf != '\0')) {
      uVar18 = *(int *)&(local_1c8->RegisteredNamedGenSources).field_0x8 -
               *(int *)&(local_1c8->RegisteredNamedGenSources).field_0x34;
      if (3 < uVar18) {
        uVar23 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar29 = 1 << ((byte)lVar24 & 0x1f);
      }
      if (((0 < (int)uVar18) &&
          (*(int *)&(local_1c8->RegisteredNamedGenSources).field_0x48 < iVar29)) ||
         (iVar29 < *(int *)&(local_1c8->RegisteredNamedGenSources).field_0x48)) {
        *(int *)&(local_1c8->RegisteredNamedGenSources).field_0x48 = iVar29;
        TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FName,TScriptInterface<IPCGGenSourceBase>_>,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>,FDefaultSetAllocator>
                  *)local_1c8);
      }
    }
  }
  UpdateWorldPartitionGenSources(this,param_1);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<APlayerController_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<APlayerController_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<APlayerController_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  return;
}

// UpdateWorldPartitionGenSources @ 149f6d820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FPCGGenSourceManager::UpdateWorldPartitionGenSources
          (FPCGGenSourceManager *this,APCGWorldActor *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  FPCGGenSourceManager *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UWorld *pUVar9;
  UWorldPartition *pUVar10;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *pTVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  TArray<TObjectPtr<UPCGGenSourceWPStreamingSource>,TSizedDefaultAllocator<32>_> *pTVar21;
  int *piVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStackY_138 [32];
  UObject *local_e8;
  FPCGGenSourceManager *local_e0;
  int *local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  iVar7 = 0;
  pTVar11 = (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0;
  iVar8 = iVar7;
  local_e0 = this;
  if ((param_1->bEnableWorldPartitionGenerationSources != false) &&
     (pUVar9 = AActor::GetWorld((AActor *)param_1),
     pTVar11 = (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0,
     pUVar9 != (UWorld *)0x0)) {
    pUVar9 = AActor::GetWorld((AActor *)param_1);
    pUVar10 = UWorld::GetWorldPartition(pUVar9);
    if (pUVar10 != (UWorldPartition *)0x0) {
      if (this->bLoggedWorldPartitionGenSourceWarning == false) {
        pUVar9 = AActor::GetWorld((AActor *)param_1);
        bVar6 = UWorld::IsGameWorld(pUVar9);
        if (bVar6) {
          if (2 < (byte)LogPCG._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
          this->bLoggedWorldPartitionGenSourceWarning = true;
        }
      }
      pUVar9 = AActor::GetWorld((AActor *)param_1);
      pUVar10 = UWorld::GetWorldPartition(pUVar9);
      pTVar11 = UWorldPartition::GetStreamingSources(pUVar10);
      if (pTVar11 != (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0) {
        iVar8 = pTVar11->ArrayNum;
      }
    }
  }
  piVar22 = &(this->WorldPartitionGenSources).ArrayNum;
  iVar1 = *piVar22;
  iVar4 = iVar1;
  if (iVar8 < iVar1) {
    iVar4 = iVar8;
  }
  iVar16 = iVar1 - iVar8;
  if (iVar1 - iVar8 < 0) {
    iVar16 = iVar7;
  }
  pTVar19 = (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)
            (ulonglong)(uint)(iVar8 - iVar1);
  if (iVar8 - iVar1 < 0) {
    pTVar19 = (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0;
  }
  iVar8 = (int)pTVar19;
  local_d8 = piVar22;
  if ((iVar16 != 0) || (iVar8 != 0)) {
    if ((0 < iVar16 == 0 < iVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(NumGenerationSourcesToRemove == 0 && NumGenerationSourcesToAdd == 0) || ((NumGenerationSourcesToRemove > 0) != (NumGenerationSourcesToAdd > 0))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGGenSourceManager.cpp"
                           ,0x11c,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (0 < iVar8) {
      pTVar21 = &this->WorldPartitionGenSources;
      do {
        pUVar12 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar12,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar13 = UPCGGenSourceWPStreamingSource::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar13);
        local_c8._8_8_ = pUVar12;
        pUVar12 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar15 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar15 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        local_e8 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        pFVar2 = (pTVar21->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 <
             pFVar2 + (longlong)(this->WorldPartitionGenSources).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->WorldPartitionGenSources).ArrayNum;
        if (iVar7 == (this->WorldPartitionGenSources).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar21->AllocatorInstance,
                             &(this->WorldPartitionGenSources).ArrayMax);
        }
        (this->WorldPartitionGenSources).ArrayNum = iVar7 + 1;
        *(UObject **)((pTVar21->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_e8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_e8);
        }
        pTVar19 = (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)
                  ((longlong)&pTVar19[-1].ArrayMax + 3);
      } while (pTVar19 != (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0)
      ;
    }
  }
  uVar14 = 0;
  uVar17 = iVar8 + iVar4;
  if (uVar17 == 0) {
    if (pTVar11 == (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0)
    goto LAB_149f6dbd8;
  }
  else if (pTVar11 == (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(NumGenerationSourcesToUpdate + NumGenerationSourcesToAdd == 0) || WPStreamingSources"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\RuntimeGen\\PCGGenSourceManager.cpp"
                       ,0x123,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    goto LAB_149f6dbd8;
  }
  uVar23 = uVar14;
  uVar24 = uVar14;
  if (0 < (int)uVar17) {
    do {
      uVar20 = (uint)uVar14;
      uVar18 = 0;
      if ((int)uVar20 < pTVar11->ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pTVar11->AllocatorInstance).Data;
      uVar18 = 0;
      if ((int)uVar20 < (local_e0->WorldPartitionGenSources).ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar14 = (ulonglong)(uVar20 + 1);
      *(FScriptContainerElement **)
       (*(longlong *)((local_e0->WorldPartitionGenSources).AllocatorInstance.Data + uVar23) + 0x30)
           = pFVar2 + uVar24;
      piVar22 = local_d8;
      uVar23 = uVar23 + 8;
      uVar24 = uVar24 + 0x160;
    } while ((int)(uVar20 + 1) < (int)uVar17);
  }
LAB_149f6dbd8:
  pFVar5 = local_e0;
  pTVar21 = &local_e0->WorldPartitionGenSources;
  iVar8 = (local_e0->WorldPartitionGenSources).ArrayNum;
  if (iVar8 < (int)uVar17) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar17 - iVar8,&pTVar21->AllocatorInstance,piVar22,
                       &(local_e0->WorldPartitionGenSources).ArrayMax);
    memset((pTVar21->AllocatorInstance).Data + (longlong)iVar7 * 8,0,
           (longlong)(int)(uVar17 - iVar8) << 3);
  }
  else {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if ((int)uVar17 < iVar8) {
      uVar18 = iVar8 - uVar17;
      if (((int)(uVar18 | uVar17) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar18 != 0) {
        pFVar2 = (pTVar21->AllocatorInstance).Data + (longlong)(int)uVar17 * 8;
        iVar8 = ((pFVar5->WorldPartitionGenSources).ArrayNum - uVar17) - uVar18;
        if (iVar8 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar18 * 8,(longlong)iVar8 << 3);
        }
        iVar8 = (pFVar5->WorldPartitionGenSources).ArrayNum - uVar18;
        (pFVar5->WorldPartitionGenSources).ArrayNum = iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar21->AllocatorInstance,iVar8,
                   &(pFVar5->WorldPartitionGenSources).ArrayMax);
      }
    }
  }
  return;
}

