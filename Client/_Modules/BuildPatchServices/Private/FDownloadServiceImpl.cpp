// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// FDownloadServiceImpl @ 14327f720

FDownloadServiceImpl * __thiscall
BuildPatchServices::FDownloadServiceImpl::FDownloadServiceImpl
          (FDownloadServiceImpl *this,IHttpManager *param_1,IFileSystem *param_2,
          IDownloadServiceStat *param_3,IInstallerAnalytics *param_4)

{
  this->InstallerAnalytics = param_4;
  this->HttpManager = param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->FileSystem = param_2;
  this->DownloadServiceStat = param_3;
  this->RequestIdCounter = (atomic<int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActiveRequestsCS,4000);
  *(undefined8 *)&this->ActiveHttpRequests = 0;
  *(undefined8 *)&(this->ActiveHttpRequests).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveHttpRequests).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveHttpRequests).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveHttpRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveHttpRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveHttpRequests).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveHttpRequests).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveHttpRequests).field_0x48 = 0;
  *(undefined8 *)&this->ActiveFileRequests = 0;
  *(undefined8 *)&(this->ActiveFileRequests).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveFileRequests).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveFileRequests).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveFileRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveFileRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveFileRequests).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveFileRequests).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveFileRequests).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RequestDelegatesCS,4000);
  *(undefined8 *)&this->RequestDelegates = 0;
  *(undefined8 *)&(this->RequestDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->RequestDelegates).field_0x20 = 0;
  *(undefined4 *)&(this->RequestDelegates).field_0x28 = 0;
  *(undefined4 *)&(this->RequestDelegates).field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestDelegates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestDelegates).field_0x34 = 0;
  *(undefined8 *)&(this->RequestDelegates).field_0x40 = 0;
  *(undefined4 *)&(this->RequestDelegates).field_0x48 = 0;
  return this;
}

// ~FDownloadServiceImpl @ 143288100

void __thiscall
BuildPatchServices::FDownloadServiceImpl::~FDownloadServiceImpl(FDownloadServiceImpl *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->RequestDelegates).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RequestDelegates).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FDownloadDelegates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FDownloadDelegates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FDownloadDelegates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RequestDelegates);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RequestDelegatesCS);
  *(undefined4 *)&(this->ActiveFileRequests).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ActiveFileRequests).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveFileRequests);
  *(undefined4 *)&(this->ActiveHttpRequests).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ActiveHttpRequests).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<IHttpRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<IHttpRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<IHttpRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveHttpRequests);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActiveRequestsCS);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// operator() @ 1432990e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`BuildPatchServices::FDownloadServiceImpl::MakeFileLoadTask'::__l2::<lambda_1>::operator()
          (void *this)

