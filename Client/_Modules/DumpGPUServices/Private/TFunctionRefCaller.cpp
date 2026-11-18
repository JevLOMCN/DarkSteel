// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DumpGPUServices
// Functions: 3

// Call @ 14e2bfe80

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>,void>::Call
          (void *param_1)

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
  uint auStackX_8 [2];
  undefined4 uStackX_10;
  undefined4 uStackX_18;
  TStatIdData *pTStackX_20;
  ForAnyElementType FStack_128;
  int aiStack_120 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> TStack_118;
  longlong lStack_108;
  FString FStack_100;
  longlong lStack_f0;
  TReferenceControllerBase<1> *pTStack_e8;
  FConstructor FStack_e0;
  undefined8 *puStack_d8;
  TStatIdData *pTStack_d0;
  FConstructor FStack_c8;
  undefined8 *puStack_c0;
  FString FStack_b8;
  TStatId aTStack_a8 [2];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined ***pppuStack_80;
  TStatId aTStack_78 [2];
  longlong alStack_68 [3];
  longlong *plStack_50;
  
  ::operator/(&FStack_b8,(FString *)(*(longlong *)param_1 + 0x10),(FString *)((longlong)param_1 + 8)
             );
  FStack_128.Data = (FScriptContainerElement *)0x0;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (FStack_b8.Data.ArrayNum != 0) {
    FVar10.Data = FStack_b8.Data.AllocatorInstance.Data;
  }
  aiStack_120[0] = 0;
  aiStack_120[1] = 0;
  TStack_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_118.ArrayNum = 0;
  TStack_118.ArrayMax = 0;
  bVar3 = FFileHelper::LoadFileToArray(&TStack_118,(wchar_t *)FVar10.Data,0);
  if (bVar3) {
    iVar6 = TStack_118.ArrayNum;
    uVar4 = FCompression::CompressMemoryBound
                      (*(FName *)(*(longlong *)param_1 + 0x30),TStack_118.ArrayNum,
                       COMPRESS_BiasMemory,0);
    if (aiStack_120[0] < (int)uVar4) {
      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar4 - aiStack_120[0],&FStack_128,aiStack_120,aiStack_120 + 1);
    }
    else {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        OnInvalidArrayNum((ulonglong)uVar4);
      }
      if ((int)uVar4 < aiStack_120[0]) {
        uVar13 = aiStack_120[0] - uVar4;
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
          iVar5 = (aiStack_120[0] - uVar13) - uVar4;
          iVar11 = aiStack_120[0];
          if (iVar5 != 0) {
            memmove(FStack_128.Data + (int)uVar4,FStack_128.Data + (int)uVar4 + (int)uVar13,
                    (longlong)iVar5);
            iVar11 = aiStack_120[0];
          }
          aiStack_120[0] = iVar11 - uVar13;
          ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&FStack_128,iVar11 - uVar13,aiStack_120 + 1);
        }
      }
    }
    auStackX_8[0] = uVar4;
    bVar3 = FCompression::CompressMemory
                      (*(FName *)(*(longlong *)param_1 + 0x30),FStack_128.Data,(int *)auStackX_8,
                       TStack_118.AllocatorInstance.Data,iVar6,COMPRESS_BiasMemory,0);
    iVar6 = TStack_118.ArrayMax;
    TStack_118._8_8_ = TStack_118._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&TStack_118.AllocatorInstance,0,&TStack_118.ArrayMax);
    }
    if (bVar3) {
      if (((int)uVar4 < (int)auStackX_8[0]) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CompressedSize <= MaxCompressedSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                             ,0xac,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = auStackX_8[0];
      lVar12 = (longlong)(int)auStackX_8[0];
      if (aiStack_120[0] < (int)auStackX_8[0]) {
        iVar11 = auStackX_8[0] - aiStack_120[0];
        iVar6 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar11,&FStack_128,aiStack_120,aiStack_120 + 1);
        memset(FStack_128.Data + iVar6,0,(longlong)iVar11);
      }
      else {
        if ((int)auStackX_8[0] < 0) {
                    /* WARNING: Subroutine does not return */
          OnInvalidArrayNum((ulonglong)auStackX_8[0]);
        }
        if ((int)auStackX_8[0] < aiStack_120[0]) {
          uVar13 = aiStack_120[0] - auStackX_8[0];
          if ((int)(uVar13 | auStackX_8[0]) < 0) {
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
            iVar11 = (aiStack_120[0] - uVar4) - uVar13;
            iVar6 = aiStack_120[0];
            if (iVar11 != 0) {
              memmove(FStack_128.Data + lVar12,FStack_128.Data + lVar12 + (int)uVar13,
                      (longlong)iVar11);
              iVar6 = aiStack_120[0];
            }
            aiStack_120[0] = iVar6 - uVar13;
          }
        }
      }
      if (5 < (byte)LogDumpGPUServices._0_1_) {
        Logging::Private::BasicLog<6>
                  (&`public:___cdecl_`private:_void___cdecl_FDumpGPUHTTPUpload::StartUploadFile(int)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogDumpGPUServices);
      }
      if ((*(longlong *)((longlong)param_1 + 0x18) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x80))
                (*(longlong **)((longlong)param_1 + 0x18),&FStack_128);
      lStack_108 = *(longlong *)param_1;
      ::FString::FString(&FStack_100,(FString *)((longlong)param_1 + 8));
      lStack_f0 = *(longlong *)((longlong)param_1 + 0x18);
      pTStack_e8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
      if (pTStack_e8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(int *)((longlong)pTStack_e8 + 8) = *(int *)((longlong)pTStack_e8 + 8) + 1;
        UNLOCK();
      }
      aTStack_78[0].StatIdPtr = (TStatIdData *)0x0;
      plStack_50 = FMemory::Malloc(0x30,8);
      *plStack_50 = (longlong)
                    &
                    ___7__TFunction_OwnedObject_V<lambda_1>__DB____R1_1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z_QEBA_XZ__00_00_Function_Private_Core_UE__6B_
      ;
      plStack_50[2] = 0;
      plStack_50[1] = lStack_108;
      plStack_50[2] = (longlong)FStack_100.Data.AllocatorInstance.Data;
      FStack_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(plStack_50 + 3) = FStack_100.Data.ArrayNum;
      *(int *)((longlong)plStack_50 + 0x1c) = FStack_100.Data.ArrayMax;
      FStack_100.Data.ArrayNum = 0;
      FStack_100.Data.ArrayMax = 0;
      plStack_50[4] = lStack_f0;
      plStack_50[5] = (longlong)pTStack_e8;
      pTStack_e8 = (TReferenceControllerBase<1> *)0x0;
      lStack_f0 = 0;
      if (plStack_50 + 1 != (longlong *)0x0) {
        aTStack_78[0].StatIdPtr =
             (TStatIdData *)
             TFunctionRefCaller<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l49::<lambda_1>,void>
             ::Call;
      }
      uStackX_10 = 1;
      pTStackX_20 = &TStatId::TStatId_NAME_None;
      FStack_e0.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&>
                (&FStack_e0,(TUniqueFunction<void___cdecl(void)> *)&puStack_d8,aTStack_78,
                 (Type *)&pTStackX_20);
      if (aTStack_78[0].StatIdPtr != (TStatIdData *)0x0) {
        plVar7 = alStack_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar7 = plStack_50;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (puStack_d8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puStack_d8 + 6);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*puStack_d8)(puStack_d8,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_e8);
      if (FStack_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_100.Data.AllocatorInstance.Data);
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
    Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogDumpGPUServices);
  }
  pppuStack_80 = (undefined ***)0x0;
  ppuStack_98 = &
                ___7__TFunction_OwnedObject_V<lambda_2>__DD____R<lambda_1>__1__StartUploadFile_FDumpGPUHTTPUpload__AEAAXH_Z_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  uStack_90 = *(undefined8 *)param_1;
  uStackX_18 = 1;
  aTStack_a8[0].StatIdPtr =
       (TStatIdData *)
       TFunctionRefCaller<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l51::<lambda_2>,void>
       ::Call;
  FStack_c8.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  pTStack_d0 = &TStatId::TStatId_NAME_None;
  TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::FConstructor::
  ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&>
            (&FStack_c8,(TUniqueFunction<void___cdecl(void)> *)&puStack_c0,aTStack_a8,
             (Type *)&pTStack_d0);
  if (aTStack_a8[0].StatIdPtr != (TStatIdData *)0x0) {
    pppuVar9 = &ppuStack_98;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_80;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (puStack_c0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStack_c0 + 6);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*puStack_c0)(puStack_c0,1);
    }
  }
LAB_14e2bfb1b:
  if (TStack_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_118.AllocatorInstance.Data);
  }
  if (FStack_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_128.Data);
  }
  if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14e2bfe90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l49::<lambda_1>,void>
::Call(void *param_1)

{
  FDumpGPUHTTPUpload *this;
  TSharedPtr<IHttpRequest,1> local_18;
  
  local_18.Object = *(IHttpRequest **)((longlong)param_1 + 0x18);
  this = *(FDumpGPUHTTPUpload **)param_1;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FDumpGPUHTTPUpload::ProcessHttpRequest(this,&local_18,(FString *)((longlong)param_1 + 8));
  return;
}

// Call @ 14e2bfed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l51::<lambda_2>,void>
::Call(void *param_1)

{
  FDumpGPUHTTPUpload::AbortDueToError(*(FDumpGPUHTTPUpload **)param_1);
  return;
}

