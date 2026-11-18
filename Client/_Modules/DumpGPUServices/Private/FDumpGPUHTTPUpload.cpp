// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DumpGPUServices
// Functions: 8

// operator() @ 14e2bf420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FDumpGPUHTTPUpload::ProcessHttpRequest'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                         ,0xd5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1->Object == (IHttpRequest *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (**(code **)(*(longlong *)param_1->Object + 0x10))();
  if (param_2->Object == (IHttpResponse *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)((longlong)*param_2->Object + 0x58))();
  }
  TArray<TSharedPtr<IHttpRequest,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
  Remove((TArray<TSharedPtr<IHttpRequest,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)this + 0x80),param_1);
  if ((iVar3 == 3) && (iVar4 == 0xc9)) {
    if (5 < (byte)LogDumpGPUServices._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:___cdecl_`private:_void___cdecl_FDumpGPUHTTPUpload::ProcessHttpRequest(TSharedPtr<IHttpRequest,1>,FString_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)const___ptr64'
                  ::__l13::LOG_Static,(FLogCategoryBase *)&LogDumpGPUServices);
    }
    *(int *)(*(longlong *)this + 0x60) = *(int *)(*(longlong *)this + 0x60) + 1;
    if ((*(int *)(*(longlong *)this + 0x60) == (*(int *)(*(longlong *)this + 0x60) / 0x14) * 0x14)
       && (3 < (byte)LogDumpGPUServices._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&`public:___cdecl_`private:_void___cdecl_FDumpGPUHTTPUpload::ProcessHttpRequest(TSharedPtr<IHttpRequest,1>,FString_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)const___ptr64'
                  ::__l25::LOG_Static,(FLogCategoryBase *)&LogDumpGPUServices);
    }
    FDumpGPUHTTPUpload::StartNextFileUpload(*(FDumpGPUHTTPUpload **)this);
  }
  else {
    if (2 < (byte)LogDumpGPUServices._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_`private:_void___cdecl_FDumpGPUHTTPUpload::ProcessHttpRequest(TSharedPtr<IHttpRequest,1>,FString_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)const___ptr64'
                  ::__l36::LOG_Static,(FLogCategoryBase *)&LogDumpGPUServices);
    }
    FDumpGPUHTTPUpload::AbortDueToError(*(FDumpGPUHTTPUpload **)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14e2bf5c0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  FStaticBasicLogRecord *pFVar8;
  undefined ***pppuVar9;
  ForAnyElementType FVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res18;
  TStatIdData *local_res20;
  ForAnyElementType local_128;
  int local_120 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_118;
  longlong local_108;
  FString local_100;
  longlong local_f0;
  TReferenceControllerBase<1> *local_e8;
  FConstructor local_e0;
  undefined8 *local_d8;
  TStatIdData *local_d0;
  FConstructor local_c8;
  undefined8 *local_c0;
  FString local_b8;
  TStatId local_a8 [2];
  undefined **local_98;
  undefined8 local_90;
  undefined ***local_80;
  TStatId local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  
  ::operator/(&local_b8,(FString *)(*(longlong *)this + 0x10),(FString *)((longlong)this + 8));
  local_128.Data = (FScriptContainerElement *)0x0;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar10.Data = local_b8.Data.AllocatorInstance.Data;
  }
  local_120[0] = 0;
  local_120[1] = 0;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  bVar3 = FFileHelper::LoadFileToArray(&local_118,(wchar_t *)FVar10.Data,0);
  if (bVar3) {
    iVar6 = local_118.ArrayNum;
    uVar4 = FCompression::CompressMemoryBound
                      (*(FName *)(*(longlong *)this + 0x30),local_118.ArrayNum,COMPRESS_BiasMemory,0
                      );
    if (local_120[0] < (int)uVar4) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar4 - local_120[0],&local_128,local_120,local_120 + 1);
    }
    else {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if ((int)uVar4 < local_120[0]) {
        uVar13 = local_120[0] - uVar4;
        if ((int)(uVar13 | uVar4) < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (uVar13 != 0) {
          iVar5 = (local_120[0] - uVar13) - uVar4;
          iVar11 = local_120[0];
          if (iVar5 != 0) {
            memmove(local_128.Data + (int)uVar4,local_128.Data + (int)uVar4 + (int)uVar13,
                    (longlong)iVar5);
            iVar11 = local_120[0];
          }
          local_120[0] = iVar11 - uVar13;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&local_128,iVar11 - uVar13,local_120 + 1);
        }
      }
    }
    local_res8[0] = uVar4;
    bVar3 = FCompression::CompressMemory
                      (*(FName *)(*(longlong *)this + 0x30),local_128.Data,(int *)local_res8,
                       local_118.AllocatorInstance.Data,iVar6,COMPRESS_BiasMemory,0);
    iVar6 = local_118.ArrayMax;
    local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&local_118.AllocatorInstance,0,&local_118.ArrayMax);
    }
    if (bVar3) {
      if (((int)uVar4 < (int)local_res8[0]) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CompressedSize <= MaxCompressedSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                             ,0xac,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = local_res8[0];
      lVar12 = (longlong)(int)local_res8[0];
      if (local_120[0] < (int)local_res8[0]) {
        iVar11 = local_res8[0] - local_120[0];
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar11,&local_128,local_120,local_120 + 1);
        memset(local_128.Data + iVar6,0,(longlong)iVar11);
      }
      else {
        if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
        }
        if ((int)local_res8[0] < local_120[0]) {
          uVar13 = local_120[0] - local_res8[0];
          if ((int)(uVar13 | local_res8[0]) < 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (uVar13 != 0) {
            iVar11 = (local_120[0] - uVar4) - uVar13;
            iVar6 = local_120[0];
            if (iVar11 != 0) {
              memmove(local_128.Data + lVar12,local_128.Data + lVar12 + (int)uVar13,(longlong)iVar11
                     );
              iVar6 = local_120[0];
            }
            local_120[0] = iVar6 - uVar13;
          }
        }
      }
      if (5 < (byte)LogDumpGPUServices._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:___cdecl_`private:_void___cdecl_FDumpGPUHTTPUpload::StartUploadFile(int)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogDumpGPUServices);
      }
      if ((*(longlong *)((longlong)this + 0x18) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x80))
                (*(longlong **)((longlong)this + 0x18),&local_128);
      local_108 = *(longlong *)this;
      ::FString::FString(&local_100,(FString *)((longlong)this + 8));
      local_f0 = *(longlong *)((longlong)this + 0x18);
      local_e8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
      if (local_e8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(int *)((longlong)local_e8 + 8) = *(int *)((longlong)local_e8 + 8) + 1;
        UNLOCK();
      }
      local_78[0].StatIdPtr = (TStatIdData *)0x0;
      local_50 = FMemory::Malloc(0x30,8);
      *local_50 = (longlong)
                  &
                  ___7__TFunction_OwnedObject_V<lambda_1>__DB____R1_1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z_QEBA_XZ__00_00_Function_Private_Core_UE__6B_
      ;
      local_50[2] = 0;
      local_50[1] = local_108;
      local_50[2] = (longlong)local_100.Data.AllocatorInstance.Data;
      local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_50 + 3) = local_100.Data.ArrayNum;
      *(int *)((longlong)local_50 + 0x1c) = local_100.Data.ArrayMax;
      local_100.Data.ArrayNum = 0;
      local_100.Data.ArrayMax = 0;
      local_50[4] = local_f0;
      local_50[5] = (longlong)local_e8;
      local_e8 = (TReferenceControllerBase<1> *)0x0;
      local_f0 = 0;
      if (local_50 + 1 != (longlong *)0x0) {
        local_78[0].StatIdPtr =
             (TStatIdData *)
             UE::Core::Private::Function::
             TFunctionRefCaller<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l49::<lambda_1>,void>
             ::Call;
      }
      local_res10 = 1;
      local_res20 = &TStatId::TStatId_NAME_None;
      local_e0.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&>
                (&local_e0,(TUniqueFunction<void___cdecl(void)> *)&local_d8,local_78,
                 (Type *)&local_res20);
      if (local_78[0].StatIdPtr != (TStatIdData *)0x0) {
        plVar7 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar7 = local_50;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_d8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_d8 + 6);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*local_d8)(local_d8,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      goto LAB_14e2bfb1b;
    }
    if (2 < (byte)LogDumpGPUServices._0_1_) {
      pFVar8 = &`public:___cdecl_`private:_void___cdecl_FDumpGPUHTTPUpload::StartUploadFile(int)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l27::LOG_Static;
      goto LAB_14e2bfa74;
    }
  }
  else if (2 < (byte)LogDumpGPUServices._0_1_) {
    pFVar8 = &`public:___cdecl_`private:_void___cdecl_FDumpGPUHTTPUpload::StartUploadFile(int)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
              ::__l38::LOG_Static;
LAB_14e2bfa74:
    UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogDumpGPUServices);
  }
  local_80 = (undefined ***)0x0;
  local_98 = &
             ___7__TFunction_OwnedObject_V<lambda_2>__DD____R<lambda_1>__1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_90 = *(undefined8 *)this;
  local_res18 = 1;
  local_a8[0].StatIdPtr =
       (TStatIdData *)
       UE::Core::Private::Function::
       TFunctionRefCaller<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l51::<lambda_2>,void>
       ::Call;
  local_c8.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  local_d0 = &TStatId::TStatId_NAME_None;
  TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::FConstructor::
  ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&>
            (&local_c8,(TUniqueFunction<void___cdecl(void)> *)&local_c0,local_a8,(Type *)&local_d0);
  if (local_a8[0].StatIdPtr != (TStatIdData *)0x0) {
    pppuVar9 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar9 = local_80;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (local_c0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_c0 + 6);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*local_c0)(local_c0,1);
    }
  }
LAB_14e2bfb1b:
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// AbortDueToError @ 14e2bfe10

void __thiscall FDumpGPUHTTPUpload::AbortDueToError(FDumpGPUHTTPUpload *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bAbort == false) {
    this->bAbort = true;
  }
  if ((this->PendingHttpRequests).ArrayNum == 0) {
    Finish(this);
    return;
  }
  return;
}

// Finish @ 14e2c0410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDumpGPUHTTPUpload::Finish(FDumpGPUHTTPUpload *this)

{
  int iVar1;
  FDumpGPUHTTPUploadProvider *pFVar2;
  code *pcVar3;
  bool bVar4;
  IFileManager *pIVar5;
  IPlatformFile *pIVar6;
  ForElementType<FDumpGPUHTTPUpload_*> FVar7;
  FStaticBasicLogRecord *pFVar8;
  ForElementType<FDumpGPUHTTPUpload_*> FVar9;
  wchar_t *pwVar10;
  FDumpGPUHTTPUpload *pFVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FDumpGPUHTTPUpload *local_48;
  void *local_40 [3];
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                         ,0x112,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->PendingHttpRequests).ArrayNum != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingHttpRequests.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                         ,0x113,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar5 = IFileManager::Get();
  if ((this->DumpParamters).LocalPath.Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(this->DumpParamters).LocalPath.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0x100))(pIVar5,local_40,pwVar10);
  if (this->bAbort == false) {
    pIVar6 = IPlatformFile::GetPlatformPhysical();
    if ((this->DumpParamters).LocalPath.Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this->DumpParamters).LocalPath.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar6 + 0x1f8))(pIVar6,pwVar10);
    if (((byte)LogDumpGPUServices._0_1_ < 4) ||
       (UE::Logging::Private::BasicLog<4>
                  (&`private:_void___cdecl_FDumpGPUHTTPUpload::Finish(void)___ptr64'::__l20::
                    LOG_Static,(FLogCategoryBase *)&LogDumpGPUServices),
       (byte)LogDumpGPUServices._0_1_ < 4)) goto LAB_14e2c057b;
    pFVar8 = &`private:_void___cdecl_FDumpGPUHTTPUpload::Finish(void)___ptr64'::__l38::LOG_Static;
  }
  else {
    if (2 < (byte)LogDumpGPUServices._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`private:_void___cdecl_FDumpGPUHTTPUpload::Finish(void)___ptr64'::__l58::
                  LOG_Static,(FLogCategoryBase *)&LogDumpGPUServices);
    }
    if ((byte)LogDumpGPUServices._0_1_ < 4) goto LAB_14e2c057b;
    pFVar8 = &`private:_void___cdecl_FDumpGPUHTTPUpload::Finish(void)___ptr64'::__l76::LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar8,(FLogCategoryBase *)&LogDumpGPUServices);
LAB_14e2c057b:
  pFVar2 = this->Provider;
  FVar9 = (pFVar2->PendingUploads).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
    FVar9 = (ForElementType<FDumpGPUHTTPUpload_*>)&pFVar2->PendingUploads;
  }
  FVar7 = FVar9;
  while( true ) {
    if (FVar7 == (ForElementType<FDumpGPUHTTPUpload_*>)
                 ((longlong)FVar9 + (longlong)(pFVar2->PendingUploads).ArrayNum * 8))
    goto LAB_14e2c0749;
    if (*(FDumpGPUHTTPUpload **)FVar7 == this) break;
    FVar7 = (ForElementType<FDumpGPUHTTPUpload_*>)((longlong)FVar7 + 8);
  }
  local_48 = this;
  if ((((ulonglong)FVar9 <= &local_48) &&
      (&local_48 <
       (FDumpGPUHTTPUpload **)((longlong)FVar9 + (longlong)(pFVar2->PendingUploads).ArrayMax * 8)))
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
  iVar1 = (pFVar2->PendingUploads).ArrayNum;
  if (iVar1 != 0) {
    FVar9 = (pFVar2->PendingUploads).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
      FVar9 = (ForElementType<FDumpGPUHTTPUpload_*>)&pFVar2->PendingUploads;
    }
    iVar15 = 0;
    bVar4 = *(FDumpGPUHTTPUpload **)FVar9 != local_48;
    lVar12 = 0;
    pFVar11 = local_48;
    iVar13 = 0;
    do {
      iVar14 = iVar13;
      do {
        lVar12 = lVar12 + 1;
        iVar14 = iVar14 + 1;
        if (iVar1 <= lVar12) break;
      } while (bVar4 == (*(FDumpGPUHTTPUpload **)((longlong)FVar9 + lVar12 * 8) != pFVar11));
      if (bVar4 != false) {
        if (iVar15 != iVar13) {
          memmove((longlong *)((longlong)FVar9 + (longlong)iVar15 * 8),
                  (longlong *)((longlong)FVar9 + (longlong)iVar13 * 8),
                  (longlong)(iVar14 - iVar13) << 3);
          pFVar11 = local_48;
        }
        iVar15 = iVar15 + (iVar14 - iVar13);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar13 = iVar14;
    } while (lVar12 < iVar1);
    (pFVar2->PendingUploads).ArrayNum = iVar15;
  }
  pFVar2 = this->Provider;
  if (0 < (pFVar2->PendingUploads).ArrayNum) {
    FVar9 = (pFVar2->PendingUploads).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
      FVar9 = (ForElementType<FDumpGPUHTTPUpload_*>)&pFVar2->PendingUploads;
    }
    Start(*(FDumpGPUHTTPUpload **)FVar9);
  }
LAB_14e2c0749:
  _scalar_deleting_destructor_(this,1);
  if (local_40[0] != (void *)0x0) {
    FMemory::Free(local_40[0]);
  }
  return;
}

// ProcessHttpRequest @ 14e2c0970

void __thiscall
FDumpGPUHTTPUpload::ProcessHttpRequest
          (FDumpGPUHTTPUpload *this,TSharedPtr<IHttpRequest,1> *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar3;
  ulong64 uVar4;
  FString local_20;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1->Object + 0xf0))();
  ::FString::FString(&local_20,param_2);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(lpCriticalSection + 1));
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__1__ProcessHttpRequest_FDumpGPUHTTPUpload__AEAAX0AEBVFString___Z___V__6B_
    ;
    puVar3[3] = this;
    ::FString::FString((FString *)(puVar3 + 4),&local_20);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if (param_1->Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)param_1->Object + 0xe8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Start @ 14e2c0f50

void __thiscall FDumpGPUHTTPUpload::Start(FDumpGPUHTTPUpload *this)

{
  code *pcVar1;
  bool bVar2;
  IPlatformFile *pIVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  wchar_t *pwVar7;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                       ,0x4a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar3 = IPlatformFile::GetPlatformPhysical();
  if ((this->DumpParamters).LocalPath.Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->DumpParamters).LocalPath.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar3 + 0x1f0))(pIVar3,&this->Files,pwVar7,0);
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                       ,0xfd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bAbort == false) {
    if (this->NextFileToUpload < (this->Files).ArrayNum) {
      StartUploadFile(this,this->NextFileToUpload);
      this->NextFileToUpload = this->NextFileToUpload + 1;
    }
    if ((this->PendingHttpRequests).ArrayNum == 0) {
      Finish(this);
    }
  }
  else {
    AbortDueToError(this);
  }
  piVar6 = &this->NextFileToUpload;
  piVar5 = &(this->PendingHttpRequests).ArrayNum;
  piVar4 = &(this->Files).ArrayNum;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                       ,0xfd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bAbort == false) {
    if (*piVar6 < *piVar4) {
      StartUploadFile(this,*piVar6);
      *piVar6 = *piVar6 + 1;
    }
    if (*piVar5 == 0) {
      Finish(this);
    }
  }
  else {
    AbortDueToError(this);
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                       ,0xfd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bAbort == false) {
    if (*piVar6 < *piVar4) {
      StartUploadFile(this,*piVar6);
      *piVar6 = *piVar6 + 1;
    }
    if (*piVar5 == 0) {
      Finish(this);
    }
  }
  else {
    AbortDueToError(this);
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                       ,0xfd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bAbort == false) {
    if (*piVar6 < *piVar4) {
      StartUploadFile(this,*piVar6);
      *piVar6 = *piVar6 + 1;
    }
    if (*piVar5 == 0) {
      Finish(this);
    }
  }
  else {
    AbortDueToError(this);
  }
  return;
}

// StartNextFileUpload @ 14e2c1180

void __thiscall FDumpGPUHTTPUpload::StartNextFileUpload(FDumpGPUHTTPUpload *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                       ,0xfd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bAbort != false) {
    AbortDueToError(this);
    return;
  }
  if (this->NextFileToUpload < (this->Files).ArrayNum) {
    StartUploadFile(this,this->NextFileToUpload);
    this->NextFileToUpload = this->NextFileToUpload + 1;
  }
  if ((this->PendingHttpRequests).ArrayNum == 0) {
    Finish(this);
    return;
  }
  return;
}

// StartUploadFile @ 14e2c1200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDumpGPUHTTPUpload::StartUploadFile(FDumpGPUHTTPUpload *this,int param_1)

{
  int *piVar1;
  TArray<TSharedPtr<IHttpRequest,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  void *_Src;
  code *pcVar3;
  IHttpRequest *pIVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FHttpModule *pFVar10;
  undefined8 *puVar11;
  ForElementType<TSharedPtr<IHttpRequest,1>_> FVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  TStatIdData *local_res8;
  undefined4 local_res10;
  FConstructor local_res18;
  undefined8 *local_res20;
  IHttpRequest *local_158;
  TReferenceControllerBase<1> *pTStack_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FDumpGPUHTTPUpload *local_118;
  ForAnyElementType local_110;
  undefined8 local_108;
  IHttpRequest *local_100;
  TReferenceControllerBase<1> *local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  TStatId local_a8 [2];
  longlong local_98 [3];
  longlong *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  TSharedPtr<IHttpRequest,1> local_68;
  TSharedPtr<IHttpRequest,1> local_58;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                         ,0x70,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->Files).ArrayNum <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileId < Files.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                         ,0x71,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar18 = 0;
  if (param_1 < (this->Files).ArrayNum) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar19 = (this->Files).AllocatorInstance.Data;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = *(int *)(pFVar19 + (longlong)param_1 * 0x10 + 8);
  lVar16 = (longlong)local_148.Data.ArrayNum;
  _Src = *(void **)(pFVar19 + (longlong)param_1 * 0x10);
  if (local_148.Data.ArrayNum == 0) {
    local_148.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_148,local_148.Data.ArrayNum
               ,&local_148.Data.ArrayMax);
    memcpy(local_148.Data.AllocatorInstance.Data,_Src,lVar16 * 2);
  }
  if ((this->DumpParamters).LocalPath.Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(this->DumpParamters).LocalPath.Data.AllocatorInstance.Data;
  }
  FPaths::MakePathRelativeTo(&local_148,pwVar14);
  iVar8 = (this->DumpParamters).LocalPath.Data.ArrayNum;
  uVar18 = local_148.Data.ArrayNum - 1;
  if (local_148.Data.ArrayNum == 0) {
    uVar18 = 0;
  }
  local_138.Data.ArrayNum = iVar8;
  if ((iVar8 == 0) && (uVar18 != 0xffffffff)) {
    pFVar19 = (this->DumpParamters).LocalPath.Data.AllocatorInstance.Data;
    iVar7 = uVar18 + 2;
LAB_14e2c1388:
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar7 != 0) goto LAB_14e2c1393;
    local_138.Data.ArrayMax = 0;
  }
  else {
    pFVar19 = (this->DumpParamters).LocalPath.Data.AllocatorInstance.Data;
    iVar7 = uVar18 + 1;
    if (iVar8 == 0) goto LAB_14e2c1388;
LAB_14e2c1393:
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar17 = iVar8 + iVar7;
    if ((int)uVar17 < iVar8) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar17,0,(ForAnyElementType *)&local_138,iVar8,&local_138.Data.ArrayMax);
    if (iVar8 != 0) {
      memcpy(local_138.Data.AllocatorInstance.Data,pFVar19,(longlong)iVar8 * 2);
    }
  }
  ::FString::PathAppend(&local_138,(wchar_t *)local_148.Data.AllocatorInstance.Data,uVar18);
  pFVar10 = FHttpModule::Get();
  puVar11 = (undefined8 *)(**(code **)(pFVar10->_padding_ + 0x40))(pFVar10,local_78);
  local_158 = (IHttpRequest *)*puVar11;
  pTStack_150 = (TReferenceControllerBase<1> *)puVar11[1];
  if (pTStack_150 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_150->SharedReferenceCount = (atomic<int>)((int)pTStack_150->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  FVar12 = (this->PendingHttpRequests).AllocatorInstance.SecondaryData;
  pTVar2 = &this->PendingHttpRequests;
  if (FVar12 == (ForElementType<TSharedPtr<IHttpRequest,1>_>)0x0) {
    FVar12 = (ForElementType<TSharedPtr<IHttpRequest,1>_>)pTVar2;
  }
  if ((((ulonglong)FVar12 <= &local_158) &&
      (&local_158 <
       (IHttpRequest **)((longlong)(this->PendingHttpRequests).ArrayMax * 0x10 + (longlong)FVar12)))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (this->PendingHttpRequests).ArrayNum;
  piVar1 = &(this->PendingHttpRequests).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<IHttpRequest,1>_>_>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PendingHttpRequests).ArrayNum = iVar8 + 1;
  FVar12 = (this->PendingHttpRequests).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<TSharedPtr<IHttpRequest,1>_>)0x0) {
    FVar12 = (ForElementType<TSharedPtr<IHttpRequest,1>_>)pTVar2;
  }
  puVar11 = (undefined8 *)((longlong)FVar12 + (longlong)iVar8 * 0x10);
  *puVar11 = local_158;
  puVar11[1] = pTStack_150;
  if (pTStack_150 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_150->SharedReferenceCount = (atomic<int>)((int)pTStack_150->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_158 == (IHttpRequest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = local_158;
  iVar7 = (this->DumpUploadURL).Data.ArrayNum;
  pcVar3 = *(code **)(*(longlong *)local_158 + 0x68);
  iVar8 = local_148.Data.ArrayNum + -1;
  if (local_148.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  local_128.Data.ArrayNum = iVar7;
  if ((iVar7 == 0) && (iVar8 != -1)) {
    pFVar19 = (this->DumpUploadURL).Data.AllocatorInstance.Data;
    iVar9 = iVar8 + 2;
LAB_14e2c1587:
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar9 != 0) goto LAB_14e2c1591;
    local_128.Data.ArrayMax = 0;
  }
  else {
    pFVar19 = (this->DumpUploadURL).Data.AllocatorInstance.Data;
    iVar9 = iVar8 + 1;
    if (iVar7 == 0) goto LAB_14e2c1587;
LAB_14e2c1591:
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar18 = iVar7 + iVar9;
    if ((int)uVar18 < iVar7) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar18,0,(ForAnyElementType *)&local_128,iVar7,&local_128.Data.ArrayMax);
    if (iVar7 != 0) {
      memcpy(local_128.Data.AllocatorInstance.Data,pFVar19,(longlong)iVar7 * 2);
    }
  }
  ::FString::PathAppend(&local_128,(wchar_t *)local_148.Data.AllocatorInstance.Data,iVar8);
  (*pcVar3)(pIVar4,&local_128);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if ((local_158 == (IHttpRequest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = local_158;
  pcVar3 = *(code **)(*(longlong *)local_158 + 0x60);
  ::FString::FString(&local_f0,L"PUT");
  (*pcVar3)(pIVar4,&local_f0);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if ((local_158 == (IHttpRequest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = local_158;
  pcVar3 = *(code **)(*(longlong *)local_158 + 0xb0);
  ::FString::FString(&local_d0,L"application/octet-stream");
  ::FString::FString(&local_e0,L"Content-Type");
  (*pcVar3)(pIVar4,&local_e0,&local_d0);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_148.Data.ArrayNum != 0) {
    FVar13.Data = local_148.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"Base/DumpService.json");
  if (iVar8 == 0) {
    IDumpGPUUploadServiceProvider::FDumpParameters::DumpServiceParametersFileContent
              (&this->DumpParamters,&local_c0);
    if ((local_158 == (IHttpRequest *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)local_158 + 0x90))(local_158,&local_c0);
    local_68.Object = local_158;
    local_68.SharedReferenceCount.ReferenceController = pTStack_150;
    if (pTStack_150 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_150->SharedReferenceCount = (atomic<int>)((int)pTStack_150->SharedReferenceCount + 1);
      UNLOCK();
    }
    ProcessHttpRequest(this,&local_68,&local_148);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((this->DumpParamters).CompressionName != (FName)0x0) {
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_148.Data.ArrayNum != 0) {
        FVar13.Data = local_148.Data.AllocatorInstance.Data;
      }
      if (*(int *)&(this->DumpParamters).CompressionFiles.field_0x8 == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = *(wchar_t **)&(this->DumpParamters).CompressionFiles;
      }
      bVar5 = FWildcardString::IsMatch(pwVar14,(wchar_t *)FVar13.Data);
      FVar13.Data = local_148.Data.AllocatorInstance.Data;
      if (bVar5) {
        lVar16 = (longlong)local_148.Data.ArrayNum;
        local_110.Data = (FScriptContainerElement *)0x0;
        local_108 = CONCAT44(local_108._4_4_,local_148.Data.ArrayNum);
        local_118 = this;
        if (local_148.Data.ArrayNum == 0) {
          local_108 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_148.Data.ArrayNum,0,&local_110,local_148.Data.ArrayNum,
                     (int *)((longlong)&local_108 + 4));
          memcpy(local_110.Data,FVar13.Data,lVar16 * 2);
        }
        local_100 = local_158;
        local_f8 = pTStack_150;
        if (pTStack_150 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_150->SharedReferenceCount =
               (atomic<int>)((int)pTStack_150->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8[0].StatIdPtr = (TStatIdData *)0x0;
        local_80 = FMemory::Malloc(0x30,8);
        *local_80 = (longlong)
                    &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z__00_00_Function_Private_Core_UE__6B_
        ;
        local_80[2] = 0;
        local_80[1] = (longlong)local_118;
        local_80[2] = (longlong)local_110.Data;
        local_110.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(local_80 + 3) = (undefined4)local_108;
        *(undefined4 *)((longlong)local_80 + 0x1c) = local_108._4_4_;
        local_108 = 0;
        local_80[4] = (longlong)local_100;
        local_80[5] = (longlong)local_f8;
        local_f8 = (TReferenceControllerBase<1> *)0x0;
        local_100 = (IHttpRequest *)0x0;
        if (local_80 + 1 != (longlong *)0x0) {
          local_a8[0].StatIdPtr =
               (TStatIdData *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>,void>::
               Call;
        }
        local_res10 = 0x8ff;
        local_res8 = &TStatId::TStatId_NAME_None;
        local_res18.Prerequisites =
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)0x0;
        TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::FConstructor::
        ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&>
                  (&local_res18,(TUniqueFunction<void___cdecl(void)> *)&local_res20,local_a8,
                   (Type *)&local_res8);
        if (local_a8[0].StatIdPtr != (TStatIdData *)0x0) {
          plVar15 = local_98;
          if (local_80 != (longlong *)0x0) {
            plVar15 = local_80;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_res20 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_res20 + 6);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)*local_res20)(local_res20,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8);
        if (local_110.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data);
        }
        goto LAB_14e2c19ef;
      }
    }
    if ((local_158 == (IHttpRequest *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar6 = (**(code **)(*(longlong *)local_158 + 0x98))(local_158,&local_138);
    if (cVar6 == '\0') {
      AbortDueToError(this);
    }
    else {
      local_58.Object = local_158;
      local_58.SharedReferenceCount.ReferenceController = pTStack_150;
      if (pTStack_150 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_150->SharedReferenceCount =
             (atomic<int>)((int)pTStack_150->SharedReferenceCount + 1);
        UNLOCK();
      }
      ProcessHttpRequest(this,&local_58,&local_148);
    }
  }
LAB_14e2c19ef:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_150);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

