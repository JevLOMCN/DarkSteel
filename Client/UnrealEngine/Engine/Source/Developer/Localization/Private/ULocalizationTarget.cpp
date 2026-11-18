// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 12

// StaticClass @ 146b35d60

UClass * __cdecl ULocalizationTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalizationTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Localization",L"LocalizationTarget",
               &Z_Registration_Info_UClass_ULocalizationTarget.InnerSingleton,
               StaticRegisterNativesULocalizationTarget,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULocalizationTarget>,
               InternalVTableHelperCtorCaller<ULocalizationTarget>,local_res8,UObject::StaticClass,
               ULocalizationTargetSet::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalizationTarget.InnerSingleton;
}

// ULocalizationTarget @ 146b43b30

ULocalizationTarget * __thiscall
ULocalizationTarget::ULocalizationTarget(ULocalizationTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocalizationTarget__6B_;
  FLocalizationTargetSettings::FLocalizationTargetSettings(&this->Settings);
  return this;
}

// ULocalizationTarget @ 146b43b60

ULocalizationTarget * __thiscall
ULocalizationTarget::ULocalizationTarget(ULocalizationTarget *this,FObjectInitializer *param_1)

{
  bool bVar1;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7ULocalizationTarget__6B_;
  FLocalizationTargetSettings::FLocalizationTargetSettings(&this->Settings);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar1) {
    (this->Settings).Guid.A = 0;
    (this->Settings).Guid.B = 0;
    (this->Settings).Guid.C = 0;
    (this->Settings).Guid.D = 0;
  }
  return this;
}

// ~ULocalizationTarget @ 146b44d30

void __thiscall ULocalizationTarget::~ULocalizationTarget(ULocalizationTarget *this)

