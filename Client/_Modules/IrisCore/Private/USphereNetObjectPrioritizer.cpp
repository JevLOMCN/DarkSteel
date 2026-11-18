// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 18

// StaticClass @ 14429e810

UClass * __cdecl USphereNetObjectPrioritizer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereNetObjectPrioritizer",
               &Z_Registration_Info_UClass_USphereNetObjectPrioritizer.InnerSingleton,
               StaticRegisterNativesUSphereNetObjectPrioritizer,0x68,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<USphereNetObjectPrioritizer>,local_res8,
               ULocationBasedNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereNetObjectPrioritizer.InnerSingleton;
}

// USphereNetObjectPrioritizer @ 1442af560

USphereNetObjectPrioritizer * __thiscall
USphereNetObjectPrioritizer::USphereNetObjectPrioritizer
          (USphereNetObjectPrioritizer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,0);
  this->_padding_ = (longlong)&___7USphereNetObjectPrioritizer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Config).Object = (UObject *)0x0;
  return this;
}

// USphereNetObjectPrioritizer @ 1442af5c0

USphereNetObjectPrioritizer * __thiscall
USphereNetObjectPrioritizer::USphereNetObjectPrioritizer(USphereNetObjectPrioritizer *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,0);
  this->_padding_ = (longlong)&___7USphereNetObjectPrioritizer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Config).Object = (UObject *)0x0;
  return this;
}

// ~USphereNetObjectPrioritizer @ 1442b0eb0

void __thiscall
USphereNetObjectPrioritizer::~USphereNetObjectPrioritizer(USphereNetObjectPrioritizer *this)

{
  UObject *pUVar1;
  
  this->_padding_ = (longlong)&___7USphereNetObjectPrioritizer__6B_;
  pUVar1 = (this->Config).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Config).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)&this->_padding_);
  this->_padding_ = (longlong)&___7UNetObjectPrioritizer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Deinit @ 1442bb4c0

void __thiscall USphereNetObjectPrioritizer::Deinit(USphereNetObjectPrioritizer *this)

{
  TStrongObjectPtr<USphereNetObjectPrioritizerConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  undefined8 local_18 [2];
  
  pTVar1 = &this->Config;
  this->_padding_ = 0;
  if (pTVar1 != (TStrongObjectPtr<USphereNetObjectPrioritizerConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)local_18) {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)0x0;
  }
  return;
}

// FinishBatch @ 1442c1720

void __thiscall
USphereNetObjectPrioritizer::FinishBatch
          (USphereNetObjectPrioritizer *this,FBatchParams *param_1,
          FNetObjectPrioritizationParams *param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  uint *puVar3;
  float *pfVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId304,"USphereNetObjectPrioritizer_FinishBatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
               ,0x130);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId304);
  }
  uVar1 = param_1->ObjectCount;
  pfVar2 = param_2->Priorities;
  puVar3 = param_2->ObjectIndices;
  pfVar4 = param_1->Priorities;
  for (uVar5 = param_3; uVar5 != uVar1 + param_3; uVar5 = uVar5 + 1) {
    pfVar2[puVar3[uVar5]] = pfVar4[uVar5 - param_3];
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetPrivateStaticClass @ 1442c3870

UClass * __cdecl USphereNetObjectPrioritizer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereNetObjectPrioritizer",
               &Z_Registration_Info_UClass_USphereNetObjectPrioritizer.InnerSingleton,
               StaticRegisterNativesUSphereNetObjectPrioritizer,0x68,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<USphereNetObjectPrioritizer>,local_res8,
               ULocationBasedNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereNetObjectPrioritizer.InnerSingleton;
}

// Init @ 1442c4a90

void __thiscall
USphereNetObjectPrioritizer::Init
          (USphereNetObjectPrioritizer *this,FNetObjectPrioritizerInitParams *param_1)

{
  TStrongObjectPtr<USphereNetObjectPrioritizerConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int iVar2;
  UObjectBase *this_00;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FWorldLocations *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined8 local_48;
  FString local_40;
  FString local_30;
  FString local_20;
  
  if (param_1->Config == (UNetObjectPrioritizerConfig *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.Config != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
                       ,0xe,L"Need config to operate.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = (UObjectBase *)param_1->Config;
  if (this_00 != (UObjectBase *)0x0) {
    pUVar6 = USphereNetObjectPrioritizerConfig::StaticClass();
    pUVar3 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= (int)pUVar3->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) == &pUVar6->_padding_)
       ) {
      UObjectBase::AddRef(this_00);
      pTVar1 = &this->Config;
      if (pTVar1 == (TStrongObjectPtr<USphereNetObjectPrioritizerConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                     *)&local_48) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
      }
      else {
        if (pTVar1->Object != (UObject *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
        }
        pTVar1->Object = (UObject *)this_00;
      }
      UE::Net::FNetBitArray::Init((FNetBitArray *)&this->_padding_,param_1->CurrentMaxInternalIndex)
      ;
      pFVar7 = UReplicationSystem::GetWorldLocations
                         ((param_1->ReplicationSystem).field0_0x0.DebugPtr);
      this->_padding_ = (longlong)pFVar7;
      return;
    }
    pFVar8 = GetTypeName<USphereNetObjectPrioritizerConfig>(&local_30);
    pwVar9 = L"";
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar8 = GetFullNameForCastLogError<UNetObjectPrioritizerConfig>
                       (&local_20,(UNetObjectPrioritizerConfig *)this_00);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar10);
  }
  pFVar8 = GetTypeName<USphereNetObjectPrioritizerConfig>(&local_40);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar9);
}

// PrepareBatch @ 1442cb6c0

void __thiscall
USphereNetObjectPrioritizer::PrepareBatch
          (USphereNetObjectPrioritizer *this,FBatchParams *param_1,
          FNetObjectPrioritizationParams *param_2,uint param_3)

{
  double *pdVar1;
  ushort uVar2;
  uint *puVar3;
  FNetObjectPrioritizationInfo *pFVar4;
  float *pfVar5;
  VectorRegister4Double *pVVar6;
  float *pfVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId56,"USphereNetObjectPrioritizer_PrepareBatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
               ,0x38);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId56);
  }
  uVar14 = param_1->ObjectCount;
  puVar3 = param_2->ObjectIndices;
  pFVar4 = param_2->PrioritizationInfos;
  pfVar5 = param_1->Priorities;
  pVVar6 = param_1->Positions;
  pfVar7 = param_2->Priorities;
  for (uVar18 = param_3; uVar18 != uVar14 + param_3; uVar18 = uVar18 + 1) {
    pfVar5[uVar18 - param_3] = pfVar7[puVar3[uVar18]];
  }
  uVar14 = param_1->ObjectCount;
  uVar18 = param_3;
  uVar16 = 0;
  while( true ) {
    if (uVar18 == uVar14 + param_3) {
      uVar14 = param_3 + 3 & 0xfffffffc;
      if (param_3 != uVar14) {
        uVar15 = (ulonglong)(uVar14 - param_3);
        do {
          pfVar5[uVar16] = 0.0;
          pVVar6[uVar16].XY.m128d_f64[0] = 0.0;
          pVVar6[uVar16].XY.m128d_f64[1] = 0.0;
          pVVar6[uVar16].ZW.m128d_f64[0] = 0.0;
          pVVar6[uVar16].ZW.m128d_f64[1] = 0.0;
          uVar15 = uVar15 - 1;
          uVar16 = (ulonglong)((int)uVar16 + 1);
        } while (uVar15 != 0);
      }
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar12 = puVar3[uVar18];
    uVar2 = pFVar4[uVar12].Data[3];
    uVar17 = CONCAT22(uVar2,pFVar4[uVar12].Data[2]);
    uVar12 = (int)(uVar17 + ((int)(short)uVar2 >> 0xf & 0x7ffU)) >> 0xb;
    uVar17 = uVar17 & 0x800007ff;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xfffff800) + 1;
    }
    uVar13 = 0;
    if ((int)uVar12 < (int)this->_padding_) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) break;
    uVar18 = uVar18 + 1;
    lVar8 = *(longlong *)(this->_padding_ + (longlong)(int)uVar12 * 8);
    pdVar1 = (double *)(lVar8 + (longlong)(int)uVar17 * 0x20);
    dVar10 = pdVar1[1];
    pVVar6[uVar16].XY.m128d_f64[0] = *pdVar1;
    pVVar6[uVar16].XY.m128d_f64[1] = dVar10;
    pdVar1 = (double *)(lVar8 + 0x10 + (longlong)(int)uVar17 * 0x20);
    dVar10 = pdVar1[1];
    pVVar6[uVar16].ZW.m128d_f64[0] = *pdVar1;
    pVVar6[uVar16].ZW.m128d_f64[1] = dVar10;
    uVar16 = (ulonglong)((int)uVar16 + 1);
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// Prioritize @ 1442d1e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USphereNetObjectPrioritizer::Prioritize
          (USphereNetObjectPrioritizer *this,FNetObjectPrioritizationParams *param_1)