{
  uint uVar1;
  undefined4 uVar2;
  FDownloadServiceImpl *this_00;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  char cVar9;
  atomic<int> aVar10;
  uint uVar11;
  FString *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  LPCRITICAL_SECTION p_Var17;
  wchar_t *pwVar18;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  bool bVar22;
  char cVar23;
  uint local_res8 [2];
  longlong *local_res10;
  TReferenceControllerBase<1> *local_res18;
  ForAnyElementType local_108;
  undefined8 local_100;
  TReferenceControllerBase<1> *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  int local_d8;
  TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> local_d0;
  FDownloadRecord local_b8;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  FString local_50;
  
  pTVar20 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar20->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143299125;
      }
      LOCK();
      aVar10 = pTVar20->SharedReferenceCount;
      bVar22 = aVar5 == aVar10;
      if (bVar22) {
        pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar10 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar10;
    } while (!bVar22);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pTVar21 = (TReferenceControllerBase<1> *)0x0;
      local_108.Data = (FScriptContainerElement *)0x0;
      local_100 = 0;
      cVar9 = *(char *)(*(longlong *)((longlong)this + 0x30) + 8);
      this_00 = *(FDownloadServiceImpl **)this;
      local_res8[0]._0_1_ = cVar9 == '\0';
      pFVar12 = ::FString::FString(&local_50,(FString *)((longlong)this + 0x20));
      BuildPatchServices::FDownloadServiceImpl::MakeDownloadRecord
                (this_00,&local_b8,*(int *)((longlong)this + 0x18),pFVar12);
      cVar23 = (char)local_res8[0];
      if (cVar9 == '\0') {
        if (*(int *)((longlong)this + 0x28) == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = *(wchar_t **)((longlong)this + 0x20);
        }
        (**(code **)(**(longlong **)(*(longlong *)this + 0x18) + 0x48))
                  (*(longlong **)(*(longlong *)this + 0x18),&local_res10,pwVar18,0);
        cVar23 = local_res10 != (longlong *)0x0;
        local_res8[0]._0_1_ = cVar23;
        if (local_res10 != (longlong *)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)(**(code **)(*local_res10 + 0x30))();
          local_res18 = pTVar13;
          if (0x7fffffff < local_100._4_4_) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0,&local_108,0,(int *)((longlong)&local_100 + 4));
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(int)pTVar13,&local_108,(int *)&local_100,(int *)((longlong)&local_100 + 4)
                    );
          pTVar19 = pTVar21;
          if (0 < (longlong)pTVar13) {
            do {
              cVar23 = (char)local_res8[0];
              if (*(char *)(*(longlong *)((longlong)this + 0x30) + 8) != '\0') break;
              local_b8.SpeedRecord.Size = (ulong64)pTVar19;
              if (*(char *)(*(longlong *)((longlong)this + 0x30) + 8) != '\0') goto LAB_1432993b6;
              lVar16 = (longlong)pTVar13 - (longlong)pTVar19;
              if (0x200000 < lVar16) {
                lVar16 = 0x200000;
              }
              (**(code **)(*local_res10 + 0x188))
                        (local_res10,local_108.Data + (longlong)pTVar19,lVar16);
              pTVar19 = (TReferenceControllerBase<1> *)((longlong)&pTVar19->_padding_ + lVar16);
              p_Var17 = (LPCRITICAL_SECTION)(*(longlong *)this + 0x100);
              if (p_Var17 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection(p_Var17);
              lVar16 = *(longlong *)this;
              uVar1 = *(uint *)((longlong)this + 0x18);
              if (*(int *)(lVar16 + 0x130) != *(int *)(lVar16 + 0x15c)) {
                lVar15 = lVar16 + 0x160;
                if (*(longlong *)(lVar16 + 0x168) != 0) {
                  lVar15 = *(longlong *)(lVar16 + 0x168);
                }
                uVar11 = *(uint *)(lVar15 + (ulonglong)(*(int *)(lVar16 + 0x170) - 1U & uVar1) * 4);
                if (uVar11 != 0xffffffff) {
                  do {
                    puVar14 = (uint *)((longlong)(int)uVar11 * 0x40 + *(longlong *)(lVar16 + 0x128))
                    ;
                    if (*puVar14 == uVar1) {
                      pTVar13 = (TReferenceControllerBase<1> *)(puVar14 + 2);
                      if (puVar14 == (uint *)0x0) {
                        pTVar13 = pTVar21;
                      }
                      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
                        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                                   &pTVar13[1].SharedReferenceCount,&local_80);
                        if ((pTVar13[2].SharedReferenceCount != (atomic<int>)0x0) &&
                           (plVar3 = (longlong *)pTVar13[2]._padding_, plVar3 != (longlong *)0x0)) {
                          (**(code **)(*plVar3 + 0x68))(plVar3,uVar1,pTVar19);
                        }
                        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                        ~FReadAccessScope(&local_80);
                      }
                      break;
                    }
                    uVar11 = puVar14[0xe];
                  } while (uVar11 != 0xffffffff);
                }
              }
              LeaveCriticalSection(p_Var17);
              (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))
                        (*(longlong **)(*(longlong *)this + 0x20),
                         *(undefined4 *)((longlong)this + 0x18));
              pTVar13 = local_res18;
              cVar23 = (char)local_res8[0];
            } while ((longlong)pTVar19 < (longlong)local_res18);
          }
          local_b8.SpeedRecord.Size = (ulong64)pTVar19;
          if (((cVar23 == '\0') || (cVar9 = (**(code **)(*local_res10 + 0x210))(), cVar9 == '\0'))
             || (pTVar19 != pTVar13)) {
LAB_1432993b6:
            cVar23 = false;
          }
          else {
            cVar23 = true;
          }
        }
        local_b8.SpeedRecord.CyclesEnd = BuildPatchServices::FStatsCollector::GetCycles();
        local_b8.ResponseCode = 0x194;
        if ((bool)cVar23 != false) {
          local_b8.ResponseCode = 200;
        }
        local_b8.bSuccess = (bool)cVar23;
        if (local_res10 != (longlong *)0x0) {
          (**(code **)*local_res10)(local_res10,1);
        }
      }
      if ((cVar23 == '\0') &&
         (uVar6 = local_100 >> 0x20, local_100 = local_100 & 0xffffffff00000000, (int)uVar6 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&local_108,0,(int *)((longlong)&local_100 + 4));
      }
      local_e8 = (undefined1  [8])0x0;
      local_e0 = (longlong *)0x0;
      local_d8 = 0;
      local_d0._16_4_ = 0;
      local_d0._0_8_ = 0;
      local_d0._8_8_ = 0;
      p_Var17 = (LPCRITICAL_SECTION)(*(longlong *)this + 0x100);
      if (p_Var17 != (LPCRITICAL_SECTION)0x0) {
        EnterCriticalSection(p_Var17);
        bVar22 = TMap<int,BuildPatchServices::FDownloadDelegates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>_>
                 ::RemoveAndCopyValue
                           ((TMap<int,BuildPatchServices::FDownloadDelegates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>_>
                             *)(*(longlong *)this + 0x128),*(int *)((longlong)this + 0x18),
                            (FDownloadDelegates *)local_e8);
        LeaveCriticalSection(p_Var17);
        if (bVar22) {
          pTStack_f0 = ::operator_new(0x30);
          FVar7.Data = local_108.Data;
          if (pTStack_f0 == (TReferenceControllerBase<1> *)0x0) {
            local_f8 = ___xmm_00000000000000000000000000000010;
            pTStack_f0 = _UNK_150651568;
          }
          else {
            pTStack_f0->SharedReferenceCount = (atomic<int>)0x1;
            pTStack_f0->WeakReferenceCount = (atomic<int>)0x1;
            pTStack_f0->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFFileDownload_BuildPatchServices___00_SharedPointerInternals__6B_
            ;
            iVar8 = (int)local_100;
            uVar2 = local_100._4_4_;
            local_108.Data = (FScriptContainerElement *)0x0;
            local_100 = 0;
            *(FScriptContainerElement **)&pTStack_f0[1].SharedReferenceCount = FVar7.Data;
            pTStack_f0[1]._padding_ = (longlong)&___7FFileDownload_BuildPatchServices__6B_;
            *(int *)&pTStack_f0[2]._padding_ = iVar8;
            *(undefined4 *)((longlong)&pTStack_f0[2]._padding_ + 4) = uVar2;
            *(char *)&pTStack_f0[2].SharedReferenceCount = cVar23;
            if ((pTStack_f0 + 1 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar22)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            LOCK();
            pTStack_f0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_f0->SharedReferenceCount + 1);
            UNLOCK();
            pTVar21 = pTStack_f0;
            local_f8 = pTStack_f0 + 1;
          }
          uVar2 = *(undefined4 *)((longlong)this + 0x18);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,&local_68);
          if ((local_d8 != 0) && (local_e0 != (longlong *)0x0)) {
            (**(code **)(*local_e0 + 0x68))(local_e0,uVar2,&local_f8);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_68);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_f0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar21);
        }
        p_Var17 = (LPCRITICAL_SECTION)(*(longlong *)this + 0x38);
        if (p_Var17 != (LPCRITICAL_SECTION)0x0) {
          EnterCriticalSection(p_Var17);
          lVar16 = *(longlong *)this;
          local_res8[0] = *(uint *)((longlong)this + 0x18);
          if (*(int *)(lVar16 + 0xb8) != *(int *)(lVar16 + 0xe4)) {
            TSet<TTuple<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>,0>,FDefaultSetAllocator>
                               *)(lVar16 + 0xb0),local_res8[0],(int *)local_res8);
          }
          LeaveCriticalSection(p_Var17);
          (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x18))
                    (*(longlong **)(*(longlong *)this + 0x20),&local_b8);
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d0);
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
          if (local_b8.Uri.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Uri.Data.AllocatorInstance.Data);
          }
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          goto LAB_143299125;
        }
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
LAB_143299125:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  return;
}