{
  this->_padding_ = (longlong)&___7ULocalizationTarget__6B_;
  FLocalizationTargetSettings::~FLocalizationTargetSettings(&this->Settings);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 146b49a40

bool __thiscall
`ULocalizationTarget::RenameTargetAndFiles'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  TSharedRef<FRevert,1> *pTVar7;
  TSharedRef<FDelete,1> *pTVar8;
  IFileManager *pIVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  ulonglong in_stack_fffffffffffffef8;
  longlong *local_f8;
  TReferenceControllerBase<1> *local_f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  ForAnyElementType local_e0;
  ulonglong local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType local_c8;
  ulonglong local_c0;
  FRevert *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FDelete *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  TSharedRef<FRevert,1> local_38;
  TSharedRef<FDelete,1> local_28;
  
  pwVar11 = L"";
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x90);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_98,pwVar10);
  (*pcVar2)(plVar1,&local_f8,&local_98,1);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((**(char **)((longlong)this + 8) == '\0') || (local_f8 == (longlong *)0x0)) {
LAB_146b49df6:
    pIVar9 = IFileManager::Get();
    if ((param_1->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar9 + 0x38))
                      (pIVar9,pwVar11,0,1,in_stack_fffffffffffffef8 & 0xffffffffffffff00);
    if (cVar5 == '\0') {
LAB_146b49e23:
      bVar3 = false;
      goto LAB_146b49e25;
    }
  }
  else {
    if ((local_f8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    cVar5 = (**(code **)(*local_f8 + 0x120))();
    if (cVar5 != '\0') goto LAB_146b49df6;
    if ((local_f8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    cVar5 = (**(code **)(*local_f8 + 0xf0))();
    if (cVar5 == '\0') {
      if ((local_f8 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      cVar5 = (**(code **)(*local_f8 + 0xe8))();
      if (cVar5 == '\0') {
        if ((local_f8 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        cVar5 = (**(code **)(*local_f8 + 0x88))();
        if (cVar5 != '\0') goto LAB_146b49bde;
LAB_146b49ced:
        plVar1 = *(longlong **)this;
        local_c0 = 0;
        local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_c8.Data = (FScriptContainerElement *)0x0;
        pcVar2 = *(code **)(*plVar1 + 0xd0);
        if ((param_1->Data).ArrayNum != 0) {
          pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        ::FString::FString(&local_78,pwVar11);
        pTVar8 = ISourceControlOperation::Create<FDelete>(&local_28);
        local_a8 = pTVar8->Object;
        local_a0 = (pTVar8->SharedReferenceCount).ReferenceController;
        if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar6 = (*pcVar2)(plVar1,&local_a8,&local_78,0,&local_d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_d0,(FWriteAccessScope *)&local_50);
        if (((int)local_c0 != 0) && (local_c8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_c8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,0x10);
          local_c0 = local_c0 & 0xffffffff00000000;
        }
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
        if (iVar6 == 1) goto LAB_146b49df2;
      }
      else {
LAB_146b49bde:
        plVar1 = *(longlong **)this;
        local_d8 = 0;
        local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_e0.Data = (FScriptContainerElement *)0x0;
        pcVar2 = *(code **)(*plVar1 + 0xd0);
        if ((param_1->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        ::FString::FString(&local_88,pwVar10);
        pTVar7 = ISourceControlOperation::Create<FRevert>(&local_38);
        local_b8 = pTVar7->Object;
        local_b0 = (pTVar7->SharedReferenceCount).ReferenceController;
        if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar6 = (*pcVar2)(plVar1,&local_b8,&local_88,0,&local_e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_e8,(FWriteAccessScope *)&local_68);
        if (((int)local_d8 != 0) && (local_e0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_e0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e0,0,0,0x10);
          local_d8 = local_d8 & 0xffffffff00000000;
        }
        if (local_68.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
        }
        if (local_e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
        if (iVar6 == 1) goto LAB_146b49ced;
      }
      goto LAB_146b49e23;
    }
  }
LAB_146b49df2:
  bVar3 = true;
LAB_146b49e25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
  return bVar3;
}

// DeleteFiles @ 146b53ce0

/* WARNING: Removing unreachable block (ram,0x000146b543e1) */

bool __thiscall ULocalizationTarget::DeleteFiles(ULocalizationTarget *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ISourceControlModule *pIVar11;
  longlong *plVar12;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar13;
  IFileManager *pIVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FRevert *pFVar17;
  FRevert *pFVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  TSharedRef<ISourceControlState,1> *pTVar22;
  bool bVar23;
  FSharedReferencer<1> FVar24;
  TSharedRef<ISourceControlState,1> *pTVar25;
  ForAnyElementType *pFVar26;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  ForAnyElementType *in_stack_fffffffffffffd58;
  FScriptContainerElement *pFVar27;
  ulonglong in_stack_fffffffffffffd60;
  ForAnyElementType local_278;
  undefined8 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  ForAnyElementType local_258;
  undefined8 local_250;
  ForAnyElementType local_248;
  undefined8 local_240;
  undefined1 local_238 [8];
  TSharedRef<ISourceControlState,1> *local_230;
  ulonglong local_228;
  TSharedRef<ISourceControlState,1> *local_220;
  ulonglong local_218;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_210;
  ForAnyElementType local_208;
  ulonglong local_200;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1f8;
  ForAnyElementType local_1f0;
  ulonglong local_1e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  ForAnyElementType local_1d8;
  ulonglong local_1d0;
  ForAnyElementType local_1c8;
  ForAnyElementType local_1c0;
  ulonglong local_1b8;
  ForAnyElementType local_1b0;
  int local_1a8;
  int local_1a4;
  FString *local_1a0;
  undefined8 local_198;
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_180;
  ForAnyElementType local_170;
  undefined8 local_168;
  TRawPtrProxy<FRevert> local_160;
  TRawPtrProxy<FDelete> local_158;
  longlong *local_150;
  TRawPtrProxy<FRevert> local_148;
  TRawPtrProxy<FDelete> local_140;
  TSharedRef<FRevert,1> local_138;
  FRevert *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  TSharedRef<FDelete,1> local_118;
  FDelete *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  TSharedRef<FRevert,1> local_f8;
  FRevert *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  TSharedRef<FDelete,1> local_d8;
  FDelete *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FString local_58;
  
  bVar8 = true;
  local_res18[0] = 0;
  pIVar11 = ISourceControlModule::Get();
  plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x78))(pIVar11);
  local_150 = plVar12;
  if (param_1 == (FString *)0x0) {
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168 = 0;
    bVar3 = true;
    bVar2 = false;
    pFVar26 = &local_170;
  }
  else {
    local_1a8 = (param_1->Data).ArrayNum;
    lVar20 = (longlong)local_1a8;
    pFVar27 = (param_1->Data).AllocatorInstance.Data;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    if (local_1a8 == 0) {
      bVar3 = false;
      bVar2 = true;
      local_1a4 = 0;
      pFVar26 = &local_1b0;
    }
    else {
      in_stack_fffffffffffffd58 = &local_1b0;
      in_stack_fffffffffffffd60 = CONCAT44((int)(in_stack_fffffffffffffd60 >> 0x20),local_1a8);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1a8,0,in_stack_fffffffffffffd58,local_1a8,&local_1a4);
      memcpy(local_1b0.Data,pFVar27,lVar20 * 2);
      pFVar26 = &local_1b0;
      bVar3 = false;
      bVar2 = true;
    }
  }
  FVar21.Data = local_170.Data;
  iVar10 = 2;
  pTVar13 = &LocalizationConfigurationScript::GetDataDirectory(&local_58,this)->Data;
  iVar9 = *(int *)&pFVar26[1].Data + -1;
  if (*(int *)&pFVar26[1].Data == 0) {
    iVar9 = 0;
  }
  if ((pTVar13->ArrayNum != 0) || (iVar9 == -1)) {
    iVar10 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_180,pTVar13,iVar9 + iVar10);
  ::FString::PathAppend((FString *)&local_180,(wchar_t *)pFVar26->Data,iVar9);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (FVar21.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FVar21.Data);
  }
  if ((bVar2) && (local_1b0.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1b0.Data);
  }
  bVar23 = false;
  bVar3 = false;
  bVar2 = false;
  local_1a0 = (FString *)0x0;
  local_198 = 0;
  pIVar14 = IFileManager::Get();
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_180.ArrayNum != 0) {
    FVar21.Data = local_180.AllocatorInstance.Data;
  }
  bVar4 = true;
  pFVar27 = (FScriptContainerElement *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd58 >> 8),1)
  ;
  (**(code **)((longlong)*pIVar14 + 0x88))
            (pIVar14,&local_1a0,FVar21.Data,L"*",pFVar27,
             in_stack_fffffffffffffd60 & 0xffffffffffffff00,1);
  local_230 = (TSharedRef<ISourceControlState,1> *)0x0;
  local_228 = 0;
  iVar9 = (**(code **)(*plVar12 + 0xa0))(plVar12,&local_1a0,&local_230,0);
  if (iVar9 == 1) {
    iVar9 = (int)local_228;
    uVar15 = (ulonglong)(int)local_228;
    local_268.Data = (FScriptContainerElement *)0x0;
    pTVar25 = local_230 + uVar15;
    local_260 = 0;
    local_278.Data = (FScriptContainerElement *)0x0;
    local_270 = 0;
    pTVar22 = local_230;
    while( true ) {
      if ((int)uVar15 != iVar9) {
        local_res18[0] = local_res18[0] & 0xffffff00;
        `TCheckedPointerIterator<TSharedRef<ISourceControlState,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pTVar22 == pTVar25) break;
      cVar5 = (**(code **)(*(longlong *)pTVar22->Object + 0xe8))();
      if (cVar5 == '\0') {
        cVar5 = (**(code **)(*(longlong *)pTVar22->Object + 0x88))();
        if (cVar5 != '\0') {
          pFVar16 = (FScriptContainerElement *)(**(code **)(*(longlong *)pTVar22->Object + 0x68))();
          if (((local_268.Data <= pFVar16) &&
              (pFVar16 < local_268.Data + (longlong)local_260._4_4_ * 0x10)) &&
             (pFVar27 = pFVar16,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
            pcVar1 = (code *)swi(3);
            uVar7 = (*pcVar1)();
            return (bool)uVar7;
          }
          iVar10 = (int)local_260;
          if ((int)local_260 == local_260._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_268,(int *)((longlong)&local_260 + 4));
          }
          local_260 = CONCAT44(local_260._4_4_,iVar10 + 1);
          ::FString::FString((FString *)(local_268.Data + (longlong)iVar10 * 0x10),
                             (FString *)pFVar16);
LAB_146b540b2:
          pFVar16 = (FScriptContainerElement *)(**(code **)(*(longlong *)pTVar22->Object + 0x68))();
          if ((local_278.Data <= pFVar16) &&
             ((pFVar16 < local_278.Data + (longlong)local_270._4_4_ * 0x10 &&
              (pFVar27 = pFVar16,
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)))) {
            pcVar1 = (code *)swi(3);
            uVar7 = (*pcVar1)();
            return (bool)uVar7;
          }
          iVar10 = (int)local_270;
          if ((int)local_270 == local_270._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_278,(int *)((longlong)&local_270 + 4));
          }
          local_270 = CONCAT44(local_270._4_4_,iVar10 + 1);
          FVar21.Data = local_278.Data;
          goto LAB_146b54153;
        }
        cVar5 = (**(code **)(*(longlong *)pTVar22->Object + 0xd8))();
        if ((cVar5 != '\0') &&
           (cVar5 = (**(code **)(*(longlong *)pTVar22->Object + 0xf0))(), cVar5 == '\0'))
        goto LAB_146b540b2;
      }
      else {
        pFVar16 = (FScriptContainerElement *)(**(code **)(*(longlong *)pTVar22->Object + 0x68))();
        if (((local_268.Data <= pFVar16) &&
            (pFVar16 < local_268.Data + (longlong)local_260._4_4_ * 0x10)) &&
           (pFVar27 = pFVar16,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
        iVar10 = (int)local_260;
        if ((int)local_260 == local_260._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_268,(int *)((longlong)&local_260 + 4));
        }
        local_260 = CONCAT44(local_260._4_4_,iVar10 + 1);
        FVar21.Data = local_268.Data;
LAB_146b54153:
        ::FString::FString((FString *)(FVar21.Data + (longlong)iVar10 * 0x10),(FString *)pFVar16);
      }
      uVar15 = local_228 & 0xffffffff;
      pTVar22 = pTVar22 + 1;
    }
    pFVar18 = (FRevert *)0x0;
    if ((int)local_260 != 0) {
      local_200 = 0;
      local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_208.Data = (FScriptContainerElement *)0x0;
      pcVar1 = *(code **)(*plVar12 + 0xe8);
      pFVar17 = ::operator_new(0x70);
      local_160.Object = pFVar18;
      if (pFVar17 != (FRevert *)0x0) {
        pFVar17->_padding_ = 0;
        *(undefined4 *)((longlong)&pFVar17->_padding_ + 4) = 0;
        *(undefined4 *)&pFVar17->field_0x5a = 0;
        *(undefined2 *)&pFVar17->field_0x5e = 0;
        pFVar17->_padding_ = (longlong)&___7FRevert__6B_;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        *(undefined4 *)&pFVar17->_padding_ = 0;
        pFVar17->bIsSoftRevert = false;
        pFVar17->bIsRevertAll = false;
        (pFVar17->DeletedFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar17->DeletedFiles).ArrayNum = 0;
        (pFVar17->DeletedFiles).ArrayMax = 0;
        local_160.Object = pFVar17;
      }
      TSharedRef<FRevert,1>::TSharedRef<FRevert,1><FRevert>(&local_f8,&local_160);
      local_e8 = local_f8.Object;
      pTStack_e0 = local_f8.SharedReferenceCount.ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar27 = (FScriptContainerElement *)&local_210;
      bVar23 = true;
      bVar3 = true;
      bVar2 = true;
      iVar9 = (*pcVar1)(plVar12,&local_e8,&local_268,0,pFVar27);
      if (iVar9 != 1) {
        bVar4 = false;
        bVar2 = true;
      }
    }
    if (bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_e0);
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
    }
    if (bVar23) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_210,(FWriteAccessScope *)&local_b8);
      if (((int)local_200 != 0) && (local_208.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_208.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_208,0,0,0x10);
        local_200 = local_200 & 0xffffffff00000000;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_208.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
    }
    bVar3 = false;
    bVar2 = false;
    if ((int)local_270 == 0) {
LAB_146b543d9:
      bVar23 = true;
    }
    else {
      local_1e8 = 0;
      local_1f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_1f0.Data = (FScriptContainerElement *)0x0;
      pcVar1 = *(code **)(*plVar12 + 0xe8);
      pFVar17 = ::operator_new(0x58);
      if (pFVar17 != (FRevert *)0x0) {
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = (longlong)&___7FDelete__6B_;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar18 = pFVar17;
      }
      local_158.Object = (FDelete *)pFVar18;
      TSharedRef<FDelete,1>::TSharedRef<FDelete,1><FDelete>(&local_d8,&local_158);
      local_c8 = local_d8.Object;
      pTStack_c0 = local_d8.SharedReferenceCount.ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar27 = (FScriptContainerElement *)&local_1f8;
      bVar3 = true;
      bVar2 = true;
      iVar9 = (*pcVar1)(plVar12,&local_c8,&local_278,0,pFVar27);
      if (iVar9 == 1) goto LAB_146b543d9;
      bVar23 = false;
    }
    if (bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1f8,(FWriteAccessScope *)&local_a0);
      if (((int)local_1e8 != 0) && (local_1f0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_1f0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f0,0,0,0x10);
        local_1e8 = local_1e8 & 0xffffffff00000000;
      }
      if (local_a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
      }
      if (local_1f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1f8.AccessDetector);
    }
    if ((!bVar4) || (!bVar23)) {
      bVar8 = false;
    }
    DestructItems<FString,int>((FString *)local_278.Data,(int)local_270);
    if (local_278.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data);
    }
    DestructItems<FString,int>((FString *)local_268.Data,(int)local_260);
    if (local_268.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data);
    }
  }
  bVar3 = false;
  bVar2 = false;
  DestructItems<TSharedRef<ISourceControlState,1>,int>(local_230,(int)local_228);
  if (local_230 != (TSharedRef<ISourceControlState,1> *)0x0) {
    FMemory::Free(local_230);
  }
  DestructItems<FString,int>(local_1a0,(int)local_198);
  if (local_1a0 != (FString *)0x0) {
    FMemory::Free(local_1a0);
  }
  pIVar14 = IFileManager::Get();
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_180.ArrayNum != 0) {
    FVar21.Data = local_180.AllocatorInstance.Data;
  }
  cVar5 = (**(code **)((longlong)*pIVar14 + 0x68))(pIVar14,FVar21.Data,0,1);
  bVar23 = false;
  if (cVar5 != '\0') {
    bVar23 = bVar8;
  }
  if (param_1 == (FString *)0x0) {
    LocalizationConfigurationScript::GetConfigPaths(&local_190,this);
    plVar12 = local_150;
    local_220 = (TSharedRef<ISourceControlState,1> *)0x0;
    local_218 = 0;
    iVar9 = (**(code **)(*local_150 + 0xa0))(local_150,&local_190,&local_220,0);
    if (iVar9 == 1) {
      iVar9 = (int)local_218;
      uVar15 = (ulonglong)(int)local_218;
      local_248.Data = (FScriptContainerElement *)0x0;
      pTVar25 = local_220 + uVar15;
      local_258.Data = (FScriptContainerElement *)0x0;
      local_240 = 0;
      local_250 = 0;
      pTVar22 = local_220;
      while( true ) {
        if ((int)uVar15 != iVar9) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TSharedRef<ISourceControlState,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pTVar22 == pTVar25) break;
        cVar5 = (**(code **)(*(longlong *)pTVar22->Object + 0xe8))();
        if (cVar5 == '\0') {
          cVar5 = (**(code **)(*(longlong *)pTVar22->Object + 0x88))();
          if (cVar5 != '\0') {
            pFVar16 = (FScriptContainerElement *)
                      (**(code **)(*(longlong *)pTVar22->Object + 0x68))();
            if (((local_248.Data <= pFVar16) &&
                (pFVar16 < local_248.Data + (longlong)local_240._4_4_ * 0x10)) &&
               (pFVar27 = pFVar16,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
              pcVar1 = (code *)swi(3);
              uVar7 = (*pcVar1)();
              return (bool)uVar7;
            }
            iVar10 = (int)local_240;
            if ((int)local_240 == local_240._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_248,(int *)((longlong)&local_240 + 4));
            }
            local_240 = CONCAT44(local_240._4_4_,iVar10 + 1);
            ::FString::FString((FString *)(local_248.Data + (longlong)iVar10 * 0x10),
                               (FString *)pFVar16);
LAB_146b5475c:
            pFVar16 = (FScriptContainerElement *)
                      (**(code **)(*(longlong *)pTVar22->Object + 0x68))();
            if ((local_258.Data <= pFVar16) &&
               ((pFVar16 < local_258.Data + (longlong)local_250._4_4_ * 0x10 &&
                (pFVar27 = pFVar16,
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)))) {
              pcVar1 = (code *)swi(3);
              uVar7 = (*pcVar1)();
              return (bool)uVar7;
            }
            iVar10 = (int)local_250;
            if ((int)local_250 == local_250._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_258,(int *)((longlong)&local_250 + 4));
            }
            local_250 = CONCAT44(local_250._4_4_,iVar10 + 1);
            FVar21.Data = local_258.Data;
            goto LAB_146b547fd;
          }
          cVar5 = (**(code **)(*(longlong *)pTVar22->Object + 0xd8))();
          if ((cVar5 != '\0') &&
             (cVar5 = (**(code **)(*(longlong *)pTVar22->Object + 0xf0))(), cVar5 == '\0'))
          goto LAB_146b5475c;
        }
        else {
          pFVar16 = (FScriptContainerElement *)(**(code **)(*(longlong *)pTVar22->Object + 0x68))();
          if (((local_248.Data <= pFVar16) &&
              (pFVar16 < local_248.Data + (longlong)local_240._4_4_ * 0x10)) &&
             (pFVar27 = pFVar16,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
            pcVar1 = (code *)swi(3);
            uVar7 = (*pcVar1)();
            return (bool)uVar7;
          }
          iVar10 = (int)local_240;
          if ((int)local_240 == local_240._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_248,(int *)((longlong)&local_240 + 4));
          }
          local_240 = CONCAT44(local_240._4_4_,iVar10 + 1);
          FVar21.Data = local_248.Data;
LAB_146b547fd:
          ::FString::FString((FString *)(FVar21.Data + (longlong)iVar10 * 0x10),(FString *)pFVar16);
        }
        uVar15 = local_218 & 0xffffffff;
        pTVar22 = pTVar22 + 1;
      }
      pFVar18 = (FRevert *)0x0;
      bVar8 = false;
      if ((int)local_240 == 0) {
LAB_146b5490d:
        bVar4 = bVar8;
        bVar8 = true;
        FVar24.ReferenceController = local_138.SharedReferenceCount.ReferenceController;
      }
      else {
        local_1d0 = 0;
        local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_1d8.Data = (FScriptContainerElement *)0x0;
        pcVar1 = *(code **)(*plVar12 + 0xe8);
        pFVar17 = ::operator_new(0x70);
        local_148.Object = pFVar18;
        if (pFVar17 != (FRevert *)0x0) {
          pFVar17->_padding_ = 0;
          *(undefined4 *)((longlong)&pFVar17->_padding_ + 4) = 0;
          *(undefined4 *)&pFVar17->field_0x5a = 0;
          *(undefined2 *)&pFVar17->field_0x5e = 0;
          pFVar17->_padding_ = (longlong)&___7FRevert__6B_;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          *(undefined4 *)&pFVar17->_padding_ = 0;
          pFVar17->bIsSoftRevert = false;
          pFVar17->bIsRevertAll = false;
          (pFVar17->DeletedFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar17->DeletedFiles).ArrayNum = 0;
          (pFVar17->DeletedFiles).ArrayMax = 0;
          local_148.Object = pFVar17;
        }
        TSharedRef<FRevert,1>::TSharedRef<FRevert,1><FRevert>(&local_138,&local_148);
        local_128 = local_138.Object;
        pTStack_120 = local_138.SharedReferenceCount.ReferenceController;
        if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pFVar27 = (FScriptContainerElement *)&local_1e0;
        bVar4 = true;
        bVar3 = true;
        bVar2 = true;
        iVar9 = (*pcVar1)(plVar12,&local_128,&local_248,0,pFVar27);
        bVar8 = true;
        if (iVar9 == 1) goto LAB_146b5490d;
        bVar8 = false;
        FVar24.ReferenceController = local_138.SharedReferenceCount.ReferenceController;
      }
      if (bVar4) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_120);
      }
      if (bVar2) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar24.ReferenceController);
      }
      if (bVar3) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_1e0,(FWriteAccessScope *)&local_88);
        if (((int)local_1d0 != 0) && (local_1d8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_1d8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d8,0,0,0x10);
          local_1d0 = local_1d0 & 0xffffffff00000000;
        }
        if (local_88.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
        }
        if (local_1d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector);
      }
      bVar3 = false;
      bVar2 = false;
      bVar4 = false;
      if ((int)local_250 == 0) {
LAB_146b54a95:
        bVar6 = bVar4;
        bVar4 = true;
        FVar24.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
      }
      else {
        local_1b8 = 0;
        local_1c8.Data = (FScriptContainerElement *)0x0;
        local_1c0.Data = (FScriptContainerElement *)0x0;
        pcVar1 = *(code **)(*plVar12 + 0xe8);
        pFVar17 = ::operator_new(0x58);
        if (pFVar17 != (FRevert *)0x0) {
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = (longlong)&___7FDelete__6B_;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar18 = pFVar17;
        }
        local_140.Object = (FDelete *)pFVar18;
        TSharedRef<FDelete,1>::TSharedRef<FDelete,1><FDelete>(&local_118,&local_140);
        local_108 = local_118.Object;
        pTStack_100 = local_118.SharedReferenceCount.ReferenceController;
        if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        bVar3 = true;
        bVar2 = true;
        bVar6 = true;
        pFVar27 = (FScriptContainerElement *)&local_1c8;
        iVar9 = (*pcVar1)(plVar12,&local_108,&local_258,0,(FScriptContainerElement *)&local_1c8);
        bVar4 = true;
        if (iVar9 == 1) goto LAB_146b54a95;
        bVar4 = false;
        FVar24.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
      }
      if (bVar2) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_100);
      }
      if (bVar3) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar24.ReferenceController);
      }
      if (bVar6) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_1c8,
                   (FWriteAccessScope *)&local_70);
        if (((int)local_1b8 != 0) && (local_1c0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_1c0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1c0,0,0,0x10);
          local_1b8 = local_1b8 & 0xffffffff00000000;
        }
        if (local_70.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
        }
        if (local_1c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&local_1c8);
      }
      if (((bVar23 == false) || (!bVar8)) || (!bVar4)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      DestructItems<FString,int>((FString *)local_258.Data,(int)local_250);
      if (local_258.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data);
      }
      DestructItems<FString,int>((FString *)local_248.Data,(int)local_240);
      if (local_248.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data);
      }
    }
    DestructItems<TSharedRef<ISourceControlState,1>,int>(local_220,(int)local_218);
    if (local_220 != (TSharedRef<ISourceControlState,1> *)0x0) {
      FMemory::Free(local_220);
    }
    iVar9 = local_190.ArrayNum;
    pFVar16 = local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 0x10;
    FVar21.Data = local_190.AllocatorInstance.Data;
    bVar8 = bVar23;
    while( true ) {
      bVar23 = bVar8;
      if (local_190.ArrayNum != iVar9) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_238);
      }
      if (FVar21.Data == pFVar16) break;
      pIVar14 = IFileManager::Get();
      if (*(int *)(FVar21.Data + 8) == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = *(wchar_t **)FVar21.Data;
      }
      pFVar27 = (FScriptContainerElement *)((ulonglong)pFVar27 & 0xffffffffffffff00);
      FVar21.Data = FVar21.Data + 0x10;
      cVar5 = (**(code **)((longlong)*pIVar14 + 0x38))(pIVar14,pwVar19,0,1,pFVar27);
      bVar8 = false;
      if (cVar5 != '\0') {
        bVar8 = bVar23;
      }
    }
    DestructItems<FString,int>((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
  }
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  return bVar23;
}