{
  float *pfVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStackY_308 [32];
  undefined1 local_2d7 [7];
  FMemMark local_2d0;
  code *local_2a8;
  undefined1 *local_2a0;
  FBatchParams local_298;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId29,"USphereNetObjectPrioritizer_Prioritize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
               ,0x1d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId29);
  }
  puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_2a0 = local_2d7;
  local_2a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2a8,puVar4);
  uVar6 = 0;
  local_2d0.Mem = (FMemStackBase *)(pFVar5 + 2);
  local_2d0.Top = (local_2d0.Mem)->Top;
  local_2d0.SavedChunk = *(FTaggedMemory **)(pFVar5 + 4);
  local_2d0.bPopped = false;
  local_2d0.NextTopmostMark = *(FMemMark **)(pFVar5 + 5);
  pFVar5[5] = (FTlsAutoCleanup)&local_2d0;
  *(int *)(pFVar5 + 6) = *(int *)(pFVar5 + 6) + 1;
  local_298.View.Views.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FReplicationView::FView>)0x0;
  uVar3 = param_1->ObjectCount + 3 & 0xfffffffc;
  local_298.View.Views.ArrayNum = 0;
  local_298.View.Views.ArrayMax = 4;
  uVar9 = 0x400;
  if (uVar3 < 0x400) {
    uVar9 = uVar3;
  }
  SetupBatchParams(this,&local_298,param_1,uVar9,local_2d0.Mem);
  uVar9 = param_1->ObjectCount;
  if (uVar9 != 0) {
    do {
      uVar7 = (uint)uVar6;
      uVar3 = 0x400;
      if (uVar9 - uVar7 < 0x400) {
        uVar3 = uVar9 - uVar7;
      }
      local_298.ObjectCount = uVar3;
      PrepareBatch(this,&local_298,param_1,uVar7);
      if (local_298.View.Views.ArrayNum == 1) {
        PrioritizeBatchForSingleView(this,&local_298);
      }
      else if (local_298.View.Views.ArrayNum == 2) {
        PrioritizeBatchForDualView(this,&local_298);
      }
      else {
        PrioritizeBatchForMultiView(this,&local_298);
      }
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId304,"USphereNetObjectPrioritizer_FinishBatch",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
                   ,0x130);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId304);
      }
      pfVar1 = param_1->Priorities;
      puVar4 = param_1->ObjectIndices;
      uVar8 = uVar7;
      while (uVar8 != local_298.ObjectCount + uVar7) {
        uVar8 = (int)uVar6 + 1;
        pfVar1[puVar4[uVar6]] = local_298.Priorities[(int)uVar6 - uVar7];
        uVar6 = (ulonglong)uVar8;
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      uVar6 = (ulonglong)(uVar7 + uVar3);
    } while (uVar7 + uVar3 < uVar9);
  }
  if (local_298.View.Views.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FMemory::Free((void *)local_298.View.Views.AllocatorInstance.SecondaryData);
  }
  if (local_2d0.bPopped == false) {
    if (((local_2d0.Mem)->TopMark != &local_2d0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2d0.bPopped = true;
    (local_2d0.Mem)->NumMarks = (local_2d0.Mem)->NumMarks + -1;
    if (local_2d0.SavedChunk != (local_2d0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_2d0.Mem,local_2d0.SavedChunk);
    }
    (local_2d0.Mem)->Top = local_2d0.Top;
    (local_2d0.Mem)->TopMark = local_2d0.NextTopmostMark;
    local_2d0.Top = (uchar *)0x0;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrioritizeBatch @ 1442d3060

void __thiscall
USphereNetObjectPrioritizer::PrioritizeBatch
          (USphereNetObjectPrioritizer *this,FBatchParams *param_1)

{
  uchar *puVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  VectorRegister4Double *pVVar8;
  float *pfVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  bool bVar36;
  uint uVar37;
  uint uVar38;
  ForElementType<UE::Net::FReplicationView::FView> FVar39;
  uint uVar40;
  VectorRegister4Double *pVVar41;
  VectorRegister4Double *pVVar42;
  VectorRegister4Double *pVVar43;
  bool bVar44;
  longlong lVar45;
  longlong lVar46;
  double dVar47;
  double dVar60;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar48;
  double dVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar62;
  uint uVar71;
  double dVar63;
  uint uVar72;
  double dVar73;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  uint uVar75;
  double dVar74;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  double dVar86;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar87;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar88;
  undefined1 unaff_XMM8 [16];
  double dVar93;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  
  iVar6 = (param_1->View).Views.ArrayNum;
  if (iVar6 == 1) {
    bVar44 = -1 < CpuChannel->Enabled;
    if (bVar44) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId119,
                 "USphereNetObjectPrioritizer_PrioritizeBatchForSingleView",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
                 ,0x77);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId119);
    }
    if (((param_1->View).Views.ArrayNum < 1) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar36)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar39 = (param_1->View).Views.AllocatorInstance.SecondaryData;
    uVar7 = param_1->ObjectCount;
    pVVar8 = param_1->Positions;
    pfVar9 = param_1->Priorities;
    if (FVar39 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
      FVar39 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
    }
    dVar4 = *(double *)((longlong)FVar39 + 0x20);
    dVar34 = *(double *)((longlong)FVar39 + 0x10);
    dVar35 = *(double *)((longlong)FVar39 + 0x18);
    if (uVar7 != 0) {
      uVar40 = 2;
      do {
        uVar38 = uVar40 - 2;
        pfVar2 = pfVar9 + uVar38;
        pfVar3 = pfVar9 + uVar38;
        dVar48 = pVVar8[uVar40].XY.m128d_f64[0] - dVar34;
        dVar61 = pVVar8[uVar40].XY.m128d_f64[1] - dVar35;
        dVar18 = pVVar8[uVar40 + 1].XY.m128d_f64[0] - dVar34;
        dVar19 = pVVar8[uVar40 + 1].XY.m128d_f64[1] - dVar35;
        dVar24 = pVVar8[uVar40 + 1].ZW.m128d_f64[0] - dVar4;
        dVar25 = pVVar8[uVar40 + 1].ZW.m128d_f64[1] - 0.0;
        dVar5 = pVVar8[uVar40].ZW.m128d_f64[0] - dVar4;
        dVar27 = pVVar8[uVar40].ZW.m128d_f64[1] - 0.0;
        dVar77 = pVVar8[uVar38].ZW.m128d_f64[0] - dVar4;
        dVar87 = pVVar8[uVar38].ZW.m128d_f64[1] - 0.0;
        dVar63 = pVVar8[uVar40 - 1].XY.m128d_f64[0] - dVar34;
        dVar74 = pVVar8[uVar40 - 1].XY.m128d_f64[1] - dVar35;
        dVar78 = pVVar8[uVar40 - 1].ZW.m128d_f64[0] - dVar4;
        dVar80 = pVVar8[uVar40 - 1].ZW.m128d_f64[1] - 0.0;
        dVar22 = pVVar8[uVar38].XY.m128d_f64[0] - dVar34;
        dVar23 = pVVar8[uVar38].XY.m128d_f64[1] - dVar35;
        auVar84._0_8_ = dVar77 * dVar77 + dVar22 * dVar22;
        auVar84._8_8_ = dVar87 * dVar87 + dVar23 * dVar23;
        auVar56._8_8_ = dVar78 * dVar78 + dVar63 * dVar63 + dVar80 * dVar80 + dVar74 * dVar74;
        auVar56._0_8_ = auVar84._0_8_ + auVar84._8_8_;
        auVar51 = sqrtpd(auVar84,auVar56);
        auVar85._0_8_ =
             auVar51._0_8_ - (param_1->PriorityCalculationConstants).InnerRadius.XY.m128d_f64[0];
        auVar85._8_8_ =
             auVar51._8_8_ - (param_1->PriorityCalculationConstants).InnerRadius.XY.m128d_f64[1];
        auVar57._8_8_ = dVar24 * dVar24 + dVar18 * dVar18 + dVar25 * dVar25 + dVar19 * dVar19;
        auVar57._0_8_ = dVar5 * dVar5 + dVar48 * dVar48 + dVar27 * dVar27 + dVar61 * dVar61;
        auVar66 = sqrtpd(unaff_XMM8,auVar57);
        auVar51 = maxpd(auVar85,ZEXT816(0));
        auVar92._0_8_ =
             auVar66._0_8_ - (param_1->PriorityCalculationConstants).InnerRadius.ZW.m128d_f64[0];
        auVar92._8_8_ =
             auVar66._8_8_ - (param_1->PriorityCalculationConstants).InnerRadius.ZW.m128d_f64[1];
        lVar45 = -(ulonglong)
                  ((param_1->PriorityCalculationConstants).RadiusDiff.XY.m128d_f64[0] <
                  auVar51._0_8_);
        lVar46 = -(ulonglong)
                  ((param_1->PriorityCalculationConstants).RadiusDiff.XY.m128d_f64[1] <
                  auVar51._8_8_);
        uVar38 = (uint)lVar45;
        uVar37 = (uint)((ulonglong)lVar45 >> 0x20);
        uVar71 = (uint)lVar46;
        uVar72 = (uint)((ulonglong)lVar46 >> 0x20);
        unaff_XMM8 = maxpd(auVar92,ZEXT816(0));
        dVar18 = (param_1->PriorityCalculationConstants).InvRadiusDiff.XY.m128d_f64[0] *
                 auVar51._0_8_ *
                 (param_1->PriorityCalculationConstants).PriorityDiff.XY.m128d_f64[0] +
                 (param_1->PriorityCalculationConstants).InnerPriority.XY.m128d_f64[0];
        dVar19 = (param_1->PriorityCalculationConstants).InvRadiusDiff.XY.m128d_f64[1] *
                 auVar51._8_8_ *
                 (param_1->PriorityCalculationConstants).PriorityDiff.XY.m128d_f64[1] +
                 (param_1->PriorityCalculationConstants).InnerPriority.XY.m128d_f64[1];
        auVar58._0_4_ = ~uVar38 & SUB84(dVar18,0);
        auVar58._4_4_ = ~uVar37 & (uint)((ulonglong)dVar18 >> 0x20);
        auVar58._8_4_ = ~uVar71 & SUB84(dVar19,0);
        auVar58._12_4_ = ~uVar72 & (uint)((ulonglong)dVar19 >> 0x20);
        dVar18 = (param_1->PriorityCalculationConstants).InvRadiusDiff.ZW.m128d_f64[0] *
                 unaff_XMM8._0_8_ *
                 (param_1->PriorityCalculationConstants).PriorityDiff.ZW.m128d_f64[0] +
                 (param_1->PriorityCalculationConstants).InnerPriority.ZW.m128d_f64[0];
        dVar19 = (param_1->PriorityCalculationConstants).InvRadiusDiff.ZW.m128d_f64[1] *
                 unaff_XMM8._8_8_ *
                 (param_1->PriorityCalculationConstants).PriorityDiff.ZW.m128d_f64[1] +
                 (param_1->PriorityCalculationConstants).InnerPriority.ZW.m128d_f64[1];
        auVar51._4_4_ =
             *(uint *)((longlong)
                       (param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 + 4) &
             uVar37;
        auVar51._0_4_ =
             *(uint *)(param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 & uVar38;
        auVar51._8_4_ =
             *(uint *)((param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 + 1) &
             uVar71;
        auVar51._12_4_ =
             *(uint *)((longlong)
                       (param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 + 0xc) &
             uVar72;
        lVar45 = -(ulonglong)
                  ((param_1->PriorityCalculationConstants).RadiusDiff.ZW.m128d_f64[0] <
                  unaff_XMM8._0_8_);
        lVar46 = -(ulonglong)
                  ((param_1->PriorityCalculationConstants).RadiusDiff.ZW.m128d_f64[1] <
                  unaff_XMM8._8_8_);
        auVar66._8_4_ = SUB84((double)pfVar2[1],0);
        auVar66._0_8_ = (double)*pfVar2;
        auVar66._12_4_ = (int)((ulonglong)(double)pfVar2[1] >> 0x20);
        auVar51 = maxpd(auVar58 | auVar51,auVar66);
        uVar38 = (uint)lVar45;
        uVar37 = (uint)((ulonglong)lVar45 >> 0x20);
        uVar71 = (uint)lVar46;
        uVar72 = (uint)((ulonglong)lVar46 >> 0x20);
        auVar59._0_4_ = ~uVar38 & SUB84(dVar18,0);
        auVar59._4_4_ = ~uVar37 & (uint)((ulonglong)dVar18 >> 0x20);
        auVar59._8_4_ = ~uVar71 & SUB84(dVar19,0);
        auVar59._12_4_ = ~uVar72 & (uint)((ulonglong)dVar19 >> 0x20);
        auVar21._4_4_ =
             *(uint *)((longlong)
                       (param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 + 4) &
             uVar37;
        auVar21._0_4_ =
             *(uint *)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 & uVar38;
        auVar21._8_4_ =
             *(uint *)((param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 + 1) &
             uVar71;
        auVar21._12_4_ =
             *(uint *)((longlong)
                       (param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 + 0xc) &
             uVar72;
        uVar38 = uVar40 + 2;
        auVar91._8_4_ = SUB84((double)pfVar2[3],0);
        auVar91._0_8_ = (double)pfVar2[2];
        auVar91._12_4_ = (int)((ulonglong)(double)pfVar2[3] >> 0x20);
        auVar66 = maxpd(auVar59 | auVar21,auVar91);
        *(ulonglong *)pfVar3 = CONCAT44((float)auVar51._8_8_,(float)auVar51._0_8_);
        *(ulonglong *)(pfVar3 + 2) = CONCAT44((float)auVar66._8_8_,(float)auVar66._0_8_);
        uVar40 = uVar40 + 4;
      } while (uVar38 < uVar7);
    }
    if (bVar44) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  if (iVar6 != 2) {
    PrioritizeBatchForMultiView(this,param_1);
    return;
  }
  bVar44 = -1 < CpuChannel->Enabled;
  if (bVar44) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId170,"USphereNetObjectPrioritizer_PrioritizeBatchForDualView"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
               ,0xaa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId170);
  }
  if (((param_1->View).Views.ArrayNum < 1) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar39 = (param_1->View).Views.AllocatorInstance.SecondaryData;
  if (FVar39 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar39 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
  }
  puVar1 = (uchar *)((longlong)FVar39 + 0x10);
  dVar24 = *(double *)puVar1;
  dVar22 = *(double *)puVar1;
  dVar18 = *(double *)puVar1;
  dVar34 = *(double *)puVar1;
  puVar1 = (uchar *)((longlong)FVar39 + 0x18);
  dVar25 = *(double *)puVar1;
  dVar23 = *(double *)puVar1;
  dVar19 = *(double *)puVar1;
  dVar35 = *(double *)puVar1;
  dVar4 = *(double *)((longlong)FVar39 + 0x20);
  if (((param_1->View).Views.ArrayNum < 2) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar39 = (param_1->View).Views.AllocatorInstance.SecondaryData;
  uVar7 = param_1->ObjectCount;
  pVVar8 = param_1->Positions;
  pfVar9 = param_1->Priorities;
  if (FVar39 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar39 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
  }
  dVar5 = *(double *)((longlong)FVar39 + 0x68);
  dVar27 = *(double *)((longlong)FVar39 + 0x58);
  dVar48 = *(double *)((longlong)FVar39 + 0x60);
  if (uVar7 != 0) {
    uVar40 = 2;
    do {
      uVar37 = uVar40 - 2;
      pfVar2 = pfVar9 + uVar37;
      uVar38 = uVar40 + 1;
      pVVar42 = pVVar8 + (uVar40 - 1);
      pVVar43 = pVVar8 + uVar40;
      pVVar41 = pVVar8 + uVar37;
      dVar62 = (pVVar42->XY).m128d_f64[0] - dVar34;
      dVar73 = (pVVar42->XY).m128d_f64[1] - dVar35;
      dVar61 = pVVar8[uVar38].XY.m128d_f64[0] - dVar18;
      dVar63 = pVVar8[uVar38].XY.m128d_f64[1] - dVar19;
      dVar47 = (pVVar43->XY).m128d_f64[0] - dVar22;
      dVar60 = (pVVar43->XY).m128d_f64[1] - dVar23;
      dVar74 = (pVVar41->XY).m128d_f64[0] - dVar24;
      dVar78 = (pVVar41->XY).m128d_f64[1] - dVar25;
      dVar88 = (pVVar41->ZW).m128d_f64[0] - dVar4;
      dVar93 = (pVVar41->ZW).m128d_f64[1] - 0.0;
      dVar28 = (pVVar42->ZW).m128d_f64[0] - dVar4;
      dVar29 = (pVVar42->ZW).m128d_f64[1] - 0.0;
      dVar32 = pVVar8[uVar38].ZW.m128d_f64[0] - dVar4;
      dVar33 = pVVar8[uVar38].ZW.m128d_f64[1] - 0.0;
      dVar30 = (pVVar43->ZW).m128d_f64[0] - dVar4;
      dVar31 = (pVVar43->ZW).m128d_f64[1] - 0.0;
      dVar80 = (pVVar41->ZW).m128d_f64[0] - dVar5;
      dVar77 = (pVVar41->ZW).m128d_f64[1] - 0.0;
      dVar76 = (pVVar42->ZW).m128d_f64[0] - dVar5;
      dVar79 = (pVVar42->ZW).m128d_f64[1] - 0.0;
      dVar81 = pVVar8[uVar38].ZW.m128d_f64[0] - dVar5;
      dVar86 = pVVar8[uVar38].ZW.m128d_f64[1] - 0.0;
      dVar87 = (pVVar43->ZW).m128d_f64[0] - dVar5;
      dVar26 = (pVVar43->ZW).m128d_f64[1] - 0.0;
      auVar89._0_8_ = dVar88 * dVar88 + dVar74 * dVar74;
      auVar89._8_8_ = dVar93 * dVar93 + dVar78 * dVar78;
      dVar28 = dVar28 * dVar28 + dVar62 * dVar62;
      dVar29 = dVar29 * dVar29 + dVar73 * dVar73;
      dVar62 = (pVVar42->XY).m128d_f64[0] - dVar27;
      dVar73 = (pVVar42->XY).m128d_f64[1] - dVar48;
      dVar32 = dVar32 * dVar32 + dVar61 * dVar61;
      dVar33 = dVar33 * dVar33 + dVar63 * dVar63;
      dVar61 = pVVar8[uVar38].XY.m128d_f64[0] - dVar27;
      dVar63 = pVVar8[uVar38].XY.m128d_f64[1] - dVar48;
      dVar74 = (pVVar41->XY).m128d_f64[0] - dVar27;
      dVar78 = (pVVar41->XY).m128d_f64[1] - dVar48;
      dVar30 = dVar30 * dVar30 + dVar47 * dVar47;
      dVar31 = dVar31 * dVar31 + dVar60 * dVar60;
      dVar47 = (pVVar43->XY).m128d_f64[0] - dVar27;
      dVar60 = (pVVar43->XY).m128d_f64[1] - dVar48;
      dVar74 = dVar80 * dVar80 + dVar74 * dVar74;
      dVar78 = dVar77 * dVar77 + dVar78 * dVar78;
      dVar77 = dVar76 * dVar76 + dVar62 * dVar62;
      dVar62 = dVar79 * dVar79 + dVar73 * dVar73;
      auVar82._0_8_ = dVar81 * dVar81 + dVar61 * dVar61;
      auVar82._8_8_ = dVar86 * dVar86 + dVar63 * dVar63;
      auVar64._8_4_ = SUB84(auVar89._8_8_,0);
      auVar64._0_8_ = auVar89._0_8_;
      auVar64._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
      dVar61 = dVar74 + dVar78;
      dVar63 = dVar87 * dVar87 + dVar47 * dVar47;
      dVar80 = dVar26 * dVar26 + dVar60 * dVar60;
      auVar49._8_4_ = SUB84(dVar29,0);
      auVar49._0_8_ = dVar28;
      auVar49._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      auVar65._0_8_ = auVar64._8_8_ + auVar89._0_8_;
      auVar65._8_8_ = auVar89._0_8_ + auVar89._8_8_;
      auVar11._8_4_ = SUB84(dVar61,0);
      auVar11._0_8_ = dVar78 + dVar74;
      auVar11._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
      auVar66 = minpd(auVar65,auVar11);
      auVar50._0_8_ = auVar49._8_8_ + dVar28;
      auVar50._8_8_ = dVar28 + dVar29;
      dVar61 = dVar77 + dVar62;
      auVar12._8_4_ = SUB84(dVar61,0);
      auVar12._0_8_ = dVar62 + dVar77;
      auVar12._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
      auVar51 = minpd(auVar50,auVar12);
      auVar67._8_8_ = auVar51._8_8_;
      auVar67._0_8_ = auVar66._8_8_;
      auVar52._8_4_ = SUB84(dVar33,0);
      auVar52._0_8_ = dVar32;
      auVar52._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      dVar61 = dVar63 + dVar80;
      auVar51 = sqrtpd(auVar89,auVar67);
      auVar68._8_4_ = SUB84(dVar31,0);
      auVar68._0_8_ = dVar30;
      auVar68._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar53._0_8_ = auVar52._8_8_ + dVar32;
      auVar53._8_8_ = dVar32 + dVar33;
      auVar90._0_8_ =
           auVar51._0_8_ - (param_1->PriorityCalculationConstants).InnerRadius.XY.m128d_f64[0];
      auVar90._8_8_ =
           auVar51._8_8_ - (param_1->PriorityCalculationConstants).InnerRadius.XY.m128d_f64[1];
      auVar69._0_8_ = auVar68._8_8_ + dVar30;
      auVar69._8_8_ = dVar30 + dVar31;
      auVar91 = maxpd(auVar90,ZEXT816(0));
      auVar13._8_4_ = SUB84(dVar61,0);
      auVar13._0_8_ = dVar80 + dVar63;
      auVar13._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
      auVar66 = minpd(auVar69,auVar13);
      auVar14._8_4_ = SUB84(auVar82._0_8_ + auVar82._8_8_,0);
      auVar14._0_8_ = auVar82._8_8_ + auVar82._0_8_;
      auVar14._12_4_ = (int)((ulonglong)(auVar82._0_8_ + auVar82._8_8_) >> 0x20);
      auVar51 = minpd(auVar53,auVar14);
      dVar61 = (param_1->PriorityCalculationConstants).InvRadiusDiff.XY.m128d_f64[0] * auVar91._0_8_
               * (param_1->PriorityCalculationConstants).PriorityDiff.XY.m128d_f64[0] +
               (param_1->PriorityCalculationConstants).InnerPriority.XY.m128d_f64[0];
      dVar63 = (param_1->PriorityCalculationConstants).InvRadiusDiff.XY.m128d_f64[1] * auVar91._8_8_
               * (param_1->PriorityCalculationConstants).PriorityDiff.XY.m128d_f64[1] +
               (param_1->PriorityCalculationConstants).InnerPriority.XY.m128d_f64[1];
      auVar70._8_8_ = auVar51._8_8_;
      auVar70._0_8_ = auVar66._8_8_;
      auVar51 = sqrtpd(auVar82,auVar70);
      auVar83._0_8_ =
           auVar51._0_8_ - (param_1->PriorityCalculationConstants).InnerRadius.ZW.m128d_f64[0];
      auVar83._8_8_ =
           auVar51._8_8_ - (param_1->PriorityCalculationConstants).InnerRadius.ZW.m128d_f64[1];
      lVar45 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.XY.m128d_f64[0] < auVar91._0_8_)
      ;
      lVar46 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.XY.m128d_f64[1] < auVar91._8_8_)
      ;
      uVar38 = (uint)lVar45;
      uVar71 = (uint)((ulonglong)lVar45 >> 0x20);
      uVar72 = (uint)lVar46;
      uVar75 = (uint)((ulonglong)lVar46 >> 0x20);
      auVar54._0_4_ = ~uVar38 & SUB84(dVar61,0);
      auVar54._4_4_ = ~uVar71 & (uint)((ulonglong)dVar61 >> 0x20);
      auVar54._8_4_ = ~uVar72 & SUB84(dVar63,0);
      auVar54._12_4_ = ~uVar75 & (uint)((ulonglong)dVar63 >> 0x20);
      auVar15._4_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64
                    + 4) & uVar71;
      auVar15._0_4_ =
           *(uint *)(param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 & uVar38;
      auVar15._8_4_ =
           *(uint *)((param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 + 1) &
           uVar72;
      auVar15._12_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64
                    + 0xc) & uVar75;
      auVar66 = maxpd(auVar83,ZEXT816(0));
      auVar16._8_4_ = SUB84((double)pfVar2[1],0);
      auVar16._0_8_ = (double)*pfVar2;
      auVar16._12_4_ = (int)((ulonglong)(double)pfVar2[1] >> 0x20);
      auVar51 = maxpd(auVar54 | auVar15,auVar16);
      dVar61 = (param_1->PriorityCalculationConstants).InvRadiusDiff.ZW.m128d_f64[0] * auVar66._0_8_
               * (param_1->PriorityCalculationConstants).PriorityDiff.ZW.m128d_f64[0] +
               (param_1->PriorityCalculationConstants).InnerPriority.ZW.m128d_f64[0];
      dVar63 = (param_1->PriorityCalculationConstants).InvRadiusDiff.ZW.m128d_f64[1] * auVar66._8_8_
               * (param_1->PriorityCalculationConstants).PriorityDiff.ZW.m128d_f64[1] +
               (param_1->PriorityCalculationConstants).InnerPriority.ZW.m128d_f64[1];
      lVar45 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.ZW.m128d_f64[0] < auVar66._0_8_)
      ;
      lVar46 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.ZW.m128d_f64[1] < auVar66._8_8_)
      ;
      uVar38 = (uint)lVar45;
      uVar71 = (uint)((ulonglong)lVar45 >> 0x20);
      uVar72 = (uint)lVar46;
      uVar75 = (uint)((ulonglong)lVar46 >> 0x20);
      auVar55._0_4_ = ~uVar38 & SUB84(dVar61,0);
      auVar55._4_4_ = ~uVar71 & (uint)((ulonglong)dVar61 >> 0x20);
      auVar55._8_4_ = ~uVar72 & SUB84(dVar63,0);
      auVar55._12_4_ = ~uVar75 & (uint)((ulonglong)dVar63 >> 0x20);
      auVar20._4_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64
                    + 4) & uVar71;
      auVar20._0_4_ =
           *(uint *)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 & uVar38;
      auVar20._8_4_ =
           *(uint *)((param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 + 1) &
           uVar72;
      auVar20._12_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64
                    + 0xc) & uVar75;
      auVar17._8_4_ = SUB84((double)pfVar2[3],0);
      auVar17._0_8_ = (double)pfVar2[2];
      auVar17._12_4_ = (int)((ulonglong)(double)pfVar2[3] >> 0x20);
      auVar66 = maxpd(auVar55 | auVar20,auVar17);
      pfVar2 = pfVar9 + uVar37;
      *(ulonglong *)pfVar2 = CONCAT44((float)auVar51._8_8_,(float)auVar51._0_8_);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44((float)auVar66._8_8_,(float)auVar66._0_8_);
      uVar38 = uVar40 + 2;
      uVar40 = uVar40 + 4;
    } while (uVar38 < uVar7);
  }
  if (bVar44) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrioritizeBatchForDualView @ 1442d3200

void __thiscall
USphereNetObjectPrioritizer::PrioritizeBatchForDualView
          (USphereNetObjectPrioritizer *this,FBatchParams *param_1)

{
  uchar *puVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  VectorRegister4Double *pVVar6;
  float *pfVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  bool bVar36;
  uint uVar37;
  ForElementType<UE::Net::FReplicationView::FView> FVar38;
  uint uVar39;
  VectorRegister4Double *pVVar40;
  VectorRegister4Double *pVVar41;
  VectorRegister4Double *pVVar42;
  bool bVar43;
  longlong lVar44;
  longlong lVar45;
  double dVar46;
  double dVar54;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar55;
  double dVar56;
  uint uVar65;
  uint uVar66;
  double dVar67;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar75;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar76;
  double dVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  
  bVar43 = -1 < CpuChannel->Enabled;
  if (bVar43) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId170,"USphereNetObjectPrioritizer_PrioritizeBatchForDualView"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
               ,0xaa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId170);
  }
  if (((param_1->View).Views.ArrayNum < 1) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar38 = (param_1->View).Views.AllocatorInstance.SecondaryData;
  if (FVar38 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar38 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
  }
  puVar1 = (uchar *)((longlong)FVar38 + 0x10);
  dVar34 = *(double *)puVar1;
  dVar32 = *(double *)puVar1;
  dVar30 = *(double *)puVar1;
  dVar28 = *(double *)puVar1;
  puVar1 = (uchar *)((longlong)FVar38 + 0x18);
  dVar35 = *(double *)puVar1;
  dVar33 = *(double *)puVar1;
  dVar31 = *(double *)puVar1;
  dVar29 = *(double *)puVar1;
  dVar3 = *(double *)((longlong)FVar38 + 0x20);
  if (((param_1->View).Views.ArrayNum < 2) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar38 = (param_1->View).Views.AllocatorInstance.SecondaryData;
  uVar5 = param_1->ObjectCount;
  pVVar6 = param_1->Positions;
  pfVar7 = param_1->Priorities;
  if (FVar38 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar38 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
  }
  dVar4 = *(double *)((longlong)FVar38 + 0x68);
  dVar26 = *(double *)((longlong)FVar38 + 0x58);
  dVar27 = *(double *)((longlong)FVar38 + 0x60);
  if (uVar5 != 0) {
    uVar39 = 2;
    do {
      uVar37 = uVar39 - 2;
      pfVar2 = pfVar7 + uVar37;
      uVar55 = uVar39 + 1;
      pVVar41 = pVVar6 + (uVar39 - 1);
      pVVar42 = pVVar6 + uVar39;
      pVVar40 = pVVar6 + uVar37;
      dVar56 = (pVVar41->XY).m128d_f64[0] - dVar28;
      dVar67 = (pVVar41->XY).m128d_f64[1] - dVar29;
      dVar12 = pVVar6[uVar55].XY.m128d_f64[0] - dVar30;
      dVar13 = pVVar6[uVar55].XY.m128d_f64[1] - dVar31;
      dVar46 = (pVVar42->XY).m128d_f64[0] - dVar32;
      dVar54 = (pVVar42->XY).m128d_f64[1] - dVar33;
      dVar15 = (pVVar40->XY).m128d_f64[0] - dVar34;
      dVar16 = (pVVar40->XY).m128d_f64[1] - dVar35;
      dVar76 = (pVVar40->ZW).m128d_f64[0] - dVar3;
      dVar80 = (pVVar40->ZW).m128d_f64[1] - 0.0;
      dVar20 = (pVVar41->ZW).m128d_f64[0] - dVar3;
      dVar21 = (pVVar41->ZW).m128d_f64[1] - 0.0;
      dVar24 = pVVar6[uVar55].ZW.m128d_f64[0] - dVar3;
      dVar25 = pVVar6[uVar55].ZW.m128d_f64[1] - 0.0;
      dVar22 = (pVVar42->ZW).m128d_f64[0] - dVar3;
      dVar23 = (pVVar42->ZW).m128d_f64[1] - 0.0;
      dVar17 = (pVVar40->ZW).m128d_f64[0] - dVar4;
      dVar70 = (pVVar40->ZW).m128d_f64[1] - 0.0;
      dVar69 = (pVVar41->ZW).m128d_f64[0] - dVar4;
      dVar71 = (pVVar41->ZW).m128d_f64[1] - 0.0;
      dVar72 = pVVar6[uVar55].ZW.m128d_f64[0] - dVar4;
      dVar75 = pVVar6[uVar55].ZW.m128d_f64[1] - 0.0;
      dVar18 = (pVVar42->ZW).m128d_f64[0] - dVar4;
      dVar19 = (pVVar42->ZW).m128d_f64[1] - 0.0;
      auVar77._0_8_ = dVar76 * dVar76 + dVar15 * dVar15;
      auVar77._8_8_ = dVar80 * dVar80 + dVar16 * dVar16;
      dVar20 = dVar20 * dVar20 + dVar56 * dVar56;
      dVar21 = dVar21 * dVar21 + dVar67 * dVar67;
      dVar56 = (pVVar41->XY).m128d_f64[0] - dVar26;
      dVar67 = (pVVar41->XY).m128d_f64[1] - dVar27;
      dVar24 = dVar24 * dVar24 + dVar12 * dVar12;
      dVar25 = dVar25 * dVar25 + dVar13 * dVar13;
      dVar12 = pVVar6[uVar55].XY.m128d_f64[0] - dVar26;
      dVar13 = pVVar6[uVar55].XY.m128d_f64[1] - dVar27;
      dVar15 = (pVVar40->XY).m128d_f64[0] - dVar26;
      dVar16 = (pVVar40->XY).m128d_f64[1] - dVar27;
      dVar22 = dVar22 * dVar22 + dVar46 * dVar46;
      dVar23 = dVar23 * dVar23 + dVar54 * dVar54;
      dVar46 = (pVVar42->XY).m128d_f64[0] - dVar26;
      dVar54 = (pVVar42->XY).m128d_f64[1] - dVar27;
      dVar15 = dVar17 * dVar17 + dVar15 * dVar15;
      dVar16 = dVar70 * dVar70 + dVar16 * dVar16;
      dVar70 = dVar69 * dVar69 + dVar56 * dVar56;
      dVar56 = dVar71 * dVar71 + dVar67 * dVar67;
      auVar73._0_8_ = dVar72 * dVar72 + dVar12 * dVar12;
      auVar73._8_8_ = dVar75 * dVar75 + dVar13 * dVar13;
      auVar57._8_4_ = SUB84(auVar77._8_8_,0);
      auVar57._0_8_ = auVar77._0_8_;
      auVar57._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
      dVar12 = dVar15 + dVar16;
      dVar13 = dVar18 * dVar18 + dVar46 * dVar46;
      dVar17 = dVar19 * dVar19 + dVar54 * dVar54;
      auVar47._8_4_ = SUB84(dVar21,0);
      auVar47._0_8_ = dVar20;
      auVar47._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      auVar58._0_8_ = auVar57._8_8_ + auVar77._0_8_;
      auVar58._8_8_ = auVar77._0_8_ + auVar77._8_8_;
      auVar49._8_4_ = SUB84(dVar12,0);
      auVar49._0_8_ = dVar16 + dVar15;
      auVar49._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar59 = minpd(auVar58,auVar49);
      auVar48._0_8_ = auVar47._8_8_ + dVar20;
      auVar48._8_8_ = dVar20 + dVar21;
      dVar12 = dVar70 + dVar56;
      auVar63._8_4_ = SUB84(dVar12,0);
      auVar63._0_8_ = dVar56 + dVar70;
      auVar63._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar49 = minpd(auVar48,auVar63);
      auVar60._8_8_ = auVar49._8_8_;
      auVar60._0_8_ = auVar59._8_8_;
      auVar50._8_4_ = SUB84(dVar25,0);
      auVar50._0_8_ = dVar24;
      auVar50._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      dVar12 = dVar13 + dVar17;
      auVar49 = sqrtpd(auVar77,auVar60);
      auVar61._8_4_ = SUB84(dVar23,0);
      auVar61._0_8_ = dVar22;
      auVar61._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      auVar51._0_8_ = auVar50._8_8_ + dVar24;
      auVar51._8_8_ = dVar24 + dVar25;
      auVar78._0_8_ =
           auVar49._0_8_ - (param_1->PriorityCalculationConstants).InnerRadius.XY.m128d_f64[0];
      auVar78._8_8_ =
           auVar49._8_8_ - (param_1->PriorityCalculationConstants).InnerRadius.XY.m128d_f64[1];
      auVar62._0_8_ = auVar61._8_8_ + dVar22;
      auVar62._8_8_ = dVar22 + dVar23;
      auVar79 = maxpd(auVar78,ZEXT816(0));
      auVar59._8_4_ = SUB84(dVar12,0);
      auVar59._0_8_ = dVar17 + dVar13;
      auVar59._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar63 = minpd(auVar62,auVar59);
      auVar9._8_4_ = SUB84(auVar73._0_8_ + auVar73._8_8_,0);
      auVar9._0_8_ = auVar73._8_8_ + auVar73._0_8_;
      auVar9._12_4_ = (int)((ulonglong)(auVar73._0_8_ + auVar73._8_8_) >> 0x20);
      auVar49 = minpd(auVar51,auVar9);
      dVar12 = (param_1->PriorityCalculationConstants).InvRadiusDiff.XY.m128d_f64[0] * auVar79._0_8_
               * (param_1->PriorityCalculationConstants).PriorityDiff.XY.m128d_f64[0] +
               (param_1->PriorityCalculationConstants).InnerPriority.XY.m128d_f64[0];
      dVar13 = (param_1->PriorityCalculationConstants).InvRadiusDiff.XY.m128d_f64[1] * auVar79._8_8_
               * (param_1->PriorityCalculationConstants).PriorityDiff.XY.m128d_f64[1] +
               (param_1->PriorityCalculationConstants).InnerPriority.XY.m128d_f64[1];
      auVar64._8_8_ = auVar49._8_8_;
      auVar64._0_8_ = auVar63._8_8_;
      auVar49 = sqrtpd(auVar73,auVar64);
      auVar74._0_8_ =
           auVar49._0_8_ - (param_1->PriorityCalculationConstants).InnerRadius.ZW.m128d_f64[0];
      auVar74._8_8_ =
           auVar49._8_8_ - (param_1->PriorityCalculationConstants).InnerRadius.ZW.m128d_f64[1];
      lVar44 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.XY.m128d_f64[0] < auVar79._0_8_)
      ;
      lVar45 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.XY.m128d_f64[1] < auVar79._8_8_)
      ;
      uVar55 = (uint)lVar44;
      uVar65 = (uint)((ulonglong)lVar44 >> 0x20);
      uVar66 = (uint)lVar45;
      uVar68 = (uint)((ulonglong)lVar45 >> 0x20);
      auVar52._0_4_ = ~uVar55 & SUB84(dVar12,0);
      auVar52._4_4_ = ~uVar65 & (uint)((ulonglong)dVar12 >> 0x20);
      auVar52._8_4_ = ~uVar66 & SUB84(dVar13,0);
      auVar52._12_4_ = ~uVar68 & (uint)((ulonglong)dVar13 >> 0x20);
      auVar79._4_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64
                    + 4) & uVar65;
      auVar79._0_4_ =
           *(uint *)(param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 & uVar55;
      auVar79._8_4_ =
           *(uint *)((param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 + 1) &
           uVar66;
      auVar79._12_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64
                    + 0xc) & uVar68;
      auVar63 = maxpd(auVar74,ZEXT816(0));
      auVar10._8_4_ = SUB84((double)pfVar2[1],0);
      auVar10._0_8_ = (double)*pfVar2;
      auVar10._12_4_ = (int)((ulonglong)(double)pfVar2[1] >> 0x20);
      auVar49 = maxpd(auVar52 | auVar79,auVar10);
      dVar12 = (param_1->PriorityCalculationConstants).InvRadiusDiff.ZW.m128d_f64[0] * auVar63._0_8_
               * (param_1->PriorityCalculationConstants).PriorityDiff.ZW.m128d_f64[0] +
               (param_1->PriorityCalculationConstants).InnerPriority.ZW.m128d_f64[0];
      dVar13 = (param_1->PriorityCalculationConstants).InvRadiusDiff.ZW.m128d_f64[1] * auVar63._8_8_
               * (param_1->PriorityCalculationConstants).PriorityDiff.ZW.m128d_f64[1] +
               (param_1->PriorityCalculationConstants).InnerPriority.ZW.m128d_f64[1];
      lVar44 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.ZW.m128d_f64[0] < auVar63._0_8_)
      ;
      lVar45 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.ZW.m128d_f64[1] < auVar63._8_8_)
      ;
      uVar55 = (uint)lVar44;
      uVar65 = (uint)((ulonglong)lVar44 >> 0x20);
      uVar66 = (uint)lVar45;
      uVar68 = (uint)((ulonglong)lVar45 >> 0x20);
      auVar53._0_4_ = ~uVar55 & SUB84(dVar12,0);
      auVar53._4_4_ = ~uVar65 & (uint)((ulonglong)dVar12 >> 0x20);
      auVar53._8_4_ = ~uVar66 & SUB84(dVar13,0);
      auVar53._12_4_ = ~uVar68 & (uint)((ulonglong)dVar13 >> 0x20);
      auVar14._4_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64
                    + 4) & uVar65;
      auVar14._0_4_ =
           *(uint *)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 & uVar55;
      auVar14._8_4_ =
           *(uint *)((param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 + 1) &
           uVar66;
      auVar14._12_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64
                    + 0xc) & uVar68;
      auVar11._8_4_ = SUB84((double)pfVar2[3],0);
      auVar11._0_8_ = (double)pfVar2[2];
      auVar11._12_4_ = (int)((ulonglong)(double)pfVar2[3] >> 0x20);
      auVar63 = maxpd(auVar53 | auVar14,auVar11);
      pfVar2 = pfVar7 + uVar37;
      *(ulonglong *)pfVar2 = CONCAT44((float)auVar49._8_8_,(float)auVar49._0_8_);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44((float)auVar63._8_8_,(float)auVar63._0_8_);
      uVar55 = uVar39 + 2;
      uVar39 = uVar39 + 4;
    } while (uVar55 < uVar5);
  }
  if (bVar43) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrioritizeBatchForMultiView @ 1442d36a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USphereNetObjectPrioritizer::PrioritizeBatchForMultiView
          (USphereNetObjectPrioritizer *this,FBatchParams *param_1)

