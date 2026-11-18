// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 7

// ~FUnrealMutableModelBulkReader @ 14ac50d60

void __thiscall
FUnrealMutableModelBulkReader::~FUnrealMutableModelBulkReader(FUnrealMutableModelBulkReader *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FUnrealMutableModelBulkReader__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FileHandlesCritical);
  DestructItems<FUnrealMutableModelBulkReader::FObjectData,int>
            ((FObjectData *)(this->Objects).AllocatorInstance.Data,(this->Objects).ArrayNum);
  pFVar1 = (this->Objects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FModelReader_Private_Mutable_UE__6B_;
  return;
}

// BeginReadBlock @ 14ac571e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

int __thiscall
FUnrealMutableModelBulkReader::BeginReadBlock
          (FUnrealMutableModelBulkReader *this,FModel *param_1,uint param_2,void *param_3,
          ulong64 param_4,EDataType param_5,TFunction<void___cdecl(bool)> *param_6)

{
  uint uVar1;
  code *pcVar2;
  TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
  *this_00;
  FName FVar3;
  atomic<int> aVar4;
  FSharedReferencer<1> FVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  atomic<int> aVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  FMutableStreamableBlock *pFVar15;
  code **ppcVar16;
  IBulkDataIORequest *pIVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  undefined8 *puVar20;
  TSharedPtr<IAsyncReadFileHandle,1> *pTVar21;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar22;
  IAsyncReadFileHandle *pIVar23;
  longlong lVar24;
  TReferenceControllerBase<1> *pTVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_MutableStreamingOps> FVar27;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  code **ppcVar28;
  longlong *plVar29;
  TReferenceControllerBase<1> *pTVar30;
  ForAnyElementType FVar31;
  FModel *pFVar32;
  FWindowsRecursiveMutex *lpCriticalSection;
  IBulkDataIORequest **ppIVar33;
  FScriptContainerElement *pFVar34;
  FScriptContainerElement *pFVar35;
  bool bVar36;
  bool bVar37;
  undefined1 auStackY_278 [32];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  FName local_200;
  FString local_1f8;
  FUnrealMutableModelBulkReader *local_1e8;
  FString local_1e0;
  uchar *local_1d0;
  IBulkDataIORequest *local_1c8;
  FSharedReferencer<1> local_1c0;
  TSharedPtr<IAsyncReadFileHandle,1> local_1b8;
  undefined8 local_1a8;
  FSharedReferencer<1> local_1a0;
  undefined8 local_198;
  TReferenceControllerBase<1> *pTStack_190;
  longlong local_188;
  FSharedReferencer<1> FStack_180;
  TReferenceControllerBase<1> *local_178;
  FSharedReferencer<1> FStack_170;
  TPairInitializer<int_const_&,FUnrealMutableModelBulkReader::FReadRequest_const_&> local_168;
  FMutableStreamableBlock *local_158;
  FName local_150;
  undefined8 local_148;
  FSharedReferencer<1> local_140;
  FStatMessage local_138;
  undefined4 *local_128;
  undefined8 *local_120;
  FName local_118 [2];
  code *local_108;
  code *local_f8;
  code *pcStack_f0;
  code *local_e8;
  code **local_e0;
  code *local_d8 [2];
  code *local_c8 [3];
  code **ppcStack_b0;
  longlong local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  code *local_78;
  undefined8 uStack_70;
  code *local_68 [2];
  undefined8 local_58;
  code **ppcStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_200 = (FName)param_4;
  bVar36 = -1 < CpuChannel->Enabled;
  local_208._0_4_ = param_2;
  local_1e8 = this;
  local_1d0 = param_3;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId283,"Mutable_FUnrealMutableModelBulkStreamer::OpenReadFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
               ,0x11b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId283);
  }
  if (6 < (byte)LogMutable._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  pFVar35 = (this->Objects).AllocatorInstance.Data;
  pFVar34 = pFVar35 + (longlong)(this->Objects).ArrayNum * 0xd0;
  for (; pFVar35 != pFVar34; pFVar35 = pFVar35 + 0xd0) {
    pTVar30 = *(TReferenceControllerBase<1> **)(pFVar35 + 8);
    pFVar32 = (FModel *)0x0;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar30->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar30 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ac572e4;
        }
        LOCK();
        aVar11 = pTVar30->SharedReferenceCount;
        bVar37 = aVar4 == aVar11;
        if (bVar37) {
          pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar11 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar11;
      } while (!bVar37);
      pFVar32 = *(FModel **)pFVar35;
    }