// operator() @ 14329af20

void __thiscall
`BuildPatchServices::FDownloadServiceImpl::RequestFileWithHeaders'::__l6::<lambda_1>::operator()
          (void *this,TSharedPtr<IHttpRequest,1> *param_1,ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  FReadAccessScope local_38;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x100);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  lVar2 = *(longlong *)this;
  uVar1 = *(uint *)((longlong)this + 8);
  if (*(int *)(lVar2 + 0x130) != *(int *)(lVar2 + 0x15c)) {
    lVar7 = *(longlong *)(lVar2 + 0x168);
    if (*(longlong *)(lVar2 + 0x168) == 0) {
      lVar7 = lVar2 + 0x160;
    }
    uVar4 = *(uint *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x170) - 1U & uVar1) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x40 + *(longlong *)(lVar2 + 0x128));
        if (*puVar6 == uVar1) {
          puVar5 = puVar6 + 2;
          if (puVar6 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 != (uint *)0x0) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar5 + 6),
                       &local_38);
            if ((puVar5[10] != 0) &&
               (plVar3 = *(longlong **)(puVar5 + 8), plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 0x68))(plVar3,uVar1,param_3);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_38);
          }
          break;
        }
        uVar4 = puVar6[0xe];
      } while (uVar4 != 0xffffffff);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))
            (*(longlong **)(*(longlong *)this + 0x20),*(undefined4 *)((longlong)this + 8),param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 1432a8170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`BuildPatchServices::FDownloadServiceImpl::RequestFileWithHeaders'::__l6::<lambda_2>::operator()
          (void *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
          bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  IHttpRequest *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong64 uVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  LPCRITICAL_SECTION p_Var13;
  uint uVar14;
  uint *puVar15;
  uint local_res20 [2];
  undefined1 local_e8 [8];
  ForAnyElementType local_e0;
  int local_d8;
  undefined1 local_d0 [8];
  ForAnyElementType FStack_c8;
  int local_c0;
  TReferenceControllerBase<1> *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined8 local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  FReadAccessScope local_58;
  
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_3);
  (**(code **)(**(longlong **)(*(longlong *)this + 0x28) + 0x30))();
  *(bool *)((longlong)this + 0x20) = param_3;
  if (param_2->Object == (IHttpResponse *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (**(code **)((longlong)*param_2->Object + 0x58))();
  }
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  uVar6 = BuildPatchServices::FStatsCollector::GetCycles();
  *(ulong64 *)((longlong)this + 0x30) = uVar6;
  iVar10 = 0;
  if (param_2->Object != (IHttpResponse *)0x0) {
    lVar7 = (**(code **)((longlong)*param_2->Object + 0x48))();
    iVar10 = *(int *)(lVar7 + 8);
  }
  *(longlong *)((longlong)this + 0x38) = (longlong)iVar10;
  local_e8 = (undefined1  [8])0x0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  local_c0 = 0;
  local_d0 = (undefined1  [8])0x0;
  FStack_c8.Data = (FScriptContainerElement *)0x0;
  p_Var13 = (LPCRITICAL_SECTION)(*(longlong *)this + 0x100);
  if (p_Var13 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(p_Var13);
    lVar7 = *(longlong *)this;
    if (*(int *)(lVar7 + 0x130) != *(int *)(lVar7 + 0x15c)) {
      lVar11 = *(longlong *)(lVar7 + 0x168);
      if (*(longlong *)(lVar7 + 0x168) == 0) {
        lVar11 = lVar7 + 0x160;
      }
      uVar14 = *(uint *)(lVar11 + (ulonglong)
                                  (*(int *)(lVar7 + 0x170) - 1U & *(uint *)((longlong)this + 8)) * 4
                        );
      if (uVar14 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar14 * 0x40 +
                            *(longlong *)
                             &((TSet<TTuple<int,BuildPatchServices::FDownloadDelegates>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>,FDefaultSetAllocator>
                                *)(lVar7 + 0x128))->Elements);
          if (*puVar15 == *(uint *)((longlong)this + 8)) {
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar15 + 2));
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar15 + 8));
            TSet<TTuple<int,BuildPatchServices::FDownloadDelegates>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<int,BuildPatchServices::FDownloadDelegates>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>,FDefaultSetAllocator>
                             *)(lVar7 + 0x128),uVar14);
            bVar4 = true;
            goto LAB_1432a828e;
          }
          uVar14 = puVar15[0xe];
        } while (uVar14 != 0xffffffff);
      }
    }
    bVar4 = false;
