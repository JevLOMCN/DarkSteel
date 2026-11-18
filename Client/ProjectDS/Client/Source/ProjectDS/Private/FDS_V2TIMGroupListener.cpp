// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// operator() @ 14b9da4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FDS_V2TIMGroupListener::OnGroupInfoChanged'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar3;
  __uint64 _Var4;
  char *pcVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 auStackY_178 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar7->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9da4f0;
      }
      LOCK();
      aVar2 = pTVar7->SharedReferenceCount;
      bVar8 = aVar1 == aVar2;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar8);
    if (*(longlong *)this != 0) {
      this_00 = UDS_TencentCloudChatManager::GetInst();
      if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,
                     "FDS_V2TIMGroupListener::OnGroupInfoChanged::<lambda_1>::operator ()",0x43,Yes)
          ;
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x115,L"tencentChatManager == nullptr");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else if (((char)this_00->_padding_ != '\x01') &&
              (_Var4 = TXV2TIMGroupChangeInfoVector::Size
                                 ((TXV2TIMGroupChangeInfoVector *)((longlong)this + 0x20)),
              _Var4 != 0)) {
        pcVar5 = V2TIMString::CString((V2TIMString *)((longlong)this + 0x10));
        pFVar6 = DS_Util::ConvertUTF8ToFString(&local_148,pcVar5);
        UDS_TencentCloudChatManager::Request_GetGroupInfo(this_00,pFVar6,false);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14b9da4f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 14b9da620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FDS_V2TIMGroupListener::OnMemberEnter'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  __uint64 _Var4;
  V2TIMGroupMemberInfo *this_01;
  char *pcVar5;
  longlong lVar6;
  __uint64 _Var7;
  ForAnyElementType FVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 auStackY_1d8 [32];
  int local_198;
  int local_194;
  FString local_190;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar10->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9da67b;
      }
      LOCK();
      aVar2 = pTVar10->SharedReferenceCount;
      bVar11 = aVar1 == aVar2;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar11);
    if (*(longlong *)this != 0) {
      this_00 = UDS_ChattingManager::GetInst();
      if (this_00 == (UDS_ChattingManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_V2TIMGroupListener::OnMemberEnter::<lambda_1>::operator ()",
                     0x3e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_158.Ptr,0x71,L"chattingManager == nullptr");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else if ((char)this_00->_padding_ != '\x01') {
        iVar9 = 0;
        _Var4 = TXV2TIMGroupMemberInfoVector::Size
                          ((TXV2TIMGroupMemberInfoVector *)((longlong)this + 0x20));
        if (_Var4 != 0) {
          _Var4 = 0;
          do {
            this_01 = TXV2TIMGroupMemberInfoVector::operator[]
                                ((TXV2TIMGroupMemberInfoVector *)((longlong)this + 0x20),_Var4);
            pcVar5 = V2TIMString::CString(&this_01->userID);
            DS_Util::ConvertUTF8ToFString(&local_180,pcVar5);
            pcVar5 = V2TIMString::CString(&this_01->nickName);
            DS_Util::ConvertUTF8ToFString(&local_170,pcVar5);
            pcVar5 = V2TIMString::CString(&this_01->faceURL);
            DS_Util::ConvertUTF8ToFString(&local_190,pcVar5);
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_180.Data.ArrayNum != 0) {
              FVar8.Data = local_180.Data.AllocatorInstance.Data;
            }
            lVar6 = _wtoi64((wchar_t *)FVar8.Data);
            local_194 = 0;
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_190.Data.ArrayNum != 0) {
              FVar8.Data = local_190.Data.AllocatorInstance.Data;
            }
            local_198 = 0;
            FParse::Value((wchar_t *)FVar8.Data,L"CharID=",&local_194);
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_190.Data.ArrayNum != 0) {
              FVar8.Data = local_190.Data.AllocatorInstance.Data;
            }
            FParse::Value((wchar_t *)FVar8.Data,L"CharLevel=",&local_198);
            UDS_ChattingManager::OnAddGroupMember
                      (this_00,(FString *)((longlong)this + 0x10),lVar6,&local_170,local_194,
                       local_198,true);
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
            if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data.AllocatorInstance.Data);
            }
            if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_180.Data.AllocatorInstance.Data);
            }
            iVar9 = iVar9 + 1;
            _Var4 = (__uint64)iVar9;
            _Var7 = TXV2TIMGroupMemberInfoVector::Size
                              ((TXV2TIMGroupMemberInfoVector *)((longlong)this + 0x20));
          } while (_Var4 < _Var7);
        }
      }
    }
  }