LAB_14ac572e4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
    if (pFVar32 == param_1) {
      if (pFVar35 != (FScriptContainerElement *)0x0) {
        pTVar30 = *(TReferenceControllerBase<1> **)(pFVar35 + 200);
        if (pTVar30 == (TReferenceControllerBase<1> *)0x0) goto LAB_14ac573a2;
        aVar4 = pTVar30->SharedReferenceCount;
        goto joined_r0x00014ac5738e;
      }
      break;
    }
  }
  if (param_6 != (TFunction<void___cdecl(bool)> *)0x0) {
    local_210[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)param_6);
    pcVar2 = *(code **)param_6;
    plVar29 = (longlong *)&param_6->field_0x10;
    if (*(longlong **)&param_6->field_0x28 != (longlong *)0x0) {
      plVar29 = *(longlong **)&param_6->field_0x28;
    }
    uVar14 = (**(code **)(*plVar29 + 8))();
    (*pcVar2)(uVar14,local_210);
  }
  iVar12 = -1;
  goto LAB_14ac5733a;
  while( true ) {
    LOCK();
    aVar11 = pTVar30->SharedReferenceCount;
    bVar37 = aVar4 == aVar11;
    if (bVar37) {
      pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
      aVar11 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar11;
    if (bVar37) break;
joined_r0x00014ac5738e:
    if (aVar4 == (atomic<int>)0x0) {
      pTVar30 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14ac573a2;
    }
  }
  this_00 = *(TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
              **)(pFVar35 + 0xc0);
  if (this_00 ==
      (TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
       *)0x0) {
LAB_14ac573a2:
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    if (param_6 != (TFunction<void___cdecl(bool)> *)0x0) {
      local_218[0] = 0;
      UE::Core::Private::Function::CheckCallable(*(void **)param_6);
      pcVar2 = *(code **)param_6;
      plVar29 = (longlong *)&param_6->field_0x10;
      if (*(longlong **)&param_6->field_0x28 != (longlong *)0x0) {
        plVar29 = *(longlong **)&param_6->field_0x28;
      }
      uVar14 = (**(code **)(*plVar29 + 8))();
      (*pcVar2)(uVar14,local_218);
    }
  }
  else {
    pFVar15 = TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
              ::Find(this_00,local_208._0_4_);
    local_158 = pFVar15;
    if (pFVar15 != (FMutableStreamableBlock *)0x0) {
      local_1e8->LastOperationID = local_1e8->LastOperationID + 1;
      local_208._4_4_ = local_1e8->LastOperationID;
      uVar1 = pFVar15->FileId;
      if (((int)uVar1 < 0) || (*(int *)&this_00[3].Pairs.Elements.field_0x8 <= (int)uVar1)) {
        local_198 = 0;
        pTStack_190 = (TReferenceControllerBase<1> *)0x0;
        local_188 = 0;
        FStack_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_178 = (TReferenceControllerBase<1> *)0x0;
        FStack_170.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (param_6 != (TFunction<void___cdecl(bool)> *)0x0) {
          local_a8 = *(longlong *)param_6;
          local_80 = (longlong *)0x0;
          if (local_a8 != 0) {
            puVar20 = (undefined8 *)&param_6->field_0x10;
            if (*(undefined8 **)&param_6->field_0x28 != (undefined8 *)0x0) {
              puVar20 = *(undefined8 **)&param_6->field_0x28;
            }
            (**(code **)*puVar20)(0,&local_98);
          }
          pTVar19 = ::operator_new(0x40);
          if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
            pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
            local_1a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            pTVar19->SharedReferenceCount = (atomic<int>)0x1;
            pTVar19->WeakReferenceCount = (atomic<int>)0x1;
            pTVar19->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_V__TFunction___A6AX_NPEAVIAsyncReadRequest___Z___00_SharedPointerInternals__6B_
            ;
            pTVar19[1]._padding_ = 0;
            pTVar19[3].SharedReferenceCount = (atomic<int>)0x0;
            pTVar19[3].WeakReferenceCount = (atomic<int>)0x0;
            puVar20 = FMemory::Malloc(0x40,0x10);
            *(undefined8 **)&pTVar19[3].SharedReferenceCount = puVar20;
            *puVar20 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::`93'::<lambda_3>,0,1>
                        ::_vftable_;
            plVar29 = puVar20 + 2;
            *plVar29 = local_a8;
            puVar20[7] = local_80;
            local_80 = (longlong *)0x0;
            puVar20[4] = local_98;
            puVar20[5] = uStack_90;
            puVar20[6] = local_88;
            if (*plVar29 != 0) {
              local_a8 = 0;
            }
            if (plVar29 != (longlong *)0x0) {
              pTVar19[1]._padding_ =
                   (longlong)
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l93::<lambda_3>,void,bool,IAsyncReadRequest_*>
                   ::Call;
            }
            pTVar18 = pTVar19 + 1;
            if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar37)) {
              pcVar2 = (code *)swi(3);
              iVar12 = (*pcVar2)();
              return iVar12;
            }
            LOCK();
            pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
            UNLOCK();
            local_1a0.ReferenceController = pTVar19;
          }
          FVar5.ReferenceController = local_1a0.ReferenceController;
          local_1a8 = 0;
          local_178 = pTVar18;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_170,&local_1a0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a0.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
          if (local_a8 != 0) {
            plVar29 = &local_98;
            if (local_80 != (longlong *)0x0) {
              plVar29 = local_80;
            }
            (**(code **)(*plVar29 + 0x10))();
          }
        }
        pFVar34 = (FScriptContainerElement *)0x0;
        lpCriticalSection = &local_1e8->FileHandlesCritical;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pTVar21 = TMapBase<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>_>
                  ::FindOrAddImpl<unsigned_int_const_&>
                            ((TMapBase<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>_>
                              *)(pFVar35 + 0x70),pFVar15->FileId,&pFVar15->FileId);
        if (pTVar21->Object == (IAsyncReadFileHandle *)0x0) {
          local_1f8.Data.AllocatorInstance.Data = pFVar34;
          ::FString::PrintfImpl(&local_1e0,L"%s-%08x.mut");
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          local_1f8.Data.AllocatorInstance.Data = local_1e0.Data.AllocatorInstance.Data;
          local_1f8.Data.ArrayNum = local_1e0.Data.ArrayNum;
          local_1f8.Data.ArrayMax = local_1e0.Data.ArrayMax;
          local_1e0.Data.ArrayNum = 0;
          local_1e0.Data.ArrayMax = 0;
          local_1e0.Data.AllocatorInstance.Data = pFVar34;
          if (pFVar15->Flags == 1) {
            ::FString::AppendChars(&local_1f8,L".high",5);
          }
          this_01 = FPlatformFileManager::Get();
          pIVar22 = FPlatformFileManager::GetPlatformFile(this_01);
          FVar31.Data = (FScriptContainerElement *)L"";
          if (local_1f8.Data.ArrayNum != 0) {
            FVar31.Data = local_1f8.Data.AllocatorInstance.Data;
          }
          pIVar23 = (IAsyncReadFileHandle *)
                    (**(code **)((longlong)*pIVar22 + 400))(pIVar22,FVar31.Data,0);
          local_1b8.Object = pIVar23;
          local_1b8.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
          if (local_1b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)0x1;
            (local_1b8.SharedReferenceCount.ReferenceController)->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_VIAsyncReadFileHandle__U__DefaultDeleter_VIAsyncReadFileHandle___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            (local_1b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)0x1;
            local_1b8.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pIVar23;
          }
          if (pTVar21 != &local_1b8) {
            pTVar21->Object = pIVar23;
            local_1b8.Object = (IAsyncReadFileHandle *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&pTVar21->SharedReferenceCount,&local_1b8.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1b8.SharedReferenceCount.ReferenceController);
          if (pTVar21->Object == (IAsyncReadFileHandle *)0x0) {
            if (1 < (byte)LogMutable._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
            }
            bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
                                ,0x1b4,L"");
            if (bVar37) {
              pcVar2 = (code *)swi(3);
              iVar12 = (*pcVar2)();
              return iVar12;
            }
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_170.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_180.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_190);
            iVar12 = -1;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar30);
            goto LAB_14ac5733a;
          }
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
        }
        pTVar19 = (pTVar21->SharedReferenceCount).ReferenceController;
        pIVar23 = pTVar21->Object;
        if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if ((pIVar23 == (IAsyncReadFileHandle *)0x0) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar37)) {
          pcVar2 = (code *)swi(3);
          iVar12 = (*pcVar2)();
          return iVar12;
        }
        lVar24 = (**(code **)((longlong)*pIVar23 + 0x10))
                           (pIVar23,local_158->Offset,local_200,StreamPriority);
        pTVar25 = ::operator_new(0x18);
        if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
          pTVar25->SharedReferenceCount = (atomic<int>)0x1;
          pTVar25->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VIAsyncReadRequest__U__DefaultDeleter_VIAsyncReadRequest___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          pTVar25->WeakReferenceCount = (atomic<int>)0x1;
          pTVar25[1]._padding_ = lVar24;
          pTVar18 = pTVar25;
        }
        local_148 = 0;
        local_188 = lVar24;
        local_140.ReferenceController = pTVar18;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_180,&local_140);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_140.ReferenceController);
        local_128 = (undefined4 *)(local_208 + 4);
        local_120 = &local_198;
        TSet<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>,TDefaultMapHashableKeyFuncs<int,FUnrealMutableModelBulkReader::FReadRequest,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<int_const_&,FUnrealMutableModelBulkReader::FReadRequest_const_&>_>
                  ((TSet<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>,TDefaultMapHashableKeyFuncs<int,FUnrealMutableModelBulkReader::FReadRequest,0>,FDefaultSetAllocator>
                    *)(pFVar35 + 0x20),&local_168,(bool *)&local_128);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_170.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_180.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_190);
      }
      else {
        uVar13 = 0;
        if ((int)uVar1 < *(int *)&this_00[3].Pairs.Elements.field_0x8) {
          uVar13 = ~uVar1 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar37)) {
          pcVar2 = (code *)swi(3);
          iVar12 = (*pcVar2)();
          return iVar12;
        }
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
        local_d8[0] = (code *)0x0;
        ppcStack_b0 = (code **)0x0;
        local_1e8 = (FUnrealMutableModelBulkReader *)
                    (*(longlong *)&this_00[3].Pairs.Elements + (longlong)(int)uVar1 * 0x28);
        if (param_6 != (TFunction<void___cdecl(bool)> *)0x0) {
          local_108 = *(code **)param_6;
          local_e0 = (code **)0x0;
          if (local_108 != (code *)0x0) {
            puVar20 = (undefined8 *)&param_6->field_0x10;
            if (*(undefined8 **)&param_6->field_0x28 != (undefined8 *)0x0) {
              puVar20 = *(undefined8 **)&param_6->field_0x28;
            }
            (**(code **)*puVar20)(puVar20,&local_f8);
          }
          local_78 = (code *)0x0;
          ppcVar16 = FMemory::Malloc(0x40,0x10);
          ppcStack_50 = ppcStack_b0;
          uVar10 = local_c8[1]._4_4_;
          uVar9 = local_c8[1]._0_4_;
          uVar8 = local_c8[0]._4_4_;
          uVar7 = local_c8[0]._0_4_;
          pcVar6 = local_d8[1];
          pcVar2 = local_d8[0];
          *ppcVar16 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::`87'::<lambda_2>,0,1>
                               ::_vftable_;
          ppcVar28 = ppcVar16 + 2;
          *ppcVar28 = local_108;
          ppcVar16[7] = (code *)local_e0;
          local_e0 = (code **)0x0;
          ppcVar16[4] = local_f8;
          ppcVar16[5] = pcStack_f0;
          ppcVar16[6] = local_e8;
          if (*ppcVar28 != (code *)0x0) {
            local_108 = (code *)0x0;
          }
          if (ppcVar28 != (code **)0x0) {
            local_78 = UE::Core::Private::Function::
                       TFunctionRefCaller<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l87::<lambda_2>,void,bool,IBulkDataIORequest_*>
                       ::Call;
          }
          local_d8[0] = local_78;
          local_d8[1] = (code *)uStack_70;
          local_c8[2]._0_4_ = (undefined4)local_58;
          local_c8[2]._4_4_ = local_58._4_4_;
          ppcStack_b0 = ppcVar16;
          local_c8[0]._0_4_ = local_68[0]._0_4_;
          local_c8[0]._4_4_ = local_68[0]._4_4_;
          local_c8[1]._0_4_ = local_68[1]._0_4_;
          local_c8[1]._4_4_ = local_68[1]._4_4_;
          local_78 = pcVar2;
          uStack_70 = pcVar6;
          local_68[0]._0_4_ = uVar7;
          local_68[0]._4_4_ = uVar8;
          local_68[1]._0_4_ = uVar9;
          local_68[1]._4_4_ = uVar10;
          if (pcVar2 != (code *)0x0) {
            ppcVar28 = local_68;
            if (ppcStack_50 != (code **)0x0) {
              ppcVar28 = ppcStack_50;
            }
            (**(code **)(*ppcVar28 + 0x10))();
          }
          if (local_108 != (code *)0x0) {
            ppcVar28 = &local_f8;
            if (local_e0 != (code **)0x0) {
              ppcVar28 = local_e0;
            }
            (**(code **)(*ppcVar28 + 0x10))();
          }
        }
        local_168.Value = (FReadRequest *)(local_208 + 4);
        TSet<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>,TDefaultMapHashableKeyFuncs<int,FUnrealMutableModelBulkReader::FReadRequest,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<int_const_&>_>
                  ((TSet<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>,TDefaultMapHashableKeyFuncs<int,FUnrealMutableModelBulkReader::FReadRequest,0>,FDefaultSetAllocator>
                    *)(pFVar35 + 0x20),(TKeyInitializer<int_const_&> *)local_208,
                   (bool *)&local_168.Value);
        ppIVar33 = (IBulkDataIORequest **)
                   (*(longlong *)(pFVar35 + 0x20) + (longlong)(int)local_208._0_4_ * 0x40 + 8);
        pIVar17 = FBulkData::CreateStreamingRequest
                            ((FBulkData *)local_1e8,pFVar15->Offset,(long64)local_200,StreamPriority
                             ,(TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)local_d8,
                             local_1d0);
        local_1c8 = pIVar17;
        pTVar18 = ::operator_new(0x18);
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          pTVar18->SharedReferenceCount = (atomic<int>)0x1;
          pTVar18->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VIBulkDataIORequest__U__DefaultDeleter_VIBulkDataIORequest___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          pTVar18->WeakReferenceCount = (atomic<int>)0x1;
          pTVar18[1]._padding_ = (longlong)pIVar17;
          pTVar19 = pTVar18;
        }
        local_1c0.ReferenceController = pTVar19;
        if (ppIVar33 != &local_1c8) {
          *ppIVar33 = pIVar17;
          local_1c8 = (IBulkDataIORequest *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(ppIVar33 + 1),&local_1c0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c0.ReferenceController);
        if (local_d8[0] != (code *)0x0) {
          ppcVar28 = local_d8 + 2;
          if (ppcStack_b0 != (code **)0x0) {
            ppcVar28 = ppcStack_b0;
          }
          (**(code **)(*ppcVar28 + 0x10))();
        }
      }
      FVar27 = StatPtr_STAT_MutableStreamingOps;
      if (StatPtr_STAT_MutableStreamingOps ==
          (FThreadSafeStaticStat<FStat_STAT_MutableStreamingOps>)0x0) {
        pFVar26 = ::FName::FName(local_118,"STAT_MutableStreamingOps");
        FVar27 = (FThreadSafeStaticStat<FStat_STAT_MutableStreamingOps>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableStreamingOps,*pFVar26,
                            L"Streaming Ops","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",true,
                            false,ST_int64,false,false,MCR_Invalid);
      }
      FVar3 = *(FName *)FVar27;
      local_200 = FVar3;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_02 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_02 == (FThreadStats *)0x0) {
          this_03 = FThreadStatsPool::Get();
          this_02 = FThreadStatsPool::GetFromPool(this_03);
        }
        local_138.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
        local_138.StatData.Pad[0] = '\x01';
        local_138.StatData.Pad[1] = '\0';
        local_138.StatData.Pad[2] = '\0';
        local_138.StatData.Pad[3] = '\0';
        local_138.StatData.Pad[4] = '\0';
        local_138.StatData.Pad[5] = '\0';
        local_138.StatData.Pad[6] = '\0';
        local_138.StatData.Pad[7] = '\0';
        local_150 = FVar3;
        local_138.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_02,&local_138);
        FStatsTrace::Add(&local_150,1);
        if (this_02->ScopeCount == 0) {
          FThreadStats::Flush(this_02,false,false);
          iVar12 = local_208._4_4_;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar30);
          goto LAB_14ac5733a;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_02,false,false);
        }
      }
      iVar12 = local_208._4_4_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
      goto LAB_14ac5733a;
    }
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    bVar37 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
                        ,0x13f,L"");
    if (bVar37) {
      pcVar2 = (code *)swi(3);
      iVar12 = (*pcVar2)();
      return iVar12;
    }
    if (param_6 != (TFunction<void___cdecl(bool)> *)0x0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(bool)>::
      operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(bool)>
                  *)param_6,false);
      iVar12 = -1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
      goto LAB_14ac5733a;
    }
  }
  iVar12 = -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