// GetPrivateStaticClass @ 146b76570

UClass * __cdecl ULocalizationTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalizationTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Localization",L"LocalizationTarget",
               &Z_Registration_Info_UClass_ULocalizationTarget.InnerSingleton,
               StaticRegisterNativesULocalizationTarget,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULocalizationTarget>,
               InternalVTableHelperCtorCaller<ULocalizationTarget>,local_res8,UObject::StaticClass,
               ULocalizationTargetSet::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalizationTarget.InnerSingleton;
}

// IsMemberOfEngineTargetSet @ 146b7a6b0

bool __thiscall ULocalizationTarget::IsMemberOfEngineTargetSet(ULocalizationTarget *this)

{
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UObject *)this->_padding_;
  if (pUVar2 == (UObject *)0x0) {
    pFVar8 = GetTypeName<ULocalizationTargetSet>(&local_38);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar7 = ULocalizationTargetSet::StaticClass();
  iVar1 = (int)pUVar7->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar7->_padding_)) {
    pUVar7 = ULocalizationSettings::StaticClass();
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    pUVar3 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UObject *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalizationSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSettings.cpp"
                         ,0x52,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    return pUVar2 == *(UObject **)(pUVar3 + 1);
  }
  pFVar8 = GetTypeName<ULocalizationTargetSet>(&local_28);
  pwVar9 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UObject>(&local_18,pUVar2);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar10);
}

