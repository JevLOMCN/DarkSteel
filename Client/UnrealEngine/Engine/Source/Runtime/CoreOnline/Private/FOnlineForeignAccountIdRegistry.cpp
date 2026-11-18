// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 4

// FromReplicationData @ 144616d60

TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> __thiscall
UE::Online::FOnlineForeignAccountIdRegistry::FromReplicationData
          (FOnlineForeignAccountIdRegistry *this,EOnlineServices param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FRepData *this_00;
  longlong lVar8;
  uint *puVar9;
  undefined7 in_register_00000011;
  uint *puVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *in_R9;
  undefined1 local_res10 [8];
  EOnlineServices local_res18 [16];
  bool local_48 [8];
  uint *local_40;
  
  puVar10 = (uint *)CONCAT71(in_register_00000011,param_1);
  local_res18[0] = (EOnlineServices)param_2;
  *puVar10 = 0;
  if (in_R9->ArrayNum != 0) {
    this_00 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData,0>_>
              ::FindOrAddImpl<enum_UE::Online::EOnlineServices_const_&>
                        (this,(uint)param_2 & 0xff,local_res18);
    pFVar11 = (in_R9->AllocatorInstance).Data;
    iVar6 = in_R9->ArrayNum;
    pFVar2 = pFVar11 + iVar6;
    puVar9 = (uint *)0x0;
    while( true ) {
      if (in_R9->ArrayNum != iVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<unsigned_char_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      uVar7 = (uint)puVar9;
      if (pFVar11 == pFVar2) break;
      puVar9 = (uint *)(ulonglong)
                       (uVar7 ^ uVar7 * 0x40 + (int)((ulonglong)puVar9 >> 2) + -0x61c88647 +
                                (uint)(byte)*pFVar11);
      pFVar11 = pFVar11 + 1;
    }
    iVar6 = TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                      ((TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
                        *)this_00,uVar7,in_R9);
    if (iVar6 != -1) {
      lVar8 = (longlong)iVar6 * 0x20 + *(longlong *)&this_00->RepDataToHandle;
      puVar9 = (uint *)(lVar8 + 0x10);
      if (lVar8 == 0) {
        puVar9 = (uint *)0x0;
      }
      if (puVar9 != (uint *)0x0) {
        *puVar10 = *puVar9;
        goto LAB_144616f92;
      }
    }
    pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this_00->RepDataArray).AllocatorInstance.Data;
    if (((pTVar3 <= in_R9) && (in_R9 < pTVar3 + (this_00->RepDataArray).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>)uVar7;
    }
    iVar6 = (this_00->RepDataArray).ArrayNum;
    piVar1 = &(this_00->RepDataArray).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this_00->RepDataArray).AllocatorInstance,piVar1);
    }
    (this_00->RepDataArray).ArrayNum = iVar6 + 1;
    pFVar11 = (this_00->RepDataArray).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)&pFVar11->field_0x0 = 0;
    iVar6 = in_R9->ArrayNum;
    pFVar2 = (in_R9->AllocatorInstance).Data;
    *(int *)&pFVar11[8].field_0x0 = iVar6;
    if (iVar6 == 0) {
      *(int *)(pFVar11 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar6,0,(ForAnyElementType *)pFVar11,iVar6,(int *)(pFVar11 + 0xc));
      memcpy(*(void **)&pFVar11->field_0x0,pFVar2,(longlong)iVar6);
    }
    uVar7 = (this_00->RepDataArray).ArrayNum;
    uVar12 = (uint)local_res18[0];
    if ((0xfeffffff < uVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Handle < 0xFF000000",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                           ,0x13a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>)uVar7;
    }
    *puVar10 = uVar12 << 0x18 | uVar7 & 0xffffff;
    local_40 = puVar10;
    TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>_>
              ((TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>
                *)(local_res18 + 8),local_48);
  }
LAB_144616f92:
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>)(uint)puVar10;
}

// ToLogString @ 14461a5a0