LAB_14ac5733a:
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar12;
}

// DoesBlockExist @ 14ac5b290

bool __thiscall
FUnrealMutableModelBulkReader::DoesBlockExist
          (FUnrealMutableModelBulkReader *this,FModel *param_1,uint param_2)

{
  uint uVar1;
  TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
  *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FMutableStreamableBlock *pFVar7;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  TReferenceControllerBase<1> *pTVar15;
  ForAnyElementType FVar16;
  bool bVar17;
  bool bVar18;
  FString local_38;
  FString local_28;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId230,"Mutable_FUnrealMutableModelBulkReader::DoesBlockExist",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
               ,0xe6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId230);
  }
  pFVar13 = (this->Objects).AllocatorInstance.Data;
  pFVar11 = pFVar13 + (longlong)(this->Objects).ArrayNum * 0xd0;
  if (pFVar13 != pFVar11) {
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
    do {
      pTVar12 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
      pTVar9 = pTVar12;
      pTVar10 = pTVar15;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar12->SharedReferenceCount;
        do {
          pTVar9 = pTVar15;
          if (aVar3 == (atomic<int>)0x0) goto LAB_14ac5b344;
          LOCK();
          aVar6 = pTVar12->SharedReferenceCount;
          bVar18 = aVar3 == aVar6;
          if (bVar18) {
            pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar6 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar6;
        } while (!bVar18);
        pTVar9 = pTVar12;
        pTVar10 = *(TReferenceControllerBase<1> **)pFVar13;
      }
LAB_14ac5b344:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      if (pTVar10 == (TReferenceControllerBase<1> *)param_1) {
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          pTVar12 = *(TReferenceControllerBase<1> **)(pFVar13 + 200);
          pTVar9 = pTVar12;
          if (pTVar12 == (TReferenceControllerBase<1> *)0x0) goto LAB_14ac5b3c6;
          aVar3 = pTVar12->SharedReferenceCount;
          goto joined_r0x00014ac5b3b3;
        }
        break;
      }
      pFVar13 = pFVar13 + 0xd0;
    } while (pFVar13 != pFVar11);
  }
  uVar5 = 0;
  goto LAB_14ac5b360;
  while( true ) {
    LOCK();
    aVar6 = pTVar12->SharedReferenceCount;
    bVar18 = aVar3 == aVar6;
    if (bVar18) {
      pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
      aVar6 = aVar3;
    }
    UNLOCK();
    aVar3 = aVar6;
    if (bVar18) break;
joined_r0x00014ac5b3b3:
    pTVar9 = pTVar15;
    if (aVar3 == (atomic<int>)0x0) goto LAB_14ac5b3c6;
  }
  this_00 = *(TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
              **)(pFVar13 + 0xc0);
  pTVar9 = pTVar12;
  if ((this_00 ==
       (TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
        *)0x0) ||
     (pFVar7 = TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
               ::Find(this_00,param_2), pFVar7 == (FMutableStreamableBlock *)0x0)) {
LAB_14ac5b3c6:
    uVar5 = 0;
    pTVar12 = pTVar9;
  }
  else if (((int)pFVar7->FileId < 0) ||
          (*(int *)&this_00[3].Pairs.Elements.field_0x8 <= (int)pFVar7->FileId)) {
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId272,
                 "Mutable_FUnrealMutableModelBulkReader::DoesBlockExist_File",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
                 ,0x110);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId272);
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::PrintfImpl(&local_28,L"%s-%08x.mut");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_38.Data.ArrayNum = local_28.Data.ArrayNum;
    local_38.Data.ArrayMax = local_28.Data.ArrayMax;
    if (pFVar7->Flags == 1) {
      ::FString::AppendChars(&local_38,L".high",5);
    }
    this_01 = FPlatformFileManager::Get();
    pIVar8 = FPlatformFileManager::GetPlatformFile(this_01);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar16.Data = local_38.Data.AllocatorInstance.Data;
    }
    uVar5 = (**(code **)((longlong)*pIVar8 + 0x78))(pIVar8,FVar16.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      goto LAB_14ac5b360;
    }
  }
  else {
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId256,
                 "Mutable_FUnrealMutableModelBulkReader::DoesBlockExist_Bulk",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
                 ,0x100);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId256);
    }
    uVar1 = pFVar7->FileId;
    uVar14 = 0;
    if ((int)uVar1 < *(int *)&this_00[3].Pairs.Elements.field_0x8) {
      uVar14 = ~uVar1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar5 = FBulkData::DoesExist
                      ((FBulkData *)
                       (*(longlong *)&this_00[3].Pairs.Elements + (longlong)(int)uVar1 * 0x28));
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      goto LAB_14ac5b360;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
LAB_14ac5b360:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar5;
}

