// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 17

// FCookOnTheFlyServerConnection @ 14311b000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FCookOnTheFlyServerConnection * __thiscall
FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection
          (FCookOnTheFlyServerConnection *this,
          TUniquePtr<ICookOnTheFlyServerTransport,TDefaultDelete<ICookOnTheFlyServerTransport>_>
          param_1,FString *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  ushort *puVar5;
  ICookOnTheFlyServerTransport *pIVar6;
  ICookOnTheFlyServerTransport IVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  FCookOnTheFlyServerConnection *pFVar12;
  FThread *this_00;
  FThread *this_01;
  undefined ***pppuVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  FThread *pFVar16;
  pmf_fb23e882 pVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStackY_2f8 [32];
  uint local_2a8;
  uint local_2a4;
  uint local_2a0 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_298;
  char local_288;
  FString local_280;
  FString local_270;
  undefined8 local_260;
  undefined1 local_258 [8];
  FFastPathLoadBuffer *pFStack_250;
  uchar *local_248;
  uchar *puStack_240;
  uchar *local_238;
  ulonglong uStack_230;
  undefined8 local_228;
  long64 lStack_220;
  FPackageFileVersion local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  FCustomVersionContainer *pFStack_200;
  FCustomPropertyListNode *local_1f8;
  FArchiveSavePackageData *pFStack_1f0;
  FProperty *local_1e8;
  FArchiveSerializedPropertyChain *pFStack_1e0;
  undefined8 local_1d8;
  FArchiveState *pFStack_1d0;
  undefined8 local_1c8;
  void *pvStack_1c0;
  undefined8 local_1b8;
  pmf_fb23e882 local_1a8;
  ICookOnTheFlyServerTransport *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_188;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e0;
  undefined1 local_c8 [24];
  void *pvStack_b0;
  code *local_a8 [2];
  undefined **local_98;
  ForAnyElementType local_90;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  TUniquePtr<FThread,TDefaultDelete<FThread>_> local_60;
  ForAnyElementType local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  this_01 = (FThread *)0x0;
  local_2a0[0] = 0;
  this->_padding_ = (longlong)&___7FCookOnTheFlyServerConnection__6B_;
  local_1a8 = (pmf_fb23e882)this;
  local_1a0 = param_1.Ptr;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TransportCritical,4000);
  (this->Transport).Ptr = (ICookOnTheFlyServerTransport *)*param_1.Ptr;
  *param_1.Ptr = (ICookOnTheFlyServerTransport)0x0;
  ::FString::FString(&this->Host,param_2);
  *(undefined8 *)&this->MessageEvent = 0;
  *(undefined8 *)&(this->MessageEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MessageEvent).field_0x10 = 0;
  *(undefined8 *)&(this->MessageEvent).field_0x18 = 2;
  (this->Thread).Ptr = (FThread *)0x0;
  this->bStopRequested = (TAtomic<bool>)0x0;
  bVar9 = FGenericPlatformProcess::SupportsMultithreading();
  pTVar4 = &this->ZenHostNames;
  this->bIsSingleThreaded = !bVar9;
  piVar1 = &(this->ZenHostNames).ArrayMax;
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  (this->ZenProjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZenProjectName).Data.ArrayNum = 0;
  (this->ZenProjectName).Data.ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ZenHostNames).ArrayNum = 0;
  *piVar1 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RequestsCriticalSection,4000);
  *(undefined8 *)&this->PendingRequests = 0;
  *(undefined8 *)&(this->PendingRequests).field_0x8 = 0;
  *(undefined8 *)&(this->PendingRequests).field_0x20 = 0;
  *(undefined4 *)&(this->PendingRequests).field_0x28 = 0;
  *(undefined4 *)&(this->PendingRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingRequests).field_0x34 = 0;
  *(undefined8 *)&(this->PendingRequests).field_0x40 = 0;
  *(undefined4 *)&(this->PendingRequests).field_0x48 = 0;
  this->NextCorrelationId = (TAtomic<unsigned_int>)0x1;
  if (((this->Transport).Ptr == (ICookOnTheFlyServerTransport *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Transport",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CookOnTheFly\\Private\\CookOnTheFlyServerConnection.cpp"
                         ,0x1e,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FCookOnTheFlyServerConnection *)(*pcVar8)();
    return pFVar12;
  }
  local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.ArrayNum = 0;
  local_298.ArrayMax = 0;
  FGenericPlatformMisc::GetValidTargetPlatforms(&local_298);
  local_260 = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_188);
  local_188._padding_ = 0;
  local_188._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_188.Bytes = &local_e0;
  local_188.ArchiveName.ComparisonIndex.Value = 0;
  local_188.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_188,true);
  (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_188,&local_298);
  if (*(ulonglong *)(local_188._padding_ + 8) < *(ulonglong *)local_188._padding_ + 4) {
    local_2a0[0] = 0;
    if ((local_188._padding_ & 1U) == 0) {
      local_2a0[0] = (uint)(this->bIsSingleThreaded != false);
    }
    if (*(code **)(local_188._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_188,local_2a0,4);
    }
    else {
      (**(code **)(local_188._padding_ + 0x188))();
    }
    if (1 < local_2a0[0]) {
      FArchiveState::SetError((FArchiveState *)&local_188);
    }
  }
  else {
    *(ulonglong *)local_188._padding_ = *(ulonglong *)local_188._padding_ + 4;
  }
  pIVar6 = (this->Transport).Ptr;
  cVar10 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,&local_e0);
  pVar17 = (pmf_fb23e882)this;
  if (cVar10 == '\0') {
    UE::Logging::Private::BasicFatalLog
              (&`public:___cdecl_FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection(TUniquePtr<ICookOnTheFlyServerTransport,TDefaultDelete<ICookOnTheFlyServerTransport>_>,FString_const&___ptr64)___ptr64'
                ::__l16::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
    goto LAB_14311b90a;
  }
  local_258 = (undefined1  [8])0x0;
  pFStack_250 = (FFastPathLoadBuffer *)0x0;
  local_248 = (uchar *)0x0;
  puStack_240 = (uchar *)0x0;
  local_238 = (uchar *)0x0;
  uStack_230 = 0;
  local_228 = 0;
  lStack_220 = 0;
  local_218.FileVersionUE4 = 0;
  local_218.FileVersionUE5 = 0;
  uStack_210 = 0;
  local_208._0_2_ = 0;
  local_208._2_2_ = 0;
  local_208._4_4_ = 0;
  pFStack_200 = (FCustomVersionContainer *)0x0;
  local_1f8 = (FCustomPropertyListNode *)0x0;
  pFStack_1f0 = (FArchiveSavePackageData *)0x0;
  local_1e8 = (FProperty *)0x0;
  pFStack_1e0 = (FArchiveSerializedPropertyChain *)0x0;
  local_1d8 = 0;
  pFStack_1d0 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_258);
  local_1b8 = 0;
  local_1c8 = 0;
  pvStack_1c0 = (void *)0x0;
  local_258 = (undefined1  [8])&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading((FArchiveState *)local_258,true);
  (**(code **)((longlong)local_258 + 0x108))(local_258,0);
  pIVar6 = (this->Transport).Ptr;
  cVar10 = (**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,local_258);
  if (cVar10 == '\0') {
    UE::Logging::Private::BasicFatalLog
              (&`public:___cdecl_FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection(TUniquePtr<ICookOnTheFlyServerTransport,TDefaultDelete<ICookOnTheFlyServerTransport>_>,FString_const&___ptr64)___ptr64'
                ::__l37::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
  }
  else {
    puVar2 = (uint *)((longlong)pFStack_250->StartFastPathLoadBuffer + 4);
    if (pFStack_250->EndFastPathLoadBuffer < puVar2) {
      local_2a4 = 0;
      if ((uStack_230 & 1) == 0) {
        local_2a4 = (uint)(local_288 != '\0');
      }
      if (*(code **)((longlong)local_258 + 0x188) == FArrayReader::Serialize) {
        FArrayReader::Serialize((FArrayReader *)local_258,&local_2a4,4);
      }
      else {
        (**(code **)((longlong)local_258 + 0x188))();
      }
      if (1 < local_2a4) {
        FArchiveState::SetError((FArchiveState *)local_258);
      }
      uVar19 = local_2a4;
      if ((uStack_230 & 1) != 0) goto LAB_14311b3db;
    }
    else {
      uVar19 = *(uint *)pFStack_250->StartFastPathLoadBuffer;
      pFStack_250->StartFastPathLoadBuffer = (uchar *)puVar2;
LAB_14311b3db:
      local_288 = uVar19 != 0;
    }
    if (local_288 == '\0') {
      UE::Logging::Private::BasicFatalLog
                (&`public:___cdecl_FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection(TUniquePtr<ICookOnTheFlyServerTransport,TDefaultDelete<ICookOnTheFlyServerTransport>_>,FString_const&___ptr64)___ptr64'
                  ::__l58::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
    }
    else {
      local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.Data.ArrayNum = 0;
      local_280.Data.ArrayMax = 0;
      ::operator<<((FArchive *)local_258,&this->PlatformName);
      ::operator<<((FArchive *)local_258,&this->ZenProjectName);
      ::operator<<((FArchive *)local_258,&local_280);
      puVar5 = &this->ZenHostPort;
      if (pFStack_250->EndFastPathLoadBuffer <
          (ushort *)((longlong)pFStack_250->StartFastPathLoadBuffer + 2)) {
        if ((uStack_230 & 0x10000) == 0) {
          if (*(code **)((longlong)local_258 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_258,puVar5,2);
          }
          else {
            (**(code **)((longlong)local_258 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_258,puVar5);
        }
      }
      else {
        *puVar5 = *(ushort *)pFStack_250->StartFastPathLoadBuffer;
        pFStack_250->StartFastPathLoadBuffer = pFStack_250->StartFastPathLoadBuffer + 2;
      }
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_280.Data.ArrayNum != 0) {
        FVar14.Data = local_280.Data.AllocatorInstance.Data;
      }
      iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,"localhost");
      if (iVar11 == 0) {
        local_2a8 = 0;
        if (pFStack_250->EndFastPathLoadBuffer <
            (uint *)((longlong)pFStack_250->StartFastPathLoadBuffer + 4)) {
          if ((uStack_230 & 0x10000) == 0) {
            if (*(code **)((longlong)local_258 + 0x188) == FArrayReader::Serialize) {
              FArrayReader::Serialize((FArrayReader *)local_258,&local_2a8,4);
            }
            else {
              (**(code **)((longlong)local_258 + 0x188))();
            }
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)local_258,&local_2a8);
          }
        }
        else {
          local_2a8 = *(uint *)pFStack_250->StartFastPathLoadBuffer;
          pFStack_250->StartFastPathLoadBuffer = pFStack_250->StartFastPathLoadBuffer + 4;
        }
        if ((int)local_2a8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_2a8);
        }
        if (*piVar1 < (int)local_2a8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_2a8,&pTVar4->AllocatorInstance,(this->ZenHostNames).ArrayNum,
                     piVar1);
        }
        pFVar16 = this_01;
        if (0 < (int)local_2a8) {
          do {
            local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_270.Data.ArrayNum = 0;
            local_270.Data.ArrayMax = 0;
            ::operator<<((FArchive *)local_258,&local_270);
            pFVar15 = (pTVar4->AllocatorInstance).Data;
            if (((pFVar15 <= (FScriptContainerElement *)&local_270) &&
                ((FScriptContainerElement *)&local_270 < pFVar15 + (longlong)*piVar1 * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              pFVar12 = (FCookOnTheFlyServerConnection *)(*pcVar8)();
              return pFVar12;
            }
            iVar11 = (this->ZenHostNames).ArrayNum;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar4->AllocatorInstance,piVar1);
            }
            FVar14.Data = local_270.Data.AllocatorInstance.Data;
            (this->ZenHostNames).ArrayNum = iVar11 + 1;
            pFVar15 = (pTVar4->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
            *(undefined8 *)pFVar15 = 0;
            lVar18 = (longlong)local_270.Data.ArrayNum;
            *(int *)(pFVar15 + 8) = local_270.Data.ArrayNum;
            if (local_270.Data.ArrayNum == 0) {
              *(int *)(pFVar15 + 0xc) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_270.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,
                         local_270.Data.ArrayNum,(int *)(pFVar15 + 0xc));
              memcpy(*(void **)pFVar15,FVar14.Data,lVar18 * 2);
            }
            if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.Data.AllocatorInstance.Data);
            }
            uVar19 = (int)pFVar16 + 1;
            pFVar16 = (FThread *)(ulonglong)uVar19;
            pVar17 = local_1a8;
          } while ((int)uVar19 < (int)local_2a8);
        }
      }
      else {
        pFVar15 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar15 <= (FScriptContainerElement *)&local_280) &&
            ((FScriptContainerElement *)&local_280 < pFVar15 + (longlong)*piVar1 * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FCookOnTheFlyServerConnection *)(*pcVar8)();
          return pFVar12;
        }
        iVar11 = (this->ZenHostNames).ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar4->AllocatorInstance,piVar1);
        }
        FVar14.Data = local_280.Data.AllocatorInstance.Data;
        (this->ZenHostNames).ArrayNum = iVar11 + 1;
        pFVar15 = (pTVar4->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        *(undefined8 *)pFVar15 = 0;
        lVar18 = (longlong)local_280.Data.ArrayNum;
        *(int *)(pFVar15 + 8) = local_280.Data.ArrayNum;
        if (local_280.Data.ArrayNum == 0) {
          *(int *)(pFVar15 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_280.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,
                     local_280.Data.ArrayNum,(int *)(pFVar15 + 0xc));
          memcpy(*(void **)pFVar15,FVar14.Data,lVar18 * 2);
        }
      }
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<FCookOnTheFlyServerConnection>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnEnginePreExit,(FCookOnTheFlyServerConnection *)local_c8,pVar17);
      this_00 = ::operator_new(0x10);
      pFVar16 = this_01;
      if (this_00 != (FThread *)0x0) {
        local_198 = 0xffffffffffffffff;
        local_68 = &
                   ___7__TFunction_OwnedObject_V<lambda_2>__1___0FCookOnTheFlyServerConnection__QEAA_V__TUniquePtr_VICookOnTheFlyServerTransport__U__TDefaultDelete_VICookOnTheFlyServerTransport______AEBVFString___Z__00_0A__Function_Private_Core_UE__6B_
        ;
        uStack_190 = 0;
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_2>,void>
                      ::Call;
        local_50.Data = (FScriptContainerElement *)0x0;
        local_98 = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__1___0FCookOnTheFlyServerConnection__QEAA_V__TUniquePtr_VICookOnTheFlyServerTransport__U__TDefaultDelete_VICookOnTheFlyServerTransport______AEBVFString___Z__00_0A__Function_Private_Core_UE__6B_
        ;
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_1>,void>
                      ::Call;
        local_80 = (undefined ***)0x0;
        local_c8._16_4_ = -1;
        local_c8._20_4_ = -1;
        pvStack_b0 = (void *)0x0;
        local_90.Data = (FScriptContainerElement *)pVar17;
        local_60.Ptr = (FThread *)pVar17;
        this_01 = ::FThread::FThread(this_00,L"CotfServerConnection",
                                     (TUniqueFunction<void___cdecl(void)> *)local_a8,
                                     (TUniqueFunction<void___cdecl(void)> *)local_78,0x2000,
                                     TPri_Normal,(FThreadAffinity *)(local_c8 + 0x10),NonForkable);
        pFVar16 = (FThread *)&DAT_00000003;
      }
      if ((((ulonglong)pFVar16 & 2) != 0) &&
         (pFVar16 = (FThread *)(ulonglong)((uint)pFVar16 & 0xfffffffd), local_a8[0] != (code *)0x0))
      {
        pppuVar13 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar13 = local_80;
        }
        (*(code *)(*pppuVar13)[2])();
      }
      if ((((ulonglong)pFVar16 & 1) != 0) && (local_78[0] != (code *)0x0)) {
        FVar14.Data = (FScriptContainerElement *)&local_68;
        if (local_50.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_50.Data;
        }
        (*(code *)(*(undefined ***)FVar14.Data)[2])();
      }
      puVar3 = (undefined8 *)((longlong)pVar17 + 0x68);
      if (puVar3 == (undefined8 *)(local_c8 + 8)) {
        if (this_01 != (FThread *)0x0) {
          ::FThread::~FThread(this_01);
          goto LAB_14311b8da;
        }
      }
      else {
        pFVar16 = (FThread *)*puVar3;
        *puVar3 = this_01;
        if (pFVar16 != (FThread *)0x0) {
          ::FThread::~FThread(pFVar16);
          this_01 = pFVar16;
LAB_14311b8da:
          ::operator_delete(this_01,0x10);
        }
      }
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
    }
  }
  if (pvStack_1c0 != (void *)0x0) {
    FMemory::Free(pvStack_1c0);
  }
  FArchive::~FArchive((FArchive *)local_258);
LAB_14311b90a:
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_188);
  DestructItems<FString,int>((FString *)local_298.AllocatorInstance.Data,local_298.ArrayNum);
  if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.AllocatorInstance.Data);
  }
  IVar7 = *local_1a0;
  if (IVar7 != (ICookOnTheFlyServerTransport)0x0) {
    (*(code *)**(undefined8 **)IVar7)(IVar7,1);
  }
  return (FCookOnTheFlyServerConnection *)pVar17;
}

// operator() @ 14311c4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_1>::operator()
          (void *this)

{
  FCookOnTheFlyServerConnection *this_00;
  ICookOnTheFlyServerTransport *pIVar1;
  FCookOnTheFlyServerConnection *local_res8 [4];
  code *local_18;
  FCookOnTheFlyServerConnection **local_10;
  
  this_00 = *(FCookOnTheFlyServerConnection **)this;
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCookOnTheFlyServerConnection::ThreadEntry'::__l2::<lambda_1>,bool>
             ::Call;
  local_res8[0] = this_00;
  FCookOnTheFlyServerConnection::ProcessMessagesWhile
            (this_00,(TFunctionRef<bool___cdecl(void)> *)&local_18);
  if (3 < (byte)LogCotfServerConnection._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)
               &`private:_void___cdecl_FCookOnTheFlyServerConnection::ThreadEntry(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
  }
  FCookOnTheFlyServerConnection::Flush(this_00);
  pIVar1 = (this_00->Transport).Ptr;
  if (pIVar1 != (ICookOnTheFlyServerTransport *)0x0) {
    (this_00->Transport).Ptr = (ICookOnTheFlyServerTransport *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014311c523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// operator() @ 14311c540

bool __thiscall
`FCookOnTheFlyServerConnection::SendRequest'::__l29::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0xe0) != *(int *)(lVar1 + 0x10c)) {
    lVar3 = *(longlong *)(lVar1 + 0x118);
    if (*(longlong *)(lVar1 + 0x118) == 0) {
      lVar3 = lVar1 + 0x110;
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar1 + 0x120) - 1U & *(uint *)((longlong)this + 8)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar1 + 0xd8) + (longlong)iVar2 * 0x18) ==
            *(uint *)((longlong)this + 8)) goto LAB_14311c5ac;
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0xd8) + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14311c5ac:
  return iVar2 != -1;
}

// Disconnect @ 14311d470

void __thiscall FCookOnTheFlyServerConnection::Disconnect(FCookOnTheFlyServerConnection *this)

{
  TAtomic<bool> TVar1;
  ICookOnTheFlyServerTransport *pIVar2;
  FThread *this_00;
  
  LOCK();
  TVar1 = this->bStopRequested;
  this->bStopRequested = (TAtomic<bool>)0x1;
  UNLOCK();
  if (TVar1 == (TAtomic<bool>)0x0) {
    pIVar2 = (this->Transport).Ptr;
    if (pIVar2 != (ICookOnTheFlyServerTransport *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    ::FThread::Join((this->Thread).Ptr);
    this_00 = (this->Thread).Ptr;
    if (this_00 != (FThread *)0x0) {
      (this->Thread).Ptr = (FThread *)0x0;
      ::FThread::~FThread(this_00);
      ::operator_delete(this_00,0x10);
    }
  }
  return;
}

// Flush @ 14311d7e0

void __thiscall FCookOnTheFlyServerConnection::Flush(FCookOnTheFlyServerConnection *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>_>
  *this_00;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  FFutureState *this_01;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  void *local_e8;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_44;
  
  if (*(int *)&(this->PendingRequests).field_0x8 != *(int *)&(this->PendingRequests).field_0x34) {
    lpCriticalSection = &this->RequestsCriticalSection;
    local_88 = 0;
    uStack_80 = 0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    puVar1 = &(this->PendingRequests).field_0x10;
    iVar13 = 0;
    iVar4 = *(int *)&(this->PendingRequests).field_0x28;
    this_00 = &this->PendingRequests;
    uVar9 = 1;
    iVar15 = 0;
    iVar10 = 0;
    if (iVar4 != 0) {
      puVar16 = *(uint **)&(this->PendingRequests).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      iVar13 = 0;
      iVar15 = 0;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14311d8cf;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res10 = (int)lVar11;
      iVar10 = iVar15 + -1 + local_res10;
      if (iVar4 < iVar10) {
        iVar10 = iVar4;
      }
    }
LAB_14311d8cf:
    uVar12 = *(uint *)&(this->PendingRequests).field_0x28;
    uVar17 = uVar12 & 0xffffffe0;
    TStack_b0._padding_ = CONCAT44(uVar9,iVar13);
    TStack_b0.CurrentBitIndex = iVar10;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_b0._28_4_ = local_44;
    TStack_b0.BaseBitIndex = iVar15;
    uStack_90 = CONCAT44(uStack_bc,
                         *(int *)&(this->PendingRequests).field_0x8 -
                         *(int *)&(this->PendingRequests).field_0x34);
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar5 = *(uint *)&(this->PendingRequests).field_0x28;
    if (uVar12 != uVar5) {
      puVar14 = *(undefined1 **)&(this->PendingRequests).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14311d9f0;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res18 = (int)lVar11;
      uVar12 = local_res18 + -1 + uVar17;
      if ((int)uVar5 < (int)uVar12) {
        uVar12 = uVar5;
      }
    }
LAB_14311d9f0:
    while( true ) {
      if (*(int *)&(this->PendingRequests).field_0x8 - *(int *)&(this->PendingRequests).field_0x34
          != (int)uStack_90) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b0.CurrentBitIndex == uVar12) &&
         (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      puVar6 = *(undefined4 **)
                (*(longlong *)&this_00->field_0x0 + 8 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
      local_88 = *puVar6;
      uStack_84 = puVar6[1];
      uStack_80 = puVar6[2];
      uStack_7c = puVar6[3];
      local_78 = *(undefined8 *)(puVar6 + 4);
      uVar3 = *(undefined8 *)(puVar6 + 2);
      local_e8 = (void *)(CONCAT44(2,local_88) & 0xfffffffffffffff4 | 4);
      if (*(longlong *)(puVar6 + 6) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(longlong *)(puVar6 + 6) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      this_01 = *(FFutureState **)(puVar6 + 6);
      if ((this_01->bComplete != (TAtomic<bool>)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_01[1].Mutex.CriticalSection.Opaque1[0] = local_e8;
      *(ulonglong *)this_01[1].Mutex.CriticalSection.Opaque2 = CONCAT44(uVar9,(int)uVar3);
      this_01[1].Mutex.CriticalSection.Opaque3[0] = (void *)0x0;
      this_01[1].Mutex.CriticalSection.Opaque3[1] = (void *)0x0;
      this_01[1].Mutex.CriticalSection.Opaque3[2] = (void *)0x0;
      FFutureState::MarkComplete(this_01);
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
    bVar8 = 1 < *(int *)&(this->PendingRequests).field_0x48;
    if (!bVar8) {
      TSet<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PendingRequests).field_0x8);
    puVar1 = &(this->PendingRequests).field_0xc;
    *(undefined4 *)&(this->PendingRequests).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PendingRequests).field_0x34 = 0;
    *(undefined4 *)&(this->PendingRequests).field_0x30 = 0xffffffff;
    iVar4 = *(int *)&(this->PendingRequests).field_0x2c;
    *(undefined4 *)&(this->PendingRequests).field_0x28 = 0;
    if ((iVar4 < 0) || (0x80 < iVar4)) {
      *(undefined4 *)&(this->PendingRequests).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingRequests).field_0x10,0);
    }
    if (bVar8) {
      *(undefined4 *)&(this->PendingRequests).field_0x48 = 1;
      TSet<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>,FDefaultSetAllocator>
                *)this_00);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Free @ 14311dc20

void __thiscall
FCookOnTheFlyServerConnection::Free(FCookOnTheFlyServerConnection *this,FPendingRequest *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint local_res8 [2];
  
  lpCriticalSection = &this->RequestsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = (param_1->RequestHeader).CorrelationId;
    if (*(int *)&(this->PendingRequests).field_0x8 != *(int *)&(this->PendingRequests).field_0x34) {
      TSet<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>,FDefaultSetAllocator>
                  *)&this->PendingRequests,local_res8[0],local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x00014311dc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetHost @ 14311df70

FString * __thiscall FCookOnTheFlyServerConnection::GetHost(FCookOnTheFlyServerConnection *this)

{
  return &this->Host;
}

// GetPlatformName @ 14311dfb0

FString * __thiscall
FCookOnTheFlyServerConnection::GetPlatformName(FCookOnTheFlyServerConnection *this)

{
  return &this->PlatformName;
}

// GetZenHostNames @ 14311dfd0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FCookOnTheFlyServerConnection::GetZenHostNames
          (FCookOnTheFlyServerConnection *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->ZenHostNames).ArrayNum;
  pFVar2 = (this->ZenHostNames).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FString,FString,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// GetZenHostPort @ 14311e060

ushort __thiscall FCookOnTheFlyServerConnection::GetZenHostPort(FCookOnTheFlyServerConnection *this)

{
  return this->ZenHostPort;
}

// GetZenProjectName @ 14311e070

FString * __thiscall
FCookOnTheFlyServerConnection::GetZenProjectName(FCookOnTheFlyServerConnection *this)

{
  return &this->ZenProjectName;
}

// IsConnected @ 14311e5c0

bool __thiscall FCookOnTheFlyServerConnection::IsConnected(FCookOnTheFlyServerConnection *this)

{
  return (this->Transport).Ptr != (ICookOnTheFlyServerTransport *)0x0;
}

// IsSingleThreaded @ 14311e5e0

bool __thiscall FCookOnTheFlyServerConnection::IsSingleThreaded(FCookOnTheFlyServerConnection *this)

{
  return this->bIsSingleThreaded;
}

// OnEnginePreExit @ 14311e660

void __thiscall FCookOnTheFlyServerConnection::OnEnginePreExit(FCookOnTheFlyServerConnection *this)

{
  TAtomic<bool> TVar1;
  ICookOnTheFlyServerTransport *pIVar2;
  FThread *this_00;
  
  LOCK();
  TVar1 = this->bStopRequested;
  this->bStopRequested = (TAtomic<bool>)0x1;
  UNLOCK();
  if (TVar1 == (TAtomic<bool>)0x0) {
    pIVar2 = (this->Transport).Ptr;
    if (pIVar2 != (ICookOnTheFlyServerTransport *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    ::FThread::Join((this->Thread).Ptr);
    this_00 = (this->Thread).Ptr;
    if (this_00 != (FThread *)0x0) {
      (this->Thread).Ptr = (FThread *)0x0;
      ::FThread::~FThread(this_00);
      ::operator_delete(this_00,0x10);
    }
  }
  return;
}

// OnMessage @ 14311e670

FMessageEvent * __thiscall
FCookOnTheFlyServerConnection::OnMessage(FCookOnTheFlyServerConnection *this)

{
  return &this->MessageEvent;
}

// ProcessMessagesWhile @ 14311e680

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCookOnTheFlyServerConnection::ProcessMessagesWhile
          (FCookOnTheFlyServerConnection *this,TFunctionRef<bool___cdecl(void)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ICookOnTheFlyServerTransport *pIVar1;
  undefined1 *puVar2;
  FFutureState *this_00;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  uint local_res18 [4];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1a8;
  FCookOnTheFlyMessageHeader local_198;
  void *local_180;
  undefined8 uStack_178;
  void *local_170;
  FScriptContainerElement *local_168;
  int local_160;
  int local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  void *local_148;
  FScriptContainerElement *local_140;
  int local_138;
  int local_134;
  FDestructionSentinel local_130;
  FArchiveState local_118;
  undefined8 local_88;
  void *pvStack_80;
  undefined8 local_78;
  FString local_68;
  FReadAccessScope local_58;
  
  cVar5 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  do {
    if (cVar5 == '\0') {
      return true;
    }
    local_118._padding_ = 0;
    local_118.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_118.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_118.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_118.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_118._40_8_ = 0;
    local_118.ArSerializingDefaults = 0;
    local_118.ArPortFlags = 0;
    local_118.ArMaxSerializeSize = 0;
    local_118.ArUEVer.FileVersionUE4 = 0;
    local_118.ArUEVer.FileVersionUE5 = 0;
    local_118.ArLicenseeUEVer = 0;
    local_118.ArEngineVer.Major = 0;
    local_118.ArEngineVer.Minor = 0;
    local_118.ArEngineVer.Patch = 0;
    local_118.ArEngineVer._6_2_ = 0;
    local_118.ArEngineVer.Changelist = 0;
    local_118.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_118.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_118.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_118.SerializedProperty = (FProperty *)0x0;
    local_118.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_118.bCustomVersionsAreReset = false;
    local_118._129_7_ = 0;
    local_118.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_118);
    local_78 = 0;
    local_88 = 0;
    pvStack_80 = (void *)0x0;
    local_118._padding_ = (longlong)&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading(&local_118,true);
    (**(code **)(local_118._padding_ + 0x108))(&local_118,0);
    pIVar1 = (this->Transport).Ptr;
    if ((pIVar1 == (ICookOnTheFlyServerTransport *)0x0) ||
       (cVar5 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&local_118), cVar5 == '\0')) {
      if (2 < (byte)LogCotfServerConnection._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`private:_bool___cdecl_FCookOnTheFlyServerConnection::ProcessMessagesWhile(TFunctionRef<bool___cdecl(void)>)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
      }
      goto LAB_14311ec4f;
    }
    local_198.MessageType = None;
    local_198.MessageStatus = Ok;
    local_198.CorrelationId = 0;
    local_198.Timestamp = 0;
    local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.ArrayNum = 0;
    local_1a8.ArrayMax = 0;
    UE::Cook::operator<<((FArchive *)&local_118,&local_198);
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_118,&local_1a8);
    if (5 < (byte)LogCotfServerConnection._0_1_) {
      UE::Cook::FCookOnTheFlyMessageHeader::ToString(&local_198,&local_68);
      UE::Logging::Private::BasicLog<6>
                (&`private:_bool___cdecl_FCookOnTheFlyServerConnection::ProcessMessagesWhile(TFunctionRef<bool___cdecl(void)>)___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    uVar12 = local_198.CorrelationId;
    if ((local_198.MessageType & Request) == None) {
      if ((local_198.MessageType & Response) != None) {
        lpCriticalSection = &this->RequestsCriticalSection;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (*(int *)&(this->PendingRequests).field_0x8 ==
            *(int *)&(this->PendingRequests).field_0x34) {
LAB_14311e877:
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        else {
          puVar2 = *(undefined1 **)&(this->PendingRequests).field_0x40;
          puVar11 = &(this->PendingRequests).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar11 = puVar2;
          }
          iVar9 = *(int *)(puVar11 +
                          (ulonglong)(*(int *)&(this->PendingRequests).field_0x48 - 1U & uVar12) * 4
                          );
          if (iVar9 == -1) goto LAB_14311e877;
          while (lVar15 = *(longlong *)&this->PendingRequests + (longlong)iVar9 * 0x18,
                *(uint *)(*(longlong *)&this->PendingRequests + (longlong)iVar9 * 0x18) != uVar12) {
            iVar9 = *(int *)(lVar15 + 0x10);
            if (iVar9 == -1) goto LAB_14311e877;
          }
          plVar13 = (longlong *)(lVar15 + 8);
          if (lVar15 == 0) {
            plVar13 = (longlong *)0x0;
          }
          if (plVar13 == (longlong *)0x0) goto LAB_14311e877;
          lVar15 = *plVar13;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (lVar15 != 0) {
            if ((*(uint *)(lVar15 + 8) != local_198.CorrelationId) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PendingRequest->RequestHeader.CorrelationId == MessageHeader.CorrelationId"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CookOnTheFly\\Private\\CookOnTheFlyServerConnection.cpp"
                                   ,0x10d,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            local_168 = local_1a8.AllocatorInstance.Data;
            local_160 = local_1a8.ArrayNum;
            local_15c = local_1a8.ArrayMax;
            local_180 = (void *)CONCAT44(local_198.MessageStatus,local_198.MessageType);
            uStack_178 = CONCAT44(local_198._12_4_,local_198.CorrelationId);
            local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.ArrayNum = 0;
            local_1a8.ArrayMax = 0;
            local_170 = (void *)local_198.Timestamp;
            if (*(longlong *)(lVar15 + 0x18) == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("State.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                 ,0x283,L"");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              if ((*(longlong *)(lVar15 + 0x18) == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
            }
            this_00 = *(FFutureState **)(lVar15 + 0x18);
            if ((this_00->bComplete != (TAtomic<bool>)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!IsComplete()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                   ,0xcd,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            this_00[1].Mutex.CriticalSection.Opaque1[0] = local_180;
            *(undefined8 *)this_00[1].Mutex.CriticalSection.Opaque2 = uStack_178;
            this_00[1].Mutex.CriticalSection.Opaque3[0] = local_170;
            this_00[1].Mutex.CriticalSection.Opaque3[1] = local_168;
            *(int *)(this_00[1].Mutex.CriticalSection.Opaque3 + 2) = local_160;
            *(int *)((longlong)this_00[1].Mutex.CriticalSection.Opaque3 + 0x14) = local_15c;
            FFutureState::MarkComplete(this_00);
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            local_res18[0] = *(uint *)(lVar15 + 8);
            if (*(int *)&(this->PendingRequests).field_0x8 !=
                *(int *)&(this->PendingRequests).field_0x34) {
              TSet<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<unsigned_int>
                        ((TSet<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>,FDefaultSetAllocator>
                          *)&this->PendingRequests,local_res18[0],local_res18);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            goto LAB_14311ebcf;
          }
        }
        if (2 < (byte)LogCotfServerConnection._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`private:_bool___cdecl_FCookOnTheFlyServerConnection::ProcessMessagesWhile(TFunctionRef<bool___cdecl(void)>)___ptr64'
                      ::__l72::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
        }
        if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.AllocatorInstance.Data);
        }
LAB_14311ec4f:
        if (pvStack_80 != (void *)0x0) {
          FMemory::Free(pvStack_80);
        }
        FArchive::~FArchive((FArchive *)&local_118);
        return false;
      }
      local_138 = local_1a8.ArrayNum;
      local_158 = CONCAT44(local_198.MessageStatus,local_198.MessageType);
      uStack_150 = CONCAT44(local_198._12_4_,local_198.CorrelationId);
      local_140 = local_1a8.AllocatorInstance.Data;
      local_134 = local_1a8.ArrayMax;
      local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148 = (void *)local_198.Timestamp;
      local_1a8.ArrayNum = 0;
      local_1a8.ArrayMax = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->MessageEvent,
                 &local_58);
      iVar9 = *(int *)&(this->MessageEvent).field_0x10;
      plVar13 = *(longlong **)&(this->MessageEvent).field_0x8;
      plVar14 = plVar13 + (longlong)iVar9 * 2;
      while( true ) {
        if (*(int *)&(this->MessageEvent).field_0x10 != iVar9) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (plVar13 == plVar14) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_58);
          goto LAB_14311ebc1;
        }
        if (((int)plVar13[1] != 0) && (*plVar13 != 0)) break;
        plVar13 = plVar13 + 2;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->MessageEvent,
                 (FWriteAccessScope *)&local_130);
      puVar2 = &(this->MessageEvent).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + 1;
      bVar6 = false;
      uVar12 = *(int *)&(this->MessageEvent).field_0x10 - 1;
      if (-1 < (int)uVar12) {
        lVar15 = (longlong)(int)uVar12 << 4;
        bVar6 = false;
        do {
          uVar10 = 0;
          if ((int)uVar12 < *(int *)&(this->MessageEvent).field_0x10) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          lVar3 = *(longlong *)&(this->MessageEvent).field_0x8;
          if (((*(int *)(lVar3 + 8 + lVar15) == 0) ||
              (plVar13 = *(longlong **)(lVar3 + lVar15), plVar13 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar13 + 0x68))(), cVar5 == '\0')) {
            bVar6 = true;
          }
          lVar15 = lVar15 + -0x10;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      puVar2 = &(this->MessageEvent).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->MessageEvent,false);
      }
      if (local_130.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
      }