FString * __thiscall
UE::Online::FOnlineForeignAccountIdRegistry::ToLogString
          (FOnlineForeignAccountIdRegistry *this,FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  FString *pFVar8;
  undefined1 *puVar9;
  char *pcVar10;
  uint uVar11;
  FString local_38;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar2 = param_1->Value;
  uVar11 = uVar2 & 0xffffff;
  if (uVar11 != 0) {
    iVar1 = uVar11 - 1;
    if (*(int *)&(this->OnlineServicesToRepData).field_0x8 !=
        *(int *)&(this->OnlineServicesToRepData).field_0x34) {
      puVar9 = *(undefined1 **)&(this->OnlineServicesToRepData).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->OnlineServicesToRepData).field_0x38;
      }
      iVar6 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->OnlineServicesToRepData).field_0x48 - 1U &
                                uVar2 >> 0x18) * 4);
      if (iVar6 != -1) {
        do {
          pcVar7 = (char *)((longlong)iVar6 * 0x70 + *(longlong *)&this->OnlineServicesToRepData);
          if (*pcVar7 == (char)(uVar2 >> 0x18)) {
            pcVar10 = pcVar7 + 8;
            if (pcVar7 == (char *)0x0) {
              pcVar10 = (char *)0x0;
            }
            if (pcVar10 == (char *)0x0) {
              return __return_storage_ptr__;
            }
            if ((iVar1 < 0) || (*(int *)(pcVar10 + 0x58) <= iVar1)) {
              bVar5 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<2872030461738090536>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\CoreOnlinePrivate.cpp"
                                 ,0x28,"RepDataArray.IsValidIndex(HandleIndex)");
              if (!bVar5) {
                return __return_storage_ptr__;
              }
              pcVar4 = (code *)swi(3);
              pFVar8 = (FString *)(*pcVar4)();
              return pFVar8;
            }
            if ((iVar1 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar8 = (FString *)(*pcVar4)();
              return pFVar8;
            }
            ::FString::FromHexBlob
                      (&local_28,
                       *(uchar **)(*(longlong *)(pcVar10 + 0x50) + -0x10 + (ulonglong)uVar11 * 0x10)
                       ,*(uint *)(*(longlong *)(pcVar10 + 0x50) + -8 + (ulonglong)uVar11 * 0x10));
            ::FString::PrintfImpl(&local_38,L"ForeignId=[Type=%d Handle=%d RepData=[%s]");
            if (__return_storage_ptr__ != &local_38) {
              pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
              if (pFVar3 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar3);
              }
              (__return_storage_ptr__->Data).AllocatorInstance.Data =
                   local_38.Data.AllocatorInstance.Data;
              (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
              (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
              local_38.Data.ArrayNum = 0;
              local_38.Data.ArrayMax = 0;
              local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
            if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return __return_storage_ptr__;
            }
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
            return __return_storage_ptr__;
          }
          iVar6 = *(int *)(pcVar7 + 0x68);
        } while (iVar6 != -1);
      }
    }
  }
  return __return_storage_ptr__;
}