// EndRead @ 14ac5b720

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FUnrealMutableModelBulkReader::EndRead(FUnrealMutableModelBulkReader *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  char cVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  uint local_res18 [4];
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId494,"Mutable_FUnrealMutableModelBulkStreamer::EndRead",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
               ,0x1ee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId494);
  }
  local_res18[0] = (this->Objects).ArrayNum;
  uVar7 = (ulonglong)(int)local_res18[0];
  cVar10 = true;
  pFVar14 = (this->Objects).AllocatorInstance.Data;
  pFVar12 = pFVar14 + 0x54;
  pFVar13 = pFVar14 + uVar7 * 0xd0;
  do {
    if ((this->Objects).ArrayNum != (int)uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FUnrealMutableModelBulkReader::FObjectData,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar13) {
      if (1 < (byte)LogMutable._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
                         ,0x21e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
LAB_14ac5b9fd:
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return (bool)cVar10;
    }
    if (*(int *)(pFVar12 + -0x2c) != *(int *)pFVar12) {
      pFVar9 = *(FScriptContainerElement **)(pFVar12 + 0xc);
      if (pFVar9 == (FScriptContainerElement *)0x0) {
        pFVar9 = pFVar12 + 4;
      }
      iVar5 = *(int *)(pFVar9 + (ulonglong)(*(int *)(pFVar12 + 0x14) - 1U & param_1) * 4);
      if (iVar5 != -1) {
        do {
          piVar8 = (int *)((longlong)iVar5 * 0x40 + *(longlong *)(pFVar12 + -0x34));
          if (*piVar8 == param_1) {
            plVar11 = (longlong *)(piVar8 + 2);
            if (piVar8 == (int *)0x0) {
              plVar11 = (longlong *)0x0;
            }
            if (plVar11 != (longlong *)0x0) {
              plVar1 = (longlong *)plVar11[2];
              if (plVar1 == (longlong *)0x0) {
                plVar1 = (longlong *)*plVar11;
                if (plVar1 != (longlong *)0x0) {
                  cVar10 = (**(code **)(*plVar1 + 0x10))(plVar1,0);
                  if ((*plVar11 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    uVar4 = (*pcVar2)();
                    return (bool)uVar4;
                  }
                  lVar6 = (**(code **)(*(longlong *)*plVar11 + 0x18))();
                  bVar3 = lVar6 == 0;
                  goto LAB_14ac5b944;
                }
LAB_14ac5b955:
                if (1 < (byte)LogMutable._0_1_) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                }
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("false",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
                                   ,0x210,L"");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
LAB_14ac5b997:
                cVar10 = false;
              }
              else {
                if (*(char *)((longlong)plVar1 + 0x41) == '\0') {
                  (**(code **)(*plVar1 + 0x10))(plVar1,0);
                  cVar10 = *(char *)((longlong)plVar1 + 0x41);
                }
                if ((plVar11[2] == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                plVar11 = (longlong *)plVar11[2];
                if ((((char)plVar11[8] == '\0') || (*(char *)((longlong)plVar11 + 0x44) != '\0')) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("bDataIsReady && !bSizeRequest",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                                       ,0x96,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                lVar6 = plVar11[1];
                if (lVar6 != 0) {
                  if (*(char *)((longlong)plVar11 + 0x43) != '\0') {
                    bVar3 = true;
                    goto LAB_14ac5b944;
                  }
                  if (*(char *)((longlong)plVar11 + 0x45) == '\0') {
                    (**(code **)(*plVar11 + 0x20))(plVar11);
                  }
                }
                plVar11[1] = 0;
                bVar3 = lVar6 == 0;
LAB_14ac5b944:
                if (cVar10 == '\0') goto LAB_14ac5b955;
                if (bVar3) goto LAB_14ac5b997;
                cVar10 = true;
              }
              local_res18[0] = param_1;
              if (*(int *)(pFVar14 + 0x28) != *(int *)(pFVar14 + 0x54)) {
                TSet<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>,TDefaultMapHashableKeyFuncs<int,FUnrealMutableModelBulkReader::FReadRequest,0>,FDefaultSetAllocator>
                ::RemoveImpl<int>((TSet<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>,TDefaultMapHashableKeyFuncs<int,FUnrealMutableModelBulkReader::FReadRequest,0>,FDefaultSetAllocator>
                                   *)(pFVar14 + 0x20),param_1,(int *)local_res18);
              }
              goto LAB_14ac5b9fd;
            }
            break;
          }
          iVar5 = piVar8[0xe];
        } while (iVar5 != -1);
      }
    }
    uVar7 = (ulonglong)local_res18[0];
    pFVar14 = pFVar14 + 0xd0;
    pFVar12 = pFVar12 + 0xd0;
  } while( true );
}

// EndStreaming @ 14ac5ba40

void __thiscall FUnrealMutableModelBulkReader::EndStreaming(FUnrealMutableModelBulkReader *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_5c;
  
  pFVar9 = (this->Objects).AllocatorInstance.Data;
  local_res18 = (this->Objects).ArrayNum;
  uVar6 = (ulonglong)(int)local_res18;
  pFVar17 = pFVar9 + 0x40;
  pFVar11 = pFVar9 + uVar6 * 0xd0;
LAB_14ac5ba8b:
  if ((this->Objects).ArrayNum != (int)uVar6) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<FUnrealMutableModelBulkReader::FObjectData,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_res8);
  }
  if (pFVar9 == pFVar11) {
    DestructItems<FUnrealMutableModelBulkReader::FObjectData,int>
              ((FObjectData *)(this->Objects).AllocatorInstance.Data,(this->Objects).ArrayNum);
    (this->Objects).ArrayNum = 0;
    if ((this->Objects).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,8,0,&(this->Objects).AllocatorInstance,0,&(this->Objects).ArrayMax);
    }
    return;
  }
  uVar12 = *(uint *)(pFVar17 + 8);
  iVar13 = 0;
  iVar15 = 0;
  uVar4 = 1;
  uVar5 = 0;
  if (uVar12 != 0) {
    pFVar16 = *(FScriptContainerElement **)pFVar17;
    if (*(FScriptContainerElement **)pFVar17 == (FScriptContainerElement *)0x0) {
      pFVar16 = pFVar17 + -0x10;
    }
    uVar5 = *(uint *)pFVar16;
    while (uVar5 == 0) {
      lVar7 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar5 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14ac5bb2f;
      uVar5 = *(uint *)(pFVar16 + (lVar7 + 1) * 4);
    }
    uVar4 = -uVar5 & uVar5;
    uVar6 = (ulonglong)uVar4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    uVar5 = iVar15 + -1 + local_res20;
    if ((int)uVar12 < (int)uVar5) {
      uVar5 = uVar12;
    }
  }
LAB_14ac5bb2f:
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar17 + -0x10);
  uVar10 = uVar12 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uVar4,iVar13);
  TStack_a0.CurrentBitIndex = uVar5;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  TStack_a0._28_4_ = local_5c;
  TStack_a0.BaseBitIndex = iVar15;
  uStack_80 = CONCAT44(uStack_ac,*(int *)(pFVar17 + -0x18) - *(int *)(pFVar17 + 0x14));
  iVar15 = (int)uVar12 >> 5;
  TStack_a0.Array = pTVar1;
  if (((int)uVar12 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = *(uint *)(pFVar17 + 8);
  if (uVar12 != uVar5) {
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar17;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar17 ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar7 = (longlong)iVar15;
      uVar10 = uVar10 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14ac5bc30;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar7 * 4 + 4);
    }
    uVar6 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar12 = (int)lVar7 + -1 + uVar10;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14ac5bc30:
  do {
    if (*(int *)(pFVar17 + -0x18) - *(int *)(pFVar17 + 0x14) != (int)uStack_80) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_a0.CurrentBitIndex == uVar12) && (TStack_a0.Array == pTVar1)) break;
    plVar8 = *(longlong **)
              ((longlong)TStack_a0.CurrentBitIndex * 0x40 + 0x18 + *(longlong *)(pFVar17 + -0x20));
    if (plVar8 == (longlong *)0x0) {
      plVar8 = *(longlong **)
                ((longlong)TStack_a0.CurrentBitIndex * 0x40 + 8 + *(longlong *)(pFVar17 + -0x20));
      if (plVar8 != (longlong *)0x0) goto LAB_14ac5bc83;
    }
    else if (*(char *)((longlong)plVar8 + 0x41) == '\0') {
LAB_14ac5bc83:
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
  pFVar9 = pFVar9 + 0xd0;
  pFVar17 = pFVar17 + 0xd0;
  uVar6 = (ulonglong)local_res18;
  goto LAB_14ac5ba8b;
}