LAB_14311ebc1:
      if (local_140 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140);
      }
    }
    else if (2 < (byte)LogCotfServerConnection._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`private:_bool___cdecl_FCookOnTheFlyServerConnection::ProcessMessagesWhile(TFunctionRef<bool___cdecl(void)>)___ptr64'
                  ::__l47::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
    }
LAB_14311ebcf:
    if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.AllocatorInstance.Data);
    }
    if (pvStack_80 != (void *)0x0) {
      FMemory::Free(pvStack_80);
    }
    FArchive::~FArchive((FArchive *)&local_118);
    cVar5 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  } while( true );
}

// SendRequest @ 14311fab0

/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<UE::Cook::FCookOnTheFlyResponse> * __thiscall
FCookOnTheFlyServerConnection::SendRequest
          (FCookOnTheFlyServerConnection *this,
          TFuture<UE::Cook::FCookOnTheFlyResponse> *__return_storage_ptr__,
          FCookOnTheFlyRequest *param_1)

{
  TAtomic<unsigned_int> *pTVar1;
  FWindowsRecursiveMutex *pFVar2;
  TAtomic<unsigned_int> TVar3;
  longlong lVar4;
  TFutureState<UE::Cook::FCookOnTheFlyResponse> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  ICookOnTheFlyServerTransport *pIVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  char cVar13;
  FDateTime FVar14;
  TFuture<UE::Cook::FCookOnTheFlyResponse> *pTVar15;
  FPendingRequest *this_00;
  FPendingRequest *pFVar16;
  int iVar17;
  ulonglong uVar18;
  TAtomic<unsigned_int> local_res8 [2];
  TFuture<UE::Cook::FCookOnTheFlyResponse> *local_res10;
  undefined1 local_res18 [16];
  FPendingRequest *local_1a0;
  undefined1 local_198 [24];
  void *pvStack_180;
  undefined8 local_178;
  TAtomic<unsigned_int> *local_170;
  FPendingRequest **local_168;
  FCookOnTheFlyServerConnection *local_160;
  TAtomic<unsigned_int> local_158;
  code *local_150;
  FCookOnTheFlyServerConnection **local_148;
  FArchiveState local_138;
  undefined8 local_a8;
  ForAnyElementType *local_a0;
  undefined8 local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  FString local_70;
  FString local_60 [2];
  
  LOCK();
  pTVar1 = &this->NextCorrelationId;
  TVar3 = *pTVar1;
  *pTVar1 = (TAtomic<unsigned_int>)((int)*pTVar1 + 1);
  UNLOCK();
  *(undefined4 *)&param_1->field_0x4 = 1;
  *(TAtomic<unsigned_int> *)&param_1->field_0x8 = TVar3;
  local_res10 = __return_storage_ptr__;
  local_res18._8_4_ = TVar3;
  FVar14 = FDateTime::UtcNow();
  pFVar16 = (FPendingRequest *)0x0;
  *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)FVar14.Ticks;
  local_138._padding_ = 0;
  local_138.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_138.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_138.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_138.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_138._40_8_ = 0;
  local_138.ArSerializingDefaults = 0;
  local_138.ArPortFlags = 0;
  local_138.ArMaxSerializeSize = 0;
  local_138.ArUEVer.FileVersionUE4 = 0;
  local_138.ArUEVer.FileVersionUE5 = 0;
  local_138.ArLicenseeUEVer = 0;
  local_138.ArEngineVer.Major = 0;
  local_138.ArEngineVer.Minor = 0;
  local_138.ArEngineVer.Patch = 0;
  local_138.ArEngineVer._6_2_ = 0;
  local_138.ArEngineVer.Changelist = 0;
  local_138.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_138.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_138.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_138.SerializedProperty = (FProperty *)0x0;
  local_138.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_138.bCustomVersionsAreReset = false;
  local_138._129_7_ = 0;
  local_138.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_138);
  local_a8 = 0;
  local_138._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_a0 = &local_90;
  local_98 = 0;
  FArchiveState::SetIsSaving(&local_138,true);
  (**(code **)(local_138._padding_ + 0x108))(&local_138,0);
  uVar18 = (longlong)*(int *)&param_1->field_0x20 + 0x18;
  local_138._padding_ = (longlong)&___7FBufferArchive__6B_;
  iVar17 = (int)uVar18;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((uVar18 != (longlong)iVar17) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar12))
  {
    pcVar8 = (code *)swi(3);
    pTVar15 = (TFuture<UE::Cook::FCookOnTheFlyResponse> *)(*pcVar8)();
    return pTVar15;
  }
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar18 & 0xffffffff);
  }
  if (local_88._4_4_ < iVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar17,&local_90,(int)local_88,(int *)((longlong)&local_88 + 4));
  }
  UE::Cook::operator<<((FArchive *)&local_138,(FCookOnTheFlyMessageHeader *)param_1);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_138,
             (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1->field_0x18);
  pFVar2 = &this->RequestsCriticalSection;
  local_res8[0] = TVar3;
  if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
  this_00 = ::operator_new(0x30);
  if (this_00 != (FPendingRequest *)0x0) {
    (this_00->RequestHeader).MessageType = None;
    (this_00->RequestHeader).MessageStatus = None;
    *(undefined8 *)&(this_00->RequestHeader).CorrelationId = 0;
    (this_00->RequestHeader).Timestamp = 0;
    (this_00->ResponsePromise).State.Object = (TFutureState<UE::Cook::FCookOnTheFlyResponse> *)0x0;
    (this_00->ResponsePromise).State.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&(this_00->ResponsePromise).bFutureRetrieved = 0;
    pFVar16 = FPendingRequest::FPendingRequest(this_00);
  }
  local_170 = local_res8;
  local_168 = &local_1a0;
  local_1a0 = pFVar16;
  TSet<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,0>,FDefaultSetAllocator>
              *)&this->PendingRequests,
             (TPairInitializer<unsigned_int_const_&,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_&&>
              *)local_res18,(bool *)&local_170);
  pFVar16 = local_1a0;
  lVar4 = *(longlong *)&this->PendingRequests;
  if (local_1a0 != (FPendingRequest *)0x0) {
    if ((((local_1a0->ResponsePromise).State.Object !=
          (TFutureState<UE::Cook::FCookOnTheFlyResponse> *)0x0) &&
        (((local_1a0->ResponsePromise).State.Object)->field_0x68 == '\0')) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("State->IsComplete()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x242,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pTVar15 = (TFuture<UE::Cook::FCookOnTheFlyResponse> *)(*pcVar8)();
      return pTVar15;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar16->ResponsePromise).State.SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar16,0x30);
  }
  pFVar16 = *(FPendingRequest **)(lVar4 + (longlong)(int)local_res18._0_4_ * 0x18 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
  uVar9 = *(undefined4 *)&param_1->field_0x4;
  uVar10 = *(undefined4 *)&param_1->field_0x8;
  uVar11 = *(undefined4 *)&param_1->field_0xc;
  (pFVar16->RequestHeader).MessageType = *(undefined4 *)&param_1->field_0x0;
  (pFVar16->RequestHeader).MessageStatus = uVar9;
  (pFVar16->RequestHeader).CorrelationId = uVar10;
  *(undefined4 *)&(pFVar16->RequestHeader).field_0xc = uVar11;
  (pFVar16->RequestHeader).Timestamp = *(long64 *)&param_1->field_0x10;
  if (((pFVar16->ResponsePromise).bFutureRetrieved != false) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar15 = (TFuture<UE::Cook::FCookOnTheFlyResponse> *)(*pcVar8)();
    return pTVar15;
  }
  pTVar5 = (pFVar16->ResponsePromise).State.Object;
  (pFVar16->ResponsePromise).bFutureRetrieved = true;
  if ((pTVar5 == (TFutureState<UE::Cook::FCookOnTheFlyResponse> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar15 = (TFuture<UE::Cook::FCookOnTheFlyResponse> *)(*pcVar8)();
    return pTVar15;
  }
  *(TFutureState<UE::Cook::FCookOnTheFlyResponse> **)__return_storage_ptr__ =
       (pFVar16->ResponsePromise).State.Object;
  pTVar6 = (pFVar16->ResponsePromise).State.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar12 = false;
  if ((this->Transport).Ptr != (ICookOnTheFlyServerTransport *)0x0) {
    if (5 < (byte)LogCotfServerConnection._0_1_) {
      UE::Cook::FCookOnTheFlyMessageHeader::ToString
                ((FCookOnTheFlyMessageHeader *)param_1,&local_70);
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_class_TFuture<UE::Cook::FCookOnTheFlyResponse>___cdecl_FCookOnTheFlyServerConnection::SendRequest(UE::Cook::FCookOnTheFlyRequest&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    pFVar2 = &this->TransportCritical;
    if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    pIVar7 = (this->Transport).Ptr;
    cVar13 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,&local_90);
    if (cVar13 != '\0') {
      if (this->bIsSingleThreaded != false) {
        local_158 = (TAtomic<unsigned_int>)local_res18._8_4_;
        local_148 = &local_160;
        local_150 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FCookOnTheFlyServerConnection::SendRequest'::__l29::<lambda_1>,bool>
                    ::Call;
        local_160 = this;
        ProcessMessagesWhile(this,(TFunctionRef<bool___cdecl(void)> *)&local_150);
      }
      bVar12 = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    if (bVar12) goto LAB_14311feff;
  }
  if (2 < (byte)LogCotfServerConnection._0_1_) {
    UE::Cook::FCookOnTheFlyMessageHeader::ToString((FCookOnTheFlyMessageHeader *)param_1,local_60);
    UE::Logging::Private::BasicLog<3>
              (&`public:_virtual_class_TFuture<UE::Cook::FCookOnTheFlyResponse>___cdecl_FCookOnTheFlyServerConnection::SendRequest(UE::Cook::FCookOnTheFlyRequest&___ptr64)___ptr64'
                ::__l33::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
  }
  local_198._4_4_ = 2;
  local_178 = 0;
  local_198._0_4_ = *(uint *)param_1 & 0xfffffff4 | 4;
  local_198._8_4_ = *(undefined4 *)&param_1->field_0x8;
  local_198._16_8_ = 0;
  pvStack_180 = (void *)0x0;
  TPromise<UE::Cook::FCookOnTheFlyResponse>::SetValue
            (&pFVar16->ResponsePromise,(FCookOnTheFlyResponse *)local_198);
  Free(this,pFVar16);
  if (pvStack_180 != (void *)0x0) {
    FMemory::Free(pvStack_180);
  }
LAB_14311feff:
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  FArchive::~FArchive((FArchive *)&local_138);
  return local_res10;
}