{
  double *pdVar1;
  float *pfVar2;
  VectorRegister4Double *pVVar3;
  __m128d *p_Var4;
  int iVar5;
  uint uVar6;
  VectorRegister4Double *pVVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  ForElementType<VectorRegister4Double> FVar30;
  ForElementType<UE::Net::FReplicationView::FView> FVar31;
  char cVar32;
  double *pdVar33;
  ForElementType<VectorRegister4Double> FVar34;
  uint uVar35;
  longlong lVar36;
  bool bVar37;
  longlong lVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 extraout_XMM0 [16];
  double dVar51;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  uint uVar53;
  uint uVar54;
  double dVar55;
  uint uVar56;
  double dVar57;
  double dVar58;
  double dVar60;
  double dVar61;
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined4 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auStack_308 [32];
  double *local_2e8;
  ForElementType<VectorRegister4Double> local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  char local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6 [6];
  ForElementType<VectorRegister4Double> *local_2b0;
  float *local_2a8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  double dStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  ForElementType<VectorRegister4Double> local_1f8;
  int local_e8;
  int local_e4 [3];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_308;
  bVar37 = CpuChannel->Enabled < 0;
  if (bVar37) {
    local_2b8 = '\0';
  }
  else {
    local_2b8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId239,
               "USphereNetObjectPrioritizer_PrioritizeBatchForMultiView",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
               ,0xef);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId239);
  }
  FVar31 = (param_1->View).Views.AllocatorInstance.SecondaryData;
  iVar5 = (param_1->View).Views.ArrayNum;
  local_1f8.SecondaryData = (ForElementType<VectorRegister4Double>)0x0;
  local_e8 = 0;
  if (FVar31 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar31 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
  }
  local_e4[0] = 8;
  pdVar33 = (double *)((longlong)FVar31 + 0x10);
  do {
    if ((param_1->View).Views.ArrayNum != iVar5) {
      local_2b7 = 0;
      `TCheckedPointerIterator<UE::Net::FReplicationView::FView,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_2b7);
    }
    if (pdVar33 + -2 == (double *)((longlong)FVar31 + (longlong)iVar5 * 0x48)) {
      if (8 < local_e8) {
        local_2b0 = &local_1f8;
        `USphereNetObjectPrioritizer::PrioritizeBatchForMultiView'::__l2::<lambda_1>::operator()
                  (&local_2b0);
      }
      local_2a8 = param_1->Priorities;
      uVar6 = param_1->ObjectCount;
      pVVar7 = param_1->Positions;
      dVar18 = (double)_UNK_150a1c8ec;
      local_228._8_4_ = SUB84(dVar18,0);
      local_228._0_8_ = (double)_UNK_150a1c8e8;
      local_228._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      cVar32 = !bVar37;
      if (uVar6 != 0) {
        uVar35 = 2;
        dVar15 = (double)_UNK_150a1c8e8;
        do {
          iVar5 = local_e8;
          uVar67 = (undefined4)((ulonglong)dVar18 >> 0x20);
          uVar66 = SUB84(dVar18,0);
          uVar29 = uVar35 - 2;
          lVar36 = (longlong)local_e8;
          local_2b0 = (ForElementType<VectorRegister4Double> *)(ulonglong)uVar29;
          auVar62._8_4_ = uVar66;
          auVar62._0_8_ = dVar15;
          auVar62._12_4_ = uVar67;
          auVar68._8_4_ = uVar66;
          auVar68._0_8_ = dVar15;
          auVar68._12_4_ = uVar67;
          auVar64._8_4_ = uVar66;
          auVar64._0_8_ = dVar15;
          auVar64._12_4_ = uVar67;
          dVar18 = pVVar7[uVar29].XY.m128d_f64[0];
          dVar19 = pVVar7[uVar29].XY.m128d_f64[1];
          auVar69._8_4_ = uVar66;
          auVar69._0_8_ = dVar15;
          auVar69._12_4_ = uVar67;
          dVar23 = pVVar7[uVar35 - 1].ZW.m128d_f64[0];
          dVar24 = pVVar7[uVar35 - 1].ZW.m128d_f64[1];
          dVar15 = pVVar7[uVar29].ZW.m128d_f64[0];
          dVar20 = pVVar7[uVar29].ZW.m128d_f64[1];
          dVar21 = pVVar7[uVar35 - 1].XY.m128d_f64[0];
          dVar22 = pVVar7[uVar35 - 1].XY.m128d_f64[1];
          pfVar2 = local_2a8 + (longlong)local_2b0;
          FVar34 = (ForElementType<VectorRegister4Double>)&local_1f8;
          if (local_1f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
            FVar34 = local_1f8.SecondaryData;
          }
          pVVar3 = pVVar7 + (uVar35 + 1);
          local_268 = *(undefined4 *)(pVVar3->XY).m128d_f64;
          uStack_264 = *(undefined4 *)((longlong)(pVVar3->XY).m128d_f64 + 4);
          uStack_260 = *(undefined4 *)((pVVar3->XY).m128d_f64 + 1);
          uStack_25c = *(undefined4 *)((longlong)(pVVar3->XY).m128d_f64 + 0xc);
          pVVar3 = pVVar7 + uVar35;
          local_298 = *(undefined4 *)(pVVar3->XY).m128d_f64;
          uStack_294 = *(undefined4 *)((longlong)(pVVar3->XY).m128d_f64 + 4);
          uStack_290 = *(undefined4 *)((pVVar3->XY).m128d_f64 + 1);
          uStack_28c = *(undefined4 *)((longlong)(pVVar3->XY).m128d_f64 + 0xc);
          p_Var4 = &pVVar7[uVar35].ZW;
          local_288 = *(undefined4 *)p_Var4->m128d_f64;
          uStack_284 = *(undefined4 *)((longlong)p_Var4->m128d_f64 + 4);
          uStack_280 = *(undefined4 *)(p_Var4->m128d_f64 + 1);
          uStack_27c = *(undefined4 *)((longlong)p_Var4->m128d_f64 + 0xc);
          local_258 = *(undefined1 (*) [16])pVVar7[uVar35 + 1].ZW.m128d_f64;
          FVar30 = (ForElementType<VectorRegister4Double>)&local_1f8;
          if (local_1f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
            FVar30 = local_1f8.SecondaryData;
          }
          auVar40._0_8_ = (double)pfVar2[2];
          auVar40._8_8_ = (double)pfVar2[3];
          local_248._8_4_ = SUB84((double)pfVar2[1],0);
          local_248._0_8_ = (double)*pfVar2;
          local_248._12_4_ = (int)((ulonglong)(double)pfVar2[1] >> 0x20);
          local_278 = dVar23;
          dStack_270 = dVar24;
          local_238 = auVar40;
          iVar28 = local_e8;
          while( true ) {
            auVar9 = local_258;
            uVar26 = uStack_25c;
            uVar25 = uStack_260;
            uVar67 = uStack_264;
            uVar66 = local_268;
            if (iVar28 != iVar5) {
              `TCheckedPointerIterator<VectorRegister4Double,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_2b6);
              auVar40 = extraout_XMM0;
              iVar28 = local_e8;
            }
            if (FVar34 == (ForElementType<VectorRegister4Double>)(lVar36 * 0x20 + (longlong)FVar30))
            break;
            dVar16 = (double)CONCAT44(uStack_284,local_288) - *(double *)((longlong)FVar34 + 0x10);
            dVar17 = (double)CONCAT44(uStack_27c,uStack_280) - *(double *)((longlong)FVar34 + 0x18);
            dVar57 = auVar9._0_8_ - *(double *)((longlong)FVar34 + 0x10);
            dVar60 = auVar9._8_8_ - *(double *)((longlong)FVar34 + 0x18);
            dVar13 = (double)CONCAT44(uStack_294,local_298) - *(double *)FVar34;
            dVar14 = (double)CONCAT44(uStack_28c,uStack_290) - *(double *)((longlong)FVar34 + 8);
            dVar58 = (double)CONCAT44(uVar67,uVar66) - *(double *)FVar34;
            dVar61 = (double)CONCAT44(uVar26,uVar25) - *(double *)((longlong)FVar34 + 8);
            dVar39 = dVar18 - *(double *)FVar34;
            dVar51 = dVar19 - *(double *)((longlong)FVar34 + 8);
            dVar10 = dVar15 - *(double *)((longlong)FVar34 + 0x10);
            dVar11 = dVar20 - *(double *)((longlong)FVar34 + 0x18);
            dVar16 = dVar16 * dVar16 + dVar13 * dVar13;
            dVar17 = dVar17 * dVar17 + dVar14 * dVar14;
            dVar52 = dVar21 - *(double *)FVar34;
            dVar55 = dVar22 - *(double *)((longlong)FVar34 + 8);
            dVar10 = dVar10 * dVar10 + dVar39 * dVar39;
            dVar11 = dVar11 * dVar11 + dVar51 * dVar51;
            dVar13 = dVar23 - *(double *)((longlong)FVar34 + 0x10);
            dVar14 = dVar24 - *(double *)((longlong)FVar34 + 0x18);
            FVar34 = (ForElementType<VectorRegister4Double>)((longlong)FVar34 + 0x20);
            dVar58 = dVar57 * dVar57 + dVar58 * dVar58;
            dVar61 = dVar60 * dVar60 + dVar61 * dVar61;
            auVar41._8_4_ = SUB84(dVar11,0);
            auVar41._0_8_ = dVar10;
            auVar41._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            auVar42._0_8_ = auVar41._8_8_ + dVar10;
            auVar42._8_8_ = dVar10 + dVar11;
            auVar62 = minpd(auVar62,auVar42);
            dVar10 = dVar13 * dVar13 + dVar52 * dVar52;
            dVar11 = dVar14 * dVar14 + dVar55 * dVar55;
            auVar43._8_4_ = SUB84(dVar11,0);
            auVar43._0_8_ = dVar10;
            auVar43._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            auVar44._0_8_ = auVar43._8_8_ + dVar10;
            auVar44._8_8_ = dVar10 + dVar11;
            auVar68 = minpd(auVar68,auVar44);
            auVar45._8_4_ = SUB84(dVar17,0);
            auVar45._0_8_ = dVar16;
            auVar45._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
            auVar46._0_8_ = auVar45._8_8_ + dVar16;
            auVar46._8_8_ = dVar16 + dVar17;
            auVar64 = minpd(auVar64,auVar46);
            auVar47._8_4_ = SUB84(dVar61,0);
            auVar47._0_8_ = dVar58;
            auVar47._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
            auVar40._0_8_ = auVar47._8_8_ + dVar58;
            auVar40._8_8_ = dVar58 + dVar61;
            auVar69 = minpd(auVar69,auVar40);
          }
          auVar63._8_8_ = auVar68._8_8_;
          auVar63._0_8_ = auVar62._8_8_;
          auVar62 = sqrtpd(auVar40,auVar63);
          auVar65._8_8_ = auVar69._8_8_;
          auVar65._0_8_ = auVar64._8_8_;
          auVar48._0_8_ =
               auVar62._0_8_ - (param_1->PriorityCalculationConstants).InnerRadius.XY.m128d_f64[0];
          auVar48._8_8_ =
               auVar62._8_8_ - (param_1->PriorityCalculationConstants).InnerRadius.XY.m128d_f64[1];
          auVar64 = sqrtpd(auVar9,auVar65);
          auVar62 = maxpd(auVar48,ZEXT816(0));
          auVar59._0_8_ =
               auVar64._0_8_ - (param_1->PriorityCalculationConstants).InnerRadius.ZW.m128d_f64[0];
          auVar59._8_8_ =
               auVar64._8_8_ - (param_1->PriorityCalculationConstants).InnerRadius.ZW.m128d_f64[1];
          lVar36 = -(ulonglong)
                    ((param_1->PriorityCalculationConstants).RadiusDiff.XY.m128d_f64[0] <
                    auVar62._0_8_);
          lVar38 = -(ulonglong)
                    ((param_1->PriorityCalculationConstants).RadiusDiff.XY.m128d_f64[1] <
                    auVar62._8_8_);
          auVar64 = maxpd(auVar59,ZEXT816(0));
          dVar18 = (param_1->PriorityCalculationConstants).InvRadiusDiff.XY.m128d_f64[0] *
                   auVar62._0_8_ *
                   (param_1->PriorityCalculationConstants).PriorityDiff.XY.m128d_f64[0] +
                   (param_1->PriorityCalculationConstants).InnerPriority.XY.m128d_f64[0];
          dVar15 = (param_1->PriorityCalculationConstants).InvRadiusDiff.XY.m128d_f64[1] *
                   auVar62._8_8_ *
                   (param_1->PriorityCalculationConstants).PriorityDiff.XY.m128d_f64[1] +
                   (param_1->PriorityCalculationConstants).InnerPriority.XY.m128d_f64[1];
          uVar29 = (uint)lVar36;
          uVar53 = (uint)((ulonglong)lVar36 >> 0x20);
          uVar54 = (uint)lVar38;
          uVar56 = (uint)((ulonglong)lVar38 >> 0x20);
          auVar49._0_4_ = ~uVar29 & SUB84(dVar18,0);
          auVar49._4_4_ = ~uVar53 & (uint)((ulonglong)dVar18 >> 0x20);
          auVar49._8_4_ = ~uVar54 & SUB84(dVar15,0);
          auVar49._12_4_ = ~uVar56 & (uint)((ulonglong)dVar15 >> 0x20);
          auVar9._4_4_ = *(uint *)((longlong)
                                   (param_1->PriorityCalculationConstants).OutsidePriority.XY.
                                   m128d_f64 + 4) & uVar53;
          auVar9._0_4_ = *(uint *)(param_1->PriorityCalculationConstants).OutsidePriority.XY.
                                  m128d_f64 & uVar29;
          auVar9._8_4_ = *(uint *)((param_1->PriorityCalculationConstants).OutsidePriority.XY.
                                   m128d_f64 + 1) & uVar54;
          auVar9._12_4_ =
               *(uint *)((longlong)
                         (param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 + 0xc)
               & uVar56;
          auVar62 = maxpd(auVar49 | auVar9,local_248);
          lVar36 = -(ulonglong)
                    ((param_1->PriorityCalculationConstants).RadiusDiff.ZW.m128d_f64[0] <
                    auVar64._0_8_);
          lVar38 = -(ulonglong)
                    ((param_1->PriorityCalculationConstants).RadiusDiff.ZW.m128d_f64[1] <
                    auVar64._8_8_);
          uVar29 = (uint)lVar36;
          uVar53 = (uint)((ulonglong)lVar36 >> 0x20);
          uVar54 = (uint)lVar38;
          uVar56 = (uint)((ulonglong)lVar38 >> 0x20);
          dVar18 = (param_1->PriorityCalculationConstants).InvRadiusDiff.ZW.m128d_f64[0] *
                   auVar64._0_8_ *
                   (param_1->PriorityCalculationConstants).PriorityDiff.ZW.m128d_f64[0] +
                   (param_1->PriorityCalculationConstants).InnerPriority.ZW.m128d_f64[0];
          dVar15 = (param_1->PriorityCalculationConstants).InvRadiusDiff.ZW.m128d_f64[1] *
                   auVar64._8_8_ *
                   (param_1->PriorityCalculationConstants).PriorityDiff.ZW.m128d_f64[1] +
                   (param_1->PriorityCalculationConstants).InnerPriority.ZW.m128d_f64[1];
          auVar50._0_4_ = ~uVar29 & SUB84(dVar18,0);
          auVar50._4_4_ = ~uVar53 & (uint)((ulonglong)dVar18 >> 0x20);
          auVar50._8_4_ = ~uVar54 & SUB84(dVar15,0);
          auVar50._12_4_ = ~uVar56 & (uint)((ulonglong)dVar15 >> 0x20);
          auVar12._4_4_ =
               *(uint *)((longlong)
                         (param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 + 4) &
               uVar53;
          auVar12._0_4_ =
               *(uint *)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 &
               uVar29;
          auVar12._8_4_ =
               *(uint *)((param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 + 1) &
               uVar54;
          auVar12._12_4_ =
               *(uint *)((longlong)
                         (param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 + 0xc)
               & uVar56;
          auVar64 = maxpd(auVar50 | auVar12,local_238);
          pfVar2 = local_2a8 + (longlong)local_2b0;
          *pfVar2 = (float)auVar62._0_8_;
          pfVar2[1] = (float)auVar62._8_8_;
          pfVar2[2] = (float)auVar64._0_8_;
          pfVar2[3] = (float)auVar64._8_8_;
          uVar29 = uVar35 + 2;
          cVar32 = local_2b8;
          uVar35 = uVar35 + 4;
          dVar15 = (double)local_228._0_8_;
          dVar18 = (double)local_228._8_8_;
        } while (uVar29 < uVar6);
      }
      if (local_1f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
        FMemory::Free((void *)local_1f8.SecondaryData);
      }
      if (cVar32 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_218 = *pdVar33;
    dStack_210 = pdVar33[1];
    local_208 = pdVar33[2];
    FVar34 = (ForElementType<VectorRegister4Double>)&local_1f8;
    if (local_1f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
      FVar34 = local_1f8.SecondaryData;
    }
    dStack_200 = 0.0;
    if ((ulonglong)FVar34 <= &local_218) {
      FVar34 = (ForElementType<VectorRegister4Double>)&local_1f8;
      if (local_1f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
        FVar34 = local_1f8.SecondaryData;
      }
      if (&local_218 < (double *)((longlong)local_e4[0] * 0x20 + (longlong)FVar34)) {
        local_2d0 = (longlong)local_e8;
        local_2c8 = 0x20;
        local_2e0 = (ForElementType<VectorRegister4Double>)&local_1f8;
        if (local_1f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
          local_2e0 = local_1f8.SecondaryData;
        }
        local_2e8 = &local_218;
        local_2d8 = (longlong)local_e4[0];
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar27) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
    }
    iVar28 = local_e8;
    if (local_e8 == local_e4[0]) {
      iVar28 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorRegister4Double>_>
                         (0x1020,&local_1f8,local_e4);
    }
    local_e8 = iVar28 + 1;
    FVar34 = (ForElementType<VectorRegister4Double>)&local_1f8;
    if (local_1f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
      FVar34 = local_1f8.SecondaryData;
    }
    pdVar33 = pdVar33 + 9;
    pdVar1 = (double *)((longlong)iVar28 * 0x20 + (longlong)FVar34);
    *pdVar1 = local_218;
    pdVar1[1] = dStack_210;
    pdVar1 = (double *)((longlong)iVar28 * 0x20 + 0x10 + (longlong)FVar34);
    *pdVar1 = local_208;
    pdVar1[1] = dStack_200;
  } while( true );
}

// PrioritizeBatchForSingleView @ 1442d3cd0

void __thiscall
USphereNetObjectPrioritizer::PrioritizeBatchForSingleView
          (USphereNetObjectPrioritizer *this,FBatchParams *param_1)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  uint uVar4;
  VectorRegister4Double *pVVar5;
  float *pfVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  ForElementType<UE::Net::FReplicationView::FView> FVar20;
  uint uVar21;
  bool bVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar31;
  uint uVar32;
  uint uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId119,
               "USphereNetObjectPrioritizer_PrioritizeBatchForSingleView",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
               ,0x77);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId119);
  }
  if (((param_1->View).Views.ArrayNum < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar20 = (param_1->View).Views.AllocatorInstance.SecondaryData;
  uVar4 = param_1->ObjectCount;
  pVVar5 = param_1->Positions;
  pfVar6 = param_1->Priorities;
  if (FVar20 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar20 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
  }
  dVar3 = *(double *)((longlong)FVar20 + 0x20);
  dVar16 = *(double *)((longlong)FVar20 + 0x10);
  dVar17 = *(double *)((longlong)FVar20 + 0x18);
  if (uVar4 != 0) {
    uVar21 = 2;
    do {
      uVar19 = uVar21 - 2;
      pfVar1 = pfVar6 + uVar19;
      pfVar2 = pfVar6 + uVar19;
      dVar25 = pVVar5[uVar21].XY.m128d_f64[0] - dVar16;
      dVar30 = pVVar5[uVar21].XY.m128d_f64[1] - dVar17;
      dVar35 = pVVar5[uVar21 + 1].XY.m128d_f64[0] - dVar16;
      dVar37 = pVVar5[uVar21 + 1].XY.m128d_f64[1] - dVar17;
      dVar34 = pVVar5[uVar21 + 1].ZW.m128d_f64[0] - dVar3;
      dVar36 = pVVar5[uVar21 + 1].ZW.m128d_f64[1] - 0.0;
      dVar14 = pVVar5[uVar21].ZW.m128d_f64[0] - dVar3;
      dVar15 = pVVar5[uVar21].ZW.m128d_f64[1] - 0.0;
      dVar40 = pVVar5[uVar19].ZW.m128d_f64[0] - dVar3;
      dVar44 = pVVar5[uVar19].ZW.m128d_f64[1] - 0.0;
      dVar9 = pVVar5[uVar21 - 1].XY.m128d_f64[0] - dVar16;
      dVar10 = pVVar5[uVar21 - 1].XY.m128d_f64[1] - dVar17;
      dVar38 = pVVar5[uVar21 - 1].ZW.m128d_f64[0] - dVar3;
      dVar39 = pVVar5[uVar21 - 1].ZW.m128d_f64[1] - 0.0;
      dVar12 = pVVar5[uVar19].XY.m128d_f64[0] - dVar16;
      dVar13 = pVVar5[uVar19].XY.m128d_f64[1] - dVar17;
      auVar41._0_8_ = dVar40 * dVar40 + dVar12 * dVar12;
      auVar41._8_8_ = dVar44 * dVar44 + dVar13 * dVar13;
      auVar26._8_8_ = dVar38 * dVar38 + dVar9 * dVar9 + dVar39 * dVar39 + dVar10 * dVar10;
      auVar26._0_8_ = auVar41._0_8_ + auVar41._8_8_;
      auVar42 = sqrtpd(auVar41,auVar26);
      auVar43._0_8_ =
           auVar42._0_8_ - (param_1->PriorityCalculationConstants).InnerRadius.XY.m128d_f64[0];
      auVar43._8_8_ =
           auVar42._8_8_ - (param_1->PriorityCalculationConstants).InnerRadius.XY.m128d_f64[1];
      auVar27._8_8_ = dVar34 * dVar34 + dVar35 * dVar35 + dVar36 * dVar36 + dVar37 * dVar37;
      auVar27._0_8_ = dVar14 * dVar14 + dVar25 * dVar25 + dVar15 * dVar15 + dVar30 * dVar30;
      auVar45 = sqrtpd(unaff_XMM8,auVar27);
      auVar42 = maxpd(auVar43,ZEXT816(0));
      auVar46._0_8_ =
           auVar45._0_8_ - (param_1->PriorityCalculationConstants).InnerRadius.ZW.m128d_f64[0];
      auVar46._8_8_ =
           auVar45._8_8_ - (param_1->PriorityCalculationConstants).InnerRadius.ZW.m128d_f64[1];
      lVar23 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.XY.m128d_f64[0] < auVar42._0_8_)
      ;
      lVar24 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.XY.m128d_f64[1] < auVar42._8_8_)
      ;
      uVar19 = (uint)lVar23;
      uVar31 = (uint)((ulonglong)lVar23 >> 0x20);
      uVar32 = (uint)lVar24;
      uVar33 = (uint)((ulonglong)lVar24 >> 0x20);
      unaff_XMM8 = maxpd(auVar46,ZEXT816(0));
      dVar35 = (param_1->PriorityCalculationConstants).InvRadiusDiff.XY.m128d_f64[0] * auVar42._0_8_
               * (param_1->PriorityCalculationConstants).PriorityDiff.XY.m128d_f64[0] +
               (param_1->PriorityCalculationConstants).InnerPriority.XY.m128d_f64[0];
      dVar37 = (param_1->PriorityCalculationConstants).InvRadiusDiff.XY.m128d_f64[1] * auVar42._8_8_
               * (param_1->PriorityCalculationConstants).PriorityDiff.XY.m128d_f64[1] +
               (param_1->PriorityCalculationConstants).InnerPriority.XY.m128d_f64[1];
      auVar28._0_4_ = ~uVar19 & SUB84(dVar35,0);
      auVar28._4_4_ = ~uVar31 & (uint)((ulonglong)dVar35 >> 0x20);
      auVar28._8_4_ = ~uVar32 & SUB84(dVar37,0);
      auVar28._12_4_ = ~uVar33 & (uint)((ulonglong)dVar37 >> 0x20);
      dVar35 = (param_1->PriorityCalculationConstants).InvRadiusDiff.ZW.m128d_f64[0] *
               unaff_XMM8._0_8_ *
               (param_1->PriorityCalculationConstants).PriorityDiff.ZW.m128d_f64[0] +
               (param_1->PriorityCalculationConstants).InnerPriority.ZW.m128d_f64[0];
      dVar37 = (param_1->PriorityCalculationConstants).InvRadiusDiff.ZW.m128d_f64[1] *
               unaff_XMM8._8_8_ *
               (param_1->PriorityCalculationConstants).PriorityDiff.ZW.m128d_f64[1] +
               (param_1->PriorityCalculationConstants).InnerPriority.ZW.m128d_f64[1];
      auVar42._4_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64
                    + 4) & uVar31;
      auVar42._0_4_ =
           *(uint *)(param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 & uVar19;
      auVar42._8_4_ =
           *(uint *)((param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64 + 1) &
           uVar32;
      auVar42._12_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.XY.m128d_f64
                    + 0xc) & uVar33;
      lVar23 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.ZW.m128d_f64[0] <
                unaff_XMM8._0_8_);
      lVar24 = -(ulonglong)
                ((param_1->PriorityCalculationConstants).RadiusDiff.ZW.m128d_f64[1] <
                unaff_XMM8._8_8_);
      auVar45._8_4_ = SUB84((double)pfVar1[1],0);
      auVar45._0_8_ = (double)*pfVar1;
      auVar45._12_4_ = (int)((ulonglong)(double)pfVar1[1] >> 0x20);
      auVar42 = maxpd(auVar28 | auVar42,auVar45);
      uVar19 = (uint)lVar23;
      uVar31 = (uint)((ulonglong)lVar23 >> 0x20);
      uVar32 = (uint)lVar24;
      uVar33 = (uint)((ulonglong)lVar24 >> 0x20);
      auVar29._0_4_ = ~uVar19 & SUB84(dVar35,0);
      auVar29._4_4_ = ~uVar31 & (uint)((ulonglong)dVar35 >> 0x20);
      auVar29._8_4_ = ~uVar32 & SUB84(dVar37,0);
      auVar29._12_4_ = ~uVar33 & (uint)((ulonglong)dVar37 >> 0x20);
      auVar11._4_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64
                    + 4) & uVar31;
      auVar11._0_4_ =
           *(uint *)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 & uVar19;
      auVar11._8_4_ =
           *(uint *)((param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64 + 1) &
           uVar32;
      auVar11._12_4_ =
           *(uint *)((longlong)(param_1->PriorityCalculationConstants).OutsidePriority.ZW.m128d_f64
                    + 0xc) & uVar33;
      uVar19 = uVar21 + 2;
      auVar8._8_4_ = SUB84((double)pfVar1[3],0);
      auVar8._0_8_ = (double)pfVar1[2];
      auVar8._12_4_ = (int)((ulonglong)(double)pfVar1[3] >> 0x20);
      auVar45 = maxpd(auVar29 | auVar11,auVar8);
      *pfVar2 = (float)auVar42._0_8_;
      pfVar2[1] = (float)auVar42._8_8_;
      pfVar2[2] = (float)auVar45._0_8_;
      pfVar2[3] = (float)auVar45._8_8_;
      uVar21 = uVar21 + 4;
    } while (uVar19 < uVar4);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetupBatchParams @ 1442e54a0

void __thiscall
USphereNetObjectPrioritizer::SetupBatchParams
          (USphereNetObjectPrioritizer *this,FBatchParams *param_1,
          FNetObjectPrioritizationParams *param_2,uint param_3,FMemStackBase *param_4)

{
  VectorRegister4Double *pVVar1;
  float *pfVar2;
  ulong64 _Size;
  
  UE::Net::FReplicationView::operator=(&param_1->View,&param_2->View);
  _Size = (ulonglong)param_3 << 5;
  param_1->ConnectionId = param_2->ConnectionId;
  pVVar1 = FMemStackBase::Alloc(param_4,_Size,0x10);
  param_1->Positions = pVVar1;
  pfVar2 = FMemStackBase::Alloc(param_4,(ulonglong)param_3 * 4,0x10);
  param_1->Priorities = pfVar2;
  SetupCalculationConstants(this,&param_1->PriorityCalculationConstants);
  memset(param_1->Positions,0,_Size);
  return;
}

// SetupCalculationConstants @ 1442e5c30

void __thiscall
USphereNetObjectPrioritizer::SetupCalculationConstants
          (USphereNetObjectPrioritizer *this,FPriorityCalculationConstants *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UObject *pUVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  
  if ((this->Config).Object == (UObject *)0x0) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar26) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar6 = (this->Config).Object;
  fVar1 = *(float *)(pUVar6 + 1);
  dVar23 = (double)fVar1;
  dVar25 = (double)fVar1;
  if (pUVar6 == (UObject *)0x0) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar26) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar6 = (this->Config).Object;
  fVar2 = *(float *)&pUVar6[1].field_0x4;
  dVar19 = (double)fVar2;
  dVar21 = (double)fVar2;
  uVar31 = SUB84((double)fVar2,0);
  uVar32 = (undefined4)((ulonglong)(double)fVar2 >> 0x20);
  if (pUVar6 == (UObject *)0x0) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar26) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar6 = (this->Config).Object;
  fVar3 = *(float *)&pUVar6[1].field_0x8;
  dVar15 = (double)fVar3;
  dVar17 = (double)fVar3;
  if (pUVar6 == (UObject *)0x0) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar26) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar6 = (this->Config).Object;
  fVar4 = *(float *)&pUVar6[1].field_0xc;
  dVar10 = (double)fVar4;
  dVar13 = (double)fVar4;
  if (pUVar6 == (UObject *)0x0) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar26) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  auVar27._8_4_ = uVar31;
  auVar27._0_8_ = dVar21;
  auVar27._12_4_ = uVar32;
  auVar28._0_8_ = dVar21 - (double)fVar1;
  auVar28._8_8_ = auVar27._8_8_ - dVar25;
  fVar5 = *(float *)&(this->Config).Object[1].field_0x10;
  auVar22._8_4_ = SUB84(dVar23,0);
  auVar22._0_8_ = (double)fVar1;
  auVar22._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])(param_1->InnerRadius).XY.m128d_f64 = auVar22;
  auVar18._8_4_ = SUB84(dVar19,0);
  auVar18._0_8_ = (double)fVar2;
  auVar18._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(param_1->OuterRadius).XY.m128d_f64 = auVar18;
  auVar24._8_4_ = SUB84(dVar25,0);
  auVar24._0_8_ = (double)fVar1;
  auVar24._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  *(undefined1 (*) [16])(param_1->InnerRadius).ZW.m128d_f64 = auVar24;
  auVar20._8_4_ = uVar31;
  auVar20._0_8_ = dVar21;
  auVar20._12_4_ = uVar32;
  *(undefined1 (*) [16])(param_1->OuterRadius).ZW.m128d_f64 = auVar20;
  dVar25 = (double)fVar2 - (double)fVar1;
  uVar31 = SUB84(dVar19 - dVar23,0);
  uVar32 = (undefined4)((ulonglong)(dVar19 - dVar23) >> 0x20);
  auVar29._8_4_ = uVar31;
  auVar29._0_8_ = dVar25;
  auVar29._12_4_ = uVar32;
  *(undefined1 (*) [16])(param_1->RadiusDiff).XY.m128d_f64 = auVar29;
  *(undefined1 (*) [16])(param_1->RadiusDiff).ZW.m128d_f64 = auVar28;
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
  auVar8._8_4_ = uVar31;
  auVar8._0_8_ = dVar25;
  auVar8._12_4_ = uVar32;
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar8);
  *(undefined1 (*) [16])(param_1->InvRadiusDiff).XY.m128d_f64 = auVar29;
  *(undefined1 (*) [16])(param_1->InvRadiusDiff).ZW.m128d_f64 = auVar30;
  auVar14._8_4_ = SUB84(dVar15,0);
  auVar14._0_8_ = (double)fVar3;
  auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1->InnerPriority).XY.m128d_f64 = auVar14;
  auVar16._8_4_ = SUB84(dVar17,0);
  auVar16._0_8_ = (double)fVar3;
  auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(param_1->InnerPriority).ZW.m128d_f64 = auVar16;
  auVar30._8_4_ = SUB84(dVar10,0);
  auVar30._0_8_ = (double)fVar4;
  auVar30._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_1->OuterPriority).XY.m128d_f64 = auVar30;
  auVar11._8_4_ = SUB84(dVar13,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1->OuterPriority).ZW.m128d_f64 = auVar11;
  (param_1->OutsidePriority).XY.m128d_f64[0] = (double)fVar5;
  (param_1->OutsidePriority).XY.m128d_f64[1] = (double)fVar5;
  (param_1->OutsidePriority).ZW.m128d_f64[0] = (double)fVar5;
  (param_1->OutsidePriority).ZW.m128d_f64[1] = (double)fVar5;
  auVar9._8_4_ = SUB84(dVar10 - dVar15,0);
  auVar9._0_8_ = (double)fVar4 - (double)fVar3;
  auVar9._12_4_ = (int)((ulonglong)(dVar10 - dVar15) >> 0x20);
  *(undefined1 (*) [16])(param_1->PriorityDiff).XY.m128d_f64 = auVar9;
  auVar12._8_4_ = SUB84(dVar13 - dVar17,0);
  auVar12._0_8_ = (double)fVar4 - (double)fVar3;
  auVar12._12_4_ = (int)((ulonglong)(dVar13 - dVar17) >> 0x20);
  *(undefined1 (*) [16])(param_1->PriorityDiff).ZW.m128d_f64 = auVar12;
  return;
}

// StaticRegisterNativesUSphereNetObjectPrioritizer @ 1442e6360

void __cdecl USphereNetObjectPrioritizer::StaticRegisterNativesUSphereNetObjectPrioritizer(void)

{
  return;
}

// operator() @ 1504b8340

bool __thiscall
`USphereNetObjectPrioritizer::PrioritizeBatchForMultiView'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6848854115485744906>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6848854115485744906>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