// RenameTargetAndFiles @ 146b84350

bool __thiscall
ULocalizationTarget::RenameTargetAndFiles(ULocalizationTarget *this,FString *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ISourceControlModule *pIVar9;
  longlong *plVar10;
  IFileManager *pIVar11;
  FMarkForAdd *pFVar12;
  FMarkForAdd *pFVar13;
  FDelete *pFVar14;
  FDelete *pFVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  longlong lVar26;
  char local_res18 [8];
  undefined1 local_res20 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_stack_fffffffffffffe58;
  ulonglong in_stack_fffffffffffffe60;
  TArray<FString,TSizedDefaultAllocator<32>_> local_180;
  longlong local_170;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  ForAnyElementType local_160;
  ulonglong local_158;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  ForAnyElementType local_148;
  ulonglong local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  longlong *local_118;
  longlong *local_110;
  TReferenceControllerBase<1> *local_108;
  TRawPtrProxy<FMarkForAdd> local_100;
  TRawPtrProxy<FDelete> local_f8;
  longlong *local_f0;
  char *local_e8;
  FMarkForAdd *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  FString local_c8;
  FString local_b8;
  FDelete *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FString local_98;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  TSharedRef<FMarkForAdd,1> local_58;
  TSharedRef<FDelete,1> local_48;
  
  pIVar9 = ISourceControlModule::Get();
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x78))(pIVar9);
  local_118 = plVar10;
  cVar3 = (**(code **)((longlong)*pIVar9 + 0x70))(pIVar9);
  if (((cVar3 == '\0') || (cVar3 = (**(code **)(*plVar10 + 0x38))(plVar10), cVar3 == '\0')) ||
     (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10), cVar3 == '\0')) {
    local_res18[0] = '\0';
  }
  else {
    local_res18[0] = '\x01';
  }
  local_e8 = local_res18;
  local_f0 = plVar10;
  LocalizationConfigurationScript::GetConfigPaths(&local_128,this);
  iVar8 = local_128.ArrayNum;
  pFVar22 = local_128.AllocatorInstance.Data + (longlong)local_128.ArrayNum * 0x10;
  uVar23 = 0;
  FVar19.Data = local_128.AllocatorInstance.Data;
  bVar25 = true;
  while( true ) {
    if (local_128.ArrayNum != iVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar19.Data == pFVar22) break;
    bVar4 = `ULocalizationTarget::RenameTargetAndFiles'::__l2::<lambda_1>::operator()
                      (&local_f0,(FString *)FVar19.Data);
    bVar5 = false;
    if (bVar4) {
      bVar5 = bVar25;
    }
    FVar19.Data = FVar19.Data + 0x10;
    bVar25 = bVar5;
  }
  LocalizationConfigurationScript::GetOutputFilePaths(&local_180,this);
  ::FString::operator=(&(this->Settings).Name,param_1);
  LocalizationConfigurationScript::GetOutputFilePaths(&local_138,this);
  if ((local_180.ArrayNum != local_138.ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldPaths.Num() == NewPaths.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationTargetTypes.cpp"
                         ,0x23d,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  pTVar20 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0;
  if (0 < local_180.ArrayNum) {
    local_170 = 0;
    do {
      lVar26 = local_170;
      pIVar11 = IFileManager::Get();
      uVar24 = ~uVar23 >> 0x1f;
      pcVar1 = *(code **)((longlong)*pIVar11 + 0x48);
      uVar7 = 0;
      if ((int)uVar23 < local_180.ArrayNum) {
        uVar7 = uVar24;
      }
      if (uVar7 == 0) {
        in_stack_fffffffffffffe60 = (ulonglong)local_180.ArrayNum;
        in_stack_fffffffffffffe58 =
             (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(longlong)(int)uVar23;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
      }
      if (*(int *)(local_180.AllocatorInstance.Data + lVar26 + 8) == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *(wchar_t **)(local_180.AllocatorInstance.Data + lVar26);
      }
      uVar16 = (ulonglong)local_138.ArrayNum;
      uVar7 = 0;
      if ((int)uVar23 < local_138.ArrayNum) {
        uVar7 = uVar24;
      }
      if ((uVar7 == 0) &&
         (in_stack_fffffffffffffe58 = pTVar20,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         in_stack_fffffffffffffe60 = uVar16, bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      lVar26 = (longlong)pTVar20 * 0x10;
      if (*(int *)(local_138.AllocatorInstance.Data + lVar26 + 8) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)(local_138.AllocatorInstance.Data + lVar26);
      }
      in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
      in_stack_fffffffffffffe58 =
           (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe58 >> 8),1);
      cVar3 = (*pcVar1)(pIVar11,pwVar17,pwVar18,1,in_stack_fffffffffffffe58,
                        in_stack_fffffffffffffe60,1);
      plVar10 = local_118;
      lVar21 = local_170;
      if (cVar3 != '\0') {
        if (local_res18[0] != '\0') {
          pFVar13 = (FMarkForAdd *)0x0;
          uVar16 = (ulonglong)local_138.ArrayNum;
          local_158 = 0;
          local_168.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          pcVar1 = *(code **)(*local_118 + 0xd0);
          uVar7 = 0;
          if ((int)uVar23 < local_138.ArrayNum) {
            uVar7 = uVar24;
          }
          local_160.Data = (FScriptContainerElement *)0x0;
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             in_stack_fffffffffffffe60 = uVar16, bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          if (*(int *)(local_138.AllocatorInstance.Data + lVar26 + 8) == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *(wchar_t **)(local_138.AllocatorInstance.Data + lVar26);
          }
          ::FString::FString(&local_c8,pwVar18);
          pFVar12 = ::operator_new(0x58);
          if (pFVar12 != (FMarkForAdd *)0x0) {
            *(undefined8 *)&pFVar12->field_0x8 = 0;
            *(undefined8 *)&pFVar12->field_0x48 = 0;
            *(undefined8 *)&pFVar12->field_0x50 = 0;
            *(undefined ***)pFVar12 = &___7FMarkForAdd__6B_;
            *(undefined8 *)&pFVar12->field_0x10 = 0;
            *(undefined8 *)&pFVar12->field_0x18 = 0;
            *(undefined8 *)&pFVar12->field_0x20 = 0;
            *(undefined8 *)&pFVar12->field_0x28 = 0;
            *(undefined8 *)&pFVar12->field_0x30 = 0;
            *(undefined8 *)&pFVar12->field_0x38 = 0;
            *(undefined8 *)&pFVar12->field_0x40 = 0;
            pFVar13 = pFVar12;
          }
          local_100.Object = pFVar13;
          TSharedRef<FMarkForAdd,1>::TSharedRef<FMarkForAdd,1><FMarkForAdd>(&local_58,&local_100);
          FVar2.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
          local_d8 = local_58.Object;
          pTStack_d0 = local_58.SharedReferenceCount.ReferenceController;
          if (local_58.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          in_stack_fffffffffffffe58 = &local_168;
          iVar8 = (*pcVar1)(plVar10,&local_d8,&local_c8,0,in_stack_fffffffffffffe58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_d0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar2.ReferenceController);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_168,(FWriteAccessScope *)&local_88);
          if (((int)local_158 != 0) && (local_160.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_160.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_160,0,0,0x10);
            local_158 = local_158 & 0xffffffff00000000;
          }
          if (local_88.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
          }
          if (local_160.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
          if (iVar8 != 1) {
            bVar25 = false;
          }
        }
        if (local_res18[0] != '\0') {
          pcVar1 = *(code **)(*plVar10 + 0x90);
          uVar7 = 0;
          if ((int)uVar23 < local_180.ArrayNum) {
            uVar7 = uVar24;
          }
          if (uVar7 == 0) {
            in_stack_fffffffffffffe60 = (ulonglong)local_180.ArrayNum;
            in_stack_fffffffffffffe58 = pTVar20;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
          }
          if (*(int *)(local_180.AllocatorInstance.Data + lVar26 + 8) == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *(wchar_t **)(local_180.AllocatorInstance.Data + lVar26);
          }
          ::FString::FString(&local_b8,pwVar18);
          (*pcVar1)(plVar10,&local_110,&local_b8,1,in_stack_fffffffffffffe58,
                    in_stack_fffffffffffffe60);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if ((local_110 == (longlong *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          cVar3 = (**(code **)(*local_110 + 0xd8))();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108);
          if (cVar3 != '\0') {
            pFVar15 = (FDelete *)0x0;
            local_140 = 0;
            local_150.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            pcVar1 = *(code **)(*plVar10 + 0xd0);
            uVar7 = 0;
            if ((int)uVar23 < local_180.ArrayNum) {
              uVar7 = uVar24;
            }
            local_148.Data = (FScriptContainerElement *)0x0;
            if (uVar7 == 0) {
              in_stack_fffffffffffffe60 = (ulonglong)local_180.ArrayNum;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar1 = (code *)swi(3);
                uVar6 = (*pcVar1)();
                return (bool)uVar6;
              }
            }
            if (*(int *)(local_180.AllocatorInstance.Data + lVar26 + 8) == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = *(wchar_t **)(local_180.AllocatorInstance.Data + lVar26);
            }
            ::FString::FString(&local_98,pwVar18);
            pFVar14 = ::operator_new(0x58);
            if (pFVar14 != (FDelete *)0x0) {
              *(undefined8 *)&pFVar14->field_0x8 = 0;
              *(undefined8 *)&pFVar14->field_0x48 = 0;
              *(undefined8 *)&pFVar14->field_0x50 = 0;
              *(undefined ***)pFVar14 = &___7FDelete__6B_;
              *(undefined8 *)&pFVar14->field_0x10 = 0;
              *(undefined8 *)&pFVar14->field_0x18 = 0;
              *(undefined8 *)&pFVar14->field_0x20 = 0;
              *(undefined8 *)&pFVar14->field_0x28 = 0;
              *(undefined8 *)&pFVar14->field_0x30 = 0;
              *(undefined8 *)&pFVar14->field_0x38 = 0;
              *(undefined8 *)&pFVar14->field_0x40 = 0;
              pFVar15 = pFVar14;
            }
            local_f8.Object = pFVar15;
            TSharedRef<FDelete,1>::TSharedRef<FDelete,1><FDelete>(&local_48,&local_f8);
            FVar2.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
            local_a8 = local_48.Object;
            pTStack_a0 = local_48.SharedReferenceCount.ReferenceController;
            if (local_48.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            in_stack_fffffffffffffe58 = &local_150;
            iVar8 = (*pcVar1)(plVar10,&local_a8,&local_98,0,in_stack_fffffffffffffe58);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar2.ReferenceController);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_150,(FWriteAccessScope *)&local_70);
            if (((int)local_140 != 0) && (local_148.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)local_148.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_148,0,0,0x10);
              local_140 = local_140 & 0xffffffff00000000;
            }
            if (local_70.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
            }
            if (local_148.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
            lVar21 = local_170;
            if (iVar8 != 1) {
              bVar25 = false;
            }
            goto LAB_146b84c10;
          }
        }
        uVar7 = 0;
        if ((int)uVar23 < local_180.ArrayNum) {
          uVar7 = uVar24;
        }
        if (uVar7 == 0) {
          in_stack_fffffffffffffe60 = (ulonglong)local_180.ArrayNum;
          in_stack_fffffffffffffe58 = pTVar20;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
        }
        lVar21 = local_170;
        bVar5 = FPaths::DirectoryExists((FString *)(local_180.AllocatorInstance.Data + local_170));
        if (bVar5) {
          pIVar11 = IFileManager::Get();
          pcVar1 = *(code **)((longlong)*pIVar11 + 0x68);
          uVar7 = 0;
          if ((int)uVar23 < local_180.ArrayNum) {
            uVar7 = uVar24;
          }
          if (uVar7 == 0) {
            in_stack_fffffffffffffe60 = (ulonglong)local_180.ArrayNum;
            in_stack_fffffffffffffe58 = pTVar20;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
          }
          if (*(int *)(local_180.AllocatorInstance.Data + lVar26 + 8) == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *(wchar_t **)(local_180.AllocatorInstance.Data + lVar26);
          }
          cVar3 = (*pcVar1)(pIVar11,pwVar18,0,1,in_stack_fffffffffffffe58,in_stack_fffffffffffffe60)
          ;
          if (cVar3 != '\0') goto LAB_146b84b20;
LAB_146b84bfc:
          bVar25 = false;
        }
        else {
LAB_146b84b20:
          uVar7 = 0;
          if ((int)uVar23 < local_180.ArrayNum) {
            uVar7 = uVar24;
          }
          if (uVar7 == 0) {
            in_stack_fffffffffffffe60 = (ulonglong)local_180.ArrayNum;
            in_stack_fffffffffffffe58 = pTVar20;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
          }
          bVar5 = FPaths::FileExists((FString *)(local_180.AllocatorInstance.Data + lVar21));
          if (bVar5) {
            pIVar11 = IFileManager::Get();
            pcVar1 = *(code **)((longlong)*pIVar11 + 0x38);
            uVar7 = 0;
            if ((int)uVar23 < local_180.ArrayNum) {
              uVar7 = uVar24;
            }
            if (uVar7 == 0) {
              in_stack_fffffffffffffe60 = (ulonglong)local_180.ArrayNum;
              in_stack_fffffffffffffe58 = pTVar20;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar1 = (code *)swi(3);
                uVar6 = (*pcVar1)();
                return (bool)uVar6;
              }
            }
            if (*(int *)(local_180.AllocatorInstance.Data + lVar26 + 8) == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = *(wchar_t **)(local_180.AllocatorInstance.Data + lVar26);
            }
            in_stack_fffffffffffffe58 =
                 (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((ulonglong)in_stack_fffffffffffffe58 & 0xffffffffffffff00);
            cVar3 = (*pcVar1)(pIVar11,pwVar18,0,1,in_stack_fffffffffffffe58,
                              in_stack_fffffffffffffe60);
            if (cVar3 == '\0') goto LAB_146b84bfc;
          }
        }
      }
LAB_146b84c10:
      local_170 = lVar21 + 0x10;
      uVar23 = uVar23 + 1;
      pTVar20 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                &(pTVar20->AccessDetector).State.field_0x1;
    } while ((int)uVar23 < local_180.ArrayNum);
  }
  LocalizationConfigurationScript::GenerateAllConfigFiles(this);
  DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_180.AllocatorInstance.Data,local_180.ArrayNum);
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return bVar25;
}

// StaticRegisterNativesULocalizationTarget @ 146b894f0

void __cdecl ULocalizationTarget::StaticRegisterNativesULocalizationTarget(void)

{
  return;
}

// UpdateStatusFromConflictReport @ 146b908e0

void __thiscall ULocalizationTarget::UpdateStatusFromConflictReport(ULocalizationTarget *this)

{
  IFileManager *pIVar1;
  longlong lVar2;
  ForAnyElementType FVar3;
  FString local_18;
  
  LocalizationConfigurationScript::GetConflictReportPath(&local_18,this);
  pIVar1 = IFileManager::Get();
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,FVar3.Data);
  if (lVar2 == -1) {
    (this->Settings).ConflictStatus = Unknown;
  }
  else {
    (this->Settings).ConflictStatus = (lVar2 == 0) + ConflictsPresent;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateWordCountsFromCSV @ 146b90c50

bool __thiscall ULocalizationTarget::UpdateWordCountsFromCSV(ULocalizationTarget *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FString local_28;
  
  LocalizationConfigurationScript::GetWordCountCSVPath(&local_28,this);
  bVar3 = _anon_C0D83FF9::FWordCountCSVParser::Execute(&this->Settings,&local_28);
  if (!bVar3) {
    pFVar4 = (this->Settings).SupportedCulturesStatistics.AllocatorInstance.Data;
    iVar2 = (this->Settings).SupportedCulturesStatistics.ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->Settings).SupportedCulturesStatistics.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FCultureStatistics,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      *(undefined4 *)(pFVar4 + 0x10) = 0;
      pFVar4 = pFVar4 + 0x18;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