// ToReplicationData @ 14461adf0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::FOnlineForeignAccountIdRegistry::ToReplicationData
          (FOnlineForeignAccountIdRegistry *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 *puVar9;
  char *pcVar10;
  uint uVar11;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = param_1->Value;
  uVar11 = uVar2 & 0xffffff;
  if (uVar11 != 0) {
    iVar3 = uVar11 - 1;
    if (*(int *)&(this->OnlineServicesToRepData).field_0x8 !=
        *(int *)&(this->OnlineServicesToRepData).field_0x34) {
      puVar9 = *(undefined1 **)&(this->OnlineServicesToRepData).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->OnlineServicesToRepData).field_0x38;
      }
      iVar6 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->OnlineServicesToRepData).field_0x48 - 1U &
                                uVar2 >> 0x18) * 4);
      if (iVar6 != -1) {
        do {
          pcVar7 = (char *)((longlong)iVar6 * 0x70 + *(longlong *)&this->OnlineServicesToRepData);
          if (*pcVar7 == (char)(uVar2 >> 0x18)) {
            pcVar10 = pcVar7 + 8;
            if (pcVar7 == (char *)0x0) {
              pcVar10 = (char *)0x0;
            }
            if (pcVar10 == (char *)0x0) {
              return __return_storage_ptr__;
            }
            if ((iVar3 < 0) || (*(int *)(pcVar10 + 0x58) <= iVar3)) {
              bVar5 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<2872030461738090559>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\CoreOnlinePrivate.cpp"
                                 ,0x3f,"RepDataArray.IsValidIndex(HandleIndex)");
              if (!bVar5) {
                return __return_storage_ptr__;
              }
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar8;
            }
            if ((iVar3 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar8;
            }
            pTVar8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                     (*(longlong *)(pcVar10 + 0x50) + (ulonglong)uVar11 * 0x10 + -0x10);
            if (__return_storage_ptr__ == pTVar8) {
              return __return_storage_ptr__;
            }
            iVar3 = pTVar8->ArrayNum;
            _Src = (pTVar8->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar3;
            if ((iVar3 == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
              return __return_storage_ptr__;
            }
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar3,*piVar1,&__return_storage_ptr__->AllocatorInstance,iVar3,piVar1);
            if (iVar3 == 0) {
              return __return_storage_ptr__;
            }
            memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar3);
            return __return_storage_ptr__;
          }
          iVar6 = *(int *)(pcVar7 + 0x68);
        } while (iVar6 != -1);
      }
    }
  }
  return __return_storage_ptr__;
}

// ToString @ 14461b280

FString * __thiscall
UE::Online::FOnlineForeignAccountIdRegistry::ToString
          (FOnlineForeignAccountIdRegistry *this,FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  FString *pFVar8;
  undefined1 *puVar9;
  char *pcVar10;
  uint uVar11;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar2 = param_1->Value;
  uVar11 = uVar2 & 0xffffff;
  if (uVar11 != 0) {
    iVar1 = uVar11 - 1;
    if (*(int *)&(this->OnlineServicesToRepData).field_0x8 !=
        *(int *)&(this->OnlineServicesToRepData).field_0x34) {
      puVar9 = *(undefined1 **)&(this->OnlineServicesToRepData).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->OnlineServicesToRepData).field_0x38;
      }
      iVar6 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->OnlineServicesToRepData).field_0x48 - 1U &
                                uVar2 >> 0x18) * 4);
      if (iVar6 != -1) {
        while (pcVar7 = (char *)((longlong)iVar6 * 0x70 +
                                *(longlong *)&this->OnlineServicesToRepData),
              *pcVar7 != (char)(uVar2 >> 0x18)) {
          iVar6 = *(int *)(pcVar7 + 0x68);
          if (iVar6 == -1) {
            return __return_storage_ptr__;
          }
        }
        pcVar10 = pcVar7 + 8;
        if (pcVar7 == (char *)0x0) {
          pcVar10 = (char *)0x0;
        }
        if (pcVar10 != (char *)0x0) {
          if ((iVar1 < 0) || (*(int *)(pcVar10 + 0x58) <= iVar1)) {
            bVar5 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<2872030461738090515>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\CoreOnlinePrivate.cpp"
                               ,0x13,"RepDataArray.IsValidIndex(HandleIndex)");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar8 = (FString *)(*pcVar4)();
              return pFVar8;
            }
          }
          else {
            if ((iVar1 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar8 = (FString *)(*pcVar4)();
              return pFVar8;
            }
            pFVar8 = ::FString::FromHexBlob
                               (&local_18,
                                *(uchar **)
                                 (*(longlong *)(pcVar10 + 0x50) + -0x10 + (ulonglong)uVar11 * 0x10),
                                *(uint *)(*(longlong *)(pcVar10 + 0x50) + -8 +
                                         (ulonglong)uVar11 * 0x10));
            if (__return_storage_ptr__ != pFVar8) {
              pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
              if (pFVar3 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar3);
              }
              (__return_storage_ptr__->Data).AllocatorInstance.Data =
                   (pFVar8->Data).AllocatorInstance.Data;
              (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
              (__return_storage_ptr__->Data).ArrayMax = (pFVar8->Data).ArrayMax;
              (pFVar8->Data).ArrayNum = 0;
              (pFVar8->Data).ArrayMax = 0;
            }
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