LAB_14b9da67b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14b9da8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FDS_V2TIMGroupListener::OnMemberInfoChanged'::__l2::<lambda_1>::operator()(void *this)

{
  TXV2TIMGroupMemberChangeInfoVector *this_00;
  int *piVar1;
  code *pcVar2;
  atomic<int> aVar3;
  ForAnyElementType FVar4;
  FDS_V2TIMRequestGetGroupMembersInfo *pFVar5;
  atomic<int> aVar6;
  int iVar7;
  UDS_ChattingManager *pUVar8;
  UDS_LogManager *pUVar9;
  UDS_TencentCloudChatManager *this_01;
  __uint64 _Var10;
  V2TIMGroupMemberChangeInfo *this_02;
  char *pcVar11;
  FScriptContainerElement *pFVar12;
  __uint64 _Var13;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStackY_418 [32];
  ForAnyElementType local_3d8;
  undefined8 local_3d0;
  TSharedPtr<FDS_V2TIMRequestGetGroupMembersInfo,1> local_3c8;
  UDS_TencentCloudChatManager *local_3b8;
  FString local_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
  pTVar15 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  local_3c8.Object = this;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar15->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9da910;
      }
      LOCK();
      aVar6 = pTVar15->SharedReferenceCount;
      bVar18 = aVar3 == aVar6;
      if (bVar18) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar18);
    if (*(longlong *)this != 0) {
      pUVar8 = UDS_ChattingManager::GetInst();
      if (pUVar8 == (UDS_ChattingManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_398._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_398,
                     "FDS_V2TIMGroupListener::OnMemberInfoChanged::<lambda_1>::operator ()",0x44,Yes
                    );
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_398.Ptr,0xe5,L"chattingManager == nullptr");
          if ((void *)local_398._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_398._padding_);
          }
        }
      }
      else if ((char)pUVar8->_padding_ != '\x01') {
        this_01 = UDS_TencentCloudChatManager::GetInst();
        local_3b8 = this_01;
        if (this_01 == (UDS_TencentCloudChatManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            local_278._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_278,
                       "FDS_V2TIMGroupListener::OnMemberInfoChanged::<lambda_1>::operator ()",0x44,
                       Yes);
            UDS_LogManager::PrintLog
                      (pUVar9,1,Warning,local_278.Ptr,0xf1,L"tencentChatManager == nullptr");
            if ((void *)local_278._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_278._padding_);
            }
          }
        }
        else {
          _Var13 = 0;
          this_00 = (TXV2TIMGroupMemberChangeInfoVector *)((longlong)this + 0x20);
          local_3d8.Data = (FScriptContainerElement *)0x0;
          local_3d0 = 0;
          _Var10 = TXV2TIMGroupMemberChangeInfoVector::Size(this_00);
          uVar17 = _Var13;
          if (_Var10 != 0) {
            do {
              this_02 = TXV2TIMGroupMemberChangeInfoVector::operator[](this_00,_Var13);
              pcVar11 = V2TIMString::CString(&this_02->userID);
              DS_Util::ConvertUTF8ToFString(&local_3b0,pcVar11);
              iVar7 = (int)local_3d0;
              if ((int)local_3d0 == local_3d0._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_3d8,(int *)((longlong)&local_3d0 + 4));
              }
              FVar4.Data = local_3b0.Data.AllocatorInstance.Data;
              pFVar12 = local_3d8.Data + (longlong)iVar7 * 0x10;
              local_3d0 = CONCAT44(local_3d0._4_4_,iVar7 + 1);
              *(FScriptContainerElement **)pFVar12 = (FScriptContainerElement *)0x0;
              iVar7 = local_3b0.Data.ArrayNum;
              *(int *)(pFVar12 + 8) = iVar7;
              if (iVar7 == 0) {
                *(int *)(pFVar12 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar7,0,(ForAnyElementType *)pFVar12,iVar7,(int *)(pFVar12 + 0xc));
                    /* WARNING: Load size is inaccurate */
                memcpy(*pFVar12,FVar4.Data,(longlong)iVar7 * 2);
              }
              if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
              }
              uVar16 = (int)uVar17 + 1;
              _Var13 = (__uint64)(int)uVar16;
              _Var10 = TXV2TIMGroupMemberChangeInfoVector::Size(this_00);
              this_01 = local_3b8;
              this = local_3c8.Object;
              uVar17 = (ulonglong)uVar16;
            } while (_Var13 < _Var10);
          }
          if (0 < (int)local_3d0) {
            if (this_01->ChatState == LoggedIn) {
              UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetGroupMembersInfo>
                        (this_01,&local_3c8);
              pFVar5 = local_3c8.Object;
              if ((local_3c8.Object == (FDS_V2TIMRequestGetGroupMembersInfo *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar18)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              ::FString::operator=
                        (&pFVar5->GroupID,
                         (FString *)&((FDS_V2TIMRequestGetGroupMembersInfo *)this)->_padding_);
              if ((pFVar5 == (FDS_V2TIMRequestGetGroupMembersInfo *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar18)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar14 = &pFVar5->UserIDs;
              if (pTVar14 != (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_3d8) {
                DestructItems<FString,int>
                          ((FString *)(pTVar14->AllocatorInstance).Data,(pFVar5->UserIDs).ArrayNum);
                FVar4.Data = local_3d8.Data;
                iVar7 = (int)local_3d0;
                piVar1 = &(pFVar5->UserIDs).ArrayMax;
                (pFVar5->UserIDs).ArrayNum = (int)local_3d0;
                if (((int)local_3d0 == 0) && (*piVar1 == 0)) {
                  *piVar1 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,(int)local_3d0,*piVar1,&pTVar14->AllocatorInstance,
                             (int)local_3d0,piVar1);
                  ConstructItems<FString,FString,int>
                            ((pTVar14->AllocatorInstance).Data,(FString *)FVar4.Data,iVar7);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_3c8.SharedReferenceCount.ReferenceController);
            }
            else {
              pUVar9 = UDS_LogManager::GetInst();
              if (pUVar9 != (UDS_LogManager *)0x0) {
                pUVar9 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_TencentCloudChatManager::Request_GetGroupMemberInfo",0x37
                           ,Yes);
                UDS_LogManager::PrintLog
                          (pUVar9,1,Warning,local_158.Ptr,0x34a,L"[TCC] IsLoggedIn() == false");
                if ((void *)local_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_158._padding_);
                }
              }
            }
          }
          DestructItems<FString,int>((FString *)local_3d8.Data,(int)local_3d0);
          if (local_3d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.Data);
          }
        }
      }
    }
  }
