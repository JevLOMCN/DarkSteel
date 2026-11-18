// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 7

// DownloadedBytes @ 148bc8400

ulong64 __thiscall FInstallBundleSourceReport::DownloadedBytes(FInstallBundleSourceReport *this)

{
  int iVar1;
  ulong64 uVar2;
  FInstallBundleReport *this_00;
  FInstallBundleReport *pFVar3;
  ulong64 uVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Bundles).ArrayNum;
  uVar4 = 0;
  this_00 = (FInstallBundleReport *)(this->Bundles).AllocatorInstance.Data;
  pFVar3 = this_00 + iVar1;
  while( true ) {
    if ((this->Bundles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    uVar2 = FInstallBundleReport::DownloadedBytes(this_00);
    uVar4 = uVar4 + uVar2;
    this_00 = this_00 + 1;
  }
  return uVar4;
}

// FindOrAddBundleReport @ 148bc91a0

FInstallBundleReport * __thiscall
FInstallBundleSourceReport::FindOrAddBundleReport(FInstallBundleSourceReport *this,FName param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FInstallBundleReport *pFVar4;
  longlong lVar5;
  
  pFVar4 = TryFindBundleReport(this,param_1);
  if (pFVar4 == (FInstallBundleReport *)0x0) {
    iVar3 = (this->Bundles).ArrayNum;
    piVar1 = &(this->Bundles).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->Bundles).AllocatorInstance,piVar1);
    }
    (this->Bundles).ArrayNum = iVar3 + 1;
    lVar5 = (longlong)iVar3;
    pFVar2 = (this->Bundles).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + lVar5 * 0x50 + 0x20) = 0;
    *(undefined8 *)(pFVar2 + lVar5 * 0x50 + 0x28) = 0;
    *(undefined8 *)(pFVar2 + lVar5 * 0x50 + 0x30) = 0;
    *(undefined8 *)(pFVar2 + lVar5 * 0x50 + 0x38) = 0;
    *(undefined8 *)(pFVar2 + lVar5 * 0x50 + 0x40) = 0;
    *(undefined4 *)(pFVar2 + lVar5 * 0x50 + 0x49) = 0;
    *(undefined2 *)(pFVar2 + lVar5 * 0x50 + 0x4d) = 0;
    pFVar2[lVar5 * 0x50 + 0x4f] = (FScriptContainerElement)0x0;
    *(undefined ***)(pFVar2 + lVar5 * 0x50) = &___7FInstallBundleReport__6B_;
    *(undefined8 *)(pFVar2 + lVar5 * 0x50 + 0x10) = 0;
    *(undefined4 *)(pFVar2 + lVar5 * 0x50 + 0x18) = 0;
    *(undefined4 *)(pFVar2 + lVar5 * 0x50 + 0x1c) = 0xffffffff;
    pFVar2[lVar5 * 0x50 + 0x48] = (FScriptContainerElement)0x0;
    *(FName *)(pFVar2 + lVar5 * 0x50 + 8) = param_1;
    pFVar4 = TryFindBundleReport(this,param_1);
  }
  return pFVar4;
}

// Serialize @ 148bd5a60

void __thiscall
FInstallBundleSourceReport::Serialize
          (FInstallBundleSourceReport *this,FJsonSerializerBase *param_1,bool param_2)