// IsReadCompleted @ 14ac5e9f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FUnrealMutableModelBulkReader::IsReadCompleted(FUnrealMutableModelBulkReader *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId463,
               "Mutable_FUnrealMutableModelBulkStreamer::IsReadCompleted",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
               ,0x1cf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId463);
  }
  pFVar9 = (this->Objects).AllocatorInstance.Data;
  iVar1 = (this->Objects).ArrayNum;
  pFVar10 = pFVar9 + 0x54;
  pFVar11 = pFVar9 + (longlong)iVar1 * 0xd0;
LAB_14ac5ea70:
  do {
    if ((this->Objects).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FUnrealMutableModelBulkReader::FObjectData,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar11) {
      if (1 < (byte)LogMutable._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
                         ,0x1e7,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      uVar3 = 1;
LAB_14ac5eb6f:
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return (bool)uVar3;
    }
    if (*(int *)(pFVar10 + -0x2c) != *(int *)pFVar10) {
      pFVar8 = *(FScriptContainerElement **)(pFVar10 + 0xc);
      if (pFVar8 == (FScriptContainerElement *)0x0) {
        pFVar8 = pFVar10 + 4;
      }
      iVar5 = *(int *)(pFVar8 + (ulonglong)(*(int *)(pFVar10 + 0x14) - 1U & param_1) * 4);
      if (iVar5 == -1) goto LAB_14ac5eb06;
      do {
        piVar6 = (int *)((longlong)iVar5 * 0x40 + *(longlong *)(pFVar10 + -0x34));
        if (*piVar6 == param_1) {
          plVar7 = (longlong *)(piVar6 + 2);
          if (piVar6 == (int *)0x0) {
            plVar7 = (longlong *)0x0;
          }
          if (plVar7 == (longlong *)0x0) goto LAB_14ac5eb06;
          if (plVar7[2] == 0) {
            if ((longlong *)*plVar7 == (longlong *)0x0) goto LAB_14ac5eb06;
            uVar3 = (**(code **)(*(longlong *)*plVar7 + 8))();
          }
          else {
            uVar3 = *(undefined1 *)(plVar7[2] + 0x41);
          }
          goto LAB_14ac5eb6f;
        }
        iVar5 = piVar6[0xe];
      } while (iVar5 != -1);
      pFVar9 = pFVar9 + 0xd0;
      pFVar10 = pFVar10 + 0xd0;
      goto LAB_14ac5ea70;
    }
LAB_14ac5eb06:
    pFVar9 = pFVar9 + 0xd0;
    pFVar10 = pFVar10 + 0xd0;
  } while( true );
}