LAB_14b9da910:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

// operator() @ 14b9dad60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FDS_V2TIMGroupListener::OnMemberKicked'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  __uint64 _Var4;
  V2TIMGroupMemberInfo *this_01;
  char *pcVar5;
  longlong lVar6;
  ForAnyElementType _Str;
  __uint64 _Var7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStackY_198 [32];
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar8->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9dadbd;
      }
      LOCK();
      aVar2 = pTVar8->SharedReferenceCount;
      bVar11 = aVar1 == aVar2;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar11);
    if (*(longlong *)this != 0) {
      this_00 = UDS_ChattingManager::GetInst();
      if (this_00 == (UDS_ChattingManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"FDS_V2TIMGroupListener::OnMemberKicked::<lambda_1>::operator ()",
                     0x3f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_148.Ptr,0xbf,L"chattingManager == nullptr");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else if ((char)this_00->_padding_ != '\x01') {
        _Var7 = 0;
        _Var4 = TXV2TIMGroupMemberInfoVector::Size
                          ((TXV2TIMGroupMemberInfoVector *)((longlong)this + 0x20));
        uVar10 = _Var7;
        if (_Var4 != 0) {
          do {
            this_01 = TXV2TIMGroupMemberInfoVector::operator[]
                                ((TXV2TIMGroupMemberInfoVector *)((longlong)this + 0x20),_Var7);
            pcVar5 = V2TIMString::CString(&this_01->userID);
            DS_Util::ConvertUTF8ToFString(&local_168,pcVar5);
            pcVar5 = V2TIMString::CString(&this_01->nickName);
            DS_Util::ConvertUTF8ToFString(&local_158,pcVar5);
            _Str.Data = (FScriptContainerElement *)L"";
            if (local_168.Data.ArrayNum != 0) {
              _Str.Data = local_168.Data.AllocatorInstance.Data;
            }
            lVar6 = _wtoi64((wchar_t *)_Str.Data);
            UDS_ChattingManager::OnRemoveGroupMember
                      (this_00,(FString *)((longlong)this + 0x10),lVar6,&local_158,true);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
            uVar9 = (int)uVar10 + 1;
            _Var7 = (__uint64)(int)uVar9;
            _Var4 = TXV2TIMGroupMemberInfoVector::Size
                              ((TXV2TIMGroupMemberInfoVector *)((longlong)this + 0x20));
            uVar10 = (ulonglong)uVar9;
          } while (_Var7 < _Var4);
        }
      }
    }
  }