LAB_1432a828e:
    LeaveCriticalSection(p_Var13);
    if (bVar4) {
      pTVar8 = ::operator_new(0x40);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        local_b8 = ___xmm_00000000000000000000000000000010;
        pTStack_b0 = _UNK_150651568;
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFHttpDownload_BuildPatchServices___00_SharedPointerInternals__6B_
        ;
        pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
        pIVar2 = param_1->Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(IHttpRequest **)&pTVar8[1].SharedReferenceCount = pIVar2;
        pTVar8[1]._padding_ = (longlong)&___7FHttpDownload_BuildPatchServices__6B_;
        pTVar8[2]._padding_ = (longlong)pTVar1;
        if (pIVar2 == (IHttpRequest *)0x0) {
          puVar9 = &local_a8;
          uVar12 = 0;
          local_a8 = 0;
          pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          puVar9 = (undefined8 *)(**(code **)(*(longlong *)pIVar2 + 0x120))(pIVar2,local_68);
          uVar12 = *puVar9;
        }
        pTVar8[2].SharedReferenceCount = (atomic<int>)(int)uVar12;
        pTVar8[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar12 >> 0x20);
        lVar7 = puVar9[1];
        pTVar8[3]._padding_ = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        if (pIVar2 == (IHttpRequest *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_a0);
        }
        else {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60);
        }
        *(undefined1 *)&pTVar8[3].SharedReferenceCount = (undefined1)local_res20[0];
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_b8 = pTVar8 + 1;
        if ((local_b8 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        pTStack_b0 = pTVar8;
      }
      uVar5 = *(undefined4 *)((longlong)this + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,&local_58);
      if ((local_d8 != 0) && (local_e0.Data != (FScriptContainerElement *)0x0)) {
        (**(code **)(*(longlong *)local_e0.Data + 0x68))(local_e0.Data,uVar5);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
    p_Var13 = (LPCRITICAL_SECTION)(*(longlong *)this + 0x38);
    if (p_Var13 != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(p_Var13);
      lVar7 = *(longlong *)this;
      local_res20[0] = *(uint *)((longlong)this + 8);
      if (*(int *)(lVar7 + 0x68) != *(int *)(lVar7 + 0x94)) {
        TSet<TTuple<int,TSharedRef<IHttpRequest,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<IHttpRequest,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TSharedRef<IHttpRequest,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<IHttpRequest,1>,0>,FDefaultSetAllocator>
                           *)(lVar7 + 0x60),local_res20[0],(int *)local_res20);
      }
      LeaveCriticalSection(p_Var13);
      (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x18))
                (*(longlong **)(*(longlong *)this + 0x20),(longlong)this + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
                 (FWriteAccessScope *)&local_98);
      if ((local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
        local_c0 = 0;
      }
      if (local_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      }
      if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_d0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                 (FWriteAccessScope *)&local_80);
      if ((local_d8 != 0) && (local_e0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_e0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e0,0,0,0x10);
        local_d8 = 0;
      }
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
      }
      if (local_e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CancelAllRequests @ 1432c44c0

void __thiscall
BuildPatchServices::FDownloadServiceImpl::CancelAllRequests(FDownloadServiceImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  code *pcVar4;
  TMap<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  uint local_150;
  undefined4 uStack_11c;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  lpCriticalSection = &this->ActiveRequestsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar10 = 0;
  puVar1 = &(this->ActiveHttpRequests).field_0x10;
  iVar11 = *(int *)&(this->ActiveHttpRequests).field_0x28;
  local_150 = 1;
  iVar12 = 0;
  iVar15 = 0;
  iVar13 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar11 != 0) {
    puVar16 = *(uint **)&(this->ActiveHttpRequests).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar7 = *puVar16;
    iVar15 = 0;
    while (uVar7 == 0) {
      lVar9 = (longlong)iVar12;
      iVar15 = iVar15 + 0x20;
      iVar12 = iVar12 + 1;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) {
        iVar13 = *(int *)&(this->ActiveHttpRequests).field_0x28;
        uVar7 = 1;
        iVar8 = iVar11;
        goto LAB_1432c45a8;
      }
      uVar7 = puVar16[lVar9 + 1];
    }
    iVar13 = *(int *)&(this->ActiveHttpRequests).field_0x28;
    uVar7 = -uVar7 & uVar7;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = iVar15 + -1 + local_res20;
    if (iVar13 < iVar8) {
      iVar8 = iVar11;
    }
  }
LAB_1432c45a8:
  uVar18 = *(uint *)&(this->ActiveHttpRequests).field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uVar7,iVar12);
  TStack_c8.CurrentBitIndex = iVar8;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar18 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = iVar15;
  uStack_a8 = CONCAT44(uStack_11c,
                       *(int *)&(this->ActiveHttpRequests).field_0x8 -
                       *(int *)&(this->ActiveHttpRequests).field_0x34);
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar13 < (int)uVar18)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->ActiveHttpRequests).field_0x28;
  if (uVar18 != uVar7) {
    puVar14 = *(undefined1 **)&(this->ActiveHttpRequests).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar18 == 0) {
      lVar9 = (longlong)iVar11;
      uVar17 = uVar17 + 0x20;
      iVar11 = iVar11 + 1;
      uVar18 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1432c46d0;
      uVar18 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar18 = (int)lVar9 + -1 + uVar17;
    if ((int)uVar7 < (int)uVar18) {
      uVar18 = uVar7;
    }
  }