// PrepareStreamingForObject @ 14ac5f8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FUnrealMutableModelBulkReader::PrepareStreamingForObject
          (FUnrealMutableModelBulkReader *this,UCustomizableObject *param_1)

{
  TArray<FUnrealMutableModelBulkReader::FObjectData,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 *puVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  FModel *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  FUnrealMutableModelBulkReader *pFVar8;
  UCustomizableObject *this_01;
  undefined8 uVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  atomic<int> aVar14;
  int iVar15;
  UCustomizableObjectPrivate *pUVar16;
  TSharedPtr<UE::Mutable::Private::FModel,1> *pTVar17;
  UCustomizableObjectBulk *pUVar18;
  TSet<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
  *this_02;
  TReferenceControllerBase<1> *pTVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  FModel *pFVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_1b8 [32];
  TSharedPtr<FModelStreamableBulkData,1> local_168;
  FName local_158;
  FUnrealMutableModelBulkReader *local_150;
  UCustomizableObject *local_148;
  FName local_140;
  FString local_138;
  FString local_128;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  FModelStreamableBulkData *local_58;
  FWeakReferencer<1> local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_158 = (FName)((ulonglong)local_158 & 0xffffffff00000000);
  local_150 = this;
  local_148 = param_1;
  if (param_1 == (UCustomizableObject *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
                        ,0x40,L"");
    if (!bVar11) {
      return false;
    }
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  uVar20 = 0;
  if (0 < (this->Objects).ArrayNum) {
    this_00 = &this->Objects;
    lVar22 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar20 < (this->Objects).ArrayNum) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      this_02 = (TSet<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
                 *)((this_00->AllocatorInstance).Data + lVar22 + 0x70);
      bVar11 = 1 < this_02->HashSize;
      if (!bVar11) {
        TSet<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_02);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_02,0,*(int *)&(this_02->Elements).field_0x8);
      puVar1 = &(this_02->Elements).field_0xc;
      *(undefined4 *)&(this_02->Elements).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
      }
      *(undefined4 *)&(this_02->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_02->Elements).field_0x34 = 0;
      iVar15 = *(int *)&(this_02->Elements).field_0x2c;
      *(undefined4 *)&(this_02->Elements).field_0x28 = 0;
      if ((iVar15 < 0) || (0x80 < iVar15)) {
        *(undefined4 *)&(this_02->Elements).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this_02->Elements).field_0x10,0);
      }
      if (bVar11) {
        this_02->HashSize = 1;
        TSet<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
        ::Rehash(this_02);
      }
      uVar13 = 0;
      if ((int)uVar20 < (this->Objects).ArrayNum) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      pFVar21 = (this_00->AllocatorInstance).Data;
      pTVar19 = *(TReferenceControllerBase<1> **)(pFVar21 + lVar22 + 8);
      if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ac5fab4:
        uVar13 = 0;
        if ((int)uVar20 < (this->Objects).ArrayNum) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pFVar21 = (this_00->AllocatorInstance).Data;
        if (*(int *)(pFVar21 + lVar22 + 0x28) != *(int *)(pFVar21 + lVar22 + 0x54))
        goto LAB_14ac5fb9b;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19)
        ;
        uVar13 = 0;
        if ((int)uVar20 < (this->Objects).ArrayNum) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        TArray<FUnrealMutableModelBulkReader::FObjectData,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(this_00,uVar20);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xd0,8,&this_00->AllocatorInstance,(this->Objects).ArrayNum,
                   &(this->Objects).ArrayMax);
      }
      else {
        aVar4 = pTVar19->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar19 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14ac5fab4;
          }
          LOCK();
          aVar14 = pTVar19->SharedReferenceCount;
          bVar11 = aVar4 == aVar14;
          if (bVar11) {
            pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar14 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar14;
        } while (!bVar11);
        if (*(longlong *)(pFVar21 + lVar22) == 0) goto LAB_14ac5fab4;