LAB_14b9dadbd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14b9daf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FDS_V2TIMGroupListener::OnMemberLeave'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  char *pcVar4;
  longlong lVar5;
  ForAnyElementType _Str;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 auStackY_188 [32];
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar6->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9dafb0;
      }
      LOCK();
      aVar2 = pTVar6->SharedReferenceCount;
      bVar7 = aVar1 == aVar2;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar7);
    if (*(longlong *)this != 0) {
      this_00 = UDS_ChattingManager::GetInst();
      if (this_00 == (UDS_ChattingManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = (longlong)this_00;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"FDS_V2TIMGroupListener::OnMemberLeave::<lambda_1>::operator ()",
                     0x3e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x9d,L"chattingManager == nullptr");
          if ((UDS_ChattingManager *)local_138._padding_ != (UDS_ChattingManager *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else if ((char)this_00->_padding_ != '\x01') {
        pcVar4 = V2TIMString::CString((V2TIMString *)((longlong)this + 0x20));
        DS_Util::ConvertUTF8ToFString(&local_158,pcVar4);
        pcVar4 = V2TIMString::CString((V2TIMString *)((longlong)this + 0x30));
        DS_Util::ConvertUTF8ToFString(&local_148,pcVar4);
        _Str.Data = (FScriptContainerElement *)L"";
        if (local_158.Data.ArrayNum != 0) {
          _Str.Data = local_158.Data.AllocatorInstance.Data;
        }
        lVar5 = _wtoi64((wchar_t *)_Str.Data);
        UDS_ChattingManager::OnRemoveGroupMember
                  (this_00,(FString *)((longlong)this + 0x10),lVar5,&local_148,false);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14b9dafb0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// OnGroupInfoChanged @ 14ba007b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_V2TIMGroupListener::OnGroupInfoChanged
          (FDS_V2TIMGroupListener *this,V2TIMString *param_1,TXV2TIMGroupChangeInfoVector *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code **ppcVar3;
  undefined1 auStack_b8 [32];
  FDS_V2TIMGroupListener *local_98;
  TReferenceControllerBase<1> *local_90;
  V2TIMString local_88;
  TXV2TIMGroupChangeInfoVector local_78;
  TWeakPtr<FDS_V2TIMGroupListener,1> local_68;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  TSharedFromThis<FDS_V2TIMGroupListener,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMGroupListener,1> *)&this->field_0x8,&local_68);
  local_98 = local_68.Object;
  local_90 = local_68.WeakReferenceCount.ReferenceController;
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  V2TIMString::V2TIMString(&local_88,param_1);
  TXV2TIMGroupChangeInfoVector::TXV2TIMGroupChangeInfoVector(&local_78,param_2);
  local_58[0] = (code *)0x0;
  ppcVar3 = FMemory::Malloc(0x38,8);
  *ppcVar3 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnGroupInfoChanged'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar3[1] = (code *)local_98;
  ppcVar3[2] = (code *)local_90;
  if (local_90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_90->WeakReferenceCount = (atomic<int>)((int)local_90->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_30 = ppcVar3;
  V2TIMString::V2TIMString((V2TIMString *)(ppcVar3 + 3),&local_88);
  TXV2TIMGroupChangeInfoVector::TXV2TIMGroupChangeInfoVector
            ((TXV2TIMGroupChangeInfoVector *)(ppcVar3 + 5),&local_78);
  if (ppcVar3 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDS_V2TIMGroupListener::OnGroupInfoChanged'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    ppcVar3 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar3 = local_30;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  TXV2TIMGroupChangeInfoVector::~TXV2TIMGroupChangeInfoVector(&local_78);
  V2TIMString::~V2TIMString(&local_88);
  if (local_90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_90->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_90->_padding_ + 8))(local_90,1);
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnMemberEnter @ 14ba01590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_V2TIMGroupListener::OnMemberEnter
          (FDS_V2TIMGroupListener *this,V2TIMString *param_1,TXV2TIMGroupMemberInfoVector *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForAnyElementType _Src;
  char *pcVar3;
  code **ppcVar4;
  undefined1 auStackY_f8 [32];
  FString local_a8;
  TXV2TIMGroupMemberInfoVector local_98;
  FString local_88;
  TWeakPtr<FDS_V2TIMGroupListener,1> local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<FDS_V2TIMGroupListener,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMGroupListener,1> *)&this->field_0x8,&local_78);
  pcVar3 = V2TIMString::CString(param_1);
  DS_Util::ConvertUTF8ToFString(&local_88,pcVar3);
  _Src.Data = local_88.Data.AllocatorInstance.Data;
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_88.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_88.Data.ArrayNum * 2);
  }
  TXV2TIMGroupMemberInfoVector::TXV2TIMGroupMemberInfoVector(&local_98,param_2);
  local_68[0] = (code *)0x0;
  ppcVar4 = FMemory::Malloc(0x38,8);
  *ppcVar4 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberEnter'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar4[1] = (code *)local_78.Object;
  ppcVar4[2] = (code *)local_78.WeakReferenceCount.ReferenceController;
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_40 = ppcVar4;
  ::FString::FString((FString *)(ppcVar4 + 3),&local_a8);
  TXV2TIMGroupMemberInfoVector::TXV2TIMGroupMemberInfoVector
            ((TXV2TIMGroupMemberInfoVector *)(ppcVar4 + 5),&local_98);
  if (ppcVar4 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDS_V2TIMGroupListener::OnMemberEnter'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar4 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar4 = local_40;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  TXV2TIMGroupMemberInfoVector::~TXV2TIMGroupMemberInfoVector(&local_98);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnMemberInfoChanged @ 14ba01780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_V2TIMGroupListener::OnMemberInfoChanged
          (FDS_V2TIMGroupListener *this,V2TIMString *param_1,
          TXV2TIMGroupMemberChangeInfoVector *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForAnyElementType _Src;
  char *pcVar3;
  code **ppcVar4;
  undefined1 auStackY_f8 [32];
  FString local_a8;
  TXV2TIMGroupMemberChangeInfoVector local_98;
  FString local_88;
  TWeakPtr<FDS_V2TIMGroupListener,1> local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<FDS_V2TIMGroupListener,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMGroupListener,1> *)&this->field_0x8,&local_78);
  pcVar3 = V2TIMString::CString(param_1);
  DS_Util::ConvertUTF8ToFString(&local_88,pcVar3);
  _Src.Data = local_88.Data.AllocatorInstance.Data;
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_88.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_88.Data.ArrayNum * 2);
  }
  TXV2TIMGroupMemberChangeInfoVector::TXV2TIMGroupMemberChangeInfoVector(&local_98,param_2);
  local_68[0] = (code *)0x0;
  ppcVar4 = FMemory::Malloc(0x38,8);
  *ppcVar4 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberInfoChanged'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar4[1] = (code *)local_78.Object;
  ppcVar4[2] = (code *)local_78.WeakReferenceCount.ReferenceController;
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_40 = ppcVar4;
  ::FString::FString((FString *)(ppcVar4 + 3),&local_a8);
  TXV2TIMGroupMemberChangeInfoVector::TXV2TIMGroupMemberChangeInfoVector
            ((TXV2TIMGroupMemberChangeInfoVector *)(ppcVar4 + 5),&local_98);
  if (ppcVar4 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDS_V2TIMGroupListener::OnMemberInfoChanged'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar4 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar4 = local_40;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  TXV2TIMGroupMemberChangeInfoVector::~TXV2TIMGroupMemberChangeInfoVector(&local_98);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnMemberKicked @ 14ba01970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_V2TIMGroupListener::OnMemberKicked
          (FDS_V2TIMGroupListener *this,V2TIMString *param_1,V2TIMGroupMemberInfo *param_2,
          TXV2TIMGroupMemberInfoVector *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForAnyElementType _Src;
  char *pcVar3;
  code **ppcVar4;
  undefined1 auStackY_f8 [32];
  FString local_a8;
  TXV2TIMGroupMemberInfoVector local_98;
  FString local_88;
  TWeakPtr<FDS_V2TIMGroupListener,1> local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<FDS_V2TIMGroupListener,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMGroupListener,1> *)&this->field_0x8,&local_78);
  pcVar3 = V2TIMString::CString(param_1);
  DS_Util::ConvertUTF8ToFString(&local_88,pcVar3);
  _Src.Data = local_88.Data.AllocatorInstance.Data;
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_88.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_88.Data.ArrayNum * 2);
  }
  TXV2TIMGroupMemberInfoVector::TXV2TIMGroupMemberInfoVector(&local_98,param_3);
  local_68[0] = (code *)0x0;
  ppcVar4 = FMemory::Malloc(0x38,8);
  *ppcVar4 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberKicked'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar4[1] = (code *)local_78.Object;
  ppcVar4[2] = (code *)local_78.WeakReferenceCount.ReferenceController;
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_40 = ppcVar4;
  ::FString::FString((FString *)(ppcVar4 + 3),&local_a8);
  TXV2TIMGroupMemberInfoVector::TXV2TIMGroupMemberInfoVector
            ((TXV2TIMGroupMemberInfoVector *)(ppcVar4 + 5),&local_98);
  if (ppcVar4 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDS_V2TIMGroupListener::OnMemberKicked'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar4 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar4 = local_40;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  TXV2TIMGroupMemberInfoVector::~TXV2TIMGroupMemberInfoVector(&local_98);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// OnMemberLeave @ 14ba01b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_V2TIMGroupListener::OnMemberLeave
          (FDS_V2TIMGroupListener *this,V2TIMString *param_1,V2TIMGroupMemberInfo *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForAnyElementType _Src;
  char *pcVar3;
  code **ppcVar4;
  undefined1 auStackY_138 [32];
  FString local_f8;
  TWeakPtr<FDS_V2TIMGroupListener,1> local_e8;
  FDS_V2TIMGroupListener *local_d8;
  TReferenceControllerBase<1> *local_d0;
  FString local_c8;
  V2TIMGroupMemberInfo local_b8;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  TSharedFromThis<FDS_V2TIMGroupListener,1>::AsWeak
            ((TSharedFromThis<FDS_V2TIMGroupListener,1> *)&this->field_0x8,&local_e8);
  pcVar3 = V2TIMString::CString(param_1);
  DS_Util::ConvertUTF8ToFString(&local_f8,pcVar3);
  _Src.Data = local_f8.Data.AllocatorInstance.Data;
  local_d8 = local_e8.Object;
  local_d0 = local_e8.WeakReferenceCount.ReferenceController;
  if (local_e8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_f8.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,local_f8.Data.ArrayNum,
               &local_c8.Data.ArrayMax);
    memcpy(local_c8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_f8.Data.ArrayNum * 2);
  }
  V2TIMGroupMemberInfo::V2TIMGroupMemberInfo(&local_b8,param_2);
  local_68[0] = (code *)0x0;
  ppcVar4 = FMemory::Malloc(0x78,8);
  *ppcVar4 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberLeave'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar4[1] = (code *)local_d8;
  ppcVar4[2] = (code *)local_d0;
  if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_d0->WeakReferenceCount = (atomic<int>)((int)local_d0->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_40 = ppcVar4;
  ::FString::FString((FString *)(ppcVar4 + 3),&local_c8);
  V2TIMGroupMemberInfo::V2TIMGroupMemberInfo((V2TIMGroupMemberInfo *)(ppcVar4 + 5),&local_b8);
  if (ppcVar4 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDS_V2TIMGroupListener::OnMemberLeave'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar4 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar4 = local_40;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  V2TIMGroupMemberInfo::~V2TIMGroupMemberInfo(&local_b8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_d0->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_d0->_padding_ + 8))(local_d0,1);
    }
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_e8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_e8.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