{
  int *piVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName *pFVar8;
  longlong *plVar9;
  TSharedPtr<FJsonValue,1> *pTVar10;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined8 *puVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FName local_res20;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  TStringView<wchar_t> local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  cVar4 = (**(code **)*param_1)(param_1);
  uVar13 = 0;
  if (cVar4 == '\0') {
    ::FName::ToString(&this->SourceType,&local_f8);
    local_b8 = 0x51c7bdd0;
    uStack_b4 = 1;
    uStack_b0 = 10;
    (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_b8,&local_f8);
  }
  else {
    local_118 = (FScriptContainerElement *)0x0;
    local_110 = 0;
    local_c8 = 0x51c7bdd0;
    uStack_c4 = 1;
    uStack_c0 = 10;
    (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_c8,&local_118);
    pFVar14 = (FScriptContainerElement *)L"";
    if ((int)local_110 != 0) {
      pFVar14 = local_118;
    }
    pFVar8 = ::FName::FName(&local_res20,(wchar_t *)pFVar14);
    this->SourceType = *pFVar8;
    local_f8.Data.AllocatorInstance.Data = local_118;
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  cVar4 = (**(code **)*param_1)(param_1);
  if (cVar4 == '\0') {
    if (*(int *)((longlong)&(this->TargetVersion).field0_0x0 + 0xc) != -1) {
      local_108 = L"TargetVersion";
      uStack_100 = 0xd;
      local_88 = 0x51c7bde8;
      uStack_84 = 1;
      uStack_80 = 0xd;
      uStack_7c = uStack_fc;
      (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_88,&this->TargetVersion);
    }
  }
  else {
    plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_108);
    if ((*plVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)*plVar9;
    local_a8._12_4_ = uStack_11c;
    local_a8.Size = 0xd;
    local_a8.DataPtr = L"TargetVersion";
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"TargetVersion");
    pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar2,uVar6,&local_a8);
    if ((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_fc,uStack_100));
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_fc,uStack_100));
      pFVar14 = (this->TargetVersion).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
      pcVar3 = *(code **)((longlong)*param_1 + 0x70);
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      local_98 = 0x51c7bde8;
      uStack_94 = 1;
      uStack_90 = 0xd;
      (this->TargetVersion).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(int *)((longlong)&(this->TargetVersion).field0_0x0 + 8) = 0;
      *(int *)((longlong)&(this->TargetVersion).field0_0x0 + 0xc) = 0;
      (*pcVar3)(param_1,&local_98,&this->TargetVersion);
    }
  }
  cVar4 = (**(code **)*param_1)(param_1);
  if (cVar4 == '\0') {
    local_48 = 0x51c7be08;
    uStack_44 = 1;
    uStack_40 = 7;
    (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_48);
    for (; (-1 < (int)uVar13 && ((int)uVar13 < (this->Bundles).ArrayNum)); uVar13 = uVar13 + 1) {
      if (((int)uVar13 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (this->Bundles).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x50;
      (**(code **)(*(longlong *)pFVar14 + 0x50))(pFVar14,param_1,0);
    }
    (**(code **)((longlong)*param_1 + 0x38))(param_1);
  }
  else {
    plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_d8);
    if ((*plVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)*plVar9;
    local_78._12_4_ = uStack_11c;
    local_78.Size = 7;
    local_78.DataPtr = L"Bundles";
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(7,L"Bundles");
    pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar2,uVar6,&local_78);
    if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) ||
       (pTVar10->Object->Type != Array)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
      plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_58);
      if ((*plVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_68._12_4_ = uStack_11c;
      local_68.Size = 7;
      local_68.DataPtr = L"Bundles";
      pTVar11 = FJsonObject::GetArrayField((FJsonObject *)*plVar9,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      for (; (-1 < (int)uVar13 && ((int)uVar13 < pTVar11->ArrayNum)); uVar13 = uVar13 + 1) {
        iVar7 = (this->Bundles).ArrayNum;
        piVar1 = &(this->Bundles).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&(this->Bundles).AllocatorInstance,piVar1);
        }
        (this->Bundles).ArrayNum = iVar7 + 1;
        pFVar14 = (this->Bundles).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
        DefaultConstructItems<FInstallBundleReport,int>(pFVar14,1);
        pcVar3 = *(code **)(*(longlong *)pFVar14 + 0x18);
        uVar6 = 0;
        if ((int)uVar13 < pTVar11->ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar15 = (pTVar11->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar12 = (undefined8 *)(**(code **)**(undefined8 **)pFVar15)();
        local_e8 = *puVar12;
        local_e0 = puVar12[1];
        if (local_e0 != 0) {
          LOCK();
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          UNLOCK();
        }
        (*pcVar3)(pFVar14,&local_e8);
      }
    }
  }
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

// TotalBundleCount @ 148bdb5e0

int __thiscall FInstallBundleSourceReport::TotalBundleCount(FInstallBundleSourceReport *this)

{
  return (this->Bundles).ArrayNum;
}

// TotalDownloadSize @ 148bdb760

ulong64 __thiscall FInstallBundleSourceReport::TotalDownloadSize(FInstallBundleSourceReport *this)

{
  int iVar1;
  ulong64 uVar2;
  FInstallBundleReport *this_00;
  FInstallBundleReport *pFVar3;
  ulong64 uVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Bundles).ArrayNum;
  uVar4 = 0;
  this_00 = (FInstallBundleReport *)(this->Bundles).AllocatorInstance.Data;
  pFVar3 = this_00 + iVar1;
  while( true ) {
    if ((this->Bundles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    uVar2 = FInstallBundleReport::TotalDownloadSize(this_00);
    uVar4 = uVar4 + uVar2;
    this_00 = this_00 + 1;
  }
  return uVar4;
}

// TryFindBundleReport @ 148bdb8b0

FInstallBundleReport * __thiscall
FInstallBundleSourceReport::TryFindBundleReport(FInstallBundleSourceReport *this,FName param_1)

{
  int iVar1;
  FInstallBundleReport *pFVar2;
  FInstallBundleReport *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Bundles).ArrayNum;
  pFVar3 = (FInstallBundleReport *)(this->Bundles).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->Bundles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInstallBundleReport,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->BundleName == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FInstallBundleReport *)0x0;
}

// UpdatedBundleCount @ 148bde7f0

/* WARNING: Removing unreachable block (ram,0x000148bde887) */

int __thiscall FInstallBundleSourceReport::UpdatedBundleCount(FInstallBundleSourceReport *this)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar4 = (this->Bundles).ArrayNum;
  pFVar6 = (this->Bundles).AllocatorInstance.Data;
  iVar5 = 0;
  pFVar7 = pFVar6 + (longlong)iVar4 * 0x50;
  do {
    while( true ) {
      if ((this->Bundles).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar7) {
        return iVar5;
      }
      if (pFVar6[0x48] != (FScriptContainerElement)0x0) break;
LAB_148bde88e:
      pFVar6 = pFVar6 + 0x50;
    }
    FVar1 = pFVar6[0x40];
    if ((3 < (ulonglong)(byte)FVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdated,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)(byte)FVar1) == '\0') goto LAB_148bde88e;
    iVar5 = iVar5 + 1;
    pFVar6 = pFVar6 + 0x50;
  } while( true );
}

