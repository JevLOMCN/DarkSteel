// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 6

// operator() @ 14e4de9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_1>::operator()
          (void *this,int param_1,
          TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  FName this_00;
  UInterchangePipelineBase *this_01;
  code *pcVar4;
  bool bVar5;
  IAssetRegistry *pIVar6;
  undefined8 *puVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  UObject *pUVar13;
  UInterchangeManager *pUVar14;
  FString *pFVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  UObject *pUVar19;
  FSoftObjectPath *pFVar20;
  undefined8 *puVar21;
  UObject *this_02;
  FSoftObjectPath *this_03;
  undefined1 local_res20 [8];
  undefined1 local_b8;
  undefined1 local_b7 [3];
  uint local_b4;
  uint local_b0;
  UObject *local_a8;
  FString local_a0;
  undefined8 *local_90;
  FSoftObjectPath *local_88;
  FDestructionSentinel local_80;
  FString local_68;
  FString local_58;
  
  this_02 = (UObject *)(param_2->AllocatorInstance).Data;
  bVar5 = false;
  bVar11 = false;
  local_b4 = param_2->ArrayNum;
  uVar16 = (ulonglong)(int)local_b4;
  local_b0 = 0;
  pUVar19 = (UObject *)((longlong)this_02 + uVar16 * 0x38);
  local_a8 = pUVar19;
  do {
    while( true ) {
      if (param_2->ArrayNum != (int)uVar16) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (this_02 == pUVar19) {
        local_b4 = param_2->ArrayNum;
        uVar16 = (ulonglong)(int)local_b4;
        this_03 = (FSoftObjectPath *)(param_2->AllocatorInstance).Data;
        pFVar20 = (FSoftObjectPath *)((longlong)this_03 + uVar16 * 0x38);
        local_88 = pFVar20;
        do {
          if (param_2->ArrayNum != (int)uVar16) {
            local_b8 = 0;
            `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_b8);
          }
          if (this_03 == pFVar20) {
            if (3 < (byte)LogInterchangeEngine._0_1_) {
              if ((*(longlong *)this == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar17 = *(longlong *)this;
              uVar18 = 0;
              if (param_1 < *(int *)(lVar17 + 0x40)) {
                uVar18 = (uint)~param_1 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UInterchangeSourceData::ToDisplayString
                        (*(UInterchangeSourceData **)
                          (*(longlong *)(lVar17 + 0x38) + (longlong)param_1 * 8),&local_58);
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
            }
            return;
          }
          local_a8 = FSoftObjectPath::TryLoad(this_03,(FUObjectSerializeContext *)0x0);
          if (local_a8 != (UObject *)0x0) {
            if ((*(longlong *)this == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar17 = *(longlong *)this;
            local_b0 = *(uint *)(lVar17 + 0x60);
            uVar16 = (ulonglong)(int)local_b0;
            puVar21 = *(undefined8 **)(lVar17 + 0x58);
            local_90 = puVar21 + uVar16;
            while( true ) {
              puVar7 = local_90;
              if (*(int *)(lVar17 + 0x60) != (int)uVar16) {
                local_b7[0] = 0;
                `TCheckedPointerIterator<TObjectPtr<UInterchangePipelineBase>,int,0>::operator!='::
                __l2::<lambda_1>::operator()(local_b7);
              }
              pFVar20 = local_88;
              if (puVar21 == puVar7) break;
              this_00 = this_03[1].AssetPath.AssetName;
              this_01 = (UInterchangePipelineBase *)*puVar21;
              bVar8 = *(bool *)&this_03[1].SubPathString.Data.AllocatorInstance.Data;
              if (this_00 == (FName)0x0) {
                bVar11 = true;
                pFVar15 = &local_a0;
                local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_a0.Data.ArrayNum = 0;
                local_a0.Data.ArrayMax = 0;
              }
              else {
                bVar5 = true;
                pFVar15 = UInterchangeBaseNode::GetUniqueID
                                    ((UInterchangeBaseNode *)this_00,&local_68);
              }
              if ((*(longlong *)this == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar2 = *(longlong *)this;
              uVar18 = 0;
              if (param_1 < *(int *)(lVar2 + 0x30)) {
                uVar18 = (uint)~param_1 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UInterchangePipelineBase::ScriptedExecutePostBroadcastPipeline
                        (this_01,*(UInterchangeBaseNodeContainer **)
                                  (*(longlong *)(lVar2 + 0x28) + (longlong)param_1 * 8),pFVar15,
                         local_a8,bVar8);
              if ((bVar11) &&
                 (bVar11 = false,
                 local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              if ((bVar5) &&
                 (bVar5 = false,
                 local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              uVar16 = (ulonglong)local_b0;
              puVar21 = puVar21 + 1;
            }
          }
          uVar16 = (ulonglong)local_b4;
          this_03 = (FSoftObjectPath *)&this_03[1].SubPathString.Data.ArrayNum;
        } while( true );
      }
      pUVar13 = FSoftObjectPath::TryLoad((FSoftObjectPath *)this_02,(FUObjectSerializeContext *)0x0)
      ;
      if (pUVar13 != (UObject *)0x0) break;
LAB_14e4dec40:
      uVar16 = (ulonglong)local_b4;
      this_02 = (UObject *)&this_02[1].field_0x10;
    }
    if ((*(uint *)&pUVar13->field_0x8 >> 0x1e & 1) == 0) {
      if ((*(longlong *)this == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar6 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
      if (*(longlong *)(*(longlong *)this + 0x128) == 0) {
        if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Singleton",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                                     ,0x111,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)((longlong)*pIVar6 + 0x2a8))(pIVar6,pUVar13);
      }
      else {
        if ((*(longlong *)this == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)(*(longlong *)this + 0x128) != 0) {
          if ((*(longlong *)this == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(UObject **)(*(longlong *)this + 0x128) == pUVar13) {
            pUVar14 = UInterchangeManager::GetInterchangeManager();
            TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Broadcast
                      (&pUVar14->OnAssetPostReimport,pUVar13);
          }
        }
      }
      pUVar14 = UInterchangeManager::GetInterchangeManager();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar14->OnAssetPostImport,(FWriteAccessScope *)&local_80);
      puVar1 = &(pUVar14->OnAssetPostImport).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar8 = false;
      uVar18 = *(int *)&(pUVar14->OnAssetPostImport).field_0x10 - 1;
      if (-1 < (int)uVar18) {
        lVar17 = (longlong)(int)uVar18 << 4;
        bVar8 = false;
        do {
          uVar12 = 0;
          if ((int)uVar18 < *(int *)&(pUVar14->OnAssetPostImport).field_0x10) {
            uVar12 = ~uVar18 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(pUVar14->OnAssetPostImport).field_0x8;
          if (((*(int *)(lVar17 + 8 + lVar2) == 0) ||
              (plVar3 = *(longlong **)(lVar17 + lVar2), plVar3 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar3 + 0x68))(), cVar10 == '\0')) {
            bVar8 = true;
          }
          lVar17 = lVar17 + -0x10;
          uVar18 = uVar18 - 1;
        } while (-1 < (int)uVar18);
      }
      puVar1 = &(pUVar14->OnAssetPostImport).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar8) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar14->OnAssetPostImport
                   ,false);
      }
      pUVar19 = local_a8;
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        pUVar19 = local_a8;
      }
      goto LAB_14e4dec40;
    }
    UE::Interchange::Private::ObjectDeletionUtils::PurgeObject(pUVar13);
    uVar16 = (ulonglong)local_b4;
    this_02 = (UObject *)&this_02[1].field_0x10;
  } while( true );
}

// operator() @ 14e4df760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_2>::operator()
          (void *this,int param_1,
          TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UInterchangePipelineBase *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  FSoftObjectPath *pFVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  FString *pFVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  FScriptContainerElement *pFVar17;
  uint local_res20 [2];
  undefined1 local_a8 [4];
  uint local_a4;
  uint local_a0;
  FString local_98;
  UObject *local_88;
  longlong local_80;
  undefined8 *local_78;
  FSoftObjectPath *local_70;
  FString local_68;
  FString local_58;
  
  bVar6 = false;
  bVar10 = false;
  local_res20[0] = 0;
  local_a0 = param_2->ArrayNum;
  uVar15 = (ulonglong)(int)local_a0;
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar17 = pFVar3 + 0x28;
  local_70 = (FSoftObjectPath *)(pFVar3 + uVar15 * 0x38);
  while( true ) {
    pFVar8 = local_70;
    if (param_2->ArrayNum != (int)uVar15) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((FSoftObjectPath *)(pFVar17 + -0x28) == pFVar8) break;
    pUVar12 = FSoftObjectPath::TryLoad
                        ((FSoftObjectPath *)(pFVar17 + -0x28),(FUObjectSerializeContext *)0x0);
    local_88 = pUVar12;
    if (pUVar12 != (UObject *)0x0) {
      pUVar13 = Z_Construct_UClass_AActor_NoRegister();
      iVar2 = (int)pUVar13->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar13->_padding_)) {
        if ((*(longlong *)this == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_80 = *(longlong *)this;
        local_a4 = *(uint *)(local_80 + 0x60);
        uVar15 = (ulonglong)(int)local_a4;
        puVar16 = *(undefined8 **)(local_80 + 0x58);
        local_78 = puVar16 + uVar15;
        while( true ) {
          puVar7 = local_78;
          if (*(int *)(local_80 + 0x60) != (int)uVar15) {
            local_a8[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UInterchangePipelineBase>,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_a8);
          }
          if (puVar16 == puVar7) break;
          this_00 = (UInterchangePipelineBase *)*puVar16;
          FVar1 = pFVar17[8];
          if (*(UInterchangeBaseNode **)pFVar17 == (UInterchangeBaseNode *)0x0) {
            bVar10 = true;
            local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.Data.ArrayNum = 0;
            local_98.Data.ArrayMax = 0;
            pFVar14 = &local_98;
          }
          else {
            bVar6 = true;
            pFVar14 = UInterchangeBaseNode::GetUniqueID(*(UInterchangeBaseNode **)pFVar17,&local_68)
            ;
          }
          if ((*(longlong *)this == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar4 = *(longlong *)this;
          uVar11 = 0;
          if (param_1 < *(int *)(lVar4 + 0x30)) {
            uVar11 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UInterchangePipelineBase::ScriptedExecutePostBroadcastPipeline
                    (this_00,*(UInterchangeBaseNodeContainer **)
                              (*(longlong *)(lVar4 + 0x28) + (longlong)param_1 * 8),pFVar14,local_88
                     ,(bool)FVar1);
          if ((bVar10) &&
             (bVar10 = false, local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if ((bVar6) &&
             (bVar6 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          puVar16 = puVar16 + 1;
          uVar15 = (ulonglong)local_a4;
        }
      }
    }
    pFVar17 = pFVar17 + 0x38;
    uVar15 = (ulonglong)local_a0;
  }
  if (3 < (byte)LogInterchangeEngine._0_1_) {
    if ((*(longlong *)this == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)this;
    uVar11 = 0;
    if (param_1 < *(int *)(lVar4 + 0x40)) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UInterchangeSourceData::ToDisplayString
              (*(UInterchangeSourceData **)(*(longlong *)(lVar4 + 0x38) + (longlong)param_1 * 8),
               &local_58);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14e4dfc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_3>::operator()
          (void *this,int param_1,
          TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  FSoftObjectPath *this_00;
  FSoftObjectPath *pFVar7;
  undefined1 local_res18 [16];
  FString local_28;
  
  if (3 < (byte)LogInterchangeEngine._0_1_) {
    if ((*(longlong *)this == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)this;
    uVar5 = 0;
    if (param_1 < *(int *)(lVar2 + 0x40)) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UInterchangeSourceData::ToDisplayString
              (*(UInterchangeSourceData **)(*(longlong *)(lVar2 + 0x38) + (longlong)param_1 * 8),
               &local_28);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_2->ArrayNum;
  this_00 = (FSoftObjectPath *)(param_2->AllocatorInstance).Data;
  pFVar7 = (FSoftObjectPath *)((longlong)this_00 + (longlong)iVar1 * 0x38);
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (this_00 == pFVar7) break;
    pUVar6 = FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
    UE::Interchange::Private::ObjectDeletionUtils::PurgeObject(pUVar6);
    this_00 = (FSoftObjectPath *)&this_00[1].SubPathString.Data.ArrayNum;
  }
  return;
}

// operator() @ 14e4dfdc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_4>::operator()
          (void *this,int param_1,
          TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  AActor *this_00;
  UClass *pUVar7;
  UWorld *this_01;
  FSoftObjectPath *this_02;
  FSoftObjectPath *pFVar8;
  undefined1 local_res18 [16];
  FString local_38;
  
  this_02 = (FSoftObjectPath *)(param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  pFVar8 = (FSoftObjectPath *)((longlong)this_02 + (longlong)iVar1 * 0x38);
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (this_02 == pFVar8) break;
    this_00 = (AActor *)FSoftObjectPath::TryLoad(this_02,(FUObjectSerializeContext *)0x0);
    if (this_00 != (AActor *)0x0) {
      pUVar7 = Z_Construct_UClass_AActor_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if (((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar7->_padding_)) && (this_01 = AActor::GetWorld(this_00), this_01 != (UWorld *)0x0))
      {
        UWorld::RemoveActor(this_01,this_00,false);
      }
    }
    this_02 = (FSoftObjectPath *)&this_02[1].SubPathString.Data.ArrayNum;
  }
  if (3 < (byte)LogInterchangeEngine._0_1_) {
    if ((*(longlong *)this == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)this;
    uVar6 = 0;
    if (param_1 < *(int *)(lVar3 + 0x40)) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UInterchangeSourceData::ToDisplayString
              (*(UInterchangeSourceData **)(*(longlong *)(lVar3 + 0x38) + (longlong)param_1 * 8),
               &local_38);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Execute @ 14e4eb6b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FTaskCompletion_GameThread::Execute(FTaskCompletion_GameThread *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UInterchangeManager *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<int> aVar5;
  TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
  *pTVar6;
  FImportAsyncHelper *this_01;
  FImportAsyncHelper *pFVar7;
  FImportAsyncHelper *pFVar8;
  bool bVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  TWeakPtr<UE::Interchange::FImportAsyncHelper,1> local_f8;
  code *local_e8 [2];
  undefined **local_d8;
  FImportAsyncHelper *local_d0;
  FImportAsyncHelper *local_c8;
  undefined8 local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FImportAsyncHelper *local_a0;
  FImportAsyncHelper *local_98;
  undefined8 local_90;
  code *local_88 [2];
  undefined **local_78;
  FImportAsyncHelper *local_70;
  FImportAsyncHelper *local_68;
  undefined8 local_60;
  code *local_58 [2];
  undefined **local_48;
  FImportAsyncHelper *local_40;
  FImportAsyncHelper *local_38;
  undefined8 local_30;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId198,"UE::Interchange::FTaskCompletion_GameThread::DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCompletion.cpp"
               ,0xc6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId198);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name203,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name203,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name203,true);
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCompletion.cpp"
                         ,0xcc,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (FImportAsyncHelper *)(this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  this_01 = (FImportAsyncHelper *)0x0;
  pFVar7 = pFVar8;
  if (pFVar8 != (FImportAsyncHelper *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar8->_padding_;
    do {
      this_01 = (FImportAsyncHelper *)0x0;
      pFVar7 = (FImportAsyncHelper *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14e4eb7c5;
      LOCK();
      aVar5 = *(atomic<int> *)&pFVar8->_padding_;
      bVar4 = aVar2 == aVar5;
      if (bVar4) {
        *(atomic<int> *)&pFVar8->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar4);
    this_01 = (this->WeakAsyncHelper).Object;
    pFVar7 = pFVar8;
    if (this_01 != (FImportAsyncHelper *)0x0) goto LAB_14e4eb811;
  }
LAB_14e4eb7c5:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("AsyncHelper.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCompletion.cpp"
                     ,0xcf,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pFVar8 = pFVar7;
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e4eb811:
  FImportAsyncHelper::SendAnalyticImportEndData(this_01);
  if ((this_01 == (FImportAsyncHelper *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FImportAsyncHelper::ReleaseTranslatorsSource(this_01);
  if ((this_01 == (FImportAsyncHelper *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this_01->bCancel == (atomic<bool>)0x0) {
    if ((this_01 == (FImportAsyncHelper *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pFVar8 != (FImportAsyncHelper *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->_padding_ + 1);
      UNLOCK();
    }
    local_c0 = 0;
    local_d8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`19'::<lambda_1>,0,0>
                ::_vftable_;
    local_e8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_1>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
    local_d0 = this_01;
    local_c8 = pFVar8;
    FImportAsyncHelper::IterateImportedAssetsPerSourceIndex
              (this_01,(TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
                        *)local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((this_01 == (FImportAsyncHelper *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pFVar8 != (FImportAsyncHelper *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->_padding_ + 1);
      UNLOCK();
    }
    local_90 = 0;
    local_a8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`19'::<lambda_2>,0,0>
                ::_vftable_;
    pTVar6 = (TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
              *)local_b8;
    local_b8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_2>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
    local_a0 = this_01;
    local_98 = pFVar8;
  }
  else {
    if ((this_01 == (FImportAsyncHelper *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pFVar8 != (FImportAsyncHelper *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->_padding_ + 1);
      UNLOCK();
    }
    local_60 = 0;
    local_78 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`21'::<lambda_3>,0,0>
                ::_vftable_;
    local_88[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_3>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
    local_70 = this_01;
    local_68 = pFVar8;
    FImportAsyncHelper::IterateImportedAssetsPerSourceIndex
              (this_01,(TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
                        *)local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((this_01 == (FImportAsyncHelper *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pFVar8 != (FImportAsyncHelper *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->_padding_ + 1);
      UNLOCK();
    }
    local_30 = 0;
    local_48 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`21'::<lambda_4>,0,0>
                ::_vftable_;
    pTVar6 = (TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
              *)local_58;
    local_58[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_4>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
    local_40 = this_01;
    local_38 = pFVar8;
  }
  FImportAsyncHelper::IterateImportedSceneObjectsPerSourceIndex(this_01,pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((this_01 == (FImportAsyncHelper *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FImportResult::SetDone((this_01->AssetImportResult).Object);
  FImportResult::SetDone((this_01->SceneImportResult).Object);
  if (pFVar8 != (FImportAsyncHelper *)0x0) {
    LOCK();
    paVar1 = (atomic<int> *)&pFVar8->_padding_;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)pFVar8->_padding_)();
      LOCK();
      paVar1 = (atomic<int> *)&pFVar8->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pFVar8->_padding_ + 8))(pFVar8,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_f8.Object = (this->WeakAsyncHelper).Object;
  this_00 = this->InterchangeManager;
  local_f8.WeakReferenceCount.ReferenceController =
       (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  if (local_f8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  UInterchangeManager::ReleaseAsyncHelper(this_00,&local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTaskThread @ 14e4f9720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EInterchangeTaskThread __thiscall
UE::Interchange::FTaskCompletion_GameThread::GetTaskThread(FTaskCompletion_GameThread *this)

{
  return GameThread;
}