LAB_14ac5fb9b:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19)
        ;
        uVar20 = uVar20 + 1;
        lVar22 = lVar22 + 0xd0;
      }
    } while ((int)uVar20 < (local_150->Objects).ArrayNum);
  }
  this_01 = local_148;
  pFVar21 = (local_150->Objects).AllocatorInstance.Data;
  pFVar24 = pFVar21 + (longlong)(local_150->Objects).ArrayNum * 0xd0;
  pFVar8 = local_150;
  for (; local_150 = pFVar8, pFVar21 != pFVar24; pFVar21 = pFVar21 + 0xd0) {
    pTVar19 = *(TReferenceControllerBase<1> **)(pFVar21 + 8);
    pFVar23 = (FModel *)0x0;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar19->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar19 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ac5fc14;
        }
        LOCK();
        aVar14 = pTVar19->SharedReferenceCount;
        bVar11 = aVar4 == aVar14;
        if (bVar11) {
          pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar14 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar14;
      } while (!bVar11);
      pFVar23 = *(FModel **)pFVar21;
    }
LAB_14ac5fc14:
    pUVar16 = UCustomizableObject::GetPrivate(this_01);
    pTVar17 = UCustomizableObjectPrivate::GetModel(pUVar16);
    pFVar5 = pTVar17->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    if (pFVar23 == pFVar5) {
      return true;
    }
    pFVar8 = local_150;
  }
  local_cc = 0x80;
  local_118._8_8_ = (TReferenceControllerBase<1> *)0x0;
  local_118._16_8_ = (FScriptContainerElement *)0x0;
  local_118._24_4_ = 0;
  local_118._28_4_ = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8 = 0xffffffff;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  pUVar16 = UCustomizableObject::GetPrivate(this_01);
  pTVar17 = UCustomizableObjectPrivate::GetModel(pUVar16);
  uVar9 = local_118._8_8_;
  pTVar19 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_118._0_8_ = pTVar17->Object;
  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar19->WeakReferenceCount = (atomic<int>)((int)pTVar19->WeakReferenceCount + 1);
    UNLOCK();
  }
  if ((TReferenceControllerBase<1> *)local_118._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = (atomic<int> *)(local_118._8_8_ + 0xc);
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      plVar7 = (longlong *)local_118._8_8_;
      local_118._8_8_ = pTVar19;
      (**(code **)(*plVar7 + 8))(uVar9,1);
      pTVar19 = (TReferenceControllerBase<1> *)local_118._8_8_;
    }
  }
  local_118._8_8_ = pTVar19;
  pUVar16 = UCustomizableObject::GetPrivate(this_01);
  UCustomizableObjectPrivate::GetModelStreamableBulkData(pUVar16,&local_168,false);
  FVar10.ReferenceController = local_50.ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_58 = local_168.Object;
  local_50.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(FVar10.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((FVar10.ReferenceController)->_padding_ + 8))(FVar10.ReferenceController);
    }
  }
  if (local_168.Object != (FModelStreamableBulkData *)0x0) {
    if ((local_168.Object == (FModelStreamableBulkData *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
    if (*(int *)&((local_168.Object)->ModelStreamables).field_0x8 !=
        *(int *)&((local_168.Object)->ModelStreamables).field_0x34) {
      if (((local_168.Object)->StreamableBulkData).ArrayNum != 0) {
LAB_14ac5fe2e:
        pFVar21 = (pFVar8->Objects).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)local_118) &&
            ((FScriptContainerElement *)local_118 <
             pFVar21 + (longlong)(pFVar8->Objects).ArrayMax * 0xd0)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        iVar15 = (pFVar8->Objects).ArrayNum;
        piVar3 = &(pFVar8->Objects).ArrayMax;
        if (iVar15 == *piVar3) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8d0,&(pFVar8->Objects).AllocatorInstance,piVar3);
        }
        (pFVar8->Objects).ArrayNum = iVar15 + 1;
        FObjectData::FObjectData
                  ((FObjectData *)
                   ((pFVar8->Objects).AllocatorInstance.Data + (longlong)iVar15 * 0xd0),
                   (FObjectData *)local_118);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
        if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &(local_50.ReferenceController)->WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)((local_50.ReferenceController)->_padding_ + 8))();
          }
        }
        local_60 = 0;
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_a8,0,local_a8._8_4_);
        iVar15 = SUB84(local_a8._8_8_,4);
        local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
        if (iVar15 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
        }
        local_78 = 0xffffffff;
        local_74 = 0;
        local_80 = 0;
        if (0x80 < local_7c) {
          local_7c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
        }
        if (local_88 != (void *)0x0) {
          FMemory::Free(local_88);
        }
        if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_a8._0_8_);
        }
        local_b0 = 0;
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_f8,0,local_f8._8_4_);
        iVar15 = SUB84(local_f8._8_8_,4);
        local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
        if (iVar15 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
        }
        local_c8 = 0xffffffff;
        local_c4 = 0;
        local_d0 = 0;
        if (0x80 < local_cc) {
          local_cc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
        }
        if (local_d8 != (void *)0x0) {
          FMemory::Free(local_d8);
        }
        if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_f8._0_8_);
        }
        if ((FScriptContainerElement *)local_118._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118._16_8_);
        }
        if ((TReferenceControllerBase<1> *)local_118._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = (atomic<int> *)(local_118._8_8_ + 0xc);
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(*(longlong *)local_118._8_8_ + 8))(local_118._8_8_,1);
          }
        }
        return true;
      }
      pUVar16 = UCustomizableObject::GetPrivate(this_01);
      pUVar18 = UCustomizableObjectPrivate::GetStreamableBulkData(pUVar16);
      if (pUVar18 != (UCustomizableObjectBulk *)0x0) {
        ::FString::operator=((FString *)(local_118 + 0x10),&pUVar18->BulkFilePrefix);
        goto LAB_14ac5fe2e;
      }
      if (2 < (byte)LogMutable._0_1_) {
        local_158 = (FName)this_01->_padding_;
        ::FName::ToString(&local_158,&local_138);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14ac600b8;
    }
  }
  if (2 < (byte)LogMutable._0_1_) {
    local_140 = (FName)this_01->_padding_;
    ::FName::ToString(&local_140,&local_128);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("false",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableModelDiskStreamer.cpp"
                      ,0x68,L"");
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
LAB_14ac600b8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_50.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_50.ReferenceController)->_padding_ + 8))();
    }
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  iVar15 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_f8,0,local_f8._8_4_);
  iVar15 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  if ((FScriptContainerElement *)local_118._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._16_8_);
  }
  if ((TReferenceControllerBase<1> *)local_118._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = (atomic<int> *)(local_118._8_8_ + 0xc);
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_118._8_8_ + 8))(local_118._8_8_,1);
    }
  }
  return false;
}