LAB_1432c46d0:
  while( true ) {
    if (*(int *)&(this->ActiveHttpRequests).field_0x8 -
        *(int *)&(this->ActiveHttpRequests).field_0x34 != (int)uStack_a8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<IHttpRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c8.CurrentBitIndex == uVar18) &&
       (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(**(longlong **)
                   ((longlong)TStack_c8.CurrentBitIndex * 0x20 + 8 +
                   *(longlong *)&this->ActiveHttpRequests) + 0x118))();
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  iVar13 = 0;
  puVar1 = &(this->ActiveFileRequests).field_0x10;
  iVar11 = *(int *)&(this->ActiveFileRequests).field_0x28;
  pTVar2 = &this->ActiveFileRequests;
  iVar12 = 0;
  if (iVar11 != 0) {
    puVar16 = *(uint **)&(this->ActiveFileRequests).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar7 = *puVar16;
    iVar13 = 0;
    while (uVar7 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar12 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1432c47d1;
      uVar7 = puVar16[lVar9 + 1];
    }
    local_150 = -uVar7 & uVar7;
    uVar3 = (ulonglong)local_150 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar12 = iVar13 + -1 + (int)lVar9;
    if (iVar11 < iVar12) {
      iVar12 = iVar11;
    }
  }
LAB_1432c47d1:
  uVar7 = *(uint *)&(this->ActiveFileRequests).field_0x28;
  uVar18 = uVar7 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(local_150,iVar10);
  TStack_98.CurrentBitIndex = iVar12;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar7 >> 5;
  TStack_98._28_4_ = iVar8;
  TStack_98.BaseBitIndex = iVar13;
  uStack_78 = CONCAT44(uStack_d4,
                       *(int *)&(this->ActiveFileRequests).field_0x8 -
                       *(int *)&(this->ActiveFileRequests).field_0x34);
  local_a0 = pTVar2;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || (iVar11 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar17 = *(uint *)&(this->ActiveFileRequests).field_0x28;
  if (uVar7 != uVar17) {
    puVar14 = *(undefined1 **)&(this->ActiveFileRequests).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar7 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar7 == 0) {
      lVar9 = (longlong)iVar12;
      uVar18 = uVar18 + 0x20;
      iVar12 = iVar12 + 1;
      uVar7 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_1432c48f0;
      uVar7 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar7 = (int)lVar9 + -1 + uVar18;
    if ((int)uVar17 < (int)uVar7) {
      uVar7 = uVar17;
    }
  }
LAB_1432c48f0:
  while( true ) {
    pTVar5 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_98.CurrentBitIndex == uVar7) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == pTVar2))
    break;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    *(undefined1 *)
     (*(longlong *)(*(longlong *)pTVar5 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18) + 8) = 1;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
                    /* WARNING: Could not recover jumptable at 0x0001432c4968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// MakeDownloadRecord @ 1432dd750

FDownloadRecord * __thiscall
BuildPatchServices::FDownloadServiceImpl::MakeDownloadRecord
          (FDownloadServiceImpl *this,FDownloadRecord *__return_storage_ptr__,int param_1,
          FString *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  
  pFVar1 = &__return_storage_ptr__->Uri;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Uri).Data.ArrayNum = 0;
  (__return_storage_ptr__->Uri).Data.ArrayMax = 0;
  ISpeedRecorder::FRecord::FRecord(&__return_storage_ptr__->SpeedRecord);
  __return_storage_ptr__->RequestId = param_1;
  if (pFVar1 != param_2) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Uri).Data.ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->Uri).Data.ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  __return_storage_ptr__->bSuccess = false;
  __return_storage_ptr__->ResponseCode = -1;
  uVar3 = FStatsCollector::GetCycles();
  (__return_storage_ptr__->SpeedRecord).CyclesStart = uVar3;
  (__return_storage_ptr__->SpeedRecord).CyclesEnd = uVar3;
  (__return_storage_ptr__->SpeedRecord).Size = 0;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// MakeFileLoadTask @ 1432dd810

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
BuildPatchServices::FDownloadServiceImpl::MakeFileLoadTask
          (FDownloadServiceImpl *this,int param_1,FString *param_2,FFileRequest *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDownloadServiceImpl *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  FTaskHandle FVar6;
  FDownloadServiceImpl *pFVar7;
  undefined4 in_register_00000014;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar8;
  FDownloadServiceImpl *this_00;
  bool bVar9;
  undefined8 in_stack_00000028;
  TReferenceControllerBase<1> *local_58;
  FString local_48;
  undefined8 local_38;
  
  TVar8.Reference._4_4_ = in_register_00000014;
  TVar8.Reference._0_4_ = param_1;
  local_58 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar3 = (FDownloadServiceImpl *)this->_padding_;
  this_00 = (FDownloadServiceImpl *)0x0;
  if (local_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_58->WeakReferenceCount = (atomic<int>)((int)local_58->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = local_58->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1432dd891;
      }
      LOCK();
      aVar5 = local_58->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        local_58->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
  pFVar7 = pFVar3;
  if (local_58 == (TReferenceControllerBase<1> *)0x0) {
    pFVar7 = this_00;
  }
  if (pFVar7 != this) {
LAB_1432dd891:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      FVar6.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar4)();
      return (FTaskHandle)FVar6.Pimpl.Reference;
    }
  }
  ::FString::FString(&local_48,(FString *)param_3);
  local_38 = in_stack_00000028;
  pFVar7 = FMemory::Malloc(0x140,0x40);
  if (pFVar7 != (FDownloadServiceImpl *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`BuildPatchServices::FDownloadServiceImpl::MakeFileLoadTask'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              ((FTaskBase *)pFVar7,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\DownloadService.cpp(318)"
               ,BackgroundHigh,None,None);
    *(FDownloadServiceImpl **)&(pFVar7->ActiveFileRequests).field_0x28 = this;
    *(FDownloadServiceImpl **)&(pFVar7->ActiveFileRequests).field_0x30 = pFVar3;
    *(TReferenceControllerBase<1> **)&(pFVar7->ActiveFileRequests).field_0x38 = local_58;
    local_58 = (TReferenceControllerBase<1> *)0x0;
    *(int *)&(pFVar7->ActiveFileRequests).field_0x40 = (int)param_2;
    ::FString::FString((FString *)&(pFVar7->ActiveFileRequests).field_0x48,&local_48);
    *(undefined8 *)(pFVar7->RequestDelegatesCS).CriticalSection.Opaque2 = local_38;
    pFVar7->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`BuildPatchServices::FDownloadServiceImpl::MakeFileLoadTask'::`2'::<lambda_1>_>
          ::_vftable_;
    this_00 = pFVar7;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x140);
  (TVar8.Reference)->_padding_ = (longlong)this_00;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_58->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_58->_padding_ + 8))(local_58,1);
    }
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar8.Reference;
}

// RequestAbandon @ 1432e9ad0

void __thiscall
BuildPatchServices::FDownloadServiceImpl::RequestAbandon(FDownloadServiceImpl *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  lpCriticalSection = &this->RequestDelegatesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->RequestDelegates).field_0x8 != *(int *)&(this->RequestDelegates).field_0x34) {
    puVar3 = *(undefined1 **)&(this->RequestDelegates).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->RequestDelegates).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)*(int *)&(this->RequestDelegates).field_0x48 - 1U &
                              (longlong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->RequestDelegates).field_0x0;
      do {
        if (*(int *)((longlong)iVar2 * 0x40 + lVar1) == param_1) {
          TSet<TTuple<int,BuildPatchServices::FDownloadDelegates>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<int,BuildPatchServices::FDownloadDelegates>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>,FDefaultSetAllocator>
                           *)&this->RequestDelegates,iVar2);
          break;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x40 + 0x38 + lVar1);
      } while (iVar2 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  RequestCancel(this,param_1);
  return;
}

// RequestCancel @ 1432e9c70

void __thiscall
BuildPatchServices::FDownloadServiceImpl::RequestCancel(FDownloadServiceImpl *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  lpCriticalSection = &this->ActiveRequestsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->ActiveHttpRequests).field_0x8 !=
      *(int *)&(this->ActiveHttpRequests).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ActiveHttpRequests).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ActiveHttpRequests).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ActiveHttpRequests).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&this->ActiveHttpRequests);
        if (*piVar4 == param_1) {
          if (iVar2 != -1) {
            plVar3 = (longlong *)(piVar4 + 2);
            if (piVar4 == (int *)0x0) {
              plVar3 = (longlong *)0x0;
            }
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar3 + 0x118))();
            }
          }
          break;
        }
        iVar2 = piVar4[6];
      } while (iVar2 != -1);
    }
  }
  if (*(int *)&(this->ActiveFileRequests).field_0x8 !=
      *(int *)&(this->ActiveFileRequests).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ActiveFileRequests).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ActiveFileRequests).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ActiveFileRequests).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->ActiveFileRequests + (longlong)iVar2 * 0x18;
        if (*(int *)(*(longlong *)&this->ActiveFileRequests + (longlong)iVar2 * 0x18) == param_1) {
          plVar3 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar3 = (longlong *)0x0;
          }
          if (plVar3 != (longlong *)0x0) {
            *(undefined1 *)(*plVar3 + 8) = 1;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e9dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RequestFileWithHeaders @ 1432ea0f0

int __thiscall
BuildPatchServices::FDownloadServiceImpl::RequestFileWithHeaders
          (FDownloadServiceImpl *this,FString *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                   *param_3,
          TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> *param_4)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  int *piVar3;
  FWindowsRecursiveMutex *pFVar4;
  ulonglong uVar5;
  atomic<int> aVar6;
  FDownloadServiceImpl *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar10;
  longlong *plVar11;
  TSharedRef<IHttpRequest,1> *pTVar12;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar17;
  TWeakPtr<BuildPatchServices::FDownloadServiceImpl_const_,1> *pTVar18;
  ulong64 uVar19;
  TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *this_00;
  FString *pFVar20;
  FTaskBase *pFVar21;
  FTaskBase *pFVar22;
  FTaskHandle FVar23;
  longlong lVar24;
  uint uVar25;
  TReferenceControllerBase<1> *pTVar26;
  uint uVar27;
  undefined1 *puVar28;
  uint *puVar29;
  uint uVar30;
  undefined1 local_res8;
  undefined7 uStackX_9;
  FString *local_res10;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_res18;
  uint local_238 [2];
  longlong *local_230;
  FSharedReferencer<1> local_228;
  TPairInitializer<int_const_&,TSharedRef<IHttpRequest,1>_&&> local_220;
  uint local_210;
  FString local_208;
  undefined1 local_1f8;
  int local_1f4;
  FRecord local_1f0;
  undefined1 local_1d8 [16];
  undefined8 *local_1c8;
  undefined8 local_1c0;
  FSharedReferencer<1> local_1b8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  uint uStack_194;
  uint local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  uint *local_150;
  TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
  *local_148;
  uint *local_140;
  undefined8 local_138;
  FString local_130;
  undefined8 local_120;
  uint uStack_118;
  undefined4 uStack_114;
  uint *local_110;
  TSharedRef<IHttpRequest,1> **local_108;
  <lambda_2> local_100;
  undefined1 local_c0 [8];
  TReferenceControllerBase<1> *local_b8;
  TWeakPtr<BuildPatchServices::FDownloadServiceImpl_const_,1> local_b0;
  TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
  local_a0;
  TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> local_88;
  FString local_70 [2];
  undefined4 local_44;
  
  pFVar22 = (FTaskBase *)0x0;
  uVar27 = 0;
  local_220.Key._4_4_ = 0;
  LOCK();
  paVar1 = &this->RequestIdCounter;
  aVar6 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  local_238[0] = (int)aVar6 + 1;
  pFVar4 = &this->RequestDelegatesCS;
  local_res10 = param_1;
  local_res18 = param_2;
  if (pFVar4 == (FWindowsRecursiveMutex *)0x0) {
LAB_1432ea9f9:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
  TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
            (&local_a0,param_3);
  TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>(&local_88,param_4);
  local_150 = local_238;
  local_148 = &local_a0;
  TSet<TTuple<int,BuildPatchServices::FDownloadDelegates>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,BuildPatchServices::FDownloadDelegates_&&>_>
            ((TSet<TTuple<int,BuildPatchServices::FDownloadDelegates>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>,FDefaultSetAllocator>
              *)&this->RequestDelegates,
             (TPairInitializer<int_const_&,BuildPatchServices::FDownloadDelegates_&&> *)local_1d8,
             (bool *)&local_150);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_88);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
  bVar14 = ::FString::StartsWith(param_1,L"http",4,IgnoreCase);
  if (bVar14) {
    pFVar4 = &this->ActiveRequestsCS;
    local_228.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pFVar4 == (FWindowsRecursiveMutex *)0x0) goto LAB_1432ea9f9;
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
    local_140 = local_238;
    local_138 = (**(code **)((longlong)*this->HttpManager + 8))(this->HttpManager,local_c0);
    TSet<TTuple<int,TSharedRef<IHttpRequest,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<IHttpRequest,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TSharedRef<IHttpRequest,1>_&&>_>
              ((TSet<TTuple<int,TSharedRef<IHttpRequest,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<IHttpRequest,1>,0>,FDefaultSetAllocator>
                *)&this->ActiveHttpRequests,&local_220,(bool *)&local_140);
    local_1b8.ReferenceController =
         *(TReferenceControllerBase<1> **)
          ((longlong)(int)local_220.Key * 0x20 + 0x10 + *(longlong *)&this->ActiveHttpRequests);
    local_230 = *(longlong **)
                 ((longlong)(int)local_220.Key * 0x20 + 8 + *(longlong *)&this->ActiveHttpRequests);
    if (local_1b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1b8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1c0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_228,&local_1b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
    plVar11 = local_230;
    if ((local_230 == (longlong *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar15 = (*pcVar9)();
      return iVar15;
    }
    (**(code **)(*plVar11 + 0x138))(plVar11,1);
    if ((plVar11 == (longlong *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar15 = (*pcVar9)();
      return iVar15;
    }
    (**(code **)(*plVar11 + 0x68))(plVar11,param_1);
    if ((plVar11 == (longlong *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar15 = (*pcVar9)();
      return iVar15;
    }
    pcVar9 = *(code **)(*plVar11 + 0x60);
    ::FString::FString(&local_130,L"GET");
    (*pcVar9)(plVar11,&local_130);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    uVar25 = *(uint *)&param_2->field_0x28;
    puVar2 = &param_2->field_0x10;
    uStack_1a4 = 1;
    local_190 = 0;
    uStack_194 = local_190;
    if (uVar25 != 0) {
      puVar29 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar29 = (uint *)puVar2;
      }
      uVar16 = *puVar29;
      pFVar21 = pFVar22;
      local_190 = 0;
      uVar27 = 0;
      while (uVar16 == 0) {
        iVar15 = (int)pFVar22;
        local_190 = (int)pFVar21 + 0x20;
        pFVar21 = (FTaskBase *)(ulonglong)local_190;
        uVar27 = iVar15 + 1;
        pFVar22 = (FTaskBase *)(ulonglong)uVar27;
        uStack_194 = uVar25;
        if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
        goto LAB_1432ea3ed;
        uVar16 = puVar29[(longlong)iVar15 + 1];
      }
      uStack_1a4 = -uVar16 & uVar16;
      uVar5 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_1d8._4_4_ = (undefined4)lVar24;
      uStack_194 = (local_190 - 1) + local_1d8._4_4_;
      if ((int)uVar25 < (int)uStack_194) {
        uStack_194 = uVar25;
      }
    }
LAB_1432ea3ed:
    uVar16 = *(uint *)&param_2->field_0x28;
    uStack_18c = local_44;
    iStack_188 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
    uVar30 = uVar16 & 0xffffffe0;
    uStack_198 = 0xffffffff;
    TStack_178._padding_ = CONCAT44(uStack_1a4,uVar27);
    TStack_178.CurrentBitIndex = uStack_194;
    TStack_178.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar16 >> 5;
    TStack_178._28_4_ = local_44;
    TStack_178.BaseBitIndex = local_190;
    uStack_158 = CONCAT44(uStack_184,iStack_188);
    local_1b0 = param_2;
    uStack_1a8 = uVar27;
    local_1a0 = puVar2;
    local_180 = param_2;
    TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar16 < 0) || ((int)uVar25 < (int)uVar16)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar15 = (*pcVar9)();
      return iVar15;
    }
    pTVar10 = local_res18;
    uVar27 = *(uint *)&param_2->field_0x28;
    if (uVar16 != uVar27) {
      puVar28 = *(undefined1 **)&param_2->field_0x20;
      if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
        puVar28 = puVar2;
      }
      uVar25 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar15 * 4);
      while (uVar25 == 0) {
        lVar24 = (longlong)iVar15;
        uVar30 = uVar30 + 0x20;
        iVar15 = iVar15 + 1;
        uVar16 = uVar27;
        if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_1432ea500;
        uVar25 = *(uint *)(puVar28 + lVar24 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_1d8._8_4_ = (undefined4)lVar24;
      uVar16 = (uVar30 - 1) + local_1d8._8_4_;
      if ((int)uVar27 < (int)uVar16) {
        uVar16 = uVar27;
      }
    }
LAB_1432ea500:
    while( true ) {
      pTVar13 = local_180;
      if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
        local_res8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (((TStack_178.CurrentBitIndex == uVar16) &&
          (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar13 == pTVar10)) break;
      lVar24 = *(longlong *)pTVar13 + (longlong)TStack_178.CurrentBitIndex * 0x28;
      if ((plVar11 == (longlong *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        iVar15 = (*pcVar9)();
        return iVar15;
      }
      (**(code **)(*plVar11 + 0xb0))(plVar11,lVar24,lVar24 + 0x10);
      TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    }
    if ((plVar11 == (longlong *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar15 = (*pcVar9)();
      return iVar15;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*plVar11 + 0xf8))(plVar11);
    uStack_118 = local_238[0];
    local_120 = this;
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar15 = (*pcVar9)();
      return iVar15;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar17 = UE::Core::Private::DelegateAllocate
                        (0x38,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar17 == (undefined8 *)0x0) {
      pTVar26 = (TReferenceControllerBase<1> *)CONCAT71(uStackX_9,local_res8);
      uVar27 = local_220.Key._4_4_;
    }
    else {
      pTVar18 = TSharedFromThis<BuildPatchServices::FDownloadServiceImpl,1>::AsWeak
                          ((TSharedFromThis<BuildPatchServices::FDownloadServiceImpl,1> *)this,
                           &local_b0);
      pFVar7 = pTVar18->Object;
      pTVar26 = (pTVar18->WeakReferenceCount).ReferenceController;
      (pTVar18->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar18->Object = (FDownloadServiceImpl *)0x0;
      *puVar17 = &
                 ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar19 = FDelegateHandle::GenerateNewID();
      puVar17[2] = uVar19;
      *puVar17 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy,`BuildPatchServices::FDownloadServiceImpl::RequestFileWithHeaders'::`6'::<lambda_1>_>
                  ::_vftable_;
      puVar17[3] = pFVar7;
      puVar17[4] = pTVar26;
      if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar26->WeakReferenceCount = (atomic<int>)((int)pTVar26->WeakReferenceCount + 1);
        UNLOCK();
      }
      *(undefined4 *)(puVar17 + 5) = (undefined4)local_120;
      *(undefined4 *)((longlong)puVar17 + 0x2c) = local_120._4_4_;
      *(uint *)(puVar17 + 6) = uStack_118;
      *(undefined4 *)((longlong)puVar17 + 0x34) = uStack_114;
      uVar27 = 3;
    }
    if (((uVar27 & 2) != 0) &&
       (uVar27 = uVar27 & 0xfffffffd, pTVar26 != (TReferenceControllerBase<1> *)0x0)) {
      LOCK();
      paVar1 = &pTVar26->WeakReferenceCount;
      aVar6 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)(pTVar26->_padding_ + 8))(pTVar26,1);
      }
    }
    if (((uVar27 & 1) != 0) &&
       (local_b0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
      LOCK();
      paVar1 = &(local_b0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar6 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)((local_b0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_b0.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    if ((plVar11 == (longlong *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar15 = (*pcVar9)();
      return iVar15;
    }
    this_00 = (TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
               *)(**(code **)(*plVar11 + 0xf0))(plVar11);
    pFVar20 = ::FString::FString(local_70,local_res10);
    uVar27 = local_238[0];
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    ISpeedRecorder::FRecord::FRecord(&local_1f0);
    local_210 = uVar27;
    if (&local_208 != pFVar20) {
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      local_208.Data.AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
      (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.Data.ArrayNum = (pFVar20->Data).ArrayNum;
      local_208.Data.ArrayMax = (pFVar20->Data).ArrayMax;
      (pFVar20->Data).ArrayNum = 0;
      (pFVar20->Data).ArrayMax = 0;
    }
    local_1f8 = 0;
    local_1f4 = -1;
    local_1f0.CyclesStart = FStatsCollector::GetCycles();
    local_1f0.Size = 0;
    pFVar8 = (pFVar20->Data).AllocatorInstance.Data;
    local_1f0.CyclesEnd = local_1f0.CyclesStart;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    local_100.DownloadRecord.RequestId = local_210;
    local_100.DownloadRecord.Uri.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data
    ;
    local_100.DownloadRecord.Uri.Data.ArrayNum = local_208.Data.ArrayNum;
    local_100.DownloadRecord.Uri.Data.ArrayMax = local_208.Data.ArrayMax;
    local_100.DownloadRecord.bSuccess = (bool)local_1f8;
    local_100.DownloadRecord.ResponseCode = local_1f4;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    local_100.DownloadRecord.SpeedRecord.CyclesStart = local_1f0.CyclesStart;
    local_100.DownloadRecord.SpeedRecord.CyclesEnd = local_1f0.CyclesEnd;
    local_100.DownloadRecord.SpeedRecord.Size = local_1f0.Size;
    local_100.__this = this;
    TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
    ::
    BindSPLambda<BuildPatchServices::FDownloadServiceImpl,_BuildPatchServices::FDownloadServiceImpl::RequestFileWithHeaders_::__l6::<lambda_2>_>
              (this_00,this,&local_100);
    if (local_100.DownloadRecord.Uri.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_100.DownloadRecord.Uri.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if ((plVar11 == (longlong *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar15 = (*pcVar9)();
      return iVar15;
    }
    (**(code **)(*plVar11 + 0xe8))(plVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.ReferenceController);
    param_1 = local_res10;
  }
  else {
    pFVar21 = ::operator_new(0x10);
    if (pFVar21 != (FTaskBase *)0x0) {
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      pFVar22 = pFVar21;
    }
    local_220.Value = (TSharedRef<IHttpRequest,1> *)pFVar22;
    FVar23 = MakeFileLoadTask(this,(int)&local_1c8,(FString *)(ulonglong)local_238[0],
                              (FFileRequest *)param_1);
    if ((TRefCountPtr<UE::Tasks::Private::FTaskBase>)local_220.Value != FVar23.Pimpl.Reference) {
      puVar17 = (undefined8 *)(local_220.Value)->Object;
      (local_220.Value)->Object = (IHttpRequest *)*(longlong *)FVar23.Pimpl.Reference;
      *(undefined8 *)FVar23.Pimpl.Reference = 0;
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        piVar3 = (int *)(puVar17 + 6);
        iVar15 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    if (local_1c8 != (undefined8 *)0x0) {
      LOCK();
      piVar3 = (int *)(local_1c8 + 6);
      iVar15 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)*local_1c8)(local_1c8,1);
      }
    }
    pFVar4 = &this->ActiveRequestsCS;
    if (pFVar4 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
    local_110 = local_238;
    local_108 = &local_220.Value;
    TSet<TTuple<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<int_const_&,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>_&&>_>
              ((TSet<TTuple<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>,0>,FDefaultSetAllocator>
                *)&this->ActiveFileRequests,
               (TPairInitializer<int_const_&,TUniquePtr<BuildPatchServices::FFileRequest,TDefaultDelete<BuildPatchServices::FFileRequest>_>_&&>
                *)(local_1d8 + 0xc),(bool *)&local_110);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
    pTVar12 = local_220.Value;
    if ((FTaskBase *)local_220.Value != (FTaskBase *)0x0) {
      puVar17 = (undefined8 *)(local_220.Value)->Object;
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        piVar3 = (int *)(puVar17 + 6);
        iVar15 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
      ::operator_delete(pTVar12,0x10);
    }
  }
  (**(code **)((longlong)*this->DownloadServiceStat + 8))
            (this->DownloadServiceStat,local_238[0],param_1);
  return local_238[0];
}

